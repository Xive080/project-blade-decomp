asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c02001f
    .word 0x2443f140
    .word 0x3c020033
    .word 0x2444a620
    .word 0x3c02001f
    sw v1,40(a0)
    .word 0x2442f3f0
    sw v0,44(a0)
    .word 0x3c02001f
    .word 0x24420260
    sw v0,48(a0)
    .word 0x3c02001f
    .word 0x244211a0
    .word 0x0807bb00
    sw v0,52(a0)
    nop
    jr ra
    nop
}
