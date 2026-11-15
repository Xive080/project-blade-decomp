extern void func_00145f50(void);
extern void func_001463d0(void);
extern void func_001477c0(void);
extern void func_00147b70(void);
extern void func_001ce240(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8c820000
    paddub s1,a0,zero
    andi v0,v0,0x8
    bnez v0,L147818
    paddub s0,a1,zero
    .word 0x8f82836c
    slti at,v0,20
    beqzl at,L14781c
    paddub a0,s1,zero
    .word 0x3c023f7f
    ori v0,v0,0x69e
    mtc1 v0,$f12
    jal func_00145f50
    nop
    beqz v0,L147880
    paddub a0,s1,zero
L147818:
    paddub a0,s1,zero
L14781c:
    jal func_00147b70
    paddub a1,s0,zero
    bnez v0,L14783c
    nop
    .word 0x3c02bf80
    mtc1 v0,$f0
    b L1478ec
    .word 0x7bbf0040
L14783c:
    .word 0xc4410000
    .word 0xc6000000
    addiu a0,sp,80
    sub.s $f0,$f1,$f0
    .word 0xe7a00050
    .word 0xc4410004
    .word 0xc6000004
    sub.s $f0,$f1,$f0
    .word 0xe7a00054
    .word 0xc4410008
    .word 0xc6000008
    sub.s $f0,$f1,$f0
    jal func_001ce240
    .word 0xe7a00058
    b L1478e8
    nop
    paddub a0,s1,zero
L147880:
    jal func_001463d0
    paddub a1,s0,zero
    paddub a0,s1,zero
    jal func_00147b70
    paddub a1,s0,zero
    paddub s2,v0,zero
    bnez s2,L1478b0
    nop
    .word 0x3c02bf80
    mtc1 v0,$f0
    b L1478e8
    nop
L1478b0:
    .word 0x8f82836c
    paddub a1,s0,zero
    paddub a0,s1,zero
    addiu v0,v0,1
    jal func_001477c0
    .word 0xaf82836c
    paddub a0,s1,zero
    paddub a1,s2,zero
    jal func_001477c0
    mov.s $f20,$f0
    .word 0x8f82836c
    add.s $f0,$f20,$f0
    addiu v0,v0,-1
    .word 0xaf82836c
L1478e8:
    .word 0x7bbf0040
L1478ec:
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,96
}
