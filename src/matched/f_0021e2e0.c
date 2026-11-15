asm void f(void) {
    .set noreorder
    .set noat
    lw v1,24(a0)
    lw a2,76(v1)
    andi a2,a2,0x1
    bnez a2,L21e420
    nop
    lw t0,12(a1)
    lbu t1,2(v1)
    lbu a3,36(v1)
    addiu a2,zero,-2
    lhu t0,6(t0)
    andi t1,t1,0x9f
    andi t1,t1,0xff
    sll t1,t1,0x10
    sll a3,a3,0x18
    or t0,t0,t1
    or a3,a3,t0
    sw a3,24(a1)
    lw a3,20(a1)
    and a2,a3,a2
    sw a2,20(a1)
    lw a2,16(a1)
    lw a3,4(a2)
    beqz a3,L21e420
    nop
    lw t1,40(a3)
    lw t2,24(a1)
    addiu a2,a0,76
    beq t2,t1,L21e39c
    addiu a0,a3,24
    srl a3,t2,0x10
    andi t0,a3,0xff
    srl a3,t1,0x10
    andi a3,a3,0xff
    bne t0,a3,L21e380
    srl a3,t2,0x18
    andi t0,a3,0xff
    srl a3,t1,0x18
    andi a3,a3,0xff
    beq t0,a3,L21e390
    nop
L21e380:
    lw a3,20(a1)
    ori a3,a3,0x8
    b L21e39c
    sw a3,20(a1)
L21e390:
    lw a3,20(a1)
    ori a3,a3,0x4
    sw a3,20(a1)
L21e39c:
    lhu a3,12(v1)
    beqz a3,L21e3e4
    nop
    andi a3,a3,0x1
    beqz a3,L21e3c4
    nop
    lw v1,20(a1)
    ori v1,v1,0x8
    b L21e3e4
    sw v1,20(a1)
L21e3c4:
    lw a3,20(a1)
    ori a3,a3,0x2
    sw a3,20(a1)
    lhu a3,12(v1)
    lw v1,20(a1)
    sll a3,a3,0x3
    or v1,v1,a3
    sw v1,20(a1)
L21e3e4:
    lw v1,0(a2)
    andi v1,v1,0x1
    beqz v1,L21e420
    nop
    lw a3,40(a0)
    lh v1,6(a2)
    bne a3,v1,L21e414
    nop
    lw a0,36(a0)
    lh v1,4(a2)
    beq a0,v1,L21e420
    nop
L21e414:
    lw v1,20(a1)
    ori v1,v1,0x4
    sw v1,20(a1)
L21e420:
    jr ra
    nop
}
