extern void func_00121a58(void);
extern void func_0016f4c0(void);
extern void func_0016f5e0(void);
extern void func_0016f610(void);
extern void func_0016f640(void);
extern void func_0016f670(void);
extern void func_0016f760(void);
extern void func_001a74e0(void);
extern void func_001a76f0(void);
extern void func_001a7820(void);
extern void func_001a7940(void);
extern void func_001a7a60(void);
extern void func_001a7b90(void);
extern void func_001b5c30(void);
extern void func_001b5c70(void);
extern void func_001b5c80(void);
extern void func_001b5cc0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-224
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0x3c030030
    addiu s2,v1,-23424
    .word 0xe7b40000
    .word 0x70008628
L132378:
    .word 0x8e430208
    beqz v1,L1323dc
    nop
    .word 0x3c017000
    .word 0xc6410220
    .word 0xc4203fb0
    c.lt.s $f1,$f0
    nop
    bc1tl L1327a4
    addiu s0,s0,1
    .word 0x8e4401b4
    addiu v1,zero,-1
    beq a0,v1,L1327a0
    nop
    jal func_001a7940
    nop
    addiu v1,zero,1
    .word 0xae4301fc
    addiu v1,zero,-1
    .word 0xae4301c0
    .word 0xae4301cc
    .word 0xae400208
    .word 0xae4001f0
    b L1327a0
    .word 0xae4001e4
L1323dc:
    .word 0x8e4301fc
    beqz v1,L13244c
    nop
    jal func_001a74e0
    .word 0x8e4401b4
    addiu v1,zero,1
    beq v0,v1,L1327a0
    nop
    addiu v1,zero,5
    beq v0,v1,L1327a0
    nop
    addiu v1,zero,4
    beq v0,v1,L1327a0
    nop
    addiu v1,zero,2
    beq v0,v1,L132434
    nop
    addiu v1,zero,3
    beq v0,v1,L132434
    nop
    b L1327a0
    nop
L132434:
    jal func_001a7820
    .word 0x8e4401b4
    addiu v1,zero,-1
    .word 0xae4301b4
    b L1327a0
    .word 0xae4001fc
L13244c:
    .word 0x8e4301f0
    beqz v1,L1325f4
    nop
    .word 0x8e4401b4
    addiu v0,zero,-1
    beq a0,v0,L132480
    addiu a1,zero,1
    jal func_001a7940
    nop
    addiu v1,zero,1
    b L1327a0
    .word 0xae4301fc
    addiu a1,zero,1
L132480:
    beq s0,a1,L1325b0
    nop
    addiu a0,zero,2
    beq s0,a0,L132580
    nop
    beqz s0,L1324a4
    nop
    b L1325cc
    addiu a0,sp,96
L1324a4:
    .word 0x8e4301cc
    addiu v0,zero,96
    beq v1,v0,L13256c
    nop
    addiu v0,zero,97
    beql v1,v0,L13255c
    addiu a0,zero,3
    addiu v0,zero,98
    beq v1,v0,L132548
    nop
    addiu v0,zero,8
    beq v1,v0,L1324e0
    nop
    b L1325c8
    nop
L1324e0:
    .word 0x3c010030
    .word 0x8c23a6d0
    addiu v0,zero,4
    beq v1,v0,L132534
    nop
    addiu v0,zero,3
    beq v1,v0,L132534
    nop
    beq v1,a0,L132520
    nop
    beq v1,a1,L132520
    nop
    beqz v1,L132520
    nop
    b L132538
    .word 0x8e4401d8
L132520:
    .word 0x8e4501c0
    jal func_0016f640
    .word 0x8e4401d8
    b L1325c8
    .word 0x70408e28
L132534:
    .word 0x8e4401d8
L132538:
    jal func_0016f610
    .word 0x8e4501c0
    b L1325c8
    .word 0x70408e28
L132548:
    jal func_0016f4c0
    nop
    b L1325c8
    .word 0x70408e28
    addiu a0,zero,3
L13255c:
    jal func_0016f4c0
    nop
    b L1325c8
    .word 0x70408e28
