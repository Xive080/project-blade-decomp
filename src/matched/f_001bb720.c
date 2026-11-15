extern void func_001bf260(void);
extern void func_001bf1c0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff90
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    paddub s3,a1,zero
    .word 0x7fb00000
    paddub s4,a0,zero
    slt at,zero,s3
    paddub s2,a2,zero
    paddub s0,s4,zero
    beqz at,L1bb810
    paddub s1,zero,zero
L1bb758:
    paddub a0,s2,zero
    .word 0x27a50068
    jal func_001bf260
    addiu a2,zero,4
    bnez v0,L1bb788
    .word 0x3c020033
    .word 0x2442a620
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s4,zero
    b L1bb814
    paddub v0,zero,zero
L1bb788:
    .word 0x8fa20068
    paddub a0,s2,zero
    .word 0x27a50068
    addiu a2,zero,4
    jal func_001bf260
    .word 0xae020000
    bnez v0,L1bb7c0
    .word 0x3c020033
    .word 0x2442a620
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s4,zero
    b L1bb814
    paddub v0,zero,zero
L1bb7c0:
    .word 0x8fa20068
    paddub a0,s2,zero
    .word 0x27a5006c
    addiu a2,zero,4
    jal func_001bf1c0
    .word 0xae020004
    bnez v0,L1bb7f8
    .word 0x3c020033
    .word 0x2442a620
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s4,zero
    b L1bb814
    paddub v0,zero,zero
L1bb7f8:
    .word 0xc7a0006c
    .word 0x26310001
    slt v0,s1,s3
    .word 0xe6000008
    bnez v0,L1bb758
    .word 0x2610000c
L1bb810:
    paddub v0,s4,zero
L1bb814:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0070
}
