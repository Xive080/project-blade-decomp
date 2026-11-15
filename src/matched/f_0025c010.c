extern void func_00188ff0(void);
extern void func_00189650(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70808628
    .word 0x26130088
    .word 0x70008e28
L25c038:
    .word 0x8e620000
    beqzl v0,L25c09c
    .word 0x26310001
    .word 0x70009628
    .word 0x7260a628
    nop
L25c050:
    .word 0x8e840004
    beqz a0,L25c068
    nop
    jal func_00188ff0
    nop
    .word 0xae800004
L25c068:
    .word 0x8e840024
    beqzl a0,L25c084
    .word 0x26520001
    jal func_00188ff0
    nop
    .word 0xae800024
    .word 0x26520001
L25c084:
    sltiu v0,s2,8
    bnez v0,L25c050
    .word 0x26940004
    .word 0xae600000
    nop
    .word 0x26310001
L25c09c:
    sltiu v0,s1,9
    bnez v0,L25c038
    .word 0x26730044
    jal func_00189650
    .word 0x8e040084
    .word 0xae000084
    .word 0xae0002ec
    .word 0xae0002f0
    .word 0xae0002f4
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
