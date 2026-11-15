extern void func_00182e50(void);
extern void func_00189050(void);
extern void func_0025b060(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-144
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0x70808e28
    jal func_0025b060
    .word 0xe7b40000
    lw v1,8(s1)
    .word 0x70408628
    addiu v0,zero,1
    beq v1,v0, L259dd4
    .word 0x3c0243a0
    addiu v0,zero,3
    beq v1,v0, L259db4
    nop
    b L259de8
    nop
L259db4:
    .word 0x3c010033
    .word 0xc421326c
    .word 0x44801000
    .word 0x3c010033
    .word 0xc4203270
    b L259df4
    add.s $f0,$f1,$f0
    .word 0x3c0243a0
L259dd4:
    .word 0x44820000
    .word 0x3c023f00
    .word 0x44821000
    b L259df8
    lw v1,0(s1)
L259de8:
    .word 0x3c010033
    .word 0xc4203264
    .word 0x44801000
L259df4:
    lw v1,0(s1)
L259df8:
    addiu v0,zero,8
    bne v1,v0, L259e18
    .word 0x3c0241c8
    .word 0x3c02420c
    .word 0x4482a000
    b L259e20
    lw a0,-30224(gp)
    .word 0x3c0241c8
L259e18:
    .word 0x4482a000
    lw a0,-30224(gp)
L259e20:
    .word 0xc6210004
    lw a1,20(s1)
    addiu v1,zero,2
    .word 0x3c023f00
    lw a0,12(a0)
    sw v1,64(sp)
    .word 0xe7a20044
    sw v0,72(sp)
    .word 0xe7a0004c
    .word 0xe7a10050
    sw a0,108(sp)
    jal func_00182e50
    sw a1,112(sp)
    addiu v0,sp,116
    .word 0xe4400000
    mul.s $f0,$f20,$f0
    .word 0x3c02002e
    addiu v0,v0,1696
    addiu s1,sp,92
    .word 0xe7a00054
    .word 0xe7b40058
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0x3c010033
    addiu a0,sp,64
    .word 0xe6230000
    .word 0xe6220004
    .word 0xe6210008
    .word 0xe620000c
    lw v0,13472(at)
    lw v1,-30224(gp)
    lw a2,0(s0)
    lw v0,44(v0)
    lw a1,0(v1)
    jal func_00189050
    addiu a3,v0,1
    sw v0,8(s0)
    .word 0x3c02002e
    addiu v0,v0,1760
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0x3c010033
    .word 0xe6230000
    .word 0xe6220004
    .word 0xe6210008
    .word 0xe620000c
    lw v1,-30224(gp)
    lw v0,13472(at)
    lw a2,0(s0)
    lw a1,0(v1)
    lw a3,44(v0)
    jal func_00189050
    addiu a0,sp,64
    sw v0,12(s0)
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,144
}
