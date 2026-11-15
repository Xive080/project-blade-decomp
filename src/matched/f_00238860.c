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
    beq s1,v1,L2388bc
    addiu v1,zero,2
    beq s1,v1,L2388ac
    addiu v1,zero,1
    beq s1,v1,L2388a4
    nop
    b L2388cc
    lq ra,32(sp)
L2388a4:
    b L2388c8
    swc1 f0,0(s0)
L2388ac:
    lwc1 f1,0(s0)
    add.s f0,f1,f0
    b L2388c8
    swc1 f0,0(s0)
L2388bc:
    lwc1 f1,0(s0)
    mul.s f0,f1,f0
    swc1 f0,0(s0)
L2388c8:
    lq ra,32(sp)
L2388cc:
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
