extern void func_0016d8c0(void);
extern void func_0025cb90(void);
extern void func_0016e320(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b60008
    .word 0xe7b50004
    paddub s1,a0,zero
    .word 0xe7b40000
    beqz s1,L16d670
    .word 0x46006586
    .word 0x8e22033c
    beqz v0,L16d674
    .word 0x4600b506
    jal func_0016d8c0
    nop
    .word 0x46000506
    .word 0x44800000
    nop
    c.lt.s $f20,$f0
    nop
    bc1f L16d674
    nop
    b L16d8a0
    .word 0x70001628
L16d670:
    .word 0x4600b506
L16d674:
    .word 0x8e240000
    beqz a0,L16d688
    nop
    jal func_0025cb90
    .word 0x4600b306
L16d688:
    .word 0x8e220348
    bnez v0,L16d69c
    nop
    b L16d8a0
    addiu v0,zero,1
L16d69c:
    .word 0x44800000
    nop
    c.le.s $f22,$f0
    nop
    bc1t L16d6c4
    .word 0x8e300350
    bgez s0,L16d6c4
    nop
    b L16d6f0
    .word 0x70008628
L16d6c4:
    .word 0x44800000
    nop
    c.lt.s $f22,$f0
    nop
    bc1f L16d6f4
    sub.s $f21,$f20,$f22
    .word 0x8e23034c
    slt v0,s0,v1
    bnez v0,L16d6f0
    nop
    addiu s0,v1,-1
L16d6f0:
    sub.s $f21,$f20,$f22
L16d6f4:
    b L16d810
    nop
L16d6fc:
    .word 0x44800000
    nop
    c.le.s $f22,$f0
    nop
    bc1t L16d738
    nop
    .word 0x8e220348
    sll v1,s0,0x4
    addu v0,v0,v1
    .word 0xc440000c
    c.lt.s $f0,$f21
    nop
    bc1f L16d770
    nop
    nop
L16d738:
    .word 0x44800000
    nop
    c.lt.s $f22,$f0
    nop
    bc1f L16d7e8
    nop
    .word 0x8e220348
    sll v1,s0,0x4
    addu v0,v0,v1
    .word 0xc440000c
    c.le.s $f0,$f21
    nop
    bc1f L16d7e8
    nop
L16d770:
    .word 0x8e220348
    sll v1,s0,0x4
    .word 0x44800800
    nop
    c.lt.s $f22,$f1
    addu a1,v0,v1
    bc1f L16d7e0
    .word 0x8ca40000
    .word 0xc4a0000c
    c.eq.s $f1,$f0
    nop
    bc1f L16d7b0
    addiu v1,zero,1
    b L16d7d0
    .word 0x70002628
    addiu v1,zero,1
L16d7b0:
    bne a0,v1,L16d7c4
    addiu v0,zero,2
    b L16d7d0
    addiu a0,zero,2
    addiu v0,zero,2
L16d7c4:
    bne a0,v0,L16d7d4
    addiu v0,zero,10
    paddub a0,v1,zero
L16d7d0:
    addiu v0,zero,10
L16d7d4:
    bne a0,v0,L16d7e0
    nop
    addiu a0,zero,11
L16d7e0:
    jal func_0016e320
    nop
L16d7e8:
    .word 0x44800000
    nop
    c.le.s $f22,$f0
    nop
    bc1tl L16d80c
    addiu s0,s0,-1
    b L16d810
    addiu s0,s0,1
    addiu s0,s0,-1
L16d80c:
    nop
L16d810:
    .word 0x44800000
    nop
    c.le.s $f22,$f0
    nop
    bc1t L16d858
    nop
    .word 0x8e220348
    sll v1,s0,0x4
    addu v0,v0,v1
    .word 0xc440000c
    c.le.s $f0,$f20
    nop
    bc1f L16d858
    nop
    .word 0x8e22034c
    slt v0,s0,v0
    bnez v0,L16d6fc
    nop
L16d858:
    .word 0x44800000
    nop
    c.lt.s $f22,$f0
    nop
    bc1f L16d89c
    addiu v0,zero,1
    .word 0x8e220348
    sll v1,s0,0x4
    addu v0,v0,v1
    .word 0xc440000c
    c.lt.s $f0,$f20
    nop
    bc1t L16d898
    nop
    bgez s0,L16d6fc
    nop
L16d898:
    addiu v0,zero,1
L16d89c:
    .word 0xae300350
L16d8a0:
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,64
}


