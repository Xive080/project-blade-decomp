extern void func_001c9990(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    .word 0x70e04628
    lw a3,8(a0)
    addiu v0,zero,255
    lbu v1,0(a3)
    bne v1,v0,L21e988
    .word 0x70a08628
    .word 0x70e02628
    jal func_001c9990
    addiu a3,zero,1
    b L21e9d4
    sw v0,0(s0)
L21e988:
    lw v0,36(a0)
    beqz v0,L21e9a4
    .word 0x70e02628
    jal func_001c9990
    addiu a3,zero,1
    b L21e9d4
    sw v0,0(s0)
L21e9a4:
    lw a0,24(a3)
    lw v0,76(a0)
    andi v0,v0,0x2
    beqz v0,L21e9c8
    addiu a3,zero,1
    jal func_001c9990
    .word 0x70003e28
    b L21e9d4
    sw v0,0(s0)
L21e9c8:
    jal func_001c9990
    nop
    sw v0,0(s0)
L21e9d4:
    lw v0,0(s0)
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
