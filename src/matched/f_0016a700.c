extern void func_00146d40(void);
extern void func_00147b70(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xe7ac0048
    .word 0x8c820034
    .word 0x70a08e28
    .word 0x70c08628
    .word 0x70809628
    b L16a788
    .word 0xafa2004c
L16a730:
    jal func_00147b70
    .word 0x8e440030
    bnez v0,L16a748
    nop
    b L16a798
    .word 0x70001628
L16a748:
    .word 0xc441000c
    .word 0xc7a00048
    c.lt.s $f1,$f0
    nop
    bc1t L16a780
    nop
    .word 0x8e440030
    addiu a1,sp,72
    addiu t0,sp,76
    .word 0x72203628
    jal func_00146d40
    .word 0x72003e28
    b L16a798
    addiu v0,zero,1
L16a780:
    .word 0xafa2004c
    nop
L16a788:
    .word 0x8fa5004c
    bnez a1,L16a730
    nop
    .word 0x70001628
L16a798:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
