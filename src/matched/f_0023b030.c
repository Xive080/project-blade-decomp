extern void func_001c8130(void);
extern void func_0023de70(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    .word 0x3c02002e
    addiu s0,v0,31616
    .word 0x8e020004
    bnez v0,L23b094
    .word 0x70808e28
    addiu a0,zero,144
    addiu a1,zero,50
    jal func_001c8130
    addiu a2,zero,16
    sw v0,8(s0)
    lw v0,8(s0)
    bnez v0,L23b07c
    .word 0x70001628
    b L23b0a8
    lq ra,32(sp)
L23b07c:
    jal func_0023de70
    nop
    bnez v0,L23b094
    .word 0x70001628
    b L23b0a4
    nop
L23b094:
    lw v1,4(s0)
    .word 0x72201628
    addiu v1,v1,1
    sw v1,4(s0)
L23b0a4:
    lq ra,32(sp)
L23b0a8:
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
