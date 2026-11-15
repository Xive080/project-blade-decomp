extern void func_00216c70(void);
extern void func_002055b0(void);
extern void func_00213ce0(void);
extern void func_002107d0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-960
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c940014
    .word 0x8cb50000
    addiu v0,zero,2
    .word 0x7080be28
    addiu a0,sp,272
    .word 0xafa20110
    .word 0xafb50114
    .word 0x8ea20024
    .word 0x72802e28
    jal func_00216c70
    .word 0xafa200a0
    addiu v0,s4,800
    .word 0xafa200e0
    addiu v0,s4,807
    .word 0xafa200f0
    .word 0x8fa200a0
    .word 0x8fa500a0
    addiu a0,sp,864
    .word 0xafa00360
    .word 0xa7a000d0
    .word 0x7000f628
    xori v0,v0,0x5
    sltiu s2,v0,1
    .word 0x8fa200a0
    addiu s0,sp,880
    addiu s1,s4,12
    xori v0,v0,0x4
    jal func_002055b0
    sltiu s6,v0,1
    addiu v1,zero,1
    .word 0xa7a30364
    addiu a0,sp,870
    .word 0xa4800000
    .word 0x8ea2002c
    addiu s3,sp,872
    .word 0xae620000
    .word 0xafa303b8
    addiu v0,sp,956
    .word 0xafa0036c
    .word 0xac400000
    .word 0x70401e28
    .word 0xafb00130
    addiu v0,sp,308
    .word 0xac430000
    .word 0x94820000
    .word 0xa7a2011c
    .word 0x8ea20028
    bnez v0,L20f48c
    nop
    .word 0x8fa20360
    ori v0,v0,0x100
    .word 0xafa20360
L20f48c:
    beqz s2,L20f4a4
    .word 0x8ea4002c
    addiu v1,a0,-2
    sll v0,v1,0x1
    b L20f4b8
    addu a0,v0,v1
L20f4a4:
    .word 0x8fa200a0
    addiu v1,zero,2
    bne v0,v1,L20f4b8
    addiu v0,a0,-1
    sll a0,v0,0x1
L20f4b8:
    beqz s6,L20f4ec
    nop
    .word 0x8e2300d0
    addiu a0,a0,-2
    addiu v0,v1,-3
    addu a0,a0,v0
    addiu v0,v1,-2
    bnez v0,L20f4e0
    .word 0x82001b
    .word 0x1cd
L20f4e0:
    mflo v0
    b L20f508
    nop
L20f4ec:
    .word 0x8e2301e8
    addiu v0,v1,-1
    addu v0,a0,v0
    bnez v1,L20f504
    .word 0x43001b
    .word 0x1cd
L20f504:
    mflo v0
L20f508:
    beqz s2,L20f5a4
    nop
    .word 0x8fa40360
    andi a0,a0,0x100
    beqz a0,L20f590
    nop
    .word 0x8ea5000c
    addiu a0,sp,768
    addiu a3,sp,816
    .word 0xc4a30000
    .word 0xc4a20004
    .word 0xc4a10008
    .word 0xc4a0000c
    .word 0xe4830000
    .word 0xe4820004
    .word 0xe4810008
    .word 0xe480000c
    .word 0xc4a30010
    .word 0xc4a20014
    .word 0xc4a10018
    .word 0xc4a0001c
    .word 0xe4830010
    .word 0xe4820014
    .word 0xe4810018
    .word 0xe480001c
    .word 0xc4a00020
    .word 0xe4800020
    .word 0x78860000
    .word 0x78850010
    .word 0xc4840020
    .word 0x7ce60000
    .word 0x7ce50010
    b L20f5a4
    .word 0xe4e40020
L20f590:
    .word 0x8ea40028
    .word 0x94840000
    .word 0xa7a400d0
    .word 0x97be00d0
    nop
L20f5a4:
    .word 0x8ea4000c
    .word 0x70003628
    .word 0x70003e28
    .word 0x70002e28
    .word 0x70004628
    .word 0x72204e28
    .word 0xafa400c0
    .word 0x70002628
    .word 0x72205628
L20f5c8:
    .word 0x8d2c0004
    andi t3,t4,0x1
    beqzl t3,L20f61c
    addiu t0,t0,1
    andi t3,t4,0x2000
    beqz t3,L20f608
    addiu a2,a2,1
    beqz s6,L20f5f8
    nop
    .word 0x854400f0
    b L20f600
    sll a0,a0,0x4
L20f5f8:
    .word 0x85440208
    sll a0,a0,0x4
L20f600:
    b L20f618
    addiu a3,a3,1
L20f608:
    .word 0x8d2b0008
    sll t3,t3,0x2
    addu a1,a1,t3
    nop
L20f618:
    addiu t0,t0,1
L20f61c:
    sltiu t3,t0,9
    addiu t1,t1,8
    bnez t3,L20f5c8
    addiu t2,t2,24
    bnez a3,L20f638
    subu a2,a2,a3
    sll a0,a2,0x5
L20f638:
    sll a2,a2,0x4
    addiu a3,a2,588
    .word 0x8f868160
    .word 0x652818
    addu a0,a0,a1
    subu a1,a2,a3
    bnez a0,L20f65c
    .word 0xa4001b
    .word 0x1cd
L20f65c:
    mflo a1
    sltu at,a1,v0
    beqz at,L20f6c0
    nop
    .word 0x8fa400e0
    .word 0x8fa200a0
    addu v0,a0,v0
    .word 0x90420000
    bnez v0,L20f688
    .word 0x62001b
    .word 0x1cd
