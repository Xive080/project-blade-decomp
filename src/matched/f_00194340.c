extern void func_00114cf8(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0010
    .word 0x7fb00000
    lw v1,-31560(gp)
    .word 0x70a08628
    addiu a1,zero,-1
    addiu v0,zero,5
    sw a1,40(sp)
    beqz v1, L194374
    sw a1,44(sp)
    lw v1,484(a0)
    bnez v1, L19437c
    nop
L194374:
    b L1944a8
    addiu v0,zero,5
L19437c:
    beqz s0, L1944a8
    nop
    lw v0,1388(s0)
    blez v0, L1944a8
    addiu v0,zero,1
    addiu a0,zero,1
    addiu a1,sp,40
    jal func_00114cf8
    addiu a2,sp,44
    bltz v0, L194494
    nop
    lw a0,40(sp)
    addiu v1,zero,4
    beq a0,v1, L194458
    nop
    addiu v1,zero,6
    beq a0,v1, L19440c
    nop
    addiu v1,zero,5
    beq a0,v1, L1943d8
    nop
    b L194488
    sw zero,1408(s0)
L1943d8:
    blez v0, L194404
    addiu v0,zero,2
    lw a0,1400(s0)
    lw v1,44(sp)
    addiu v0,zero,1
    addu v1,a0,v1
    sw v1,1400(s0)
    sw zero,1408(s0)
    b L1944a8
    sw zero,1388(s0)
    addiu v0,zero,2
L194404:
    b L1944a8
    nop
L19440c:
    blez v0, L194450
    addiu v0,zero,3
    lw v1,1400(s0)
    lw v0,44(sp)
    addu v0,v1,v0
    sw v0,1400(s0)
    lw v1,1400(s0)
    lw v0,1396(s0)
    slt at,v0,v1
    beqz at, L19443c
    nop
    sw v1,1396(s0)
L19443c:
    sw zero,1408(s0)
    addiu v0,zero,1
    b L1944a8
    sw zero,1388(s0)
    addiu v0,zero,3
L194450:
    b L1944a8
    nop
L194458:
    blez v0, L19447c
    .word 0x70601628
    lw v1,1408(s0)
    addiu v0,zero,1
    sw v1,1400(s0)
    sw zero,1408(s0)
    b L1944a8
    sw zero,1388(s0)
    .word 0x70601628
L19447c:
    b L1944a8
    nop
    sw zero,1408(s0)
L194488:
    addiu v0,zero,1
    b L1944a8
    sw zero,1388(s0)
L194494:
    sw zero,1408(s0)
    addiu v0,zero,1
    b L1944a8
    sw zero,1388(s0)
    addiu v0,zero,1
L1944a8:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
