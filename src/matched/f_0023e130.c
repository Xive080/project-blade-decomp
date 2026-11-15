extern void func_00209ff0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v0,24(a0)
    .word 0x3c01002e
    lw a1,31952(at)
    lbu s0,2(v0)
    sltu v1,zero,a1
    beqz v1,L23e168
    .word 0x70808e28
    jalr ra,a1
    nop
    sltu v1,zero,v0
L23e168:
    addiu v0,zero,1
    bne v1,v0,L23e1ac
    andi v0,s0,0x80
    andi v0,s0,0x80
    beqz v0,L23e198
    .word 0x3c01002e
    .word 0x3c01002e
    lw a1,31652(at)
    jal func_00209ff0
    .word 0x72202628
    b L23e1dc
    .word 0x72201628
L23e198:
    lw a1,31648(at)
    jal func_00209ff0
    .word 0x72202628
    b L23e1d8
    nop
L23e1ac:
    beqz v0,L23e1cc
    .word 0x3c01002e
    .word 0x3c01002e
    lw a1,31636(at)
    jal func_00209ff0
    .word 0x72202628
    b L23e1d8
    nop
L23e1cc:
    lw a1,31632(at)
    jal func_00209ff0
    .word 0x72202628
L23e1d8:
    .word 0x72201628
L23e1dc:
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
