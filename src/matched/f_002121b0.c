asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8d030004
    andi v0,a2,0x1
    addiu t0,zero,2
    movz t0,zero,v0
    andi v0,a2,0x2
    beqz v0,L212208
    andi v0,a2,0x8
    .word 0x3c02002f
    addiu t2,v0,2304
    .word 0x91490007
    .word 0x91420008
    addiu t3,t2,9
    addiu t4,t2,12
    b L212248
    addiu t5,t2,15
L212208:
    beqz v0,L212230
    .word 0x3c02002f
    .word 0x3c02002f
    addiu t2,v0,2304
    .word 0x91490012
    .word 0x91420013
    addiu t3,t2,20
    addiu t4,t2,22
    b L212248
    addiu t5,t2,24
L212230:
    addiu t2,v0,2304
    .word 0x91490002
    .word 0x91420003
    addiu t3,t2,4
    addiu t4,t2,5
    addiu t5,t2,6
L212248:
    andi a2,a2,0x100
    bnezl a2,L212268
    .word 0x3c05002f
    .word 0x8cae0000
    .word 0x71602e28
    .word 0x71805e28
    b L21226c
    .word 0x70a06628
L212268:
    addiu t6,a1,2304
L21226c:
    .word 0x8c650000
    andi a1,a1,0x8
    beqz a1,L2123a0
    nop
    .word 0x8c900094
    .word 0x8c8f0008
    .word 0x8c78000c
    .word 0x70005628
    .word 0x70403628
    .word 0x70e02e28
    sll s0,s0,0x4
    addu t9,t7,s0
    blez a3,L2123a0
    .word 0x73207e28
L2122a4:
    .word 0x8c90001c
    slt at,s0,a1
    bnez at,L2122d0
    nop
    .word 0x849000a0
    .word 0x70a0fe28
    .word 0x70002e28
    sll s0,s0,0x4
    subu t7,t7,s0
    b L2122e0
    .word 0x71e0ce28
L2122d0:
    .word 0x8c9f008c
    subu s0,ra,t0
    subu a1,a1,s0
    nop
L2122e0:
    .word 0x73e08628
    beqz s0,L212388
    addiu ra,ra,-1
    nop
    addiu s2,sp,96
L2122f4:
    addu s0,t3,t2
    .word 0x92130000
    addu s1,t5,t2
    sllv s3,a2,s3
    sll s3,s3,0x1
    addu s0,t4,t2
    addu s3,t6,s3
    .word 0x92100000
    .word 0x96740000
    sll t2,t2,0x1
    srlv t2,t1,t2
    andi t2,t2,0x3
    sllv s3,a2,s0
    addu s3,s3,s4
    andi s4,s3,0xffff
    sll s3,s4,0x3
    addu s3,s3,s4
    sll s3,s3,0x2
    addu s3,t8,s3
    .word 0xc6620000
    .word 0xc6610004
    .word 0xc6600008
    .word 0x73e08628
    addiu ra,ra,-1
    .word 0xe6420000
    .word 0xe6410004
    .word 0xe6400008
    .word 0xc7a00060
    .word 0xe7200000
    .word 0xc7a00064
    .word 0xe7200004
    .word 0xc7a00068
    .word 0xe7200008
    .word 0x92310000
    addiu t9,t9,12
    bnez s0,L2122f4
    addu a2,a2,s1
L212388:
    .word 0x8490009c
    subu a2,a2,t0
    sll s0,s0,0x4
    addu t7,t7,s0
    bgtz a1,L2122a4
    .word 0x71e0ce28
L2123a0:
    .word 0x8c650000
    andi a1,a1,0x1
    beqz a1,L2124b0
    nop
    .word 0x8c8a00ac
    .word 0x8c850008
    .word 0x8c66000c
    .word 0x7000c628
    .word 0x70407e28
    .word 0x70e0ce28
    sll t2,t2,0x4
    addu t2,a1,t2
    blez a3,L2124b0
    .word 0x71402e28
