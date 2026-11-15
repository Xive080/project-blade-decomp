extern void func_0011ec80(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    .word 0x70808628
    lhu v1,2(s0)
    lw a0,4(a0)
    .word 0x70002e28
    sll v0,v1,0x1
    addu v0,v0,v1
    jal func_0011ec80
    sll a2,v0,0x2
    lhu v0,2(s0)
    lw a0,8(s0)
    .word 0x70002e28
    jal func_0011ec80
    sll a2,v0,0x2
    lhu v1,0(s0)
    andi v1,v1,0x7fff
    sh v1,0(s0)
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
