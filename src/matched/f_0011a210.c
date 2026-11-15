asm void f(void) {
    .set noreorder
    .set noat
    mfc1 v1,$f12
    .word 0x0060102d
    .word 0x3c047fff
    ori a0,a0,0xffff
    .word 0x3c037f80
    and v0,v0,a0
    subu v0,v1,v0
    jr ra
    srl v0,v0,0x1f
}
