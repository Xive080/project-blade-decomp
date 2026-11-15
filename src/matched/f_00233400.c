extern void func_00121a58(void);
extern void func_0013b550(void);
extern void func_001214b8(void);
extern void func_00256438(void);
extern void func_002315a0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-192
    .word 0x7fbf0070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    addiu v1,zero,5
    .word 0xe7b40000
    beq a1,v1,L233634
    paddub s0,a0,zero
    addiu v1,zero,18
    beq a1,v1,L233578
    nop
    addiu v1,zero,11
    beq a1,v1,L2334e8
    nop
    addiu v1,zero,10
    beq a1,v1,L23345c
    nop
    b L233890
    .word 0x7bbf0070
L23345c:
    .word 0x8e03004c
    paddub a1,a2,zero
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s0,v0
    jal func_00121a58
    addiu a0,v0,80
    .word 0x8e04004c
    sll v1,a0,0x3
    addu v1,v1,a0
    sll v1,v1,0x3
    addu v1,v1,s0
    .word 0xac600090
    .word 0x8e04004c
    sll v1,a0,0x3
    addu v1,v1,a0
    sll v1,v1,0x3
    addu v1,v1,s0
    .word 0xac600094
    .word 0x8e03004c
    addiu a0,v1,1
    bgez a0,L2334c8
    andi v1,a0,0x7
    beqz v1,L2334c8
    nop
    addiu v1,v1,-8
L2334c8:
    .word 0xae03004c
    .word 0x8e030048
    slti at,v1,8
    beqz at,L23388c
    nop
    addiu v1,v1,1
    b L23388c
    .word 0xae030048
L2334e8:
    .word 0x8e03004c
    paddub a1,a2,zero
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s0,v0
    jal func_00121a58
    addiu a0,v0,80
    .word 0x8e04004c
    addiu a1,zero,1
    sll v1,a0,0x3
    addu v1,v1,a0
    sll v1,v1,0x3
    addu v1,v1,s0
    .word 0xac650090
    .word 0x8e04004c
    sll v1,a0,0x3
    addu v1,v1,a0
    sll v1,v1,0x3
    addu v1,v1,s0
    .word 0xac600094
    .word 0x8e03004c
    addiu a0,v1,1
    bgez a0,L233558
    andi v1,a0,0x7
    beqz v1,L233558
    nop
    addiu v1,v1,-8
L233558:
    .word 0xae03004c
    .word 0x8e030048
    slti at,v1,8
    beqz at,L23388c
    nop
    addiu v1,v1,1
    b L23388c
    .word 0xae030048
L233578:
    .word 0x8cc20004
    beqz v0,L233588
    .word 0x70008e28
    ori s1,s1,0x1
L233588:
    .word 0x8cc20008
    beqz v0,L2335a4
    nop
    .word 0x8cc20010
    beqz v0,L2335a4
    ori s1,s1,0x4
    ori s1,s1,0x8
L2335a4:
    .word 0x8e03004c
    .word 0xc4d4000c
    .word 0x8cc50000
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s0,v0
    jal func_00121a58
    addiu a0,v0,80
    .word 0x8e04004c
    sll v1,a0,0x3
    addu v1,v1,a0
    sll v1,v1,0x3
    addu v1,v1,s0
    .word 0xac710090
    .word 0x8e04004c
    sll v1,a0,0x3
    addu v1,v1,a0
    sll v1,v1,0x3
    addu v1,v1,s0
    .word 0xe4740094
    .word 0x8e03004c
    addiu a0,v1,1
    bgez a0,L233614
    andi v1,a0,0x7
    beqz v1,L233614
    nop
    addiu v1,v1,-8
L233614:
    .word 0xae03004c
    .word 0x8e030048
    slti at,v1,8
    beqz at,L23388c
    nop
    addiu v1,v1,1
    b L23388c
    .word 0xae030048
L233634:
    .word 0x8cc20004
    addiu s2,zero,4
    .word 0x8f848328
    paddub s1,a2,zero
    .word 0x70002e28
    .word 0x8c530058
    jal func_0013b550
    ori s2,s2,0x4
    bne s3,v0,L233664
    nop
    b L2336d4
    .word 0x70009e28
L233664:
    beqz s3,L2336d4
    nop
    .word 0x8e350004
    .word 0x96b40002
    slti at,s4,2
    bnez at,L2336c8
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,342
    paddub a1,v0,zero
    .word 0x8e220008
    .word 0x8ea60058
    addiu a0,sp,128
    .word 0x8c470004
    jal func_001214b8
    paddub t0,s4,zero
    .word 0x8e230008
    .word 0x8e220004
    .word 0x8c630004
    .word 0x94420002
    bne v1,v0,L2336d4
    nop
    b L2336d4
    ori s2,s2,0x8
L2336c8:
    .word 0x8ea50058
    jal func_00121a58
    addiu a0,sp,128
L2336d4:
    .word 0x8e220004
    .word 0x94440000
    andi v0,a0,0x8
    beqz v0,L2336ec
    nop
    ori s2,s2,0x2
L2336ec:
    beqz s3,L23379c
    nop
    .word 0x3c010030
    .word 0x9023a61f
    addiu v0,zero,5
    bne v1,v0,L233714
    nop
    andi v0,a0,0x4
    bnez v0,L23379c
    nop
L233714:
    .word 0x8e03004c
    addiu a1,sp,128
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s0,v0
    jal func_00121a58
    addiu a0,v0,80
    .word 0x8e03004c
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,v0,s0
    .word 0xac520090
    .word 0x8e03004c
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,v0,s0
    .word 0xac400094
    .word 0x8e02004c
    addiu v1,v0,1
    bgez v1,L233780
    andi v0,v1,0x7
    beqz v0,L233780
    nop
    addiu v0,v0,-8
L233780:
    .word 0xae02004c
    .word 0x8e020048
    slti at,v0,8
    beqz at,L23379c
    nop
    addiu v0,v0,1
    .word 0xae020048
L23379c:
    .word 0x8e220004
    .word 0xc4540050
    jal func_00256438
    .word 0x4600a306
    paddub s1,v0,zero
    beqz s1,L23388c
    nop
    .word 0x8f8484ac
    .word 0x3c023fb9
    ori v0,v0,0x999a
    .word 0x44826000
    .word 0x8e03002c
    .word 0x8c820018
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c440000
    jal func_002315a0
    .word 0x4600a346
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,343
    addiu a0,sp,128
    paddub a1,v0,zero
    jal func_001214b8
    paddub a2,s1,zero
    .word 0x8e03004c
    addiu a1,sp,128
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s0,v0
    jal func_00121a58
    addiu a0,v0,80
    .word 0x8e04004c
    addiu a1,zero,1
    sll v1,a0,0x3
    addu v1,v1,a0
    sll v1,v1,0x3
    addu v1,v1,s0
    .word 0xac650090
    .word 0x8e04004c
    sll v1,a0,0x3
    addu v1,v1,a0
    sll v1,v1,0x3
    addu v1,v1,s0
    .word 0xac600094
    .word 0x8e03004c
    addiu a0,v1,1
    bgez a0,L233870
    andi v1,a0,0x7
    beqz v1,L233870
    nop
    addiu v1,v1,-8
L233870:
    .word 0xae03004c
    .word 0x8e030048
    slti at,v1,8
    beqz at,L23388c
    nop
    addiu v1,v1,1
    .word 0xae030048
L23388c:
    .word 0x7bbf0070
L233890:
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,192
}


