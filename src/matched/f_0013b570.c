extern void func_001bf2b0(void);
extern void func_001ca2d0(void);
extern void func_00121910(void);
extern void func_001ca6a0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-176
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s5,a1,zero
    paddub s6,a0,zero
    .word 0x70008628
    beqz s5,L13b5bc
    .word 0x70009628
    beqz s6,L13b5c0
    .word 0x70001628
    .word 0x8ec20000
    beqz v0,L13b5cc
    addiu a1,sp,128
L13b5bc:
    .word 0x70001628
L13b5c0:
    b L13b858
    .word 0x7bbf0070
    addiu a1,sp,128
L13b5cc:
    jal func_001bf2b0
    paddub a0,s5,zero
    bnez v0,L13b5e8
    addiu s3,sp,132
    b L13b854
    .word 0x70001628
    addiu s3,sp,132
L13b5e8:
    .word 0x8e620000
    sltiu at,v0,21
    beqz at,L13b604
    addiu a1,sp,144
    b L13b854
    .word 0x70001628
    addiu a1,sp,144
L13b604:
    addiu a2,zero,20
    jal func_001ca2d0
    paddub a0,s5,zero
    addiu v1,zero,20
    beq v0,v1,L13b624
    nop
    b L13b854
    .word 0x70001628
L13b624:
    .word 0x8e630000
    .word 0x3c02002e
    addiu a0,v0,-8176
    addiu a1,sp,144
    addiu v0,v1,-20
    jal func_00121910
    .word 0xae620000
    addiu v1,zero,1
    .word 0x70002628
    movz a0,v1,v0
    bnez a0,L13b658
    nop
    paddub s0,v1,zero
L13b658:
    beqz s0,L13b674
    nop
    .word 0x8e650000
    jal func_001ca6a0
    paddub a0,s5,zero
    b L13b6f0
    addiu a1,sp,128
L13b674:
    .word 0x8e650000
    .word 0x8fa200a0
    sltu at,a1,v0
    beqz at,L13b690
    nop
    b L13b854
    .word 0x70001628
L13b690:
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c42013c
    jalr ra,v0
    addiu a0,zero,1
    bnez v0,L13b6b4
    paddub s2,v0,zero
    b L13b854
    .word 0x70001628
L13b6b4:
    .word 0x8e740000
    paddub a0,s5,zero
    paddub a1,s2,zero
    jal func_001ca2d0
    paddub a2,s4,zero
    beq s4,v0,L13b6ec
    nop
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s2,zero
    b L13b854
    .word 0x70001628
L13b6ec:
    addiu a1,sp,128
L13b6f0:
    jal func_001bf2b0
    paddub a0,s5,zero
    bnez v0,L13b71c
    nop
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s2,zero
    b L13b854
    .word 0x70001628
L13b71c:
    beqz s0,L13b73c
    addiu s4,sp,160
    .word 0x8e650000
    jal func_001ca6a0
    paddub a0,s5,zero
    b L13b844
    nop
    addiu s4,sp,160
L13b73c:
    .word 0x8e650000
    .word 0x8e830000
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c42013c
    addiu a1,a1,12
    sll v1,v1,0x2
    addiu a0,zero,1
    jalr ra,v0
    addu a1,a1,v1
    bnez v0,L13b788
    paddub s1,v0,zero
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s2,zero
    b L13b854
    .word 0x70001628
L13b788:
    .word 0x8e830000
    addiu v0,s1,12
    paddub a0,s5,zero
    .word 0xae230000
    .word 0xae220008
    .word 0x8e230008
    .word 0x8e620000
    addu v0,v1,v0
    .word 0xae220004
    .word 0x8e730000
    .word 0x8e250008
    jal func_001ca2d0
    paddub a2,s3,zero
    beq s3,v0,L13b7f0
    nop
    .word 0x3c020033
    addiu v0,v0,-23008
    addiu s0,v0,308
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s1,zero
    .word 0x8e020000
    jalr ra,v0
    paddub a0,s2,zero
    b L13b854
    .word 0x70001628
L13b7f0:
    .word 0x8e250008
    .word 0x70002628
    b L13b820
    .word 0x70003628
L13b800:
    .word 0x8e230004
    addu v0,s2,a0
    addiu a0,a0,1
    addu v1,v1,a2
    .word 0xac650000
    .word 0x90420000
    addiu a2,a2,4
    addu a1,a1,v0
L13b820:
    .word 0x8e220000
    sltu v0,a0,v0
    bnez v0,L13b800
    nop
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s2,zero
L13b844:
    bnez s0,L13b854
    addiu v0,zero,1
    .word 0xaed10000
    addiu v0,zero,1
L13b854:
    .word 0x7bbf0070
L13b858:
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,176
}


