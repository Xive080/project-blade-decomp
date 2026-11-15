asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x8c88000c
    .word 0x8ca9000c
    .word 0x8c870004
    .word 0x3c060020
    .word 0x8d2a0024
    and v0,a3,a2
    bnez v0,L13eabc
    .word 0x8d030024
    .word 0x8ca20004
    and v0,v0,a2
    beqz v0,L13eb14
    nop
L13eabc:
    .word 0x3c017000
    .word 0xc4223fb4
    .word 0xc4810130
    .word 0x3c024020
    mtc1 v0,$f0
    nop
    sub.s $f1,$f2,$f1
    c.le.s $f1,$f0
    nop
    bc1t L13eb0c
    paddub v0,zero,zero
    .word 0x3c02ffdf
    ori v1,v0,0xffff
    .word 0x8c820004
    and v0,v0,v1
    .word 0xac820004
    .word 0x8ca20004
    and v0,v0,v1
    .word 0xaca20004
    paddub v0,zero,zero
L13eb0c:
    b L13ec9c
    .word 0x7bbf0010
L13eb14:
    .word 0xc5060018
    .word 0xc5220018
    .word 0x8c63002c
    .word 0x8d42002c
    .word 0xc5030020
    .word 0xc505001c
    .word 0xc524001c
    sub.s $f6,$f6,$f2
    .word 0xc4610000
    .word 0xc4400000
    .word 0xc5220020
    sub.s $f4,$f5,$f4
    add.s $f0,$f1,$f0
    sub.s $f3,$f3,$f2
    mul.s $f2,$f0,$f0
    mul.s $f1,$f6,$f6
    mul.s $f0,$f4,$f4
    adda.s $f1,$f0
    madd.s $f0,$f3,$f3
    c.le.s $f0,$f2
    nop
    bc1t L13eb7c
    or v0,a3,a2
    b L13ec98
    paddub v0,zero,zero
    or v0,a3,a2
L13eb7c:
    .word 0xac820004
    .word 0x8ca20004
    .word 0x3c017000
    or v0,v0,a2
    .word 0xaca20004
    .word 0xc4203fb4
    .word 0xe4a00130
    .word 0xe4800130
    .word 0xc501000c
    .word 0xc5000010
    .word 0xc524000c
    .word 0xc5230010
    .word 0xc5020014
    .word 0xc5250014
    mul.s $f1,$f1,$f1
    mul.s $f0,$f0,$f0
    adda.s $f1,$f0
    mul.s $f1,$f4,$f4
    mul.s $f0,$f3,$f3
    madd.s $f2,$f2,$f2
    adda.s $f1,$f0
    madd.s $f0,$f5,$f5
    c.lt.s $f2,$f0
    nop
    bc1f L13ec40
    nop
    .word 0x8c900008
    .word 0x3c050004
    .word 0x8e02003c
    beq v0,a1,L13ec98
    addiu v0,zero,1
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L13ec94
    nop
    .word 0x8e02000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s0,zero
    beqz v0,L13ec94
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x3c050004
    .word 0x8c420014
    jalr ra,v0
    paddub a2,zero,zero
    b L13ec94
    nop
L13ec40:
    .word 0x8cb00008
    .word 0x8e02003c
    .word 0x3c050004
    beq v0,a1,L13ec94
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L13ec94
    nop
    .word 0x8e02000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s0,zero
    beqz v0,L13ec94
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x3c050004
    .word 0x8c420014
    jalr ra,v0
    paddub a2,zero,zero
L13ec94:
    addiu v0,zero,1
L13ec98:
    .word 0x7bbf0010
L13ec9c:
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