L20f688:
    mflo v0
    addiu v1,zero,4
    .word 0xa2b018
    .word 0x8fa200a0
    bne v0,v1,L20f6a4
    sll v0,a1,0x1
    subu s6,s6,v0
L20f6a4:
    .word 0x8fa300f0
    .word 0x8fa200a0
    addu v0,v1,v0
    .word 0x90420000
    addu v0,s6,v0
    b L20f6c8
    .word 0xafa200b0
L20f6c0:
    .word 0x8e760000
    .word 0xafb600b0
L20f6c8:
    .word 0xae000008
    .word 0x70001e28
    b L20f730
    .word 0x72201628
L20f6d8:
    .word 0x8c46005c
    .word 0x8ee50018
    .word 0x8ee4000c
    addiu v1,v1,1
    sll a2,a2,0x2
    addu a1,a1,a2
    .word 0x8ca60000
    sll a1,a2,0x3
    subu a1,a1,a2
    sll a1,a1,0x2
    addu a1,a1,sp
    addiu a3,a1,320
    sll a1,a2,0x2
    addu a0,a0,a1
    .word 0x8c840000
    .word 0xace40014
    .word 0x8c840004
    .word 0xace40018
    .word 0xace00004
    .word 0xa4e00000
    .word 0xac470088
    addiu v0,v0,4
L20f730:
    .word 0x8e240000
    sltu a0,v1,a0
    bnez a0,L20f6d8
    nop
    .word 0x8ea30028
    sll v0,s6,0x1
    .word 0xafa20100
    sll v0,s6,0x3
    addu v0,v0,s6
    sll s7,v0,0x2
    .word 0xae030000
    .word 0x8fa200b0
    b L20f998
    .word 0xae020004
L20f768:
    .word 0xac400000
    addiu a0,sp,272
    addiu a1,sp,304
    jal func_00213ce0
    .word 0x72203628
    .word 0x8e830318
    beqz v1,L20f7f0
    nop
    addiu v0,sp,308
    .word 0x8c440000
    .word 0x8e250000
    addiu v1,sp,304
    .word 0x70003628
    .word 0x8c840000
    addiu v0,sp,272
    sltu at,zero,a1
    .word 0xafa30380
    .word 0xafa20384
    beqz at,L20f7e0
    addiu a0,a0,24
    addiu a3,sp,896
    nop
L20f7c0:
    .word 0x8c830034
    addiu a2,a2,1
    sltu v0,a2,a1
    .word 0xace30008
    addiu a0,a0,8
    bnez v0,L20f7c0
    addiu a3,a3,4
    nop
L20f7e0:
    .word 0x8e820318
    addiu a1,a1,2
    jalr ra,v0
    addiu a0,sp,896
L20f7f0:
    beqz v0,L20f808
    addiu a0,sp,272
    addiu a1,sp,304
    jal func_002107d0
    addiu a2,s4,780
    nop
L20f808:
    beqz s2,L20f878
    nop
    .word 0x8e020000
    beqz v0,L20f828
    addiu v1,sp,816
    b L20f878
    .word 0xa45e0000
    addiu v1,sp,816
L20f828:
    .word 0x8ea2000c
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0xc4630010
    .word 0xc4620014
    .word 0xc4610018
    .word 0xc460001c
    .word 0xe4430010
    .word 0xe4420014
    .word 0xe4410018
    .word 0xe440001c
    .word 0xc4600020
    .word 0xe4400020
    nop
L20f878:
    .word 0x8e620000
    sltu v0,s6,v0
    bnez v0,L20f890
    nop
    b L20f998
    .word 0xae600000
L20f890:
    .word 0x8e620000
    subu v0,v0,s6
    .word 0xae620000
    .word 0x8e630000
    .word 0x8fa200b0
    sltu at,v0,v1
    bnez at,L20f8b8
    nop
    .word 0xae030004
    nop
L20f8b8:
    .word 0x8e030000
    beqz v1,L20f8e8
    nop
    .word 0x8fa20100
    addu v0,v1,v0
    beqz s2,L20f998
    .word 0xae020000
    .word 0x8e030000
    .word 0x97a200d0
    .word 0x947e0000
    b L20f998
    .word 0xa4620000
L20f8e8:
    .word 0x8ea2000c
    addu v0,v0,s7
    beqz s2,L20f998
    .word 0xaea2000c
    .word 0x8ea4000c
    addiu v1,sp,816
    addiu v0,sp,768
    .word 0xc4830000
    .word 0xc4820004
    .word 0xc4810008
    .word 0xc480000c
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0xc4830010
    .word 0xc4820014
    .word 0xc4810018
    .word 0xc480001c
    .word 0xe4630010
    .word 0xe4620014
    .word 0xe4610018
    .word 0xe460001c
    .word 0xc4800020
    .word 0xe4600020
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0xe4830000
    .word 0xe4820004
    .word 0xe4810008
    .word 0xe480000c
    .word 0xc4430010
    .word 0xc4420014
    .word 0xc4410018
    .word 0xc440001c
    .word 0xe4830010
    .word 0xe4820014
    .word 0xe4810018
    .word 0xe480001c
    .word 0xc4400020
    .word 0xe4800020
    nop
L20f998:
    .word 0x8e620000
    bnez v0,L20f768
    addiu v0,sp,956
    .word 0x8fa200c0
    .word 0xaea2000c
    .word 0x8e82031c
    beqz v0,L20f9c0
    addiu a0,sp,272
    jalr ra,v0
    nop
L20f9c0:
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,960
}


