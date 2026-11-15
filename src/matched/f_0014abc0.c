extern void func_001fefa0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffd0
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c82003c
    .word 0x304255e0
    beqz v0, L14abec
    .word 0x70808628
    .word 0x8e020560
    beqz v0, L14abf4
    nop
L14abec:
    b L14ae24
    .word 0x70001628
L14abf4:
    .word 0x8e040008
    .word 0x3c020030
    .word 0x244234d0
    .word 0x00041940
    .word 0x00642021
    .word 0x000418c0
    .word 0x00831821
    .word 0x00031880
    .word 0x00431021
    .word 0xaf828030
    .word 0x8e02051c
    bnez v0, L14ace8
    nop
    .word 0x8f828030
    .word 0x8c450478
    jal func_001fefa0
    .word 0x8e040474
    .word 0x8f828030
    .word 0x8c45047c
    jal func_001fefa0
    .word 0x8e040478
    b L14acc8
    .word 0x70004628
L14ac50:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e090474
    .word 0x8e030478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    .word 0x00e63021
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    .word 0x00a42021
    .word 0x00621021
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
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
L14acc8:
    .word 0x8e030470
    .word 0x8c620004
    .word 0x0102102a
    bnez v0, L14ac50
    nop
    addiu v0,zero,95
    b L14ada4
    .word 0xae02047c
L14ace8:
    .word 0x8f828030
    .word 0x8c450484
    jal func_001fefa0
    .word 0x8e040474
    .word 0x8f828030
    .word 0x8c450488
    jal func_001fefa0
    .word 0x8e040478
    b L14ad88
    .word 0x70004628
L14ad10:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e090474
    .word 0x8e030478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    .word 0x00e63021
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    .word 0x00a42021
    .word 0x00621021
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
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
L14ad88:
    .word 0x8e030470
    .word 0x8c620004
    .word 0x0102102a
    bnez v0, L14ad10
    nop
    addiu v0,zero,96
    .word 0xae02047c
L14ada4:
    addiu v0,zero,5
    .word 0xae020560
    .word 0xae00052c
    .word 0x8e03003c
    addiu v0,zero,128
    bne v1,v0, L14ae24
    addiu v0,zero,1
    addiu a1,zero,256
    beq v1,a1, L14ae14
    .word 0x3c010001
    .word 0x8e020010
    .word 0x30420002
    bnez v0, L14ae10
    nop
    .word 0x8e02000c
    .word 0x72002628
    .word 0x8c420010
    jalr ra,v0
    .word 0x2611000c
    beqz v0, L14ae10
    nop
    .word 0x8e220000
    addiu a1,zero,256
    .word 0x72002628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L14ae10:
    .word 0x3c010001
L14ae14:
    .word 0x02010821
    .word 0x3c023f80
    .word 0xac22ea00
    addiu v0,zero,1
L14ae24:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0030
}
