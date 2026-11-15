extern void func_00121d00(void);
extern void func_001221a0(void);
extern void func_00177b10(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff70
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f8284b8
    .word 0x7080b628
    .word 0x70a0ae28
    .word 0x70c0a628
    .word 0x70e09e28
    .word 0x71009628
    beqz v0, L193b34
    .word 0x70008e28
    .word 0x8ec201e4
    bnez v0, L193b3c
    nop
L193b34:
    b L193ca0
    .word 0x70001628
L193b3c:
    beqz s3, L193b50
    .word 0x70001628
    bgtz s2, L193b58
    nop
    .word 0x70001628
L193b50:
    b L193ca4
    .word 0x7bbf0080
L193b58:
    .word 0x3c02002f
    .word 0x2445fdf8
    jal func_001221a0
    .word 0x72802628
    beqz v0, L193bc0
    .word 0x70408628
    .word 0x26c500a4
    .word 0x02143023
    .word 0x72802628
    jal func_00121d00
    .word 0xa2000000
    beqz v0, L193bb4
    addiu v0,zero,58
    addiu v0,zero,58
    .word 0xa2020000
    jal func_00177b10
    .word 0x72802628
    .word 0x7040be28
    bnez s7, L193bc4
    nop
    b L193ca0
    .word 0x70001628
    addiu v0,zero,58
L193bb4:
    .word 0xa2020000
    b L193bc4
    .word 0x72c0be28
L193bc0:
    .word 0x72c0be28
L193bc4:
    .word 0x8ec20000
    addiu a2,zero,1
    .word 0x72c02628
    jalr ra,v0
    .word 0x72a02e28
    .word 0x70408628
    beqz s0, L193c84
    nop
    .word 0x8ee20000
    addiu a2,zero,6
    .word 0x72802e28
    jalr ra,v0
    .word 0x72e02628
    .word 0x7040a628
    beqz s4, L193c74
    nop
    b L193c50
    .word 0x70008e28
L193c0c:
    .word 0x8ec20008
    addiu t0,zero,1
    .word 0x72c02628
    .word 0x72002e28
    .word 0x72603628
    .word 0x72403e28
    jalr ra,v0
    .word 0x71004e28
    .word 0x02228821
    .word 0x8ee2000c
    addiu t0,zero,1
    .word 0x72e02628
    .word 0x72802e28
    .word 0x72603628
    .word 0x72403e28
    jalr ra,v0
    .word 0x71004e28
L193c50:
    .word 0x8e020574
    .word 0x0222102a
    bnez v0, L193c0c
    nop
    .word 0x8ee20004
    .word 0x72802e28
    addiu s1,zero,1
    jalr ra,v0
    .word 0x72e02628
L193c74:
    .word 0x8ec20004
    .word 0x72002e28
    jalr ra,v0
    .word 0x72c02628
L193c84:
    blez s1, L193ca0
    .word 0x72201628
    .word 0x8ec20050
    .word 0x72a02e28
    jalr ra,v0
    .word 0x72c02628
    .word 0x72201628
L193ca0:
    .word 0x7bbf0080
L193ca4:
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0090
}
