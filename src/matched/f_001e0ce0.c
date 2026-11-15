extern void func_001bf260();
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70c08628
    addiu a2,zero,4
    bne a1,a2,L48
    .word 0x70808e28
    beqz s0,L4c
    .word 0x70001628
    lw v0,0(s0)
    beqz v0,L48
    addiu a1,sp,60
    jal func_001bf260
    nop
    beqz v0,L40
    .word 0x70001628
    lw a0,0(s0)
    lw v1,-30852(gp)
    lh a1,60(sp)
    .word 0x72201628
    addu v1,a0,v1
    b L4c
    sh a1,20(v1)
L40:
    b L50
    .word 0x7bbf0020
L48:
    .word 0x70001628
L4c:
    .word 0x7bbf0020
L50:
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
