extern void func_001d5d50(void);
extern void func_001d5ee0(void);
extern void func_001d8080(void);
extern void func_001d8120(void);
extern void func_001d8240(void);
extern void func_001dbe60(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-128
    sq ra,112(sp)
    sq s6,96(sp)
    sq s5,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    .word 0x3c020033
    sq s0,0(sp)
    addiu s5,v0,-6624
    .word 0x8ea30000
    .word 0x70808628
    addiu v0,zero,3
    addiu a0,v1,20
    lw v1,20(v1)
    bne v1,v0,L1d374c
    .word 0x70a09e28
    addiu v0,zero,2
    sw v0,0(a0)
    lw v0,0(s5)
    b L1d3750
    lw s2,24(v0)
L1d374c:
    .word 0x70009628
L1d3750:
    .word 0x72402628
    .word 0x70002e28
    jal func_001d8240
    .word 0x72003628
    lw v1,8(s2)
    lw s1,8(v0)
    lw v1,4(v1)
    addiu v0,zero,-1
    bne v1,v0,L1d3780
    sll v0,v1,0x3
    b L1d37b0
    .word 0x7000a628
L1d3780:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s2
    lw v0,24(v1)
    sw v0,28(v1)
    lw v0,8(s2)
    lw v1,4(v0)
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s2,v0
    addiu s4,v0,20
L1d37b0:
    lw a1,16(s4)
    bnez a1,L1d39b0
    .word 0x72402628
    addiu a1,zero,1
    jal func_001d8240
    .word 0x72003628
    lw a0,168(s1)
    addiu v1,zero,4
    beq a0,v1,L1d38d8
    addiu v1,zero,5
    beq a0,v1,L1d3878
    addiu v1,zero,3
    beq a0,v1,L1d37f0
    nop
    b L1d3948
    lw v0,8(s5)
L1d37f0:
    lw v1,172(s1)
    .word 0x70402628
    addiu a2,zero,2
    sll v0,v1,0x1
    addu s1,v0,v1
    jal func_001d8120
    .word 0x72202e28
    lw a0,8(v0)
    sltu at,zero,s1
    beqz at,L1d3870
    .word 0x70002e28
    sltiu at,s1,3
    bnez at,L1d3848
    addiu a2,s1,-2
L1d3828:
    sh a1,0(a0)
    addiu v1,a1,1
    sh v1,2(a0)
    addiu a1,a1,2
    sltu v1,a1,a2
    bnez v1,L1d3828
    addiu a0,a0,4
    nop
L1d3848:
    sltu at,a1,s1
    beqz at,L1d3870
    nop
L1d3854:
    sh a1,0(a0)
    addiu a1,a1,1
    sltu v1,a1,s1
    addiu a0,a0,2
    nop
    bnez v1,L1d3854
    nop
L1d3870:
    b L1d3bc0
    sw s1,16(v0)
L1d3878:
    lw v1,172(s1)
    .word 0x70402628
    addiu a2,zero,2
    sll v0,v1,0x1
    addu s2,v0,v1
    jal func_001d8120
    .word 0x72402e28
    lw a0,8(v0)
    b L1d38b8
    .word 0x70002e28
L1d38a0:
    sh zero,0(a0)
    sh v1,2(a0)
    addiu v1,v1,1
    sh v1,4(a0)
    addiu a0,a0,6
    addiu a1,a1,1
L1d38b8:
    lw v1,172(s1)
    sltu v1,a1,v1
    bnez v1,L1d38a0
    addiu v1,a1,1
    sw s2,16(v0)
    addiu v0,zero,3
    b L1d3bc0
    sw v0,168(s1)
L1d38d8:
    lw v1,172(s1)
    .word 0x70402628
    addiu a2,zero,2
    sll v0,v1,0x1
    addu s2,v0,v1
    jal func_001d8120
    .word 0x72402e28
    lw a1,8(v0)
    b L1d3928
    .word 0x70003628
L1d3900:
    addu v1,a2,a0
    sh v1,0(a1)
    xori v1,a0,0x1
    addu v1,a2,v1
    sh v1,2(a1)
    addiu v1,a2,2
    sh v1,4(a1)
    addiu a1,a1,6
    addiu a2,a2,1
    nop
L1d3928:
    lw v1,172(s1)
    sltu v1,a2,v1
    bnez v1,L1d3900
    andi a0,a2,0x1
    sw s2,16(v0)
    addiu v0,zero,3
    b L1d3bc0
    sw v0,168(s1)
L1d3948:
    beqz v0,L1d3984
    lw s1,0(s5)
    .word 0x72002e28
    .word 0x72202628
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d3984
    .word 0x70402628
    lw v0,0(v0)
    lw v0,4(v0)
    jalr ra,v0
    addiu a1,s5,16
    bnez v0,L1d3984
    nop
    sw v0,8(s5)
L1d3984:
    lw v0,20(s1)
    slti at,v0,2
    bnez at,L1d39a8
    .word 0x70001628
    addiu v0,zero,2
    sw v0,20(s1)
    jal func_001d5ee0
    lw a0,24(s1)
    .word 0x70001628
L1d39a8:
    b L1d3c28
    lq ra,112(sp)
L1d39b0:
    lw v1,168(s1)
    addiu v0,zero,4
    beq v1,v0,L1d3a88
    addiu v0,zero,5
    beq v1,v0,L1d39d8
    addiu v0,zero,3
    beq v1,v0,L1d3bc0
    nop
    b L1d3b58
    lw v0,8(s5)
L1d39d8:
    lw v1,8(s4)
    lhu a3,2(s4)
    addiu s6,a1,-2
    sll v0,s6,0x1
    addu v0,v0,s6
    lw a0,4(s3)
    sll a1,v0,0x1
    lw a2,4(s4)
    mult v0,a3,s6
    lhu s2,0(v1)
    jal func_001dbe60
    addu s3,a2,v0
    .word 0x72802628
    sll v1,s6,0x1
    addu s4,v1,s6
    .word 0x70402e28
    addiu a2,zero,2
    jal func_001d8080
    .word 0x72803e28
    lhu a1,2(v0)
    addiu a0,s6,-1
    sll v1,a0,0x1
    addu a0,v1,a0
    lw v1,4(v0)
    sltu at,zero,s6
    mult a0,a1,a0
    .word 0x70003628
    beqz at,L1d3a78
    addu a1,v1,a0
L1d3a4c:
    lhu a0,2(s3)
    addiu a2,a2,1
    sltu v1,a2,s6
    sh a0,4(a1)
    lhu a0,0(s3)
    sh a0,2(a1)
    sh s2,0(a1)
    addiu a1,a1,-6
    bnez v1,L1d3a4c
    addiu s3,s3,-2
    nop
L1d3a78:
    sw s4,16(v0)
    addiu v0,zero,3
    b L1d3bc0
    sw v0,168(s1)
L1d3a88:
    lhu a3,2(s4)
    addiu s6,a1,-2
    sll v0,s6,0x1
    addiu a2,a1,-3
    addu v0,v0,s6
    sll a1,v0,0x1
    lw v1,4(s4)
    mult v0,a3,a2
    lw a0,4(s3)
    jal func_001dbe60
    addu s2,v1,v0
    sll v1,s6,0x1
    addu s3,v1,s6
    .word 0x72802628
    .word 0x70402e28
    addiu a2,zero,2
    jal func_001d8080
    .word 0x72603e28
    lhu a2,2(v0)
    addiu a0,s6,-1
    sll v1,a0,0x1
    addu a1,v1,a0
    lw a0,4(v0)
    andi v1,s6,0x1
    mult a1,a2,a1
    addiu t0,zero,1
    sltu at,zero,s6
    movz t0,zero,v1
    .word 0x70003e28
    beqz at,L1d3b48
    addu t1,a0,a1
L1d3b04:
    sll v1,t0,0x1
    addu v1,s2,v1
    lhu a2,0(v1)
    lhu a0,4(s2)
    addiu a3,a3,1
    xori v1,t0,0x1
    sll v1,v1,0x1
    addu v1,s2,v1
    lhu a1,0(v1)
    xori t0,t0,0x1
    addiu s2,s2,-2
    sh a0,4(t1)
    sh a2,2(t1)
    sh a1,0(t1)
    sltu v1,a3,s6
    bnez v1,L1d3b04
    addiu t1,t1,-6
L1d3b48:
    sw s3,16(v0)
    addiu v0,zero,3
    b L1d3bc0
    sw v0,168(s1)
L1d3b58:
    beqz v0,L1d3b94
    lw s1,0(s5)
    .word 0x72002e28
    .word 0x72202628
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d3b94
    .word 0x70402628
    lw v0,0(v0)
    lw v0,4(v0)
    jalr ra,v0
    addiu a1,s5,16
    bnez v0,L1d3b94
    nop
    sw v0,8(s5)
L1d3b94:
    lw v0,20(s1)
    slti at,v0,2
    bnez at,L1d3bb8
    .word 0x70001628
    addiu v0,zero,2
    sw v0,20(s1)
    jal func_001d5ee0
    lw a0,24(s1)
    .word 0x70001628
L1d3bb8:
    b L1d3c24
    nop
L1d3bc0:
    lw v0,8(s5)
    beqz v0,L1d3c00
    lw s1,0(s5)
    .word 0x72002e28
    .word 0x72202628
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d3c00
    .word 0x70402628
    lw v0,0(v0)
    lw v0,4(v0)
    jalr ra,v0
    addiu a1,s5,16
    bnez v0,L1d3c00
    nop
    sw v0,8(s5)
L1d3c00:
    lw v0,20(s1)
    slti at,v0,2
    bnez at,L1d3c24
    addiu v0,zero,1
    addiu v0,zero,2
    sw v0,20(s1)
    jal func_001d5ee0
    lw a0,24(s1)
    addiu v0,zero,1
L1d3c24:
    lq ra,112(sp)
L1d3c28:
    lq s6,96(sp)
    lq s5,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,128
}
