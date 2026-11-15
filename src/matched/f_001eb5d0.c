extern void func_001df9a0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-144
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f83877c
    .word 0x8c82000c
    paddub s0,a0,zero
    addu s1,a0,v1
    jal func_001df9a0
    addiu a0,v0,-1
    addiu v1,v0,1
    addiu v0,zero,1
    sllv s2,v0,v1
    .word 0x8e020010
    jal func_001df9a0
    addiu a0,v0,-1
    addiu v1,v0,1
    addiu v0,zero,1
    sllv s3,v0,v1
    .word 0x8e020014
    .word 0x8e240038
    addiu v0,v0,7
    beqz a0,L1eb660
    sra s4,v0,0x3
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420134
    jalr ra,v0
    nop
    .word 0xae200038
L1eb660:
    .word 0x3c020033
    .word 0x7000ae28
    paddub s6,s1,zero
    addiu s7,v0,-23008
L1eb670:
    .word 0x8ec4003c
    beqzl a0,L1eb694
    addiu s5,s5,1
    .word 0x8ee20134
    jalr ra,v0
    nop
    .word 0xaec0003c
    nop
    addiu s5,s5,1
L1eb694:
    sltiu v0,s5,7
    bnez v0,L1eb670
    addiu s6,s6,4
    srl s5,s2,0x6
    beqzl s5,L1eb6ac
    addiu s5,zero,1
L1eb6ac:
    jal func_001df9a0
    paddub a0,s2,zero
    andi v0,v0,0xf
    sll v1,s5,0xe
    sll v0,v0,0x1a
    or s5,v1,v0
    jal func_001df9a0
    paddub a0,s3,zero
    andi v0,v0,0xf
    sll v0,v0,0x1e
    or v0,s5,v0
    .word 0xae220008
    jal func_001df9a0
    paddub a0,s3,zero
    andi v1,v0,0xf
    sra v1,v1,0x2
    .word 0xae23000c
    .word 0xa6200014
    .word 0x92040023
    addiu v1,zero,5
    andi a0,a0,0x6f
    beq a0,v1,L1eb854
    addiu v1,zero,6
    beq a0,v1,L1eb840
    addiu v1,zero,69
    beq a0,v1,L1eb810
    addiu v1,zero,65
    beq a0,v1,L1eb7d0
    addiu v1,zero,37
    beq a0,v1,L1eb7a0
    addiu v1,zero,33
    beq a0,v1,L1eb760
    addiu v1,zero,1
    beq a0,v1,L1eb740
    nop
    b L1eb864
    mult v1,s3,s2
L1eb740:
    .word 0x8e240008
    .word 0x3c0300a0
    or v1,a0,v1
    .word 0xae230008
    .word 0x8e23000c
    ori v1,v1,0x2c
    b L1eb860
    .word 0xae23000c
L1eb760:
    .word 0x8e260008
    .word 0x3c050130
    .word 0x3c040050
    .word 0x3c032000
    or a1,a2,a1
    .word 0xae250008
    .word 0x8e25000c
    ori a1,a1,0x2c
    .word 0xae25000c
    .word 0x8e25000c
    or a0,a1,a0
    .word 0xae24000c
    .word 0x8e24000c
    or v1,a0,v1
    b L1eb860
    .word 0xae23000c
L1eb7a0:
    .word 0x8e250008
    .word 0x3c040130
    .word 0x3c032000
    or a0,a1,a0
    .word 0xae240008
    .word 0x8e24000c
    ori a0,a0,0x2c
    .word 0xae24000c
    .word 0x8e24000c
    or v1,a0,v1
    b L1eb860
    .word 0xae23000c
L1eb7d0:
    .word 0x8e260008
    .word 0x3c050140
    .word 0x3c040050
    .word 0x3c032000
    or a1,a2,a1
    .word 0xae250008
    .word 0x8e25000c
    ori a1,a1,0x2c
    .word 0xae25000c
    .word 0x8e25000c
    or a0,a1,a0
    .word 0xae24000c
    .word 0x8e24000c
    or v1,a0,v1
    b L1eb860
    .word 0xae23000c
