asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c02002e
    .word 0x8c42aac0
    bnezl v0,L107f90
    .word 0xac400028
L107f90:
    .word 0x3c02002e
    .word 0x8c42aacc
    bnezl v0,L107fa0
    .word 0xac400028
L107fa0:
    .word 0x3c02002e
    .word 0x8c42aad8
    bnezl v0,L107fb0
    .word 0xac400028
L107fb0:
    .word 0x3c02002e
    .word 0x8c42aac4
    bnezl v0,L107fc0
    .word 0xac400028
L107fc0:
    .word 0x3c02002e
    .word 0x8c42aad0
    bnezl v0,L107fd0
    .word 0xac400028
L107fd0:
    .word 0x3c02002e
    .word 0x8c42aadc
    bnezl v0,L107fe0
    .word 0xac400028
L107fe0:
    jr ra
    addiu v0,zero,1
}
