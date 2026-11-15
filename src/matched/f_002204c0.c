
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
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c480004
    .word 0x8c830030
    .word 0x8c890008
    .word 0x8c82000c
    .word 0x8c630000
    .word 0x8c450000
    addiu t2,v1,24
    .word 0x8c630024
    andi v0,a1,0x1
    beqz v0,L220520
    .word 0x70005e28
    addiu t3,zero,2
L220520:
    andi v0,a1,0x2
    beqz v0,L22054c
    andi v0,a1,0x8
    .word 0x3c02002f
    addiu a2,v0,2672
    .word 0x90cc0007
    .word 0x90c20008
    addiu t5,a2,9
    addiu t6,a2,12
    b L22058c
    addiu t7,a2,15
L22054c:
    beqz v0,L220574
    .word 0x3c02002f
    .word 0x3c02002f
    addiu a2,v0,2672
    .word 0x90cc0012
    .word 0x90c20013
    addiu t5,a2,20
    addiu t6,a2,22
    b L22058c
    addiu t7,a2,24
L220574:
    addiu a2,v0,2672
    .word 0x90cc0002
    .word 0x90c20003
    addiu t5,a2,4
    addiu t6,a2,5
    addiu t7,a2,6
L22058c:
    andi a1,a1,0x100
    bnez a1,L2205b0
    .word 0x3c05002f
    paddub a1,t5,zero
    paddub t5,t6,zero
    paddub t6,a1,zero
    .word 0x8c85002c
    b L2205b4
    .word 0x8cb80000
L2205b0:
    addiu t8,a1,2672
L2205b4:
    .word 0x8c850034
    andi a1,a1,0x10
    beqz a1,L2206e8
    nop
    .word 0x8c850004
    .word 0x8ca6002c
    andi a1,a2,0x1
    beqz a1,L2206e8
    andi a1,a2,0x8
    bnez a1,L2206e8
    nop
    .word 0x8d510090
    .word 0x8d500008
    .word 0x8d3f0008
    .word 0x70003e28
    paddub a2,v0,zero
    paddub a1,v1,zero
    sll s1,s1,0x4
    addu s0,s0,s1
    blez v1,L2206e8
    paddub t9,s0,zero
L220608:
    .word 0x8d510018
    slt at,s1,a1
    bnez at,L220634
    nop
    .word 0x8550009c
    paddub s1,a1,zero
    .word 0x70002e28
    sll s0,s0,0x4
    subu t9,t9,s0
    b L220640
    paddub s0,t9,zero
L220634:
    .word 0x8d510088
    subu s2,s1,t3
    subu a1,a1,s2
L220640:
    paddub s2,s1,zero
    beqz s2,L2206d0
    addiu s1,s1,-1
    nop
L220650:
    addu s2,t5,a3
    .word 0x92540000
    addu s3,t7,a3
    sllv s4,a2,s4
    sll s4,s4,0x1
    addu s2,t6,a3
    addu s4,t8,s4
    .word 0x92520000
    .word 0x96950000
    sll a3,a3,0x1
    srlv a3,t4,a3
    andi a3,a3,0x3
    sllv s4,a2,s2
    addu s4,s4,s5
    andi s5,s4,0xffff
    sll s4,s5,0x1
    addu s4,s4,s5
    sll s4,s4,0x2
    addu s4,ra,s4
    .word 0xc6800000
    paddub s2,s1,zero
    addiu s1,s1,-1
    .word 0xe6000000
    .word 0xc6800004
    .word 0xe6000004
    .word 0xc6800008
    .word 0xe6000008
    .word 0x92730000
    addiu s0,s0,12
    bnez s2,L220650
    addu a2,a2,s3
    nop
L2206d0:
    .word 0x85500098
    subu a2,a2,t3
    sll s0,s0,0x4
    addu t9,t9,s0
    bgtz a1,L220608
    paddub s0,t9,zero
