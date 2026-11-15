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
    .word 0x46000024
    addiu v1,zero,3
    mfc1 a0,f0
    beq s1,v1,L2387b4
    addiu v1,zero,2
    beq s1,v1,L2387a4
    addiu v1,zero,1
    beq s1,v1,L23879c
    nop
    b L2387c4
    lq ra,32(sp)
L23879c:
    b L2387c0
    sw a0,0(s0)
L2387a4:
    lw v1,0(s0)
    addu v1,v1,a0
    b L2387c0
    sw v1,0(s0)
L2387b4:
    lw v1,0(s0)
    mult v1,v1,a0
    sw v1,0(s0)
L2387c0:
    lq ra,32(sp)
L2387c4:
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
