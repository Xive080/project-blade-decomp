extern void f256438(void);
asm int f(int *a, int b, int c) {
    .set noreorder
    addiu sp,sp,-112
    sq ra,96(sp)
    sq s5,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw t0,0(a0)
    paddub s0,a2,zero
    lw a2,4(a0)
    paddub s5,a0,zero
    .word 0x70000628|(3<<11)
    .word 0x70000628|(5<<11)
    lhu a3,0(t0)
    b L3
    paddub s1,a3,zero
    addu v0,t0,a1
L1:
    lhu v0,0(v0)
    slt at,a3,v0
    beqz at,L2
    slt at,v0,s1
    paddub a3,v0,zero
    nop
    slt at,v0,s1
L2:
    beqzl at,L4
    addiu a1,a1,2
    paddub s1,v0,zero
    addiu a1,a1,2
L4:
    addiu v1,v1,1
L3:
    sltu v0,v1,a2
    bnez v0,L1
    addu v0,t0,a1
    subu v0,a3,s1
    addiu s2,v0,1
    slt at,zero,s2
    beqz at,L7
    .word 0x70000628|(20<<11)
    addu v0,s4,s1
L5:
    sll v0,v0,0x2
    addu v0,s0,v0
    addiu s3,v0,3
    lbu v0,3(v0)
    bltz v0,L6
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L8
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L6:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L8:
    lui v0,0x3f00
    ori v0,v0,0x9a34
    mtc1 v0,$f0
    jal f256438
    mul.s $f12,$f0,$f1
    addiu s4,s4,1
    sb v0,0(s3)
    slt v0,s4,s2
    bnez v0,L5
    addu v0,s4,s1
    nop
L7:
    paddub v0,s5,zero
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
