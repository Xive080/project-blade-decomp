extern void func_001f79f0(void);
extern void func_0018ffa0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-688
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c850030
    .word 0x8c830034
    paddub s0,a0,zero
    .word 0x70008e28
    .word 0x70003628
    .word 0x70003e28
    sll a0,a1,0x3
    subu a0,a0,a1
    sll a0,a0,0x2
    b L18c6c8
    addu s8,v1,a0
L18c668:
    .word 0x8e04003c
    .word 0xc6030020
    .word 0xc605001c
    .word 0xc6010024
    .word 0xc6000018
    addu a0,a0,a3
    .word 0xc4840028
    .word 0xc4860024
    .word 0xc482002c
    sub.s $f3,$f4,$f3
    sub.s $f4,$f2,$f1
    sub.s $f5,$f6,$f5
    mul.s $f2,$f5,$f5
    mul.s $f1,$f3,$f3
    adda.s $f2,$f1
    madd.s $f1,$f4,$f4
    c.lt.s $f1,$f0
    nop
    bc1t L18c6bc
    addiu v1,zero,1
    .word 0x70001e28
L18c6bc:
    addiu a3,a3,52
    addiu a2,a2,1
    .word 0xac830030
L18c6c8:
    .word 0x8e030038
    slt v1,a2,v1
    bnez v1,L18c668
    nop
    .word 0x8e050034
    sltu at,a1,s8
    beqz at,L18c778
    nop
    addiu a2,sp,176
L18c6ec:
    .word 0x8ca30008
    bgez v1,L18c700
    sra a0,v1,0x1
    addiu v1,v1,1
    sra a0,v1,0x1
L18c700:
    sll v1,a0,0x1
    addu a0,v1,a0
    .word 0xc6030020
    .word 0x8ca3000c
    sll a0,a0,0x3
    .word 0xc605001c
    .word 0xc6010024
    .word 0xc6000018
    addu v1,v1,a0
    .word 0xc4640004
    .word 0xc4660000
    .word 0xc4620008
    sub.s $f3,$f4,$f3
    sub.s $f4,$f2,$f1
    sub.s $f5,$f6,$f5
    mul.s $f2,$f5,$f5
    mul.s $f1,$f3,$f3
    adda.s $f2,$f1
    madd.s $f1,$f4,$f4
    c.lt.s $f1,$f0
    nop
    bc1t L18c760
    addiu v1,zero,1
    .word 0x70001e28
L18c760:
    addiu a1,a1,28
    .word 0xacc30000
    sltu v1,a1,s8
    bnez v1,L18c6ec
    addiu a2,a2,4
    nop
L18c778:
    .word 0x8e150034
    sltu at,s5,s8
    beqz at,L18c890
    nop
    addiu s6,sp,176
L18c78c:
    .word 0x8ea40010
    addiu v1,zero,2
    beq a0,v1,L18c7e8
    addiu v1,zero,1
    .word 0x8ec30000
    bnez v1,L18c7d8
    nop
    .word 0x8ea30000
    beqz v1,L18c7c0
    nop
    .word 0x8c630030
    bnez v1,L18c7d8
    nop
L18c7c0:
    .word 0x8ea30004
    beqz v1,L18c7e4
    nop
    .word 0x8c630030
    beqz v1,L18c7e4
    nop
L18c7d8:
    .word 0x8ea30008
    b L18c880
    addu s1,s1,v1
L18c7e4:
    addiu v1,zero,1
L18c7e8:
    bnel a0,v1,L18c884
    addiu s5,s5,28
    .word 0x8eb30014
    addiu v1,s5,20
    beq s3,v1,L18c878
    nop
    addiu s2,s3,-1036
L18c804:
    .word 0x8e4303d8
    bnez v1,L18c868
    .word 0x8e730000
    .word 0x8e43003c
    beqz v1,L18c86c
    addiu v1,s5,20
    .word 0x8e430010
    andi v1,v1,0x2
    bnez v1,L18c868
    nop
    .word 0x8e42000c
    paddub a0,s2,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s4,s2,12
    beqz v0,L18c868
    nop
    .word 0x8e820000
    paddub a0,s2,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    nop
L18c868:
    addiu v1,s5,20
L18c86c:
    bne s3,v1,L18c804
    addiu s2,s3,-1036
    nop
L18c878:
    .word 0xaea00010
    nop
L18c880:
    addiu s5,s5,28
L18c884:
    sltu v1,s5,s8
    bnez v1,L18c78c
    addiu s6,s6,4
L18c890:
    .word 0x8e0300c0
    beqz v1,L18c8b4
    nop
    .word 0x3c010031
    .word 0x8c232790
    .word 0x0223001b
    nop
    nop
    mflo s1
L18c8b4:
    slti at,s1,4
    beqz at,L18c8c4
    nop
    addiu s1,zero,4
L18c8c4:
    .word 0x8e150034
    sltu at,s5,s8
    beqz at,L18ca58
    nop
    addiu v1,sp,176
    .word 0xafa300a0
L18c8dc:
    .word 0x8fa300a0
    .word 0x8c630000
    bnez v1,L18c920
    nop
    .word 0x8ea30000
    beqz v1,L18c908
    nop
    .word 0x8c630030
    bnez v1,L18c920
    nop
    nop
L18c908:
    .word 0x8ea30004
    beqz v1,L18ca38
    nop
    .word 0x8c630030
    beqz v1,L18ca38
    nop
L18c920:
    .word 0x8ea30010
    bnez v1,L18ca38
    nop
    .word 0x8ea30014
    addiu v0,s5,20
    beq v1,v0,L18c948
    addiu s2,zero,-1
    .word 0x8c720014
    nop
    nop
L18c948:
    jal func_001f79f0
    nop
    addu s3,s2,s1
    andi s0,v0,0x1
    b L18ca20
    subu s7,s2,s1
L18c960:
    bltz s2,L18c980
    nop
    slt v1,s0,s7
    bnez v1,L18c980
    nop
    slt at,s3,s0
    beqzl at,L18ca1c
    addu s0,s0,s1
L18c980:
    .word 0x3c010031
    .word 0x8c2426e0
    .word 0x3c030031
    addiu v1,v1,9952
    beq a0,v1,L18ca18
    nop
    .word 0x8c82fc30
    addiu a1,zero,2
    beq v0,a1,L18c9f0
    addiu s6,a0,-1036
    .word 0x8ec20010
    andi v0,v0,0x2
    bnez v0,L18c9f0
    nop
    .word 0x8ec2000c
    paddub a0,s6,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s4,s6,12
    beqz v0,L18c9f0
    nop
    .word 0x8e820000
    addiu a1,zero,2
    paddub a0,s6,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    nop
L18c9f0:
    .word 0xaed5041c
    .word 0x8ec3040c
    .word 0x8ec20410
    paddub a0,s6,zero
    paddub a1,s0,zero
    .word 0xac430000
    .word 0x8ec30410
    .word 0x8ec2040c
    jal func_0018ffa0
    .word 0xac430004
L18ca18:
    addu s0,s0,s1
L18ca1c:
    nop
L18ca20:
    .word 0x8ea30008
    slt v1,s0,v1
    bnez v1,L18c960
    nop
    addiu v1,zero,1
    .word 0xaea30010
L18ca38:
    .word 0x8fa300a0
    addiu s5,s5,28
    addiu v1,v1,4
    .word 0xafa300a0
    sltu v1,s5,s8
    bnez v1,L18c8dc
    nop
    nop
L18ca58:
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,688
}


