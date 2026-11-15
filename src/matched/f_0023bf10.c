extern void func_001bf050(void);
extern void func_001ca2d0(void);
extern void func_0023c510(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    .word 0x70c08628
    .word 0x70808e28
    addiu a1,sp,60
    jal func_001ca2d0
    addiu a2,zero,4
    bnez v0,L23bf44
    addiu a0,sp,60
    b L23bf64
    .word 0x70001628
L23bf44:
    jal func_001bf050
    addiu a1,zero,4
    lw v0,60(sp)
    beqz v0,L23bf64
    .word 0x72201628
    jal func_0023c510
    .word 0x72002628
    .word 0x72201628
L23bf64:
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
