asm void f(void) {
    .set noreorder
    .set noat
    .word 0x0080482d
    .word 0x00a0502d
    .word 0x81220000
    beqz v0,L12179c
    .word 0x91260000
    .word 0x3c0b002f
L121740:
    .word 0x81470000
    addiu v0,t3,-19647
    sll a2,a2,0x18
    sra a2,a2,0x18
    addu t0,a3,v0
    addu v0,a2,v0
    addiu a1,a2,32
    .word 0x90440000
    addiu v1,a3,32
    .word 0x91020000
    andi a0,a0,0x1
    andi v0,v0,0x1
    movz a1,a2,a0
    movz v1,a3,v0
    bnel a1,v1,L1217a4
    .word 0x91270000
    addiu t1,t1,1
    addiu t2,t2,1
    .word 0x81220000
    bnez v0,L121740
    .word 0x91260000
    b L1217a4
    .word 0x91270000
L12179c:
    .word 0x3c0b002f
    .word 0x91270000
L1217a4:
    addiu v0,t3,-19647
    .word 0x91460000
    addu t0,a3,v0
    addiu a1,a3,32
    addu v0,a2,v0
    .word 0x91030000
    .word 0x90440000
    addiu v0,a2,32
    andi v1,v1,0x1
    andi a0,a0,0x1
    movz a1,a3,v1
    movz v0,a2,a0
    jr ra
    subu v0,a1,v0
}