L13256c:
    .word 0x8e4501c0
    jal func_0016f5e0
    .word 0x70002628
    b L1325c8
    .word 0x70408e28
L132580:
    .word 0x8e4501c0
    bnez a1,L13259c
    nop
    jal func_0016f670
    .word 0x8e4401d8
    b L1325c8
    .word 0x70408e28
L13259c:
    .word 0x8e4401d8
    jal func_0016f760
    .word 0x70003628
    b L1325c8
    .word 0x70408e28
L1325b0:
    .word 0x8e4401cc
    .word 0x8e4501c0
    jal func_0016f760
    .word 0x70003628
    .word 0x70408e28
    nop
L1325c8:
    addiu a0,sp,96
L1325cc:
    jal func_00121a58
    .word 0x72202e28
    addiu a0,sp,96
    addiu a2,zero,1
    ori a1,zero,48000
    jal func_001a7b90
    .word 0x70003e28
    .word 0xae4201b4
    b L1327a0
    .word 0xae4001f0
L1325f4:
    .word 0x8e4301e4
    beqz v1,L1327a0
    nop
    .word 0x8e4401b4
    addiu v1,zero,-1
    beql a0,v1,L132624
    addiu a0,zero,1
    jal func_001a74e0
    nop
    b L132628
    .word 0x70402628
    addiu a0,zero,1
L132624:
    nop
L132628:
    addiu v1,zero,3
    bne a0,v1,L1327a0
    nop
    .word 0xc654022c
    .word 0x3c02bf80
    .word 0x44820000
    nop
    c.eq.s $f0,$f20
    nop
    bc1f L13267c
    nop
    bnez s0,L13266c
    nop
    jal func_001b5c30
    nop
    b L132680
    mov.s $f20,$f0
L13266c:
    jal func_001b5cc0
    nop
    b L132680
    mov.s $f20,$f0
L13267c:
    nop
L132680:
    .word 0x8e530244
    addiu v0,zero,-1
    bne s3,v0,L1326cc
    nop
    .word 0x8e4301cc
    addiu v0,zero,98
    beq v1,v0,L1326b8
    addiu s3,zero,1
    addiu v0,zero,8
    beq v1,v0,L1326b4
    nop
    b L1326c4
    .word 0x70009e28
L1326b4:
    addiu s3,zero,1
L1326b8:
    b L1326d4
    addiu a0,zero,2
    .word 0x70009e28
L1326c4:
    b L1326d0
    nop
L1326cc:
    nop
L1326d0:
    addiu a0,zero,2
L1326d4:
    beq s0,a0,L132754
    nop
    addiu v1,zero,1
    beq s0,v1,L132744
    nop
    beqz s0,L1326f8
    nop
    b L132764
    .word 0x8e4401b4
L1326f8:
    .word 0x3c010030
    .word 0x8c22a6d0
    beq v0,a0,L132720
    nop
    beq v0,v1,L132720
    nop
    beqz v0,L132720
    nop
    b L132734
    .word 0x3c023f80
L132720:
    jal func_001b5c80
    nop
    b L13273c
    mul.s $f20,$f20,$f0
    .word 0x3c023f80
L132734:
    .word 0x44820000
    mul.s $f20,$f20,$f0
L13273c:
    b L132760
    nop
L132744:
    jal func_001b5c70
    nop
    b L132760
    mul.s $f20,$f20,$f0
L132754:
    .word 0x3c010030
    .word 0xac20a6d4
    nop
L132760:
    .word 0x8e4401b4
L132764:
    jal func_001a76f0
    mov.s $f12,$f20
    .word 0x8e4401b4
    jal func_001a7a60
    .word 0x72602e28
    addiu v1,zero,-1
    .word 0xae4001e4
    .word 0xae430244
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c033f00
    .word 0x44830000
    nop
    add.s $f0,$f0,$f1
    .word 0xe6400214
L1327a0:
    addiu s0,s0,1
L1327a4:
    slti v1,s0,3
    bnez v1,L132378
    addiu s2,s2,4
    .word 0x7bbf0050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,224
}
