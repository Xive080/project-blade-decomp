asm void f(void) {
    .set noreorder
    .set noat
    mfc1 a1,$f12
    mfc1 a0,$f13
    .word 0x0080182d
    .word 0x3c027fff
    ori v0,v0,0xffff
    .word 0x3c048000
    and a1,a1,v0
    and v1,v1,a0
    or a1,a1,v1
    .word 0x44850000
    jr ra
    nop
}
