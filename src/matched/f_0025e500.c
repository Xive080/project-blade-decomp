extern void func_00121f90(void);
extern void func_001332c0(void);
extern void func_00178e60(void);
extern void func_001ca2d0(void);
asm void f(void) {
    .set noreorder
    .word 0x3c020026
    addiu v0,v0,-4432
    .word 0x3c010033
    sw v0,24320(at)
    .word 0x3c020026
    addiu v0,v0,-4480
    .word 0x3c010033
    sw v0,24324(at)
    .word 0x3c020026
    addiu v0,v0,-5584
    .word 0x3c010033
    sw v0,24328(at)
    .word 0x3c010033
    sw zero,24332(at)
    .word 0x3c010033
    .word 0x3c020033
    sw zero,24336(at)
    addiu v0,v0,24320
    .word 0x3c010033
    sw v0,24352(at)
    .word 0x3c020033
    addiu a1,v0,24352
    j func_001332c0
    addiu a0,zero,13
    addiu sp,sp,-128
    sq ra,112(sp)
    sq s6,96(sp)
    sq s5,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    .word 0x3c020030
    sq s0,0(sp)
    .word 0x70a08628
    addiu s6,v0,-21880
    .word 0x72c02e28
    .word 0x72003628
    .word 0x70008e28
    jal func_001ca2d0
    .word 0x70009628
    addu v0,s6,s0
    addiu a1,zero,59
    addiu a0,zero,10
    addiu v1,zero,13
    sb zero,0(v0)
    b L25e620
    .word 0x72c03628
    dsll32 v0,v0,0x18
L25e5c4:
    dsra32 v0,v0,0x18
    beq v0,a1,L25e5e0
    nop
    b L25e5e0
    addiu s2,s2,1
    addiu a2,a2,1
L25e5dc:
    nop
L25e5e0:
    lb v0,0(a2)
    beq v0,a0,L25e600
    nop
    beq v0,v1,L25e600
    nop
    bnezl v0,L25e5dc
    addiu a2,a2,1
    nop
L25e600:
    bne v0,v1,L25e610
    nop
    addiu a2,a2,1
    nop
L25e610:
    lb v0,0(a2)
    bne v0,a0,L25e620
    nop
    addiu a2,a2,1
L25e620:
    lb v0,0(a2)
    bnezl v0,L25e5c4
    dsll32 v0,v0,0x18
    jal func_00178e60
    addiu a0,zero,1
    addiu v1,s2,2
    sll v0,v1,0x1
    addu v0,v0,v1
    sll a0,v0,0x2
    .word 0x3c020033
    addiu v0,v0,-23008
    addiu s4,v0,304
    lw v0,304(v0)
    jalr ra,v0
    nop
    .word 0x3c010033
    sw v0,24356(at)
    b L25e9d0
    .word 0x70009e28
    dsll32 v1,v0,0x18
L25e670:
    addiu v0,zero,59
    dsra32 v1,v1,0x18
    bne v1,v0,L25e6b4
    nop
    addiu v0,zero,13
    b L25e690
    addiu v1,zero,10
    addiu s6,s6,1
L25e690:
    lb a0,0(s6)
    beq a0,v1,L25e9a0
    nop
    beq a0,v0,L25e9a0
    nop
    bnezl a0,L25e690
    addiu s6,s6,1
    b L25e9a4
    lb v1,0(s6)
L25e6b4:
    .word 0x3c010033
    lw v1,24356(at)
    addiu v0,zero,35
    addu v1,v1,s3
    sw zero,0(v1)
    .word 0x3c010033
    lw v1,24356(at)
    addu v1,v1,s3
    sw zero,4(v1)
    lb v1,0(s6)
    bne v1,v0,L25e760
    nop
    .word 0x3c010033
    lw a0,24356(at)
    lb a2,1(s6)
    addiu a1,zero,48
    addiu v0,zero,13
    addu a0,a0,s3
    subu a1,a1,a2
    addiu v1,zero,10
    addiu s6,s6,2
    b L25e718
    sh a1,10(a0)
    addiu s6,s6,1
L25e714:
    nop
L25e718:
    lb a0,0(s6)
    beql a0,v1,L25e73c
    addiu v0,zero,13
    beq a0,v0,L25e738
    nop
    bnezl a0,L25e714
    addiu s6,s6,1
    nop
L25e738:
    addiu v0,zero,13
L25e73c:
    bne a0,v0,L25e748
    nop
    addiu s6,s6,1
L25e748:
    lb v1,0(s6)
    addiu v0,zero,10
    bne v1,v0,L25e778
    nop
    b L25e778
    addiu s6,s6,1
L25e760:
    .word 0x3c010033
    lw v0,24356(at)
    addiu v1,zero,-1
    addu v0,v0,s3
    sh v1,10(v0)
    nop
L25e778:
    lb v1,0(s6)
    addiu v0,zero,36
    beq v1,v0,L25e804
    nop
    addiu v0,zero,94
    beq v1,v0,L25e7ec
    nop
    addiu v0,zero,33
    beq v1,v0,L25e7d0
    nop
    addiu v0,zero,42
    beq v1,v0,L25e7b4
    nop
    b L25e820
    nop
L25e7b4:
    .word 0x3c010033
    lw v0,24356(at)
    addiu v1,zero,3
    addiu s6,s6,1
    addu v0,v0,s3
    b L25e838
    sh v1,8(v0)
L25e7d0:
    .word 0x3c010033
    lw v0,24356(at)
    addiu v1,zero,2
    addiu s6,s6,1
    addu v0,v0,s3
    b L25e838
    sh v1,8(v0)
L25e7ec:
    .word 0x3c010033
    lw v0,24356(at)
    addiu s6,s6,1
    addu v0,v0,s3
    b L25e838
    sh zero,8(v0)
L25e804:
    .word 0x3c010033
    lw v0,24356(at)
    addiu v1,zero,4
    addiu s6,s6,1
    addu v0,v0,s3
    b L25e838
    sh v1,8(v0)
L25e820:
    .word 0x3c010033
    lw v0,24356(at)
    addiu v1,zero,1
    addu v0,v0,s3
    sh v1,8(v0)
    nop
L25e838:
    addiu v1,zero,10
    addiu v0,zero,13
    addiu a0,zero,58
    b L25e850
    .word 0x72c08628
    addiu s6,s6,1
L25e850:
    lb a1,0(s6)
    beq a1,a0,L25e878
    nop
    beq a1,v1,L25e878
    nop
    beq a1,v0,L25e878
    nop
    bnezl a1,L25e850
    addiu s6,s6,1
    nop
L25e878:
    lw v0,0(s4)
    subu s5,s6,s0
    jalr ra,v0
    addiu a0,s5,1
    .word 0x3c010033
    lw v1,24356(at)
    .word 0x72002e28
    addu v1,v1,s3
    sw v0,0(v1)
    .word 0x3c010033
    lw v0,24356(at)
    addu v0,v0,s3
    lw a0,0(v0)
    jal func_00121f90
    .word 0x72a03628
    .word 0x3c010033
    lw v1,24356(at)
    addiu v0,zero,58
    addu v1,v1,s3
    lw v1,0(v1)
    addu v1,v1,s5
    sb zero,0(v1)
    lb v1,0(s6)
    bnel v1,v0,L25e98c
    addiu s1,s1,1
    addiu s6,s6,1
    addiu v0,zero,13
    addiu v1,zero,10
    b L25e8f8
    .word 0x72c0ae28
    addiu s6,s6,1
L25e8f4:
    nop
L25e8f8:
    lb a0,0(s6)
    beq a0,v1,L25e918
    nop
    beq a0,v0,L25e918
    nop
    bnezl a0,L25e8f4
    addiu s6,s6,1
    nop
L25e918:
    lw v0,0(s4)
    subu s0,s6,s5
    jalr ra,v0
    addiu a0,s0,1
    .word 0x3c010033
    lw v1,24356(at)
    .word 0x72a02e28
    addu v1,v1,s3
    sw v0,4(v1)
    .word 0x3c010033
    lw v0,24356(at)
    addu v0,v0,s3
    lw a0,4(v0)
    jal func_00121f90
    .word 0x72003628
    .word 0x3c010033
    lw v0,24356(at)
    addu v0,v0,s3
    lw v0,4(v0)
    .word 0x3c010033
    addu v0,v0,s0
    sb zero,0(v0)
    lw v0,24356(at)
    addu v1,v0,s3
    lh v0,8(v1)
    ori v0,v0,0x8
    sh v0,8(v1)
    nop
    addiu s1,s1,1
L25e98c:
    addiu v0,s2,1
    slt v0,s1,v0
    bnez v0,L25e9a0
    addiu s3,s3,12
    sb zero,0(s6)
L25e9a0:
    lb v1,0(s6)
L25e9a4:
    addiu v0,zero,13
    bne v1,v0,L25e9b8
    nop
    addiu s6,s6,1
    nop
L25e9b8:
    lb v1,0(s6)
    addiu v0,zero,10
    bne v1,v0,L25e9d0
    nop
    addiu s6,s6,1
    nop
L25e9d0:
    lb v0,0(s6)
    bnez v0,L25e670
    dsll32 v1,v0,0x18
    .word 0x3c010033
    lw v1,24356(at)
    sll v0,s1,0x1
    addu v0,v0,s1
    sll v0,v0,0x2
    addiu a1,zero,-1
    addu v0,v0,v1
    addiu a0,zero,16
    jal func_00178e60
    sh a1,8(v0)
    lq ra,112(sp)
    lq s6,96(sp)
    lq s5,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,128
}
