extern void func_001c5eb0(void);
extern void func_001c5f50(void);
extern void func_001c5f30(void);
asm void func_001864b0(void) {
    .set noreorder
    .word 0x3c030031
    addiu v1,v1,-24960
    addiu sp,sp,-16
    ori a0,zero,0x8010
    addu v1,v1,a0
    .word 0x7fbf0000
    .word 0x8c630000
    blez v1,L186560
    nop
    .word 0x3c010031
    .word 0x8c239e80
    bnez v1,L186528
    addiu a0,zero,1
    .word 0x3c010031
    .word 0x8c259e84
    jal func_001c5eb0
    addiu a0,zero,1
    .word 0x3c010031
    .word 0x8c261e90
    .word 0x3c020031
    addiu a1,v0,-24944
    .word 0x3c020031
    addiu a0,zero,3
    .word 0x3c010031
    .word 0x8c282494
    jal func_001c5f50
    addiu a3,v0,7828
    b L186550
    nop
    addiu a0,zero,1
L186528:
    bne v1,a0,L186550
    nop
    jal func_001c5eb0
    .word 0x70002e28
    .word 0x3c010031
    .word 0x8c261e90
    .word 0x3c020031
    addiu a0,zero,1
    jal func_001c5f30
    addiu a1,v0,-24944
L186550:
    .word 0x3c010031
    .word 0xac201e90
    .word 0x3c010031
    .word 0xac202494
L186560:
    .word 0x7bbf0000
    jr ra
    addiu sp,sp,16
}
