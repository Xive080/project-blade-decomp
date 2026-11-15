extern void sub1(void);
extern void sub2(void);
extern void sub3(void);
extern void sub4(void);
asm void f(void) {
    .set noreorder
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    paddub s1,a1,zero
    paddub s0,a2,zero
    bnez s1,L246b2c
    paddub s2,a0,zero
    b L246db4
    paddub v0,zero,zero
L246b2c:
    addiu v1,zero,5
    bne s1,v1,L246b70
    nop
    lw a0,12(s2)
    addiu v0,zero,9
    beq a0,v0,L246b68
    paddub v0,zero,zero
    addiu v0,zero,10
    beq a0,v0,L246b64
    nop
    jal sub1
    paddub a0,v1,zero
    b L246db4
    addiu v0,zero,1
L246b64:
    paddub v0,zero,zero
L246b68:
    b L246db8
    lq ra,48(sp)
L246b70:
    lw v0,12(s2)
    addi v0,v0,-5
    sltiu at,v0,8
    beqzl at,L246da4
    paddub a0,s2,zero
    .word 0x3c03002f
    addiu v1,v1,3968
    sll v0,v0,0x2
    addu v0,v0,v1
    lw v0,0(v0)
    jr v0
    nop
    addiu v0,zero,10
    bne s1,v0,L246da0
    nop
    paddub a0,s2,zero
    jal sub2
    paddub a1,zero,zero
    addiu v0,zero,7
    b L246da0
    sw v0,12(s2)
    addiu v0,zero,6
    bne s1,v0,L246da0
    nop
    lw v1,56(s2)
    lw a0,-31960(gp)
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x1
    jal sub3
    addiu a1,v0,426
    lw a0,-31572(gp)
    beqz a0,L246c08
    nop
    paddub a2,v0,zero
    lw v0,16(a0)
    jalr ra,v0
    addiu a1,zero,8
L246c08:
    lw v0,0(s2)
    addiu a1,zero,12
    lw v0,24(v0)
    jalr ra,v0
    paddub a0,s2,zero
    b L246db4
    nop
    addiu v0,zero,7
    bne s1,v0,L246c78
    addiu v0,zero,1
    sw zero,72(s2)
    .word 0x3c010030
    lw v0,28548(at)
    ori v0,v0,0x4
    .word 0x3c010030
    sw v0,28548(at)
    lw v0,0(s2)
    lw v0,12(v0)
    jalr ra,v0
    nop
    lw v0,0(s2)
    addiu a1,zero,11
    lw v0,24(v0)
    jalr ra,v0
    paddub a0,s2,zero
    b L246db4
    nop
    addiu v0,zero,1
L246c78:
    bne s1,v0,L246da0
    nop
    lw v0,56(s2)
    blez v0,L246da0
    nop
    .word 0x3c010030
    lw v0,28548(at)
    ori v0,v0,0x4
    .word 0x3c010030
    sw v0,28548(at)
    lw v0,56(s2)
    addiu v0,v0,-1
    sw v0,56(s2)
    lw v0,0(s2)
    lw v0,24(v0)
    jalr ra,v0
    addiu a1,zero,9
    b L246db4
    nop
    addiu v0,zero,4
    bne s1,v0,L246da0
    nop
    lw v0,0(s2)
    lw v0,24(v0)
    jalr ra,v0
    addiu a1,zero,6
    b L246db4
    nop
    addiu v0,zero,6
    bne s1,v0,L246da0
    nop
    lw v0,0(s2)
    lw v0,24(v0)
    jalr ra,v0
    addiu a1,zero,9
    b L246db4
    nop
    addiu v0,zero,8
    bne s1,v0,L246da0
    nop
    lw v0,56(s2)
    addiu v0,v0,1
    sw v0,56(s2)
    lw a1,56(s2)
    lw v0,60(s2)
    slt at,a1,v0
    beqz at,L246d5c
    nop
    jal sub2
    nop
    lw v0,0(s2)
    addiu a1,zero,10
    lw v0,24(v0)
    jalr ra,v0
    paddub a0,s2,zero
    b L246db4
    nop
L246d5c:
    lw v0,0(s2)
    lw v0,24(v0)
    jalr ra,v0
    addiu a1,zero,13
    jal sub1
    addiu a0,zero,7
    b L246da0
    nop
    addiu v0,zero,9
    bne s1,v0,L246da0
    nop
    lw v0,0(s2)
    lw v0,24(v0)
    jalr ra,v0
    addiu a1,zero,7
    b L246db4
    nop
L246da0:
    paddub a0,s2,zero
L246da4:
    paddub a1,s1,zero
    jal sub4
    paddub a2,s0,zero
    addiu v0,zero,1
L246db4:
    lq ra,48(sp)
L246db8:
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
