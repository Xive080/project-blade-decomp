extern void func_0016b220(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu v0,zero,10
    .word 0x0082001a
    srl a3,a0,0x1f
    nop
    mfhi t0
    .word 0x3c026666
    ori v1,v0,0x6667
    .word 0x00640018
    .word 0x3c02002e
    addiu a1,v0,-6752
    .word 0x00002010
    sll v1,t0,0x2
    .word 0xaf8883b8
    sra a0,a0,0x2
    addu a3,a0,a3
    sll a0,a3,0x2
    addu a0,a0,a3
    sll a0,a0,0x1
    addu a0,a0,a3
    sll a0,a0,0x2
    addu a0,a1,a0
    addu v1,v1,a0
    .word 0xaf8783b4
    addiu v0,zero,8
    bne a3,v0,L16f434
    .word 0x8c640000
    bnez t0,L16f3fc
    addiu v0,zero,1
    b L16f488
    addiu a2,zero,1
    addiu v0,zero,1
L16f3fc:
    bne t0,v0,L16f410
    addiu v0,zero,2
    b L16f488
    addiu a2,zero,3
    addiu v0,zero,2
L16f410:
    bne t0,v0,L16f424
    addiu v0,zero,3
    b L16f488
    addiu a2,zero,3
    addiu v0,zero,3
L16f424:
    bne t0,v0,L16f488
    nop
    b L16f488
    addiu a2,zero,4
L16f434:
    addiu v0,a3,-9
    sltiu at,v0,3
    beqz at,L16f450
    addiu v0,a3,-12
    b L16f488
    addiu a2,zero,2
    addiu v0,a3,-12
L16f450:
    sltiu at,v0,3
    beqz at,L16f464
    nop
    b L16f488
    addiu a2,zero,4
L16f464:
    bnez t0,L16f478
    addiu v0,zero,1
    b L16f488
    addiu a2,zero,3
    addiu v0,zero,1
L16f478:
    .word 0x3c010030
    addiu a2,zero,4
    .word 0xac28a620
    .word 0xaf8283c0
L16f488:
    .word 0x3c020018
    j func_0016b220
    addiu a1,v0,-28000
    nop
    nop
    nop
    addiu v0,gp,-32696
    sll v1,a0,0x2
    addu v0,v0,v1
    jr ra
    .word 0x8c420000
}
