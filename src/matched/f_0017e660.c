extern void func_00127490(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-176
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x3c027f7f
    .word 0x7fb00000
    ori v0,v0,0xffff
    .word 0xafa20070
    addiu s5,sp,116
    .word 0xaea00000
    .word 0x71008e28
    .word 0xafaa00a0
    .word 0x3c017000
    .word 0x8c243fd8
    .word 0x70a0a628
    .word 0x3c020018
    .word 0x70c09e28
    .word 0x70e09628
    addiu t0,sp,112
    addiu a1,v0,-6176
    .word 0x71208628
    .word 0x72803628
    jal func_00127490
    .word 0x72603e28
    .word 0x8ea20000
    beqz v0,L17e7b8
    .word 0x70001628
    beqz s2,L17e770
    nop
    .word 0xc6610000
    .word 0xc6800000
    sub.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc6610004
    .word 0xc6800004
    sub.s $f0,$f1,$f0
    .word 0xe6400004
    .word 0xc6610008
    .word 0xc6800008
    sub.s $f0,$f1,$f0
    .word 0xe6400008
    .word 0xc6410000
    .word 0xc7a00070
    mul.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc6410004
    .word 0xc7a00070
    mul.s $f0,$f1,$f0
    .word 0xe6400004
    .word 0xc6410008
    .word 0xc7a00070
    mul.s $f0,$f1,$f0
    .word 0xe6400008
    .word 0xc6410000
    .word 0xc6800000
    add.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc6410004
    .word 0xc6800004
    add.s $f0,$f1,$f0
    .word 0xe6400004
    .word 0xc6800008
    .word 0xc6410008
    add.s $f0,$f1,$f0
    .word 0xe6400008
L17e770:
    beqz s1,L17e794
    nop
    addiu v0,sp,120
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6220000
    .word 0xe6210004
    .word 0xe6200008
L17e794:
    beqz s0,L17e7ac
    addiu v0,zero,1
    .word 0x8fa20084
    .word 0x8c420000
    .word 0xae020000
    addiu v0,zero,1
L17e7ac:
    b L17e7bc
    .word 0x7bbf0060
    .word 0x70001628
L17e7b8:
    .word 0x7bbf0060
L17e7bc:
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,176
}
