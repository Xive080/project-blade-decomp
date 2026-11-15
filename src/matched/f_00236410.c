extern void func_001332c0(void);
extern void func_0016b090(void);
extern void func_0025f720(void);
extern void func_00172270(void);
extern void func_001718b0(void);
extern void func_00171880(void);
extern void func_00170070(void);
extern void func_00133120(void);
extern void func_0016f4a0(void);
extern void func_001214b8(void);
extern void func_001a51d0(void);
extern void func_001a4b30(void);
extern void func_001a4b10(void);
extern void func_00133190(void);
extern void func_0025f710(void);
asm void func(void) {
    .set noreorder
    .word 0x3c020023
    addiu v0,v0,26368
    .word 0x3c010033
    .word 0xac221e20
    .word 0x3c020023
    addiu v0,v0,26320
    .word 0x3c010033
    .word 0xac221e24
    .word 0x3c020023
    addiu v0,v0,25744
    .word 0x3c010033
    .word 0xac221e28
    .word 0x3c010033
    .word 0x3c020033
    .word 0xac201e2c
    addiu v0,v0,7712
    .word 0x3c010033
    .word 0xac221e40
    .word 0x3c0241a0
    .word 0x3c010033
    .word 0xac221e44
    .word 0x3c020033
    .word 0x3c010033
    addiu a1,v0,7744
    addiu a0,zero,9
    .word 0xaf8088f4
    .word 0xaf8088f0
    j func_001332c0
    .word 0xac201e48
    nop
    nop
    nop
    addiu sp,sp,-32
    .word 0x7fbf0000
    .word 0x3c010033
    .word 0x8c221e4c
    bnez v0,L2364e8
    nop
    jal func_0016b090
    nop
    bnez v0,L2364e0
    addiu v0,zero,1
    addiu a0,zero,16
    jal func_0025f720
    .word 0x70002e28
    .word 0x8f848268
    addiu v0,zero,1
    .word 0x3c010033
    .word 0xac221e4c
    jal func_00172270
    .word 0x70002e28
    addiu v0,zero,1
L2364e0:
    b L2366c4
    .word 0x7bbf0000
L2364e8:
    .word 0x3c010030
    .word 0xc421a870
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L236524
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xc422a868
    c.eq.s $f2,$f0
    nop
    bc1t L23652c
    nop
    addiu v0,zero,1
L236524:
    b L236560
    .word 0xaf8288f0
L23652c:
    .word 0x8f8288f0
    beqz v0,L236560
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L236560
    nop
    c.eq.s $f2,$f0
    nop
    bc1f L236560
    nop
    .word 0x3c010033
    .word 0xac201e44
L236560:
    .word 0x3c010033
    .word 0xc4201e44
    .word 0x44800800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L236598
    nop
    jal func_001718b0
    nop
    bnez v0,L236598
    nop
    jal func_00171880
    nop
L236598:
    jal func_001718b0
    nop
    beqz v0,L2366b4
    nop
    .word 0x3c010033
    .word 0x8c221e4c
    addiu a0,zero,1
    bne v0,a0,L2365f0
    nop
    .word 0x8f84826c
    .word 0x3c0241a0
    .word 0x3c010033
    .word 0xac221e44
    addiu v0,zero,2
    .word 0x3c010033
    jal func_00170070
    .word 0xac221e4c
    addiu a0,zero,4
    jal func_0025f720
    paddub a1,v0,zero
    b L2366b4
    .word 0xaf8088f0
L2365f0:
    .word 0x3c010033
    .word 0xc4221e44
    .word 0x44800000
    .word 0x3c017000
    .word 0xc4213fa8
    sub.s $f1,$f2,$f1
    .word 0x3c010033
    c.lt.s $f1,$f0
    nop
    bc1f L2366b4
    .word 0xe4211e44
    .word 0x8f8288f0
    beqz v0,L236638
    nop
    jal func_00133120
    nop
    b L2366b4
    nop
L236638:
    .word 0x3c010033
    .word 0x8c221e48
    slti v0,v0,2
    bnez v0,L236654
    nop
    .word 0x3c010033
    .word 0xac201e48
L236654:
    .word 0x3c010033
    jal func_0016f4a0
    .word 0x8c241e48
    addiu a0,sp,16
    jal func_001214b8
    paddub a1,v0,zero
    jal func_001a51d0
    addiu a0,sp,16
    jal func_001a4b30
    nop
    .word 0x3c010030
    jal func_001a4b10
    .word 0xa022a61f
    .word 0x3c010030
    .word 0xac22a614
    .word 0x3c010033
    .word 0x8c221e48
    addiu a0,zero,1
    .word 0x3c010030
    .word 0xac24a610
    addiu v0,v0,1
    .word 0x3c010033
    jal func_00133190
    .word 0xac221e48
L2366b4:
    jal func_0025f710
    nop
    addiu v0,zero,1
    .word 0x7bbf0000
L2366c4:
    jr ra
    addiu sp,sp,32
}


