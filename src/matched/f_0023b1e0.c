extern void func_0023b0e0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    addiu s2,gp,-30320
    .word 0x8e420000
    addu v0,a0,v0
    lw s1,0(v0)
    beqz s1,L23b23c
    .word 0x70808628
    jal func_0023b0e0
    .word 0x72202628
    .word 0x3c020033
    .word 0x3c01002e
    addiu v0,v0,-23008
    lw a0,31624(at)
    lw v0,324(v0)
    jalr ra,v0
    .word 0x72202e28
    lw v0,0(s2)
    addu v0,s0,v0
    sw zero,0(v0)
L23b23c:
    .word 0x72001628
    lq ra,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
