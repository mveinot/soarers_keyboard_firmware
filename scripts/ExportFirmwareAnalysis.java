// Export analyzed AVR functions and Ghidra decompiler output.
// @category Soarer

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.Reference;

public class ExportFirmwareAnalysis extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            throw new IllegalArgumentException("usage: ExportFirmwareAnalysis.java <output-directory>");
        }

        File outputDirectory = new File(args[0]);
        if (!outputDirectory.isDirectory() && !outputDirectory.mkdirs()) {
            throw new IllegalStateException("cannot create output directory: " + outputDirectory);
        }

        File inventoryFile = new File(outputDirectory, "functions.tsv");
        File decompilationFile = new File(outputDirectory, "ghidra-decompilation.c");

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram)) {
            throw new IllegalStateException("cannot initialize decompiler");
        }

        try (PrintWriter inventory = new PrintWriter(new BufferedWriter(new FileWriter(inventoryFile)));
                PrintWriter decompilation = new PrintWriter(
                    new BufferedWriter(new FileWriter(decompilationFile)))) {
            inventory.println("entry\tname\tsize\tcallers\tcallees");
            decompilation.println("/* Machine-generated evidence from Ghidra.");
            decompilation.println(" * Do not treat this file as maintainable or buildable source.");
            decompilation.println(" */");

            FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
            int functionCount = 0;
            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                functionCount++;

                int callers = 0;
                for (Function ignored : function.getCallingFunctions(monitor)) {
                    callers++;
                }
                int callees = 0;
                for (Function ignored : function.getCalledFunctions(monitor)) {
                    callees++;
                }

                inventory.printf("%s\t%s\t%d\t%d\t%d%n",
                    function.getEntryPoint(), function.getName(), function.getBody().getNumAddresses(),
                    callers, callees);

                decompilation.printf("%n/* entry=%s size=%d callers=%d callees=%d */%n",
                    function.getEntryPoint(), function.getBody().getNumAddresses(), callers, callees);
                DecompileResults result = decompiler.decompileFunction(function, 60, monitor);
                if (result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    decompilation.println(result.getDecompiledFunction().getC());
                }
                else {
                    decompilation.printf("/* DECOMPILATION FAILED: %s */%n", result.getErrorMessage());
                }
            }

            println("Exported " + functionCount + " functions to " + outputDirectory);
        }
        finally {
            decompiler.dispose();
        }
    }
}
