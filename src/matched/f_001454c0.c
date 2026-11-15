extern void func_00145e80(void);
extern void func_00147c60(void);
extern void func_00147910(void);
extern void func_00147e20(void);
extern void func_001457a0(void);
extern void func_00147b70(void);
extern void func_00147f30(void);
extern void func_00148620(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-128
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x3c027f7f
    ori v0,v0,0xffff
    .word 0x44826000
    paddub s3,a2,zero
    paddub s2,a3,zero
    paddub s4,a0,zero
    paddub s1,a1,zero
    jal func_00145e80
    .word 0x7fb00000
    bnez v0,L14551c
    paddub s0,v0,zero
    .word 0x3c02bf80
    .word 0x44820000
    b L145778
    .word 0x7bbf0070
L14551c:
    .word 0x3c027f7f
    ori v0,v0,0xffff
    .word 0xaf828378
    paddub a0,s4,zero
    paddub a1,s0,zero
    .word 0xaf918370
    jal func_00147c60
    .word 0xaf808374
    beqz v0,L145624
    paddub a0,s4,zero
    paddub a0,s4,zero
    paddub a1,v0,zero
    jal func_00147910
    .word 0x70003628
    paddub s1,v0,zero
    bnez s1,L145574
    paddub a0,s1,zero
    .word 0x3c02bf80
    .word 0x44820000
    b L145774
    nop
    paddub a0,s1,zero
L145574:
    jal func_00147e20
    .word 0xaf80836c
    paddub a1,v0,zero
    .word 0x3c023f7f
    ori v0,v0,0x69e
    .word 0x44826000
    jal func_001457a0
    paddub a0,s1,zero
    .word 0x8f828368
    bne s1,v0,L1455ec
    nop
    beqz s1,L145620
    nop
    jal func_00147e20
    paddub a0,s1,zero
    paddub s6,v0,zero
    beqz s6,L145620
    nop
    paddub a1,s6,zero
L1455c0:
    paddub a0,s1,zero
    jal func_00147b70
    paddub s5,s6,zero
    paddub s6,v0,zero
    paddub a1,s5,zero
    jal func_00147f30
    paddub a0,s1,zero
    bnez s6,L1455c0
    paddub a1,s6,zero
    b L145620
    nop
L1455ec:
    beqz s1,L145620
    nop
    .word 0x8e220000
    andi v0,v0,0x8
    bnez v0,L14560c
    nop
    jal func_00148620
    paddub a0,s1,zero
L14560c:
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s1,zero
L145620:
    paddub a0,s4,zero
L145624:
    jal func_00147b70
    paddub a1,s0,zero
    beqz v0,L145710
    nop
    paddub a0,s4,zero
    paddub a1,s0,zero
    jal func_00147910
    .word 0x70003628
    paddub s0,v0,zero
    bnez s0,L145664
    paddub a0,s0,zero
    .word 0x3c02bf80
    .word 0x44820000
    b L145774
    nop
    paddub a0,s0,zero
L145664:
    jal func_00147e20
    .word 0xaf80836c
    paddub a1,v0,zero
    .word 0x3c023f7f
    ori v0,v0,0x69e
    .word 0x44826000
    jal func_001457a0
    paddub a0,s0,zero
    .word 0x8f828368
    bne s0,v0,L1456dc
    nop
    beqz s0,L145710
    nop
    jal func_00147e20
    paddub a0,s0,zero
    paddub s4,v0,zero
    beqz s4,L145710
    nop
    paddub a1,s4,zero
L1456b0:
    paddub a0,s0,zero
    jal func_00147b70
    paddub s1,s4,zero
    paddub s4,v0,zero
    paddub a1,s1,zero
    jal func_00147f30
    paddub a0,s0,zero
    bnez s4,L1456b0
    paddub a1,s4,zero
    b L145714
    .word 0xc7808378
L1456dc:
    beqz s0,L145710
    nop
    .word 0x8e020000
    andi v0,v0,0x8
    bnez v0,L1456fc
    nop
    jal func_00148620
    paddub a0,s0,zero
L1456fc:
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s0,zero
L145710:
    .word 0xc7808378
L145714:
    .word 0x3c027f7f
    ori v0,v0,0xffff
    .word 0x44820800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L145744
    nop
    .word 0x3c02bf80
    .word 0x44820000
    b L145774
    nop
L145744:
    .word 0x3c020030
    addiu v0,v0,8320
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6620000
    .word 0xe6610004
    .word 0xe6600008
    .word 0xc7808374
    .word 0xe6400000
    .word 0xc7808378
    nop
L145774:
    .word 0x7bbf0070
L145778:
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,128
}