L2206e8:
    .word 0x8c850034
    andi a1,a1,0xc0
    beqz a1,L220820
    nop
    .word 0x8c850004
    .word 0x8ca60034
    andi a1,a2,0x1
    beqz a1,L220820
    andi a1,a2,0x8
    bnez a1,L220820
    nop
    .word 0x91050002
    andi a1,a1,0x84
    beqz a1,L220820
    nop
    .word 0x8d4700a8
    .word 0x8d450008
    .word 0x8d260010
    .word 0x70008e28
    paddub s0,v0,zero
    paddub s2,v1,zero
    sll a3,a3,0x4
    addu a3,a1,a3
    blez v1,L220820
    paddub a1,a3,zero
L22074c:
    .word 0x8d530018
    slt at,s3,s2
    bnez at,L220778
    nop
    .word 0x854700b4
    paddub s3,s2,zero
    .word 0x70009628
    sll a3,a3,0x4
    subu a1,a1,a3
    b L220788
    paddub a3,a1,zero
L220778:
    .word 0x8d5300a0
    subu s4,s3,t3
    subu s2,s2,s4
    nop
L220788:
    paddub s4,s3,zero
    beqz s4,L220808
    addiu s3,s3,-1
    nop
L220798:
    addu s4,t5,s1
    .word 0x92960000
    addu s5,t7,s1
    sllv s6,s0,s6
    sll s6,s6,0x1
    addu s4,t6,s1
    addu s6,t8,s6
    .word 0x92940000
    .word 0x96d70000
    sll s1,s1,0x1
    srlv s1,t4,s1
    andi s1,s1,0x3
    sllv s6,s0,s4
    addu s6,s6,s7
    andi s6,s6,0xffff
    sll s6,s6,0x3
    addu s6,a2,s6
    .word 0xc6c00000
    paddub s4,s3,zero
    addiu s3,s3,-1
    .word 0xe4e00000
    .word 0xc6c00004
    .word 0xe4e00004
    .word 0x92b50000
    addiu a3,a3,8
    bnez s4,L220798
    addu s0,s0,s5
    nop
L220808:
    .word 0x854700b0
    subu s0,s0,t3
    sll a3,a3,0x4
    addu a1,a1,a3
    bgtz s2,L22074c
    paddub a3,a1,zero
L220820:
    .word 0x8c850034
    andi a1,a1,0x80
    beqz a1,L220968
    nop
    .word 0x8c850004
    .word 0x8ca6003c
    andi a1,a2,0x1
    beqz a1,L220968
    andi a1,a2,0x8
    bnez a1,L220968
    nop
    .word 0x91050002
    andi a1,a1,0x80
    beqz a1,L220968
    nop
    .word 0x8d4600c0
    .word 0x8d450008
    .word 0x8d3f0010
    .word 0x8d300014
    .word 0x70009e28
    paddub s2,v0,zero
    sll a2,a2,0x4
    addu s1,a1,a2
    paddub t9,s1,zero
    blez v1,L220968
    paddub s4,v1,zero
L220888:
    .word 0x8d450018
    slt at,a1,s4
    bnez at,L2208b4
    nop
    .word 0x854500cc
    paddub s5,s4,zero
    .word 0x7000a628
    sll a1,a1,0x4
    subu t9,t9,a1
    b L2208c0
    paddub s1,t9,zero
L2208b4:
    .word 0x8d5500b8
    subu a1,s5,t3
    subu s4,s4,a1
L2208c0:
    paddub a1,s5,zero
    beqz a1,L220950
    addiu s5,s5,-1
    nop
L2208d0:
    addu a1,t5,s3
    .word 0x90a70000
    sllv a3,s2,a3
    addu a1,t6,s3
    .word 0x90a60000
    sll a3,a3,0x1
    addu a3,t8,a3
    .word 0x94e70000
    sllv s6,s2,a2
    addu a1,t7,s3
    sll s3,s3,0x1
    addu a3,s6,a3
    andi a3,a3,0xffff
    sll s6,a3,0x3
    addu a3,ra,s6
    .word 0xc4e00000
    srlv s3,t4,s3
    paddub a2,s5,zero
    addu s6,s0,s6
    andi s3,s3,0x3
    addiu s5,s5,-1
    .word 0xe6200000
    .word 0xc4e00004
    .word 0xe6200004
    .word 0xc6c00000
    .word 0xe6200008
    .word 0xc6c00004
    .word 0xe620000c
    .word 0x90a50000
    addiu s1,s1,16
    bnez a2,L2208d0
    addu s2,s2,a1
