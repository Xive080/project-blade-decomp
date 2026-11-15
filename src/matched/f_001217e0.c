extern void func_00121a58(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fb00000
    .word 0x0080802d
    andi v0,s0,0x7
    bnez v0,L1218d4
    .word 0x7fbf0010
    andi v0,s0,0xf
    .word 0x3c030101
    ori v1,v1,0x101
    dsll v1,v1,0x10
    ori v1,v1,0x101
    dsll v1,v1,0x10
    ori v1,v1,0x101
    .word 0x3c048080
    ori a0,a0,0x8080
    dsll a0,a0,0x10
    ori a0,a0,0x8080
    dsll a0,a0,0x10
    ori a0,a0,0x8080
    bnez v0,L121890
    .word 0xde060000
    .word 0x7a020000
    pcpyld a3,v1,v1
    pcpyld t0,a0,a0
    psubb v1,v0,a3
    pnor v0,zero,v0
    pand v1,v1,v0
    pand v1,v1,t0
    pcpyud v0,v1,v1
    or v1,v0,v1
    bnez v1,L1218d4
    .word 0x0200202d
    addiu a2,a0,16
L121864:
    .word 0x78c20000
    pnor v1,zero,v0
    psubb v0,v0,a3
    pand v0,v0,v1
    pand v0,v0,t0
    pcpyud v1,v0,v0
    or v0,v0,v1
    beqzl v0,L121864
    addiu a2,a2,16
    b L1218d4
    .word 0x00c0202d
L121890:
    .word 0x0060382d
    .word 0x0080402d
    dsubu v1,a2,v1
    nor v0,zero,a2
    and v1,v1,v0
    and v1,v1,a0
    bnez v1,L1218d4
    .word 0x0200202d
    addiu a2,s0,8
L1218b4:
    .word 0xdcc20000
    nor v1,zero,v0
    dsubu v0,v0,a3
    and v0,v0,v1
    and v0,v0,t0
    beqzl v0,L1218b4
    addiu a2,a2,8
    .word 0x00c0202d
L1218d4:
    .word 0x80820000
    nop
    nop
    nop
    nop
    bnezl v0,L1218d4
    addiu a0,a0,1
    jal func_00121a58
    nop
    .word 0x0200102d
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
