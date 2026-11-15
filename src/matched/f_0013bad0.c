extern void func_0013be20(void);
extern void func_001c36f0(void);
extern void func_00203d40(void);
extern void func_00203d70(void);
extern void func_00203d90(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70808628
    .word 0x8c840084
    beqzl a0,L13bb28
    .word 0x72002628
    jal func_00203d70
    nop
    .word 0x70408e28
    beqz s1,L13bb18
    nop
    .word 0x8e040084
    jal func_00203d40
    .word 0x70002e28
    jal func_001c36f0
    .word 0x72202628
L13bb18:
    jal func_00203d90
    .word 0x8e040084
    .word 0xae000084
    .word 0x72002628
L13bb28:
    jal func_0013be20
    nop
    .word 0xae00000c
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
