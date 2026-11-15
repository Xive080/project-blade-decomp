extern void func_00109d20(void);
extern void func_00111a70(void);
extern void func_00111ab8(void);
extern void func_00109d00(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-128
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c880038
    .word 0x8c820028
    .word 0x8c85001c
    .word 0x8c830024
    .word 0x8c960020
    paddub s0,a0,zero
    srl a2,t0,0x10
    andi a3,a2,0x3
    srl a2,t0,0x8
    andi a2,a2,0xf
    addu a2,a3,a2
    .word 0x8c840040
    addu s3,v1,a2
    sll v1,a2,0x4
    andi s1,t0,0x7f
    subu s2,a1,v1
    jal func_00109d20
    ori s4,v0,0x100
    .word 0x8e030000
    sltu at,s2,v1
    beqz at,L1b3818
    nop
    .word 0x8e060008
    subu v0,v1,s2
    .word 0x8e040004
    srl s3,v0,0x4
    .word 0x3c020fff
    ori a3,v0,0xffff
    sll v0,a2,0xf
    .word 0x8e05001c
    addu s2,s2,v0
    beq a1,v1,L1b37ac
    and s6,a0,a3
    addu v0,v1,v0
    beq a1,v0,L1b37b0
    .word 0x70001628
    b L1b37bc
    addiu v0,zero,3
L1b37ac:
    .word 0x70001628
L1b37b0:
    b L1b37c0
    sll a0,v0,0x1c
    addiu v0,zero,3
L1b37bc:
    sll a0,v0,0x1c
L1b37c0:
    .word 0x8e02000c
    .word 0x8e030028
    subu v0,a2,v0
    .word 0x0046001a
    dsll32 v1,v1,0x4
    dsrl32 v1,v1,0x4
    or v1,v1,a0
    ori s4,v1,0x100
    mfhi v1
    slt at,v1,zero
    bnez at,L1b3804
    addiu v0,a2,-1
    .word 0x8e020010
    slt v0,v1,v0
    bnez v0,L1b392c
    nop
    addiu v0,a2,-1
L1b3804:
    .word 0xae02000c
    .word 0x8e020010
    addiu v0,v0,1
    b L1b392c
    .word 0xae020010
L1b3818:
    .word 0x8e040008
    .word 0x3c020fff
    ori a1,v0,0xffff
    .word 0x8e060004
    .word 0x8e08001c
    addiu v0,a0,1
    sll v0,v0,0x4
    addu v0,a2,v0
    and a1,v0,a1
    bne t0,a1,L1b3850
    subu v0,t0,v1
    b L1b3854
    .word 0x70003e28
    subu v0,t0,v1
L1b3850:
    srl a3,v0,0xf
L1b3854:
    bne s2,a1,L1b3868
    subu v0,s2,v1
    b L1b386c
    .word 0x70001628
    subu v0,s2,v1
L1b3868:
    srl v0,v0,0xf
L1b386c:
    beq a3,v0,L1b392c
    nop
    sll a1,a3,0x4
    addu a2,a2,a1
    dsll32 s6,a2,0x4
    sll a2,a3,0xf
    addu a3,v1,a2
    .word 0x8e05000c
    subu a3,a3,s2
    srl s3,a3,0x4
    subu t0,t0,v1
    sll a3,a0,0xf
    .word 0x0107001b
    .word 0x8e060010
    nop
    mfhi t0
    addu a3,a1,a2
    .word 0x00e4001a
    addu t0,v1,t0
    nop
    mfhi a3
    sll a3,a3,0xf
    addu v1,v1,a3
    bne t0,v1,L1b38d8
    dsrl32 s6,s6,0x4
    b L1b38dc
    .word 0x70001e28
L1b38d8:
    addiu v1,zero,3
L1b38dc:
    sll t0,v1,0x1c
    addu v1,v0,a0
    .word 0x8e070028
    subu v1,v1,a1
    .word 0x0064001a
    dsll32 v1,a3,0x4
    dsrl32 v1,v1,0x4
    or v1,v1,t0
    ori s4,v1,0x100
    mfhi v1
    slt at,v1,zero
    bnez at,L1b391c
    nop
    slt v1,v1,a2
    bnez v1,L1b392c
    nop
L1b391c:
    .word 0xae02000c
    .word 0x8e020010
    addiu v0,v0,1
    .word 0xae020010
L1b392c:
    .word 0x8e03002c
    beqz v1,L1b39a8
    nop
    .word 0x8e020030
    beqz v0,L1b39a8
    nop
    .word 0x3c011001
    .word 0xac23b010
    .word 0x8e020030
    .word 0x3c011001
    .word 0xac22b020
    .word 0x8e020034
    jal func_00111a70
    ori s5,v0,0x100
    .word 0x3c021000
    ori v1,v0,0xf520
    .word 0x8c640000
    ori a1,v0,0xf590
    .word 0x3c02fffe
    .word 0x3c011001
    ori v0,v0,0xffff
    .word 0x3c030001
    or v1,a0,v1
    .word 0xaca30000
    .word 0xac35b000
    .word 0x3c011001
    .word 0x8c23f520
    and v0,v1,v0
    .word 0x3c011001
    jal func_00111ab8
    .word 0xac22f590
L1b39a8:
    .word 0x8e020010
    beqz v0,L1b3a04
    .word 0x3c011001
    .word 0x3c021000
    ori v1,v0,0x2010
L1b39bc:
    .word 0x8c620000
    nop
    nop
    nop
    nop
    bltz v0,L1b39bc
    nop
    .word 0x3c011000
    .word 0xac312000
L1b39e0:
    .word 0x3c011000
    .word 0x8c222010
    nop
    nop
    nop
    bltz v0,L1b39e0
    nop
    nop
    .word 0x3c011001
L1b3a04:
    .word 0xac32b410
    .word 0x3c011001
    .word 0xac36b430
    .word 0x3c011001
    .word 0xac33b420
    .word 0x8e020010
    beqz v0,L1b3a70
    nop
    jal func_00111a70
    nop
    .word 0x3c021000
    ori v1,v0,0xf520
    .word 0x8c640000
    ori a1,v0,0xf590
    .word 0x3c02fffe
    .word 0x3c011001
    ori v0,v0,0xffff
    .word 0x3c030001
    or v1,a0,v1
    .word 0xaca30000
    .word 0xac34b400
    .word 0x3c011001
    .word 0x8c23f520
    and v0,v1,v0
    .word 0x3c011001
    jal func_00111ab8
    .word 0xac22f590
L1b3a70:
    .word 0x8e03003c
    .word 0x3c011000
    addiu v0,zero,1
    .word 0xac232010
    .word 0xae020044
    jal func_00109d00
    .word 0x8e040040
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,128
}


