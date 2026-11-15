extern void func_001bee90(void);
extern void func_001bf190(void);
extern void func_001ca470(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-160
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x90a20022
    paddub s4,a0,zero
    andi v0,v0,0x1e
    beqz v0,L1e7498
    paddub s3,a1,zero
    b L1e767c
    paddub v0,zero,zero
L1e7498:
    .word 0x8f84877c
    .word 0x8e63000c
    addiu s2,sp,110
    addiu v0,zero,2
    addu s0,s3,a0
    .word 0x8e050028
    .word 0x8e04002c
    .word 0xafa30060
    .word 0x8e630010
    addu s1,a1,a0
    .word 0xafa30064
    .word 0x8e630014
    .word 0xafa30068
    .word 0x92640023
    .word 0x92630020
    dsll32 a0,a0,0x10
    dsra32 a0,a0,0x10
    sll a0,a0,0x8
    or v1,a0,v1
    .word 0xa7a3006c
    .word 0xa6400000
    .word 0x92030036
    bne v1,v0,L1e750c
    nop
    .word 0x8e630014
    addiu v0,zero,8
    bne v1,v0,L1e750c
    addiu v0,zero,1
    .word 0xa6420000
L1e750c:
    .word 0x92030036
    addiu v0,zero,1
    andi v1,v1,0x1
    bne v1,v0,L1e7524
    addiu v0,zero,2
    .word 0xa6420000
L1e7524:
    .word 0x8e020008
    paddub a0,s4,zero
    addiu a1,zero,1
    addiu a2,zero,64
    addiu a3,zero,784
    .word 0xafa20070
    .word 0x8e02000c
    .word 0xafa20074
    .word 0x8e020010
    .word 0xafa20078
    .word 0x92020016
    .word 0xafa2007c
    .word 0x8e020018
    .word 0xafa20080
    .word 0x8e02001c
    .word 0xafa20084
    .word 0x8e020020
    .word 0xafa20088
    .word 0x8e020024
    .word 0xafa2008c
    .word 0x8e020028
    .word 0xafa20090
    .word 0x8e02002c
    .word 0xafa20094
    .word 0x8e020030
    .word 0xafa20098
    .word 0x96020014
    jal func_001bee90
    .word 0xafa2009c
    bnez v0,L1e75a8
    addiu a1,sp,96
    b L1e767c
    paddub v0,zero,zero
L1e75a8:
    paddub a0,s4,zero
    jal func_001bf190
    addiu a2,zero,64
    bnez v0,L1e75c4
    paddub a0,s4,zero
    b L1e767c
    paddub v0,zero,zero
L1e75c4:
    addiu a1,zero,1
    paddub a2,s1,zero
    jal func_001bee90
    addiu a3,zero,784
    bnez v0,L1e75e4
    paddub v0,zero,zero
    b L1e7680
    .word 0x7bbf0050
L1e75e4:
    .word 0x96430000
    beqz v1,L1e75f8
    addiu v0,zero,1
    bne v1,v0,L1e7618
    addiu v0,zero,2
L1e75f8:
    .word 0x8e650004
    paddub a0,s4,zero
    jal func_001ca470
    paddub a2,s1,zero
    bnez v0,L1e767c
    paddub v0,s3,zero
    b L1e767c
    paddub v0,zero,zero
L1e7618:
    bne v1,v0,L1e7670
    paddub v0,zero,zero
    .word 0x8e620024
    .word 0x8e060028
    .word 0x8c450004
    jal func_001ca470
    paddub a0,s4,zero
    bnez v0,L1e7644
    paddub v0,zero,zero
    b L1e767c
    nop
L1e7644:
    .word 0x8e06002c
    beqz a2,L1e7678
    nop
    .word 0x8e620008
    paddub a0,s4,zero
    jal func_001ca470
    addiu a1,v0,-80
    bnez v0,L1e7678
    paddub v0,zero,zero
    b L1e767c
    nop
L1e7670:
    b L1e767c
    nop
L1e7678:
    paddub v0,s3,zero
L1e767c:
    .word 0x7bbf0050
L1e7680:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,160
}
