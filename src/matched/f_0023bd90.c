extern void func_001ca470(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    lw v0,-30316(gp)
    .word 0x70808628
    addu a1,a2,v0
    jal func_001ca470
    addiu a2,zero,4
    bne zero,v0,L23bdbc
    nop
    .word 0x70008628
L23bdbc:
    .word 0x72001628
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
