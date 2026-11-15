extern void func_0024af80(void);
extern void func_001a47f0(void);
extern void func_001a4b70(void);
extern void func_001625a0(void);
extern void func_00130e80(void);
extern void func_001c3b70(void);
extern void func_001c7320(void);
extern void func_001c3b00(void);
extern void func_001a4e90(void);
extern void func_001a4ea0(void);
extern void func_00133120(void);
extern void func_001620f0(void);
extern void func_00170a90(void);
extern void func_001f79f0(void);
extern void func_001f7930(void);
extern void func_001a4df0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70008628
    jal func_0024af80
    .word 0x70008e28
    .word 0x3c030008
    and s2,v0,v1
    bnez s2,L1b43c4
    nop
    .word 0x3c020032
    addiu a0,v0,31840
    .word 0x3c020032
    jal func_001a47f0
    addiu a1,v0,31776
L1b43c4:
    jal func_001a4b70
    nop
    addiu v1,zero,6
    bne v0,v1,L1b43dc
    nop
    addiu s1,zero,1
L1b43dc:
    .word 0x3c010030
    .word 0xc420a860
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820800
    nop
    c.le.s $f0,$f1
    nop
    bc1f L1b4510
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xc420a864
    c.le.s $f0,$f1
    nop
    bc1f L1b450c
    nop
    .word 0x3c010030
    .word 0xc420a868
    c.le.s $f0,$f1
    nop
    bc1f L1b450c
    nop
    .word 0x3c010030
    .word 0xc420a86c
    c.le.s $f0,$f1
    nop
    bc1f L1b450c
    nop
    .word 0x3c010030
    .word 0xc420a870
    c.le.s $f0,$f1
    nop
    bc1f L1b450c
    nop
    .word 0x3c010030
    .word 0xc420a874
    c.le.s $f0,$f1
    nop
    bc1f L1b450c
    nop
    .word 0x3c010030
    .word 0xc420a878
    c.le.s $f0,$f1
    nop
    bc1f L1b450c
    nop
    .word 0x3c010030
    .word 0xc420a87c
    c.le.s $f0,$f1
    nop
    bc1f L1b450c
    nop
    .word 0x3c010030
    .word 0xc420a880
    c.le.s $f0,$f1
    nop
    bc1f L1b450c
    nop
    .word 0x3c010030
    .word 0xc420a884
    c.le.s $f0,$f1
    nop
    bc1f L1b450c
    nop
    .word 0x3c010030
    .word 0xc420a888
    c.le.s $f0,$f1
    nop
    bc1f L1b450c
    nop
    .word 0x3c010030
    .word 0xc420a88c
    c.le.s $f0,$f1
    nop
    bc1t L1b4518
    nop
L1b450c:
    addiu v0,zero,1
L1b4510:
    b L1b4528
    .word 0xaf828544
L1b4518:
    .word 0x8f828544
    beqz v0,L1b4528
    nop
    addiu s0,zero,1
L1b4528:
    beqz s2,L1b45bc
    nop
    .word 0x3c027000
    ori v0,v0,0x3fe0
    .word 0x8c500000
    .word 0x8e0303bc
    addiu v0,zero,4
    beq v1,v0,L1b4558
    nop
    .word 0x3c020080
    bne v1,v0,L1b45b4
    addiu v0,zero,1
L1b4558:
    jal func_001625a0
    nop
    .word 0x8c42000c
    jalr ra,v0
    addiu a0,s0,896
    .word 0x3c017000
    .word 0x8c223fe0
    .word 0x8c4503e8
    beqz a1,L1b45b0
    nop
    jal func_00130e80
    .word 0x70002628
    .word 0x3c017000
    .word 0x8c223fe0
    jal func_001c3b70
    .word 0x8c4403e8
    jal func_001c7320
    paddub a0,v0,zero
    .word 0x3c017000
    .word 0x8c223fe0
    jal func_001c3b00
    .word 0x8c4403e8
L1b45b0:
    addiu v0,zero,1
L1b45b4:
    b L1b47ac
    .word 0x7bbf0030
L1b45bc:
    jal func_001a4e90
    nop
    .word 0x3c017000
    .word 0xc4223fb0
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44820800
    .word 0x3c023fc0
    sub.s $f0,$f0,$f2
    sub.s $f0,$f0,$f1
    .word 0x44821800
    nop
    c.lt.s $f0,$f3
    nop
    bc1f L1b4698
    nop
    nop
    nop
    div.s $f1,$f0,$f3
    .word 0x3c033f80
    .word 0x3c02437f
    .word 0xafa00040
    .word 0xafa00044
    addiu a0,sp,76
    .word 0xafa00048
    .word 0x44830000
    .word 0x44821000
    sub.s $f0,$f0,$f1
    .word 0x46000046
    .word 0xe4800000
    mul.s $f1,$f1,$f2
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L1b4658
    .word 0xe4810000
    b L1b466c
    .word 0xac800000
L1b4658:
    c.le.s $f1,$f2
    nop
    bc1t L1b4670
    addiu v1,sp,64
    .word 0xac820000
L1b466c:
    addiu v1,sp,64
L1b4670:
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0x3c020030
    .word 0xc460000c
    addiu v0,v0,-23544
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
L1b4698:
    bnez s1,L1b46a8
    nop
    beqz s0,L1b46e8
    .word 0x3c017000
L1b46a8:
    jal func_001a4ea0
    nop
    addiu a0,zero,1
    .word 0x3c010030
    beqz s0,L1b46d0
    .word 0xac24a42c
    jal func_00133120
    nop
    b L1b46dc
    addiu v0,zero,1
L1b46d0:
    jal func_00133120
    addiu a0,zero,9
    addiu v0,zero,1
L1b46dc:
    b L1b47a8
    nop
    .word 0x3c017000
L1b46e8:
    .word 0x8c233fe0
    .word 0x3c020032
    addiu a1,v0,31776
    jal func_001620f0
    addiu a0,v1,896
    jal func_00170a90
    nop
    .word 0x8f8484ac
    beqz a0,L1b471c
    nop
    .word 0x8c820004
    jalr ra,v0
    nop
L1b471c:
    .word 0x3c010030
    .word 0xc4216d70
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L1b4774
    nop
    .word 0x8f828548
    andi v0,v0,0x1
    bnez v0,L1b4788
    .word 0x3c017000
    jal func_001f79f0
    nop
    jal func_001f7930
    paddub a0,v0,zero
    jal func_001a4df0
    nop
    .word 0x8f828548
    ori v0,v0,0x1
    b L1b4784
    .word 0xaf828548
L1b4774:
    .word 0x8f838548
    addiu v0,zero,-2
    and v0,v1,v0
    .word 0xaf828548
L1b4784:
    .word 0x3c017000
L1b4788:
    .word 0x8c243fd4
    beqz a0,L1b47a8
    addiu v0,zero,1
    .word 0x8c820000
    .word 0x8c420008
    jalr ra,v0
    addiu a1,zero,-1
    addiu v0,zero,1
L1b47a8:
    .word 0x7bbf0030
L1b47ac:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}


