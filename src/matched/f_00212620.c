asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-144
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x3c020033
    .word 0x7fb00000
    .word 0x2442a620
    .word 0x8c4a0004
    addiu t3,zero,2
    andi v0,a3,0x1
    movz t3,zero,v0
    andi v0,a3,0x2
    beqz v0,L21268c
    andi v0,a3,0x8
    .word 0x3c02002f
    addiu v1,v0,2336
    .word 0x906c0007
    .word 0x90620008
    addiu t5,v1,9
    addiu t6,v1,12
    b L2126cc
    addiu t7,v1,15
L21268c:
    beqz v0,L2126b4
    .word 0x3c02002f
    .word 0x3c02002f
    addiu v1,v0,2336
    .word 0x906c0012
    .word 0x90620013
    addiu t5,v1,20
    addiu t6,v1,22
    b L2126cc
    addiu t7,v1,24
L2126b4:
    addiu v1,v0,2336
    .word 0x906c0002
    .word 0x90620003
    addiu t5,v1,4
    addiu t6,v1,5
    addiu t7,v1,6
L2126cc:
    andi v1,a3,0x100
    bnez v1,L2126ec
    .word 0x3c03002f
    .word 0x8cd80000
    .word 0x71a01e28
    .word 0x71c06e28
    b L2126f0
    .word 0x70607628
L2126ec:
    addiu t8,v1,2336
L2126f0:
    .word 0x8c860004
    andi v1,a2,0x1
    beqz v1,L212818
    andi v1,a2,0x8
    bnez v1,L212818
    nop
    .word 0x8d310004
    .word 0x8cb20094
    .word 0x8cb00008
    .word 0x71001e28
    .word 0x70003e28
    .word 0x70403628
    .word 0x8e3f0008
    sll s2,s2,0x4
    addu s0,s0,s2
    blez v1,L212818
    .word 0x7200ce28
L212734:
    .word 0x8cb1001c
    slt at,s1,v1
    bnez at,L212760
    nop
    .word 0x84b000a0
    .word 0x70608e28
    .word 0x70001e28
    sll s0,s0,0x4
    subu t9,t9,s0
    b L212770
    .word 0x73208628
L212760:
    .word 0x8cb1008c
    subu s2,s1,t3
    subu v1,v1,s2
    nop
L212770:
    .word 0x72209628
    beqz s2,L212800
    .word 0x2631ffff
    nop
L212780:
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
    .word 0x72209628
    .word 0x2631ffff
    .word 0xe6000000
    .word 0xc6800004
    .word 0xe6000004
    .word 0xc6800008
    .word 0xe6000008
    .word 0x92730000
    .word 0x2610000c
    bnez s2,L212780
    addu a2,a2,s3
    nop
L212800:
    .word 0x84b0009c
    subu a2,a2,t3
    sll s0,s0,0x4
    addu t9,t9,s0
    bgtz v1,L212734
    .word 0x73208628
L212818:
    .word 0x8c86000c
    andi v1,a2,0x1
    beqz v1,L212940
    andi v1,a2,0x8
    bnez v1,L212940
    nop
    .word 0x91430002
    andi v1,v1,0x84
    beqz v1,L212940
    nop
    .word 0x8ca700ac
    .word 0x8ca60008
    .word 0x8d230004
    .word 0x71009628
    .word 0x70008e28
    .word 0x70408628
    sll a3,a3,0x4
    addu a3,a2,a3
    .word 0x8c660010
    blez s2,L212940
    .word 0x70e01e28
L21286c:
    .word 0x8cb3001c
    slt at,s3,s2
    bnez at,L212898
    nop
    .word 0x84a700b8
    .word 0x72409e28
    .word 0x70009628
    sll a3,a3,0x4
    subu v1,v1,a3
    b L2128a8
    .word 0x70603e28
L212898:
    .word 0x8cb300a4
    subu s4,s3,t3
    subu s2,s2,s4
    nop
L2128a8:
    .word 0x7260a628
    beqz s4,L212928
    .word 0x2673ffff
    nop
