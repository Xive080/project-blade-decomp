extern void fn1c21a0(void);
extern void fn1c21c0(void);
extern void fn1c86c0(void);
extern void fn25d370(void);
asm void func(void) {
.set noreorder
.set noat
    addiu sp,sp,-96
    .word 0x7fbf0040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0x3c027000
    .word 0xe7b40000
    ori v0,v0,0x3fc0
    .word 0x8c420000
    andi v0,v0,0x2
    beqz v0,L131090
    mov.s $f20,$f12
    jal fn25d370
    addiu a0,zero,1
    b L131098
    nop
L131090:
    jal fn25d370
    .word 0x70002628
L131098:
    .word 0x3c010030
    .word 0x8c23a370
    addiu a0,zero,-2
    addiu s1,sp,84
    .word 0xafa00050
    and v1,v1,a0
    .word 0x3c010030
    .word 0xac23a370
    .word 0x3c010030
    .word 0x8c23a3bc
    and v1,v1,a0
    .word 0x3c010030
    .word 0xac23a3bc
    .word 0xae200000
    .word 0x3c017000
    .word 0x8c233fc0
    andi v1,v1,0x1
    bnez v1,L1310fc
    .word 0x3c034420
    .word 0x3c010030
    .word 0x8c23a630
    andi v1,v1,0x2
    beqz v1,L131128
    .word 0x3c034400
    .word 0x3c034420
L1310fc:
    mtc1 v1,$f0
    nop
    mul.s $f0,$f0,$f20
    addiu v1,zero,512
    cvt.w.s $f0,$f0
    mfc1 a0,$f0
    nop
    .word 0xafa40058
    b L13114c
    .word 0xafa3005c
    .word 0x3c034400
L131128:
    mtc1 v1,$f0
    nop
    mul.s $f0,$f0,$f20
    addiu v1,zero,640
    cvt.w.s $f0,$f0
    mfc1 a0,$f0
    nop
    .word 0xafa4005c
    .word 0xafa30058
L13114c:
    addiu s0,sp,88
    .word 0x8e030000
    slti at,v1,17
    bnez at,L1311e0
    .word 0x3c017000
    .word 0x8fa3005c
    slti at,v1,17
    bnez at,L1311dc
    nop
    .word 0x3c010030
    .word 0x8c22a370
    ori v0,v0,0x1
    .word 0x3c010030
    .word 0xac22a370
    .word 0x3c010030
    jal fn1c21a0
    .word 0x8c24a374
    .word 0x3c010030
    .word 0x8c24a360
    jal fn1c21a0
    .word 0x70409628
    addiu a2,sp,80
    .word 0x72402628
    jal fn1c86c0
    .word 0x70402e28
    .word 0x3c010030
    jal fn1c21c0
    .word 0x8c24a374
    .word 0x3c010030
    .word 0x8c24a360
    jal fn1c21c0
    .word 0x70409628
    addiu a2,sp,80
    .word 0x72402628
    jal fn1c86c0
    .word 0x70402e28
L1311dc:
    .word 0x3c017000
L1311e0:
    .word 0x8c233fc0
    andi v1,v1,0x1
    bnez v1,L131204
    nop
    .word 0x3c010030
    .word 0x8c23a630
    andi v1,v1,0x2
    beqz v1,L131224
    addiu a1,sp,92
L131204:
    .word 0x8e030000
    addiu a0,zero,640
    .word 0xafa30050
    .word 0x8fa30050
    subu v1,a0,v1
    b L13123c
    .word 0xae030000
    addiu a1,sp,92
L131224:
    .word 0x8ca30000
    addiu a0,zero,512
    .word 0xae230000
    .word 0x8e230000
    subu v1,a0,v1
    .word 0xaca30000
L13123c:
    .word 0x8e030000
    slti at,v1,17
    bnez at,L1312c8
    nop
    .word 0x8fa3005c
    slti at,v1,17
    bnez at,L1312c8
    nop
    .word 0x3c010030
    .word 0x8c22a3bc
    ori v0,v0,0x1
    .word 0x3c010030
    .word 0xac22a3bc
    .word 0x3c010030
    jal fn1c21a0
    .word 0x8c24a3c0
    .word 0x3c010030
    .word 0x8c24a360
    jal fn1c21a0
    .word 0x70408628
    addiu a2,sp,80
    .word 0x72002628
    jal fn1c86c0
    .word 0x70402e28
    .word 0x3c010030
    jal fn1c21c0
    .word 0x8c24a3c0
    .word 0x3c010030
    .word 0x8c24a360
    jal fn1c21c0
    .word 0x70408628
    addiu a2,sp,80
    .word 0x72002628
    jal fn1c86c0
    .word 0x70402e28
L1312c8:
    .word 0x7bbf0040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,96
}
