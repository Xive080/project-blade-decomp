extern void func_0013b550(void);
extern void func_00195a30(void);
extern void func_001a3ac0(void);
extern void func_001a3fe0(void);
extern void func_0024b4b0(void);
extern void func_0024b540(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,12
    .word 0x70a08e28
    .word 0x70809628
    beq s1,v0, L1a35ac
    .word 0x70c08628
    addiu v0,zero,18
    beq s1,v0, L1a3534
    nop
    addiu v0,zero,9
    beq s1,v0, L1a3508
    nop
    beqz s1, L1a3460
    nop
    b L1a363c
    .word 0x72402628
L1a3460:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,8
    sw v0,8(s2)
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,42
    sw v0,12(s2)
    .word 0x3c020031
    addiu v0,v0,26464
    sw v0,20(s2)
    addiu v0,zero,5
    sw v0,16(s2)
    .word 0x3c020031
    addiu a0,v0,26464
    sw zero,24(s2)
    addiu a1,zero,9
    addiu a2,zero,11
    jal func_00195a30
    sw zero,4(s2)
    .word 0x3c020031
    addiu a0,v0,26496
    addiu a1,zero,10
    jal func_00195a30
    addiu a2,zero,11
    .word 0x3c020031
    addiu a0,v0,26528
    addiu a1,zero,12
    jal func_00195a30
    addiu a2,zero,11
    .word 0x3c020031
    addiu a1,zero,11
    addiu a0,v0,26560
    jal func_00195a30
    .word 0x70a03628
    .word 0x3c020031
    addiu a0,v0,26592
    addiu a1,zero,13
    jal func_00195a30
    addiu a2,zero,19
    b L1a3638
    nop
L1a3508:
    lw v1,24(s2)
    addiu v0,zero,4
    beq v1,v0, L1a3638
    nop
    .word 0x3c010030
    lw v1,-21884(at)
    addiu v0,zero,1
    beq v1,v0, L1a3638
    nop
    b L1a364c
    .word 0x7bbf0030
L1a3534:
    lw v1,24(s2)
    addiu v0,zero,4
    beq v1,v0, L1a359c
    addiu a0,zero,18
    .word 0x3c010030
    lw v1,-21884(at)
    addiu v0,zero,1
    beq v1,v0, L1a3598
    nop
    .word 0x8f848328
    addiu a1,zero,43
    jal func_0013b550
    .word 0xaf80851c
    .word 0x70402628
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    addiu a2,sp,72
    sw v0,72(sp)
    addiu a0,zero,18
    .word 0x70002e28
    jal func_0024b540
    sw zero,76(sp)
    b L1a3638
    nop
L1a3598:
    addiu a0,zero,18
L1a359c:
    jal func_0024b4b0
    .word 0x70002e28
    b L1a3638
    nop
L1a35ac:
    lw v1,24(s2)
    addiu v0,zero,4
    beq v1,v0, L1a3624
    addiu v0,zero,11
    addiu v0,zero,3
    beq v1,v0, L1a3618
    addiu v0,zero,10
    addiu v0,zero,2
    beq v1,v0, L1a360c
    addiu v0,zero,9
    addiu v0,zero,1
    beq v1,v0, L1a3600
    addiu v0,zero,8
    beqz v1, L1a35f4
    addiu v0,zero,7
    b L1a3638
    nop
    addiu v0,zero,7
L1a35f4:
    b L1a3638
    sw v0,0(s0)
    addiu v0,zero,8
L1a3600:
    b L1a3638
    sw v0,0(s0)
    addiu v0,zero,9
L1a360c:
    b L1a3638
    sw v0,0(s0)
    addiu v0,zero,10
L1a3618:
    b L1a3638
    sw v0,0(s0)
    addiu v0,zero,11
L1a3624:
    sw v0,0(s0)
    sw zero,4(s0)
    addiu v0,zero,1
    sb zero,12(s0)
    sb v0,15(s0)
L1a3638:
    .word 0x72402628
L1a363c:
    .word 0x72202e28
    jal func_001a3ac0
    .word 0x72003628
    .word 0x7bbf0030
L1a364c:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
