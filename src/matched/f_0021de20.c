
asm void func(void) {
    .set noreorder
    addiu sp,sp,-128
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c830030
    .word 0x8c82000c
    .word 0x8c890008
    .word 0x8c630000
    .word 0x8c450000
    addiu t2,v1,24
    .word 0x8c630024
    andi v0,a1,0x1
    beqz v0,L21de6c
    .word 0x70005e28
    addiu t3,zero,2
L21de6c:
    andi v0,a1,0x2
    beqz v0,L21de98
    andi v0,a1,0x8
    .word 0x3c02002f
    addiu a2,v0,2608
    .word 0x90cd0007
    .word 0x90c20008
    addiu t8,a2,9
    addiu t9,a2,12
    b L21ded8
    addiu ra,a2,15
L21de98:
    beqz v0,L21dec0
    .word 0x3c02002f
    .word 0x3c02002f
    addiu a2,v0,2608
    .word 0x90cd0012
    .word 0x90c20013
    addiu t8,a2,20
    addiu t9,a2,22
    b L21ded8
    addiu ra,a2,24
L21dec0:
    addiu a2,v0,2608
    .word 0x90cd0002
    .word 0x90c20003
    addiu t8,a2,4
    addiu t9,a2,5
    addiu ra,a2,6
L21ded8:
    andi a1,a1,0x100
    bnez a1,L21defc
    .word 0x3c05002f
    paddub a1,t8,zero
    paddub t8,t9,zero
    paddub t9,a1,zero
    .word 0x8c85002c
    b L21df00
    .word 0x8cb00000
L21defc:
    addiu s0,a1,2608
L21df00:
    .word 0x8c850034
    andi a1,a1,0x10
    beqz a1,L21e040
    nop
    .word 0x8d250000
    andi a1,a1,0x8
    beqz a1,L21e040
    nop
    .word 0x8d460090
    .word 0x8d450008
    .word 0x8d32000c
    .word 0x70007e28
    paddub t6,v0,zero
    paddub t4,v1,zero
    sll a2,a2,0x4
    addu s3,a1,a2
    blez v1,L21e040
    paddub s1,s3,zero
L21df48:
    .word 0x8d450018
    slt at,a1,t4
    bnez at,L21df74
    nop
    .word 0x8545009c
    paddub s4,t4,zero
    .word 0x70006628
    sll a1,a1,0x4
    subu s1,s1,a1
    b L21df80
    paddub s3,s1,zero
L21df74:
    .word 0x8d540088
    subu a1,s4,t3
    subu t4,t4,a1
L21df80:
    paddub a1,s4,zero
    beqz a1,L21e028
    addiu s4,s4,-1
    nop
    addiu a2,sp,112
L21df94:
    addu a1,t8,t7
    .word 0x90a80000
    sllv t0,t6,t0
    addu a1,t9,t7
    .word 0x90a70000
    sll t0,t0,0x1
    addu t0,s0,t0
    .word 0x95080000
    sllv s5,t6,a3
    addu a1,ra,t7
    sll t7,t7,0x1
    addu t0,s5,t0
    andi s5,t0,0xffff
    sll t0,s5,0x3
    addu t0,t0,s5
    sll t0,t0,0x2
    addu t0,s2,t0
    .word 0xc5020000
    .word 0xc5010004
    .word 0xc5000008
    srlv t7,t5,t7
    paddub a3,s4,zero
    andi t7,t7,0x3
    addiu s4,s4,-1
    .word 0xe4c20000
    .word 0xe4c10004
    .word 0xe4c00008
    .word 0xc7a00070
    .word 0xe6600000
    .word 0xc7a00074
    .word 0xe6600004
    .word 0xc7a00078
    .word 0xe6600008
    .word 0x90a50000
    addiu s3,s3,12
    bnez a3,L21df94
    addu t6,t6,a1
L21e028:
    .word 0x85450098
    subu t6,t6,t3
    sll a1,a1,0x4
    addu s1,s1,a1
    bgtz t4,L21df48
    paddub s3,s1,zero
L21e040:
    .word 0x8c850034
    andi a1,a1,0x40
    beqz a1,L21e160
    nop
    .word 0x8d250000
    andi a1,a1,0x1
    beqz a1,L21e160
    nop
    .word 0x8d4700a8
    .word 0x8d450008
    .word 0x8d26000c
    .word 0x70006628
    paddub t0,v0,zero
    paddub t6,v1,zero
    sll a3,a3,0x4
    addu a3,a1,a3
    blez v1,L21e160
    paddub a1,a3,zero
L21e088:
    .word 0x8d4f0018
    slt at,t7,t6
    bnez at,L21e0b4
    nop
    .word 0x854700b4
    paddub t7,t6,zero
    .word 0x70007628
    sll a3,a3,0x4
    subu a1,a1,a3
    b L21e0c0
    paddub a3,a1,zero
L21e0b4:
    .word 0x8d4f00a0
    subu s1,t7,t3
    subu t6,t6,s1
L21e0c0:
    paddub s1,t7,zero
    beqz s1,L21e148
    addiu t7,t7,-1
    nop
L21e0d0:
    addu s1,t8,t4
    .word 0x92330000
    addu s2,ra,t4
    sllv s3,t0,s3
    sll s3,s3,0x1
    addu s1,t9,t4
    addu s3,s0,s3
    .word 0x92310000
    .word 0x96740000
    sll t4,t4,0x1
    srlv t4,t5,t4
    andi t4,t4,0x3
    sllv s3,t0,s1
    addu s3,s3,s4
    andi s4,s3,0xffff
    sll s3,s4,0x3
    addu s3,s3,s4
    sll s3,s3,0x2
    addu s3,a2,s3
    .word 0xc660001c
    paddub s1,t7,zero
    addiu t7,t7,-1
    .word 0xe4e00000
    .word 0xc6600020
    .word 0xe4e00004
    .word 0x92520000
    addiu a3,a3,8
    bnez s1,L21e0d0
    addu t0,t0,s2
    nop
L21e148:
    .word 0x854700b0
    subu t0,t0,t3
    sll a3,a3,0x4
    addu a1,a1,a3
    bgtz t6,L21e088
    paddub a3,a1,zero
L21e160:
    .word 0x8c840034
    andi a0,a0,0x100
    beqz a0,L21e2b8
    nop
    .word 0x8d240000
    andi a0,a0,0x10
    beqz a0,L21e2b8
    nop
    .word 0x8d4500d8
    .word 0x8d440008
    .word 0x8d26000c
    .word 0x70004628
    sll a1,a1,0x4
    addu a3,a0,a1
    blez v1,L21e2b8
    paddub a1,a3,zero
L21e1a0:
    .word 0x8d440018
    slt at,a0,v1
    bnez at,L21e1cc
    nop
    .word 0x854400e4
    paddub t1,v1,zero
    .word 0x70001e28
    sll a0,a0,0x4
    subu a1,a1,a0
    b L21e1d8
    paddub a3,a1,zero
L21e1cc:
    .word 0x8d4900d0
    subu a0,t1,t3
    subu v1,v1,a0
L21e1d8:
    paddub a0,t1,zero
    beqz a0,L21e2a0
    addiu t1,t1,-1
    nop
    addiu a0,sp,124
L21e1ec:
    addu t4,t8,t0
    .word 0x918f0000
    addu t6,ra,t0
    sllv t7,v0,t7
    sll t7,t7,0x1
    addu t4,t9,t0
    addu t7,s0,t7
    .word 0x918c0000
    .word 0x95f10000
    sll t0,t0,0x1
    srlv t0,t5,t0
    andi t0,t0,0x3
    sllv t7,v0,t4
    addu t7,t7,s1
    andi s1,t7,0xffff
    sll t7,s1,0x3
    addu t7,t7,s1
    sll t7,t7,0x2
    addu t7,a2,t7
    .word 0x91f3000c
    .word 0x91f2000d
    .word 0x91f1000e
    paddub t4,t1,zero
    addiu t1,t1,-1
    .word 0x91ef000f
    .word 0xa0930000
    .word 0xa0920001
    .word 0xa0910002
    .word 0xa08f0003
    .word 0x93b2007d
    .word 0x93b1007e
    .word 0x93af007f
    .word 0x93b3007c
    sll s2,s2,0x8
    sll s1,s1,0x10
    sll t7,t7,0x18
    or s2,s3,s2
    or s1,s1,s2
    or t7,t7,s1
    .word 0xacef0000
    .word 0x91ce0000
    addiu a3,a3,4
    bnez t4,L21e1ec
    addu v0,v0,t6
    nop
L21e2a0:
    .word 0x854400e0
    subu v0,v0,t3
    sll a0,a0,0x4
    addu a1,a1,a0
    bgtz v1,L21e1a0
    paddub a3,a1,zero
L21e2b8:
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,128
}


