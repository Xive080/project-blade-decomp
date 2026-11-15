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
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x3c020033
    .word 0x7fb10010
    addiu a2,v0,12432
    .word 0x7fb00000
    .word 0x70002e28
    .word 0x3c02002d
    addiu a0,v0,32368
    .word 0x3c02002d
    .word 0x24437e70
L248960:
    addiu a1,a1,2
    .word 0xacc40000
    .word 0xacc30004
    slti v0,a1,16
    addiu a2,a2,8
    bnez v0,L248960
    nop
    jal func_001d8470
    nop
    jal func_001d99e0
    .word 0x70402628
    addiu a0,zero,1
    jal func_002105a0
    .word 0x70408628
    .word 0x72002628
    .word 0x70408628
    .word 0x70002e28
    .word 0x72003628
    jal func_001d9c00
    .word 0x70003e28
    .word 0x8e050000
    .word 0x70409628
    .word 0x72402628
    .word 0x70003628
    jal func_001d9af0
    .word 0x70003e28
    .word 0x70408e28
    .word 0x3c02002e
    addiu v0,v0,22832
    .word 0x78430000
    addiu a2,zero,5
    .word 0x3c020033
    addiu a0,v0,12416
    .word 0x3c02002e
    addiu v0,v0,22848
    .word 0x7c830000
    .word 0x78430000
    .word 0x72202628
    .word 0x3c020033
    addiu a1,v0,12400
    .word 0x3c020033
    .word 0x7ca30000
    jal func_0020ffd0
    addiu a1,v0,12416
    .word 0x3c020033
    addiu a1,v0,12400
    addiu a2,zero,6
    jal func_0020ffd0
    .word 0x72202628
    addiu a1,zero,2
    addiu a2,zero,68
    addiu a3,zero,21
    jal func_00210040
    .word 0x72202628
    jal func_001d97c0
    .word 0x72402628
    .word 0x8e050000
    .word 0x70003628
    .word 0x70003e28
    .word 0x70408628
    jal func_001d9af0
    .word 0x72002628
    .word 0x70408e28
    addiu a1,zero,478
    jal func_00210220
    .word 0x72202628
    .word 0x3c020033
    addiu a1,v0,12432
    jal func_00210060
    .word 0x72202628
    .word 0x3c020025
    addiu a1,v0,-30032
    jal func_0020ff50
    .word 0x72202628
    .word 0xaf9089d0
    .word 0x72001628
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
