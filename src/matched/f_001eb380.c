asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c020033
    .word 0x2442f550
    lw a3,0(a1)
    lw t2,8(a1)
    lw a2,0(v0)
    addu v1,a3,t2
    slt at,a2,v1
    beqzl at,L1eb578
    .word 0x70001628
    lw t1,4(a1)
    lw v1,12(a1)
    lw t0,4(v0)
    addu v1,t1,v1
    slt at,t0,v1
    beqz at,L1eb574
    nop
    lw v1,8(v0)
    addu v1,a2,v1
    slt at,a3,v1
    beqz at,L1eb574
    nop
    lw v1,12(v0)
    addu v1,t0,v1
    slt at,t1,v1
    beqz at,L1eb574
    slt at,a3,a2
    beqz at,L1eb438
    nop
    lw v1,8(a0)
    subu a2,a2,a3
    .word 0xc31818
    bnez t2,L1eb408
    .word 0x6a001a
    .word 0x1cd
L1eb408:
    lw v1,8(a1)
    mflo a3
    subu v1,v1,a2
    sw v1,8(a1)
    lw v1,8(a0)
    subu v1,v1,a3
    sw v1,8(a0)
    lw v1,0(v0)
    sw v1,0(a1)
    lw v1,0(a0)
    addu v1,v1,a3
    sw v1,0(a0)
L1eb438:
    lw t0,8(a1)
    lw a3,0(a1)
    lw a2,0(v0)
    lw v1,8(v0)
    addu a3,a3,t0
    addu v1,a2,v1
    slt at,v1,a3
    beqz at,L1eb48c
    subu a2,a3,v1
    lw v1,8(a0)
    .word 0xc31818
    bnez t0,L1eb470
    .word 0x68001a
    .word 0x1cd
L1eb470:
    lw v1,8(a1)
    mflo a3
    subu v1,v1,a2
    sw v1,8(a1)
    lw v1,8(a0)
    subu v1,v1,a3
    sw v1,8(a0)
L1eb48c:
    lw v1,4(a1)
    lw a2,4(v0)
    slt at,v1,a2
    beqz at,L1eb4e8
    subu a3,a2,v1
    lw a2,12(a0)
    lw v1,12(a1)
    .word 0xe63018
    bnez v1,L1eb4b8
    .word 0xc3001a
    .word 0x1cd
L1eb4b8:
    lw v1,12(a1)
    mflo a2
    subu v1,v1,a3
    sw v1,12(a1)
    lw v1,12(a0)
    subu v1,v1,a2
    sw v1,12(a0)
    lw v1,4(v0)
    sw v1,4(a1)
    lw v1,4(a0)
    addu v1,v1,a2
    sw v1,4(a0)
L1eb4e8:
    lw v1,4(v0)
    lw a3,12(a1)
    lw a2,4(a1)
    lw v0,12(v0)
    addu a2,a2,a3
    addu v0,v1,v0
    slt at,v0,a2
    beqz at,L1eb53c
    subu v1,a2,v0
    lw v0,12(a0)
    .word 0x621018
    bnez a3,L1eb520
    .word 0x47001a
    .word 0x1cd
L1eb520:
    lw v0,12(a1)
    mflo a2
    subu v0,v0,v1
    sw v0,12(a1)
    lw v0,12(a0)
    subu v0,v0,a2
    sw v0,12(a0)
L1eb53c:
    lw v0,8(a1)
    blez v0,L1eb574
    nop
    lw v0,12(a1)
    blez v0,L1eb574
    nop
    lw v0,8(a0)
    blez v0,L1eb574
    nop
    lw v0,12(a0)
    blez v0,L1eb574
    addiu v0,zero,1
    b L1eb578
    nop
L1eb574:
    .word 0x70001628
L1eb578:
    jr ra
    nop
}
