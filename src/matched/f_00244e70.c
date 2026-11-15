extern void func_001a4c60(void);
extern void func_002429e0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,16(sp)
    sq s0,0(sp)
    .word 0x3c017000
    addiu a2,zero,2
    lw s0,16340(at)
    .word 0x70c01628
    beqz v0,L244ef8
    addiu a2,a2,-1
    sll v0,a2,0x2
    addu a3,s0,v0
    .word 0x3c020030
    addiu a1,v0,-23712
    .word 0x3c020033
    addiu v1,v0,11184
L244eac:
    sll v0,a2,0x3
    addu v0,v0,a2
    lwc1 f3,0(v1)
    sll v0,v0,0x1
    addu v0,v0,a2
    lwc1 f2,4(v1)
    sll v0,v0,0x2
    addu a0,a1,v0
    lwc1 f1,8(v1)
    lwc1 f0,12(v1)
    .word 0x70c01628
    addiu a2,a2,-1
    swc1 f3,44(a0)
    swc1 f2,48(a0)
    swc1 f1,52(a0)
    swc1 f0,56(a0)
    sw zero,44(a3)
    bnez v0,L244eac
    addiu a3,a3,-4
L244ef8:
    .word 0x3c024270
    addiu a0,zero,1
    jal func_001a4c60
    sw v0,8(s0)
    .word 0x3c010033
    lw v0,11336(at)
    addiu a1,zero,5
    .word 0x3c010033
    sw v0,11332(at)
    lw v0,64(s0)
    .word 0x3c010033
    sw v0,11336(at)
    lw v0,0(s0)
    lw v0,24(v0)
    jalr ra,v0
    .word 0x72002628
    .word 0x3c02002f
    addiu v0,v0,-32000
    lq v0,0(v0)
    addiu a1,sp,32
    .word 0x72002628
    jal func_002429e0
    .word 0x7ca20000
    .word 0x3c010030
    lw s0,28552(at)
    addiu a1,zero,8
    lw v1,60(s0)
    beq v1,a1,L244fac
    nop
    lw v1,16(s0)
    andi v1,v1,0x2
    bnez v1,L244fac
    nop
    lw v0,12(s0)
    lw v0,16(v0)
    jalr ra,v0
    .word 0x72002628
    beqz v0,L244fac
    nop
    lw v0,12(s0)
    addiu a1,zero,8
    .word 0x72002628
    lw v0,20(v0)
    jalr ra,v0
    .word 0x70003628
L244fac:
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
