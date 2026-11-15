extern void func_0011ec80(void);
extern void func_001c9840(void);
extern void func_00211390(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    sq ra,96(sp)
    sq s5,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw s1,0(a0)
    .word 0x70a09e28
    beqz s1,L20efa8
    .word 0x7080a628
    lw s2,0(s1)
    beq s2,s3,L20efa8
    .word 0x72401628
    beqz v0,L20ef90
    addiu s2,s2,-1
    sll v0,s2,0x2
    addu s0,s1,v0
L20ef3c:
    lw s5,4(s0)
    beqz s5,L20ef84
    .word 0x72401628
    lw v0,0(s5)
    bne zero,v0,L20ef78
    nop
    lw v0,4(s5)
    bne zero,v0,L20ef78
    .word 0x72a02628
    jal func_00211390
    nop
    jal func_001c9840
    .word 0x72a02628
    b L20ef80
    nop
L20ef78:
    sw zero,16(s5)
    nop
L20ef80:
    .word 0x72401628
L20ef84:
    addiu s0,s0,-4
    bnez v0,L20ef3c
    addiu s2,s2,-1
L20ef90:
    .word 0x3c020033
    addiu v0,v0,-23008
    lw v0,308(v0)
    jalr ra,v0
    .word 0x72202628
    sw zero,0(s4)
L20efa8:
    lw v0,0(s4)
    bnez v0,L20f000
    .word 0x72801628
    addiu v0,s3,-1
    sll v0,v0,0x2
    addiu a0,v0,8
    .word 0x3c020033
    addiu v0,v0,-23008
    lw v0,304(v0)
    jalr ra,v0
    nop
    sw v0,0(s4)
    lw v0,0(s4)
    beqz v0,L20effc
    nop
    sw s3,0(v0)
    lw v0,0(s4)
    sll a2,s3,0x2
    .word 0x70002e28
    jal func_0011ec80
    addiu a0,v0,4
L20effc:
    .word 0x72801628
L20f000:
    lq ra,96(sp)
    lq s5,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,112
}
