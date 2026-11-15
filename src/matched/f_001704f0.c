asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c030030
    addiu v1,v1,25212
    sll a1,a0,0x2
    addu v1,v1,a1
    .word 0x8c660000
    sll a0,a0,0x1
    .word 0x70001628
    .word 0x70002e28
    .word 0x3c030030
    addiu v1,v1,24688
    addu v1,v1,a0
    .word 0x9467028c
    b L170548
    .word 0x70c02628
L170528:
    .word 0x8c830000
    bnezl v1,L170544
    addiu a0,a0,4
    sll v0,a1,0x2
    b L170558
    addu v0,a2,v0
    addiu a0,a0,4
L170544:
    addiu a1,a1,1
L170548:
    slt v1,a1,a3
    bnez v1,L170528
    nop
    nop
L170558:
    jr ra
    nop
}
