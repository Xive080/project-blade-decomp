asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c830008
    .word 0x8c820000
    .word 0x8c990004
    .word 0x8c85000c
    .word 0x8c8e002c
    .word 0x3c060033
    addiu s0,a2,1632
    .word 0x8c660024
    addiu t7,v0,7
    .word 0x8c840010
    xori t0,a2,0x5
    sltiu t0,t0,1
    xori a3,a2,0x4
    .word 0xae080000
    .word 0xa600000e
    .word 0xa600000c
    .word 0x8e0b0000
    .word 0x8c6a002c
    beqz t3,L21d974
    sltiu a3,a3,1
    addiu t1,t2,-2
    sll t0,t1,0x1
    b L21d984
    addu t2,t0,t1
L21d974:
    addiu t0,zero,2
    bne a2,t0,L21d984
    addiu t0,t2,-1
    sll t2,t0,0x1
L21d984:
    beqz a3,L21d9b8
    nop
    .word 0x8f2900c4
    addiu t2,t2,-2
    addiu t0,t1,-3
    addu t2,t2,t0
    addiu t0,t1,-2
    bnez t0,L21d9ac
    .word 0x0148001b
    .word 0x000001cd
L21d9ac:
    mflo t0
    b L21d9d4
    nop
L21d9b8:
    .word 0x8f2901dc
    addiu t0,t1,-1
    addu t0,t2,t0
    bnez t1,L21d9d0
    .word 0x0109001b
    .word 0x000001cd
L21d9d0:
    mflo t0
L21d9d4:
    beqz t3,L21da98
    nop
    .word 0x8caa0000
    andi t2,t2,0x100
    beqz t2,L21da84
    nop
    .word 0x8c6a000c
    .word 0xc5430000
    .word 0xc5420004
    .word 0xc5410008
    .word 0xc540000c
    .word 0xe6030034
    .word 0xe6020038
    .word 0xe601003c
    .word 0xe6000040
    .word 0xc5430010
    .word 0xc5420014
    .word 0xc5410018
    .word 0xc540001c
    .word 0xe6030044
    .word 0xe6020048
    .word 0xe601004c
    .word 0xe6000050
    .word 0xc5400020
    .word 0xe6000054
    .word 0xc6030034
    .word 0xc6020038
    .word 0xc601003c
    .word 0xc6000040
    .word 0xe6030010
    .word 0xe6020014
    .word 0xe6010018
    .word 0xe600001c
    .word 0xc6030044
    .word 0xc6020048
    .word 0xc601004c
    .word 0xc6000050
    .word 0xe6030020
    .word 0xe6020024
    .word 0xe6010028
    .word 0xe600002c
    .word 0xc6000054
    b L21da98
    .word 0xe6000030
L21da84:
    .word 0x8c6a0028
    .word 0x954a0000
    .word 0xa60a000e
    .word 0x960a000e
    .word 0xa60a000c
L21da98:
    .word 0x8c71000c
    .word 0x70005e28
    .word 0x70006628
    .word 0x70005628
    .word 0x70006e28
    .word 0x7000c628
    .word 0xae110058
    .word 0x7320fe28
L21dab8:
    .word 0x8f32002c
    andi s1,s2,0x1
    beqzl s1,L21db0c
    addiu t8,t8,1
    andi s1,s2,0x2000
    beqz s1,L21daf8
    addiu t3,t3,1
    beqz a3,L21dae8
    nop
    .word 0x87ea00e4
    b L21daf0
    sll t2,t2,0x4
L21dae8:
    .word 0x87ea01fc
    sll t2,t2,0x4
L21daf0:
    b L21db08
    addiu t4,t4,1
L21daf8:
    .word 0x8f310030
    sll s1,s1,0x2
    addu t5,t5,s1
    nop
L21db08:
    addiu t8,t8,1
L21db0c:
    sltiu s1,t8,9
    addiu t9,t9,8
    bnez s1,L21dab8
    addiu ra,ra,24
    bnez t4,L21db28
    subu a3,t3,t4
    sll t2,a3,0x5
L21db28:
    sll a3,a3,0x4
    addiu t4,a3,584
    .word 0x012d3818
    .word 0x8f8b8160
    addu a3,t2,a3
    subu t2,t3,t4
    bnez a3,L21db4c
    .word 0x0147001b
    .word 0x000001cd
L21db4c:
    mflo a3
    sltu at,a3,t0
    beqz at,L21dbac
    nop
    addu v0,v0,a2
    .word 0x90420000
    bnez v0,L21db70
    .word 0x0122001b
    .word 0x000001cd
L21db70:
    mflo a1
    addiu v0,zero,4
    .word 0x00e52818
    bne a2,v0,L21db94
    .word 0xae050004
    .word 0x8e050004
    sll v0,a3,0x1
    subu v0,a1,v0
    .word 0xae020004
L21db94:
    addu v0,t7,a2
    .word 0x90450000
    .word 0x8e020004
    addu v0,v0,a1
    b L21dbbc
    .word 0xae020008
L21dbac:
    .word 0x8ca20008
    .word 0xae020004
    .word 0x8e020004
    .word 0xae020008
L21dbbc:
    .word 0xadc00008
    .word 0x8c630028
    addiu v0,zero,1
    .word 0xadc30000
    .word 0x8e030008
    .word 0xadc30004
    .word 0xac800004
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
