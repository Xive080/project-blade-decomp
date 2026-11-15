extern void func_001895d0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    sq ra,16(sp)
    .word 0x3c023e19
    sq s0,0(sp)
    ori v0,v0,0x999a
    sw v0,64(sp)
    .word 0x3c023f80
    sw v0,68(sp)
    addiu v0,zero,1
    sw v0,72(sp)
    sw zero,76(sp)
    addiu v0,zero,9
    sw zero,80(sp)
    sw v0,32(sp)
    .word 0x3c0243c8
    sw v0,36(sp)
    .word 0x3c0238d1
    sw zero,40(sp)
    ori v0,v0,0xb717
    sw v0,52(sp)
    sw zero,60(sp)
    .word 0x70a08628
    lw a0,52(a1)
    .word 0x3c020023
    addiu a2,v0,15312
    .word 0x72003e28
    jal func_001895d0
    addiu a1,sp,32
    sw v0,60(s0)
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,96
}
