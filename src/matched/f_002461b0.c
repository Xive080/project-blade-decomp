extern void sub1(void);
extern void sub2(void);
asm void first(void) {
    .set noreorder
    lui v0,0x24
    addiu v0,v0,25200
    lui at,0x33
    sw v0,11808(at)
    lui v0,0x24
    addiu v0,v0,25152
    .word 0x3c010033
    sw v0,11812(at)
    lui v0,0x24
    addiu v0,v0,25088
    .word 0x3c010033
    sw v0,11816(at)
    .word 0x3c020033
    addiu v0,v0,11808
    .word 0x3c010033
    addiu a1,gp,-30260
    addiu a0,zero,11
    sw v0,-30260(gp)
    j sub1
    sw zero,11820(at)
    addiu sp,sp,-16
    sq ra,0(sp)
    jal sub2
    nop
    lui at,0x7000
    lw a0,16340(at)
    beqz a0,L1
    nop
    lw v0,0(a0)
    lw v0,8(v0)
    jalr ra,v0
    addiu a1,zero,-1
L1:
    lq ra,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,16
}
