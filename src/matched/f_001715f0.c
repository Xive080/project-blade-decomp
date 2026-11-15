extern void func_00170070(void);
extern void func_0025f710(void);
extern void func_0025f720(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x3c017000
    .word 0x8c303fd4
    beqz s0,L1716fc
    nop
    .word 0x8e020000
    addiu a1,zero,-1
    .word 0x8c420008
    jalr ra,v0
    .word 0x72002628
    .word 0x8e020000
    addiu a2,sp,44
    addiu a1,zero,4
    .word 0x8c420010
    jalr ra,v0
    .word 0x72002628
    beqz v0,L1716fc
    nop
    .word 0x8fa2002c
    beqz v0,L1716f8
    nop
    .word 0x8f8283c8
    beqz v0,L171678
    .word 0x3c017000
    .word 0x3c02002f
    jal func_00170070
    addiu a0,v0,-1256
    addiu a0,zero,10
    jal func_0025f720
    .word 0x70402e28
    .word 0xaf8083c8
    .word 0x3c017000
L171678:
    .word 0xc4223fa8
    .word 0xc78383cc
    .word 0x44800800
    .word 0x3c010030
    .word 0xc420a868
    add.s $f2,$f3,$f2
    c.eq.s $f0,$f1
    nop
    bc1f L1716d8
    .word 0xe78283cc
    .word 0x3c010030
    .word 0xc420a870
    c.eq.s $f0,$f1
    nop
    bc1f L1716d8
    nop
    .word 0xc78183cc
    .word 0x3c024120
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L1716fc
    nop
L1716d8:
    .word 0x8e020000
    addiu a1,zero,10
    .word 0x72002628
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    b L1716fc
    nop
L1716f8:
    .word 0xaf8083cc
L1716fc:
    jal func_0025f710
    nop
    .word 0x7bbf0010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
