extern void fn_1eea80(void);
extern void fn_1dee30(void);
asm void f_001f0570(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s4,a0,zero
    paddub s3,a1,zero
    paddub s2,a2,zero
    paddub s1,a3,zero
    b L1f0788
    addiu s5,t0,-1
L1f05a8:
    .word 0x7822f5e0
    b L1f0770
    subu s5,s5,s0
    sltiu at,s0,17
L1f05b8:
    bnez at,L1f05c8
    paddub v1,s0,zero
    addiu v1,zero,16
    nop
L1f05c8:
    sll a0,v1,0x3
    dsll32 a0,a0,0x0
    dsrl32 a0,a0,0x0
    daddiu a1,a0,2
    .word 0x3c041000
    or a2,a1,a0
    .word 0x3c040100
    ori a0,a0,0x404
    dsll a0,a0,0x10
    dsll32 a1,v1,0x0
    ori a0,a0,0x400
    dsrl32 a1,a1,0x0
    dsll a0,a0,0x10
    or a1,a1,a0
    subu s0,s0,v1
    pcpyld a3,a1,a2
    .word 0x8f868690
    sll a0,v1,0x13
    dsll32 a1,a0,0x0
    .word 0x3c047c00
    dsrl32 a1,a1,0x0
    ori a0,a0,0x8000
    or a0,a1,a0
    .word 0x7cc70000
    dsll32 a1,a0,0x0
    .word 0x8f848690
    .word 0x3c06c000
    ori a2,a2,0xc000
    dsll a2,a2,0x10
    ori a2,a2,0x2000
    dsll a2,a2,0x10
    addiu a0,a0,16
    .word 0xaf848690
    pcpyld a3,a1,a2
    .word 0x8f848690
    .word 0x7c870000
    .word 0x8f848690
    addiu a0,a0,16
    b L1f0748
    .word 0xaf848690
L1f0668:
    .word 0x96260000
    .word 0x96240002
    .word 0x8f858690
    sll a2,a2,0x6
    addu a3,s2,a2
    .word 0x78e60000
    sll a0,a0,0x6
    addu a0,s2,a0
    addiu s1,s1,2
    .word 0x7ca60000
    .word 0x8f858690
    addiu a1,a1,16
    .word 0xaf858690
    .word 0x78e60010
    .word 0x8f858690
    .word 0x7ca60000
    .word 0x8f858690
    addiu a1,a1,16
    .word 0xaf858690
    .word 0x78e60020
    .word 0x8f858690
    .word 0x7ca60000
    .word 0x8f858690
    addiu a1,a1,16
    .word 0xaf858690
    .word 0x78e60030
    .word 0x8f858690
    .word 0x7ca60000
    .word 0x8f858690
    addiu a1,a1,16
    .word 0xaf858690
    .word 0x78860000
    .word 0x8f858690
    .word 0x7ca60000
    .word 0x8f858690
    addiu a1,a1,16
    .word 0xaf858690
    .word 0x78860010
    .word 0x8f858690
    .word 0x7ca60000
    .word 0x8f858690
    addiu a1,a1,16
    .word 0xaf858690
    .word 0x78860020
    .word 0x8f858690
    .word 0x7ca60000
    .word 0x8f858690
    addiu a1,a1,16
    .word 0xaf858690
    .word 0x78850030
    .word 0x8f848690
    .word 0x7c850000
    .word 0x8f848690
    addiu a0,a0,16
    .word 0xaf848690
    nop
L1f0748:
    paddub a0,v1,zero
    bnez a0,L1f0668
    addiu v1,v1,-1
    .word 0x8f838690
    .word 0x3c010033
    .word 0x7c620000
    .word 0x8f838690
    .word 0x7822f560
    addiu v1,v1,16
    .word 0xaf838690
L1f0770:
    bnez s0,L1f05b8
    sltiu at,s0,17
    jal fn_1eea80
    nop
    jal fn_1dee30
    nop
L1f0788:
    beqz s5,L1f07d8
    paddub s0,s5,zero
    .word 0x8f8287e0
    sltu at,v0,s5
    beqz at,L1f07a8
    nop
    paddub s0,v0,zero
    nop
L1f07a8:
    .word 0x8e880004
    .word 0x8e820000
    addiu a0,zero,3
    addiu a1,zero,8
    paddub a2,s0,zero
    addiu a3,zero,1
    jalr ra,v0
    paddub t1,s3,zero
    beqzl v0,L1f07dc
    paddub s0,zero,zero
    b L1f07e0
    nop
L1f07d8:
    paddub s0,zero,zero
L1f07dc:
    nop
L1f07e0:
    bnez s0,L1f05a8
    .word 0x3c010033
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}
