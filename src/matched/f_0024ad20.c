extern void func_001bf190(void);
extern void func_001ca470(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v1,-32104(gp)
    addiu v0,zero,1
    addiu a1,sp,60
    .word 0x70808e28
    addu v1,a2,v1
    lw s0,0(v1)
    addiu a2,zero,4
    movz v0,zero,s0
    jal func_001bf190
    sw v0,60(sp)
    bnez v0,L68
    .word 0x70001628
    b L94
    lq ra,32(sp)
L68:
    lw v0,60(sp)
    bnez v0,L7c
    addiu a2,zero,32
    b L90
    .word 0x72201628
L7c:
    .word 0x72002e28
    jal func_001ca470
    .word 0x72202628
    movz s1,zero,v0
    .word 0x72201628
L90:
    lq ra,32(sp)
L94:
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
