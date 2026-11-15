extern void func_001ca2d0(void);
extern void func_00178e60(void);
extern void func_00121f90(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-128
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x3c020030
    .word 0x7fb00000
    paddub s0,a1,zero
    addiu s6,v0,-21880
    paddub a1,s6,zero
    paddub a2,s0,zero
    .word 0x70008e28
    jal func_001ca2d0
    .word 0x70009628
    addu v0,s6,s0
    addiu a1,zero,59
    addiu a0,zero,10
    addiu v1,zero,13
    .word 0xa0400000
    b L25e620
    paddub a2,s6,zero
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
    .word 0x80c20000
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
    .word 0x80c20000
    bne v0,a0,L25e620
    nop
    addiu a2,a2,1
L25e620:
    .word 0x80c20000
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
    .word 0x8c420130
    jalr ra,v0
    nop
    .word 0x3c010033
    .word 0xac225f24
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
    .word 0x82c40000
    beq a0,v1,L25e9a0
    nop
    beq a0,v0,L25e9a0
    nop
    bnezl a0,L25e690
    addiu s6,s6,1
    b L25e9a4
    .word 0x82c30000
L25e6b4:
    .word 0x3c010033
    .word 0x8c235f24
    addiu v0,zero,35
    addu v1,v1,s3
    .word 0xac600000
    .word 0x3c010033
    .word 0x8c235f24
    addu v1,v1,s3
    .word 0xac600004
    .word 0x82c30000
    bne v1,v0,L25e760
    nop
    .word 0x3c010033
    .word 0x8c245f24
    .word 0x82c60001
    addiu a1,zero,48
    addiu v0,zero,13
    addu a0,a0,s3
    subu a1,a1,a2
    addiu v1,zero,10
    addiu s6,s6,2
    b L25e718
    .word 0xa485000a
    addiu s6,s6,1
L25e714:
    nop
L25e718:
    .word 0x82c40000
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
    .word 0x82c30000
    addiu v0,zero,10
    bne v1,v0,L25e778
    nop
    b L25e778
    addiu s6,s6,1
L25e760:
    .word 0x3c010033
    .word 0x8c225f24
    addiu v1,zero,-1
    addu v0,v0,s3
    .word 0xa443000a
    nop
L25e778:
    .word 0x82c30000
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
    .word 0x8c225f24
    addiu v1,zero,3
    addiu s6,s6,1
    addu v0,v0,s3
    b L25e838
    .word 0xa4430008
L25e7d0:
    .word 0x3c010033
    .word 0x8c225f24
    addiu v1,zero,2
    addiu s6,s6,1
    addu v0,v0,s3
    b L25e838
    .word 0xa4430008
L25e7ec:
    .word 0x3c010033
    .word 0x8c225f24
    addiu s6,s6,1
    addu v0,v0,s3
    b L25e838
    .word 0xa4400008
L25e804:
    .word 0x3c010033
    .word 0x8c225f24
    addiu v1,zero,4
    addiu s6,s6,1
    addu v0,v0,s3
    b L25e838
    .word 0xa4430008
L25e820:
    .word 0x3c010033
    .word 0x8c225f24
    addiu v1,zero,1
    addu v0,v0,s3
    .word 0xa4430008
    nop
L25e838:
    addiu v1,zero,10
    addiu v0,zero,13
    addiu a0,zero,58
    b L25e850
    paddub s0,s6,zero
    addiu s6,s6,1
L25e850:
    .word 0x82c50000
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
    .word 0x8e820000
    subu s5,s6,s0
    jalr ra,v0
    addiu a0,s5,1
    .word 0x3c010033
    .word 0x8c235f24
    paddub a1,s0,zero
    addu v1,v1,s3
    .word 0xac620000
    .word 0x3c010033
    .word 0x8c225f24
    addu v0,v0,s3
    .word 0x8c440000
    jal func_00121f90
    paddub a2,s5,zero
    .word 0x3c010033
    .word 0x8c235f24
    addiu v0,zero,58
    addu v1,v1,s3
    .word 0x8c630000
    addu v1,v1,s5
    .word 0xa0600000
    .word 0x82c30000
    bnel v1,v0,L25e98c
    addiu s1,s1,1
    addiu s6,s6,1
    addiu v0,zero,13
    addiu v1,zero,10
    b L25e8f8
    paddub s5,s6,zero
    addiu s6,s6,1
L25e8f4:
    nop
L25e8f8:
    .word 0x82c40000
    beq a0,v1,L25e918
    nop
    beq a0,v0,L25e918
    nop
    bnezl a0,L25e8f4
    addiu s6,s6,1
    nop
L25e918:
    .word 0x8e820000
    subu s0,s6,s5
    jalr ra,v0
    addiu a0,s0,1
    .word 0x3c010033
    .word 0x8c235f24
    paddub a1,s5,zero
    addu v1,v1,s3
    .word 0xac620004
    .word 0x3c010033
    .word 0x8c225f24
    addu v0,v0,s3
    .word 0x8c440004
    jal func_00121f90
    paddub a2,s0,zero
    .word 0x3c010033
    .word 0x8c225f24
    addu v0,v0,s3
    .word 0x8c420004
    .word 0x3c010033
    addu v0,v0,s0
    .word 0xa0400000
    .word 0x8c225f24
    addu v1,v0,s3
    .word 0x84620008
    ori v0,v0,0x8
    .word 0xa4620008
    nop
    addiu s1,s1,1
L25e98c:
    addiu v0,s2,1
    slt v0,s1,v0
    bnez v0,L25e9a0
    addiu s3,s3,12
    .word 0xa2c00000
L25e9a0:
    .word 0x82c30000
L25e9a4:
    addiu v0,zero,13
    bne v1,v0,L25e9b8
    nop
    addiu s6,s6,1
    nop
L25e9b8:
    .word 0x82c30000
    addiu v0,zero,10
    bne v1,v0,L25e9d0
    nop
    addiu s6,s6,1
    nop
L25e9d0:
    .word 0x82c20000
    bnez v0,L25e670
    dsll32 v1,v0,0x18
    .word 0x3c010033
    .word 0x8c235f24
    sll v0,s1,0x1
    addu v0,v0,s1
    sll v0,v0,0x2
    addiu a1,zero,-1
    addu v0,v0,v1
    addiu a0,zero,16
    jal func_00178e60
    .word 0xa4450008
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,128
}


