extern void func_00111a70(void);
extern void func_00111ab8(void);
extern void func_001dd1d0(void);
extern void func_001df850(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,16(sp)
    .word 0x70001628
    sq s0,0(sp)
    negu a1,v0
    .word 0x70808628
    .word 0x3c028800
    jal func_001dd1d0
    ori a0,v0,0x501
    lbu a0,40(s0)
    andi v0,a0,0x20
    sra v1,v0,0x5
    andi v0,a0,0x18
    sra v0,v0,0x2
    or v0,v1,v0
    sb v0,43(s0)
    lw v1,4(s0)
    lbu a0,43(s0)
    lw v0,-30768(gp)
    lw v1,36(v1)
    sll a0,a0,0x2
    addu v1,v1,a0
    lw a0,0(v1)
    beq v0,a0,L222d28
    nop
    dsll32 v0,a0,0x0
    dsrl32 v0,v0,0x0
    dsll32 v1,v0,0x0
    .word 0x3c025000
    or v1,v1,v0
    .word 0x70001628
    pcpyld v1,v0,v1
    lw v0,-31088(gp)
    sq v1,0(v0)
    lw v0,-31088(gp)
    sw a0,-30768(gp)
    addiu v0,v0,16
    sw v0,-31088(gp)
L222d28:
    lw a2,48(s0)
    lw a0,4(s0)
    .word 0x3c030200
    .word 0x3c020300
    .word 0x3c055000
    lw a2,0(a2)
    lw a0,32(a0)
    addiu s0,a2,24
    lwu a2,32(a2)
    or v1,a0,v1
    dsll32 v1,v1,0x0
    or v1,v1,v0
    dsll32 v0,a2,0x0
    or a1,v0,a1
    pcpyld v1,v1,a1
    lw v0,-31088(gp)
    ori a1,zero,61440
    dsll a1,a1,0x10
    .word 0x70002628
    sq v1,0(v0)
    lw v0,-31088(gp)
    addiu v0,v0,16
    sw v0,-31088(gp)
    pcpyld v1,a0,a1
    lw v0,-31088(gp)
    addiu a0,zero,1
    .word 0x70002e28
    sq v1,0(v0)
    lw v0,-31088(gp)
    addiu v0,v0,16
    jal func_001dd1d0
    sw v0,-31088(gp)
    jal func_00111a70
    nop
    lw v0,0(s0)
    addiu v0,v0,1
    jal func_00111ab8
    sw v0,0(s0)
    lw v1,4(s0)
    addiu v0,zero,1
    addiu v1,v1,1
    sw v1,4(s0)
    lw v1,4(s0)
    bne v1,v0,L222de8
    nop
    jal func_001df850
    .word 0x72002628
    nop
L222de8:
    lq ra,16(sp)
    lq s0,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,32
}