L2128b8:
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
    .word 0x7260a628
    .word 0x2673ffff
    .word 0xe4e00000
    .word 0xc6c00004
    .word 0xe4e00004
    .word 0x92b50000
    .word 0x24e70008
    bnez s4,L2128b8
    addu s0,s0,s5
    nop
L212928:
    .word 0x84a700b4
    subu s0,s0,t3
    sll a3,a3,0x4
    addu v1,v1,a3
    bgtz s2,L21286c
    .word 0x70603e28
L212940:
    .word 0x8c860014
    andi v1,a2,0x1
    beqz v1,L212a78
    andi v1,a2,0x8
    bnez v1,L212a78
    nop
    .word 0x91430002
    andi v1,v1,0x80
    beqz v1,L212a78
    nop
    .word 0x8d270004
    .word 0x8ca600c4
    .word 0x8ca30008
    .word 0x7100a628
    .word 0x70009e28
    .word 0x70409628
    .word 0x8cff0010
    .word 0x8cf00014
    sll a2,a2,0x4
    addu s1,v1,a2
    blez s4,L212a78
    .word 0x7220ce28
L212998:
    .word 0x8ca3001c
    slt at,v1,s4
    bnez at,L2129c4
    nop
    .word 0x84a300d0
    .word 0x7280ae28
    .word 0x7000a628
    sll v1,v1,0x4
    subu t9,t9,v1
    b L2129d0
    .word 0x73208e28
L2129c4:
    .word 0x8cb500bc
    subu v1,s5,t3
    subu s4,s4,v1
L2129d0:
    .word 0x72a01e28
    beqz v1,L212a60
    .word 0x26b5ffff
    nop
L2129e0:
    addu v1,t5,s3
    .word 0x90670000
    sllv a3,s2,a3
    addu v1,t6,s3
    .word 0x90660000
    sll a3,a3,0x1
    addu a3,t8,a3
    .word 0x94e70000
    sllv s6,s2,a2
    addu v1,t7,s3
    sll s3,s3,0x1
    addu a3,s6,a3
    andi a3,a3,0xffff
    sll s6,a3,0x3
    addu a3,ra,s6
    .word 0xc4e00000
    srlv s3,t4,s3
    .word 0x72a03628
    addu s6,s0,s6
    andi s3,s3,0x3
    .word 0x26b5ffff
    .word 0xe6200000
    .word 0xc4e00004
    .word 0xe6200004
    .word 0xc6c00000
    .word 0xe6200008
    .word 0xc6c00004
    .word 0xe620000c
    .word 0x90630000
    .word 0x26310010
    bnez a2,L2129e0
    addu s2,s2,v1
L212a60:
    .word 0x84a300cc
    subu s2,s2,t3
    sll v1,v1,0x4
    addu t9,t9,v1
    bgtz s4,L212998
    .word 0x73208e28
L212a78:
    .word 0x8c86001c
    andi v1,a2,0x1
    beqz v1,L212bf0
    andi v1,a2,0x8
    bnez v1,L212bf0
    nop
    .word 0x8ca700dc
    .word 0x8ca60008
    .word 0x8d230004
    .word 0x71009628
    .word 0x70008e28
    .word 0x70408628
    sll a3,a3,0x4
    addu a3,a2,a3
    .word 0x8c660018
    blez s2,L212bf0
    .word 0x70e01e28
L212abc:
    .word 0x8cb3001c
    slt at,s3,s2
    bnez at,L212ae8
    nop
    .word 0x84a700e8
    .word 0x72409e28
    .word 0x70009628
    sll a3,a3,0x4
    subu v1,v1,a3
    b L212af8
    .word 0x70603e28
L212ae8:
    .word 0x8cb300d4
    subu s4,s3,t3
    subu s2,s2,s4
    nop
L212af8:
    .word 0x91540002
    andi s4,s4,0x8
    beqz s4,L212bac
    .word 0x7260a628
    .word 0x7260a628
    beqz s4,L212bd8
    .word 0x2673ffff
    nop
