extern void func_001ea6e0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    sq ra,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    .word 0x70809e28
    lw a0,-31104(gp)
    .word 0x70c08e28
    .word 0x70a09628
    .word 0x70e08628
    addiu a1,s1,24
    jal func_001ea6e0
    addiu a2,zero,2
    sw v0,0(s2)
    lw v0,0(s2)
    sw zero,4(v0)
    lw v0,0(s2)
    sw zero,0(v0)
    lw v1,8(s3)
    lw v0,0(s2)
    sw v1,12(v0)
    lw v0,0(s2)
    sw s1,8(v0)
    lw v0,0(s2)
    sw zero,16(v0)
    lw v0,0(s2)
    sw s0,20(v0)
    lw v0,0(s2)
    bnez v0,L21d4b0
    nop
    .word 0x70001628
L21d4b0:
    lq ra,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,80
}
