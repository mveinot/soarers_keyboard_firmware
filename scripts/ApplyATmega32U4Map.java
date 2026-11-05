// Apply ATmega32U4 SFR and interrupt names from a generated TSV map.
// @category Soarer

import java.io.BufferedReader;
import java.io.FileReader;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.address.AddressSpace;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;

public class ApplyATmega32U4Map extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length != 1) {
            throw new IllegalArgumentException("usage: ApplyATmega32U4Map.java <device-map.tsv>");
        }

        AddressSpace code = currentProgram.getAddressFactory().getAddressSpace("code");
        AddressSpace memory = currentProgram.getAddressFactory().getAddressSpace("mem");
        SymbolTable symbols = currentProgram.getSymbolTable();
        int registers = 0;
        int vectors = 0;
        int handlers = 0;

        // The generic AVR processor model assumes two-byte vector slots and
        // creates functions on odd word addresses. ATmega32U4 slots are four
        // bytes, so those entries point into the middle of JMP/RJMP+NOP pairs.
        for (int wordAddress = 1; wordAddress < 0x56; wordAddress += 2) {
            Address bogusEntry = code.getAddress(wordAddress * 2L);
            Function bogusFunction = getFunctionAt(bogusEntry);
            if (bogusFunction != null) {
                currentProgram.getFunctionManager().removeFunction(bogusEntry);
            }
        }

        try (BufferedReader input = new BufferedReader(new FileReader(args[0]))) {
            String line = input.readLine();
            while ((line = input.readLine()) != null && !monitor.isCancelled()) {
                String[] fields = line.split("\\t");
                if (fields[0].equals("register")) {
                    Address address = memory.getAddress(Long.decode(fields[1]));
                    replaceGlobalLabel(symbols, address, fields[3]);
                    registers++;
                }
                else if (fields[0].equals("vector")) {
                    // Ghidra displays AVR code addresses in words, but its API
                    // accepts byte offsets for this address space.
                    Address slot = code.getAddress(Long.decode(fields[1]) * 2);
                    String vectorName = fields[3];
                    replaceGlobalLabel(symbols, slot, vectorName);
                    vectors++;

                    Address target = code.getAddress(Long.decode(fields[4]) * 2);
                    Function handler = getFunctionAt(target);
                    if (handler == null && !vectorName.startsWith("RESERVED_")) {
                        handler = splitInterruptHandler(target, vectorName.replace("_vect", "_isr"));
                    }
                    if (handler != null && vectorName.equals("RESET_vect")) {
                        handler.setName("firmware_startup", SourceType.USER_DEFINED);
                    }
                    else if (handler != null && !vectorName.startsWith("RESERVED_")) {
                        String handlerName = vectorName.replace("_vect", "_isr");
                        if (!handler.getName().equals("default_interrupt_handler")) {
                            if (isSharedVectorTarget(args[0], fields[4])) {
                                handler.setName("default_interrupt_handler", SourceType.USER_DEFINED);
                            }
                            else {
                                handler.setName(handlerName, SourceType.USER_DEFINED);
                            }
                            handlers++;
                        }
                    }
                }
            }
        }

        println("Applied " + registers + " register definitions, " + vectors
            + " vector labels, and " + handlers + " handler names");
    }

    private Function splitInterruptHandler(Address target, String name) throws Exception {
        Function containing = getFunctionContaining(target);
        if (containing == null) {
            disassemble(target);
            return createFunction(target, name);
        }
        if (containing.getEntryPoint().equals(target)) {
            return containing;
        }

        Instruction instruction = getInstructionAt(target);
        Address end = null;
        int instructionLimit = 512;
        while (instruction != null && instructionLimit-- > 0) {
            if (instruction.getMnemonicString().equalsIgnoreCase("RETI")) {
                end = instruction.getMaxAddress();
                break;
            }
            instruction = instruction.getNext();
        }
        if (end == null) {
            println("Cannot find RETI while splitting " + name + " at " + target);
            return null;
        }

        AddressSet revisedBody = new AddressSet(containing.getBody());
        revisedBody.delete(target, end);
        containing.setBody(revisedBody);
        disassemble(target);
        return createFunction(target, name);
    }

    private void replaceGlobalLabel(SymbolTable symbols, Address address, String name) throws Exception {
        SymbolIterator existing = symbols.getSymbols(name);
        while (existing.hasNext()) {
            Symbol symbol = existing.next();
            if (!symbol.getAddress().equals(address)) {
                symbol.delete();
            }
        }
        createLabel(address, name, true, SourceType.USER_DEFINED);
    }

    private boolean isSharedVectorTarget(String mapPath, String target) throws Exception {
        int matches = 0;
        try (BufferedReader input = new BufferedReader(new FileReader(mapPath))) {
            String line;
            while ((line = input.readLine()) != null) {
                String[] fields = line.split("\\t");
                if (fields.length == 5 && fields[0].equals("vector") && fields[4].equals(target)) {
                    matches++;
                }
            }
        }
        return matches > 1;
    }
}
