asm int f(char *a, char *b) {
    .set noreorder
    or t0,a0,a1
    andi v0,t0,0x7
    bnezl v0,L121a40
    lb v0,0(a0)
    andi t1,t0,0xf
    lui a3,0x101
    ori a3,a3,0x101
    dsll a3,a3,0x10
    ori a3,a3,0x101
    dsll a3,a3,0x10
    ori a3,a3,0x101
    lui a2,0x8080
    ori a2,a2,0x8080
    dsll a2,a2,0x10
    ori a2,a2,0x8080
    dsll a2,a2,0x10
    ori a2,a2,0x8080
    bnez t1,L1219d4
    ld v0,0(a1)
    lq v1,0(a0)
    pcpyld t0,a3,a3
    lq v0,0(a1)
    pcpyld t2,a2,a2
    psubw a3,v0,v1
    pcpyud a2,a3,a0
    or v1,a2,a3
    bnezl v1,L121a40
    lb v0,0(a0)
    lq v0,0(a0)
    pnor v1,zero,v0
L121988:
    psubb v0,v0,t0
    pand v0,v0,v1
    pand v0,v0,t2
    pcpyud v1,v0,a0
    or a2,v1,v0
    beqz a2,L1219ac
    addiu a0,a0,16
    jr ra
    move v0,zero
L1219ac:
    addiu a1,a1,16
    lq v0,0(a0)
    lq v1,0(a1)
    psubw a3,v0,v1
    pcpyud a2,a3,a0
    or t1,a2,a3
    beqzl t1,L121988
    pnor v1,zero,v0
    b L121a40
    lb v0,0(a0)
L1219d4:
    ld v1,0(a0)
    bnel v1,v0,L121a40
    lb v0,0(a0)
    ld v0,0(a0)
    nor t0,zero,v0
L1219e8:
    dsubu v0,v0,a3
    and v0,v0,t0
    and v0,v0,a2
    beqz v0,L121a04
    addiu a0,a0,8
    jr ra
    move v0,zero
L121a04:
    addiu a1,a1,8
    ld v0,0(a0)
    ld v1,0(a1)
    beql v1,v0,L1219e8
    nor t0,zero,v0
    b L121a40
    lb v0,0(a0)
L121a20:
    sll v0,v1,0x18
    lb v1,0(a1)
    sra v0,v0,0x18
    bnel v0,v1,L121a48
    lbu v1,0(a0)
    addiu a0,a0,1
    addiu a1,a1,1
    lb v0,0(a0)
L121a40:
    bnez v0,L121a20
    lbu v1,0(a0)
L121a48:
    lbu v0,0(a1)
    jr ra
    subu v0,v1,v0
}
