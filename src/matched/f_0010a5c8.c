asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c07ffff
    .word 0x0000302d
    ori a3,a3,0xf000
    nop
L10a5d8:
    sync
    cache 0x10,0(a2)
    sync
    mfc0 v0,$28
    and v0,v0,a3
    addu v0,v0,a2
    sltu v1,a1,v0
    sltu v0,v0,a0
    bnez v0,L10a614
    nop
    bnez v1,L10a614
    nop
    sync
    cache 0x16,0(a2)
    sync
L10a614:
    sync
    cache 0x10,1(a2)
    sync
    mfc0 v0,$28
    and v0,v0,a3
    addu v0,v0,a2
    sltu v1,a1,v0
    sltu v0,v0,a0
    bnez v0,L10a650
    nop
    bnez v1,L10a650
    nop
    sync
    cache 0x16,1(a2)
    sync
L10a650:
    sync
    addiu a2,a2,64
    slti v0,a2,4096
    bnez v0,L10a5d8
    nop
    jr ra
    nop
}
