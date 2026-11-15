extern void sscanf_(void);
asm void f_23a780(void) {
    .set noreorder
    addiu sp,sp,-96
    sq ra,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lb v0,0(a0)
    paddub s4,a1,zero
    beqz v0,L23a9f8
    paddub s0,a0,zero
    b L23a7b8
    addiu v0,zero,10
L23a7b4:
    addiu s0,s0,1
L23a7b8:
    lb v1,0(s0)
    nop
    nop
    nop
    bne v1,v0,L23a7b4
    nop
    addiu s0,s0,1
    addiu a0,zero,10
    b L23a808
    addiu v0,zero,59
L23a7e0:
    addiu s0,s0,1
    nop
L23a7e8:
    lb v1,0(s0)
    nop
    nop
    nop
    bne v1,a0,L23a7e0
    nop
    addiu s0,s0,1
    nop
L23a808:
    lb v1,0(s0)
    beq v1,v0,L23a7e8
    nop
    beqz v1,L23a9f8
    nop
    .word 0x3c02002f
    addiu a1,v0,3632
    paddub a0,s0,zero
    jal sscanf_
    paddub a2,s4,zero
    addiu v1,zero,1
    bne v0,v1,L23a9f8
    nop
    b L23a848
    addiu v0,zero,10
L23a844:
    addiu s0,s0,1
L23a848:
    lb v1,0(s0)
    nop
    nop
    nop
    bne v1,v0,L23a844
    nop
    addiu s0,s0,1
    addiu a0,zero,10
    b L23a898
    addiu v0,zero,59
L23a870:
    addiu s0,s0,1
    nop
L23a878:
    lb v1,0(s0)
    nop
    nop
    nop
    bne v1,a0,L23a870
    nop
    addiu s0,s0,1
    nop
L23a898:
    lb v1,0(s0)
    beq v1,v0,L23a878
    nop
    beqz v1,L23a9f8
    nop
    paddub s1,zero,zero
    paddub s3,s4,zero
L23a8b4:
    addiu s2,s3,8
    addiu v0,zero,10
    b L23a8c8
    addiu v1,zero,32
    addiu s0,s0,1
L23a8c8:
    lb a0,0(s0)
    beq a0,v1,L23a8f0
    nop
    beq a0,v0,L23a8f0
    nop
    bnezl a0,L23a8c8
    addiu s0,s0,1
    b L23a8f4
    lb v1,0(s0)
    addiu s0,s0,1
L23a8f0:
    lb v1,0(s0)
L23a8f4:
    addiu v0,zero,32
    bne v1,v0,L23a91c
    addiu v0,zero,10
    addiu v0,zero,10
    beq v1,v0,L23a918
    nop
    bnezl v1,L23a8f0
    addiu s0,s0,1
    nop
L23a918:
    addiu v0,zero,10
L23a91c:
    beq v1,v0,L23a9f8
    nop
    beqz v1,L23a9f8
    nop
    .word 0x3c02002f
    addiu a1,v0,3640
    paddub a0,s0,zero
    jal sscanf_
    paddub a2,s2,zero
    addiu v1,zero,1
    bne v0,v1,L23a9f8
    nop
    addiu v0,zero,10
    b L23a960
    addiu v1,zero,32
    addiu s0,s0,1
L23a95c:
    nop
L23a960:
    lb a0,0(s0)
    beq a0,v1,L23a988
    nop
    beq a0,v0,L23a988
    nop
    bnezl a0,L23a95c
    addiu s0,s0,1
    b L23a98c
    lb v1,0(s0)
    addiu s0,s0,1
L23a988:
    lb v1,0(s0)
L23a98c:
    addiu v0,zero,32
    bne v1,v0,L23a9b4
    addiu v0,zero,10
    addiu v0,zero,10
    beq v1,v0,L23a9b0
    nop
    bnezl v1,L23a988
    addiu s0,s0,1
    nop
L23a9b0:
    addiu v0,zero,10
L23a9b4:
    beq v1,v0,L23a9f8
    nop
    beqz v1,L23a9f8
    nop
    .word 0x3c02002f
    addiu a2,s2,4
    addiu a1,v0,3640
    jal sscanf_
    paddub a0,s0,zero
    addiu v1,zero,1
    bne v0,v1,L23a9f8
    nop
    addiu s1,s1,1
    sltiu v0,s1,16
    bnez v0,L23a8b4
    addiu s3,s3,8
    nop
L23a9f8:
    sw s1,4(s4)
    paddub v0,s0,zero
    lq ra,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,96
}
