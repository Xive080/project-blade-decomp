extern void func_00109d00(void);
extern void func_00109d20(void);
extern void func_0010cdc8(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s0,16(sp)
    lw s0,0(a1)
    lw a0,-30184(gp)
    .word 0x3c010033
    lw v0,0(s0)
    jal func_00109d20
    sw v0,13760(at)
    .word 0x3c020033
    addiu a3,v0,13760
    .word 0x3c020033
    addiu a0,v0,13648
    addiu a1,zero,4
    addiu t0,zero,16
    .word 0x70003628
    .word 0x70004e28
    .word 0x70005628
    .word 0x70005e28
    jal func_0010cdc8
    sd zero,0(sp)
    jal func_00109d00
    lw a0,-30184(gp)
    addiu v0,zero,-1
    sw v0,0(s0)
    lq ra,32(sp)
    lq s0,16(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
