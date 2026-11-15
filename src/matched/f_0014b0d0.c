extern void func_001fefa0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c82003c
    andi v0,v0,0x55e0
    beqz v0,L14b0fc
    paddub s0,a0,zero
    .word 0x8e020560
    beqz v0,L14b104
    nop
L14b0fc:
    b L14b340
    paddub v0,zero,zero
L14b104:
    .word 0x8e040008
    .word 0x3c020030
    addiu v0,v0,13520
    sll v1,a0,0x5
    addu a0,v1,a0
    sll v1,a0,0x3
    addu v1,a0,v1
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0xaf828030
    .word 0x8e02051c
    bnez v0,L14b1f8
    nop
    .word 0x8f828030
    .word 0x8c450040
    jal func_001fefa0
    .word 0x8e040474
    .word 0x8f828030
    .word 0x8c450044
    jal func_001fefa0
    .word 0x8e040478
    b L14b1d8
    paddub t0,zero,zero
L14b160:
    .word 0x8c62003c
    addiu a3,v1,88
    .word 0x8e090474
    .word 0x8e030478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    addiu v1,t1,88
    mult1 a0,t0,a0
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    addiu t0,t0,1
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14b1d8:
    .word 0x8e030470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14b160
    nop
    addiu v0,zero,5
    b L14b2b4
    .word 0xae02047c
L14b1f8:
    .word 0x8f828030
    .word 0x8c450034
    jal func_001fefa0
    .word 0x8e040474
    .word 0x8f828030
    .word 0x8c450038
    jal func_001fefa0
    .word 0x8e040478
    b L14b298
    paddub t0,zero,zero
L14b220:
    .word 0x8c62003c
    addiu a3,v1,88
    .word 0x8e090474
    .word 0x8e030478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    addiu v1,t1,88
    mult1 a0,t0,a0
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    addiu t0,t0,1
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14b298:
    .word 0x8e030470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14b220
    nop
    addiu v0,zero,4
    .word 0xae02047c
L14b2b4:
    .word 0x8e040010
    addiu v1,zero,1
    addiu v0,zero,128
    ori a0,a0,0x80
    .word 0xae040010
    .word 0xae030560
    .word 0xae00052c
    .word 0x8e03003c
    bne v1,v0,L14b340
    addiu v0,zero,1
    addiu a1,zero,256
    beq v1,a1,L14b330
    .word 0x3c010001
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L14b32c
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s0,12
    beqz v0,L14b32c
    nop
    .word 0x8e220000
    addiu a1,zero,256
    paddub a0,s0,zero
    .word 0x8c420014
    jalr ra,v0
    paddub a2,zero,zero
L14b32c:
    .word 0x3c010001
L14b330:
    addu at,s0,at
    .word 0x3c023f80
    .word 0xac22ea00
    addiu v0,zero,1
L14b340:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
