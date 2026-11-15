extern void func_0011ec80(void);
extern void func_0023b0e0(void);
extern void func_0023ceb0(void);
extern void func_0023e200(void);
extern void func_0023e210(void);
extern void func_0023e220(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu s1,gp,-30320
    .word 0x8e220000
    .word 0x70a09628
    addu v0,a0,v0
    lw s0,0(v0)
    bne zero,s0, L23c5e8
    .word 0x70809e28
    .word 0x3c020033
    .word 0x3c01002e
    addiu v0,v0,-23008
    lw v0,320(v0)
    jalr ra,v0
    lw a0,31624(at)
    .word 0x70408628
    bne zero,s0, L23c5d0
    .word 0x72002628
    b L23c5e8
    .word 0x70008628
L23c5d0:
    .word 0x70002e28
    jal func_0011ec80
    addiu a2,zero,144
    .word 0x8e220000
    addu v0,s3,v0
    sw s0,0(v0)
L23c5e8:
    bne zero,s0, L23c5f8
    .word 0x70001628
    b L23c6d8
    .word 0x7bbf0040
L23c5f8:
    beqz s2, L23c618
    .word 0x72002628
    lw v0,128(s0)
    beqz v0, L23c620
    nop
    beq v0,s2, L23c620
    nop
    .word 0x72002628
L23c618:
    jal func_0023b0e0
    nop
L23c620:
    sw s2,128(s0)
    lw v1,128(s0)
    beqz v1, L23c6d4
    .word 0x72601628
    addiu v0,zero,4
    beq v1,v0, L23c6b4
    nop
    addiu v0,zero,3
    beq v1,v0, L23c690
    addiu v0,zero,1
    addiu v0,zero,2
    beq v1,v0, L23c67c
    nop
    addiu v0,zero,1
    beq v1,v0, L23c668
    nop
    b L23c6d0
    nop
L23c668:
    sw v0,48(s0)
    jal func_0023e210
    .word 0x72602628
    b L23c6d0
    nop
L23c67c:
    sw v0,48(s0)
    jal func_0023e200
    .word 0x72602628
    b L23c6d0
    nop
L23c690:
    sw v0,48(s0)
    addiu v0,zero,2
    sw v0,112(s0)
    jal func_0023e210
    .word 0x72602628
    jal func_0023e200
    .word 0x72602628
    b L23c6d0
    nop
L23c6b4:
    sw v0,48(s0)
    jal func_0023e220
    .word 0x72602628
    .word 0x72602628
    addiu a1,zero,5
    jal func_0023ceb0
    addiu a2,zero,6
L23c6d0:
    .word 0x72601628
L23c6d4:
    .word 0x7bbf0040
L23c6d8:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
