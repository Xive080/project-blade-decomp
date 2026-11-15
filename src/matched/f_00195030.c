asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c020031
    addiu a0,v0,18736
    .word 0x70001e28
L19503c:
    sw zero,0(a0)
    addiu v1,v1,2
    sw zero,4(a0)
    addiu a0,a0,8
    sltiu v0,v1,256
    bnez v0,L19503c
    nop
    .word 0x3c02002e
    addiu a3,v0,1872
    .word 0x3c020031
    addiu t0,v0,18736
    .word 0x3c020031
    addiu t1,v0,17712
    .word 0x70005628
L195074:
    sw zero,132(t0)
    sw a3,132(t1)
    b L195098
    .word 0x70e03628
L195084:
    lw v0,132(t0)
    addiu a2,a2,4
    addiu v0,v0,1
    sw v0,132(t0)
    nop
L195098:
    lbu a1,0(a2)
    lbu a0,1(a2)
    lbu v1,2(a2)
    lbu v0,3(a2)
    or a0,a1,a0
    or v1,v1,a0
    or v0,v0,v1
    bnez v0,L195084
    nop
    addiu t2,t2,1
    addiu a3,a3,64
    addiu t0,t0,4
    sltiu v0,t2,15
    bnez v0,L195074
    addiu t1,t1,4
    .word 0x3c02002e
    addiu a3,v0,3280
    .word 0x3c020031
    addiu t0,v0,18736
    .word 0x3c020031
    addiu t1,v0,17712
    .word 0x70005628
L1950f0:
    sw zero,192(t0)
    sw a3,192(t1)
    b L195110
    .word 0x70e03628
L195100:
    lw v0,192(t0)
    addiu a2,a2,4
    addiu v0,v0,1
    sw v0,192(t0)
L195110:
    lbu a1,0(a2)
    lbu a0,1(a2)
    lbu v1,2(a2)
    lbu v0,3(a2)
    or a0,a1,a0
    or v1,v1,a0
    or v0,v0,v1
    bnez v0,L195100
    nop
    addiu t2,t2,1
    addiu a3,a3,64
    addiu t0,t0,4
    sltiu v0,t2,10
    bnez v0,L1950f0
    addiu t1,t1,4
    .word 0x3c02002e
    addiu a3,v0,2832
    .word 0x3c020031
    addiu t0,v0,18736
    .word 0x3c020031
    addiu t1,v0,17712
    .word 0x70005628
L195168:
    sw zero,232(t0)
    sw a3,232(t1)
    b L195188
    .word 0x70e03628
L195178:
    lw v0,232(t0)
    addiu a2,a2,4
    addiu v0,v0,1
    sw v0,232(t0)
L195188:
    lbu a1,0(a2)
    lbu a0,1(a2)
    lbu v1,2(a2)
    lbu v0,3(a2)
    or a0,a1,a0
    or v1,v1,a0
    or v0,v0,v1
    bnez v0,L195178
    nop
    addiu t2,t2,1
    addiu a3,a3,64
    addiu t0,t0,4
    sltiu v0,t2,7
    bnez v0,L195168
    addiu t1,t1,4
    .word 0x3c03002e
    addiu t0,v1,3920
    .word 0x3c030031
    addiu t1,v1,18736
    .word 0x3c030031
    addiu t2,v1,17712
    .word 0x70001628
L1951e0:
    sw zero,388(t1)
    sw t0,388(t2)
    b L195200
    .word 0x71003e28
L1951f0:
    lw v1,388(t1)
    addiu a3,a3,4
    addiu v1,v1,1
    sw v1,388(t1)
L195200:
    lbu a2,0(a3)
    lbu a1,1(a3)
    lbu a0,2(a3)
    lbu v1,3(a3)
    or a1,a2,a1
    or a0,a0,a1
    or v1,v1,a0
    bnez v1,L1951f0
    nop
    sw zero,260(t1)
    sw t0,260(t2)
    b L195248
    .word 0x71003e28
L195234:
    lw v1,260(t1)
    addiu a3,a3,4
    addiu v1,v1,1
    sw v1,260(t1)
    nop
L195248:
    lbu a2,0(a3)
    lbu a1,1(a3)
    lbu a0,2(a3)
    lbu v1,3(a3)
    or a1,a2,a1
    or a0,a0,a1
    or v1,v1,a0
    bnez v1,L195234
    nop
    addiu v0,v0,1
    addiu t0,t0,64
    addiu t1,t1,4
    sltiu v1,v0,26
    bnez v1,L1951e0
    addiu t2,t2,4
    jr ra
    addiu v0,zero,1
}
