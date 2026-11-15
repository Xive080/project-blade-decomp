asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c020033
    addiu v0,v0,-2736
    lw t0,0(a1)
    lw a2,8(a1)
    lw a3,0(v0)
    addu v1,t0,a2
    slt at,a3,v1
    beqzl at,L1eb370
    .word 0x70001628
    lw t2,4(a1)
    lw v1,12(a1)
    lw t1,4(v0)
    addu v1,t2,v1
    slt at,t1,v1
    beqz at,L1eb36c
    nop
    lw v1,8(v0)
    addu v1,a3,v1
    slt at,t0,v1
    beqz at,L1eb36c
    nop
    lw v1,12(v0)
    addu v1,t1,v1
    slt at,t2,v1
    beqz at,L1eb36c
    slt at,t0,a3
    beqz at,L1eb2b0
    nop
    subu a3,a3,t0
    subu v1,a2,a3
    sw v1,8(a1)
    lw v1,0(a0)
    addu v1,v1,a3
    sw v1,0(a0)
    lw v1,0(v0)
    sw v1,0(a1)
L1eb2b0:
    lw t0,0(a1)
    lw a3,8(a1)
    lw a2,0(v0)
    lw v1,8(v0)
    addu a3,t0,a3
    addu v1,a2,v1
    slt at,v1,a3
    beqz at,L1eb2dc
    nop
    subu v1,v1,t0
    sw v1,8(a1)
L1eb2dc:
    lw v1,4(a1)
    lw a2,4(v0)
    slt at,v1,a2
    beqz at,L1eb314
    nop
    subu a2,a2,v1
    lw v1,12(a1)
    subu v1,v1,a2
    sw v1,12(a1)
    lw v1,4(a0)
    addu v1,v1,a2
    sw v1,4(a0)
    lw v1,4(v0)
    sw v1,4(a1)
L1eb314:
    lw v1,4(v0)
    lw a3,4(a1)
    lw a2,12(a1)
    lw v0,12(v0)
    addu a2,a3,a2
    addu v0,v1,v0
    slt at,v0,a2
    beqz at,L1eb340
    nop
    subu v0,v0,a3
    sw v0,12(a1)
L1eb340:
    lw v1,8(a1)
    blez v1,L1eb36c
    nop
    lw v0,12(a1)
    blez v0,L1eb36c
    nop
    sw v1,8(a0)
    lw v1,12(a1)
    addiu v0,zero,1
    b L1eb370
    sw v1,12(a0)
L1eb36c:
    .word 0x70001628
L1eb370:
    jr ra
    nop
}
