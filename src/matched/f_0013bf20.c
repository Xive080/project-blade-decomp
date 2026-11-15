extern void func_001c3b70(void);
extern void func_001ce3f0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0x70c01628
    .word 0xe7b40000
    .word 0x70a08e28
    bnez v0,L13bf60
    .word 0x70809628
    .word 0x8e42000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
L13bf60:
    .word 0x8e430010
    addiu s0,s2,80
    addiu a1,s2,20
    addiu a2,zero,1
    ori v1,v1,0x4
    .word 0xae430010
    .word 0xc6540020
    .word 0x72002628
    jal func_001ce3f0
    .word 0x70403e28
    .word 0xc6000000
    sub.s $f0,$f0,$f20
    .word 0xe620000c
    .word 0xc6000004
    sub.s $f0,$f0,$f20
    .word 0xe6200010
    .word 0xc6000008
    sub.s $f0,$f0,$f20
    .word 0xe6200014
    .word 0xc6000000
    add.s $f0,$f0,$f20
    .word 0xe6200000
    .word 0xc6000004
    add.s $f0,$f0,$f20
    .word 0xe6200004
    .word 0xc6000008
    add.s $f0,$f0,$f20
    .word 0xe6200008
    .word 0x7bbf0040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,80
}
