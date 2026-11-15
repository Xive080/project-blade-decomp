asm void f(void) {
    .set noreorder
    .set noat
    .word 0x0080402d
    or a3,a1,a0
    addiu t2,zero,16
    andi v0,a3,0x7
    addiu t1,zero,8
    bnez v0,L1220f8
    andi v0,a3,0xf
    movz t1,t2,v0
    bnez v0,L122064
    sltu v0,a2,t1
    bnez v0,L1220f8
    nop
    .word 0x3c070101
    ori a3,a3,0x101
    dsll a3,a3,0x10
    ori a3,a3,0x101
    dsll a3,a3,0x10
    ori a3,a3,0x101
    .word 0x78a30000
    pcpyld t1,a3,a3
    pnor v1,zero,v1
    .word 0x3c078080
    ori a3,a3,0x8080
    dsll a3,a3,0x10
    ori a3,a3,0x8080
    dsll a3,a3,0x10
    ori a3,a3,0x8080
    psubb v0,v1,t1
    pcpyld t2,a3,a3
    pand v0,v0,v1
    pand v0,v0,t2
    pcpyud v1,v0,a0
    or v1,v0,v1
    bnez v1,L1220f4
    .word 0x0100382d
    .word 0x78a30000
    addiu a2,a2,-16
    addiu a1,a1,16
    sltiu v0,a2,16
    .word 0x7ce30000
    bnez v0,L1220f4
    addiu a3,a3,16
    .word 0x78a20000
    pnor v1,zero,v0
    psubb v0,v0,t1
    pand v0,v0,v1
    pand v0,v0,t2
    pcpyud v1,v0,a0
    or v0,v0,v1
    beqzl v0,L1220c0
    .word 0x78a30000
    b L1220f8
    .word 0x00e0202d
L122064:
    bnez v0,L1220f8
    nop
    .word 0xdca30000
    .word 0x3c090101
    ori t1,t1,0x101
    dsll t1,t1,0x10
    ori t1,t1,0x101
    dsll t1,t1,0x10
    ori t1,t1,0x101
    .word 0x3c0a8080
    ori t2,t2,0x8080
    dsll t2,t2,0x10
    ori t2,t2,0x8080
    dsll t2,t2,0x10
    ori t2,t2,0x8080
    dsubu v0,v1,t1
    nor v1,zero,v1
    and v0,v0,v1
    and v0,v0,t2
    bnez v0,L1220f4
    .word 0x0100382d
    .word 0xdca30000
    nop
L1220c0:
    addiu a2,a2,-8
    addiu a1,a1,8
    sltiu v0,a2,8
    .word 0xfce30000
    bnez v0,L1220f4
    addiu a3,a3,8
    .word 0xdca20000
    nor v1,zero,v0
    dsubu v0,v0,t1
    and v0,v0,v1
    and v0,v0,t2
    beqzl v0,L1220c0
    .word 0xdca30000
L1220f4:
    .word 0x00e0202d
L1220f8:
    beqz a2,L122144
    .word 0x00c0102d
    .word 0x90a20000
    addiu a2,a2,-1
    addiu a1,a1,1
    .word 0xa0820000
    sll v0,v0,0x18
    bnez v0,L1220f8
    addiu a0,a0,1
    .word 0x00c0102d
    beqz v0,L122144
    addiu a2,a2,-1
L122128:
    .word 0xa0800000
    .word 0x00c0102d
    addiu a0,a0,1
    nop
    nop
    bnez v0,L122128
    addiu a2,a2,-1
L122144:
    jr ra
    .word 0x0100102d
}
