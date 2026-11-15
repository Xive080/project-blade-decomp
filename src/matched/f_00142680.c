asm void f(void) {
    .set noreorder
    .set noat
    beqz a0,L14272c
    .word 0x70001628
    beqz a1,L142728
    nop
    .word 0xc4880000
    .word 0xc4a10000
    .word 0xc4a00004
    .word 0xc48c0004
    .word 0xc4a60010
    .word 0xc48b0008
    .word 0xc4a30020
    mul.s $f9,$f8,$f1
    .word 0xc4a50014
    .word 0xc4a20024
    .word 0xc4a70008
    .word 0xc4a40018
    mul.s $f6,$f12,$f6
    .word 0xc4a10028
    .word 0x70801628
    mul.s $f10,$f8,$f0
    mul.s $f5,$f12,$f5
    .word 0xc4a00030
    mul.s $f3,$f11,$f3
    add.s $f9,$f9,$f6
    add.s $f9,$f9,$f3
    add.s $f0,$f9,$f0
    .word 0xe4800000
    mul.s $f2,$f11,$f2
    .word 0xc4a00034
    add.s $f10,$f10,$f5
    add.s $f10,$f10,$f2
    add.s $f0,$f10,$f0
    .word 0xe4800004
    mul.s $f7,$f8,$f7
    .word 0xc4a00038
    mul.s $f4,$f12,$f4
    mul.s $f1,$f11,$f1
    add.s $f7,$f7,$f4
    add.s $f7,$f7,$f1
    add.s $f0,$f7,$f0
    b L14272c
    .word 0xe4800008
L142728:
    .word 0x70001628
L14272c:
    jr ra
    nop
}
