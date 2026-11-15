extern void func_0010ac18(void);
asm void f(void) {
    .set noreorder
    .set noat
    .word 0x8c850034
    .word 0x8ca60040
    .word 0x8cc2000c
    bnezl v0,L10cd54
    .word 0x8cc20010
    b L10cd58
    .word 0xacc5000c
L10cd54:
    .word 0xac45003c
L10cd58:
    .word 0xacc50010
    .word 0x8c820014
    .word 0x8c83001c
    .word 0xaca20020
    .word 0xaca3001c
    .word 0x8c820020
    .word 0xaca20024
    .word 0x8c830024
    .word 0xaca3000c
    .word 0x8c820028
    .word 0xaca20028
    .word 0x8c83002c
    .word 0xaca3002c
    .word 0x8c820030
    .word 0xaca20030
    .word 0x8c830010
    .word 0xaca30034
    .word 0x8cc40000
    bltz a0,L10cdbc
    nop
    .word 0x8cc20004
    bnez v0,L10cdbc
    nop
    j func_0010ac18
    nop
L10cdbc:
    jr ra
    nop
}
