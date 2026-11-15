asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c02002e
    addiu a0,zero,3
    .word 0x8c43ac3c
    beq v1,a0,L106384
    .word 0x3c05002e
    .word 0x3c07002e
    .word 0x8ca4ac38
    .word 0x8ce3aa28
    beq a0,v1,L106384
    .word 0x00a0482d
    .word 0x3c08002e
    .word 0x8d02aa24
    beqz v0,L106350
    .word 0x0100302d
    .word 0x3c0a002e
    .word 0xad00aa24
    .word 0x8d42a9e8
    addiu v0,v0,1024
    b L106354
    .word 0xad42a9e8
L106350:
    .word 0x3c0a002e
L106354:
    slt v0,a0,v1
    beqz v0,L106374
    .word 0x3c03002e
    .word 0x8c62a9f0
    bnez v0,L106378
    .word 0x8d22ac38
    addiu v0,zero,1
    .word 0xacc2aa24
L106374:
    .word 0x8d22ac38
L106378:
    .word 0xac60a9f0
    b L10638c
    .word 0xace2aa28
L106384:
    .word 0x3c08002e
    .word 0x3c0a002e
L10638c:
    .word 0x8d43a9e8
    .word 0x3c06002e
    .word 0x8ca4ac38
    .word 0x8d02aa24
    addu a1,v1,a0
    beqz v0,L1063c4
    .word 0xacc5acf8
    .word 0x3c03002e
    .word 0x8c62aa28
    slt v0,v0,a0
    bnezl v0,L1063c8
    .word 0x3c05002e
    addiu v0,a1,1024
    .word 0xacc2acf8
L1063c4:
    .word 0x3c05002e
L1063c8:
    .word 0x8cc4acf8
    .word 0x8ca2a9ec
    slt v1,v0,a0
    movn v0,a0,v1
    jr ra
    .word 0xaca2a9ec
}