L1eb810:
    .word 0x8e250008
    .word 0x3c040140
    .word 0x3c032000
    or a0,a1,a0
    .word 0xae240008
    .word 0x8e24000c
    ori a0,a0,0x2c
    .word 0xae24000c
    .word 0x8e24000c
    or v1,a0,v1
    b L1eb860
    .word 0xae23000c
L1eb840:
    .word 0x8e240008
    .word 0x3c030010
    or v1,a0,v1
    b L1eb860
    .word 0xae230008
L1eb854:
    .word 0x8e23000c
    ori v1,v1,0x2c
    .word 0xae23000c
L1eb860:
    mult v1,s3,s2
L1eb864:
    mult v1,s4,v1
    .word 0xae230028
    .word 0x8e040014
    slti at,a0,17
    bnez at,L1eb8c8
    addiu v1,zero,16
    .word 0x8e03000c
    addiu v1,v1,63
    bgez v1,L1eb894
    sra a1,v1,0x6
    addiu v1,v1,63
    sra a1,v1,0x6
L1eb894:
    .word 0x8e030010
    addiu a0,v1,31
    bgez a0,L1eb8ac
    sra v1,a0,0x5
    addiu v1,a0,31
    sra v1,v1,0x5
L1eb8ac:
    mult a0,a1,v1
    addiu v1,zero,-2048
    sll a0,a0,0xb
    and v1,a0,v1
    .word 0xae230030
    b L1eb9c8
    .word 0xae20002c
L1eb8c8:
    bne a0,v1,L1eb91c
    addiu v1,zero,8
    .word 0x8e03000c
    addiu v1,v1,63
    bgez v1,L1eb8e8
    sra a1,v1,0x6
    addiu v1,v1,63
    sra a1,v1,0x6
L1eb8e8:
    .word 0x8e030010
    addiu a0,v1,63
    bgez a0,L1eb900
    sra v1,a0,0x6
    addiu v1,a0,63
    sra v1,v1,0x6
L1eb900:
    mult a0,a1,v1
    addiu v1,zero,-2048
    sll a0,a0,0xb
    and v1,a0,v1
    .word 0xae230030
    b L1eb9c8
    .word 0xae20002c
L1eb91c:
    bne a0,v1,L1eb978
    nop
    .word 0x8e03000c
    addiu v1,v1,127
    bgez v1,L1eb93c
    sra a1,v1,0x7
    addiu v1,v1,127
    sra a1,v1,0x7
L1eb93c:
    .word 0x8e030010
    addiu a0,v1,63
    bgez a0,L1eb954
    sra v1,a0,0x6
    addiu v1,a0,63
    sra v1,v1,0x6
L1eb954:
    mult a1,a1,v1
    addiu a0,zero,-2048
    sll a1,a1,0xb
    and a0,a1,a0
    addiu a0,a0,2048
    addiu v1,zero,1
    .word 0xae240030
    b L1eb9c8
    .word 0xae23002c
L1eb978:
    .word 0x8e03000c
    addiu v1,v1,127
    bgez v1,L1eb990
    sra a1,v1,0x7
    addiu v1,v1,127
    sra a1,v1,0x7
L1eb990:
    .word 0x8e030010
    addiu a0,v1,127
    bgez a0,L1eb9a8
    sra v1,a0,0x7
    addiu v1,a0,127
    sra v1,v1,0x7
L1eb9a8:
    mult a1,a1,v1
    addiu a0,zero,-2048
    sll a1,a1,0xb
    and a0,a1,a0
    addiu a0,a0,2048
    addiu v1,zero,1
    .word 0xae240030
    .word 0xae23002c
L1eb9c8:
    addiu a0,zero,16384
    .word 0x3c030040
    .word 0xae240018
    ori v1,v1,0x4
    .word 0xae23001c
    .word 0xae240020
    .word 0xae230024
    .word 0xa2200016
    .word 0x7bbf0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,144
}


