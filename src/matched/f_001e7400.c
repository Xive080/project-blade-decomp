asm void func(void) {
    .set noreorder
    .set noat
    lw v1,-30852(gp)
    lw v0,4(a1)
    beqz v0,L44
    addu v1,a1,v1
    lbu v0,35(a1)
    andi v0,v0,0x80
    beqz v0,L3c
    addiu v0,zero,1
    beqz v1,L3c
    nop
    lbu v0,22(v1)
    sra v0,v0,0x2
    addiu v0,v0,1
    b L4c
    sw v0,0(a0)
L3c:
    b L4c
    sw v0,0(a0)
L44:
    b L50
    .word 0x70001628
L4c:
    addiu v0,zero,1
L50:
    jr ra
    nop
}
