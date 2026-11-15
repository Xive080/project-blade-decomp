extern void func_00188f00(void);
extern void func_00230d10(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-208
    .word 0x7fbf0080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    addiu v1,zero,15
    .word 0xe7b40000
    beq a1,v1,L24153c
    paddub s0,a0,zero
    b L2417cc
    .word 0x7bbf0080
L24153c:
    .word 0xc4c10004
    .word 0x3c033f80
    .word 0x44830000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L241564
    paddub s1,a2,zero
    b L2415b4
    .word 0x46000046
L241564:
    .word 0x8e03002c
    andi v1,v1,0x2
    beqz v1,L241598
    nop
    .word 0x3c03bf80
    .word 0x44830000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L2415b4
    nop
    b L2415b4
    .word 0x46000046
L241598:
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L2415b4
    nop
    .word 0x46000046
L2415b4:
    .word 0x8e250000
    addiu s2,zero,2
    paddub v1,s2,zero
    addiu s2,s2,-1
    sll a0,a1,0x1
    addu a0,a0,a1
    sll a0,a0,0x3
    addu a0,a0,s0
    .word 0xc48000a8
    sub.s $f20,$f1,$f0
    beqz v1,L2417c8
    .word 0xe48100a8
    sll v1,s2,0x1
    sll s5,s2,0x2
    addu v1,v1,s2
    addu s3,s1,s5
    sll s4,v1,0x3
L2415f8:
    bnez s2,L241644
    nop
    .word 0x8e230000
    sll v1,v1,0x3
    addu v1,s0,v1
    addu a0,v1,s5
    .word 0x8c8301d0
    sltu v1,zero,v1
    bnez v1,L24163c
    nop
    .word 0x44800000
    nop
    c.lt.s $f20,$f0
    nop
    bc1t L24163c
    addiu v1,zero,1
    .word 0x70001e28
L24163c:
    b L241688
    .word 0xac830180
L241644:
    .word 0x8e230000
    sll v1,v1,0x3
    addu v1,s0,v1
    addu a0,v1,s5
    .word 0x8c8301d0
    sltu v1,zero,v1
    bnez v1,L241680
    nop
    .word 0x44800000
    nop
    c.le.s $f20,$f0
    nop
    bc1f L241680
    addiu v1,zero,1
    .word 0x70001e28
L241680:
    .word 0xac830180
    nop
L241688:
    .word 0xc6610008
    .word 0x3c033f80
    .word 0x44830000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L2416b0
    nop
    b L241708
    .word 0x46000046
L2416b0:
    .word 0x8e03002c
    andi v1,v1,0x2
    beqz v1,L2416e4
    nop
    .word 0x3c03bf80
    .word 0x44830000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L241704
    nop
    b L241708
    .word 0x46000046
L2416e4:
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L241704
    nop
    b L241708
    .word 0x46000046
L241704:
    nop
L241708:
    .word 0x8e240000
    sll v1,a0,0x1
    addu v1,v1,a0
    sll v1,v1,0x4
    addu v1,s0,v1
    addu v1,v1,s4
    .word 0xe46100f0
    .word 0x8e630010
    beqz v1,L2417b4
    paddub v1,s2,zero
    .word 0x8e230000
    sll v1,v1,0x3
    addu v1,s0,v1
    addu v1,v1,s5
    .word 0x8c6401b8
    addiu s6,v1,464
    .word 0x8c6301d0
    bnez v1,L2417b0
    nop
    .word 0x3c023f00
    .word 0xafa200b0
    addiu v0,zero,4
    .word 0xafa000b4
    .word 0xafa200b8
    .word 0xafa000bc
    addiu v0,zero,17
    .word 0xafa000c0
    .word 0xafa20090
    .word 0x3c024000
    .word 0xafa20094
    .word 0xafa20098
    addiu v0,zero,1
    .word 0xafa200ac
    .word 0x3c020019
    addiu a1,sp,144
    addiu a2,v0,-18544
    jal func_00188f00
    paddub a3,s6,zero
    addiu a1,zero,3
    .word 0xaec20000
    jal func_00230d10
    paddub a0,s0,zero
L2417b0:
    paddub v1,s2,zero
L2417b4:
    addiu s5,s5,-4
    addiu s3,s3,-4
    addiu s4,s4,-24
    bnez v1,L2415f8
    addiu s2,s2,-1
L2417c8:
    .word 0x7bbf0080
L2417cc:
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,208
}


