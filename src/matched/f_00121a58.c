asm void f(void) {
    .set noreorder
    .set noat
    .word 0x0080382d
    or t0,a1,a3
    andi v0,t0,0x7
    bnez v0,L121b48
    .word 0x00e0182d
    andi v0,t0,0xf
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
    bnezl v0,L121b08
    .word 0xdcaa0000
    pcpyld t2,t1,t1
    .word 0x78a90000
    pcpyld t0,a0,a0
    psubb v0,t1,t2
    pnor v1,zero,t1
    pand v0,v0,v1
    pand v0,v0,t0
    pcpyud a0,v0,t1
    or v1,v0,a0
    bnez v1,L121b44
    .word 0x00e0302d
L121ad4:
    .word 0x7cc90000
    addiu a1,a1,16
    .word 0x78a90000
    psubb v0,t1,t2
    pnor v1,zero,t1
    pand v0,v0,v1
    pand v0,v0,t0
    pcpyud a0,v0,t1
    or v1,v0,a0
    beqz v1,L121ad4
    addiu a2,a2,16
    b L121b48
    .word 0x00c0182d
L121b08:
    dsubu v0,t2,t1
    nor v1,zero,t2
    and v0,v0,v1
    and v0,v0,a0
    bnez v0,L121b44
    .word 0x00e0302d
L121b20:
    .word 0xfcca0000
    addiu a1,a1,8
    .word 0xdcaa0000
    nor v0,zero,t2
    dsubu v1,t2,t1
    and v1,v1,v0
    and v1,v1,a0
    beqz v1,L121b20
    addiu a2,a2,8
L121b44:
    .word 0x00c0182d
L121b48:
    .word 0x90a20000
    addiu a1,a1,1
    .word 0xa0620000
    sll v0,v0,0x18
    nop
    bnez v0,L121b48
    addiu v1,v1,1
    jr ra
    .word 0x00e0102d
}
