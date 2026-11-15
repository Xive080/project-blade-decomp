extern void func_001c3b70(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x3c02002e
    .word 0x7fbf0010
    addiu a1,v0,14000
    .word 0x7fb00000
    .word 0xdca20000
    .word 0xc4a00008
    addiu v1,sp,32
    .word 0xfc620000
    .word 0xe4600008
    .word 0x8c90000c
    jal func_001c3b70
    .word 0x8e040048
    .word 0xc7a70028
    .word 0xc44b0010
    .word 0xc4480018
    .word 0xc7a30020
    .word 0xc4490014
    .word 0xc7aa0024
    mtc1 zero,$f0
    mul.s $f2,$f11,$f7
    mul.s $f1,$f8,$f3
    sub.s $f5,$f1,$f2
    mula.s $f9,$f7
    msub.s $f4,$f8,$f10
    mula.s $f11,$f10
    mul.s $f2,$f4,$f4
    mul.s $f1,$f5,$f5
    msub.s $f6,$f9,$f3
    adda.s $f2,$f1
    madd.s $f1,$f6,$f6
    c.eq.s $f1,$f0
    nop
    bc1f L1b2b64
    mul.s $f1,$f3,$f11
    .word 0xae000044
    .word 0xae000040
    .word 0xae00003c
    b L1b2bd8
    paddub v0,zero,zero
    mul.s $f1,$f3,$f11
L1b2b64:
    .word 0x3c024049
    ori a0,v0,0xfdb
    .word 0x3c063f80
    .word 0x3c054000
    mul.s $f0,$f10,$f9
    .word 0x3c034080
    addiu v0,zero,1
    adda.s $f1,$f0
    madd.s $f0,$f7,$f8
    neg.s $f2,$f0
    mtc1 a2,$f1
    mtc1 a1,$f0
    nop
    add.s $f1,$f1,$f2
    div.s $f2,$f1,$f0
    mtc1 v1,$f0
    mtc1 a0,$f1
    nop
    mul.s $f0,$f0,$f2
    mul.s $f1,$f1,$f0
    mul.s $f0,$f4,$f1
    .word 0xe600003c
    mul.s $f0,$f5,$f1
    .word 0xe6000040
    mul.s $f0,$f6,$f1
    .word 0xe6000044
    .word 0xae000038
    .word 0xae000034
    .word 0xae000030
L1b2bd8:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
