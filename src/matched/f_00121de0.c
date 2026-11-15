asm void f(void) {
    .set noreorder
    .set noat
    .word 0x0080402d
    andi v0,t0,0x7
    bnezl v0,L121efc
    .word 0x80820000
    andi v1,t0,0xf
    bnezl v1,L121e8c
    .word 0xdd020000
    .word 0x3c070101
    ori a3,a3,0x101
    dsll a3,a3,0x10
    ori a3,a3,0x101
    dsll a3,a3,0x10
    ori a3,a3,0x101
    .word 0x79020000
    pcpyld t1,a3,a3
    .word 0x3c048080
    ori a0,a0,0x8080
    dsll a0,a0,0x10
    ori a0,a0,0x8080
    dsll a0,a0,0x10
    ori a0,a0,0x8080
    psubb v1,v0,t1
    pnor v0,zero,v0
    pcpyld t2,a0,a0
    pand v1,v1,v0
    pand v1,v1,t2
    pcpyud v0,v1,a0
    or v1,v1,v0
    bnez v1,L121ef4
    .word 0x0100382d
    addiu a3,a3,16
    nop
L121e60:
    .word 0x78e20000
    pnor v1,zero,v0
    psubb v0,v0,t1
    pand v0,v0,v1
    pand v0,v0,t2
    pcpyud v1,v0,a0
    or v0,v0,v1
    beqz v0,L121e60
    addiu a3,a3,16
    b L121ef4
    addiu a3,a3,-16
L121e8c:
    .word 0x3c090101
    ori t1,t1,0x101
    dsll t1,t1,0x10
    ori t1,t1,0x101
    dsll t1,t1,0x10
    ori t1,t1,0x101
    .word 0x3c048080
    ori a0,a0,0x8080
    dsll a0,a0,0x10
    ori a0,a0,0x8080
    dsll a0,a0,0x10
    ori a0,a0,0x8080
    dsubu v1,v0,t1
    nor v0,zero,v0
    and v1,v1,v0
    and v1,v1,a0
    bnez v1,L121ef4
    .word 0x0100382d
    addiu a3,a3,8
L121ed8:
    .word 0xdce20000
    nor v1,zero,v0
    dsubu v0,v0,t1
    and v0,v0,v1
    and v0,v0,a0
    beqzl v0,L121ed8
    addiu a3,a3,8
L121ef4:
    .word 0x00e0202d
    .word 0x80820000
L121efc:
    beqz v0,L121f24
    addiu a2,a2,-1
    addiu a0,a0,1
L121f08:
    .word 0x80820000
    nop
    nop
    nop
    nop
    bnezl v0,L121f08
    addiu a0,a0,1
L121f24:
    .word 0x3c02ffff
    ori v0,v0,0xffff
    beq a2,v0,L121f84
    nop
    .word 0x90a20000
    addiu a1,a1,1
    .word 0xa0820000
    sll v0,v0,0x18
    beqz v0,L121f84
    addiu a0,a0,1
    .word 0x3c03ffff
    ori v1,v1,0xffff
    nop
L121f58:
    beqzl a2,L121f60
    .word 0xa0800000
L121f60:
    addiu a2,a2,-1
    beq a2,v1,L121f84
    nop
    .word 0x90a20000
    addiu a1,a1,1
    .word 0xa0820000
    sll v0,v0,0x18
    bnez v0,L121f58
    addiu a0,a0,1
L121f84:
    jr ra
    .word 0x0100102d
}
