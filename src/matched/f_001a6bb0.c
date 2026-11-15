extern void func_0011fe10(void);
extern void func_001d8470(void);
extern void func_001d97c0(void);
extern void func_001d99e0(void);
extern void func_001d9af0(void);
extern void func_001d9c00(void);
extern void func_0020ff50(void);
extern void func_0020ffd0(void);
extern void func_00210040(void);
extern void func_00210060(void);
extern void func_00210220(void);
extern void func_002105a0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x3c020031
    .word 0x7fb10010
    addiu a2,v0,29728
    .word 0x7fb00000
    .word 0x70002e28
    .word 0x3c020029
    addiu a0,v0,-14112
    .word 0x3c020029
    .word 0x2443c8e0
L1a6be0:
    addiu a1,a1,2
    sw a0,0(a2)
    sw v1,4(a2)
    slti v0,a1,32
    addiu a2,a2,8
    bnez v0, L1a6be0
    nop
    .word 0x3c020026
    addiu v0,v0,4224
    .word 0x3c010031
    sw v0,29744(at)
    .word 0x3c020026
    addiu v0,v0,8320
    .word 0x3c010031
    jal func_001d8470
    sw v0,29752(at)
    beqz v0, L1a6d10
    nop
    jal func_001d99e0
    .word 0x70402628
    .word 0x70408628
    beq zero,s0, L1a6d10
    nop
    jal func_002105a0
    addiu a0,zero,1
    .word 0x70408e28
    .word 0x72002628
    .word 0x70002e28
    .word 0x72203628
    jal func_001d9c00
    .word 0x70003e28
    lw a1,0(s1)
    .word 0x70408628
    .word 0x72002628
    .word 0x70003628
    jal func_001d9af0
    .word 0x70003e28
    .word 0x70409628
    .word 0x3c02002e
    addiu a1,v0,22752
    .word 0x72402628
    jal func_0020ffd0
    .word 0x70003628
    addiu a1,zero,1
    addiu a2,zero,48
    addiu a3,zero,4
    jal func_00210040
    .word 0x72402628
    jal func_001d97c0
    .word 0x72002628
    .word 0x70408628
    bnez s0, L1a6ccc
    nop
    .word 0x3c02002f
    addiu a0,v0,128
    .word 0x3c02002f
    addiu a1,v0,160
    jal func_0011fe10
    addiu a2,zero,430
L1a6ccc:
    lw a1,0(s1)
    .word 0x72002628
    .word 0x70003628
    jal func_001d9af0
    .word 0x70003e28
    .word 0x70408e28
    addiu a1,zero,481
    jal func_00210220
    .word 0x72202628
    .word 0x3c020031
    addiu a1,v0,29728
    jal func_00210060
    .word 0x72202628
    .word 0x3c02001a
    addiu a1,v0,26080
    jal func_0020ff50
    .word 0x72202628
L1a6d10:
    sw s0,-31456(gp)
    .word 0x72001628
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
