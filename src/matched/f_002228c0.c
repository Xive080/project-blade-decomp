extern void func_0012e5e0(void);
extern void func_001d8470(void);
extern void func_001d97c0(void);
extern void func_001d99e0(void);
extern void func_001d9af0(void);
extern void func_001d9c00(void);
extern void func_0021a520(void);
extern void func_0021a780(void);
extern void func_0021a8d0(void);
extern void func_0021a910(void);
extern void func_0021a980(void);
extern void func_0021aa70(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x3c020033
    .word 0x7fb10010
    addiu a2,v0,1936
    .word 0x7fb00000
    .word 0x70002e28
    .word 0x3c02002a
    addiu a0,v0,-24640
    .word 0x3c02002a
    .word 0x24439FC0
L2228f0:
    addiu a1,a1,2
    sw a0,0(a2)
    sw v1,4(a2)
    slti v0,a1,32
    addiu a2,a2,8
    bnez v0, L2228f0
    nop
    jal func_001d8470
    nop
    jal func_001d99e0
    .word 0x70402628
    jal func_0021aa70
    .word 0x70408628
    .word 0x72002628
    .word 0x70408628
    .word 0x70002e28
    .word 0x72003628
    jal func_001d9c00
    .word 0x70003e28
    lw a1,0(s0)
    .word 0x70409628
    .word 0x72402628
    .word 0x70003628
    jal func_001d9af0
    .word 0x70003e28
    .word 0x70408e28
    .word 0x3c02002e
    addiu a1,v0,22752
    .word 0x72202628
    jal func_0021a520
    .word 0x70003628
    .word 0x3c02002e
    addiu a1,v0,22832
    addiu a2,zero,5
    jal func_0021a520
    .word 0x72202628
    addiu a1,zero,2
    addiu a2,zero,116
    addiu a3,zero,38
    jal func_0021a780
    .word 0x72202628
    jal func_001d97c0
    .word 0x72402628
    lw a1,0(s0)
    .word 0x70003628
    .word 0x70003e28
    .word 0x70408628
    jal func_001d9af0
    .word 0x72002628
    .word 0x70408e28
    addiu a1,zero,360
    jal func_0021a8d0
    .word 0x72202628
    .word 0x3c020033
    addiu a1,v0,1936
    addiu a2,zero,32
    jal func_0021a910
    .word 0x72202628
    addiu a1,zero,2
    .word 0x72202628
    jal func_0021a980
    .word 0x70003628
    .word 0x3c020022
    addiu a2,v0,-5808
    addiu a1,zero,3
    jal func_0021a980
    .word 0x72202628
    .word 0x3c020020
    addiu a2,v0,-20272
    addiu a1,zero,4
    jal func_0021a980
    .word 0x72202628
    .word 0x3c020022
    addiu a2,v0,11408
    addiu a1,zero,5
    jal func_0021a980
    .word 0x72202628
    .word 0x3c020022
    addiu a1,v0,10848
    .word 0x3c020022
    addiu a2,v0,-6096
    jal func_0012e5e0
    .word 0x72002628
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
