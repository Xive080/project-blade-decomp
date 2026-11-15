extern void sub(s32);
asm void first(void) {
    .set noreorder
    lui v0,0x33
    addiu v0,v0,-23008
    lw v0,304(v0)
    addiu a0,zero,12
    jr v0
    nop
    nop
    nop
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    paddub s0,a0,zero
    jal sub
    lw a0,132(a0)
    sw zero,132(s0)
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
