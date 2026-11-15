extern void f1d8240(void);
extern void f1d8120(void);
extern void f2084c0(void);
extern void f208550(void);
extern void f1d5d50(void);
extern void f1d5ee0(void);
asm int f(int a, int *b) {
    .set noreorder
    addiu sp,sp,-80
    sq ra,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    .word 0x3c020033
    sq s0,0(sp)
    addiu s1,v0,-6624
    .word 0x8E230000
    paddub s3,a0,zero
    addiu v0,zero,3
    addiu a0,v1,20
    lw v1,20(v1)
    bne v1,v0,L1
    paddub s0,a1,zero
    addiu v0,zero,2
    sw v0,0(a0)
    lw v0,0(s1)
    b L2
    lw a0,24(v0)
L1:
    paddub a0,zero,zero
L2:
    paddub a1,zero,zero
    jal f1d8240
    paddub a2,s3,zero
    paddub a0,v0,zero
    addiu a1,zero,8
    jal f1d8120
    addiu a2,zero,4
    paddub s2,v0,zero
    .word 0x3c020033
    addiu v0,v0,-23008
    lw v0,4(v0)
    lbu v0,2(v0)
    andi v0,v0,0x20
    beqz v0,L3
    lw s0,0(s0)
    .word 0x3c020021
    addiu a0,v0,-8736
    jal f2084c0
    paddub a1,s2,zero
    .word 0x3c020021
    paddub a0,s0,zero
    paddub a2,s2,zero
    jal f208550
    addiu a1,v0,-8736
L3:
    lw v0,8(s1)
    beqz v0,L5
    lw s0,0(s1)
    paddub a1,s3,zero
    paddub a0,s0,zero
    jal f1d5d50
    paddub a2,zero,zero
    beqz v0,L5
    paddub a0,v0,zero
    lw v0,0(v0)
    lw v0,4(v0)
    jalr ra,v0
    addiu a1,s1,16
    bnez v0,L5
    nop
    sw v0,8(s1)
L5:
    lw v0,20(s0)
    slti at,v0,2
    bnez at,L6
    addiu v0,zero,2
    sw v0,20(s0)
    jal f1d5ee0
    lw a0,24(s0)
L6:
    lq ra,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,80
}
