extern void a1f(void);
extern void a2f(void);
asm void f(int d, void *s) {
    .set noreorder
    addiu sp,sp,-64
    sq ra,16(sp)
    sq s0,0(sp)
    lw v1,36(a1)
    b L3
    paddub s0,a0,zero
L1:
    lw a0,0(v1)
    beqz a0,L2
    nop
    lw v0,8(v1)
    sw v0,8(a0)
    nop
L2:
    lw a0,8(v1)
    beqz a0,L4
    nop
    lw v0,0(v1)
    sw v0,0(a0)
    nop
L4:
    sw zero,0(v1)
    sw zero,8(v1)
    addiu v1,v1,12
    nop
L3:
    lw v0,40(a1)
    sltu v0,v1,v0
    bnez v0,L1
    nop
    addiu v0,zero,-1
    sw v0,44(a1)
    lw v0,36(a1)
    paddub a0,a1,zero
    paddub a2,zero,zero
    addiu a1,sp,32
    jal a1f
    sw v0,60(sp)
    .word 0x3c020013
    addiu a3,sp,60
    addiu a1,sp,32
    addiu a2,v0,-18528
    jal a2f
    paddub a0,s0,zero
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
