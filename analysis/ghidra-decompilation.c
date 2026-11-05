/* Machine-generated evidence from Ghidra.
 * Do not treat this file as maintainable or buildable source.
 */

/* entry=code:0000 size=2 callers=0 callees=0 */

void RESET_vect(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0xff;
  Yhi = 10;
  R17 = '\x01';
  X = &DAT_mem_0100;
  Z = &DAT_codebyte_382e;
  while (puVar1 = X, (byte)X != 0x20 || X._1_1_ != (char)(R17 + ((byte)X < 0x20))) {
    R0 = *Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R17 = '\x03';
  X = &DAT_mem_0120;
  while (puVar1 = X, (byte)X != 0xab || X._1_1_ != (char)(R17 + ((byte)X < 0xab))) {
    X = X + 1;
    *puVar1 = R1;
  }
  DAT_mem_0afe = 0x32d;
  FUN_code_03d3();
  FUN_code_1c15();
  return;
}



/* entry=code:0002 size=2 callers=0 callees=0 */

void INT0_vect(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0xff;
  Yhi = 10;
  R17 = '\x01';
  X = &DAT_mem_0100;
  Z = &DAT_codebyte_382e;
  while (puVar1 = X, (byte)X != 0x20 || X._1_1_ != (char)(R17 + ((byte)X < 0x20))) {
    R0 = *Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R17 = '\x03';
  X = &DAT_mem_0120;
  while (puVar1 = X, (byte)X != 0xab || X._1_1_ != (char)(R17 + ((byte)X < 0xab))) {
    X = X + 1;
    *puVar1 = R1;
  }
  DAT_mem_0afe = 0x32d;
  FUN_code_03d3();
  FUN_code_1c15();
  return;
}



/* entry=code:0004 size=4 callers=0 callees=0 */

undefined1
INT1_vect(undefined1 R25,undefined1 R24,undefined1 R23,undefined1 R22,undefined1 R21,undefined1 R20,
         undefined1 R19,undefined1 R18)

{
  undefined1 uVar1;
  char in_Cflg;
  char in_Zflg;
  char in_Nflg;
  char in_Vflg;
  char in_Sflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  uVar1 = R0;
  R0 = in_Cflg == '\x01' | (in_Zflg == '\x01') << 1 | (in_Nflg == '\x01') << 2 |
       (in_Vflg == '\x01') << 3 | (in_Sflg == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
       (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  SREG = R0;
  if (DAT_mem_0129 == '\x02') {
    FUN_code_06eb(R25,0);
  }
  else {
    FUN_code_08a1(R25,0);
  }
  SREG = R0;
  R0 = uVar1;
  R1 = 0;
  return R25;
}



/* entry=code:0006 size=2 callers=0 callees=0 */

void INT2_vect(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0xff;
  Yhi = 10;
  R17 = '\x01';
  X = &DAT_mem_0100;
  Z = &DAT_codebyte_382e;
  while (puVar1 = X, (byte)X != 0x20 || X._1_1_ != (char)(R17 + ((byte)X < 0x20))) {
    R0 = *Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R17 = '\x03';
  X = &DAT_mem_0120;
  while (puVar1 = X, (byte)X != 0xab || X._1_1_ != (char)(R17 + ((byte)X < 0xab))) {
    X = X + 1;
    *puVar1 = R1;
  }
  DAT_mem_0afe = 0x32d;
  FUN_code_03d3();
  FUN_code_1c15();
  return;
}



/* entry=code:0008 size=2 callers=0 callees=0 */

void INT3_vect(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0xff;
  Yhi = 10;
  R17 = '\x01';
  X = &DAT_mem_0100;
  Z = &DAT_codebyte_382e;
  while (puVar1 = X, (byte)X != 0x20 || X._1_1_ != (char)(R17 + ((byte)X < 0x20))) {
    R0 = *Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R17 = '\x03';
  X = &DAT_mem_0120;
  while (puVar1 = X, (byte)X != 0xab || X._1_1_ != (char)(R17 + ((byte)X < 0xab))) {
    X = X + 1;
    *puVar1 = R1;
  }
  DAT_mem_0afe = 0x32d;
  FUN_code_03d3();
  FUN_code_1c15();
  return;
}



/* entry=code:000a size=2 callers=0 callees=0 */

void RESERVED_5_vect(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0xff;
  Yhi = 10;
  R17 = '\x01';
  X = &DAT_mem_0100;
  Z = &DAT_codebyte_382e;
  while (puVar1 = X, (byte)X != 0x20 || X._1_1_ != (char)(R17 + ((byte)X < 0x20))) {
    R0 = *Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R17 = '\x03';
  X = &DAT_mem_0120;
  while (puVar1 = X, (byte)X != 0xab || X._1_1_ != (char)(R17 + ((byte)X < 0xab))) {
    X = X + 1;
    *puVar1 = R1;
  }
  DAT_mem_0afe = 0x32d;
  FUN_code_03d3();
  FUN_code_1c15();
  return;
}



/* entry=code:000c size=2 callers=0 callees=0 */

void RESERVED_6_vect(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0xff;
  Yhi = 10;
  R17 = '\x01';
  X = &DAT_mem_0100;
  Z = &DAT_codebyte_382e;
  while (puVar1 = X, (byte)X != 0x20 || X._1_1_ != (char)(R17 + ((byte)X < 0x20))) {
    R0 = *Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R17 = '\x03';
  X = &DAT_mem_0120;
  while (puVar1 = X, (byte)X != 0xab || X._1_1_ != (char)(R17 + ((byte)X < 0xab))) {
    X = X + 1;
    *puVar1 = R1;
  }
  DAT_mem_0afe = 0x32d;
  FUN_code_03d3();
  FUN_code_1c15();
  return;
}



/* entry=code:0010 size=2 callers=0 callees=0 */

void RESERVED_8_vect(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0xff;
  Yhi = 10;
  R17 = '\x01';
  X = &DAT_mem_0100;
  Z = &DAT_codebyte_382e;
  while (puVar1 = X, (byte)X != 0x20 || X._1_1_ != (char)(R17 + ((byte)X < 0x20))) {
    R0 = *Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R17 = '\x03';
  X = &DAT_mem_0120;
  while (puVar1 = X, (byte)X != 0xab || X._1_1_ != (char)(R17 + ((byte)X < 0xab))) {
    X = X + 1;
    *puVar1 = R1;
  }
  DAT_mem_0afe = 0x32d;
  FUN_code_03d3();
  FUN_code_1c15();
  return;
}



/* entry=code:0012 size=2 callers=0 callees=0 */

void PCINT0_vect(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0xff;
  Yhi = 10;
  R17 = '\x01';
  X = &DAT_mem_0100;
  Z = &DAT_codebyte_382e;
  while (puVar1 = X, (byte)X != 0x20 || X._1_1_ != (char)(R17 + ((byte)X < 0x20))) {
    R0 = *Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R17 = '\x03';
  X = &DAT_mem_0120;
  while (puVar1 = X, (byte)X != 0xab || X._1_1_ != (char)(R17 + ((byte)X < 0xab))) {
    X = X + 1;
    *puVar1 = R1;
  }
  DAT_mem_0afe = 0x32d;
  FUN_code_03d3();
  FUN_code_1c15();
  return;
}



/* entry=code:0313 size=56 callers=0 callees=2 */

void firmware_startup(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0xff;
  Yhi = 10;
  R17 = '\x01';
  X = &DAT_mem_0100;
  Z = &DAT_codebyte_382e;
  while (puVar1 = X, (byte)X != 0x20 || X._1_1_ != (char)(R17 + ((byte)X < 0x20))) {
    R0 = *Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R17 = '\x03';
  X = &DAT_mem_0120;
  while (puVar1 = X, (byte)X != 0xab || X._1_1_ != (char)(R17 + ((byte)X < 0xab))) {
    X = X + 1;
    *puVar1 = R1;
  }
  DAT_mem_0afe = 0x32d;
  FUN_code_03d3();
  FUN_code_1c15();
  return;
}



/* entry=code:032f size=2 callers=0 callees=0 */

void default_interrupt_handler(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  SREG = 0;
  Ylo = 0xff;
  Yhi = 10;
  R17 = '\x01';
  X = &DAT_mem_0100;
  Z = &DAT_codebyte_382e;
  while (puVar1 = X, (byte)X != 0x20 || X._1_1_ != (char)(R17 + ((byte)X < 0x20))) {
    R0 = *Z;
    Z = Z + 1;
    X = X + 1;
    *puVar1 = R0;
  }
  R17 = '\x03';
  X = &DAT_mem_0120;
  while (puVar1 = X, (byte)X != 0xab || X._1_1_ != (char)(R17 + ((byte)X < 0xab))) {
    X = X + 1;
    *puVar1 = R1;
  }
  DAT_mem_0afe = 0x32d;
  FUN_code_03d3();
  FUN_code_1c15();
  return;
}



/* entry=code:0330 size=100 callers=2 callees=0 */

byte FUN_code_0330(undefined1 R25,byte R24,undefined1 param_3,char R22)

{
  R1 = 0;
  R25 = DAT_mem_0100;
  if (DAT_mem_0100 != 2) {
    if (DAT_mem_0100 < 3) {
      if (DAT_mem_0100 != 1) {
        R1 = 0;
        R24 = 0;
        return R25;
      }
      if ((R24 & 0x80) != 0) {
        R1 = 0;
        R24 = 0;
        R25 = 1;
        return R25;
      }
      Z = (undefined1 *)CONCAT11(-((R24 < 0x54) + -1),R24 + 0xac);
      R24 = *Z;
      return R25;
    }
    if (DAT_mem_0100 == 3) {
      if (0x84 < R24) {
        R1 = 0;
        R24 = 0;
        R25 = 3;
        return R25;
      }
      Z = (undefined1 *)CONCAT11(-((R24 < 0xd0) + -3),R24 + 0x30);
      R24 = *Z;
      return R25;
    }
    if (DAT_mem_0100 != 4) {
      R1 = 0;
      R24 = 0;
      return R25;
    }
    if (R22 != '\0') {
      if (0x7e < R24) {
        R1 = 0;
        R24 = 0;
        R25 = 4;
        return R25;
      }
      Z = (undefined1 *)CONCAT11(-((R24 < 0x4f) + -2),R24 + 0xb1);
      R24 = *Z;
      return R25;
    }
  }
  if (0x84 < R24) {
    R24 = 0;
    return R25;
  }
  Z = (undefined1 *)CONCAT11(-((R24 < 0xd4) + -2),R24 + 0x2c);
  R24 = *Z;
  return R25;
}



/* entry=code:0362 size=22 callers=1 callees=2 */

void FUN_code_0362(void)

{
  R1 = 0;
  FUN_code_1a18();
  FUN_code_1a22();
  DAT_mem_0122 = 0;
  DAT_mem_0123 = 0;
  DAT_mem_0124 = 0;
  return;
}



/* entry=code:036d size=68 callers=1 callees=1 */

char FUN_code_036d(undefined1 R25,byte R24)

{
  byte bVar1;
  
  R18 = R24;
  R1 = 0;
  FUN_code_1a11();
  R19 = '\0';
  if (R24 == '\0') {
    R24 = DDRF;
    R25 = '\x05';
    do {
      bVar1 = R18 * '\x02';
      R19 = R19 * '\x02' + CARRY1(R18,R18);
      R25 = R25 + -1;
      R18 = bVar1;
    } while (R25 != '\0');
    R24 = R24 & 0x1f;
    R24 = R24 | bVar1;
    DDRF = R24;
    R24 = PORTF;
    R24 = R24 | 0xe0;
  }
  else {
    R24 = DDRF;
    R24 = R24 | 0xe0;
    DDRF = R24;
    R24 = PORTF;
    R20 = '\x05';
    do {
      bVar1 = R18 * '\x02';
      R19 = R19 * '\x02' + CARRY1(R18,R18);
      R20 = R20 + -1;
      R18 = bVar1;
    } while (R20 != '\0');
    R24 = R24 & 0x1f;
    R24 = R24 | bVar1;
  }
  PORTF = R24;
  return R25;
}



/* entry=code:038f size=6 callers=1 callees=2 */

void FUN_code_038f(void)

{
  R1 = 0;
  FUN_code_0330();
  FUN_code_1a25();
  return;
}



/* entry=code:0392 size=6 callers=1 callees=2 */

void FUN_code_0392(void)

{
  R1 = 0;
  FUN_code_0330();
  FUN_code_1a44();
  return;
}



/* entry=code:0395 size=124 callers=1 callees=3 */

void FUN_code_0395(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  
  uVar4 = R17;
  uVar3 = R15R14;
  uVar2 = R13R12;
  R1 = 0;
  FUN_code_0649();
  bVar5 = (byte)R25R24;
  R25R24._0_1_ = DAT_mem_0126 ^ (byte)R25R24;
  if ((byte)R25R24 != 0) {
    cVar1 = '\0';
    R17 = -0x55;
    R13R12._0_1_ = (byte)R25R24;
    R13R12._1_1_ = '\0';
    R15R14._0_1_ = bVar5;
    R15R14._1_1_ = '\0';
    do {
      R25R24._0_1_ = (byte)R13R12;
      R25R24._1_1_ = R13R12._1_1_;
      R0 = cVar1;
      while (cVar6 = R25R24._1_1_, R0 = R0 + -1, -1 < R0) {
        R25R24._1_1_ = R25R24._1_1_ >> 1;
        R25R24._0_1_ = cVar6 << 7 | (byte)R25R24 >> 1;
      }
      if (((byte)R25R24 & 1) != 0) {
        R25R24._0_1_ = (byte)R15R14;
        R25R24._1_1_ = R15R14._1_1_;
        R0 = cVar1;
        while (cVar6 = R25R24._1_1_, R0 = R0 + -1, -1 < R0) {
          R25R24._1_1_ = R25R24._1_1_ >> 1;
          R25R24._0_1_ = cVar6 << 7 | (byte)R25R24 >> 1;
        }
        if (((byte)R25R24 & 1) == 0) {
          FUN_code_1a44();
        }
        else {
          FUN_code_1a25();
        }
      }
      cVar1 = cVar1 + '\x01';
      R17 = R17 + '\x01';
    } while (R17 != -0x50);
    DAT_mem_0126 = bVar5;
    R25R24 = CONCAT11(R25R24._1_1_,1);
  }
  R17 = uVar4;
  R15R14 = uVar3;
  R13R12 = uVar2;
  return;
}



/* entry=code:03d3 size=1130 callers=1 callees=27 */

/* WARNING: Removing unreachable block (code,0x0454) */
/* WARNING: Removing unreachable block (code,0x045e) */
/* WARNING: Removing unreachable block (code,0x0464) */
/* WARNING: Removing unreachable block (code,0x0468) */
/* WARNING: Removing unreachable block (code,0x0492) */
/* WARNING: Removing unreachable block (code,0x046e) */
/* WARNING: Removing unreachable block (code,0x048b) */
/* WARNING: Removing unreachable block (code,0x0475) */
/* WARNING: Removing unreachable block (code,0x0477) */
/* WARNING: Removing unreachable block (code,0x047d) */
/* WARNING: Removing unreachable block (code,0x047a) */
/* WARNING: Removing unreachable block (code,0x0480) */
/* WARNING: Removing unreachable block (code,0x045d) */
/* WARNING: Removing unreachable block (code,0x049e) */
/* WARNING: Restarted to delay deadcode elimination for space: mem */

void FUN_code_03d3(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  char in_Cflg;
  char cVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  undefined2 uStack_16;
  undefined1 uStack_14;
  undefined2 uStack_13;
  undefined1 uStack_11;
  undefined1 uStack_10;
  
  uStack_10 = Y._1_1_;
  uStack_11 = (undefined1)Y;
  uStack_13 = 0x3e6;
  uStack_14 = R0;
  cVar7 = (char)((int)&uStack_16 + 1);
  Y = CONCAT11((char)((uint)((int)&uStack_16 + 1) >> 8),cVar7);
  CLKPR = 0x80;
  CLKPR = 0;
  bVar1 = DDRD;
  DDRD = bVar1 | 0x40;
  uStack_16 = 0x3f1;
  FUN_code_036d();
  uStack_16 = 0x3f3;
  FUN_code_036d();
  uStack_16 = 0x3f4;
  FUN_code_0ac9();
  uStack_16 = 0x3f6;
  FUN_code_1a14();
  uStack_16 = 0x3f7;
  FUN_code_094d();
  uStack_16 = 0x3f8;
  FUN_code_062e();
  uStack_16 = 0x3f9;
  FUN_code_0362();
  uStack_16 = 0x3fb;
  FUN_code_0671();
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  R11R10._0_1_ = 0;
  R11R10._1_1_ = 0;
  R13R12._0_1_ = 0;
  R13R12._1_1_ = 0;
  do {
    if (!bVar2) {
      in_Hflg = in_Hflg == '\x01';
      in_Tflg = in_Tflg == '\x01';
      in_Iflg = in_Iflg == '\x01';
      R18 = in_Cflg == '\x01' | 2U | in_Hflg << 5 | in_Tflg << 6 | in_Iflg << 7;
      SREG = R18;
      in_Cflg = DAT_mem_0139 <
                (DAT_mem_0138 <
                (DAT_mem_0137 == 0 || (byte)(DAT_mem_0137 - 1) < (DAT_mem_0136 < 0xf5)));
      if (!(bool)in_Cflg) {
        uStack_16 = 0x41a;
        FUN_code_0671();
        bVar2 = true;
      }
    }
    if (!bVar3) {
      in_Hflg = in_Hflg == '\x01';
      in_Tflg = in_Tflg == '\x01';
      in_Iflg = in_Iflg == '\x01';
      R18 = in_Cflg == '\x01' | 2U | in_Hflg << 5 | in_Tflg << 6 | in_Iflg << 7;
      SREG = R18;
      bVar1 = DAT_mem_0136 + 0x47;
      if ((DAT_mem_0138 < (DAT_mem_0137 < 0xb || (byte)(DAT_mem_0137 - 0xb) < (DAT_mem_0136 < 0xb9))
          ) <= DAT_mem_0139) {
        uStack_16 = 0x432;
        FUN_code_15bf();
        R25R24._1_1_ = bVar1 & 0xf;
        bVar6 = R25R24._1_1_;
        R25R24 = CONCAT11(bVar1,bVar1) & 0xfff;
        if (bVar6 == 0) {
          DAT_mem_0100 = 0;
          DAT_mem_0121 = 0;
          DAT_mem_0120 = 0;
          uStack_16 = 0x451;
          FUN_code_099e();
          DAT_mem_0129 = '\x02';
          DAT_mem_0100 = 1;
        }
        else {
          DAT_mem_0129 = (byte)R25R24 >> 4;
          if (DAT_mem_0129 == 0) {
            DAT_mem_0100 = R25R24._1_1_;
            if (R25R24._1_1_ == 1) {
              DAT_mem_0129 = '\x02';
            }
            else {
              DAT_mem_0129 = '\x01';
            }
          }
          else {
            DAT_mem_0100 = R25R24._1_1_;
          }
        }
        uStack_16 = 0x4a8;
        FUN_code_1591(R25R24._1_1_,DAT_mem_0100,DAT_mem_0121,DAT_mem_0120);
        uStack_16 = 0x4aa;
        FUN_code_1714();
        if (DAT_mem_0129 == '\x02') {
          uStack_16 = 0x4af;
          FUN_code_069f();
          uStack_16 = 0x4b0;
          FUN_code_06a5();
        }
        cVar12 = SBORROW1(DAT_mem_0100,'\x03');
        cVar8 = DAT_mem_0100 < 3;
        cVar11 = (char)(DAT_mem_0100 - 3) < '\0';
        cVar10 = DAT_mem_0100 == 3;
        cVar13 = (char)DAT_mem_0100 < '\x03';
        if ((bool)cVar10) {
          uStack_16 = 0x4b6;
          FUN_code_0a9c();
        }
        uStack_16 = 0x4b8;
        FUN_code_036d();
        in_Hflg = in_Hflg == '\x01';
        in_Tflg = in_Tflg == '\x01';
        in_Iflg = in_Iflg == '\x01';
        R25R24._0_1_ = cVar8 == '\x01' | (cVar10 == '\x01') << 1 | (cVar11 == '\x01') << 2 |
                       (cVar12 == '\x01') << 3 | (cVar13 == '\x01') << 4 | in_Hflg << 5 |
                       in_Tflg << 6 | in_Iflg << 7;
        R11R10._0_1_ = DAT_mem_0136;
        R11R10._1_1_ = DAT_mem_0137;
        R13R12._0_1_ = DAT_mem_0138;
        R13R12._1_1_ = DAT_mem_0139;
        SREG = (byte)R25R24;
        uStack_16 = 0x4c6;
        thunk_FUN_code_0d31();
        uStack_16 = 0x4c9;
        thunk_FUN_code_0d31();
        uStack_16 = 0x4cd;
        FUN_code_11a2();
        uStack_16 = 0x4d3;
        FUN_code_119a();
        uStack_16 = 0x4d6;
        thunk_FUN_code_0d31();
        uStack_16 = 0x4da;
        FUN_code_11a2();
        if (DAT_mem_0100 == 2) {
LAB_code_04eb:
          uStack_16 = 0x4ed;
          thunk_FUN_code_0d31();
        }
        else {
          if (DAT_mem_0100 < 3) {
            if (DAT_mem_0100 == 1) goto LAB_code_04eb;
          }
          else if (DAT_mem_0100 == 3) goto LAB_code_04eb;
          uStack_16 = 0x4f7;
          FUN_code_11a2();
        }
        uStack_16 = 0x502;
        FUN_code_11a2();
        bVar3 = true;
      }
    }
    R25R24._0_1_ = cVar7 + 1;
    in_Cflg = 0xfffe < Y;
    uStack_16 = 0x508;
    FUN_code_09ef();
    if (bVar3) {
      in_Cflg = (byte)R25R24 < 2;
      if ((bool)in_Cflg) {
        if (((byte)R25R24 == 0) && (!bVar4)) {
          uStack_16 = 0x59b;
          FUN_code_1a0e();
          uStack_16 = 0x59e;
          FUN_code_1a11();
          if (DAT_mem_0125 == '\0') {
            R25R24._0_1_ = 0;
            in_Cflg = '\0';
          }
          else {
            uStack_16 = 0x5d0;
            FUN_code_0a63();
            in_Cflg = '\0';
            R25R24._0_1_ = 0;
            uStack_16 = 0x5d7;
            FUN_code_036d();
            DAT_mem_0125 = '\0';
          }
        }
      }
      else {
        cVar8 = (byte)R25R24 < 2;
        if ((byte)R25R24 == 2) {
          R17 = *(byte *)(Y + 1);
          if (DAT_mem_0100 == 1) {
            cVar8 = R17 != 0xff;
            if (R17 == 0xff) {
LAB_code_0567:
              uStack_16 = 0x568;
              FUN_code_0362();
LAB_code_056a:
              uStack_16 = 0x56b;
              FUN_code_0ac3();
            }
            else if ((R17 & 0x80) == 0) {
LAB_code_0536:
              uStack_16 = 0x537;
              FUN_code_0392();
            }
            else {
              uStack_16 = 0x51f;
              FUN_code_038f();
            }
          }
          else {
            if (DAT_mem_0124 != 0) {
              cVar8 = -((DAT_mem_0124 != 0xff) + -2);
              Z = (byte *)CONCAT11(cVar8,DAT_mem_0124 + 1);
              R25R24._0_1_ = *Z;
              if (R17 == (byte)R25R24) {
                DAT_mem_0124 = DAT_mem_0124 + 1;
                Z = (byte *)CONCAT11(cVar8,DAT_mem_0124);
                if (DAT_mem_0124 == 3) {
                  cVar8 = false;
                  goto LAB_code_0536;
                }
                cVar8 = DAT_mem_0124 < 8;
                if (DAT_mem_0124 == 8) {
                  uStack_16 = 0x53e;
                  FUN_code_038f();
                  DAT_mem_0124 = 0;
                }
                goto LAB_code_0584;
              }
              if (2 < DAT_mem_0124) {
                uStack_16 = 0x546;
                FUN_code_038f();
              }
              DAT_mem_0124 = 0;
            }
            if (R17 == 0xe0) {
              DAT_mem_0123 = 1;
              cVar8 = '\0';
            }
            else {
              cVar8 = R17 < 0xe1;
              if ((bool)cVar8) {
                if (R17 == 0) goto LAB_code_0567;
                cVar8 = R17 < 0xaa;
                if (R17 != 0xaa) {
LAB_code_056c:
                  if (DAT_mem_0122 == '\0') {
                    uStack_16 = 0x57b;
                    FUN_code_0392();
                  }
                  else {
                    uStack_16 = 0x574;
                    FUN_code_038f();
                    DAT_mem_0122 = '\0';
                  }
                  DAT_mem_0123 = 0;
                }
              }
              else if (R17 == 0xf0) {
                DAT_mem_0122 = '\x01';
                cVar8 = '\0';
              }
              else {
                if (R17 == 0xfc) {
                  cVar8 = '\0';
                  goto LAB_code_056a;
                }
                cVar8 = R17 < 0xe1;
                if (R17 != 0xe1) goto LAB_code_056c;
                DAT_mem_0124 = 1;
              }
            }
          }
LAB_code_0584:
          bVar4 = false;
        }
        else {
          uStack_16 = 0x581;
          FUN_code_099e();
          bVar4 = true;
        }
        in_Cflg = cVar8 == '\x01';
        in_Hflg = in_Hflg == '\x01';
        in_Tflg = in_Tflg == '\x01';
        in_Iflg = in_Iflg == '\x01';
        R25R24._0_1_ = in_Cflg | !bVar4 << 1 | in_Hflg << 5 | in_Tflg << 6 | in_Iflg << 7;
        R11R10._0_1_ = DAT_mem_0136;
        R11R10._1_1_ = DAT_mem_0137;
        R13R12._0_1_ = DAT_mem_0138;
        R13R12._1_1_ = DAT_mem_0139;
        SREG = (byte)R25R24;
        bVar5 = true;
      }
      uStack_16 = 0x605;
      FUN_code_0395();
      if ((byte)R25R24 == 0) goto LAB_code_05e8;
      in_Cflg = in_Cflg == '\x01';
      in_Hflg = in_Hflg == '\x01';
      in_Tflg = in_Tflg == '\x01';
      in_Iflg = in_Iflg == '\x01';
      R11R10._0_1_ = DAT_mem_0136;
      R11R10._1_1_ = DAT_mem_0137;
      R13R12._0_1_ = DAT_mem_0138;
      R13R12._1_1_ = DAT_mem_0139;
      bVar5 = true;
      bVar9 = false;
LAB_code_05ea:
      in_Hflg = in_Hflg == '\x01';
      in_Tflg = in_Tflg == '\x01';
      in_Iflg = in_Iflg == '\x01';
      R18 = in_Cflg == '\x01' | bVar9 << 1 | in_Hflg << 5 | in_Tflg << 6 | in_Iflg << 7;
      SREG = R18;
      bVar9 = DAT_mem_0137 < R11R10._1_1_ ||
              (byte)(DAT_mem_0137 - R11R10._1_1_) < (DAT_mem_0136 < (byte)R11R10);
      R25R24 = CONCAT11(DAT_mem_0137 - (R11R10._1_1_ + (DAT_mem_0136 < (byte)R11R10)),
                        DAT_mem_0136 - (byte)R11R10);
      in_Cflg = (byte)(DAT_mem_0139 -
                      (R13R12._1_1_ +
                      (DAT_mem_0138 < (byte)R13R12 || (byte)(DAT_mem_0138 - (byte)R13R12) < bVar9)))
                < ((byte)(DAT_mem_0138 - ((byte)R13R12 + bVar9)) < (R25R24 < 0x33));
      if (!(bool)in_Cflg) {
        uStack_16 = 0x600;
        thunk_FUN_code_0d31();
        bVar5 = false;
      }
    }
    else {
LAB_code_05e8:
      bVar9 = !bVar5;
      if (!bVar9) goto LAB_code_05ea;
    }
    uStack_16 = 0x603;
    FUN_code_17cc();
  } while( true );
}



/* entry=code:0608 size=76 callers=0 callees=0 */

undefined2 TIMER3_COMPA_isr(byte R25,undefined1 R24)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char in_Cflg;
  char in_Zflg;
  char in_Nflg;
  char in_Vflg;
  char in_Sflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  uVar2 = R25;
  uVar1 = R0;
  R0 = in_Cflg == '\x01' | (in_Zflg == '\x01') << 1 | (in_Nflg == '\x01') << 2 |
       (in_Vflg == '\x01') << 3 | (in_Sflg == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
       (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  R25 = PINB;
  R25 = R25 & 0x1f;
  if (R25 != DAT_mem_0128) {
    DAT_mem_0128 = R25;
    DAT_mem_0109 = '\n';
  }
  if (DAT_mem_0109 != '\0') {
    DAT_mem_0109 = DAT_mem_0109 + -1;
    if (DAT_mem_0109 == '\0') {
      DAT_mem_0127 = DAT_mem_0128;
    }
  }
  R25 = uVar2;
  SREG = R0;
  R0 = uVar1;
  R1 = 0;
  return CONCAT11(R24,uVar2);
}



/* entry=code:062e size=54 callers=1 callees=0 */

uint FUN_code_062e(void)

{
  byte bVar1;
  
  R1 = 0;
  R24 = DDRB;
  R24 = R24 & 0xe0;
  DDRB = R24;
  R24 = PORTB;
  R24 = R24 | 0x1f;
  PORTB = R24;
  R24 = TIMSK3;
  R24 = R24 | 2;
  TIMSK3 = R24;
  R25 = 0;
  OCR3AH = 0;
  OCR3A = 0xfa;
  TCCR3A = 0;
  Z = 0x91;
  TCCR3B = 8;
  bVar1 = TCCR3B;
  R24 = bVar1 | 3;
  TCCR3B = R24;
  return (uint)bVar1 << 8 | 0x300;
}



/* entry=code:0649 size=6 callers=1 callees=0 */

void FUN_code_0649(void)

{
  R1 = 0;
  R24 = DAT_mem_0127;
  return;
}



/* entry=code:064c size=74 callers=4 callees=0 */

void FUN_code_064c(void)

{
  char cVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  
  uVar4 = R25R24;
  R1 = 0;
  R19R18 = R25R24;
  uVar2 = TCCR1B;
  cVar1 = R25R24._1_1_;
  R25R24 = CONCAT11(R25R24._1_1_,uVar2) & 0xfff8;
  TCCR1B = (byte)R25R24;
  uVar2 = TIMSK1;
  R25R24 = CONCAT11(R25R24._1_1_,uVar2) & 0xfffd;
  TIMSK1 = (byte)R25R24;
  TCNT1H = 0;
  TCNT1 = 0;
  R25R24 = CONCAT11(R25R24._1_1_,2);
  TIFR1 = 2;
  R19R18._0_1_ = (byte)uVar4;
  if ((byte)R19R18 != 0 || cVar1 != '\0') {
    cVar3 = (byte)R19R18 * '\x02';
    cVar1 = cVar1 * '\x02' + CARRY1((byte)R19R18,(byte)R19R18);
    R19R18 = CONCAT11(cVar1,cVar3);
    OCR1AH = cVar1;
    OCR1A = cVar3;
    R25R24._0_1_ = TIMSK1;
    R25R24._0_1_ = (byte)R25R24 | 2;
    TIMSK1 = (byte)R25R24;
    uVar2 = TCCR1B;
    R25R24 = CONCAT11(R25R24._1_1_,uVar2) | 2;
    TCCR1B = (byte)R25R24;
    uVar4 = R19R18;
  }
  R19R18 = uVar4;
  return;
}



/* entry=code:0671 size=16 callers=1 callees=0 */

void FUN_code_0671(undefined1 param_1,char R24)

{
  byte bVar1;
  
  R1 = 0;
  if (R24 != '\0') {
    bVar1 = DDRB;
    DDRB = bVar1 & 0x7f;
    bVar1 = PORTB;
    PORTB = bVar1 | 0x80;
    return;
  }
  bVar1 = PORTB;
  PORTB = bVar1 & 0x7f;
  bVar1 = DDRB;
  DDRB = bVar1 | 0x80;
  return;
}



/* entry=code:0679 size=16 callers=2 callees=0 */

void FUN_code_0679(undefined1 param_1,char R24)

{
  byte bVar1;
  
  R1 = 0;
  if (R24 != '\0') {
    bVar1 = DDRD;
    DDRD = bVar1 & 0xfe;
    bVar1 = PORTD;
    PORTD = bVar1 | 1;
    return;
  }
  bVar1 = PORTD;
  PORTD = bVar1 & 0xfe;
  bVar1 = DDRD;
  DDRD = bVar1 | 1;
  return;
}



/* entry=code:0681 size=60 callers=2 callees=0 */

undefined1 FUN_code_0681(undefined1 R25,byte R24)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = R24;
  R1 = 0;
  R19 = R24;
  R20 = EIMSK;
  bVar1 = EIMSK;
  EIMSK = bVar1 & 0xfd;
  if (R24 == 0) {
    bVar1 = DDRD;
    DDRD = bVar1 | 2;
    bVar1 = PORTD;
    PORTD = bVar1 & 0xfd;
  }
  else {
    bVar1 = DDRD;
    DDRD = bVar1 & 0xfd;
    bVar1 = PORTD;
    PORTD = bVar1 | 2;
  }
  R18 = '\x14';
  do {
    bVar1 = PIND;
    R25 = 0;
    R24 = bVar1 >> 1 & 1;
    if (R24 == bVar2) break;
    R18 = R18 + -1;
  } while (R18 != '\0');
  EIFR = 2;
  if ((R20 & 2) == 0) {
    bVar1 = EIMSK;
    EIMSK = bVar1 & 0xfd;
  }
  else {
    bVar1 = EIMSK;
    EIMSK = bVar1 | 2;
  }
  R24 = EIMSK;
  return 0;
}



/* entry=code:069f size=12 callers=1 callees=0 */

void FUN_code_069f(void)

{
  byte bVar1;
  
  R1 = 0;
  bVar1 = EIMSK;
  EIMSK = bVar1 & 0xfd;
  R24 = 2;
  EIFR = 2;
  return;
}



/* entry=code:06a5 size=18 callers=1 callees=0 */

void FUN_code_06a5(void)

{
  byte bVar1;
  
  R1 = 0;
  Z = 0x69;
  R24 = EICRA;
  R24 = R24 | 0xc;
  EICRA = R24;
  bVar1 = EIMSK;
  EIMSK = bVar1 | 2;
  return;
}



/* entry=code:06ae size=122 callers=1 callees=1 */

undefined2 FUN_code_06ae(undefined1 R25,byte R24)

{
  byte bVar1;
  
  R1 = 0;
  if (R24 != '\0') {
    DAT_mem_0112 = DAT_mem_0111;
  }
  bVar1 = PIND;
  R25 = bVar1 >> 1 & 1;
  if (DAT_mem_0112 == 0xff) {
    R24 = R25 ^ 1;
    DAT_mem_0112 = R24;
  }
  if (DAT_mem_0112 == 1) {
    if (R25 == 0) {
      FUN_code_064c(3,0xe8);
      R1 = 0;
      R24 = 1;
      R25 = 1;
      DAT_mem_0111 = 0xff;
      DAT_mem_0112 = 0;
      return 0x101;
    }
  }
  else {
    if (DAT_mem_0112 != 0) {
      if (DAT_mem_0112 != 0xfe) {
        R25 = 1;
        R24 = 1;
        return 0x101;
      }
      R25 = 2;
      goto LAB_code_06e7;
    }
    if (R25 != 0) {
      FUN_code_064c(0,0x5a);
      R1 = 0;
      R24 = 1;
      R25 = 1;
      DAT_mem_0111 = 0xfe;
      DAT_mem_0112 = 1;
      return 0x101;
    }
  }
  R25 = 4;
LAB_code_06e7:
  R1 = 0;
  R24 = R25;
  DAT_mem_0112 = 0xff;
  return CONCAT11(R25,R25);
}



/* entry=code:06eb size=190 callers=2 callees=2 */

undefined1 FUN_code_06eb(undefined1 R25,byte R24)

{
  byte bVar1;
  undefined1 uVar2;
  
  uVar2 = R17;
  R1 = 0;
  bVar1 = PIND;
  R17 = bVar1 & 1;
  if (R24 != '\0') {
    DAT_mem_010b = DAT_mem_010a;
  }
  if (DAT_mem_010b == 2) {
    R24 = DAT_mem_012c >> 1;
    R17 = bVar1 << 7 | R24;
    DAT_mem_012c = R17;
    DAT_mem_012d = DAT_mem_012d + '\x01';
    if (DAT_mem_012d != '\b') {
      R1 = 0;
      R17 = uVar2;
      R24 = DAT_mem_012d;
      return R25;
    }
    DAT_mem_010a = 3;
    FUN_code_064c(0,0x78);
    R1 = 0;
    R17 = uVar2;
    DAT_mem_010b = 3;
    return R25;
  }
  if (DAT_mem_010b < 3) {
    if (DAT_mem_010b != 1) {
      R1 = 0;
      R17 = uVar2;
      R24 = DAT_mem_010b;
      return R25;
    }
    DAT_mem_010a = 0xfe;
    FUN_code_064c(4,0xb0);
    DAT_mem_012d = '\0';
    DAT_mem_012c = 0;
    if (R17 != 0) {
      R1 = 0;
      R17 = uVar2;
      R24 = 2;
      DAT_mem_010b = 2;
      DAT_mem_012c = 0;
      DAT_mem_012d = 0;
      return R25;
    }
    R17 = '\x06';
  }
  else if (DAT_mem_010b == 3) {
    FUN_code_064c(0,0);
    DAT_mem_012a = DAT_mem_012c;
    R17 = '\x02';
  }
  else {
    if (DAT_mem_010b != 0xfe) {
      R1 = 0;
      R17 = uVar2;
      R24 = DAT_mem_010b;
      return R25;
    }
    R17 = '\x05';
  }
  FUN_code_064c(0,0);
  R24 = 1;
  DAT_mem_010b = 1;
  if (R17 != '\x02') {
    FUN_code_0ac3(0xb,0xb8);
  }
  DAT_mem_012b = R17;
  R17 = uVar2;
  return R25;
}



/* entry=code:074a size=386 callers=1 callees=4 */

undefined2 FUN_code_074a(undefined1 R25,byte R24)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  bVar1 = DAT_mem_012f;
  uVar3 = R17;
  uVar2 = R16;
  R1 = 0;
  if (DAT_mem_010e == 0xff) {
    DAT_mem_010e = 2;
  }
  R25 = R24;
  if (R24 != '\0') {
    DAT_mem_010e = DAT_mem_010d;
  }
  if (DAT_mem_010e == 7) {
    FUN_code_0679(R24,DAT_mem_010c);
    DAT_mem_0130 = DAT_mem_0130 + -1;
    R24 = 8;
LAB_code_07d5:
    DAT_mem_010e = R24;
  }
  else {
    if (7 < DAT_mem_010e) {
      if (DAT_mem_010e == 10) {
        R24 = 0xb;
      }
      else {
        if (10 < DAT_mem_010e) {
          if (DAT_mem_010e == 0xb) {
            FUN_code_064c(0,0);
            bVar1 = PIND;
            if ((bVar1 & 1) == 0) {
              R17 = 2;
            }
            else {
              R17 = 9;
            }
          }
          else if ((DAT_mem_010e != 0xfe) || (R17 = DAT_mem_0130 << 4 | 5, R17 < 2))
          goto LAB_code_07ec;
          FUN_code_0679(R25,1);
          DAT_mem_010e = 0xff;
          goto LAB_code_0805;
        }
        if (DAT_mem_010e == 8) {
          R24 = 9;
        }
        else {
          if (DAT_mem_010e != 9) goto LAB_code_07ec;
          FUN_code_0679(R24,1);
          DAT_mem_0130 = DAT_mem_0130 + -1;
          R24 = 10;
        }
      }
      goto LAB_code_07d5;
    }
    if (DAT_mem_010e == 4) {
LAB_code_07a2:
      R24 = 5;
      goto LAB_code_07d5;
    }
    if (4 < DAT_mem_010e) {
      if (DAT_mem_010e == 5) {
        R16 = DAT_mem_012f & 1;
        FUN_code_0679(R24,R16);
        R17 = bVar1 >> 1;
        DAT_mem_012f = R17;
        R24 = DAT_mem_010c ^ R16;
        DAT_mem_010c = R24;
        DAT_mem_0130 = DAT_mem_0130 + -1;
        if (DAT_mem_0130 == '\0') {
          R24 = 6;
        }
        else {
          R24 = 4;
        }
      }
      else {
        if (DAT_mem_010e != 6) goto LAB_code_07ec;
        R24 = 7;
      }
      goto LAB_code_07d5;
    }
    if (DAT_mem_010e == 2) {
      DAT_mem_012f = DAT_mem_012e;
      DAT_mem_0130 = '\b';
      DAT_mem_010c = 1;
      DAT_mem_010d = 3;
      FUN_code_064c(0,200);
      FUN_code_0681(R25,0);
    }
    else if (DAT_mem_010e == 3) {
      FUN_code_0679(R24,0);
      FUN_code_0681(R25,1);
      DAT_mem_010d = 0xfe;
      FUN_code_064c(0x4e,0x20);
      goto LAB_code_07a2;
    }
  }
LAB_code_07ec:
  bVar1 = PIND;
  R18 = DAT_mem_010e & 1;
  R19 = 0;
  R24 = bVar1 >> 1 & 1;
  R25 = 0;
  if (R18 == R24) {
    R17 = 1;
  }
  else {
    FUN_code_0679(0,1);
    DAT_mem_010e = 0xff;
    FUN_code_0ac3(0xb,0xb8);
    R17 = 4;
  }
LAB_code_0805:
  bVar1 = R17;
  R24 = R17;
  R17 = uVar3;
  R16 = uVar2;
  return CONCAT11(bVar1,R25);
}



/* entry=code:080b size=300 callers=1 callees=2 */

undefined2 FUN_code_080b(undefined1 R25,byte R24)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  
  uVar3 = R17;
  uVar2 = R16;
  R1 = 0;
  bVar1 = PIND;
  R25 = PIND;
  if (R24 != '\0') {
    DAT_mem_0110 = 0xff;
    R17 = 5;
    goto LAB_code_0894;
  }
  if (DAT_mem_0110 == 0xff) {
    DAT_mem_0110 = 1;
  }
  bVar5 = DAT_mem_0110;
  R16 = R25 & 1;
  if (DAT_mem_0110 == 6) {
    R24 = 7;
LAB_code_085c:
    DAT_mem_0110 = R24;
  }
  else {
    if (6 < DAT_mem_0110) {
      if (DAT_mem_0110 != 8) {
        if (DAT_mem_0110 < 8) {
          if (DAT_mem_010f == R16) {
            R24 = 8;
            goto LAB_code_085c;
          }
          R17 = 7;
        }
        else {
          if (DAT_mem_0110 != 9) goto LAB_code_087d;
          if (R16 == 0) {
            FUN_code_0ac3(0xb,0xb8);
            R17 = 8;
          }
          else {
            DAT_mem_012a = DAT_mem_0131;
            DAT_mem_0129 = 1;
            R17 = 2;
          }
        }
LAB_code_089a:
        FUN_code_064c(0,0);
        DAT_mem_0110 = 0xff;
        goto LAB_code_0894;
      }
      R24 = 9;
      goto LAB_code_085c;
    }
    if (DAT_mem_0110 == 4) {
      R24 = 5;
      goto LAB_code_085c;
    }
    if (4 < DAT_mem_0110) {
      R24 = DAT_mem_0131 >> 1;
      R25 = R25 << 7 | R24;
      DAT_mem_0131 = R25;
      R24 = DAT_mem_010f ^ R16;
      DAT_mem_010f = R24;
      DAT_mem_0132 = DAT_mem_0132 + '\x01';
      if (DAT_mem_0132 != '\b') goto LAB_code_085f;
      R24 = 6;
      goto LAB_code_085c;
    }
    if (DAT_mem_0110 == 1) {
      FUN_code_064c(4,0xb0);
      DAT_mem_0132 = '\0';
      DAT_mem_0131 = 0;
      DAT_mem_010f = bVar5;
      if (R16 != 0) {
        R17 = 6;
        goto LAB_code_089a;
      }
LAB_code_085f:
      R24 = 4;
      goto LAB_code_085c;
    }
  }
LAB_code_087d:
  R18 = DAT_mem_0110 & 1;
  R19 = 0;
  R24 = bVar1 >> 1 & 1;
  R25 = 0;
  if (R18 == R24) {
    R17 = 1;
  }
  else {
    DAT_mem_0110 = 0xff;
    FUN_code_0ac3(0xb,0xb8);
    R17 = 4;
  }
LAB_code_0894:
  uVar4 = R17;
  R24 = R17;
  R17 = uVar3;
  R16 = uVar2;
  return CONCAT11(uVar4,R25);
}



/* entry=code:08a1 size=258 callers=4 callees=4 */

undefined1 FUN_code_08a1(undefined1 R25,byte R24)

{
  byte bVar1;
  undefined1 uVar2;
  
  uVar2 = R16;
  R1 = 0;
  R16 = R24;
  if (R24 == '\x02') {
    if (DAT_mem_0129 == '\x02') {
      R1 = 0;
      R16 = uVar2;
      R24 = 3;
      DAT_mem_0133 = 3;
      return R25;
    }
    if (DAT_mem_0135 != '\x01') {
      R1 = 0;
      R16 = uVar2;
      R24 = 1;
      DAT_mem_0134 = 1;
      return R25;
    }
    DAT_mem_0135 = '\x03';
    if (DAT_mem_0133 != 0) {
      FUN_code_0ac3(0xb,0xb8);
    }
    DAT_mem_0133 = 1;
    R16 = '\0';
  }
  Xlo = 2;
  Zhi = 3;
  do {
    while (DAT_mem_0135 != '\x01') {
      if (DAT_mem_0135 == '\0') {
        FUN_code_06ae(R25,R16);
        if (R24 < 2) {
          R1 = 0;
          R16 = uVar2;
          return R25;
        }
        if (R24 == 2) {
          if (DAT_mem_0134 == '\0') {
            DAT_mem_0135 = 1;
            R24 = 1;
            R16 = uVar2;
            return R25;
          }
          DAT_mem_0134 = '\0';
          if (DAT_mem_0133 != 0) {
            FUN_code_0ac3(0xb,0xb8);
          }
          DAT_mem_0133 = 1;
          DAT_mem_0135 = '\x03';
          R16 = '\0';
        }
      }
      else {
        if (DAT_mem_0135 == '\x02') {
          FUN_code_080b(R25,R16);
          if (R24 < 2) {
            R1 = 0;
            R16 = uVar2;
            return R25;
          }
          if (R24 != 2) {
            FUN_code_0ac3(0xb,0xb8);
          }
          DAT_mem_012b = R24;
        }
        else {
          if (DAT_mem_0135 != '\x03') {
            R1 = 0;
            R16 = uVar2;
            R24 = DAT_mem_0135;
            return R25;
          }
          FUN_code_074a(R25,R16);
          if (R24 < 2) {
            R1 = 0;
            R16 = uVar2;
            return R25;
          }
          DAT_mem_0133 = R24;
        }
LAB_code_0919:
        DAT_mem_0135 = '\0';
      }
    }
    bVar1 = PIND;
    if ((bVar1 & 2) != 0) goto LAB_code_0919;
    if (DAT_mem_0133 != 0) {
      FUN_code_0ac3(0xb,0xb8);
    }
    DAT_mem_012b = 1;
    DAT_mem_0135 = '\x02';
  } while( true );
}



/* entry=code:0922 size=86 callers=0 callees=2 */

undefined1
INT1_isr(undefined1 R25,undefined1 R24,undefined1 R23,undefined1 R22,undefined1 R21,undefined1 R20,
        undefined1 R19,undefined1 R18)

{
  undefined1 uVar1;
  char in_Cflg;
  char in_Zflg;
  char in_Nflg;
  char in_Vflg;
  char in_Sflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  uVar1 = R0;
  R0 = in_Cflg == '\x01' | (in_Zflg == '\x01') << 1 | (in_Nflg == '\x01') << 2 |
       (in_Vflg == '\x01') << 3 | (in_Sflg == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
       (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  SREG = R0;
  if (DAT_mem_0129 == '\x02') {
    FUN_code_06eb(R25,0);
  }
  else {
    FUN_code_08a1(R25,0);
  }
  SREG = R0;
  R0 = uVar1;
  R1 = 0;
  return R25;
}



/* entry=code:094d size=42 callers=1 callees=3 */

undefined1 FUN_code_094d(undefined1 R25)

{
  byte bVar1;
  
  R1 = 0;
  FUN_code_0681(R25,1);
  FUN_code_0679(R25,1);
  TCCR1A = 0;
  TCCR1B = 8;
  Z = 0x69;
  R24 = EICRA;
  R24 = R24 & 0xf3;
  R24 = R24 | 4;
  EICRA = R24;
  bVar1 = EIMSK;
  EIMSK = bVar1 | 2;
  FUN_code_08a1(R25,0);
  return R25;
}



/* entry=code:0962 size=120 callers=0 callees=2 */

undefined1
TIMER1_COMPA_isr(undefined1 R25,byte R24,undefined1 R23,undefined1 R22,undefined1 R21,undefined1 R20
                ,undefined1 R19,undefined1 R18)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char in_Cflg;
  char in_Zflg;
  char in_Nflg;
  char in_Vflg;
  char in_Sflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  uVar2 = R24;
  uVar1 = R0;
  R0 = in_Cflg == '\x01' | (in_Zflg == '\x01') << 1 | (in_Nflg == '\x01') << 2 |
       (in_Vflg == '\x01') << 3 | (in_Sflg == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
       (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  SREG = R0;
  R24 = TCCR1B;
  R24 = R24 & 0xf8;
  TCCR1B = R24;
  R24 = TIMSK1;
  R24 = R24 & 0xfd;
  TIMSK1 = R24;
  TCNT1H = 0;
  TCNT1 = 0;
  TIFR1 = 2;
  if (DAT_mem_0129 == '\x02') {
    FUN_code_06eb(R25,1);
  }
  else {
    FUN_code_08a1(R25,1);
  }
  R24 = uVar2;
  SREG = R0;
  R0 = uVar1;
  R1 = 0;
  return R25;
}



/* entry=code:099e size=162 callers=3 callees=3 */

/* WARNING: Removing unreachable block (code,0x09df) */

undefined1
FUN_code_099e(undefined1 R25,byte R24,undefined1 R23,char R22,undefined1 R21,char R20,
             undefined1 param_7,byte R18,undefined1 unaff_R17,undefined1 unaff_R16,
             undefined1 unaff_R15,undefined1 unaff_R14,undefined1 unaff_R13)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char in_Hflg;
  char in_Tflg;
  bool bVar7;
  
  cVar1 = R22;
  R1 = 0;
  cVar5 = SBORROW1(DAT_mem_0129,'\x02');
  cVar2 = DAT_mem_0129 < 2;
  cVar4 = (char)(DAT_mem_0129 - 2) < '\0';
  cVar3 = DAT_mem_0129 == 2;
  cVar6 = (char)DAT_mem_0129 < '\x02';
  if ((bool)cVar3) {
    R24 = 0;
  }
  else {
    thunk_FUN_code_0d31(R25,0x77);
    FUN_code_1190(R25,R24);
    thunk_FUN_code_0d31(R25,0x20);
    DAT_mem_012e = R24;
    DAT_mem_0133 = 0;
    FUN_code_08a1(R25,2);
    R24 = cVar2 == '\x01' | (cVar3 == '\x01') << 1 | (cVar4 == '\x01') << 2 | (cVar5 == '\x01') << 3
          | (cVar6 == '\x01') << 4 | (in_Hflg == '\x01') << 5 | (in_Tflg == '\x01') << 6 | 0x80;
    bVar7 = true;
    SREG = R24;
    R20 = R22;
    R21 = 0;
    R22 = '\0';
    R23 = 0;
    while (DAT_mem_0133 < 2) {
      if (cVar1 != '\0') {
        bVar7 = bVar7 == true;
        R18 = (cVar1 < '\0') << 2 | 1U | (cVar1 < '\0') << 4 | (in_Hflg == '\x01') << 5 |
              (in_Tflg == '\x01') << 6 | bVar7 << 7;
        SREG = R18;
        R25 = 0;
        Xlo = 0;
        Xhi = 0;
      }
    }
    R24 = DAT_mem_0133;
    DAT_mem_0133 = 0;
  }
  return R25;
}



/* entry=code:09ef size=180 callers=2 callees=2 */

void FUN_code_09ef(undefined1 R23,char R22,undefined1 R21,undefined1 R20,undefined1 param_5,byte R18
                  ,undefined1 unaff_R17,undefined1 unaff_R16,undefined1 unaff_R15,
                  undefined1 unaff_R14,byte unaff_R13)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  char in_Cflg;
  char in_Zflg;
  char in_Nflg;
  char in_Vflg;
  char in_Sflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  bool bVar5;
  
  bVar4 = DAT_mem_012b;
  uVar3 = DAT_mem_012a;
  puVar2 = R25R24;
  uVar1 = unaff_R13;
  R1 = 0;
  bVar5 = in_Iflg == '\x01';
  R25R24._0_1_ = in_Cflg == '\x01' | (in_Zflg == '\x01') << 1 | (in_Nflg == '\x01') << 2 |
                 (in_Vflg == '\x01') << 3 | (in_Sflg == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
                 (in_Tflg == '\x01') << 6 | bVar5 << 7;
  SREG = (byte)R25R24;
  unaff_R13 = DAT_mem_012b;
  if (R22 == '\0') {
    if (DAT_mem_012b < 2) goto LAB_code_0a40;
  }
  else {
    while( true ) {
      if (1 < DAT_mem_012b) break;
      bVar5 = bVar5 == true;
      R18 = (DAT_mem_012b == 1) << 1 | ((char)('\x01' - DAT_mem_012b) < '\0') << 2 |
            SBORROW1('\x01',DAT_mem_012b) << 3 | ('\x01' < (char)DAT_mem_012b) << 4 |
            ((SREG >> 5 & 1) == 1) << 5 | ((SREG >> 6 & 1) == 1) << 6 | bVar5 << 7;
      SREG = R18;
    }
  }
  DAT_mem_012b = 0;
  if (bVar4 == 2) {
    thunk_FUN_code_0d31();
    FUN_code_1190();
    thunk_FUN_code_0d31();
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = uVar3;
    }
  }
  else {
    thunk_FUN_code_0d31();
    FUN_code_1190();
    thunk_FUN_code_0d31();
  }
LAB_code_0a40:
  R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,unaff_R13);
  unaff_R13 = uVar1;
  return;
}



/* entry=code:0a49 size=52 callers=3 callees=3 */

void FUN_code_0a49(void)

{
  undefined2 uStack_5;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  R1 = 0;
  uStack_1 = Y._1_1_;
  uStack_2 = (undefined1)Y;
  uStack_3 = R0;
  Y = CONCAT11((char)((uint)((int)&uStack_5 + 1) >> 8),(char)&uStack_5 + '\x01');
  uStack_5 = 0xa53;
  FUN_code_09ef();
  if ((char)R25R24 != '\x02') {
    *(undefined1 *)(Y + 1) = 0;
    uStack_5 = 0xa59;
    thunk_FUN_code_0d31();
    uStack_5 = 0xa5b;
    thunk_FUN_code_0d31();
    uStack_5 = 0xa5d;
    FUN_code_1190();
  }
  R25R24._0_1_ = *(undefined1 *)(Y + 1);
  R0 = uStack_3;
  Y = CONCAT11(uStack_1,uStack_2);
  return;
}



/* entry=code:0a63 size=114 callers=1 callees=4 */

undefined2 FUN_code_0a63(undefined1 R25,char R24,undefined1 R23,undefined1 R22)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar4 = R24;
  uVar3 = R22;
  uVar2 = R17;
  uVar1 = R16;
  R1 = 0;
  if (DAT_mem_0129 != '\x02') {
    R16 = '\x03';
    do {
      FUN_code_099e(R25,uVar4,R23,0x32);
      R17 = R24;
      if (R24 == '\x02') {
        FUN_code_0a49(R25,0x32);
        R17 = R24;
        if (R24 == -6) {
          FUN_code_099e(R25,uVar3,R23,0x32);
          R17 = R24;
          if (R24 != '\x02') {
            thunk_FUN_code_0d31(R25,0x57);
            goto LAB_code_0a91;
          }
          FUN_code_0a49(R25,0x32);
          R17 = R24;
          if (R24 == -6) {
            R24 = 1;
            goto LAB_code_0a97;
          }
        }
        thunk_FUN_code_0d31(R25,0x21);
      }
      else {
        thunk_FUN_code_0d31(R25,0x57);
      }
LAB_code_0a91:
      thunk_FUN_code_0d31();
      FUN_code_1190(R25,R17);
      R16 = R16 + -1;
    } while (R16 != '\0');
  }
  R24 = 0;
LAB_code_0a97:
  R17 = uVar2;
  R16 = uVar1;
  return CONCAT11(R24,R25);
}



/* entry=code:0a9c size=78 callers=1 callees=4 */

undefined2 FUN_code_0a9c(undefined1 R25,char R24,undefined1 R23,undefined1 R22)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar3 = R24;
  uVar2 = R17;
  uVar1 = R16;
  R1 = 0;
  if (DAT_mem_0129 != '\x02') {
    R16 = '\x03';
    do {
      FUN_code_099e(R25,uVar3,R23,0x32);
      R17 = R24;
      if (R24 == '\x02') {
        FUN_code_0a49(R25,0x32);
        R17 = R24;
        if (R24 == -6) {
          R24 = 1;
          goto LAB_code_0abf;
        }
        thunk_FUN_code_0d31(R25,0x21);
      }
      else {
        thunk_FUN_code_0d31(R25,0x57);
      }
      thunk_FUN_code_0d31();
      FUN_code_1190(R25,R17);
      R16 = R16 + -1;
    } while (R16 != '\0');
  }
  R24 = 0;
LAB_code_0abf:
  R17 = uVar2;
  R16 = uVar1;
  return CONCAT11(R24,R25);
}



/* entry=code:0ac3 size=12 callers=5 callees=0 */

undefined2 FUN_code_0ac3(undefined1 R25,undefined1 R24)

{
  byte bVar1;
  
  R1 = 0;
  DAT_mem_013b = R25;
  DAT_mem_013a = R24;
  bVar1 = PORTD;
  PORTD = bVar1 | 0x40;
  return CONCAT11(R24,R25);
}



/* entry=code:0ac9 size=28 callers=1 callees=0 */

void FUN_code_0ac9(void)

{
  R1 = 0;
  Z = 0x6e;
  R24 = TIMSK0;
  R24 = R24 | 2;
  TIMSK0 = R24;
  OCR0A = 0xfa;
  TCCR0A = 2;
  TCCR0B = 0;
  R24 = TCCR0B;
  R24 = R24 | 3;
  TCCR0B = R24;
  return;
}



/* entry=code:0ad7 size=156 callers=0 callees=1 */

void TIMER0_COMPA_isr(undefined1 R23,undefined1 R22,undefined1 R21,undefined1 R20,undefined1 R19,
                     undefined1 R18)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  uint uVar7;
  char in_Cflg;
  char in_Zflg;
  char in_Nflg;
  char in_Vflg;
  char in_Sflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  uVar6 = R25R24;
  uVar5 = R0;
  iVar3 = CONCAT11(DAT_mem_013b,DAT_mem_013a);
  R0 = in_Cflg == '\x01' | (in_Zflg == '\x01') << 1 | (in_Nflg == '\x01') << 2 |
       (in_Vflg == '\x01') << 3 | (in_Sflg == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
       (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  SREG = R0;
  R25R24 = CONCAT11(DAT_mem_0137,DAT_mem_0136);
  uVar7 = R25R24;
  R25R24 = R25R24 + 1;
  iVar4 = R25R24;
  cVar1 = DAT_mem_0138 + (0xfffe < uVar7);
  DAT_mem_0139 = DAT_mem_0139 + CARRY1(DAT_mem_0138,0xfffe < uVar7);
  DAT_mem_0136 = (undefined1)R25R24;
  DAT_mem_0137 = R25R24._1_1_;
  R25R24 = CONCAT11(DAT_mem_013b,DAT_mem_013a);
  if (R25R24 == 0) {
    bVar2 = PORTD;
    PORTD = bVar2 & 0xbf;
  }
  else {
    R25R24 = R25R24 + -1;
    iVar3 = R25R24;
  }
  DAT_mem_013b = (undefined1)((uint)iVar3 >> 8);
  DAT_mem_013a = (undefined1)iVar3;
  DAT_mem_0138 = cVar1;
  if (DAT_mem_013c == '\0') {
    DAT_mem_013c = 1;
    FUN_code_1aae();
    iVar4 = CONCAT11(DAT_mem_0137,DAT_mem_0136);
    iVar3 = CONCAT11(DAT_mem_013b,DAT_mem_013a);
    DAT_mem_013c = '\0';
  }
  DAT_mem_0137 = (undefined1)((uint)iVar4 >> 8);
  DAT_mem_0136 = (undefined1)iVar4;
  DAT_mem_013b = (undefined1)((uint)iVar3 >> 8);
  DAT_mem_013a = (undefined1)iVar3;
  R25R24 = uVar6;
  SREG = R0;
  R0 = uVar5;
  R1 = 0;
  return;
}



/* entry=code:0b25 size=38 callers=1 callees=0 */

void FUN_code_0b25(void)

{
  R1 = 0;
  R19R18._0_1_ = DAT_mem_0115;
  R19R18._1_1_ = DAT_mem_0116;
  if (DAT_mem_0115 == 0 && DAT_mem_0116 == '\0') {
    R19R18._0_1_ = 0xe0;
    R19R18._1_1_ = (char)((uint)&stack0x0000 >> 8) + -1;
  }
  R19R18 = CONCAT11(R19R18._1_1_ - (DAT_mem_0118 + ((byte)R19R18 < DAT_mem_0117)),
                    (byte)R19R18 - DAT_mem_0117);
  R25R24 = R19R18;
  return;
}



/* entry=code:0b38 size=66 callers=2 callees=0 */

void FUN_code_0b38(void)

{
  byte bVar1;
  undefined2 uVar2;
  
  uVar2 = R25R24;
  R1 = 0;
  R21R20 = R25R24;
  R19R18._0_1_ = DAT_mem_0115;
  R19R18._1_1_ = DAT_mem_0116;
  if (DAT_mem_0115 == 0 && DAT_mem_0116 == '\0') {
    R19R18._0_1_ = 0xe0;
    R19R18._1_1_ = (char)((uint)&stack0x0000 >> 8) + -1;
  }
  R25R24 = CONCAT11(DAT_mem_0118,DAT_mem_0117);
  bVar1 = R19R18._1_1_ - (DAT_mem_0118 + ((byte)R19R18 < DAT_mem_0117));
  R21R20._0_1_ = (byte)uVar2;
  R21R20._1_1_ = (byte)((uint)uVar2 >> 8);
  if (bVar1 < R21R20._1_1_ ||
      (byte)(bVar1 - R21R20._1_1_) < ((byte)((byte)R19R18 - DAT_mem_0117) < (byte)R21R20)) {
    R19R18 = 0;
    R21R20 = uVar2;
  }
  else {
    bVar1 = (byte)R21R20 + DAT_mem_0117;
    DAT_mem_0118 = R21R20._1_1_ + DAT_mem_0118 + CARRY1((byte)R21R20,DAT_mem_0117);
    R21R20 = CONCAT11(DAT_mem_0118,bVar1);
    R19R18 = R25R24;
    DAT_mem_0117 = bVar1;
  }
  R25R24 = R19R18;
  return;
}



/* entry=code:0b59 size=14 callers=1 callees=0 */

undefined2 FUN_code_0b59(void)

{
  R1 = 0;
  R24 = 0xab;
  R25 = 3;
  DAT_mem_0118 = 3;
  DAT_mem_0117 = 0xab;
  return 0xab03;
}



/* entry=code:0b60 size=46 callers=2 callees=0 */

void FUN_code_0b60(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  DAT_mem_0149 = 0;
  DAT_mem_014a = 0;
  DAT_mem_014b = 0;
  DAT_mem_014c = 0;
  DAT_mem_014d = 0;
  DAT_mem_014e = 0;
  Z = &DAT_mem_0152;
  do {
    puVar1 = Z;
    Z = Z + 1;
    *puVar1 = R1;
  } while ((byte)Z != 0x6d || Z._1_1_ != (char)(((byte)Z < 0x6d) + '\x01'));
  DAT_mem_0140 = R1;
  R24 = 0xf;
  return;
}



/* entry=code:0b77 size=60 callers=1 callees=1 */

void FUN_code_0b77(void)

{
  R1 = 0;
  FUN_code_0b60();
  UHWCON = 1;
  USBCON = 0xa0;
  PLLCSR = 0x12;
  do {
    R0 = PLLCSR;
  } while ((R0 & 1) == 0);
  USBCON = 0x90;
  UDCON = 0;
  DAT_mem_0142 = 0;
  DAT_mem_013d = 0;
  DAT_mem_013e = 0;
  DAT_mem_013f = 0;
  R24 = 0x2d;
  UDIEN = 0x2d;
  return;
}



/* entry=code:0b95 size=34 callers=1 callees=0 */

void FUN_code_0b95(void)

{
  R1 = 0;
  R24 = DAT_mem_013f;
  if (DAT_mem_013f != '\0') {
    R24 = DAT_mem_013e;
    if (DAT_mem_013e == '\0') {
      R24 = UDCON;
      R24 = R24 | 2;
      UDCON = R24;
      R24 = '\x01';
      DAT_mem_013e = '\x01';
    }
  }
  return;
}



/* entry=code:0ba6 size=252 callers=1 callees=0 */

byte FUN_code_0ba6(byte R25,byte R24)

{
  byte bVar1;
  
  R1 = '\0';
  R21 = R24;
  R19 = R24 - 1;
  if (R19 < 0xa4) {
    Z._0_1_ = R19 >> 3;
    Z = (byte *)CONCAT11(-(((byte)Z < 0xae) + -2),(byte)Z + 0x52);
    R18 = R19 & 7;
    R24 = 1;
    R25 = 0;
    while (R18 = R18 - 1, -1 < (char)R18) {
      R25 = R25 * '\x02' + CARRY1(R24,R24);
      R24 = R24 * '\x02';
    }
    R18 = *Z;
    R18 = R18 | R24;
    *Z = R18;
    R20 = 3;
  }
  else {
    R20 = 0;
  }
  if ((byte)(R21 + 0x58) < 3) {
    Z._0_1_ = R21 >> 3;
    Z = (byte *)CONCAT11(-(((byte)Z < 0xae) + -2),(byte)Z + 0x52);
    R18 = R21 & 7;
    R24 = 1;
    R25 = 0;
    while (R18 = R18 - 1, -1 < (char)R18) {
      R25 = R25 * '\x02' + CARRY1(R24,R24);
      R24 = R24 * '\x02';
    }
    R18 = *Z;
    R18 = R18 | R24;
    *Z = R18;
    R20 = R20 | 4;
  }
  if ((byte)(R21 + 0x18) < 0x18) {
    Z._0_1_ = (byte)(R21 - 0x38) >> 3;
    Z = (byte *)CONCAT11(-(((byte)Z < 0xae) + -2),(byte)Z + 0x52);
    R18 = R21 - 0x38 & 7;
    R24 = 1;
    R25 = 0;
    while (R18 = R18 - 1, -1 < (char)R18) {
      R25 = R25 * '\x02' + CARRY1(R24,R24);
      R24 = R24 * '\x02';
    }
    R18 = *Z;
    R18 = R18 | R24;
    *Z = R18;
    R20 = R20 | 8;
  }
  R18 = R21 + 0x20;
  if (R18 < 8) {
    R24 = 1;
    while (R18 = R18 - 1, -1 < (char)R18) {
      R24 = R24 * '\x02';
    }
    R25 = R24;
    if (R24 != 0) {
      R24 = DAT_mem_0140 | R24;
      DAT_mem_0140 = R24;
LAB_code_0c1b:
      R20 = R20 | 3;
      R24 = R20;
      return R25;
    }
  }
  if (R19 < 0xa4) {
    Z = &DAT_mem_0149;
    do {
      R24 = *Z;
      if (R24 == R21) {
        R24 = R20;
        return R25;
      }
      Z = Z + 1;
    } while ((byte)Z != 0x4f || Z._1_1_ != (char)(((byte)Z < 0x4f) + '\x01'));
    R18 = 0;
    R19 = 0;
    do {
      Z = (byte *)CONCAT11(R19 - ((R18 < 0xb7) + -2),R18 + 0x49);
      R24 = *Z;
      if (R24 == 0) {
        *Z = R21;
        goto LAB_code_0c1b;
      }
      bVar1 = R18 + 1;
      R19 = R19 - ((R18 != 0xff) + -1);
      R18 = bVar1;
    } while (bVar1 != 6 || R19 != (byte)(R1 + (bVar1 < 6)));
  }
  R24 = R20;
  return R25;
}



/* entry=code:0c24 size=230 callers=1 callees=0 */

byte FUN_code_0c24(byte R25,byte R24)

{
  R1 = 0;
  R20 = R24;
  R24 = R24 - 1;
  if (R24 < 0xa4) {
    Z._0_1_ = R24 >> 3;
    Z = (byte *)CONCAT11(-(((byte)Z < 0xae) + -2),(byte)Z + 0x52);
    R18 = R24 & 7;
    R24 = 1;
    R25 = 0;
    while (R18 = R18 - 1, -1 < (char)R18) {
      R25 = R25 * '\x02' + CARRY1(R24,R24);
      R24 = R24 * '\x02';
    }
    R24 = ~R24;
    R18 = *Z;
    R24 = R24 & R18;
    *Z = R24;
    R19 = 3;
  }
  else {
    R19 = 0;
  }
  if ((byte)(R20 + 0x58) < 3) {
    Z._0_1_ = R20 >> 3;
    Z = (byte *)CONCAT11(-(((byte)Z < 0xae) + -2),(byte)Z + 0x52);
    R18 = R20 & 7;
    R24 = 1;
    R25 = 0;
    while (R18 = R18 - 1, -1 < (char)R18) {
      R25 = R25 * '\x02' + CARRY1(R24,R24);
      R24 = R24 * '\x02';
    }
    R24 = ~R24;
    R18 = *Z;
    R24 = R24 & R18;
    *Z = R24;
    R19 = R19 | 4;
  }
  if ((byte)(R20 + 0x18) < 0x18) {
    Z._0_1_ = (byte)(R20 - 0x38) >> 3;
    Z = (byte *)CONCAT11(-(((byte)Z < 0xae) + -2),(byte)Z + 0x52);
    R18 = R20 - 0x38 & 7;
    R24 = 1;
    R25 = 0;
    while (R18 = R18 - 1, -1 < (char)R18) {
      R25 = R25 * '\x02' + CARRY1(R24,R24);
      R24 = R24 * '\x02';
    }
    R24 = ~R24;
    R18 = *Z;
    R24 = R24 & R18;
    *Z = R24;
    R19 = R19 | 8;
  }
  R18 = R20 + 0x20;
  if (R18 < 8) {
    R24 = 1;
    while (R18 = R18 - 1, -1 < (char)R18) {
      R24 = R24 * '\x02';
    }
    R25 = R24;
    if (R24 != 0) {
      R25 = ~R24;
      R24 = DAT_mem_0140 & R25;
      DAT_mem_0140 = R24;
      R19 = R19 | 3;
      R24 = R19;
      return R25;
    }
  }
  Z = &DAT_mem_0149;
  do {
    R24 = *Z;
    if (R24 == R20) {
      *Z = R1;
      R19 = R19 | 3;
    }
    Z = Z + 1;
  } while ((byte)Z != 0x4f || Z._1_1_ != (char)(((byte)Z < 0x4f) + '\x01'));
  R24 = R19;
  return R25;
}



/* entry=code:0c97 size=308 callers=1 callees=0 */

byte FUN_code_0c97(undefined1 R25,byte R24)

{
  byte bVar1;
  undefined1 *puVar2;
  char in_Cflg;
  bool bVar3;
  bool bVar4;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  R25 = R24;
  if (DAT_mem_0142 != '\0') {
    if ((R24 & 1) != 0) {
      in_Cflg = in_Cflg == '\x01';
      in_Hflg = in_Hflg == '\x01';
      in_Tflg = in_Tflg == '\x01';
      in_Iflg = in_Iflg == '\x01';
      R18 = in_Cflg | (DAT_mem_0142 == '\0') << 1 | (DAT_mem_0142 < '\0') << 2 |
            (DAT_mem_0142 < '\0') << 4 | in_Hflg << 5 | in_Tflg << 6 | in_Iflg << 7;
      UENUM = 1;
      bVar1 = UEINTX;
      if ((bVar1 & 0x20) != 0) {
        UEDATX = DAT_mem_0140;
        UEDATX = 0;
        UEDATX = DAT_mem_0149;
        UEDATX = DAT_mem_014a;
        UEDATX = DAT_mem_014b;
        UEDATX = DAT_mem_014c;
        UEDATX = DAT_mem_014d;
        UEDATX = DAT_mem_014e;
        UEINTX = 0x3a;
        DAT_mem_0148 = 0;
        R25 = R24 & 0xfe;
      }
      SREG = R18;
    }
    bVar4 = DAT_mem_0119 < '\0';
    bVar3 = DAT_mem_0119 == '\0';
    if (bVar3) {
      R25 = R25 & 0xf1;
    }
    else {
      if ((R25 & 2) != 0) {
        in_Cflg = in_Cflg == '\x01';
        in_Hflg = in_Hflg == '\x01';
        in_Tflg = in_Tflg == '\x01';
        in_Iflg = in_Iflg == '\x01';
        R18 = in_Cflg | bVar3 << 1 | bVar4 << 2 | bVar4 << 4 | in_Hflg << 5 | in_Tflg << 6 |
              in_Iflg << 7;
        UENUM = 2;
        bVar1 = UEINTX;
        if ((bVar1 & 0x20) != 0) {
          UEDATX = 1;
          UEDATX = DAT_mem_0140;
          Z = &DAT_mem_0152;
          do {
            puVar2 = Z;
            Z = Z + 1;
            R24 = *puVar2;
            UEDATX = R24;
          } while ((byte)Z != 0x67 || Z._1_1_ != (char)(((byte)Z < 0x67) + '\x01'));
          UEINTX = 0x3a;
          DAT_mem_0145 = 0;
          R25 = R25 & 0xfd;
        }
        SREG = R18;
      }
      if ((R25 & 4) != 0) {
        in_Cflg = in_Cflg == '\x01';
        in_Hflg = in_Hflg == '\x01';
        in_Tflg = in_Tflg == '\x01';
        in_Iflg = in_Iflg == '\x01';
        R19 = in_Cflg | bVar3 << 1 | bVar4 << 2 | bVar4 << 4 | in_Hflg << 5 | in_Tflg << 6 |
              in_Iflg << 7;
        R18 = 2;
        UENUM = 2;
        bVar1 = UEINTX;
        if ((bVar1 & 0x20) != 0) {
          UEDATX = 2;
          UEDATX = DAT_mem_0167;
          UEINTX = 0x3a;
          DAT_mem_0146 = 0;
          R25 = R25 & 0xfb;
        }
        SREG = R19;
      }
      if ((R25 & 8) != 0) {
        R18 = in_Cflg == '\x01' | bVar3 << 1 | bVar4 << 2 | bVar4 << 4 | (in_Hflg == '\x01') << 5 |
              (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
        UENUM = 2;
        bVar1 = UEINTX;
        if ((bVar1 & 0x20) != 0) {
          UEDATX = 3;
          UEDATX = DAT_mem_0168;
          UEDATX = DAT_mem_0169;
          UEDATX = DAT_mem_016a;
          UEINTX = 0x3a;
          DAT_mem_0147 = 0;
          R25 = R25 & 0xf7;
        }
        SREG = R18;
      }
    }
  }
  R24 = R25;
  return R25;
}



/* entry=code:0d31 size=170 callers=2 callees=0 */

byte FUN_code_0d31(byte R25,undefined1 R24)

{
  char cVar1;
  byte bVar2;
  char in_Cflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  R20 = R24;
  if ((((DAT_mem_0142 != '\0') && (DAT_mem_013d == '\0')) && (DAT_mem_013e == '\0')) &&
     (DAT_mem_0119 != '\0')) {
    R18 = in_Cflg == '\x01' | (DAT_mem_0119 < '\0') << 2 | (DAT_mem_0119 < '\0') << 4 |
          (in_Hflg == '\x01') << 5 | (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
    UENUM = 3;
    if (DAT_mem_0151 != '\0') {
      bVar2 = UEINTX;
      if ((bVar2 & 0x20) == 0) {
        R1 = 0;
        R24 = 0xff;
        SREG = R18;
        return R25;
      }
      DAT_mem_0151 = '\0';
    }
    cVar1 = UDFNUM;
    R25 = cVar1 + 4;
    R19 = 3;
    while( true ) {
      bVar2 = UEINTX;
      if ((bVar2 & 0x20) != 0) {
        UEDATX = R24;
        bVar2 = UEINTX;
        if ((bVar2 & 0x20) == 0) {
          UEINTX = 0x3a;
          DAT_mem_014f = 0;
        }
        else {
          DAT_mem_014f = 2;
        }
        SREG = R18;
        R24 = 0;
        return R25;
      }
      bVar2 = UDFNUM;
      if (bVar2 == R25) break;
      if (DAT_mem_0142 == '\0') {
        R1 = 0;
        R19 = 3;
        R24 = 0xff;
        SREG = R18;
        return R25;
      }
      R18 = bVar2 < R25 | (DAT_mem_0142 < '\0') << 2 | (DAT_mem_0142 < '\0') << 4 |
            ((R18 >> 5 & 1) == 1) << 5 | ((R18 >> 6 & 1) == 1) << 6 | ((char)R18 < '\0') << 7;
      UENUM = 3;
    }
    DAT_mem_0151 = 1;
    R19 = 3;
    R24 = 0xff;
    SREG = R18;
    return R25;
  }
  R24 = 0xff;
  return R25;
}



/* entry=code:0d86 size=596 callers=0 callees=0 */

undefined1 USB_GEN_isr(undefined1 R25,byte R24)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined1 *puVar5;
  char in_Cflg;
  char in_Zflg;
  char in_Nflg;
  char in_Vflg;
  char in_Sflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  uVar4 = Z;
  uVar3 = R24;
  uVar2 = R0;
  R0 = in_Cflg == '\x01' | (in_Zflg == '\x01') << 1 | (in_Nflg == '\x01') << 2 |
       (in_Vflg == '\x01') << 3 | (in_Sflg == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
       (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  bVar1 = UDINT;
  UDINT = 0;
  if ((bVar1 & 8) != 0) {
    UENUM = 0;
    UECONX = 1;
    UECFG0X = 0;
    UECFG1X = 0x22;
    UEIENX = 8;
    DAT_mem_0142 = '\0';
    DAT_mem_013f = 0;
    DAT_mem_013d = '\0';
    DAT_mem_013e = 0;
    DAT_mem_0119 = '\x01';
  }
  if ((bVar1 & 1) != 0) {
    R24 = UDIEN;
    R24 = R24 | 0x10;
    UDIEN = R24;
    DAT_mem_013d = '\x01';
  }
  if (((bVar1 & 0x10) != 0) && (DAT_mem_013d != '\0')) {
    R24 = UDIEN;
    R24 = R24 & 0xef;
    UDIEN = R24;
    DAT_mem_013d = '\0';
  }
  if ((bVar1 & 0x20) != 0) {
    DAT_mem_013e = 0;
  }
  if (((bVar1 & 4) != 0) && (DAT_mem_0142 != '\0')) {
    if ((DAT_mem_0119 != '\0') &&
       ((DAT_mem_014f != '\0' && (DAT_mem_014f = DAT_mem_014f + -1, DAT_mem_014f == '\0')))) {
      UENUM = 3;
      while (bVar1 = UEINTX, (bVar1 & 0x20) != 0) {
        UEDATX = 0;
      }
      UEINTX = 0x3a;
    }
    if (DAT_mem_0119 != '\0') {
      if (DAT_mem_0144 != '\0') {
        DAT_mem_0144 = DAT_mem_0144 + -1;
      }
      if (DAT_mem_0143 != '\0') {
        DAT_mem_0143 = DAT_mem_0143 + -1;
      }
    }
    DAT_mem_0150 = DAT_mem_0150 + 1;
    R24 = DAT_mem_0150 & 3;
    if (R24 == 0) {
      if (DAT_mem_011d != 0) {
        UENUM = 1;
        bVar1 = UEINTX;
        if (((bVar1 & 0x20) != 0) && (DAT_mem_0148 = DAT_mem_0148 + 1, DAT_mem_011d <= DAT_mem_0148)
           ) {
          DAT_mem_0148 = 0;
          UEDATX = DAT_mem_0140;
          UEDATX = 0;
          UEDATX = DAT_mem_0149;
          UEDATX = DAT_mem_014a;
          UEDATX = DAT_mem_014b;
          UEDATX = DAT_mem_014c;
          UEDATX = DAT_mem_014d;
          UEDATX = DAT_mem_014e;
          UEINTX = 0x3a;
        }
      }
      if (DAT_mem_0119 != '\0') {
        UENUM = 2;
        if (((DAT_mem_011a != 0) && (bVar1 = UEINTX, (bVar1 & 0x20) != 0)) &&
           (DAT_mem_0145 = DAT_mem_0145 + 1, DAT_mem_011a <= DAT_mem_0145)) {
          DAT_mem_0145 = 0;
          UEDATX = 1;
          UEDATX = DAT_mem_0140;
          Z = &DAT_mem_0152;
          do {
            puVar5 = Z;
            Z = Z + 1;
            R24 = *puVar5;
            UEDATX = R24;
          } while ((byte)Z != 0x67 || Z._1_1_ != (char)(((byte)Z < 0x67) + '\x01'));
          UEINTX = 0x3a;
        }
        if (((DAT_mem_011b != 0) && (bVar1 = UEINTX, (bVar1 & 0x20) != 0)) &&
           (DAT_mem_0146 = DAT_mem_0146 + 1, DAT_mem_011b <= DAT_mem_0146)) {
          DAT_mem_0146 = 0;
          UEDATX = 2;
          UEDATX = DAT_mem_0167;
          UEINTX = 0x3a;
        }
        if (((DAT_mem_011c != 0) && (bVar1 = UEINTX, (bVar1 & 0x20) != 0)) &&
           (DAT_mem_0147 = DAT_mem_0147 + 1, DAT_mem_011c <= DAT_mem_0147)) {
          DAT_mem_0147 = 0;
          UEDATX = 3;
          UEDATX = DAT_mem_0168;
          UEDATX = DAT_mem_0169;
          UEDATX = DAT_mem_016a;
          UEINTX = 0x3a;
        }
      }
    }
  }
  Z = (undefined1 *)uVar4;
  R24 = uVar3;
  SREG = R0;
  R0 = uVar2;
  R1 = 0;
  return R25;
}



/* entry=code:0eb0 size=1268 callers=0 callees=0 */

void USB_COM_isr(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  char *pcVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  char in_Cflg;
  char in_Zflg;
  char in_Nflg;
  char in_Vflg;
  char in_Sflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  uVar18 = Z;
  uVar17 = X;
  uVar15 = R25R24;
  uVar14 = R23R22;
  uVar13 = R21R20;
  uVar12 = R19R18;
  uVar11 = R0;
  R0 = in_Cflg == '\x01' | (in_Zflg == '\x01') << 1 | (in_Nflg == '\x01') << 2 |
       (in_Vflg == '\x01') << 3 | (in_Sflg == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
       (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  SREG = R0;
  R1 = 0;
  UENUM = 0;
  bVar3 = UEINTX;
  if ((bVar3 & 8) == 0) {
LAB_code_1114:
    UECONX = 0x21;
    Z = (byte *)uVar18;
    R25R24 = (char *)uVar15;
    R23R22 = (undefined2 *)uVar14;
    R19R18 = (byte *)uVar12;
    R0 = uVar11;
    R1 = 0;
    return;
  }
  R25R24._0_1_ = UEDATX;
  cVar2 = UEDATX;
  bVar4 = UEDATX;
  bVar5 = UEDATX;
  bVar6 = UEDATX;
  cVar7 = UEDATX;
  bVar3 = UEDATX;
  bVar8 = UEDATX;
  UEINTX = 0xf2;
  if (cVar2 == '\x06') {
    R19R18 = (byte *)0x309;
    R23R22 = (undefined2 *)0x304;
    do {
      Z = (byte *)((int)R19R18 + -7);
      R25R24._0_1_ = (byte)*(undefined2 *)Z;
      R25R24._1_1_ = (byte)((uint)*(undefined2 *)Z >> 8);
      if ((byte)R25R24 == bVar4 && R25R24._1_1_ == (byte)(bVar5 + ((byte)R25R24 < bVar4))) {
        R25R24._0_1_ = (byte)*R23R22;
        R25R24._1_1_ = (byte)((uint)*R23R22 >> 8);
        if ((byte)R25R24 == bVar6 && R25R24._1_1_ == (byte)(cVar7 + ((byte)R25R24 < bVar6))) {
          R23R22._1_1_ = R23R22._1_1_ - (((byte)R23R22 < 0xfe) + -1);
          R19R18 = (byte *)CONCAT11(R23R22._1_1_,(byte)R23R22 + 2);
          puVar10 = *(undefined1 **)R19R18;
          R19R18 = (byte *)CONCAT11(R23R22._1_1_ - (((byte)((byte)R23R22 + 2) < 0xfe) + -1),
                                    (byte)R23R22 + 4);
          R19R18._0_1_ = *R19R18;
          R25R24._0_1_ = bVar3;
          if ((bVar3 != 0xff || (bool)bVar8 != (bVar3 != 0xff)) && ((bVar3 != 0xff) <= bVar8)) {
            R25R24._0_1_ = 0xff;
          }
          R23R22 = (undefined2 *)puVar10;
          R21R20._0_1_ = (byte)R19R18;
          if ((byte)R25R24 < (byte)R19R18) {
            R21R20._0_1_ = (byte)R25R24;
          }
          while( true ) {
            do {
              bVar3 = UEINTX;
              R25R24._0_1_ = bVar3 & 5;
            } while ((byte)R25R24 == 0);
            if ((bVar3 & 4) != 0) break;
            R19R18._1_1_ = (byte)R21R20;
            if (0x20 < (byte)R21R20) {
              R19R18._1_1_ = 0x20;
            }
            R25R24 = (char *)R23R22;
            for (R19R18._0_1_ = R19R18._1_1_; puVar10 = R25R24, (byte)R19R18 != 0;
                R19R18._0_1_ = (byte)R19R18 - 1) {
              R25R24 = R25R24 + 1;
              Z._0_1_ = *puVar10;
              UEDATX = (byte)Z;
            }
            R23R22 = (undefined2 *)
                     CONCAT11(R23R22._1_1_ + CARRY1((byte)R23R22,R19R18._1_1_),
                              (byte)R23R22 + R19R18._1_1_);
            R21R20._0_1_ = (byte)R21R20 - R19R18._1_1_;
            UEINTX = 0xfe;
            if (((byte)R21R20 == 0) && (R19R18._1_1_ != 0x20)) {
              R0 = uVar11;
              R1 = 0;
              R19R18 = (byte *)uVar12;
              R21R20 = (undefined1 *)uVar13;
              R23R22 = (undefined2 *)uVar14;
              R25R24 = (char *)uVar15;
              Z = (byte *)uVar18;
              return;
            }
          }
          R0 = uVar11;
          R1 = 0;
          R19R18 = (byte *)uVar12;
          R21R20 = (undefined1 *)uVar13;
          R23R22 = (undefined2 *)uVar14;
          R25R24 = (char *)uVar15;
          Z = (byte *)uVar18;
          return;
        }
      }
      bVar1 = (byte)R19R18 + 7;
      cVar2 = R19R18._1_1_ - (((byte)R19R18 < 0xf9) + -1);
      R19R18 = (byte *)CONCAT11(cVar2,bVar1);
      R23R22 = (undefined2 *)CONCAT11(R23R22._1_1_ - (((byte)R23R22 < 0xf9) + -1),(byte)R23R22 + 7);
    } while (bVar1 != 100 || cVar2 != (char)((bVar1 < 100) + '\x03'));
    goto LAB_code_1114;
  }
  R25R24._0_1_ = (byte)R25R24 & 0x7f;
  bVar8 = DAT_mem_0119;
  if ((byte)R25R24 == 0) {
    if (cVar2 == '\x05') {
      UEINTX = 0xfe;
      do {
        bVar3 = UEINTX;
      } while ((bVar3 & 1) == 0);
      R25R24._0_1_ = bVar4 | 0x80;
      UDADDR = (byte)R25R24;
      R0 = uVar11;
      R1 = 0;
      R25R24 = (char *)uVar15;
      return;
    }
    if (cVar2 == '\t') {
      UEINTX = 0xfe;
      R25R24 = &DAT_codebyte_035d;
      cVar2 = '\x01';
      do {
        pcVar16 = R25R24;
        UENUM = cVar2;
        R25R24 = R25R24 + 1;
        Z._0_1_ = *pcVar16;
        UECONX = (byte)Z;
        if ((byte)Z != '\0') {
          R21R20._0_1_ = (byte)R25R24;
          R21R20._1_1_ = (byte)((uint)R25R24 >> 8);
          R21R20 = (undefined1 *)
                   CONCAT11(R21R20._1_1_ - (((byte)R21R20 != -1) + -1),(byte)R21R20 + '\x01');
          R25R24._0_1_ = *R25R24;
          UECFG0X = (byte)R25R24;
          R25R24 = R21R20 + 1;
          R19R18._1_1_ = *R21R20;
          UECFG1X = R19R18._1_1_;
        }
        cVar2 = cVar2 + '\x01';
      } while (cVar2 != '\x06');
      R25R24._0_1_ = '\x1e';
      DAT_mem_0142 = bVar4;
LAB_code_0fe2:
      UERST = (byte)R25R24;
      UERST = 0;
      R0 = uVar11;
      R1 = 0;
      R19R18 = (byte *)uVar12;
      R21R20 = (undefined1 *)uVar13;
      R25R24 = (char *)uVar15;
      Z = (byte *)uVar18;
      return;
    }
    if (cVar2 != '\b') {
      if (cVar2 != '\0') {
        if (((cVar2 == '\x01') || (cVar2 == '\x03')) && (bVar4 == 1 && (bool)bVar5 == (bVar4 == 0)))
        {
          UEINTX = 0xfe;
          if (cVar2 == '\x01') {
            R0 = uVar11;
            R1 = 0;
            R25R24 = (char *)uVar15;
            DAT_mem_013f = 0;
            return;
          }
          R0 = uVar11;
          R1 = 0;
          R25R24 = (char *)uVar15;
          DAT_mem_013f = 1;
          return;
        }
        goto LAB_code_1114;
      }
      do {
        bVar3 = UEINTX;
      } while ((bVar3 & 1) == 0);
      R25R24._0_1_ = DAT_mem_013f * '\x02';
      goto LAB_code_0fbc;
    }
    do {
      bVar3 = UEINTX;
      R25R24._0_1_ = DAT_mem_0142;
    } while ((bVar3 & 1) == 0);
  }
  else {
    if ((byte)R25R24 == 2) {
      if (cVar2 != '\0') {
        if (((cVar2 == '\x01') || (cVar2 == '\x03')) && (bVar4 == 0 && bVar5 == 0)) {
          R19R18 = (byte *)(CONCAT11(cVar2,bVar6) & 0xff7f);
          R25R24._0_1_ = bVar6 & 0x7f;
          if ((byte)((byte)R25R24 - 1) < 5) {
            UEINTX = 0xfe;
            UENUM = (byte)R19R18;
            if (R19R18._1_1_ != '\x03') {
              UECONX = 0x19;
              R25R24._0_1_ = '\x01';
              while( true ) {
                R19R18._0_1_ = (byte)R19R18 - 1;
                bVar3 = (byte)R19R18;
                R19R18 = (byte *)(uint)(byte)R19R18;
                if ((char)bVar3 < '\0') break;
                R25R24._0_1_ = (byte)R25R24 * '\x02';
              }
              goto LAB_code_0fe2;
            }
          }
        }
        goto LAB_code_1114;
      }
      do {
        bVar3 = UEINTX;
      } while ((bVar3 & 1) == 0);
      UENUM = bVar6;
      R25R24._0_1_ = UECONX;
      R19R18._0_1_ = '\x05';
      do {
        R25R24._0_1_ = (byte)R25R24 >> 1;
        R19R18._0_1_ = (byte)R19R18 + -1;
      } while ((byte)R19R18 != '\0');
      R25R24._0_1_ = (byte)R25R24 & 1;
      UENUM = 0;
LAB_code_0fbc:
      UEDATX = (byte)R25R24;
      UEDATX = 0;
      goto LAB_code_1110;
    }
    if ((byte)R25R24 != 0x21) goto LAB_code_1114;
    if (bVar6 == 2 && (bool)cVar7 == bVar6 < 2) {
      if (cVar2 == '\x01') {
        do {
          bVar3 = UEINTX;
        } while ((bVar3 & 1) == 0);
        if (bVar4 == 1) {
          UEDATX = 1;
          UEDATX = DAT_mem_0140;
          Z = &DAT_mem_0152;
          do {
            puVar10 = Z;
            Z = Z + 1;
            R25R24._0_1_ = *puVar10;
            UEDATX = (byte)R25R24;
          } while ((byte)Z != 0x67 || Z._1_1_ != (char)(((byte)Z < 0x67) + '\x01'));
          goto LAB_code_1110;
        }
        if (bVar4 == 2) {
          UEDATX = 2;
          R25R24._0_1_ = DAT_mem_0167;
        }
        else {
          if (bVar4 != 3) goto LAB_code_1110;
          UEDATX = 3;
          UEDATX = DAT_mem_0168;
          UEDATX = DAT_mem_0169;
          R25R24._0_1_ = DAT_mem_016a;
        }
      }
      else {
        if (cVar2 == '\t') {
          do {
            bVar3 = UEINTX;
          } while ((bVar3 & 4) == 0);
          uVar9 = UEDATX;
LAB_code_109a:
          DAT_mem_0141 = UEDATX;
          UEINTX = 0xfb;
          goto LAB_code_1110;
        }
        if (cVar2 != '\x02') {
          if (cVar2 != '\n') goto LAB_code_1114;
          if (bVar4 == 0) {
            DAT_mem_011a = bVar5;
            DAT_mem_011b = bVar5;
            DAT_mem_011c = bVar5;
            if (bVar5 == 0) {
              DAT_mem_0145 = 0;
              DAT_mem_0146 = 0;
              DAT_mem_0147 = 0;
            }
          }
          else {
            X = (undefined1 *)(uint)bVar4;
            X = (undefined1 *)((int)X - 1);
            Z._0_1_ = (byte)X;
            Z._1_1_ = (char)((uint)X >> 8);
            Z = (byte *)CONCAT11(Z._1_1_ - (((byte)Z < 0xe6) + -2),(byte)Z + 0x1a);
            R21R20._1_1_ = bVar5;
            *Z = bVar5;
            bVar8 = DAT_mem_0119;
            if (R21R20._1_1_ == 0) {
              X = (undefined1 *)CONCAT11(X._1_1_ - (((byte)X < 0xbb) + -2),(byte)X + 0x45);
              *X = R1;
              bVar8 = DAT_mem_0119;
            }
          }
          goto LAB_code_1110;
        }
        do {
          bVar3 = UEINTX;
        } while ((bVar3 & 1) == 0);
        R25R24._0_1_ = DAT_mem_011a;
        if (bVar4 != 0) {
          Z = (byte *)CONCAT11(-((bVar4 < 0xe7) + -2),bVar4 + 0x19);
          R25R24._0_1_ = *Z;
        }
      }
    }
    else {
      if (CONCAT11(cVar7,bVar6) != 0) {
        if (bVar6 == 1 && (bool)cVar7 == (bVar6 == 0)) {
          if (cVar2 == '\x01') {
            while( true ) {
              do {
                R21R20._0_1_ = bVar3;
                bVar4 = UEINTX;
                R25R24._0_1_ = bVar4 & 5;
                bVar3 = (byte)R21R20;
              } while ((byte)R25R24 == 0);
              if ((bVar4 & 4) != 0) break;
              R25R24._1_1_ = (byte)R21R20;
              if (0x20 < (byte)R21R20) {
                R25R24._1_1_ = 0x20;
              }
              for (R25R24._0_1_ = R25R24._1_1_; (byte)R25R24 != 0; R25R24._0_1_ = (byte)R25R24 - 1)
              {
                UEDATX = 0;
              }
              bVar3 = (byte)R21R20 - R25R24._1_1_;
              UEINTX = 0xfe;
              if ((bVar3 == 0) && (R25R24._1_1_ != 0x20)) {
                R0 = uVar11;
                R1 = 0;
                R21R20 = (undefined1 *)uVar13;
                R25R24 = (char *)uVar15;
                return;
              }
            }
            R0 = uVar11;
            R1 = 0;
            R21R20 = (undefined1 *)uVar13;
            R25R24 = (char *)uVar15;
            return;
          }
        }
        else if (CONCAT11(cVar7,bVar6) == 3) {
          if (cVar2 == '\x01') {
            R21R20._0_1_ = 0x40;
            do {
              do {
                bVar3 = UEINTX;
                R25R24._0_1_ = bVar3 & 5;
              } while ((byte)R25R24 == 0);
              if ((bVar3 & 4) != 0) {
                R0 = uVar11;
                R1 = 0;
                R21R20 = (undefined1 *)uVar13;
                R25R24 = (char *)uVar15;
                return;
              }
              R25R24._1_1_ = (byte)R21R20;
              if (0x20 < (byte)R21R20) {
                R25R24._1_1_ = 0x20;
              }
              for (R25R24._0_1_ = R25R24._1_1_; (byte)R25R24 != 0; R25R24._0_1_ = (byte)R25R24 - 1)
              {
                UEDATX = 0;
              }
              R21R20._0_1_ = (byte)R21R20 - R25R24._1_1_;
              UEINTX = 0xfe;
            } while (((byte)R21R20 != 0) || (R25R24._1_1_ == 0x20));
            R0 = uVar11;
            R1 = 0;
            R21R20 = (undefined1 *)uVar13;
            R25R24 = (char *)uVar15;
            return;
          }
          if (cVar2 == '\t') {
            R25R24._1_1_ = 0x40;
            do {
              do {
                bVar3 = UEINTX;
              } while ((bVar3 & 4) == 0);
              UEINTX = 0xfb;
              R25R24._0_1_ = R25R24._1_1_;
              if (0x20 < R25R24._1_1_) {
                R25R24._0_1_ = 0x20;
              }
              R25R24._1_1_ = R25R24._1_1_ - (byte)R25R24;
            } while (R25R24._1_1_ != 0);
            do {
              bVar3 = UEINTX;
            } while ((bVar3 & 1) == 0);
            goto LAB_code_1110;
          }
        }
        goto LAB_code_1114;
      }
      if (cVar2 == '\x01') {
        do {
          bVar3 = UEINTX;
        } while ((bVar3 & 1) == 0);
        UEDATX = DAT_mem_0140;
        UEDATX = 0;
        UEDATX = DAT_mem_0149;
        UEDATX = DAT_mem_014a;
        UEDATX = DAT_mem_014b;
        UEDATX = DAT_mem_014c;
        UEDATX = DAT_mem_014d;
        R25R24._0_1_ = DAT_mem_014e;
      }
      else if (cVar2 == '\x02') {
        do {
          bVar3 = UEINTX;
          R25R24._0_1_ = DAT_mem_011d;
        } while ((bVar3 & 1) == 0);
      }
      else {
        if (cVar2 != '\x03') {
          if (cVar2 != '\t') {
            if (cVar2 == '\n') {
              DAT_mem_011d = bVar5;
              if (bVar5 == 0) {
                DAT_mem_0148 = 0;
              }
            }
            else {
              bVar8 = bVar4;
              if (cVar2 != '\v') goto LAB_code_1114;
            }
            goto LAB_code_1110;
          }
          do {
            bVar3 = UEINTX;
          } while ((bVar3 & 4) == 0);
          goto LAB_code_109a;
        }
        do {
          bVar3 = UEINTX;
          R25R24._0_1_ = DAT_mem_0119;
        } while ((bVar3 & 1) == 0);
      }
    }
  }
  UEDATX = (byte)R25R24;
LAB_code_1110:
  DAT_mem_0119 = bVar8;
  UEINTX = 0xfe;
  R0 = uVar11;
  R1 = 0;
  R19R18 = (byte *)uVar12;
  R21R20 = (undefined1 *)uVar13;
  R25R24 = (char *)uVar15;
  X = (undefined1 *)uVar17;
  Z = (byte *)uVar18;
  return;
}



/* entry=code:112a size=92 callers=1 callees=0 */

void FUN_code_112a(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  char in_Cflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  Z = R25R24;
  if (DAT_mem_0142 == '\0') {
LAB_code_1156:
    R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,0xff);
  }
  else {
    R18 = in_Cflg == '\x01' | (DAT_mem_0142 < '\0') << 2 | (DAT_mem_0142 < '\0') << 4 |
          (in_Hflg == '\x01') << 5 | (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
    DAT_mem_0144 = R22;
    UENUM = 5;
    R25R24._1_1_ = 5;
    uVar2 = R25R24._1_1_;
    while( true ) {
      bVar1 = UEINTX;
      if ((bVar1 & 0x20) != 0) {
        R25R24._1_1_ = '@';
        do {
          puVar3 = Z;
          uVar2 = UEDATX;
          Z = Z + 1;
          *puVar3 = uVar2;
          R25R24._1_1_ = R25R24._1_1_ + -1;
        } while (R25R24._1_1_ != '\0');
        UEINTX = 0x6b;
        SREG = R18;
        R25R24 = (undefined1 *)0x40;
        return;
      }
      SREG = R18;
      R25R24 = (undefined1 *)CONCAT11(5,R22);
      if (R22 == '\0') break;
      R25R24._1_1_ = uVar2;
      if (DAT_mem_0142 == '\0') goto LAB_code_1156;
      R18 = (R18 & 1) == 1 | (DAT_mem_0142 < '\0') << 2 | (DAT_mem_0142 < '\0') << 4 |
            ((R18 >> 5 & 1) == 1) << 5 | ((R18 >> 6 & 1) == 1) << 6 | ((char)R18 < '\0') << 7;
      UENUM = 5;
    }
  }
  return;
}



/* entry=code:1158 size=92 callers=1 callees=0 */

void FUN_code_1158(void)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  char in_Cflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  Z = R25R24;
  if (DAT_mem_0142 == '\0') {
LAB_code_1184:
    R25R24 = (undefined1 *)CONCAT11(R25R24._1_1_,0xff);
  }
  else {
    R18 = in_Cflg == '\x01' | (DAT_mem_0142 < '\0') << 2 | (DAT_mem_0142 < '\0') << 4 |
          (in_Hflg == '\x01') << 5 | (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
    DAT_mem_0143 = R22;
    UENUM = 4;
    R25R24._1_1_ = 4;
    uVar3 = R25R24._1_1_;
    while( true ) {
      bVar2 = UEINTX;
      if ((bVar2 & 0x20) != 0) {
        cVar1 = '@';
        do {
          puVar4 = Z;
          Z = Z + 1;
          R25R24._0_1_ = *puVar4;
          UEDATX = R25R24._0_1_;
          cVar1 = cVar1 + -1;
        } while (cVar1 != '\0');
        UEINTX = 0x3a;
        SREG = R18;
        R25R24 = (undefined1 *)0x40;
        return;
      }
      SREG = R18;
      R25R24 = (undefined1 *)CONCAT11(4,R22);
      if (R22 == '\0') break;
      R25R24._1_1_ = uVar3;
      if (DAT_mem_0142 == '\0') goto LAB_code_1184;
      R18 = (R18 & 1) == 1 | (DAT_mem_0142 < '\0') << 2 | (DAT_mem_0142 < '\0') << 4 |
            ((R18 >> 5 & 1) == 1) << 5 | ((R18 >> 6 & 1) == 1) << 6 | ((char)R18 < '\0') << 7;
      UENUM = 4;
    }
  }
  return;
}



/* entry=code:1186 size=2 callers=10 callees=0 */

byte thunk_FUN_code_0d31(byte R25,undefined1 R24)

{
  char cVar1;
  byte bVar2;
  char in_Cflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  R20 = R24;
  if ((((DAT_mem_0142 != '\0') && (DAT_mem_013d == '\0')) && (DAT_mem_013e == '\0')) &&
     (DAT_mem_0119 != '\0')) {
    R18 = in_Cflg == '\x01' | (DAT_mem_0119 < '\0') << 2 | (DAT_mem_0119 < '\0') << 4 |
          (in_Hflg == '\x01') << 5 | (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
    UENUM = 3;
    if (DAT_mem_0151 != '\0') {
      bVar2 = UEINTX;
      if ((bVar2 & 0x20) == 0) {
        R1 = 0;
        R24 = 0xff;
        SREG = R18;
        return R25;
      }
      DAT_mem_0151 = '\0';
    }
    cVar1 = UDFNUM;
    R25 = cVar1 + 4;
    R19 = 3;
    while( true ) {
      bVar2 = UEINTX;
      if ((bVar2 & 0x20) != 0) {
        UEDATX = R24;
        bVar2 = UEINTX;
        if ((bVar2 & 0x20) == 0) {
          UEINTX = 0x3a;
          DAT_mem_014f = 0;
        }
        else {
          DAT_mem_014f = 2;
        }
        SREG = R18;
        R24 = 0;
        return R25;
      }
      bVar2 = UDFNUM;
      if (bVar2 == R25) break;
      if (DAT_mem_0142 == '\0') {
        R1 = 0;
        R19 = 3;
        R24 = 0xff;
        SREG = R18;
        return R25;
      }
      R18 = bVar2 < R25 | (DAT_mem_0142 < '\0') << 2 | (DAT_mem_0142 < '\0') << 4 |
            ((R18 >> 5 & 1) == 1) << 5 | ((R18 >> 6 & 1) == 1) << 6 | ((char)R18 < '\0') << 7;
      UENUM = 3;
    }
    DAT_mem_0151 = 1;
    R19 = 3;
    R24 = 0xff;
    SREG = R18;
    return R25;
  }
  R24 = 0xff;
  return R25;
}



/* entry=code:1188 size=16 callers=1 callees=1 */

undefined1 FUN_code_1188(undefined1 R25,byte R24)

{
  byte bVar1;
  
  bVar1 = R24;
  R1 = 0;
  if (R24 < 10) {
    R24 = '0';
  }
  else {
    R24 = '7';
  }
  FUN_code_0d31(bVar1,R24 + bVar1);
  return R25;
}



/* entry=code:1190 size=20 callers=10 callees=1 */

undefined1 FUN_code_1190(undefined1 R25,byte R24)

{
  R1 = 0;
  FUN_code_1188(R25,R24 >> 4);
  R24 = R24 & 0xf;
  FUN_code_1188(R25,R24);
  return R25;
}



/* entry=code:119a size=16 callers=2 callees=1 */

undefined1 FUN_code_119a(undefined1 R25,undefined1 R24)

{
  R1 = 0;
  FUN_code_1190(R25,R25);
  FUN_code_1190(R25,R24);
  return R25;
}



/* entry=code:11a2 size=40 callers=3 callees=1 */

void FUN_code_11a2(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  char *pcVar3;
  
  uVar2 = Y;
  uVar1 = R17;
  R1 = 0;
  Y = R25R24;
  while( true ) {
    pcVar3 = Y;
    Z = Y;
    Y = Y + 1;
    R17 = *pcVar3;
    if (R17 == '\0') break;
    if (R17 == '\n') {
      FUN_code_0d31();
    }
    FUN_code_0d31();
  }
  Y = (char *)uVar2;
  R17 = uVar1;
  return;
}



/* entry=code:11b6 size=44 callers=1 callees=0 */

byte FUN_code_11b6(undefined1 R25,char R24)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = R24;
  R1 = 0;
  R19 = R24;
  R18 = DAT_mem_0170;
  Z = (char *)CONCAT11(DAT_mem_016e,DAT_mem_016d);
  R25 = 0;
  while( true ) {
    pcVar2 = Z;
    if (DAT_mem_0170 <= R25) {
      R24 = 0;
      return R25;
    }
    X = Z;
    R24 = *Z;
    Z = Z + 2;
    if (R24 == cVar1) break;
    R25 = R25 + 1;
  }
  X = pcVar2 + 1;
  R24 = *X;
  return R25;
}



/* entry=code:11cc size=220 callers=2 callees=1 */

void FUN_code_11cc(undefined2 param_1,undefined2 R25R24,undefined1 param_3,char R22,
                  undefined1 param_5,byte R20,undefined1 R19,undefined1 R18,byte unaff_R17,
                  char unaff_R16)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  byte *pbVar5;
  
  uVar4 = Y;
  uVar3 = unaff_R17;
  uVar2 = unaff_R16;
  R1 = '\0';
  unaff_R17 = (byte)R25R24;
  unaff_R16 = R22;
  if (DAT_mem_0173 != 0) {
    if (R22 != '\0') {
      Z = (byte *)CONCAT11(DAT_mem_0176 + CARRY1(DAT_mem_0175,(byte)R25R24),
                           DAT_mem_0175 + (byte)R25R24);
      *Z = DAT_mem_0174;
    }
    Z = (byte *)CONCAT11(DAT_mem_0176 + CARRY1(DAT_mem_0175,unaff_R17),DAT_mem_0175 + unaff_R17);
    FUN_code_11b6();
    if (((byte)R25R24 != 0) && ((byte)R25R24 <= DAT_mem_0173)) {
      bVar1 = 1 - (byte)R25R24;
      Z = (byte *)CONCAT11(DAT_mem_0172 -
                           ((R1 + (1 < (byte)R25R24)) * -2 + CARRY1(bVar1,bVar1) +
                           (DAT_mem_0171 < (byte)(bVar1 * '\x02'))),DAT_mem_0171 + bVar1 * -2);
      pbVar5 = Z;
      Z = Z + 1;
      R0 = *pbVar5;
      Z._1_1_ = *Z;
      Z._1_1_ = Z._1_1_ + CARRY1(R0,unaff_R17);
      Z = (byte *)CONCAT11(Z._1_1_,R0 + unaff_R17);
      R25R24._0_1_ = *Z;
      if ((byte)R25R24 == 0) {
        Y = (byte *)CONCAT11(-((unaff_R17 < 0x66) + -2),unaff_R17 + 0x9a);
        Z._0_1_ = *Y;
      }
      else {
        Z._0_1_ = (byte)R25R24;
      }
      goto LAB_code_1211;
    }
  }
  Z._1_1_ = -((unaff_R17 < 0x66) + -2);
  Z = (byte *)CONCAT11(Z._1_1_,unaff_R17 + 0x9a);
  Z._0_1_ = *Z;
LAB_code_1211:
  R18 = (byte)Z;
  R25R24._0_1_ = (byte)Z & 0xf8;
  R25R24._1_1_ = '\0';
  if ((byte)R25R24 == 0xd0 && (char)(R1 + ((byte)R25R24 < 0xd0)) == '\0') {
    R18 = (byte)Z & 7;
    if (unaff_R16 == '\0') {
      R25R24._0_1_ = 1;
      R25R24._1_1_ = '\0';
      while (R18 = R18 - 1, -1 < (char)R18) {
        R25R24._1_1_ = R25R24._1_1_ * '\x02' + CARRY1((byte)R25R24,(byte)R25R24);
        R25R24._0_1_ = (byte)R25R24 * '\x02';
      }
      R25R24._0_1_ = ~(byte)R25R24;
      R20 = DAT_mem_0174 & (byte)R25R24;
    }
    else {
      R25R24._0_1_ = 1;
      R25R24._1_1_ = '\0';
      while (R18 = R18 - 1, -1 < (char)R18) {
        R25R24._1_1_ = R25R24._1_1_ * '\x02' + CARRY1((byte)R25R24,(byte)R25R24);
        R25R24._0_1_ = (byte)R25R24 * '\x02';
      }
      R20 = DAT_mem_0174 | (byte)R25R24;
    }
    DAT_mem_0174 = R20;
    Z._0_1_ = 0;
  }
  R25R24 = CONCAT11(R25R24._1_1_,(byte)Z);
  Y = (byte *)uVar4;
  unaff_R17 = uVar3;
  unaff_R16 = uVar2;
  R19 = 0;
  return;
}



/* entry=code:123a size=38 callers=2 callees=0 */

void FUN_code_123a(void)

{
  R1 = 0;
  DAT_mem_016f = 0;
  DAT_mem_0170 = 0;
  DAT_mem_0173 = 0;
  DAT_mem_016e = 0;
  DAT_mem_016d = 0;
  DAT_mem_0172 = 0;
  DAT_mem_0171 = 0;
  DAT_mem_0176 = 0;
  DAT_mem_0175 = 0;
  return;
}



/* entry=code:124d size=22 callers=2 callees=1 */

void FUN_code_124d(void)

{
  byte bVar1;
  
  R1 = 0;
  FUN_code_123a();
  R24 = 0;
  do {
    bVar1 = R24 - 1;
    Z = (byte *)CONCAT11(-((bVar1 < 0x66) + -2),R24 + 0x99);
    R24 = bVar1;
    *Z = bVar1;
  } while (R24 != 0);
  return;
}



/* entry=code:1258 size=46 callers=1 callees=0 */

undefined1 FUN_code_1258(undefined1 R25,byte R24,undefined1 param_3,undefined1 R22)

{
  undefined1 uVar1;
  
  uVar1 = R24;
  R1 = 0;
  R19 = R24;
  R18 = DAT_mem_0170;
  R24 = DAT_mem_016f;
  if (DAT_mem_0170 < DAT_mem_016f) {
    R24 = DAT_mem_0170 * '\x02';
    R25 = CARRY1(DAT_mem_0170,DAT_mem_0170);
    Z = (undefined1 *)CONCAT11(DAT_mem_016e + R25 + CARRY1(DAT_mem_016d,R24),DAT_mem_016d + R24);
    *Z = uVar1;
    Z[1] = R22;
    DAT_mem_0170 = R18 + 1;
  }
  R18 = DAT_mem_0170;
  return R25;
}



/* entry=code:126f size=40 callers=2 callees=0 */

undefined2 FUN_code_126f(void)

{
  R1 = '\0';
  DAT_mem_0174 = 0;
  R25 = DAT_mem_0176;
  R24 = DAT_mem_0175 | DAT_mem_0176;
  if (R24 != 0) {
    R24 = 0;
    do {
      R24 = R24 - 1;
      Z = (char *)CONCAT11(DAT_mem_0176 + R1 + CARRY1(DAT_mem_0175,R24),DAT_mem_0175 + R24);
      *Z = R1;
    } while (R24 != 0);
  }
  return CONCAT11(R24,R25);
}



/* entry=code:1283 size=152 callers=1 callees=1 */

void FUN_code_1283(void)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 uStack_8;
  undefined1 uStack_7;
  
  uVar6 = R16;
  uVar5 = R14;
  uVar4 = R13R12;
  uVar3 = R11R10;
  R1 = '\0';
  uStack_7 = Y._1_1_;
  uStack_8 = (undefined1)Y;
  uStack_a = 0x128d;
  Y = CONCAT11((char)((uint)((int)&uStack_c + 1) >> 8),(char)&uStack_c + '\x01');
  R11R10 = R25R24;
  R14 = R22;
  R25R24 = CONCAT11(R25R24._1_1_,DAT_mem_0173);
  if (R20 <= DAT_mem_0173) {
    if (R20 == 0) {
      R22 = 1;
      R13R12 = 0x19a;
    }
    else {
      bVar1 = 1 - R20;
      cVar2 = (1 < R20) * -2 + CARRY1(bVar1,bVar1);
      R25R24 = CONCAT11(cVar2,bVar1 * '\x02');
      Z = (undefined2 *)
          CONCAT11(DAT_mem_0172 - (cVar2 + (DAT_mem_0171 < (byte)(bVar1 * '\x02'))),
                   DAT_mem_0171 + bVar1 * -2);
      R13R12 = *Z;
    }
    for (R16 = 0; R16 < R14; R16 = R16 + 1) {
      R25R24 = R11R10 + 1;
      *(undefined1 *)(Y + 2) = R25R24._1_1_;
      *(byte *)(Y + 1) = (byte)R25R24;
      uStack_c = 0x12b3;
      FUN_code_1bfa();
      bVar1 = (byte)R25R24;
      Z = (undefined2 *)0x2;
      R11R10 = CONCAT11(R11R10._1_1_ + (0xfd < (byte)R11R10),(byte)R11R10 + 2);
      uStack_c = 0x12bc;
      FUN_code_1bfa();
      Z._0_1_ = (byte)R13R12;
      Z._1_1_ = (char)((uint)R13R12 >> 8);
      Z = (undefined2 *)CONCAT11(Z._1_1_ + R1 + CARRY1((byte)Z,bVar1),(byte)Z + bVar1);
      *(byte *)Z = (byte)R25R24;
    }
  }
  R0 = uStack_a._1_1_;
  Y = CONCAT11(uStack_7,uStack_8);
  R16 = uVar6;
  R14 = uVar5;
  R13R12 = uVar4;
  R11R10 = uVar3;
  return;
}



/* entry=code:12cf size=196 callers=1 callees=2 */

void FUN_code_12cf(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  uVar6 = R25R24;
  bVar4 = R22;
  uVar3 = R17R16;
  uVar2 = R15;
  R1 = '\0';
  uVar5 = (byte)R25R24;
  R15 = R22;
  if (R22 != 0) {
    FUN_code_0b38();
    DAT_mem_0176 = R25R24._1_1_;
    DAT_mem_0175 = (byte)R25R24;
    FUN_code_126f();
    R17R16 = uVar6 & 0xff;
    FUN_code_0b38();
    DAT_mem_016e = R25R24._1_1_;
    DAT_mem_016d = (byte)R25R24;
    R19R18 = R25R24;
    if (R25R24 == 0) {
      R25R24 = (uint)R25R24._1_1_ << 8;
      R1 = 0;
      R15 = uVar2;
      R17R16 = uVar3;
      return;
    }
    DAT_mem_016f = uVar5;
    DAT_mem_0173 = bVar4;
    R25R24._0_1_ = (byte)R17R16;
    R25R24._1_1_ = (byte)(R17R16 >> 8);
    DAT_mem_0171 = (byte)R25R24 * '\x02' + DAT_mem_016d;
    DAT_mem_0172 = R25R24._1_1_ * '\x02' + CARRY1((byte)R25R24,(byte)R25R24) + DAT_mem_016e +
                   CARRY1((byte)R25R24 * '\x02',DAT_mem_016d);
    R19R18 = CONCAT11(CARRY1(bVar4,bVar4) + DAT_mem_0172 + CARRY1(bVar4 * '\x02',DAT_mem_0171),
                      bVar4 * '\x02' + DAT_mem_0171);
    uVar1 = 0;
    R20 = 0;
    R21 = '\0';
    while( true ) {
      R25R24 = uVar1 << 8;
      uVar6 = R25R24;
      R25R24._1_1_ = (byte)uVar1;
      if (R15 <= R25R24._1_1_) break;
      Z = (char *)CONCAT11(DAT_mem_0172 + R21 + CARRY1(DAT_mem_0171,R20),DAT_mem_0171 + R20);
      Z[1] = R19R18._1_1_;
      *Z = (undefined1)R19R18;
      R25R24._0_1_ = 0;
      do {
        R25R24._0_1_ = (byte)R25R24 - 1;
        Z._0_1_ = (byte)R19R18;
        Z._1_1_ = (char)((uint)R19R18 >> 8);
        Z = (char *)CONCAT11(Z._1_1_ + R1 + CARRY1((byte)Z,(byte)R25R24),(byte)Z + (byte)R25R24);
        *Z = R1;
      } while ((byte)R25R24 != 0);
      R19R18 = CONCAT11(R19R18._1_1_ + '\x01',(undefined1)R19R18);
      uVar1 = (uint)(byte)(R25R24._1_1_ + 1);
      R21 = R21 - ((R20 < 0xfe) + -1);
      R20 = R20 + 2;
    }
  }
  R25R24 = uVar6;
  R25R24 = CONCAT11(R25R24._1_1_,1);
  R17R16 = uVar3;
  R15 = uVar2;
  return;
}



/* entry=code:1331 size=8 callers=1 callees=0 */

void FUN_code_1331(void)

{
  R1 = 0;
  R24 = 1;
  DAT_mem_017c = 1;
  return;
}



/* entry=code:1335 size=6 callers=1 callees=0 */

void FUN_code_1335(void)

{
  R1 = 0;
  DAT_mem_017c = 0;
  return;
}



/* entry=code:1338 size=70 callers=1 callees=0 */

void FUN_code_1338(undefined2 param_1,undefined2 R25R24,undefined1 param_3,byte R22)

{
  byte bVar1;
  
  R21 = (byte)R25R24;
  R1 = 0;
  R20 = DAT_mem_017b;
  Z = (char *)CONCAT11(DAT_mem_0179,DAT_mem_0178);
  bVar1 = 0;
  do {
    if (DAT_mem_017b <= bVar1) {
      R19R18 = 0;
      R25R24 = 0;
      return;
    }
    R25R24._0_1_ = *Z;
    if ((byte)R25R24 == R21) {
      R25R24._0_1_ = Z[1];
      R19R18._0_1_ = Z[2];
      R25R24._1_1_ = ~(byte)R19R18;
      R25R24._1_1_ = R25R24._1_1_ & (byte)R25R24;
      R25R24._1_1_ = R25R24._1_1_ & R22;
      R22 = R22 | R25R24._1_1_ >> 4;
      R25R24._0_1_ = (byte)R25R24 ^ R22;
      R25R24._0_1_ = (byte)R25R24 & (byte)R19R18;
      if ((byte)R25R24 == 0) {
        R1 = 0;
        R19R18 = *(undefined2 *)(Z + 3);
        R25R24 = *(undefined2 *)(Z + 3);
        return;
      }
    }
    bVar1 = bVar1 + 1;
    Z = Z + 5;
  } while( true );
}



/* entry=code:135b size=34 callers=0 callees=0 */

undefined2 FUN_code_135b(void)

{
  byte bVar1;
  
  bVar1 = DAT_mem_0179;
  R1 = 0;
  DAT_mem_017c = 0;
  DAT_mem_017a = 0;
  DAT_mem_017b = 0;
  R25 = DAT_mem_0179;
  R24 = DAT_mem_0178 | DAT_mem_0179;
  if (R24 != 0) {
    DAT_mem_0179 = 0;
    DAT_mem_0178 = 0;
  }
  return CONCAT11(R24,bVar1);
}



/* entry=code:136c size=2 callers=1 callees=0 */

undefined2 thunk_FUN_code_135b(void)

{
  byte bVar1;
  
  bVar1 = DAT_mem_0179;
  R1 = 0;
  DAT_mem_017c = 0;
  DAT_mem_017a = 0;
  DAT_mem_017b = 0;
  R25 = DAT_mem_0179;
  R24 = DAT_mem_0178 | DAT_mem_0179;
  if (R24 != 0) {
    DAT_mem_0179 = 0;
    DAT_mem_0178 = 0;
  }
  return CONCAT11(R24,bVar1);
}



/* entry=code:136e size=40 callers=2 callees=0 */

undefined2 FUN_code_136e(void)

{
  R1 = '\0';
  DAT_mem_0177 = 0;
  R25 = DAT_mem_029b;
  R24 = DAT_mem_029a | DAT_mem_029b;
  if (R24 != 0) {
    R24 = 0;
    do {
      R24 = R24 - 1;
      Z = (char *)CONCAT11(DAT_mem_029b + R1 + CARRY1(DAT_mem_029a,R24),DAT_mem_029a + R24);
      *Z = R1;
    } while (R24 != 0);
  }
  return CONCAT11(R24,R25);
}



/* entry=code:1382 size=202 callers=1 callees=1 */

void FUN_code_1382(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  
  uVar13 = Yhi;
  uVar12 = Ylo;
  uVar11 = R17R16;
  uVar10 = R15R14;
  uVar9 = R13R12;
  uVar8 = R11;
  uVar7 = R10;
  uVar6 = R9;
  uVar5 = R8;
  uVar4 = R7;
  R1R0._1_1_ = 0;
  R8 = R22;
  R9 = DAT_mem_017a;
  Ylo = DAT_mem_0178;
  Yhi = DAT_mem_0179;
  R10 = 0;
  R19R18 = CONCAT11(R19R18._1_1_,5);
  R7 = 5;
  while ((R10 < R8 && (R11 = DAT_mem_017b, DAT_mem_017b != R9))) {
    R1R0 = (uint)DAT_mem_017b * (uint)R7;
    iVar3 = R1R0;
    R1R0._1_1_ = 0;
    R15R14._1_1_ = (char)((uint)iVar3 >> 8);
    R15R14 = (undefined1 *)CONCAT11(R15R14._1_1_ + Yhi + CARRY1((byte)R1R0,Ylo),(byte)R1R0 + Ylo);
    R17R16._0_1_ = (byte)R25R24 + 1;
    R17R16._1_1_ = (byte)((uint)R25R24 >> 8);
    R17R16._1_1_ = R17R16._1_1_ - (((byte)R25R24 != -1) + -1);
    FUN_code_1bfa();
    Z = R15R14;
    *R15R14 = (byte)R25R24;
    R13R12 = CONCAT11(R17R16._1_1_ + R1R0._1_1_ +
                      (CARRY1((byte)R17R16,R1R0._1_1_) || 0xfe < (byte)((byte)R17R16 + R1R0._1_1_)),
                      (byte)R17R16 + R1R0._1_1_ + '\x01');
    FUN_code_1bfa();
    Z = R15R14;
    R15R14[1] = (byte)R25R24;
    R17R16._0_1_ = (byte)R13R12;
    R17R16._1_1_ = (byte)((uint)R13R12 >> 8);
    R17R16._1_1_ = R17R16._1_1_ - (((byte)R17R16 != -1) + -1);
    R17R16._0_1_ = (byte)R17R16 + 1;
    FUN_code_1bfa();
    Z = R15R14;
    R15R14[2] = (byte)R25R24;
    Z[4] = R17R16._1_1_;
    Z[3] = (byte)R17R16;
    R15R14._0_1_ = (byte)R17R16 + R1R0._1_1_ + 1;
    R15R14._1_1_ = R17R16._1_1_ + R1R0._1_1_ +
                   (CARRY1((byte)R17R16,R1R0._1_1_) || 0xfe < (byte)((byte)R17R16 + R1R0._1_1_));
    FUN_code_1bfa();
    R17R16._1_1_ = (byte)R25R24;
    FUN_code_1bfa();
    R25R24._0_1_ = (byte)R25R24 & 0x3f;
    R17R16._1_1_ = R17R16._1_1_ & 0x3f;
    bVar2 = ((byte)R25R24 + R17R16._1_1_) * '\x02';
    bVar1 = (byte)R15R14 + R1R0._1_1_ + 1;
    R19R18 = CONCAT11(R15R14._1_1_ + R1R0._1_1_ * '\x02' +
                      (CARRY1((byte)R15R14,R1R0._1_1_) || 0xfe < (byte)((byte)R15R14 + R1R0._1_1_))
                      + CARRY1(bVar1,bVar2),bVar1 + bVar2);
    R25R24 = R19R18;
    R11 = R11 + 1;
    R10 = R10 + 1;
    DAT_mem_017b = R11;
  }
  Yhi = uVar13;
  Ylo = uVar12;
  R17R16 = uVar11;
  R15R14 = (undefined1 *)uVar10;
  R13R12 = uVar9;
  R11 = uVar8;
  R10 = uVar7;
  R9 = uVar6;
  R8 = uVar5;
  R7 = uVar4;
  return;
}



/* entry=code:13e7 size=68 callers=1 callees=2 */

void FUN_code_13e7(undefined2 param_1,undefined2 R25R24,undefined1 param_3,char R22)

{
  char cVar1;
  
  cVar1 = (char)R25R24;
  R1R0 = (uint)(byte)R1R0;
  if (R22 != '\0') {
    FUN_code_0b38();
    DAT_mem_029b = R25R24._1_1_;
    DAT_mem_029a = (char)R25R24;
    FUN_code_136e();
  }
  R1R0._0_1_ = cVar1 * '\x05';
  R1R0._1_1_ = 0;
  FUN_code_0b38();
  DAT_mem_0179 = R25R24._1_1_;
  DAT_mem_0178 = (char)R25R24;
  if (R25R24 == 0) {
    R25R24 = (uint)R25R24._1_1_ << 8;
  }
  else {
    DAT_mem_017a = cVar1;
    DAT_mem_017b = R1R0._1_1_;
    R25R24 = CONCAT11(R25R24._1_1_,1);
  }
  return;
}



/* entry=code:1409 size=146 callers=1 callees=2 */

void FUN_code_1409(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  bool bVar7;
  
  uVar6 = Y;
  cVar4 = R20;
  uVar3 = R17R16;
  uVar2 = R14;
  R1 = 0;
  R17R16._0_1_ = (char)R25R24;
  R17R16._1_1_ = (char)(R25R24 >> 8);
  R17R16 = CONCAT11(R17R16._1_1_ - (((char)R17R16 != -1) + -1),(char)R17R16 + '\x01');
  FUN_code_1bfa();
  bVar1 = (byte)R25R24;
  Y = R17R16 + 1;
  FUN_code_1bfa();
  bVar5 = (byte)R25R24;
  R25R24 = CONCAT11(R25R24._1_1_,bVar1) & 0xff3f;
  if (cVar4 == '\0') {
    R20 = 0x3f;
    R14 = bVar5 & 0x3f;
    R25R24._0_1_ = bVar1 & 0x3f;
    bVar1 = (byte)R25R24 * '\x02';
    bVar7 = CARRY1((byte)R25R24,(byte)R25R24);
    R25R24 = CONCAT11(bVar7,bVar1);
    Y = CONCAT11(Y._1_1_ + bVar7 + CARRY1((byte)Y,bVar1),(byte)Y + bVar1);
    if ((bVar5 & 0x80) != 0) {
      FUN_code_1a6e();
    }
  }
  else {
    R14 = (byte)R25R24;
  }
  for (; R14 != 0; R14 = R14 - 1) {
    R17R16._0_1_ = (char)Y;
    R17R16._1_1_ = (char)((uint)Y >> 8);
    R17R16 = CONCAT11(R17R16._1_1_ - (((char)R17R16 != -1) + -1),(char)R17R16 + '\x01');
    FUN_code_1bfa();
    Y = Y + 2;
    FUN_code_1bfa();
    FUN_code_1a6e();
  }
  if ((cVar4 == '\0') && ((bVar5 & 0x80) != 0)) {
    FUN_code_1a6e();
  }
  Y = uVar6;
  R17R16 = uVar3;
  R14 = uVar2;
  return;
}



/* entry=code:1452 size=158 callers=2 callees=2 */

void FUN_code_1452(undefined2 param_1,undefined2 R25R24,undefined1 param_3,char R22,undefined1 R21,
                  byte R20,undefined1 R19,undefined1 R18,undefined1 unaff_R17,byte unaff_R16,
                  char unaff_R15)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = unaff_R16;
  uVar1 = unaff_R15;
  R1 = '\0';
  unaff_R16 = (byte)R25R24;
  unaff_R15 = R22;
  Z = (byte *)CONCAT11(DAT_mem_029b,DAT_mem_029a);
  if (Z != (byte *)0x0) {
    if (R22 != '\0') {
      Z = (byte *)CONCAT11(DAT_mem_029b + CARRY1(DAT_mem_029a,(byte)R25R24),
                           DAT_mem_029a + (byte)R25R24);
      *Z = DAT_mem_0177;
    }
    Z = (byte *)CONCAT11(DAT_mem_029b + R1 + CARRY1(DAT_mem_029a,unaff_R16),DAT_mem_029a + unaff_R16
                        );
  }
  if (DAT_mem_017c != '\0') {
    FUN_code_1338();
    if (R25R24 != 0) {
      FUN_code_1409();
      R21 = 1;
      goto LAB_code_147a;
    }
  }
  R21 = 0;
LAB_code_147a:
  R18 = unaff_R16;
  R25R24._0_1_ = unaff_R16 & 0xf8;
  R25R24._1_1_ = '\0';
  if ((byte)R25R24 == 0xe0 && (char)(R1 + ((byte)R25R24 < 0xe0)) == '\0') {
    R18 = unaff_R16 & 7;
    if (unaff_R15 == '\0') {
      R25R24._0_1_ = 1;
      R25R24._1_1_ = '\0';
      while (R18 = R18 - 1, -1 < (char)R18) {
        R25R24._1_1_ = R25R24._1_1_ * '\x02' + CARRY1((byte)R25R24,(byte)R25R24);
        R25R24._0_1_ = (byte)R25R24 * '\x02';
      }
      R25R24._0_1_ = ~(byte)R25R24;
      R20 = DAT_mem_0177 & (byte)R25R24;
    }
    else {
      R25R24._0_1_ = 1;
      R25R24._1_1_ = '\0';
      while (R18 = R18 - 1, -1 < (char)R18) {
        R25R24._1_1_ = R25R24._1_1_ * '\x02' + CARRY1((byte)R25R24,(byte)R25R24);
        R25R24._0_1_ = (byte)R25R24 * '\x02';
      }
      R20 = DAT_mem_0177 | (byte)R25R24;
    }
    DAT_mem_0177 = R20;
  }
  R25R24 = CONCAT11(R25R24._1_1_,R21);
  unaff_R16 = uVar2;
  unaff_R15 = uVar1;
  R19 = 0;
  return;
}



/* entry=code:14a1 size=16 callers=1 callees=0 */

undefined2 FUN_code_14a1(void)

{
  R1 = 0;
  R25 = DAT_mem_017d == '\0';
  R24 = R25;
  return CONCAT11(R25,R25);
}



/* entry=code:14a9 size=58 callers=1 callees=0 */

void FUN_code_14a9(undefined1 R23,undefined1 R22,undefined1 R21,undefined1 R20)

{
  byte bVar1;
  undefined2 uVar2;
  
  R1 = 0;
  R19R18 = R25R24;
  uVar2 = R19R18;
  R21 = 1;
  DAT_mem_029f = 1;
  R19R18._0_1_ = (undefined1)R25R24;
  if (DAT_mem_017d != '\0') {
    R25R24 = CONCAT11(R25R24._1_1_,0xff);
    R19R18 = uVar2;
    return;
  }
  bVar1 = EECR;
  if ((bVar1 & 2) == 0) {
    DAT_mem_029d = R23;
    DAT_mem_029c = R22;
    DAT_mem_02a1 = R25R24._1_1_;
    DAT_mem_02a0 = (undefined1)R19R18;
    DAT_mem_029e = R20;
    DAT_mem_017d = 1;
    bVar1 = EECR;
    EECR = bVar1 | 8;
    R25R24 = (uint)R25R24._1_1_ << 8;
    R19R18 = uVar2;
    return;
  }
  R25R24 = CONCAT11(R25R24._1_1_,0xfe);
  R19R18 = uVar2;
  return;
}



/* entry=code:14c6 size=258 callers=0 callees=1 */

void EE_READY_isr(undefined1 R23,undefined1 R22,undefined1 R21,undefined1 R20,undefined1 R19,
                 undefined1 R18)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char in_Cflg;
  char in_Zflg;
  char in_Nflg;
  char in_Vflg;
  char in_Sflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  uVar6 = Z;
  uVar5 = R25R24;
  uVar4 = R0;
  R25R24 = CONCAT11(DAT_mem_029d,DAT_mem_029c);
  iVar3 = CONCAT11(DAT_mem_02a1,DAT_mem_02a0);
  R0 = in_Cflg == '\x01' | (in_Zflg == '\x01') << 1 | (in_Nflg == '\x01') << 2 |
       (in_Vflg == '\x01') << 3 | (in_Sflg == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
       (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  SREG = R0;
  if (DAT_mem_029e == '\0') {
LAB_code_1500:
    bVar1 = EECR;
    EECR = bVar1 & 0xf7;
    DAT_mem_017d = 0;
  }
  else {
    if (DAT_mem_029f != '\0') {
      FUN_code_1bfa();
      cVar2 = (char)R25R24;
      while( true ) {
        Z = (char *)CONCAT11(DAT_mem_02a1,DAT_mem_02a0);
        R25R24._0_1_ = *Z;
        if (cVar2 != (char)R25R24) break;
        DAT_mem_029e = DAT_mem_029e + -1;
        R25R24 = CONCAT11(DAT_mem_02a1,DAT_mem_02a0);
        R25R24 = R25R24 + 1;
        iVar3 = R25R24;
        DAT_mem_02a1 = R25R24._1_1_;
        DAT_mem_02a0 = (char)R25R24;
        R25R24 = CONCAT11(DAT_mem_029d,DAT_mem_029c);
        R25R24 = R25R24 + 1;
        DAT_mem_029d = R25R24._1_1_;
        DAT_mem_029c = (char)R25R24;
        if (DAT_mem_029e == '\0') goto LAB_code_1500;
        FUN_code_1bfa();
        cVar2 = (char)R25R24;
      }
    }
    EEARH = DAT_mem_029d;
    EEAR = DAT_mem_029c;
    Z = (char *)CONCAT11(DAT_mem_02a1,DAT_mem_02a0);
    R25R24._0_1_ = *Z;
    EEDR = (char)R25R24;
    bVar1 = EECR;
    EECR = bVar1 | 4;
    bVar1 = EECR;
    EECR = bVar1 | 2;
    DAT_mem_029e = DAT_mem_029e + -1;
    R25R24 = CONCAT11(DAT_mem_02a1,DAT_mem_02a0);
    R25R24 = R25R24 + 1;
    iVar3 = R25R24;
    R25R24 = CONCAT11(DAT_mem_029d,DAT_mem_029c);
    R25R24 = R25R24 + 1;
  }
  DAT_mem_02a1 = (undefined1)((uint)iVar3 >> 8);
  DAT_mem_02a0 = (undefined1)iVar3;
  DAT_mem_029d = (undefined1)((uint)R25R24 >> 8);
  DAT_mem_029c = (undefined1)R25R24;
  Z = (char *)uVar6;
  R25R24 = uVar5;
  SREG = R0;
  R0 = uVar4;
  R1 = 0;
  return;
}



/* entry=code:1547 size=148 callers=2 callees=0 */

void FUN_code_1547(void)

{
  R1 = 0;
  Z = INT0_vect;
  SPMCSR = 9;
  R25R24 = CONCAT11(R25R24._1_1_,bCodebyte0002);
  if ((bCodebyte0002 & 8) == 0) {
    UDCON = 1;
    USBCON = 0x20;
    UCSR1B = 0;
    R25R24 = 20000;
    do {
      R25R24 = R25R24 + -1;
    } while (R25R24 != 0);
    EIMSK = 0;
    PCICR = 0;
    SPCR = 0;
    ACSR = 0;
    EECR = 0;
    ADCSRA = 0;
    TIMSK0 = 0;
    TIMSK1 = 0;
    DAT_mem_0070 = 0;
    TIMSK3 = 0;
    UCSR1B = 0;
    TWCR = 0;
    DDRB = 0;
    DDRC = 0;
    DDRD = 0;
    DDRE = 0;
    DDRF = 0;
    PORTB = 0;
    PORTC = 0;
    PORTD = 0;
    PORTE = 0;
    PORTF = 0;
    SPMCSR = 9;
    R18 = bCodebyte0003 & 6;
    R18 = R18 >> 1;
    R18 = R18 ^ 3;
    R25R24._1_1_ = '\x02';
    while (R18 = R18 - 1, -1 < (char)R18) {
      R25R24._1_1_ = R25R24._1_1_ * '\x02';
    }
    Z = (code *)((uint)(byte)(0x80 - R25R24._1_1_) << 8);
    (*Z)();
  }
  return;
}



/* entry=code:1591 size=14 callers=1 callees=0 */

void FUN_code_1591(undefined1 param_1,undefined1 R24,undefined1 R23,undefined1 R22)

{
  R1 = 0;
  DAT_mem_0182 = R24;
  DAT_mem_0184 = R23;
  DAT_mem_0183 = R22;
  return;
}



/* entry=code:1598 size=40 callers=1 callees=0 */

char FUN_code_1598(char R25,byte R24)

{
  R1 = 0;
  R18 = R24 + '(';
  if (R18 != '\0') {
    R24 = 1;
    R25 = '\0';
    while (R18 = R18 + -1, -1 < (char)R18) {
      R25 = R25 * '\x02' + CARRY1(R24,R24);
      R24 = R24 * '\x02';
    }
    R18 = DAT_mem_011f ^ R24;
    DAT_mem_011f = R18;
    return R25;
  }
  R24 = 1;
  DAT_mem_011f = 1;
  return R25;
}



/* entry=code:15ac size=38 callers=3 callees=1 */

byte FUN_code_15ac(void)

{
  byte bVar1;
  
  R1 = 0;
  FUN_code_1bfa(0,0);
  bVar1 = R24;
  FUN_code_1bfa(0,1);
  R25 = R24 ^ 0x43;
  R24 = bVar1 ^ 0x53;
  R25 = R25 | R24;
  R18 = R25 == 0;
  R24 = R25 == 0;
  return R25;
}



/* entry=code:15bf size=44 callers=1 callees=3 */

void FUN_code_15bf(void)

{
  char cVar1;
  
  R1 = 0;
  FUN_code_15ac();
  if ((byte)R25R24 != '\0') {
    FUN_code_1c02();
    R19R18 = R25R24;
    if (R25R24 != 0) {
      cVar1 = R25R24._1_1_ - (((byte)R25R24 < 0xf7) + '\x03');
      R19R18 = CONCAT11(cVar1,(byte)R25R24 + 9);
      if (cVar1 < '\0' !=
          (SBORROW1(R25R24._1_1_,'\x03') != SBORROW1(R25R24._1_1_ + -3,(byte)R25R24 < 0xf7))) {
        FUN_code_1bfa();
        if ((byte)R25R24 == '\x01') {
          FUN_code_1bfa();
          return;
        }
      }
    }
  }
  R25R24 = R25R24 & 0xff00;
  return;
}



/* entry=code:15d5 size=108 callers=1 callees=1 */

void FUN_code_15d5(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  
  bVar4 = R22;
  uVar3 = R17;
  uVar2 = R16;
  R1 = 0;
  R17 = R20;
  R16 = 0;
  while( true ) {
    uVar6 = R25R24;
    if (bVar4 <= R16) {
      R25R24 = CONCAT11(R25R24._1_1_,1);
      R17 = uVar3;
      R16 = uVar2;
      return;
    }
    if (R17 < 5) break;
    FUN_code_1bfa();
    R18 = (byte)R25R24;
    FUN_code_1bfa();
    bVar5 = (byte)R25R24;
    R25R24._1_1_ = (byte)R25R24 & 0x3f;
    bVar7 = R25R24._1_1_;
    R25R24 = (uint)R25R24._1_1_ << 8;
    if (bVar7 != 0) {
      R25R24 = CONCAT11(bVar5,DAT_mem_0181) & 0x3fff;
      DAT_mem_0181 = (byte)R25R24 + '\x01';
      R25R24 = CONCAT11(R25R24._1_1_,DAT_mem_0181);
    }
    R18 = R18 & 0x3f;
    cVar1 = R18 + R25R24._1_1_;
    R18 = cVar1 * '\x02';
    R20 = R17 - 5;
    if (R20 < R18) break;
    R25R24 = uVar6 + 5;
    R25R24 = CONCAT11(R25R24._1_1_ + CARRY1((byte)R25R24,R18),(byte)R25R24 + R18);
    R17 = R20 + cVar1 * -2;
    R16 = R16 + 1;
  }
  R25R24 = R25R24 & 0xff00;
  R1 = 0;
  R16 = uVar2;
  R17 = uVar3;
  return;
}



/* entry=code:160b size=32 callers=1 callees=1 */

undefined1 FUN_code_160b(undefined1 R25,undefined1 R24,undefined1 R23)

{
  R1 = 0;
  FUN_code_1c07(0,3,R23,0);
  FUN_code_1c07(0,2,R23,0);
  FUN_code_1c07(0,1,R23,0x43);
  FUN_code_1c07(0,0,R23,0x53);
  return R25;
}



/* entry=code:161b size=10 callers=1 callees=2 */

void FUN_code_161b(void)

{
  R1 = 0;
  FUN_code_15ac();
  if (R24 == '\0') {
    FUN_code_160b();
    return;
  }
  return;
}



/* entry=code:1620 size=488 callers=1 callees=7 */

void FUN_code_1620(void)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined2 uVar9;
  bool bVar10;
  
  uVar9 = Y;
  iVar8 = R25R24;
  cVar6 = R22;
  cVar7 = (char)R21R20;
  uVar4 = R17R16;
  uVar3 = R15;
  uVar2 = R11R10;
  R1 = 0;
  FUN_code_1bfa();
  R17R16 = CONCAT11((byte)R25R24,(byte)R25R24) & 0x7ff;
  if (((char)R21R20 == '\0') &&
     (((R17R16._1_1_ == '\x01' || (R17R16._1_1_ == '\0')) || (R17R16._1_1_ == '\x02')))) {
    FUN_code_11a2();
  }
  R21R20 = R17R16 & 0xff;
  R18 = DAT_mem_011f;
  R25R24._0_1_ = (byte)R17R16 & 0x38;
  Zlo = '\x03';
  do {
    R25R24._0_1_ = (byte)R25R24 >> 1;
    Zlo = Zlo + -1;
  } while (Zlo != '\0');
  while( true ) {
    R19 = '\0';
    R25R24._0_1_ = (byte)R25R24 - 1;
    if ((char)(byte)R25R24 < '\0') break;
    R18 = R18 >> 1;
  }
  cVar1 = '\0';
  if ((R18 & 1) == 0) {
joined_c0x1659:
    R25R24._1_1_ = 0;
    Zlo = cVar1;
joined_c0x1659:
    if (cVar7 == '\0') {
      FUN_code_11a2();
    }
    goto LAB_code_1709;
  }
  Y = iVar8 + 2;
  R23 = 0xfe;
  R15 = cVar6 + -2;
  if ((R17R16 & 0x40) != 0) {
    FUN_code_1bfa();
    R18 = DAT_mem_0182 - 1;
    R19 = -(DAT_mem_0182 == '\0');
    while (R18 = R18 - 1, -1 < (char)R18) {
      R25R24._0_1_ = (byte)R25R24 >> 1;
    }
    cVar1 = Zlo;
    if (((byte)R25R24 & 1) == 0) goto joined_c0x1659;
    Y = iVar8 + 3;
    R22 = 0xfd;
    R15 = cVar6 + -3;
  }
  R25R24._1_1_ = 0;
  if ((R17R16 & 0x80) != 0) {
    FUN_code_1c02();
    R18 = DAT_mem_0183;
    R19 = DAT_mem_0184;
    if ((byte)R25R24 != DAT_mem_0183 ||
        R25R24._1_1_ != (byte)(DAT_mem_0184 + ((byte)R25R24 < DAT_mem_0183))) goto joined_c0x1659;
    Y = Y + 2;
    R18 = 0xfe;
    R15 = R15 + -2;
  }
  uVar5 = R17R16;
  cVar6 = R17R16._1_1_;
  bVar10 = R17R16._1_1_ == '\x01';
  R17R16._0_1_ = (byte)Y;
  R17R16._1_1_ = (char)((uint)Y >> 8);
  if (bVar10) {
    R17R16 = CONCAT11(R17R16._1_1_ - (((byte)R17R16 != -1) + -1),(byte)R17R16 + '\x01');
    FUN_code_1bfa();
    FUN_code_1bfa();
    R22 = (byte)R25R24;
    R25R24._1_1_ = CARRY1((byte)R25R24,(byte)R25R24);
    R18 = R15 - 2;
    R19 = '\0';
    if ((byte)((byte)R25R24 * '\x02') == R18 &&
        (bool)R25R24._1_1_ == (byte)((byte)R25R24 * '\x02') < R18) {
      if (cVar7 != '\0') {
        FUN_code_1283();
      }
      goto LAB_code_1709;
    }
  }
  else if (cVar6 == '\0') {
    R17R16 = uVar5;
    FUN_code_1bfa();
    R21R20 = CONCAT11(R21R20._1_1_,(byte)R25R24);
    R11R10 = (uint)(byte)R25R24;
    R18 = (byte)R25R24 * '\x02';
    R19 = CARRY1((byte)R25R24,(byte)R25R24);
    R15 = R15 - 1;
    if (R18 == R15 && (bool)R19 == R18 < R15) {
      if (cVar7 == '\0') {
        DAT_mem_017e = DAT_mem_017e + (byte)R25R24;
      }
      R25R24._1_1_ = 0;
      R17R16._0_1_ = 0;
      R17R16._1_1_ = '\0';
      while( true ) {
        if ((char)(R17R16._1_1_ - (R11R10._1_1_ + ((byte)R17R16 < (byte)R11R10))) < '\0' ==
            (SBORROW1(R17R16._1_1_,R11R10._1_1_) !=
            SBORROW1(R17R16._1_1_ - R11R10._1_1_,(byte)R17R16 < (byte)R11R10))) break;
        FUN_code_1bfa();
        FUN_code_1bfa();
        R22 = (byte)R25R24;
        if (cVar7 == '\0') {
          if (DAT_mem_017f < (byte)R25R24) {
            DAT_mem_017f = (byte)R25R24;
          }
        }
        else {
          FUN_code_1258();
        }
        R17R16._1_1_ = R17R16._1_1_ - (((byte)R17R16 != 0xff) + -1);
        R17R16._0_1_ = (byte)R17R16 + 1;
      }
      goto LAB_code_1709;
    }
  }
  else {
    if (cVar6 != '\x02') goto LAB_code_1702;
    R17R16 = CONCAT11(R17R16._1_1_ - (((byte)R17R16 != -1) + -1),(byte)R17R16 + '\x01');
    FUN_code_1bfa();
    cVar6 = (byte)R25R24;
    if (cVar7 != '\0') {
      FUN_code_1382();
LAB_code_1709:
      R25R24 = CONCAT11(R25R24._1_1_,1);
      Y = uVar9;
      R17R16 = uVar4;
      R15 = uVar3;
      R11R10 = uVar2;
      return;
    }
    FUN_code_15d5();
    if ((byte)R25R24 != '\0') {
      DAT_mem_0180 = DAT_mem_0180 + cVar6;
      goto LAB_code_1709;
    }
  }
  FUN_code_11a2();
LAB_code_1702:
  R25R24 = (uint)R25R24._1_1_ << 8;
  R1 = 0;
  R11R10 = uVar2;
  R15 = uVar3;
  R17R16 = uVar4;
  Y = uVar9;
  return;
}



/* entry=code:1714 size=368 callers=2 callees=15 */

void FUN_code_1714(void)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  bool bVar5;
  
  uVar4 = R17R16;
  uVar3 = R15R14;
  R1 = 0;
  thunk_FUN_code_135b();
  FUN_code_124d();
  FUN_code_0b59();
  DAT_mem_017e = 0;
  DAT_mem_017f = 0;
  DAT_mem_0180 = 0;
  DAT_mem_0181 = 0;
  FUN_code_15ac();
  if ((byte)R25R24 != '\0') {
    FUN_code_1c02();
    R17R16 = R25R24;
    R15R14._0_1_ = (byte)R25R24 - 4;
    R15R14._1_1_ = R25R24._1_1_ + -1 + (3 < (byte)R25R24);
    FUN_code_11a2();
    FUN_code_119a();
    thunk_FUN_code_0d31();
    bVar1 = (byte)R17R16 - 5;
    bVar2 = R17R16._1_1_ - ((byte)R17R16 < 5);
    R17R16._0_1_ = (byte)R17R16 + 5;
    bVar5 = bVar1 < 0xf6;
    R17R16._1_1_ = bVar2 - (bVar5 + '\x03');
    if (((bVar2 < 3 || (byte)(bVar2 - 3) < bVar5) && (FUN_code_1bfa(), (byte)R25R24 == '\x01')) &&
       (FUN_code_1bfa(), (byte)R25R24 < 2)) {
      while ((char)-(R15R14._1_1_ + ((byte)R15R14 != 0)) < '\0' !=
             (SBORROW1('\0',R15R14._1_1_) != SBORROW1(-R15R14._1_1_,(byte)R15R14 != 0))) {
        FUN_code_1bfa();
        R17R16._1_1_ = (byte)R25R24;
        FUN_code_1190();
        thunk_FUN_code_0d31();
        FUN_code_119a();
        thunk_FUN_code_0d31();
        if ((R17R16._1_1_ < 5) || (FUN_code_1620(), (byte)R25R24 == '\0')) goto LAB_code_17a1;
        thunk_FUN_code_0d31();
        R15R14._1_1_ = R15R14._1_1_ - ((byte)R15R14 < R17R16._1_1_);
        R15R14._0_1_ = (byte)R15R14 - R17R16._1_1_;
      }
      FUN_code_11a2();
      FUN_code_1190();
      thunk_FUN_code_0d31();
      FUN_code_11a2();
      FUN_code_1190();
      thunk_FUN_code_0d31();
      FUN_code_11a2();
      FUN_code_1190();
      thunk_FUN_code_0d31();
      FUN_code_12cf();
      if ((byte)R25R24 != '\0') {
        FUN_code_13e7();
        if ((byte)R25R24 != '\0') {
          FUN_code_11a2();
          FUN_code_1c02();
          R17R16._1_1_ = R25R24._1_1_ - ((byte)R25R24 < 4);
          R17R16._0_1_ = (byte)R25R24 - 4;
          while( true ) {
            if ((char)-(R17R16._1_1_ + ((byte)R17R16 != 0)) < '\0' ==
                (SBORROW1('\0',R17R16._1_1_) != SBORROW1(-R17R16._1_1_,(byte)R17R16 != 0))) {
              FUN_code_1331();
              R25R24 = CONCAT11(R25R24._1_1_,1);
              R1 = 0;
              R15R14 = uVar3;
              R17R16 = uVar4;
              return;
            }
            FUN_code_1bfa();
            R15R14._1_1_ = (byte)R25R24;
            FUN_code_1620();
            if ((byte)R25R24 == '\0') break;
            R17R16._1_1_ = R17R16._1_1_ - ((byte)R17R16 < R15R14._1_1_);
            R17R16._0_1_ = (byte)R17R16 - R15R14._1_1_;
          }
          goto LAB_code_17c4;
        }
        FUN_code_123a();
        FUN_code_0b59();
      }
LAB_code_17a1:
      FUN_code_11a2();
    }
  }
LAB_code_17c4:
  R25R24 = (uint)R25R24._1_1_ << 8;
  R17R16 = uVar4;
  R15R14 = uVar3;
  return;
}



/* entry=code:17cc size=1080 callers=1 callees=11 */

/* WARNING: Removing unreachable block (code,0x1858) */
/* WARNING: Removing unreachable block (code,0x18be) */
/* WARNING: Removing unreachable block (code,0x17f7) */
/* WARNING: Removing unreachable block (code,0x17fc) */
/* WARNING: Removing unreachable block (code,0x1802) */
/* WARNING: Removing unreachable block (code,0x1804) */
/* WARNING: Removing unreachable block (code,0x187d) */
/* WARNING: Removing unreachable block (code,0x1805) */
/* WARNING: Removing unreachable block (code,0x1808) */
/* WARNING: Removing unreachable block (code,0x1807) */
/* WARNING: Removing unreachable block (code,0x17fe) */
/* WARNING: Removing unreachable block (code,0x1801) */
/* WARNING: Removing unreachable block (code,0x180d) */
/* WARNING: Removing unreachable block (code,0x1814) */
/* WARNING: Removing unreachable block (code,0x181a) */
/* WARNING: Removing unreachable block (code,0x1825) */
/* WARNING: Removing unreachable block (code,0x1800) */
/* WARNING: Removing unreachable block (code,0x17fb) */
/* WARNING: Removing unreachable block (code,0x1846) */
/* WARNING: Removing unreachable block (code,0x1860) */
/* WARNING: Removing unreachable block (code,0x1861) */
/* WARNING: Removing unreachable block (code,0x18e3) */
/* WARNING: Removing unreachable block (code,0x18c7) */
/* WARNING: Removing unreachable block (code,0x18cc) */
/* WARNING: Removing unreachable block (code,0x18d8) */
/* WARNING: Removing unreachable block (code,0x18e2) */
/* WARNING: Removing unreachable block (code,0x18d7) */
/* WARNING: Removing unreachable block (code,0x18cb) */
/* WARNING: Removing unreachable block (code,0x1940) */
/* WARNING: Removing unreachable block (code,0x1944) */
/* WARNING: Removing unreachable block (code,0x1947) */
/* WARNING: Removing unreachable block (code,0x1949) */
/* WARNING: Removing unreachable block (code,0x1946) */
/* WARNING: Removing unreachable block (code,0x194a) */
/* WARNING: Removing unreachable block (code,0x1951) */
/* WARNING: Removing unreachable block (code,0x1954) */
/* WARNING: Removing unreachable block (code,0x1955) */
/* WARNING: Restarted to delay deadcode elimination for space: mem */

void FUN_code_17cc(undefined1 R23,undefined1 R22)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  bVar4 = DAT_mem_0191;
  bVar1 = DAT_mem_0189;
  uVar9 = Y;
  uVar8 = R17R16;
  pbVar7 = R15R14;
  cVar10 = DAT_mem_0189 < 3;
  if (DAT_mem_0189 == 3) {
    FUN_code_14a1();
    bVar6 = DAT_mem_0194;
    bVar5 = DAT_mem_018d;
    bVar4 = DAT_mem_018c;
    if ((byte)R25R24 == '\0') {
      cVar15 = '\0';
      R25R24 = CONCAT11(R25R24._1_1_,3);
      cVar14 = '\0';
      cVar13 = '\x01';
      cVar16 = '\0';
    }
    else {
      Y = CONCAT11(DAT_mem_018d,DAT_mem_018c);
      X = CONCAT11(X._1_1_,2);
      R15R14 = &DAT_mem_02a7;
      R17R16 = Y;
      while (bVar2 = (byte)R17R16, (byte)((byte)R17R16 - bVar4) < bVar6) {
        FUN_code_1bfa();
        Z = R15R14 + 1;
        R25R24._1_1_ = *R15R14;
        R15R14 = Z;
        cVar10 = bVar2 < R25R24._1_1_;
        cVar15 = SBORROW1(bVar2,R25R24._1_1_);
        cVar14 = (char)(bVar2 - R25R24._1_1_) < '\0';
        cVar13 = bVar2 == R25R24._1_1_;
        cVar16 = (char)bVar2 < (char)R25R24._1_1_;
        if (!(bool)cVar13) goto LAB_code_1923;
        R17R16 = CONCAT11(R17R16._1_1_ - (((byte)R17R16 != -1) + -1),(byte)R17R16 + '\x01');
      }
      bVar2 = DAT_mem_018a - bVar6;
      DAT_mem_018b = DAT_mem_018b - (DAT_mem_018a < bVar6);
      DAT_mem_018c = bVar6 + bVar4;
      DAT_mem_018d = bVar5 + CARRY1(bVar6,bVar4);
      cVar10 = CARRY1(bVar5,CARRY1(bVar6,bVar4));
      R25R24._0_1_ = bVar2 | DAT_mem_018b;
      cVar14 = (char)(byte)R25R24 < '\0';
      DAT_mem_018a = bVar2;
      if ((byte)R25R24 == 0) {
        DAT_mem_018e = DAT_mem_018c - 4;
        DAT_mem_018f = DAT_mem_018d - (DAT_mem_018c < 4);
        cVar10 = DAT_mem_018d < (DAT_mem_018c < 4);
        FUN_code_14a9(1,0x8e,0,2);
        cVar15 = false;
        cVar14 = true;
        cVar13 = false;
        cVar16 = cVar14;
LAB_code_1923:
        DAT_mem_02a2 = 1;
        FUN_code_1158();
        R25R24._1_1_ = 2;
        goto LAB_code_1998;
      }
LAB_code_190c:
      cVar13 = '\0';
      cVar15 = '\0';
      DAT_mem_02a2 = 3;
      cVar16 = cVar14;
      FUN_code_1158();
LAB_code_1913:
      R25R24 = 0x202;
    }
  }
  else {
    if (DAT_mem_0189 < 4) {
      cVar10 = DAT_mem_0189 == 0;
      if (DAT_mem_0189 == 1) {
        FUN_code_14a1();
        cVar14 = false;
        goto LAB_code_190c;
      }
      if (DAT_mem_0189 < 2) {
        FUN_code_112a();
        R25R24._1_1_ = DAT_mem_011f;
        cVar10 = DAT_mem_011f < DAT_mem_011e;
        cVar15 = SBORROW1(DAT_mem_011f,DAT_mem_011e);
        cVar14 = (char)(DAT_mem_011f - DAT_mem_011e) < '\0';
        cVar13 = DAT_mem_011f == DAT_mem_011e;
        cVar16 = (char)DAT_mem_011f < (char)DAT_mem_011e;
        if (!(bool)cVar13) {
          FUN_code_1714();
          DAT_mem_011e = DAT_mem_011f;
        }
        goto LAB_code_1998;
      }
      FUN_code_112a();
      cVar10 = '\x01';
      cVar15 = '\0';
      cVar14 = '\0';
      cVar13 = '\0';
      cVar16 = '\0';
      goto LAB_code_1913;
    }
    Z = (byte *)CONCAT11(Z._1_1_,5);
    if (DAT_mem_0189 == 5) {
      FUN_code_112a();
      cVar16 = '\0';
      cVar15 = '\0';
      cVar14 = '\0';
      cVar13 = '\0';
      cVar10 = '\x01';
      R25R24 = 0x205;
    }
    else {
      cVar10 = DAT_mem_0189 < 5;
      if ((bool)cVar10) {
        FUN_code_14a1();
        cVar15 = '\0';
        cVar14 = (char)(byte)R25R24 < '\0';
        cVar13 = (byte)R25R24 == '\0';
        cVar16 = cVar14;
        if ((bool)cVar13) {
          cVar15 = '\0';
          R25R24 = CONCAT11(R25R24._1_1_,4);
        }
        else {
          DAT_mem_02a2 = 4;
          FUN_code_1158();
          FUN_code_1714();
          R25R24._1_1_ = 2;
LAB_code_1998:
          R25R24 = (uint)R25R24._1_1_ << 8;
        }
      }
      else {
        Z = (byte *)0x605;
        cVar10 = DAT_mem_0189 < 6;
        cVar15 = SBORROW1(DAT_mem_0189,'\x06');
        cVar14 = (char)(DAT_mem_0189 - 6) < '\0';
        cVar13 = DAT_mem_0189 == 6;
        cVar16 = (char)DAT_mem_0189 < '\x06';
        if (!(bool)cVar13) goto LAB_code_199b;
        in_Hflg = in_Hflg == '\x01';
        in_Tflg = in_Tflg == '\x01';
        in_Iflg = in_Iflg == '\x01';
        R25R24._0_1_ = in_Hflg << 5 | 2U | in_Tflg << 6 | in_Iflg << 7;
        SREG = (byte)R25R24;
        X = CONCAT11(DAT_mem_0193,DAT_mem_0192);
        bVar5 = DAT_mem_0136 - DAT_mem_0190;
        bVar6 = DAT_mem_0137 - (DAT_mem_0191 + (DAT_mem_0136 < DAT_mem_0190));
        bVar11 = DAT_mem_0137 < DAT_mem_0191 ||
                 (byte)(DAT_mem_0137 - DAT_mem_0191) < (DAT_mem_0136 < DAT_mem_0190);
        bVar2 = DAT_mem_0138 - (DAT_mem_0192 + bVar11);
        bVar3 = DAT_mem_0139 -
                (DAT_mem_0193 +
                (DAT_mem_0138 < DAT_mem_0192 || (byte)(DAT_mem_0138 - DAT_mem_0192) < bVar11));
        bVar12 = bVar6 < 3 || (byte)(bVar6 - 3) < (bVar5 < 0xe9);
        bVar11 = bVar2 < bVar12;
        cVar15 = SBORROW1(bVar3,bVar11);
        cVar10 = bVar3 < bVar11;
        cVar14 = (char)(bVar3 - bVar11) < '\0';
        cVar16 = (char)bVar3 < bVar11;
        cVar13 = ((bVar5 == 0xe9 && bVar6 == (byte)((bVar5 < 0xe9) + 3U)) && (bool)bVar2 == bVar12)
                 && (bool)bVar3 == bVar11;
        if (!(bool)cVar10) {
          FUN_code_1547();
          R25R24._1_1_ = bVar4;
          goto LAB_code_1998;
        }
        Z = (byte *)0x605;
        R25R24 = CONCAT11(DAT_mem_0191,6);
      }
    }
  }
  DAT_mem_0189 = (byte)R25R24;
LAB_code_199b:
  R1 = 0;
  R25R24._0_1_ = cVar10 == '\x01' | (cVar13 == '\x01') << 1 | (cVar14 == '\x01') << 2 |
                 (cVar15 == '\x01') << 3 | (cVar16 == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
                 (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  R18 = DAT_mem_0136;
  R19 = DAT_mem_0137;
  R21R20 = CONCAT11(DAT_mem_0139,DAT_mem_0138);
  SREG = (byte)R25R24;
  R25R24 = CONCAT11(R25R24._1_1_,DAT_mem_0189);
  if ((DAT_mem_0189 == 0) || (DAT_mem_0189 != bVar1)) {
    DAT_mem_0185 = DAT_mem_0136;
    DAT_mem_0186 = DAT_mem_0137;
    DAT_mem_0187 = DAT_mem_0138;
    DAT_mem_0188 = DAT_mem_0139;
  }
  else {
    R25R24 = CONCAT11(DAT_mem_0186,DAT_mem_0185);
    X = CONCAT11(DAT_mem_0188,DAT_mem_0187);
    bVar1 = DAT_mem_0136 - DAT_mem_0185;
    bVar4 = DAT_mem_0137 - (DAT_mem_0186 + (DAT_mem_0136 < DAT_mem_0185));
    bVar11 = DAT_mem_0137 < DAT_mem_0186 ||
             (byte)(DAT_mem_0137 - DAT_mem_0186) < (DAT_mem_0136 < DAT_mem_0185);
    bVar5 = DAT_mem_0138 - (DAT_mem_0187 + bVar11);
    bVar6 = DAT_mem_0139 -
            (DAT_mem_0188 +
            (DAT_mem_0138 < DAT_mem_0187 || (byte)(DAT_mem_0138 - DAT_mem_0187) < bVar11));
    R18 = bVar1 + 0x77;
    R19 = bVar4 - ((bVar1 < 0x89) + '\x13');
    bVar12 = bVar4 < 0x13 || (byte)(bVar4 - 0x13) < (bVar1 < 0x89);
    bVar11 = bVar5 < bVar12;
    R21R20 = CONCAT11(bVar6 - bVar11,bVar5 - bVar12);
    if (bVar11 <= bVar6) {
      DAT_mem_0189 = 0;
    }
  }
  Y = uVar9;
  R17R16 = uVar8;
  R15R14 = pbVar7;
  return;
}



/* entry=code:19e8 size=76 callers=2 callees=0 */

void FUN_code_19e8(undefined2 param_1,undefined2 R25R24,undefined1 param_3,char R22)

{
  R1 = 0;
  R25R24._1_1_ = (byte)R25R24 & 7;
  R18 = 1;
  R19 = 0;
  while (R25R24._1_1_ = R25R24._1_1_ - 1, -1 < (char)R25R24._1_1_) {
    R18 = R18 * '\x02';
  }
  R25R24._0_1_ = (byte)R25R24 >> 3;
  if (R22 == '\0') {
    Z = (byte *)CONCAT11(-(((byte)R25R24 < 0x1d) + -3),(byte)R25R24 - 0x1d);
    R25R24._1_1_ = *Z;
    R25R24._0_1_ = R18 & R25R24._1_1_;
    if ((byte)R25R24 != 0) {
      R18 = ~R18;
      R18 = R18 & R25R24._1_1_;
      *Z = R18;
      R25R24 = (uint)R25R24._1_1_ << 8;
      return;
    }
  }
  else {
    Z = (byte *)CONCAT11(-(((byte)R25R24 < 0x1d) + -3),(byte)R25R24 - 0x1d);
    R25R24._1_1_ = *Z;
    R25R24._0_1_ = R18 & R25R24._1_1_;
    if ((byte)R25R24 == 0) {
      R18 = R18 | R25R24._1_1_;
      *Z = R18;
      return;
    }
  }
  R25R24 = CONCAT11(R25R24._1_1_,1);
  return;
}



/* entry=code:1a0e size=6 callers=1 callees=0 */

void FUN_code_1a0e(void)

{
  R1 = 0;
  R24 = DAT_mem_0141;
  return;
}



/* entry=code:1a11 size=6 callers=2 callees=0 */

void FUN_code_1a11(void)

{
  R1 = 0;
  R24 = DAT_mem_0119;
  return;
}



/* entry=code:1a14 size=8 callers=1 callees=3 */

void FUN_code_1a14(void)

{
  R1 = 0;
  FUN_code_0b77();
  FUN_code_161b();
  FUN_code_124d();
  return;
}



/* entry=code:1a18 size=20 callers=2 callees=3 */

void FUN_code_1a18(void)

{
  undefined1 *puVar1;
  
  R1 = 0;
  Z = &DAT_mem_02e3;
  do {
    puVar1 = Z;
    Z = Z + 1;
    *puVar1 = R1;
  } while ((byte)Z != 3 || Z._1_1_ != (char)(((byte)Z < 3) + '\x03'));
  FUN_code_126f();
  FUN_code_136e();
  FUN_code_1aa9();
  return;
}



/* entry=code:1a22 size=6 callers=1 callees=1 */

undefined1 FUN_code_1a22(undefined1 R25,undefined1 R24,undefined1 R23)

{
  R1 = 0;
  FUN_code_1a6e(R25,0xb,R23,0);
  return R25;
}



/* entry=code:1a25 size=62 callers=2 callees=6 */

undefined1 FUN_code_1a25(undefined1 R25,char R24)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = R24;
  R1 = 0;
  FUN_code_19e8();
  if (R24 == '\0') {
    thunk_FUN_code_0d31(R25,0x2d);
    FUN_code_1190(R25,uVar1);
    thunk_FUN_code_0d31(R25,0x20);
    FUN_code_11cc(R25,uVar1,R23,0);
    cVar2 = R24;
    if (R24 != '\0') {
      FUN_code_1452();
      if (R24 == '\0') {
        FUN_code_1a6e(R25,3,R23,cVar2);
      }
    }
  }
  return R25;
}



/* entry=code:1a44 size=62 callers=2 callees=6 */

undefined1 FUN_code_1a44(undefined1 R25,char R24)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = R24;
  R1 = 0;
  FUN_code_19e8();
  if (R24 == '\0') {
    thunk_FUN_code_0d31(R25,0x2b);
    FUN_code_1190(R25,uVar1);
    thunk_FUN_code_0d31(R25,0x20);
    FUN_code_11cc(R25,uVar1,R23,1);
    cVar2 = R24;
    if (R24 != '\0') {
      FUN_code_1452();
      if (R24 == '\0') {
        FUN_code_1a6e(R25,2,R23,cVar2);
      }
    }
  }
  return R25;
}



/* entry=code:1a63 size=22 callers=1 callees=1 */

/* WARNING: Restarted to delay deadcode elimination for space: mem */

void FUN_code_1a63(void)

{
  char cVar1;
  
  R1 = 0;
  R25R24 = (uint)(byte)DAT_mem_0196;
  R25R24 = R25R24 - 1;
  cVar1 = (byte)R25R24 - DAT_mem_0195;
  R25R24._1_1_ = R25R24._1_1_ - ((byte)R25R24 < (byte)DAT_mem_0195);
  FUN_code_1bc3(R25R24._1_1_,cVar1,0,0x50);
  R25R24 = CONCAT11(R25R24._1_1_,cVar1);
  return;
}



/* entry=code:1a6e size=64 callers=4 callees=2 */

/* WARNING: Restarted to delay deadcode elimination for space: mem */

void FUN_code_1a6e(void)

{
  undefined1 uVar1;
  char cVar2;
  
  uVar1 = R22;
  R1 = 0;
  cVar2 = (byte)R25R24;
  FUN_code_1a63();
  if ((byte)R25R24 != '\0') {
    R25R24 = (uint)DAT_mem_0195;
    Z = (undefined1 *)
        CONCAT11(CARRY1(DAT_mem_0195,DAT_mem_0195) - (((byte)(DAT_mem_0195 * '\x02') < 0xf5) + -4),
                 DAT_mem_0195 * '\x02' + 0xb);
    R20 = uVar1;
    Z[1] = cVar2;
    *Z = R20;
    R25R24._0_1_ = (char)R25R24 + 1;
    FUN_code_1bc3(R25R24._1_1_,(byte)R25R24,0,0x50);
    DAT_mem_0195 = (byte)R25R24;
  }
  return;
}



/* entry=code:1a8e size=54 callers=1 callees=1 */

/* WARNING: Restarted to delay deadcode elimination for space: mem */

void FUN_code_1a8e(undefined2 param_1,undefined2 R25R24,undefined1 R23,undefined1 R22)

{
  R1 = 0;
  if (DAT_mem_0195 == DAT_mem_0196) {
    Z = (undefined2 *)0x0;
  }
  else {
    Z = (undefined2 *)
        CONCAT11(CARRY1(DAT_mem_0196,DAT_mem_0196) - (((byte)(DAT_mem_0196 * '\x02') < 0xf5) + -4),
                 DAT_mem_0196 * '\x02' + 0xb);
    Z = (undefined2 *)*Z;
    R25R24._0_1_ = DAT_mem_0196 + 1;
    FUN_code_1bc3(0,(byte)R25R24,0,0x50);
    DAT_mem_0196 = (byte)R25R24;
  }
  R25R24 = Z;
  return;
}



/* entry=code:1aa9 size=10 callers=1 callees=0 */

void FUN_code_1aa9(void)

{
  R1 = 0;
  R24 = DAT_mem_0195;
  DAT_mem_0196 = DAT_mem_0195;
  return;
}



/* entry=code:1aae size=554 callers=1 callees=11 */

void FUN_code_1aae(void)

{
  undefined2 uVar1;
  
  uVar1 = R17R16;
  R1 = 0;
  if ((DAT_mem_013d != '\0') || (DAT_mem_013e != '\0')) {
    R25R24 = CONCAT11(R25R24._1_1_,DAT_mem_013e);
    if (DAT_mem_013e != '\0') {
      R1 = 0;
      return;
    }
    R25R24 = CONCAT11(DAT_mem_0195,DAT_mem_0196);
    if (DAT_mem_0195 == DAT_mem_0196) {
      R1 = 0;
      return;
    }
    FUN_code_0b95();
    R25R24 = CONCAT11(R25R24._1_1_,10);
    R1 = 0;
    R17R16 = (byte *)uVar1;
    DAT_mem_0198 = 10;
    return;
  }
  if (DAT_mem_0198 != '\0') {
    DAT_mem_0198 = DAT_mem_0198 + -1;
    R25R24 = CONCAT11(R25R24._1_1_,DAT_mem_0198);
    if (DAT_mem_0198 != '\0') {
      R1 = 0;
      return;
    }
    FUN_code_1a18();
    FUN_code_0b60();
    R1 = 0;
    R17R16 = (byte *)uVar1;
    DAT_mem_0199 = (byte)R25R24;
    return;
  }
  if (DAT_mem_0195 == DAT_mem_0196) {
    Z = (byte *)0x0;
  }
  else {
    Z = (byte *)CONCAT11(CARRY1(DAT_mem_0196,DAT_mem_0196) -
                         (((byte)(DAT_mem_0196 * '\x02') < 0xf5) + -4),DAT_mem_0196 * '\x02' + 0xb);
    R0 = *Z;
    Z = *(byte **)Z;
  }
  R17R16 = Z;
  if (((uint)Z & 0x8000) != 0) {
    if (DAT_mem_0197 < 8) {
      Z = (byte *)CONCAT11(-((DAT_mem_0197 < 0xfd) + -4),DAT_mem_0197 + 3);
      R25R24._1_1_ = DAT_mem_0197;
      *Z = DAT_mem_0140;
      DAT_mem_0197 = R25R24._1_1_ + 1;
    }
    R17R16 = (byte *)((uint)R17R16 & 0x7fff);
  }
  if (R17R16._1_1_ == '\x01') {
LAB_code_1b31:
    Z = (byte *)CONCAT11(Z._1_1_,DAT_mem_0196);
    if (DAT_mem_0195 != DAT_mem_0196) {
      Z = (byte *)CONCAT11(CARRY1(DAT_mem_0196,DAT_mem_0196) -
                           (((byte)(DAT_mem_0196 * '\x02') < 0xf5) + -4),DAT_mem_0196 * '\x02' + 0xb
                          );
      R25R24._0_1_ = (byte)R17R16;
      Z[1] = 3;
      *Z = (byte)R25R24;
    }
LAB_code_1b41:
    R25R24._0_1_ = (byte)R17R16 & 0xf8;
    if ((byte)R25R24 == 0xd8) {
      FUN_code_1598();
      goto LAB_code_1bac;
    }
    thunk_FUN_code_0d31();
    FUN_code_1190();
    thunk_FUN_code_0d31();
    FUN_code_0ba6();
LAB_code_1b66:
    R25R24._1_1_ = (byte)R25R24;
  }
  else {
    if (R17R16._1_1_ == '\n') {
LAB_code_1b90:
      R25R24._0_1_ = (char)R17R16 - 1;
      if ((byte)R25R24 == 0) {
        FUN_code_1a8e();
      }
      else {
        Z = (byte *)CONCAT11(Z._1_1_,DAT_mem_0196);
        if (DAT_mem_0195 != DAT_mem_0196) {
          Z = (byte *)CONCAT11(CARRY1(DAT_mem_0196,DAT_mem_0196) -
                               (((byte)(DAT_mem_0196 * '\x02') < 0xf5) + -4),
                               DAT_mem_0196 * '\x02' + 0xb);
          Z[1] = 10;
          *Z = (byte)R25R24;
        }
      }
    }
    else {
      FUN_code_1a8e();
      if (R17R16._1_1_ == 6) {
        R17R16._0_1_ = ~(byte)R17R16;
        R25R24._0_1_ = (byte)R17R16;
        R17R16 = (byte *)(uint)(byte)R17R16;
        R25R24._0_1_ = DAT_mem_0140 & (byte)R25R24;
        DAT_mem_0140 = (byte)R25R24;
        goto LAB_code_1b8e;
      }
      if (R17R16._1_1_ < 7) {
        if (R17R16._1_1_ == 3) {
          R25R24._0_1_ = (byte)R17R16 & 0xf8;
          if ((byte)R25R24 != 0xd8) {
            thunk_FUN_code_0d31();
            FUN_code_1190();
            thunk_FUN_code_0d31();
            FUN_code_0c24();
            goto LAB_code_1b66;
          }
        }
        else {
          if (3 < R17R16._1_1_) {
            if (R17R16._1_1_ == 4) {
              DAT_mem_0140 = (byte)R17R16;
            }
            else {
              if (R17R16._1_1_ != 5) goto LAB_code_1bac;
              R25R24._0_1_ = DAT_mem_0140 | (byte)R17R16;
              DAT_mem_0140 = (byte)R25R24;
            }
LAB_code_1b8e:
            R25R24._1_1_ = 3;
            goto LAB_code_1bad;
          }
          if (R17R16._1_1_ == 1) goto LAB_code_1b31;
          if (R17R16._1_1_ == 2) goto LAB_code_1b41;
        }
      }
      else if (R17R16._1_1_ == 9) {
        if (DAT_mem_0197 != 0) {
          DAT_mem_0197 = R1;
          DAT_mem_0140 = DAT_mem_0303;
          goto LAB_code_1b8e;
        }
      }
      else {
        if (9 < R17R16._1_1_) {
          if (R17R16._1_1_ == 0xb) {
            R17R16 = (byte *)((uint)R17R16 & 0xff);
          }
          else {
            if (R17R16._1_1_ < 0xb) goto LAB_code_1b90;
            if (R17R16._1_1_ != 0xc) goto LAB_code_1bac;
            FUN_code_1a18();
            R17R16 = (byte *)CONCAT11(1,(byte)R17R16);
          }
          FUN_code_0b60();
          R25R24._1_1_ = (byte)R25R24;
          goto LAB_code_1bae;
        }
        if (R17R16._1_1_ == 7) {
          R25R24._0_1_ = DAT_mem_0140 ^ (byte)R17R16;
          DAT_mem_0140 = (byte)R25R24;
          goto LAB_code_1b8e;
        }
        if (R17R16._1_1_ == 8) {
          Z = (byte *)CONCAT11(Z._1_1_,DAT_mem_0197);
          if (DAT_mem_0197 != 0) {
            Z = (byte *)CONCAT11(-(((byte)(DAT_mem_0197 - 1) < 0xfd) + -4),DAT_mem_0197 + 2);
            R25R24._0_1_ = *Z;
            DAT_mem_0140 = (byte)R25R24;
            DAT_mem_0197 = DAT_mem_0197 - 1;
            goto LAB_code_1b8e;
          }
        }
      }
    }
LAB_code_1bac:
    R25R24._1_1_ = 0;
  }
LAB_code_1bad:
  R17R16 = (byte *)(uint)(byte)R17R16;
LAB_code_1bae:
  R25R24._0_1_ = DAT_mem_0199 | R25R24._1_1_;
  DAT_mem_0199 = (byte)R25R24;
  if ((byte)R25R24 != 0) {
    FUN_code_0c97();
    DAT_mem_0199 = (byte)R25R24;
  }
  if (R17R16._1_1_ != '\0') {
    R25R24 = 20000;
    do {
      R25R24 = R25R24 + -1;
    } while (R25R24 != 0);
    FUN_code_1547();
  }
  R17R16 = (byte *)uVar1;
  return;
}



/* entry=code:1bc3 size=20 callers=3 callees=3 */

undefined1 FUN_code_1bc3(void)

{
  R1 = 0;
  FUN_code_1bd1();
  if ((R23 & 0x80) != 0) {
    FUN_code_1bcd();
  }
  FUN_code_1bd6();
  FUN_code_1bd1();
  if (R0 < '\0') {
    R23 = ~R23;
    R22 = -R22;
    R23 = R23 - ((R22 != '\0') + -1);
  }
  return R25;
}



/* entry=code:1bcd size=8 callers=1 callees=0 */

void FUN_code_1bcd(undefined1 param_1,undefined1 param_2,byte R23,char R22)

{
  R1 = 0;
  R23 = ~R23;
  R22 = -R22;
  R23 = R23 - ((R22 != '\0') + -1);
  return;
}



/* entry=code:1bd1 size=10 callers=1 callees=0 */

undefined2 FUN_code_1bd1(byte R25,char R24)

{
  bool in_Tflg;
  
  R1 = 0;
  if (in_Tflg) {
    R25 = ~R25;
    R24 = -R24;
    R25 = R25 - ((R24 != '\0') + -1);
    return CONCAT11(R24,R25);
  }
  return CONCAT11(R24,R25);
}



/* entry=code:1bd6 size=40 callers=1 callees=0 */

void FUN_code_1bd6(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  
  R1 = 0;
  bVar4 = false;
  Xlo = 0;
  R21 = '\x11';
  Xhi = 0;
  while( true ) {
    bVar2 = (byte)R25R24 * '\x02' + bVar4;
    bVar4 = CARRY1((byte)R25R24,(byte)R25R24) || CARRY1((byte)R25R24 * '\x02',bVar4);
    bVar3 = R25R24._1_1_ * '\x02' + bVar4;
    bVar4 = CARRY1(R25R24._1_1_,R25R24._1_1_) || CARRY1(R25R24._1_1_ * '\x02',bVar4);
    R25R24 = CONCAT11(bVar3,bVar2);
    R21 = R21 + -1;
    if (R21 == '\0') break;
    bVar2 = Xlo * '\x02' + bVar4;
    bVar3 = Xhi * '\x02' + (CARRY1(Xlo,Xlo) || CARRY1(Xlo * '\x02',bVar4));
    bVar1 = (byte)(bVar3 - R23R22._1_1_) < (bVar2 < (byte)R23R22);
    bVar4 = bVar3 < R23R22._1_1_ || bVar1;
    Xlo = bVar2;
    Xhi = bVar3;
    if (bVar3 >= R23R22._1_1_ && !bVar1) {
      Xlo = bVar2 - (byte)R23R22;
      Xhi = bVar3 - (R23R22._1_1_ + (bVar2 < (byte)R23R22));
      bVar4 = bVar3 < R23R22._1_1_ || (byte)(bVar3 - R23R22._1_1_) < (bVar2 < (byte)R23R22);
    }
  }
  R25R24._0_1_ = ~bVar2;
  R25R24._1_1_ = ~bVar3;
  R23R22 = R25R24;
  R21 = 0;
  R25R24._0_1_ = Xlo;
  R25R24._1_1_ = Xhi;
  return;
}



/* entry=code:1bea size=32 callers=1 callees=0 */

void FUN_code_1bea(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  R1 = 0;
  X = R25R24;
  R25R24 = (undefined1 *)R23R22;
  Z = R23R22;
  do {
    bVar2 = EECR;
  } while ((bVar2 & 2) != 0);
  while( true ) {
    puVar4 = X;
    cVar1 = R20 + -1;
    bVar5 = R20 == '\0';
    R20 = cVar1;
    bVar2 = R21 - bVar5;
    bVar5 = R21 < bVar5;
    R21 = bVar2;
    if (bVar5) break;
    EEARH = Z._1_1_;
    EEAR = (undefined1)Z;
    bVar3 = EECR;
    EECR = bVar3 | 1;
    Z = Z + 1;
    R0 = EEDR;
    X = X + 1;
    *puVar4 = R0;
  }
  return;
}



/* entry=code:1bfa size=16 callers=10 callees=0 */

int FUN_code_1bfa(undefined1 R25,byte R24)

{
  byte bVar1;
  
  R1 = 0;
  do {
    bVar1 = EECR;
  } while ((bVar1 & 2) != 0);
  EEARH = R25;
  EEAR = R24;
  bVar1 = EECR;
  EECR = bVar1 | 1;
  R25 = 0;
  R24 = EEDR;
  return (uint)R24 << 8;
}



/* entry=code:1c02 size=10 callers=4 callees=0 */

void FUN_code_1c02(void)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  R1 = 0;
  X = (undefined1 *)0x18;
  R20 = '\x02';
  R21 = 0;
  Z = R25R24;
  do {
    bVar2 = EECR;
  } while ((bVar2 & 2) != 0);
  while( true ) {
    puVar4 = X;
    cVar1 = R20 + -1;
    bVar5 = R20 == '\0';
    R20 = cVar1;
    bVar2 = R21 - bVar5;
    bVar5 = R21 < bVar5;
    R21 = bVar2;
    if (bVar5) break;
    EEARH = Z._1_1_;
    EEAR = (undefined1)Z;
    bVar3 = EECR;
    EECR = bVar3 | 1;
    Z = Z + 1;
    R0 = EEDR;
    X = X + 1;
    *puVar4 = R0;
  }
  return;
}



/* entry=code:1c07 size=28 callers=1 callees=0 */

void FUN_code_1c07(void)

{
  byte bVar1;
  char in_Cflg;
  char in_Zflg;
  char in_Nflg;
  char in_Vflg;
  char in_Sflg;
  char in_Hflg;
  char in_Tflg;
  char in_Iflg;
  
  R1 = 0;
  R18 = R22;
  do {
    bVar1 = EECR;
  } while ((bVar1 & 2) != 0);
  EECR = 0;
  EEARH = R25R24._1_1_;
  EEAR = (undefined1)R25R24;
  EEDR = R22;
  R0 = in_Cflg == '\x01' | (in_Zflg == '\x01') << 1 | (in_Nflg == '\x01') << 2 |
       (in_Vflg == '\x01') << 3 | (in_Sflg == '\x01') << 4 | (in_Hflg == '\x01') << 5 |
       (in_Tflg == '\x01') << 6 | (in_Iflg == '\x01') << 7;
  bVar1 = EECR;
  EECR = bVar1 | 4;
  bVar1 = EECR;
  EECR = bVar1 | 2;
  SREG = R0;
  R25R24 = R25R24 + 1;
  return;
}



/* entry=code:1c15 size=4 callers=1 callees=0 */

void FUN_code_1c15(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