L220950:
    .word 0x854500c8
    subu s2,s2,t3
    sll a1,a1,0x4
    addu t9,t9,a1
    bgtz s4,L220888
    paddub s1,t9,zero
L220968:
    .word 0x8c850034
    andi a1,a1,0x100
    beqz a1,L220af0
    nop
    .word 0x8c850004
    .word 0x8ca60044
    andi a1,a2,0x1
    beqz a1,L220af0
    andi a1,a2,0x8
    bnez a1,L220af0
    nop
    .word 0x8d4700d8
    .word 0x8d450008
    .word 0x8d260018
    .word 0x70008e28
    paddub s0,v0,zero
    paddub s2,v1,zero
    sll a3,a3,0x4
    addu a3,a1,a3
    blez v1,L220af0
    paddub a1,a3,zero
L2209bc:
    .word 0x8d530018
    slt at,s3,s2
    bnez at,L2209e8
    nop
    .word 0x854700e4
    paddub s3,s2,zero
    .word 0x70009628
    sll a3,a3,0x4
    subu a1,a1,a3
    b L2209f8
    paddub a3,a1,zero
L2209e8:
    .word 0x8d5300d0
    subu s4,s3,t3
    subu s2,s2,s4
    nop
L2209f8:
    .word 0x91140002
    andi s4,s4,0x8
    beqz s4,L220aac
    paddub s4,s3,zero
    paddub s4,s3,zero
    beqz s4,L220ad8
    addiu s3,s3,-1
    nop
L220a18:
    addu s4,t5,s1
    .word 0x92960000
    addu s5,t7,s1
    sllv s6,s0,s6
    sll s6,s6,0x1
    addu s4,t6,s1
    addu s6,t8,s6
    .word 0x92940000
    .word 0x96d70000
    sll s1,s1,0x1
    srlv s1,t4,s1
    andi s1,s1,0x3
    sllv s6,s0,s4
    addu s6,s6,s7
    andi s6,s6,0xffff
    sll s6,s6,0x2
    addu t9,a2,s6
    .word 0x93370001
    .word 0x933f0002
    .word 0x93360000
    paddub s4,s3,zero
    addiu s3,s3,-1
    sll s7,s7,0x8
    sll ra,ra,0x10
    .word 0x93390003
    or s6,s6,s7
    or ra,ra,s6
    sll t9,t9,0x18
    or t9,t9,ra
    .word 0xacf90000
    .word 0x92b50000
    addiu a3,a3,4
    bnez s4,L220a18
    addu s0,s0,s5
    b L220adc
    .word 0x854700e0
    paddub s4,s3,zero
L220aac:
    beqz s4,L220ad8
    addiu s3,s3,-1
    nop
    .word 0x3c15ff00
L220abc:
    .word 0xacf50000
    paddub s4,s3,zero
    addiu a3,a3,4
    addiu s3,s3,-1
    nop
    bnez s4,L220abc
    nop
L220ad8:
    .word 0x854700e0
L220adc:
    subu s0,s0,t3
    sll a3,a3,0x4
    addu a1,a1,a3
    bgtz s2,L2209bc
    paddub a3,a1,zero
L220af0:
    .word 0x8c850034
    andi a1,a1,0x20
    beqz a1,L220d38
    nop
    .word 0x8c850004
    .word 0x8ca6004c
    andi a1,a2,0x1
    beqz a1,L220d38
    andi a1,a2,0x8
    bnez a1,L220d38
    nop
    .word 0x8d4700f0
    .word 0x8d450008
    .word 0x8d26000c
    sll a3,a3,0x4
    addu a3,a1,a3
    .word 0x70004e28
    blez v1,L220d38
    paddub a1,a3,zero
