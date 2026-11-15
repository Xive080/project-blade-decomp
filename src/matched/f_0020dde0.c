extern void func_001d81c0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    lbu v0,2(a0)
    andi v0,v0,0x2
    beqz v0,L20de40
    .word 0x70808628
    lw v1,16(a1)
    lw v0,12(a1)
    bne v1,v0,L20de1c
    addiu v0,v1,8
    .word 0x70a02628
    jal func_001d81c0
    .word 0x70402e28
    .word 0x70402e28
L20de1c:
    lhu a0,2(a1)
    lw v1,16(a1)
    lw v0,4(a1)
    mult v1,a0,v1
    addu v0,v0,v1
    sw s0,0(v0)
    lw v0,16(a1)
    addiu v0,v0,1
    sw v0,16(a1)
L20de40:
    .word 0x72001628
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
