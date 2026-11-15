extern void func_0017e8d0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-192
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    sw a0,128(sp)
    sw a3,176(sp)
    lw s2,176(sp)
    lw v0,128(sp)
    lw s1,0(v0)
    lhu v0,2(s1)
    bnez v0,L12725c
    nop
    lw v0,128(sp)
    b L127464
    nop
L12725c:
    lw v1,12(s1)
    lw v0,-30544(gp)
    sw v1,16(v0)
    lw v0,-30544(gp)
    sw zero,128(v0)
    lhu v0,2(s1)
    andi v1,v0,0xffff
    lw v0,-30544(gp)
    sw v1,32(v0)
    .word 0x24020001
    lw a1,-30544(gp)
    lbu a0,1(a1)
    andi v1,v0,0x1
    addiu v0,zero,-2
    and v0,a0,v0
    or v0,v0,v1
    sb v0,1(a1)
    lw s0,4(s1)
    lui s3,0x7000
    .word 0x7000a628
    b L127370
    nop
L1272b4:
    lw v0,4(s0)
    sll v1,v0,0x4
    lw v0,12(s1)
    addu a2,v0,v1
    lw v0,8(s0)
    sll v1,v0,0x4
    lw v0,12(s1)
    addu a3,v0,v1
    lw v0,12(s0)
    sll v1,v0,0x4
    lw v0,12(s1)
    addu t0,v0,v1
    paddub a0,s2,zero
    addiu a1,s2,16
    addiu t1,sp,112
    jal func_0017e8d0
    nop
    beqz v0,L127368
    nop
    addiu v0,sp,124
    lw v1,4(s0)
    sll a0,v1,0x4
    lw v1,12(s1)
    addu a3,v1,a0
    lw v1,8(s0)
    sll a0,v1,0x4
    lw v1,12(s1)
    addu t0,v1,a0
    lw v1,12(s0)
    sll a0,v1,0x4
    lw v1,12(s1)
    addu t1,v1,a0
    lw a0,128(sp)
    paddub a1,s0,zero
    addiu a2,sp,112
    .word 0xc44c0000
    lw t2,32(s2)
    lw v0,36(s2)
    jalr ra,v0
    nop
    bnez v0,L127368
    nop
    .word 0x70001628
    b L127464
    nop
L127368:
    addiu s0,s0,16
    addiu s4,s4,1
L127370:
    lw v0,-30544(gp)
    lbu v0,1(v0)
    andi v0,v0,0x1
    beqz v0,L127398
    nop
    lhu v0,0(s1)
    andi v0,v0,0xffff
    slt v0,s4,v0
    bnez v0,L1272b4
    nop
L127398:
    paddub s5,s4,zero
    b L127448
    nop
L1273a4:
    lw v0,4(s0)
    sll v0,v0,0x4
    addu a2,s3,v0
    lw v0,8(s0)
    sll v0,v0,0x4
    addu a3,s3,v0
    lw v0,12(s0)
    sll v0,v0,0x4
    addu t0,s3,v0
    paddub a0,s2,zero
    addiu a1,s2,16
    addiu t1,sp,112
    jal func_0017e8d0
    nop
    beqz v0,L127440
    nop
    addiu v1,sp,124
    lw v0,4(s0)
    sll v0,v0,0x4
    addu a3,s3,v0
    lw v0,8(s0)
    sll v0,v0,0x4
    addu t0,s3,v0
    lw v0,12(s0)
    sll v0,v0,0x4
    addu t1,s3,v0
    lw a0,128(sp)
    paddub a1,s0,zero
    addiu a2,sp,112
    .word 0xc46c0000
    lw t2,32(s2)
    lw v0,36(s2)
    jalr ra,v0
    nop
    bnez v0,L127440
    nop
    .word 0x70001628
    b L127464
    nop
L127440:
    addiu s0,s0,16
    addiu s5,s5,1
L127448:
    lhu v0,0(s1)
    andi v0,v0,0xffff
    slt v0,s5,v0
    bnez v0,L1273a4
    nop
    lw v0,128(sp)
    nop
L127464:
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu sp,sp,192
    jr ra
    nop
}
