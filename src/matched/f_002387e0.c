extern void func_002385b0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lwc1 f12,0(a1)
    .word 0x70e08e28
    jal func_002385b0
    .word 0x70c08628
    addiu v1,zero,3
    beq s1,v1,L23883c
    addiu v1,zero,2
    beq s1,v1,L23882c
    addiu v1,zero,1
    beq s1,v1,L238824
    nop
    b L23884c
    lq ra,32(sp)
L238824:
    b L238848
    swc1 f0,0(s0)
L23882c:
    lwc1 f1,0(s0)
    add.s f0,f1,f0
    b L238848
    swc1 f0,0(s0)
L23883c:
    lwc1 f1,0(s0)
    mul.s f0,f1,f0
    swc1 f0,0(s0)
L238848:
    lq ra,32(sp)
L23884c:
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