L2123d8:
    .word 0x8c90001c
    slt at,s0,t9
    bnez at,L212404
    nop
    .word 0x848a00b8
    .word 0x7320fe28
    .word 0x7000ce28
    sll t2,t2,0x4
    subu a1,a1,t2
    b L212410
    .word 0x70a05628
L212404:
    .word 0x8c9f00a4
    subu s0,ra,t0
    subu t9,t9,s0
L212410:
    .word 0x73e08628
    beqz s0,L212498
    addiu ra,ra,-1
    nop
L212420:
    addu s0,t3,t8
    .word 0x92130000
    addu s1,t5,t8
    sllv s3,t7,s3
    addu s0,t4,t8
    .word 0x92120000
    sll s3,s3,0x1
    addu s3,t6,s3
    .word 0x96730000
    sllv s2,t7,s2
    sll s0,t8,0x1
    srlv s0,t1,s0
    addu s2,s2,s3
    andi s3,s2,0xffff
    sll s2,s3,0x3
    addu s2,s2,s3
    sll s2,s2,0x2
    addu s2,a2,s2
    .word 0xc640001c
    andi t8,s0,0x3
    .word 0x73e08628
    addiu ra,ra,-1
    .word 0xe5400000
    .word 0xc6400020
    .word 0xe5400004
    .word 0x92310000
    addiu t2,t2,8
    bnez s0,L212420
    addu t7,t7,s1
    nop
L212498:
    .word 0x848a00b4
    subu t7,t7,t0
    sll t2,t2,0x4
    addu a1,a1,t2
    bgtz t9,L2123d8
    .word 0x70a05628
L2124b0:
    .word 0x8c650000
    andi a1,a1,0x10
    beqz a1,L2125f8
    nop
    .word 0x8c66000c
    .word 0x8c8500dc
    .word 0x70007e28
    .word 0x8c830008
    sll a1,a1,0x4
    addu t2,v1,a1
    blez a3,L2125f8
    .word 0x71402e28
L2124e0:
    .word 0x8c83001c
    slt at,v1,a3
    bnez at,L21250c
    nop
    .word 0x848300e8
    .word 0x70e0c628
    .word 0x70003e28
    sll v1,v1,0x4
    subu a1,a1,v1
    b L212518
    .word 0x70a05628
L21250c:
    .word 0x8c9800d4
    subu v1,t8,t0
    subu a3,a3,v1
L212518:
    .word 0x73001e28
    beqz v1,L2125e0
    addiu t8,t8,-1
    nop
    addiu v1,sp,108
L21252c:
    addu s0,t3,t7
    .word 0x92110000
    .word 0x7300ce28
    addu ra,t5,t7
    addiu t8,t8,-1
    sllv s1,v0,s1
    addu s0,t4,t7
    sll s1,s1,0x1
    .word 0x92100000
    addu s1,t6,s1
    .word 0x96310000
    sll t7,t7,0x1
    srlv t7,t1,t7
    andi t7,t7,0x3
    sllv s0,v0,s0
    addu s0,s0,s1
    andi s1,s0,0xffff
    sll s0,s1,0x3
    addu s0,s0,s1
    sll s0,s0,0x2
    addu s0,a2,s0
    .word 0x9213000c
    .word 0x9212000d
    .word 0x9211000e
    .word 0x9210000f
    .word 0xa0730000
    .word 0xa0720001
    .word 0xa0710002
    .word 0xa0700003
    .word 0x93b2006d
    .word 0x93b1006e
    .word 0x93b0006f
    .word 0x93b3006c
    sll s2,s2,0x8
    sll s1,s1,0x10
    sll s0,s0,0x18
    or s2,s3,s2
    or s1,s1,s2
    or s0,s0,s1
    .word 0xad500000
    .word 0x93ff0000
    addiu t2,t2,4
    bnez t9,L21252c
    addu v0,v0,ra
    nop
L2125e0:
    .word 0x848300e4
    subu v0,v0,t0
    sll v1,v1,0x4
    addu a1,a1,v1
    bgtz a3,L2124e0
    .word 0x70a05628
L2125f8:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,112
}
