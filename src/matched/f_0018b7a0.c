extern void func_001c2510(void);
extern void func_001c2520(void);
extern void func_001c36f0(void);
asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c020031
    addiu v0,v0,-24960
    addiu sp,sp,-16
    ori v1,zero,34880
    addu v0,v0,v1
    .word 0x7fbf0000
    jal func_001c2510
    .word 0x8c440000
    jal func_001c36f0
    paddub a0,v0,zero
    .word 0x3c010031
    jal func_001c2520
    .word 0x8c2426c0
    .word 0x3c010031
    .word 0xac2026c0
    .word 0x7bbf0000
    jr ra
    addiu sp,sp,16
}
