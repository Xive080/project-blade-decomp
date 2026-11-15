asm void f(void) {
    .set noreorder
    .set noat
    .word 0x0080502d
    addiu v0,zero,16
    .word 0x8d440000
    sllv t1,v0,a1
    sra v1,a0,0x1
    blez a2,L105320
    movn a0,v1,t0
    addiu v0,a2,-1
    addiu a0,a0,1
    sllv v0,v0,a1
    addu v0,v0,a3
    addu a0,a0,v0
    slt v1,a0,t1
    bnez v1,L105354
    sll v0,a0,0x1
    sll v0,t1,0x1
    b L105350
    subu a0,a0,v0
L105320:
    bgez a2,L105354
    sll v0,a0,0x1
    nor v0,zero,a2
    addiu a0,a0,-1
    sllv v0,v0,a1
    negu v1,t1
    addu v0,v0,a3
    subu a0,a0,v0
    slt v1,a0,v1
    beqz v1,L105350
    sll v0,t1,0x1
    addu a0,a0,v0
L105350:
    sll v0,a0,0x1
L105354:
    movz v0,a0,t0
    jr ra
    .word 0xad420000
}
