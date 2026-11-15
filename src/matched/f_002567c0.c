extern void func_00188ff0(void);
extern void func_001892c0(void);
extern void func_00189650(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    .word 0x70808e28
    jal func_00188ff0
    lw a0,136(a0)
    sw zero,136(s1)
    jal func_00188ff0
    lw a0,140(s1)
    sw zero,140(s1)
    jal func_00188ff0
    lw a0,144(s1)
    sw zero,144(s1)
    jal func_00188ff0
    lw a0,148(s1)
    sw zero,148(s1)
    jal func_00188ff0
    lw a0,172(s1)
    sw zero,172(s1)
    jal func_00188ff0
    lw a0,176(s1)
    sw zero,176(s1)
    jal func_00188ff0
    lw a0,180(s1)
    sw zero,180(s1)
    jal func_00188ff0
    lw a0,184(s1)
    sw zero,184(s1)
    lw a0,152(s1)
    beqz a0,L256850
    nop
    jal func_00188ff0
    nop
    sw zero,152(s1)
L256850:
    lw a0,156(s1)
    beqz a0,L25686c
    .word 0x70008628
    jal func_00188ff0
    nop
    sw zero,156(s1)
    .word 0x70008628
L25686c:
    .word 0x72209628
L256870:
    lw a0,160(s2)
    beqzl a0,L25688c
    addiu s0,s0,1
    jal func_00188ff0
    nop
    sw zero,160(s2)
    addiu s0,s0,1
L25688c:
    sltiu v0,s0,3
    bnez v0,L256870
    addiu s2,s2,4
    jal func_001892c0
    lw a0,188(s1)
    sw zero,188(s1)
    jal func_00189650
    lw a0,132(s1)
    sw zero,132(s1)
    lq ra,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
