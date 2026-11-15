extern void func_001d8240(void);
extern void func_001d8120(void);
extern void func_001d5d50(void);
extern void func_001d5ee0(void);
extern void func_001dbe60(void);
extern void func_001d8080(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x3c020033
    addiu s4,v0,-6624
    .word 0x7fb00000
    .word 0x8e830000
    paddub s5,a0,zero
    addiu v0,zero,3
    addiu a0,v1,20
    .word 0x8c630014
    bne v1,v0,L1d3358
    paddub s2,a1,zero
    addiu v0,zero,2
    .word 0xac820000
    .word 0x8e820000
    b L1d335c
    .word 0x8c500018
L1d3358:
    .word 0x70008628
L1d335c:
    paddub a0,s0,zero
    .word 0x70002e28
    jal func_001d8240
    paddub a2,s5,zero
    .word 0x8e030008
    .word 0x8c510008
    .word 0x8c630004
    addiu v0,zero,-1
    bne v1,v0,L1d338c
    sll v0,v1,0x3
    b L1d33bc
    .word 0x70009e28
L1d338c:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s0
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e020008
    .word 0x8c430004
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s0,v0
    addiu s3,v0,20
L1d33bc:
    .word 0x8e650010
    bnez a1,L1d3534
    paddub a0,s0,zero
    addiu a1,zero,1
    jal func_001d8240
    paddub a2,s5,zero
    .word 0x8e2400a8
    addiu v1,zero,1
    bne a0,v1,L1d3468
    addiu a2,zero,2
    .word 0x8e2300ac
    paddub a0,v0,zero
    addiu a2,zero,2
    sll s0,v1,0x1
    jal func_001d8120
    paddub a1,s0,zero
    .word 0x8c440008
    sltu at,zero,s0
    beqz at,L1d3460
    .word 0x70002e28
    sltiu at,s0,3
    bnez at,L1d3438
    addiu a2,s0,-2
L1d3418:
    .word 0xa4850000
    addiu v1,a1,1
    .word 0xa4830002
    addiu a1,a1,2
    sltu v1,a1,a2
    bnez v1,L1d3418
    addiu a0,a0,4
    nop
L1d3438:
    sltu at,a1,s0
    beqz at,L1d3460
    nop
L1d3444:
    .word 0xa4850000
    addiu a1,a1,1
    sltu v1,a1,s0
    addiu a0,a0,2
    nop
    bnez v1,L1d3444
    nop
L1d3460:
    b L1d3650
    .word 0xac500010
L1d3468:
    bne a0,a2,L1d34c8
    nop
    .word 0x8e2300ac
    paddub a0,v0,zero
    sll s0,v1,0x1
    jal func_001d8120
    paddub a1,s0,zero
    .word 0x8c440008
    b L1d34a8
    .word 0x70002e28
L1d3490:
    .word 0xa4850000
    addiu v1,a1,1
    .word 0xa4830002
    addiu a0,a0,4
    addiu a1,a1,1
    nop
L1d34a8:
    .word 0x8e2300ac
    sltu v1,a1,v1
    bnez v1,L1d3490
    nop
    .word 0xac500010
    addiu v0,zero,1
    b L1d3650
    .word 0xae2200a8
L1d34c8:
    .word 0x8e820008
    beqz v0,L1d3508
    .word 0x8e900000
    paddub a1,s5,zero
    paddub a0,s0,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d3508
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s4,16
    bnez v0,L1d3508
    nop
    .word 0xae820008
L1d3508:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d352c
    .word 0x70001628
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
    .word 0x70001628
L1d352c:
    b L1d36b8
    .word 0x7bbf0060
L1d3534:
    .word 0x8e2300a8
    addiu v0,zero,1
    beq v1,v0,L1d3650
    addiu v0,zero,2
    bne v1,v0,L1d35e4
    nop
    .word 0x96660002
    addiu v0,zero,-1
    addu s0,a1,v0
    addiu v1,s0,-1
    .word 0x8e440004
    .word 0x8e620004
    mult v1,a2,v1
    sll a1,s0,0x2
    jal func_001dbe60
    addu s2,v0,v1
    paddub a0,s3,zero
    sll a3,s0,0x1
    paddub a1,v0,zero
    jal func_001d8080
    addiu a2,zero,2
    .word 0x94450002
    addiu v1,s0,-1
    sll a0,v1,0x1
    .word 0x8c430004
    sltu at,zero,s0
    .word 0x70003628
    mult a0,a1,a0
    beqz at,L1d35d0
    addu a1,v1,a0
L1d35ac:
    .word 0x96440002
    addiu a2,a2,1
    sltu v1,a2,s0
    .word 0xa4a40002
    .word 0x96440000
    .word 0xa4a40000
    addiu a1,a1,-4
    bnez v1,L1d35ac
    addiu s2,s2,-2
L1d35d0:
    sll v1,s0,0x1
    .word 0xac430010
    addiu v0,zero,1
    b L1d3650
    .word 0xae2200a8
L1d35e4:
    .word 0x8e820008
    beqz v0,L1d3624
    .word 0x8e900000
    paddub a1,s5,zero
    paddub a0,s0,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d3624
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s4,16
    bnez v0,L1d3624
    nop
    .word 0xae820008
L1d3624:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d3648
    .word 0x70001628
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
    .word 0x70001628
L1d3648:
    b L1d36b4
    nop
L1d3650:
    .word 0x8e820008
    beqz v0,L1d3690
    .word 0x8e900000
    paddub a1,s5,zero
    paddub a0,s0,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d3690
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s4,16
    bnez v0,L1d3690
    nop
    .word 0xae820008
L1d3690:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d36b4
    addiu v0,zero,1
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
    addiu v0,zero,1
L1d36b4:
    .word 0x7bbf0060
L1d36b8:
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}


