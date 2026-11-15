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
    addiu s3,v0,-6624
    .word 0x7fb00000
    .word 0x8e630000
    paddub s4,a0,zero
    addiu v0,zero,3
    addiu a0,v1,20
    .word 0x8c630014
    bne v1,v0,L1d46b8
    .word 0x70001628
    addiu v0,zero,2
    .word 0xac820000
    .word 0x8e620000
    .word 0x8c420018
    nop
L1d46b8:
    .word 0x8c440008
    addiu v1,zero,-1
    .word 0x8c840000
    bne a0,v1,L1d46d4
    sll v1,a0,0x3
    b L1d4704
    .word 0x70008e28
L1d46d4:
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
    addiu s1,v1,20
L1d4704:
    .word 0x8c440008
    addiu v1,zero,-1
    .word 0x8c840004
    bne a0,v1,L1d4720
    sll v1,a0,0x3
    b L1d4750
    .word 0x70009628
L1d4720:
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
    addiu s2,v1,20
L1d4750:
    .word 0x8c440008
    addiu v1,zero,-1
    .word 0x8c840008
    bne a0,v1,L1d476c
    sll v1,a0,0x3
    b L1d479c
    .word 0x70002e28
L1d476c:
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
L1d479c:
    .word 0x8c440008
    addiu v1,zero,-1
    .word 0x8c84000c
    bne a0,v1,L1d47b8
    sll v1,a0,0x3
    b L1d47e8
    .word 0x70001e28
L1d47b8:
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
L1d47e8:
    beqz v1,L1d4804
    .word 0x8cb00008
    .word 0x8c620004
    beqz v0,L1d4804
    nop
    b L1d4814
    .word 0x8c750008
L1d4804:
    .word 0x3c020033
    addiu v1,v0,-23008
    .word 0x8f828618
    addu s5,v1,v0
L1d4814:
    .word 0x8ea50010
    beqz a1,L1d4870
    addiu a0,zero,1
    jal func_001c5eb0
    addiu a0,zero,1
    .word 0x8ea5001c
    jal func_001c5eb0
    addiu a0,zero,9
    .word 0x8ea50014
    .word 0x8ea20018
    bne a1,v0,L1d4854
    addiu a0,zero,3
    jal func_001c5eb0
    addiu a0,zero,2
    b L1d487c
    .word 0x8ea20000
L1d4854:
    jal func_001c5eb0
    nop
    .word 0x8ea50018
    jal func_001c5eb0
    addiu a0,zero,4
    b L1d4878
    nop
L1d4870:
    jal func_001c5eb0
    .word 0x70002e28
L1d4878:
    .word 0x8ea20000
L1d487c:
    addiu a1,zero,1
    addiu a0,zero,12
    andi v0,v0,0x8
    jal func_001c5eb0
    movz a1,zero,v0
    beqz s2,L1d48c4
    nop
    .word 0x8e42000c
    beqz v0,L1d48c4
    nop
    .word 0x8e250008
    .word 0x8e0600b0
    .word 0x8e470008
    .word 0x8e480010
    jal func_001c5f50
    addiu a0,zero,3
    b L1d48d8
    .word 0x8e620008
L1d48c4:
    .word 0x8e250008
    .word 0x8e0600b0
    jal func_001c5f30
    addiu a0,zero,3
    .word 0x8e620008
L1d48d8:
    beqz v0,L1d4914
    .word 0x8e700000
    paddub a1,s4,zero
    paddub a0,s0,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d4914
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s3,16
    bnez v0,L1d4914
    nop
    .word 0xae620008
L1d4914:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d4930
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
L1d4930:
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


