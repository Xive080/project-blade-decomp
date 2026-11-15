extern void func_00188ff0(void);
extern void func_001892c0(void);
extern void func_00189650(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    .word 0x70808628
    b L2516a8
    addiu s1,s0,136
L25168c:
    jal func_00188ff0
    lw a0,0(s1)
    sw zero,0(s1)
    lw v0,184(s0)
    addiu s1,s1,4
    addiu v0,v0,-1
    sw v0,184(s0)
L2516a8:
    lw v0,184(s0)
    bnez v0,L25168c
    nop
    jal func_001892c0
    lw a0,188(s0)
    sw zero,188(s0)
    jal func_001892c0
    lw a0,192(s0)
    sw zero,192(s0)
    jal func_00189650
    lw a0,132(s0)
    sw zero,132(s0)
    sw zero,196(s0)
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
