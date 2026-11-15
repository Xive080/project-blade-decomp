extern void func_00188e80(void);
extern void func_00188f00(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-128
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x8c85002c
    andi v1,a1,0x8
    bnez v1,L230f34
    paddub s0,a0,zero
    andi v1,a1,0x4
    beqz v1,L230f24
    nop
    .word 0xc6010034
    addiu a2,zero,2
    paddub v1,a2,zero
    addiu a2,a2,-1
    beqz v1,L230e98
    mov.s $f20,$f1
    addiu v1,zero,1456
    .word 0x00c32818
    .word 0x3c030030
    addiu v1,v1,27648
    addu a1,v1,a1
L230e70:
    .word 0xc4a004d0
    c.le.s $f0,$f20
    nop
    bc1t L230e8c
    paddub v1,a2,zero
    mov.s $f20,$f0
    paddub v1,a2,zero
L230e8c:
    addiu a1,a1,-1456
    bnez v1,L230e70
    addiu a2,a2,-1
L230e98:
    c.le.s $f20,$f1
    nop
    bc1t L230f34
    nop
    .word 0x8c850044
    sub.s $f21,$f20,$f1
    beqz a1,L230ec4
    paddub s1,a0,zero
    .word 0x8e240040
    jal func_00188e80
    paddub a2,zero,zero
L230ec4:
    .word 0x3c023e80
    .word 0xafa20060
    .word 0x3c023f40
    .word 0xafa20064
    .word 0xafa00068
    .word 0xafa0006c
    addiu v0,zero,14
    neg.s $f0,$f21
    .word 0xafa00070
    .word 0xafa20040
    addiu v0,zero,1
    .word 0xe7a00044
    .word 0xafa2005c
    .word 0x3c020019
    .word 0x8e240040
    addiu a3,s1,68
    addiu a1,sp,64
    jal func_00188f00
    addiu a2,v0,-18544
    .word 0xae220044
    .word 0xe6140034
    .word 0x8e030040
    b L230f34
    .word 0xe474003c
L230f24:
    .word 0x8e040030
    .word 0x8e030040
    .word 0xc4800150
    .word 0xe460003c
L230f34:
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,128
}
