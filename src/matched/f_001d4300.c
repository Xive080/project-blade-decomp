extern void func_001c5eb0(void);
extern void func_001c5f50(void);
extern void func_001c5f30(void);
extern void func_001d5d50(void);
extern void func_001d5ee0(void);
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
    bne v1,v0,L1d4358
    .word 0x70001628
    addiu v0,zero,2
    .word 0xac820000
    .word 0x8e820000
    .word 0x8c420018
    nop
L1d4358:
    .word 0x8c440008
    addiu v1,zero,-1
    .word 0x8c840000
    bne a0,v1,L1d4374
    sll v1,a0,0x3
    b L1d43a4
    .word 0x70009628
L1d4374:
    subu v1,v1,a0
    sll v1,v1,0x2
    addu a0,v1,v0
    .word 0x8c830018
    .word 0xac83001c
    .word 0x8c430008
    .word 0x8c640000
    sll v1,a0,0x3
    subu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v0,v1
    addiu s2,v1,20
L1d43a4:
    .word 0x8c440008
    addiu v1,zero,-1
    .word 0x8c840004
    bne a0,v1,L1d43c0
    sll v1,a0,0x3
    b L1d43f0
    .word 0x70009e28
L1d43c0:
    subu v1,v1,a0
    sll v1,v1,0x2
    addu a0,v1,v0
    .word 0x8c830018
    .word 0xac83001c
    .word 0x8c430008
    .word 0x8c640004
    sll v1,a0,0x3
    subu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v0,v1
    addiu s3,v1,20
L1d43f0:
    .word 0x8c440008
    addiu v1,zero,-1
    .word 0x8c840008
    bne a0,v1,L1d440c
    sll v1,a0,0x3
    b L1d443c
    .word 0x70002e28
L1d440c:
    subu v1,v1,a0
    sll v1,v1,0x2
    addu a0,v1,v0
    .word 0x8c830018
    .word 0xac83001c
    .word 0x8c430008
    .word 0x8c640008
    sll v1,a0,0x3
    subu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v0,v1
    addiu a1,v1,20
L1d443c:
    .word 0x8c440008
    addiu v1,zero,-1
    .word 0x8c84000c
    bne a0,v1,L1d4458
    sll v1,a0,0x3
    b L1d4488
    .word 0x70001e28
L1d4458:
    subu v1,v1,a0
    sll v1,v1,0x2
    addu a0,v1,v0
    .word 0x8c830018
    .word 0xac83001c
    .word 0x8c430008
    .word 0x8c64000c
    sll v1,a0,0x3
    subu v1,v1,a0
    sll v1,v1,0x2
    addu v0,v0,v1
    addiu v1,v0,20
L1d4488:
    beqz v1,L1d44a4
    .word 0x8cb00008
    .word 0x8c620004
    beqz v0,L1d44a4
    nop
    b L1d44b4
    .word 0x8c710008
L1d44a4:
    .word 0x3c020033
    addiu v1,v0,-23008
    .word 0x8f828618
    addu s1,v1,v0
L1d44b4:
    .word 0x8e250010
    beqz a1,L1d4510
    addiu a0,zero,1
    jal func_001c5eb0
    addiu a0,zero,1
    .word 0x8e25001c
    jal func_001c5eb0
    addiu a0,zero,9
    .word 0x8e250014
    .word 0x8e220018
    bne a1,v0,L1d44f4
    addiu a0,zero,3
    jal func_001c5eb0
    addiu a0,zero,2
    b L1d451c
    .word 0x8e250004
L1d44f4:
    jal func_001c5eb0
    nop
    .word 0x8e250018
    jal func_001c5eb0
    addiu a0,zero,4
    b L1d4518
    nop
L1d4510:
    jal func_001c5eb0
    .word 0x70002e28
L1d4518:
    .word 0x8e250004
L1d451c:
    jal func_001c5eb0
    addiu a0,zero,7
    .word 0x8e220000
    addiu a1,zero,1
    addiu a0,zero,12
    andi v0,v0,0x8
    jal func_001c5eb0
    movz a1,zero,v0
    .word 0x8e250008
    jal func_001c5eb0
    addiu a0,zero,10
    .word 0x8e25000c
    jal func_001c5eb0
    addiu a0,zero,11
    .word 0x8e220000
    addiu a1,zero,1
    addiu a0,zero,6
    andi v0,v0,0x2
    jal func_001c5eb0
    movz a1,zero,v0
    .word 0x8e220000
    addiu a1,zero,1
    addiu a0,zero,8
    andi v0,v0,0x4
    jal func_001c5eb0
    movz a1,zero,v0
    beq zero,s3,L1d45bc
    nop
    .word 0x8e620010
    beqz v0,L1d45bc
    nop
    .word 0x8e0200ac
    .word 0x8e450008
    .word 0x8e670008
    .word 0x8e0600b0
    addiu a0,zero,1
    jal func_001c5f50
    sll t0,v0,0x1
    b L1d45d0
    .word 0x8e820008
L1d45bc:
    .word 0x8e450008
    .word 0x8e0600b0
    jal func_001c5f30
    addiu a0,zero,1
    .word 0x8e820008
L1d45d0:
    beqz v0,L1d460c
    .word 0x8e900000
    paddub a1,s5,zero
    paddub a0,s0,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d460c
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s4,16
    bnez v0,L1d460c
    nop
    .word 0xae820008
L1d460c:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d4628
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
L1d4628:
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,112
}


