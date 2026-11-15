extern void func_001f79f0(void);
asm void func(void) {
.set noreorder
.set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0xaca6000c
    .word 0x8ca7000c
    .word 0x70a08e28
    addiu v1,zero,1
    sll a2,a3,0x4
    subu a2,a2,a3
    sll a2,a2,0x2
    addu a2,a0,a2
    .word 0x8ca50000
    bne a1,v1,L15ba40
    addiu s0,a2,7620
    .word 0x8e030014
    .word 0xc6140004
    sll v0,v1,0x4
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,a0,v0
    .word 0xc4401dc8
    c.le.s $f0,$f20
    nop
    bc1t L15b9e0
    nop
    .word 0x46000506
L15b9e0:
    jal func_001f79f0
    nop
    andi v1,v0,0x7fff
    bltz v1,L15ba04
    srl a0,v1,0x1
    .word 0x44830000
    b L15ba1c
    cvt.s.w $f2,$f0
    srl a0,v1,0x1
L15ba04:
    andi v1,v1,0x1
    or a0,a0,v1
    .word 0x44840000
    nop
    cvt.s.w $f2,$f0
    add.s $f2,$f2,$f2
L15ba1c:
    .word 0x3c034700
    .word 0x44830800
    sub.s $f0,$f20,$f20
    addiu v1,zero,1
    div.s $f1,$f2,$f1
    mul.s $f0,$f1,$f0
    add.s $f0,$f20,$f0
    .word 0xe6200054
    .word 0xae230058
L15ba40:
    .word 0xc6000010
    .word 0xe6200010
    .word 0x8e030030
    bnez v1,L15ba74
    .word 0xc621004c
    .word 0x46000824
    cvt.s.w $f0,$f0
    c.eq.s $f1,$f0
    nop
    bc1t L15ba74
    nop
    b L15baf8
    addiu v1,zero,1
L15ba74:
    .word 0x8e030034
    bnez v1,L15baf8
    .word 0x70001e28
    .word 0x8e240000
    addiu v1,zero,1
    bne a0,v1,L15ba98
    nop
    b L15bab0
    .word 0x8e2400e4
L15ba98:
    .word 0x8e230138
    .word 0x8e2400e8
    sll v1,v1,0x2
    addu v1,v1,a0
    .word 0x8c640004
    nop
L15bab0:
    .word 0x8c830014
    beqz v1,L15bac8
    nop
    .word 0x8c830010
    b L15bad0
    sra v1,v1,0x1
L15bac8:
    .word 0x8c830010
    nop
L15bad0:
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    c.le.s $f1,$f0
    nop
    bc1t L15baf4
    nop
    b L15baf8
    addiu v1,zero,1
L15baf4:
    .word 0x70001e28
L15baf8:
    .word 0xae230160
    .word 0x8e230160
    bnez v1,L15bbf4
    nop
    .word 0xc621004c
    .word 0xc620003c
    c.eq.s $f1,$f0
    nop
    bc1f L15bbf4
    nop
    .word 0xc601000c
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L15bbf4
    nop
    jal func_001f79f0
    nop
    andi v0,v0,0x7fff
    bltz v0,L15bb60
    srl v1,v0,0x1
    .word 0x44820000
    b L15bb78
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L15bb60:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L15bb78:
    .word 0x3c024700
    .word 0x44820800
    .word 0xc6020018
    div.s $f1,$f0,$f1
    .word 0xc600001c
    sub.s $f0,$f0,$f2
    mul.s $f0,$f1,$f0
    add.s $f0,$f2,$f0
    jal func_001f79f0
    .word 0xe620015c
    andi v1,v0,0x7fff
    bltz v1,L15bbb8
    .word 0xc6030020
    .word 0x44830000
    b L15bbd4
    cvt.s.w $f2,$f0
L15bbb8:
    srl a0,v1,0x1
    andi v1,v1,0x1
    or a0,a0,v1
    .word 0x44840000
    nop
    cvt.s.w $f2,$f0
    add.s $f2,$f2,$f2
L15bbd4:
    .word 0x3c034700
    .word 0x44830800
    .word 0xc6000024
    div.s $f1,$f2,$f1
    sub.s $f0,$f0,$f3
    mul.s $f0,$f1,$f0
    add.s $f0,$f3,$f0
    .word 0xe6200158
L15bbf4:
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,64
}


