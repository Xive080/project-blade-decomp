extern void func_002385b0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lwc1 f0,0(a1)
    .word 0x70e08e28
    .word 0x70c08628
    jal func_002385b0
    cvt.s.w f12,f0
    .word 0x46000024
    addiu v1,zero,3
    mfc1 a0,f0
    beq s1,v1,L238728
    addiu v1,zero,2
    beq s1,v1,L238718
    addiu v1,zero,1
    beq s1,v1,L238710
    nop
    b L238738
    lq ra,32(sp)
L238710:
    b L238734
    sw a0,0(s0)
L238718:
    lw v1,0(s0)
    addu v1,v1,a0
    b L238734
    sw v1,0(s0)
L238728:
    lw v1,0(s0)
    mult v1,v1,a0
    sw v1,0(s0)
L238734:
    lq ra,32(sp)
L238738:
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
