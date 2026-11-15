asm void *func(void *d, int c, unsigned n) {
    .set noreorder
    sltiu v0,a2,8
    bnez v0,L5
    daddu v1,a0,zero
    andi v0,a0,0xf
    bnez v0,L5
    daddu a3,a0,zero
    andi t1,a1,0xff
    sltiu t2,a2,32
    daddu t0,t1,zero
    dsll v1,t0,0x8
    or t0,v1,t1
    pcpyh v1,t0
    bnez t2,L4
    sltiu v0,a2,8
    pcpyld t0,v1,v1
L1:
    sq t0,0(a3)
    addiu a2,a2,-32
    addiu a3,a3,16
    sltiu v0,a2,32
    sq t0,0(a3)
    beqz v0,L1
    addiu a3,a3,16
    b L4
    sltiu v0,a2,8
L3:
    addiu a2,a2,-8
    addiu a3,a3,8
    sltiu v0,a2,8
L4:
    nop
    nop
    beqzl v0,L3
    sd v1,0(a3)
    daddu v1,a3,zero
L5:
    lui v0,0xffff
    addiu a2,a2,-1
    ori v0,v0,0xffff
    beq a2,v0,L7
    nop
    lui v0,0xffff
    ori v0,v0,0xffff
L6:
    sb a1,0(v1)
    addiu a2,a2,-1
    nop
    nop
    nop
    bne a2,v0,L6
    addiu v1,v1,1
L7:
    jr ra
    daddu v0,a0,zero
}
