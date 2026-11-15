extern void func_00188f80(void);
extern void func_001892c0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw a0,16(a1)
    beqz a0,L22fbe4
    .word 0x70a08628
    lw v0,16(a0)
    addiu s1,v0,-2
    jal func_00188f80
    .word 0x72202e28
    lw a0,8(s0)
    beqz a0,L22fbd0
    nop
    jal func_00188f80
    .word 0x72202e28
L22fbd0:
    lw a0,12(s0)
    beqz a0,L22fbe4
    nop
    jal func_00188f80
    .word 0x72202e28
L22fbe4:
    lw a0,4(s0)
    lw v0,16(a0)
    jal func_00188f80
    addiu a1,v0,-2
    jal func_001892c0
    lw a0,36(s0)
    sw zero,36(s0)
    sw zero,32(s0)
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
