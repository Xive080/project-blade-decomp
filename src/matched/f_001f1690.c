extern void func_0010a530(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x3c095000
    sq ra,16(sp)
    .word 0x3c021000
    ori t1,t1,0x1
    sq s0,0(sp)
    ori t5,v0,0x1
    dsll32 t1,t1,0x0
    .word 0x70808628
    pcpyld t0,t1,t5
    daddiu v0,a2,15
    dsrl v0,v0,0x4
    dsll32 a0,v0,0x0
    addiu v1,s0,63
    addiu v0,zero,-64
    and a2,v1,v0
    dsra32 a0,a0,0x0
    .word 0x70801e28
    b L1f1790
    .word 0x70001628
L1f16e0:
    sq t0,0(a2)
    slti at,a0,32751
    bnez at,L1f1700
    addiu a2,a2,16
    addiu t3,zero,32750
    .word 0x70004e28
    b L1f1710
    addiu t4,zero,3
L1f1700:
    .word 0x70805e28
    .word 0x70004e28
    addiu t4,zero,3
    nop
L1f1710:
    sll t1,t1,0xf
    or t1,t3,t1
    dsll32 t2,t1,0x0
    .word 0x3c090800
    dsrl32 t2,t2,0x0
    dsll32 t1,t1,0x0
    or t5,t2,t1
    .word 0x70004e28
    pcpyld t1,t1,t5
    sq t1,0(a2)
    sll t1,t4,0x1c
    or t1,t3,t1
    dsll32 t2,t3,0x0
    dsll32 t3,a1,0x0
    dsll32 t1,t1,0x0
    dsrl32 t3,t3,0x0
    dsrl32 t1,t1,0x0
    dsll32 t3,t3,0x0
    or t5,t3,t1
    dsrl32 t2,t2,0x0
    .word 0x3c095000
    or t1,t2,t1
    dsll32 t1,t1,0x0
    addiu a2,a2,16
    pcpyld t1,t1,t5
    sq t1,0(a2)
    .word 0x3c090007
    ori t1,t1,0xfee0
    addiu a2,a2,16
    addu a1,a1,t1
    addiu a0,a0,-32750
    addiu v0,v0,1
L1f1790:
    .word 0x3c098012
    addiu t3,v1,32749
    ori t1,t1,0x289
    mult t1,t3
    srl t2,t3,0x1f
    nop
    mfhi t1
    addu t1,t1,t3
    sra t1,t1,0xe
    addu t1,t1,t2
    slt t1,v0,t1
    bnez t1,L1f16e0
    nop
    beqz a3,L1f17d8
    ori t5,zero,61440
    .word 0x3c026000
    b L1f17e0
    ori t5,v0,0x2
L1f17d8:
    dsll t5,t5,0x10
    ori t5,t5,0x2
L1f17e0:
    .word 0x3c095000
    ori t1,t1,0x2
    dsll32 t1,t1,0x0
    pcpyld v0,t1,t5
    .word 0x3c0d1000
    dsll32 t5,t5,0x0
    sq v0,0(a2)
    ori t5,t5,0x8001
    addiu t1,zero,14
    addiu a2,a2,16
    pcpyld t1,t1,t5
    sq t1,0(a2)
    .word 0x3c010033
    lq a1,-2240(at)
    addiu a2,a2,16
    addiu v1,s0,63
    addiu v0,zero,-64
    and a0,v1,v0
    sq a1,0(a2)
    addiu a2,a2,16
    jal func_0010a530
    addiu a1,a2,127
    .word 0x72001628
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
