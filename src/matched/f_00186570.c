extern void func_001c5eb0(void);
extern void func_001c5f50(void);
extern void func_001c5f30(void);
asm void func_00186570(void) {
    .set noreorder
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x3c010031
    .word 0x8c269e80
    beqz a2,L186644
    paddub s0,a0,zero
    .word 0x3c030031
    addiu v1,v1,-24960
    ori a0,zero,0x8010
    addu v1,v1,a0
    .word 0x8c630000
    blez v1,L18662c
    nop
    bnez a2,L1865f4
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
    b L18661c
    nop
    addiu a0,zero,1
L1865f4:
    bne a2,a0,L18661c
    nop
    jal func_001c5eb0
    .word 0x70002e28
    .word 0x3c010031
    .word 0x8c261e90
    .word 0x3c020031
    addiu a0,zero,1
    jal func_001c5f30
    addiu a1,v0,-24944
L18661c:
    .word 0x3c010031
    .word 0xac201e90
    .word 0x3c010031
    .word 0xac202494
L18662c:
    .word 0x3c010031
    .word 0xac209e80
    .word 0x8e030000
    .word 0x3c010031
    b L1867a4
    .word 0xac239e84
L186644:
    .word 0x3c010031
    .word 0x8c259e84
    .word 0x8e030000
    beq a1,v1,L186700
    nop
    .word 0x3c030031
    addiu v1,v1,-24960
    ori a0,zero,0x8010
    addu v1,v1,a0
    .word 0x8c630000
    blez v1,L1866f0
    nop
    bnez a2,L1866b8
    addiu a0,zero,1
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
    b L1866e0
    nop
    addiu a0,zero,1
L1866b8:
    bne a2,a0,L1866e0
    nop
    jal func_001c5eb0
    .word 0x70002e28
    .word 0x3c010031
    .word 0x8c261e90
    .word 0x3c020031
    addiu a0,zero,1
    jal func_001c5f30
    addiu a1,v0,-24944
L1866e0:
    .word 0x3c010031
    .word 0xac201e90
    .word 0x3c010031
    .word 0xac202494
L1866f0:
    .word 0x8e030000
    .word 0x3c010031
    b L1867a4
    .word 0xac239e84
L186700:
    .word 0x3c030031
    addiu v1,v1,-24960
    ori a0,zero,0x8010
    addu v1,v1,a0
    .word 0x8c630000
    slti at,v1,510
    bnez at,L1867a4
    nop
    blez v1,L1867a4
    nop
    bnez a2,L18676c
    addiu a0,zero,1
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
    b L186794
    nop
    addiu a0,zero,1
L18676c:
    bne a2,a0,L186794
    nop
    jal func_001c5eb0
    .word 0x70002e28
    .word 0x3c010031
    .word 0x8c261e90
    .word 0x3c020031
    addiu a0,zero,1
    jal func_001c5f30
    addiu a1,v0,-24944
L186794:
    .word 0x3c010031
    .word 0xac201e90
    .word 0x3c010031
    .word 0xac202494
L1867a4:
    .word 0x3c030031
    addiu v1,v1,-24960
    ori a0,zero,0x8010
    addu v1,v1,a0
    .word 0x84670000
    ori a0,zero,0x8614
    .word 0x3c010031
    .word 0x3c030031
    addiu v1,v1,-24960
    addu v1,v1,a0
    .word 0x8c660000
    .word 0x3c030031
    addiu a0,v1,7828
    .word 0x3c030031
    addiu a1,v1,7830
    sll v1,a2,0x1
    addu v1,a0,v1
    .word 0xa4670000
    .word 0x84271e90
    .word 0x3c030031
    addiu a0,v1,7832
    .word 0x3c030031
    addiu v1,v1,-24960
    .word 0x3c010031
    .word 0x8c262494
    addiu a3,a3,1
    sll a2,a2,0x1
    addu a1,a1,a2
    .word 0xa4a70000
    .word 0x3c010031
    .word 0x84261e90
    addiu a3,s0,4
    addiu a3,a3,64
    .word 0x3c010031
    .word 0x8c252494
    addiu a2,a2,2
    sll a1,a1,0x1
    addu a0,a0,a1
    .word 0xa4860000
    .word 0x3c010031
    .word 0x8c242494
    addiu a0,a0,3
    .word 0x3c010031
    .word 0xac242494
    .word 0x3c010031
    .word 0x8c251e90
    sll a0,a1,0x6
    addu a0,v1,a0
    addiu v1,a1,3
    .word 0x3c010031
    .word 0xac231e90
    .word 0xc6000004
    addiu a1,a0,16
    addiu a1,a1,128
    .word 0xe4800010
    .word 0xc6000008
    .word 0xe4800014
    .word 0xc600000c
    .word 0xe4800030
    .word 0xc6000010
    .word 0xe4800034
    .word 0xc6000014
    .word 0xe4800038
    .word 0xc6000018
    .word 0xe480003c
    .word 0xc6000024
    .word 0xe4800050
    .word 0xc6000028
    .word 0xe4800054
    .word 0xc600002c
    .word 0xe4800070
    .word 0xc6000030
    .word 0xe4800074
    .word 0xc6000034
    .word 0xe4800078
    .word 0xc6000038
    .word 0xe480007c
    .word 0xc4e00000
    .word 0xe4a00000
    .word 0xc4e00004
    .word 0xe4a00004
    .word 0xc4e00008
    .word 0xe4a00020
    .word 0xc4e0000c
    .word 0xe4a00024
    .word 0xc4e00010
    .word 0xe4a00028
    .word 0xc4e00014
    .word 0xe4a0002c
    .word 0x8e030000
    beqz v1,L186954
    nop
    .word 0xc4e00018
    .word 0xe4a00010
    .word 0xc4e0001c
    addiu a3,a3,-32
    .word 0xe4a00014
    .word 0xc4e00018
    addiu a1,a1,-64
    .word 0xe4a00010
    .word 0xc4e0001c
    .word 0xe4a00014
    addiu a3,a3,-32
    .word 0xc4e00018
    addiu a1,a1,-64
    .word 0xe4a00010
    .word 0xc4e0001c
    .word 0xe4a00014
L186954:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}


