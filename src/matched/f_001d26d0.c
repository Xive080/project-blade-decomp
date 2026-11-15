extern void func_001d8240(void);
extern void func_001d5d50(void);
extern void func_001d5ee0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8ca30008
    addiu v0,zero,-1
    paddub s0,a0,zero
    .word 0x8c630000
    bne v1,v0,L1d2704
    paddub s1,a1,zero
    b L1d2738
    .word 0x70009628
L1d2704:
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s1
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e220008
    .word 0x8c430000
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s1,v0
    addiu s2,v0,20
L1d2738:
    .word 0x8e230008
    addiu v0,zero,-1
    .word 0x8c630004
    beq v1,v0,L1d2764
    paddub a0,s1,zero
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s1
    .word 0x8c620018
    .word 0xac62001c
L1d2764:
    addiu a1,zero,2
    jal func_001d8240
    paddub a2,s0,zero
    paddub a0,s1,zero
    paddub s1,v0,zero
    addiu a1,zero,3
    jal func_001d8240
    paddub a2,s0,zero
    .word 0x96250002
    .word 0x8c420008
    .word 0x70001e28
    sll a0,a1,0x1
    b L1d2868
    addu a0,a0,a1
L1d279c:
    .word 0x8e260008
    .word 0x964a0002
    .word 0x8e4c0004
    .word 0x94c90000
    .word 0x94c80002
    .word 0x94c70004
    mult t1,t2,t1
    mult1 t0,t2,t0
    addu t3,t4,t0
    .word 0xc5640004
    .word 0x01473818
    addu t0,t4,t1
    .word 0xc5010004
    .word 0xc5650000
    addu a3,t4,a3
    .word 0xc5030000
    .word 0xc4e20004
    .word 0xc4e00000
    sub.s $f1,$f1,$f4
    sub.s $f3,$f3,$f5
    sub.s $f2,$f2,$f4
    sub.s $f0,$f0,$f5
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe7a0004c
    .word 0x8fa7004c
    .word 0x04e30015
    addu a1,a2,a0
    sll a3,a1,0x1
    addu a1,a1,a3
    addiu a1,a1,-3
    sll a3,a1,0x1
    .word 0x8e250004
    addiu v1,v1,-1
    addu a3,a1,a3
    .word 0x94e50000
    .word 0xa4c50000
    .word 0x94e60002
    .word 0x8e250008
    .word 0xa4a60002
    .word 0x94e60004
    .word 0x8e250008
    .word 0xa4a60004
    .word 0x8c4500ac
    addiu a1,a1,-1
    b L1d2860
    .word 0xac4500ac
    addu a1,a2,a0
    .word 0xae250008
L1d2860:
    addiu v1,v1,1
    nop
L1d2868:
    .word 0x8c4500ac
    sltu a2,v1,a1
    bnez a2,L1d279c
    nop
    .word 0x8e240010
    sll v1,a0,0x1
    addu v1,v1,a0
    sltu at,a1,v1
    beqz at,L1d2898
    sll v1,a1,0x1
    addu v1,v1,a1
    .word 0xae230010
L1d2898:
    .word 0x8c4200ac
    bnez v0,L1d2910
    .word 0x3c020033
    .word 0x3c020033
    addiu s2,v0,-6624
    .word 0x8e420008
    beqz v0,L1d28ec
    .word 0x8e510000
    paddub a1,s0,zero
    paddub a0,s1,zero
    jal func_001d5d50
    addiu a2,zero,1
    beqz v0,L1d28ec
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s2,16
    bnez v0,L1d28ec
    nop
    .word 0xae420008
L1d28ec:
    .word 0x8e220014
    slti at,v0,2
    bnez at,L1d2970
    addiu v0,zero,2
    .word 0xae220014
    jal func_001d5ee0
    .word 0x8e240018
    b L1d2974
    .word 0x7bbf0030
L1d2910:
    addiu s2,v0,-6624
    .word 0x8e420008
    beqz v0,L1d2954
    .word 0x8e510000
    paddub a1,s0,zero
    paddub a0,s1,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d2954
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s2,16
    bnez v0,L1d2954
    nop
    .word 0xae420008
L1d2954:
    .word 0x8e220014
    slti at,v0,2
    bnez at,L1d2970
    addiu v0,zero,2
    .word 0xae220014
    jal func_001d5ee0
    .word 0x8e240018
L1d2970:
    .word 0x7bbf0030
L1d2974:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,80
}


