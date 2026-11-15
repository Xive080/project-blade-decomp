extern void F1214b8(void);
extern void F170070(void);
extern void F1cc6b0(void);
asm void func(void) {
    .set noreorder
    lw a1,16(a0)
    j F1cc6b0
    lw a0,112(a0)
    nop
    addiu sp,sp,-208
    sq ra,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    .word 0x3C020030
    sq s1,16(sp)
    addiu v0,v0,23888
    sq s0,0(sp)
    .word 0x70A09E28
    .word 0x70809628
    sw v0,12(a0)
    jal F170070
    .word 0x72602628
    .word 0x70408E28
    bnez s1,L15c8a0
    .word 0x70008628
    b L15c99c
    .word 0x70001628
    .word 0x70008628
L15c8a0:
    addiu s0,s0,1
    sll v0,s0,0x2
    addu v0,v0,sp
    addiu s4,v0,112
    sw s1,112(sp)
L15c8b4:
    .word 0x3C02002F
    addiu a0,sp,96
    addiu a1,v0,-14568
    .word 0x72603628
    jal F1214b8
    .word 0x72003E28
    jal F170070
    addiu a0,sp,96
    beqzl v0,L15c8f0
    .word 0x3C020800
    sw v0,0(s4)
    addiu s4,s4,4
    b L15c8b4
    addiu s0,s0,1
    .word 0x3C020800
L15c8f0:
    sw v0,0(s2)
    sw zero,4(s2)
    lw a0,24(s3)
    addiu v0,zero,10000
    .word 0x70001E28
    movz v1,v0,a0
    sw v1,8(s2)
    sw s1,112(s2)
    sw s0,116(s2)
    lw v0,24(s3)
    beqz v0,L15c94c
    nop
    mtc1 v0,$f0
    nop
    cvt.s.w $f0,$f0
    .word 0x3C023F80
    mtc1 v0,$f1
    nop
    div.s $f0,$f1,$f0
    nop
    nop
    b L15c950
    nop
L15c94c:
    mtc1 zero,$f0
L15c950:
    .word 0xE640007C
    .word 0x72001628
    .word 0xE6400080
    addiu s0,s0,-1
    beqz v0,L15c998
    sw zero,120(s2)
    sll v0,s0,0x2
    addu a1,s2,v0
    addu v0,v0,sp
    addiu a0,v0,112
L15c978:
    lw v1,0(a0)
    .word 0x72001628
    addiu s0,s0,-1
    lw v1,0(v1)
    addiu a0,a0,-4
    sw v1,16(a1)
    bnez v0,L15c978
    addiu a1,a1,-4
L15c998:
    addiu v0,zero,1
L15c99c:
    lq ra,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,208
}
