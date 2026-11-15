extern void func_0011ec80(void);
extern void func_001cc9b0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    .word 0x70809628
    .word 0x70008628
    b L23b1a8
    .word 0x72408e28
L23b104:
    lw v1,48(s1)
    addiu v0,zero,4
    beq v1,v0,L23b180
    addiu v0,zero,2
    beq v1,v0,L23b164
    addiu v0,zero,1
    beq v1,v0,L23b134
    nop
    beqz v1,L23b19c
    addiu v0,s0,1
    b L23b198
    nop
L23b134:
    lw a0,4(s1)
    beq zero,a0,L23b148
    nop
    jal func_001cc9b0
    nop
L23b148:
    lw a0,8(s1)
    beq zero,a0,L23b198
    nop
    jal func_001cc9b0
    nop
    b L23b198
    nop
L23b164:
    lw a0,4(s1)
    beq zero,a0,L23b198
    nop
    jal func_001cc9b0
    nop
    b L23b198
    nop
L23b180:
    lw a0,0(s1)
    beq zero,a0,L23b198
    nop
    jal func_001cc9b0
    nop
    nop
L23b198:
    addiu v0,s0,1
L23b19c:
    addiu s1,s1,64
    andi s0,v0,0xff
    nop
L23b1a8:
    andi v0,s0,0xff
    slti v0,v0,2
    bnez v0,L23b104
    .word 0x72402628
    .word 0x70002e28
    jal func_0011ec80
    addiu a2,zero,144
    .word 0x72401628
    lq ra,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
