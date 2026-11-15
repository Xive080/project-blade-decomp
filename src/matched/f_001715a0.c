extern void func_001332c0(void);
extern void func_00170070(void);
extern void func_0025f710(void);
extern void func_0025f720(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c020017
    addiu v0,v0,5984
    .word 0x3c010031
    sw v0,-32416(at)
    .word 0x3c020017
    addiu v0,v0,5920
    .word 0x3c010031
    sw v0,-32412(at)
    .word 0x3c020017
    addiu v0,v0,5616
    .word 0x3c010031
    sw v0,-32408(at)
    .word 0x3c020031
    addiu v0,v0,-32416
    .word 0x3c010031
    addiu a1,gp,-31792
    addiu a0,zero,3
    sw v0,-31792(gp)
    j func_001332c0
    sw zero,-32404(at)
    addiu sp,sp,-48
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x3c017000
    lw s0,16340(at)
    beqz s0, L1716fc
    nop
    lw v0,0(s0)
    addiu a1,zero,-1
    lw v0,8(v0)
    jalr ra,v0
    .word 0x72002628
    lw v0,0(s0)
    addiu a2,sp,44
    addiu a1,zero,4
    lw v0,16(v0)
    jalr ra,v0
    .word 0x72002628
    beqz v0, L1716fc
    nop
    lw v0,44(sp)
    beqz v0, L1716f8
    nop
    lw v0,-31800(gp)
    beqz v0, L171678
    .word 0x3c017000
    .word 0x3c02002f
    jal func_00170070
    addiu a0,v0,-1256
    addiu a0,zero,10
    jal func_0025f720
    .word 0x70402e28
    sw zero,-31800(gp)
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
    lw v0,0(s0)
    addiu a1,zero,10
    .word 0x72002628
    lw v0,4(v0)
    jalr ra,v0
    .word 0x70003628
    b L1716fc
    nop
L1716f8:
    sw zero,-31796(gp)
L1716fc:
    jal func_0025f710
    nop
    .word 0x7bbf0010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
