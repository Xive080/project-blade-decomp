asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c060030
    .word 0x3c02002e
    addiu a2,a2,-31296
    addiu v0,v0,-10368
    .word 0xac860000
    .word 0xaca20000
    .word 0x3c04002e
    .word 0x3c02002f
    .word 0x8c83d784
    addiu v0,v0,28672
    jr ra
    .word 0xacc3003c
}
