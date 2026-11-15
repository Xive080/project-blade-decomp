extern void func_002085e0(void);
extern void func_00208760(void);
extern void func_00209f30(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    jal func_002085e0
    .word 0x70808628
    jal func_00208760
    .word 0x70402628
    andi v0,v0,0x80
    beqz v0,L23e110
    .word 0x3c01002e
    .word 0x3c01002e
    lw a1,31644(at)
    jal func_00209f30
    .word 0x72002628
    b L23e120
    .word 0x72001628
L23e110:
    lw a1,31640(at)
    jal func_00209f30
    .word 0x72002628
    .word 0x72001628
L23e120:
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
