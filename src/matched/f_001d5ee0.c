extern void f1dbc80(void);
asm void f(void *h) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    sq ra,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v1,4(a0)
    addiu a1,zero,1
    paddub s2,a0,zero
    addiu s0,s2,20
    addiu s1,gp,-31200
    sw a1,20(v1)
    lhu s3,2(a0)
    nop
L1:
    lw v1,20(s0)
    beqzl v1,L3
    addiu s3,s3,-1
    lw a1,4(s0)
    beqz a1,L2
    nop
    lhu v1,0(s0)
    andi v1,v1,2
    bnez v1,L2
    nop
    jal f1dbc80
    lw a0,0(s1)
L2:
    sw zero,0(s0)
    sw zero,4(s0)
    sw zero,12(s0)
    sw zero,16(s0)
    sw zero,20(s0)
    nop
    addiu s3,s3,-1
L3:
    bnez s3,L1
    addiu s0,s0,28
    sh zero,0(s2)
    lq ra,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,80
}
