extern void func_00188ff0(void);
extern void func_00189650(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    .word 0x70808628
    addiu s2,s0,136
    .word 0x70008e28
L252890:
    lw v0,0(s2)
    beqzl v0,L2528bc
    addiu s1,s1,1
    jal func_00188ff0
    lw a0,4(s2)
    sw zero,4(s2)
    jal func_00188ff0
    lw a0,8(s2)
    sw zero,8(s2)
    sw zero,0(s2)
    addiu s1,s1,1
L2528bc:
    sltiu v0,s1,10
    bnez v0,L252890
    addiu s2,s2,12
    jal func_00189650
    lw a0,132(s0)
    sw zero,132(s0)
    sw zero,256(s0)
    sw zero,260(s0)
    sw zero,264(s0)
    sw zero,268(s0)
    sw zero,272(s0)
    lq ra,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
