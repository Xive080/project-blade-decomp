extern void F1be240(void);
extern void F1be3a0(void);
extern void F1be540(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    sq ra,64(sp)
    sq s2,48(sp)
    sq s1,32(sp)
    sq s0,16(sp)
    .word 0xE7B40000
    lw v1,60(a2)
    addiu v0,zero,4
    .word 0x70809628
    bne v1,v0,L12e2a4
    .word 0x70C08E28
    addiu a1,zero,1
    beq v1,a1,L12e29c
    nop
    lw v0,16(s1)
    andi v0,v0,0x2
    bnez v0,L12e29c
    nop
    lw v0,12(s1)
    .word 0x72202628
    lw v0,16(v0)
    jalr ra,v0
    addiu s2,s1,12
    beqz v0,L12e29c
    nop
    lw v0,0(s2)
    addiu a1,zero,1
    .word 0x72202628
    lw v0,20(v0)
    jalr ra,v0
    .word 0x70003628
L12e29c:
    lw s2,184(s1)
    nop
L12e2a4:
    lw a0,204(s1)
    bnez a0,L12e2b8
    nop
    b L12e384
    .word 0x72401628
L12e2b8:
    lw v1,60(s1)
    addiu v0,zero,1
    beql v1,v0,L12e2f0
    addiu s0,a0,932
    addiu v0,zero,2
    beq v1,v0,L12e2dc
    nop
    b L12e2f0
    nop
L12e2dc:
    sw zero,392(a0)
    addiu s0,a0,76
    b L12e2f0
    sw zero,396(a0)
    addiu s0,a0,932
L12e2f0:
    beqz s0,L12e384
    .word 0x72401628
    lw v1,316(s0)
    addiu v0,zero,-1
    beq v1,v0,L12e380
    nop
    .word 0xC6140140
    .word 0x3C02002F
    addiu a1,v0,-16408
    jal F1be3a0
    .word 0x72402628
    .word 0x3C02002F
    addiu a1,v0,-16408
    mov.s $f12,$f20
    addiu a2,zero,1
    .word 0x72402628
    jal F1be240
    .word 0x70003E28
    beqz v0,L12e370
    nop
    lw v1,16(s1)
    .word 0x3C02002F
    addiu a1,v0,-16408
    .word 0x3C020013
    addiu a2,v0,-7648
    ori v1,v1,0x800
    .word 0x72402628
    sw v1,16(s1)
    jal F1be540
    .word 0x72203E28
    b L12e380
    nop
L12e370:
    lw v1,16(s1)
    addiu v0,zero,-2049
    and v0,v1,v0
    sw v0,16(s1)
L12e380:
    .word 0x72401628
L12e384:
    lq ra,64(sp)
    lq s2,48(sp)
    lq s1,32(sp)
    lq s0,16(sp)
    .word 0xC7B40000
    jr ra
    addiu sp,sp,80
}
