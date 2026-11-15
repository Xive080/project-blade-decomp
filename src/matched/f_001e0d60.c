extern void func_001bf190();
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0010
    .word 0x7fb00000
    beqz a2,L48
    .word 0x70808628
    lw v1,0(a2)
    beqz v1,L4c
    .word 0x70001628
    lw v0,-30852(gp)
    addiu a1,sp,44
    addiu a2,zero,4
    addu v0,v1,v0
    lhu v0,20(v0)
    jal func_001bf190
    sw v0,44(sp)
    movz s0,zero,v0
    b L4c
    .word 0x72001628
L48:
    .word 0x70001628
L4c:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
