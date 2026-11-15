extern void func_0013b550(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s0,a0,zero
    .word 0x8c840034
    .word 0x8cc30000
    bne a0,v1,L236ccc
    nop
    .word 0x8cd10008
    .word 0x8cc20004
    .word 0xae0200b8
    .word 0x8f848328
    jal func_0013b550
    paddub a1,zero,zero
    bne s1,v0,L236c6c
    nop
    b L236c70
    .word 0xae0000e4
L236c6c:
    .word 0xae1100e4
L236c70:
    .word 0xae0000bc
    .word 0xae0000c0
    .word 0xae0000c4
    .word 0xc60100c8
    mtc1 zero,$f0
    nop
    c.le.s $f1,$f0
    nop
    bc1t L236c9c
    nop
    .word 0xae0000c8
L236c9c:
    .word 0x3c03002e
    addiu v1,v1,30224
    .word 0xae0000cc
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe60300d0
    .word 0xe60200d4
    .word 0xe60100d8
    .word 0xe60000dc
    .word 0xae0000e0
L236ccc:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
