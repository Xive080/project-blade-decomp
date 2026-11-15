extern void func_00141960(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    .word 0x7fbf0000
    .word 0x8c82000c
    paddub t0,a2,zero
    paddub t2,zero,zero
    subu v0,a1,v0
    bgez v0,L141828
    sra a2,v0,0x5
    addiu v0,v0,31
    sra a2,v0,0x5
L141828:
    .word 0xc5050000
    .word 0xc5060008
    paddub t1,a1,zero
    paddub t3,zero,zero
    addiu a1,zero,-1
    mtc1 zero,$f0
    addiu v1,zero,1
L141844:
    .word 0xc5240000
    .word 0xc523000c
    .word 0xc5270008
    .word 0xc5220014
    sub.s $f1,$f5,$f4
    sub.s $f4,$f3,$f4
    sub.s $f3,$f7,$f6
    sub.s $f2,$f2,$f7
    mula.s $f3,$f4
    madd.s $f1,$f1,$f2
    c.le.s $f1,$f0
    nop
    bc1t L14189c
    nop
    bnez t2,L14188c
    nop
    b L1418bc
    addiu t2,zero,1
L14188c:
    bne t2,a1,L1418c0
    sll v0,t2,0x5
    b L1418e0
    addiu t3,zero,1
L14189c:
    bnez t2,L1418ac
    nop
    b L1418bc
    addiu t2,zero,-1
L1418ac:
    bne t2,v1,L1418bc
    nop
    b L1418e0
    paddub t3,v1,zero
L1418bc:
    sll v0,t2,0x5
L1418c0:
    addu a2,a2,t2
    bltz a2,L1418e0
    addu t1,t1,v0
    .word 0x8c820008
    slt v0,a2,v0
    bnez v0,L141844
    nop
    nop
L1418e0:
    beqz a3,L1418ec
    nop
    .word 0xaceb0000
L1418ec:
    bnez t3,L141908
    sll v0,t2,0x5
    sll v0,t2,0x5
    subu t1,t1,v0
    b L14194c
    .word 0xc5200004
    sll v0,t2,0x5
L141908:
    subu a2,t1,v0
    addiu v0,zero,1
    bne t2,v0,L141938
    addiu a1,a2,12
    addiu a1,t1,12
    paddub a0,t1,zero
    addiu a3,a2,12
    jal func_00141960
    paddub t1,zero,zero
    b L14194c
    nop
    addiu a1,a2,12
L141938:
    paddub a0,a2,zero
    addiu a3,t1,12
    paddub a2,t1,zero
    jal func_00141960
    paddub t1,zero,zero
L14194c:
    .word 0x7bbf0000
    jr ra
    addiu sp,sp,16
}
