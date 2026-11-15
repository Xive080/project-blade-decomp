asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c010030
    lw a1,-23704(at)
    andi v1,a1,0x1
    beqzl v1,L221cc4
    daddiu a1,zero,1
    andi v1,a1,0x8
    beqz v1,L221cb8
    .word 0x70002e28
    b L221cc8
    daddiu v1,zero,2
L221cb8:
    b L221cc8
    daddiu v1,zero,1
    daddiu a1,zero,1
L221cc4:
    .word 0x70a01e28
L221cc8:
    andi a1,a1,0xffff
    sll a2,a1,0x4
    .word 0x3c050033
    addiu a1,a1,1888
    addu a1,a1,a2
    addiu t0,zero,118
L221ce0:
    lhu a3,12(a1)
    lhu t5,14(a1)
    lw a2,0(a0)
    sll a3,a3,0x2
    addu a3,a1,a3
    lw t1,0(a3)
    sll t6,t5,0x4
    lw t4,12(t1)
    lw t3,16(t1)
    lw t2,24(t1)
    addu a3,t5,a2
    sltiu at,a3,118
    addu t4,t4,t6
    lw t1,20(t1)
    addu t3,t3,t6
    addu t2,t2,t6
    beqz at,L221d30
    addu t1,t1,t6
    b L221d38
    sh a3,14(a1)
L221d30:
    subu a2,t0,t5
    sh t0,14(a1)
L221d38:
    beqzl a2,L221e0c
    addiu v1,v1,-1
    sll t5,a2,0x4
    nop
L221d48:
    lw a3,4(a0)
    addiu t5,t5,-16
    addiu a2,a2,-1
    addu a3,a3,t5
    lwc1 f3,0(a3)
    lwc1 f2,4(a3)
    lwc1 f1,8(a3)
    lwc1 f0,12(a3)
    swc1 f3,0(t4)
    swc1 f2,4(t4)
    swc1 f1,8(t4)
    swc1 f0,12(t4)
    lw a3,8(a0)
    addiu t4,t4,16
    addu a3,a3,t5
    lwc1 f3,0(a3)
    lwc1 f2,4(a3)
    lwc1 f1,8(a3)
    lwc1 f0,12(a3)
    swc1 f3,0(t3)
    swc1 f2,4(t3)
    swc1 f1,8(t3)
    swc1 f0,12(t3)
    lw a3,16(a0)
    addiu t3,t3,16
    addu a3,a3,t5
    lwc1 f3,0(a3)
    lwc1 f2,4(a3)
    lwc1 f1,8(a3)
    lwc1 f0,12(a3)
    swc1 f3,0(t2)
    swc1 f2,4(t2)
    swc1 f1,8(t2)
    swc1 f0,12(t2)
    lw a3,12(a0)
    addiu t2,t2,16
    addu a3,a3,t5
    lwc1 f3,0(a3)
    lwc1 f2,4(a3)
    lwc1 f1,8(a3)
    lwc1 f0,12(a3)
    swc1 f3,0(t1)
    swc1 f2,4(t1)
    swc1 f1,8(t1)
    swc1 f0,12(t1)
    bnez a2,L221d48
    addiu t1,t1,16
    nop
    addiu v1,v1,-1
L221e0c:
    andi v1,v1,0xffff
    bnez v1,L221ce0
    addiu a1,a1,16
    jr ra
    nop
}