L212b18:
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
    .word 0x7260a628
    .word 0x2673ffff
    sll s7,s7,0x8
    sll ra,ra,0x10
    .word 0x93390003
    or s6,s6,s7
    or ra,ra,s6
    sll t9,t9,0x18
    or t9,t9,ra
    .word 0xacf90000
    .word 0x92b50000
    .word 0x24e70004
    bnez s4,L212b18
    addu s0,s0,s5
    b L212bdc
    .word 0x84a700e4
    .word 0x7260a628
L212bac:
    beqz s4,L212bd8
    .word 0x2673ffff
    nop
    .word 0x3c15ff00
L212bbc:
    .word 0xacf50000
    .word 0x7260a628
    .word 0x24e70004
    .word 0x2673ffff
    nop
    bnez s4,L212bbc
    nop
L212bd8:
    .word 0x84a700e4
L212bdc:
    subu s0,s0,t3
    sll a3,a3,0x4
    addu v1,v1,a3
    bgtz s2,L212abc
    .word 0x70603e28
L212bf0:
    .word 0x8c860024
    andi v1,a2,0x1
    beqz v1,L212e20
    andi v1,a2,0x8
    bnez v1,L212e20
    nop
    .word 0x8d230004
    .word 0x8cb000f4
    .word 0x8ca70008
    .word 0x8c66000c
    .word 0x70004e28
    sll v1,s0,0x4
    addu a3,a3,v1
    blez t0,L212e20
    .word 0x70e01e28
L212c2c:
    .word 0x8cb0001c
    slt at,s0,t0
    bnez at,L212c58
    nop
    .word 0x84a70100
    .word 0x71008628
    .word 0x70004628
    sll a3,a3,0x4
    subu v1,v1,a3
    b L212c68
    .word 0x70603e28
L212c58:
    .word 0x8cb000ec
    subu s1,s0,t3
    subu t0,t0,s1
    nop
L212c68:
    .word 0x91510002
    andi s1,s1,0x10
    beqz s1,L212d9c
    nop
    .word 0x8c910024
    andi s1,s1,0x2000
    beqz s1,L212d14
    .word 0x72008e28
    .word 0x72008e28
    beqz s1,L212e08
    .word 0x2610ffff
    nop
L212c98:
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
    .word 0x72008e28
    .word 0x2610ffff
    .word 0xa0f30000
    .word 0x82930001
    .word 0xa0f30001
    .word 0x82930002
    .word 0xa0f30002
    .word 0x92520000
    .word 0x24e70003
    bnez s1,L212c98
    addu v0,v0,s2
    b L212e0c
    .word 0x84a700fc
    .word 0x72008e28
L212d14:
    beqz s1,L212e08
    .word 0x2610ffff
    nop
L212d20:
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
    .word 0x72008e28
    .word 0x2610ffff
    .word 0xa0f30000
    .word 0x82930001
    .word 0xa0f30001
    .word 0x82930002
    .word 0xa0f30002
    .word 0xa0e00003
    .word 0x92520000
    .word 0x24e70004
    bnez s1,L212d20
    addu v0,v0,s2
    b L212e08
    nop
L212d9c:
    .word 0x8c910024
    andi s1,s1,0x2000
    beqz s1,L212de0
    .word 0x72008e28
    .word 0x72008e28
    beqz s1,L212e08
    .word 0x2610ffff
L212db8:
    .word 0xa0e00000
    .word 0xa0e00001
    .word 0xa0e00002
    .word 0x72008e28
    .word 0x24e70003
    bnez s1,L212db8
    .word 0x2610ffff
    b L212e08
    nop
    .word 0x72008e28
L212de0:
    beqz s1,L212e08
    .word 0x2610ffff
L212de8:
    .word 0xa0e00000
    .word 0xa0e00001
    .word 0xa0e00002
    .word 0xa0e00003
    .word 0x72008e28
    .word 0x24e70004
    bnez s1,L212de8
    .word 0x2610ffff
L212e08:
    .word 0x84a700fc
L212e0c:
    subu v0,v0,t3
    sll a3,a3,0x4
    addu v1,v1,a3
    bgtz t0,L212c2c
    .word 0x70603e28
L212e20:
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

