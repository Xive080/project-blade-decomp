extern void func_001d4970(void);
extern void func_001d5260(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-16
    lui v0,0x33
    .word 0x7fbf0000
    addiu v0,v0,-23008
    lw a1,0(v0)
    lw v1,20(a1)
    addiu v0,zero,1
    beq v1,v0,L1
    nop
    jal func_001d4970
    nop
    b L2
    .word 0x7bbf0000
L1:
    jal func_001d5260
    nop
    .word 0x7bbf0000
L2:
    jr ra
    addiu sp,sp,16
}
