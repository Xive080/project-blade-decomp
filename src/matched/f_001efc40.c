extern void func_001eea80(void);
extern void func_001dee30(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    sltiu at,a3,3
    .word 0x7fb00000
    paddub s4,a0,zero
    paddub s3,a1,zero
    bnez at,L1efc7c
    paddub s2,a2,zero
    b L1efc80
    addiu s1,a3,-2
L1efc7c:
    .word 0x70008e28
L1efc80:
    b L1efed0
    addiu s5,zero,1
L1efc88:
    .word 0x7822f5e0
    b L1efeb8
    subu s1,s1,s0
    sltiu at,s0,17
L1efc98:
    bnez at,L1efca8
    paddub v1,s0,zero
    addiu v1,zero,16
    nop
L1efca8:
    sll a0,v1,0x1
    addu a2,a0,v1
    sll a0,a2,0x2
    dsll32 a0,a0,0x0
    dsrl32 a0,a0,0x0
    daddiu a1,a0,2
    .word 0x3c041000
    or t0,a1,a0
    .word 0x3c040100
    ori a0,a0,0x404
    dsll a0,a0,0x10
    dsll32 a1,v1,0x0
    ori a0,a0,0x400
    dsrl32 a1,a1,0x0
    dsll a0,a0,0x10
    or a1,a1,a0
    subu s0,s0,v1
    pcpyld a3,a1,t0
    sll a0,a2,0x12
    dsll32 a1,a0,0x0
    .word 0x8f868690
    .word 0x3c047c00
    dsrl32 a1,a1,0x0
    ori a0,a0,0x8000
    or a0,a1,a0
    .word 0x3c08c000
    ori t0,t0,0xc000
    dsll t0,t0,0x10
    ori t0,t0,0x2000
    dsll32 a1,a0,0x0
    .word 0x7cc70000
    .word 0x8f848690
    dsll t0,t0,0x10
    addiu a0,a0,16
    .word 0xaf848690
    pcpyld a3,a1,t0
    .word 0x8f848690
    .word 0x7c870000
    .word 0x8f848690
    addiu a0,a0,16
    b L1efe90
    .word 0xaf848690
L1efd50:
    .word 0x7a470000
    .word 0x8f868690
    sll a0,s5,0x6
    xori a1,s5,0x3
    sll a1,a1,0x6
    addu a0,s2,a0
    addu a1,s2,a1
    .word 0x7cc70000
    .word 0x8f868690
    xori s5,s5,0x3
    addiu a2,a2,16
    .word 0xaf868690
    .word 0x7a470010
    .word 0x8f868690
    .word 0x7cc70000
    .word 0x8f868690
    addiu a2,a2,16
    .word 0xaf868690
    .word 0x7a470020
    .word 0x8f868690
    .word 0x7cc70000
    .word 0x8f868690
    addiu a2,a2,16
    .word 0xaf868690
    .word 0x7a470030
    .word 0x8f868690
    addiu s2,s2,64
    .word 0x7cc70000
    .word 0x8f868690
    addiu a2,a2,16
    .word 0xaf868690
    .word 0x78870000
    .word 0x8f868690
    .word 0x7cc70000
    .word 0x8f868690
    addiu a2,a2,16
    .word 0xaf868690
    .word 0x78870010
    .word 0x8f868690
    .word 0x7cc70000
    .word 0x8f868690
    addiu a2,a2,16
    .word 0xaf868690
    .word 0x78870020
    .word 0x8f868690
    .word 0x7cc70000
    .word 0x8f868690
    addiu a2,a2,16
    .word 0xaf868690
    .word 0x78860030
    .word 0x8f848690
    .word 0x7c860000
    .word 0x8f848690
    addiu a0,a0,16
    .word 0xaf848690
    .word 0x78a60000
    .word 0x8f848690
    .word 0x7c860000
    .word 0x8f848690
    addiu a0,a0,16
    .word 0xaf848690
    .word 0x78a60010
    .word 0x8f848690
    .word 0x7c860000
    .word 0x8f848690
    addiu a0,a0,16
    .word 0xaf848690
    .word 0x78a60020
    .word 0x8f848690
    .word 0x7c860000
    .word 0x8f848690
    addiu a0,a0,16
    .word 0xaf848690
    .word 0x78a50030
    .word 0x8f848690
    .word 0x7c850000
    .word 0x8f848690
    addiu a0,a0,16
    .word 0xaf848690
    nop
L1efe90:
    paddub a0,v1,zero
    bnez a0,L1efd50
    addiu v1,v1,-1
    .word 0x8f838690
    .word 0x3c010033
    .word 0x7c620000
    .word 0x8f838690
    .word 0x7822f560
    addiu v1,v1,16
    .word 0xaf838690
L1efeb8:
    bnez s0,L1efc98
    sltiu at,s0,17
    jal func_001eea80
    nop
    jal func_001dee30
    nop
L1efed0:
    beqz s1,L1eff20
    paddub s0,s1,zero
    .word 0x8f8287e4
    sltu at,v0,s1
    beqz at,L1efef0
    nop
    paddub s0,v0,zero
    nop
L1efef0:
    .word 0x8e880008
    .word 0x8e820000
    addiu a0,zero,3
    addiu a1,zero,12
    paddub a2,s0,zero
    addiu a3,zero,5
    jalr ra,v0
    paddub t1,s3,zero
    beqzl v0,L1eff24
    .word 0x70008628
    b L1eff28
    nop
L1eff20:
    .word 0x70008628
L1eff24:
    nop
L1eff28:
    bnez s0,L1efc88
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