L220b3c:
    .word 0x8d500018
    slt at,s0,v1
    bnez at,L220b68
    nop
    .word 0x854700fc
    paddub s0,v1,zero
    .word 0x70001e28
    sll a3,a3,0x4
    subu a1,a1,a3
    b L220b78
    paddub a3,a1,zero
L220b68:
    .word 0x8d5000e8
    subu s1,s0,t3
    subu v1,v1,s1
    nop
L220b78:
    .word 0x91110002
    andi s1,s1,0x10
    beqz s1,L220cac
    nop
    .word 0x8c910004
    .word 0x8e31004c
    andi s1,s1,0x2000
    beqz s1,L220c24
    paddub s1,s0,zero
    paddub s1,s0,zero
    beqz s1,L220d20
    addiu s0,s0,-1
L220ba8:
    addu s1,t5,t1
    .word 0x92330000
    addu s2,t7,t1
    sllv s3,v0,s3
    sll s3,s3,0x1
    addu s1,t6,t1
    addu s3,t8,s3
    .word 0x92310000
    .word 0x96740000
    sll t1,t1,0x1
    srlv t1,t4,t1
    andi t1,t1,0x3
    sllv s3,v0,s1
    addu s3,s3,s4
    sll s3,s3,0x2
    addu s4,a2,s3
    .word 0x82930000
    paddub s1,s0,zero
    addiu s0,s0,-1
    .word 0xa0f30000
    .word 0x82930001
    .word 0xa0f30001
    .word 0x82930002
    .word 0xa0f30002
    .word 0x92520000
    addiu a3,a3,3
    bnez s1,L220ba8
    addu v0,v0,s2
    b L220d24
    .word 0x854700f8
    paddub s1,s0,zero
L220c24:
    beqz s1,L220d20
    addiu s0,s0,-1
    nop
L220c30:
    addu s1,t5,t1
    .word 0x92330000
    addu s2,t7,t1
    sllv s3,v0,s3
    sll s3,s3,0x1
    addu s1,t6,t1
    addu s3,t8,s3
    .word 0x92310000
    .word 0x96740000
    sll t1,t1,0x1
    srlv t1,t4,t1
    andi t1,t1,0x3
    sllv s3,v0,s1
    addu s3,s3,s4
    sll s3,s3,0x2
    addu s4,a2,s3
    .word 0x82930000
    paddub s1,s0,zero
    addiu s0,s0,-1
    .word 0xa0f30000
    .word 0x82930001
    .word 0xa0f30001
    .word 0x82930002
    .word 0xa0f30002
    .word 0xa0e00003
    .word 0x92520000
    addiu a3,a3,4
    bnez s1,L220c30
    addu v0,v0,s2
    b L220d20
    nop
L220cac:
    .word 0x8c910004
    .word 0x8e31004c
    andi s1,s1,0x2000
    beqz s1,L220cf8
    paddub s1,s0,zero
    paddub s1,s0,zero
    beqz s1,L220d20
    addiu s0,s0,-1
    nop
L220cd0:
    .word 0xa0e00000
    .word 0xa0e00001
    .word 0xa0e00002
    paddub s1,s0,zero
    addiu a3,a3,3
    bnez s1,L220cd0
    addiu s0,s0,-1
    b L220d20
    nop
    paddub s1,s0,zero
L220cf8:
    beqz s1,L220d20
    addiu s0,s0,-1
L220d00:
    .word 0xa0e00000
    .word 0xa0e00001
    .word 0xa0e00002
    .word 0xa0e00003
    paddub s1,s0,zero
    addiu a3,a3,4
    bnez s1,L220d00
    addiu s0,s0,-1
L220d20:
    .word 0x854700f8
L220d24:
    subu v0,v0,t3
    sll a3,a3,0x4
    addu a1,a1,a3
    bgtz v1,L220b3c
    paddub a3,a1,zero
L220d38:
    .word 0x7bbf0080
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
    addiu sp,sp,144
}


