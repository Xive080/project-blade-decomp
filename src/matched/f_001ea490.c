extern void func_0011fe10();
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c020033
    .word 0x70809628
    .word 0x70008628
    b L5
    .word 0x2451a620
L1:
    lw s3,0(v1)
    beq s3,v1,L3
    nop
    lw v0,0(s3)
    sw v0,0(v1)
    lw a0,16(s3)
    lw v0,308(s1)
    jalr ra,v0
    addiu s4,s1,308
    lw v0,0(s4)
    jalr ra,v0
    .word 0x72602628
    b L4
    lw v0,0(s2)
L3:
    lw a0,16(v1)
    lw v0,308(s1)
    jalr ra,v0
    addiu s3,s1,308
    lw v0,0(s3)
    jalr ra,v0
    lw a0,4(s2)
    sw zero,4(s2)
    lw v0,0(s2)
L4:
    addu s0,s0,v0
L5:
    lw v1,4(s2)
    bnez v1,L1
    nop
    lw v0,28(s2)
    beqz v0,L6
    .word 0x3c02002e
    .word 0x72003628
    .word 0x24444e40
    jal func_0011fe10
    .word 0x72402e28
L6:
    lw v0,308(s1)
    jalr ra,v0
    .word 0x72402628
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,96
}
