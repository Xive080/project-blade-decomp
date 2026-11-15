asm void f(void) {
    .set noreorder
    .set noat
    andi v0,a0,0x7
    bnez v0,L121c84
    .word 0x0080382d
    andi v1,a0,0xf
    .word 0x3c020101
    ori v0,v0,0x101
    dsll v0,v0,0x10
    ori v0,v0,0x101
    dsll v0,v0,0x10
    ori v0,v0,0x101
    bnez v1,L121c14
    .word 0x0080282d
    .word 0x78a30000
    pcpyld t0,v0,v0
    .word 0x3c048080
    ori a0,a0,0x8080
    dsll a0,a0,0x10
    ori a0,a0,0x8080
    dsll a0,a0,0x10
    ori a0,a0,0x8080
    psubb v0,v1,t0
    pnor v1,zero,v1
    pcpyld t1,a0,a0
    pand v0,v0,v1
    pand v0,v0,t1
    pcpyud v1,v0,t0
    or a2,v1,v0
    bnezl a2,L121c84
    .word 0x00a0202d
    addiu a1,a1,16
L121be8:
    .word 0x78a20000
    pnor v1,zero,v0
    psubb v0,v0,t0
    pand v0,v0,v1
    pand a0,v0,t1
    pcpyud v1,a0,a2
    or v1,v1,a0
    beqzl v1,L121be8
    addiu a1,a1,16
    b L121c84
    .word 0x00a0202d
L121c14:
    .word 0xdca30000
    .word 0x3c048080
    ori a0,a0,0x8080
    dsll a0,a0,0x10
    ori a0,a0,0x8080
    dsll a0,a0,0x10
    ori a0,a0,0x8080
    dsubu v0,v1,v0
    nor v1,zero,v1
    and v0,v0,v1
    and v0,v0,a0
    bnezl v0,L121c84
    .word 0x00a0202d
    .word 0x3c060101
    ori a2,a2,0x101
    dsll a2,a2,0x10
    ori a2,a2,0x101
    dsll a2,a2,0x10
    ori a2,a2,0x101
    addiu a1,a1,8
L121c64:
    .word 0xdca20000
    nor v1,zero,v0
    dsubu v0,v0,a2
    and v0,v0,v1
    and v0,v0,a0
    beqzl v0,L121c64
    addiu a1,a1,8
    .word 0x00a0202d
L121c84:
    .word 0x80820000
    nop
    nop
    nop
    nop
    bnezl v0,L121c84
    addiu a0,a0,1
    jr ra
    subu v0,a0,a3
}
