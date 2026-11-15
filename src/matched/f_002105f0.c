extern void func_0011ec80(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    lw s0,20(a0)
    .word 0x70002e28
    addiu a2,zero,12
    jal func_0011ec80
    .word 0x72002628
    sw zero,4(s0)
    addiu v0,zero,481
    sw v0,0(s0)
    sw zero,8(s0)
    lq ra,16(sp)
    lq s0,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,32
}
