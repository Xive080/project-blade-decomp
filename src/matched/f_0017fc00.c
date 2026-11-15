asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c82002c
    .word 0x70a08e28
    slti at,v0,2
    bnez at,L17fc4c
    .word 0x70808628
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c42013c
    addiu a1,zero,64
    jalr ra,v0
    .word 0x72202628
    .word 0xae02004c
    .word 0xae110050
    b L17fc50
    .word 0x8e02004c
L17fc4c:
    .word 0x70001628
L17fc50:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
