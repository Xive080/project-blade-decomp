extern void func_001fefa0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x8c82003c
    andi v0,v0,0x5560
    beqz v0,L14a830
    .word 0x70808628
    .word 0x8e020560
    bnez v0,L14a834
    .word 0x70001628
    .word 0xc601052c
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1tl L14a810
    neg.s $f1,$f1
    b L14a814
    .word 0x3c023f4c
    neg.s $f1,$f1
L14a810:
    .word 0x3c023f4c
L14a814:
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L14a83c
    nop
L14a830:
    .word 0x70001628
L14a834:
    b L14a930
    .word 0x7bbf0010
L14a83c:
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
    .word 0x8f828030
    .word 0x8c45046c
    jal func_001fefa0
    .word 0x8e040474
    .word 0x8f828030
    .word 0x8c450470
    jal func_001fefa0
    .word 0x8e040478
    b L14a900
    .word 0x70004628
L14a88c:
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
L14a900:
    .word 0x8e030470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14a88c
    nop
    addiu v0,zero,94
    .word 0xae02047c
    addiu v0,zero,5
    .word 0xae020560
    addiu v0,zero,1
    .word 0xae00052c
    .word 0x7bbf0010
L14a930:
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
