extern void fn_1b3610(void);
extern void fn_1b3f30(void);
extern void fn_1b3c20(void);
extern void fn_1b3f90(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-32
    .word 0x3c02003a
    .word 0x7fbf0000
    ori v1,v0,0x8a58
    .word 0x8f828410
    jal fn_1b3610
    addu a0,v0,v1
    ori a1,zero,0x8000
    slt at,v0,a1
    beqz at,L172868
    nop
    .word 0x8f848410
    .word 0x3c03003a
    ori v0,v1,0x8c48
    addu v0,a0,v0
    .word 0x8c420000
    bnez v0,L17282c
    .word 0x3c01003b
    ori v0,v1,0x8adc
    addu v0,a0,v0
    .word 0x8c420000
    blez v0,L1726b8
    nop
    .word 0x3c01003b
    addu at,a0,at
    .word 0x8c258ab8
    .word 0x3c010030
    .word 0x8c24a6e0
    .word 0x8c82002c
    jalr ra,v0
    nop
    addiu v1,zero,1
    bne v0,v1,L1726b8
    nop
    .word 0x8f828410
    .word 0x3c01003a
    ori at,at,0x8a58
    addu a0,v0,at
    .word 0x3c01003b
    addu at,v0,at
    jal fn_1b3f30
    .word 0x8c258adc
    .word 0x8f828410
    .word 0x3c01003b
    addu at,v0,at
    .word 0xac208adc
L1726b8:
    .word 0x8f828410
    .word 0x3c01003a
    ori at,at,0x8a58
    jal fn_1b3c20
    addu a0,v0,at
    .word 0x8f838410
    .word 0x3c01003b
    addu at,v1,at
    .word 0x8c228adc
    bnez v0,L17287c
    nop
    .word 0x3c02003a
    ori v0,v0,0x8ab8
    addu v0,v1,v0
    .word 0x3c010030
    .word 0x8c24a6e0
    .word 0x8c450000
    .word 0x8c82002c
    jalr ra,v0
    nop
    addiu v1,zero,1
    bne v0,v1,L17287c
    nop
    .word 0x8f848410
    .word 0x3c01003b
    addu at,a0,at
    .word 0x8c228c48
    beq v0,v1,L17287c
    nop
    .word 0x3c01003a
    ori at,at,0x8a58
    addu a0,a0,at
    addiu a1,sp,28
    addiu a2,sp,24
    addiu a3,sp,20
    jal fn_1b3f90
    addiu t0,sp,16
    .word 0x3c020fff
    .word 0x8fa30014
    ori a2,v0,0xffff
    .word 0x8fa5001c
    .word 0x8fa20018
    ori t0,zero,0x8000
    .word 0x3c042000
    dsll32 v1,v1,0x4
    dsrl32 v1,v1,0x4
    and a1,a1,a2
    or a1,a1,a0
    or v1,v1,a0
    slt v0,v0,t0
    .word 0xafa5001c
    bnez v0,L17287c
    .word 0xafa30014
    .word 0x3c010030
    .word 0x8c24a6e0
    .word 0x8f838410
    .word 0x8fa6001c
    addiu a3,zero,1
    .word 0x3c01003b
    addu at,v1,at
    .word 0x8c820008
    .word 0x8c258ab8
    jalr ra,v0
    .word 0x70004e28
    bgtz v0,L172810
    nop
    .word 0x8f828410
    .word 0x3c01003b
    addiu a3,zero,1
    addu at,v0,at
    .word 0xac278c48
    .word 0x8f838410
    .word 0x3c01003b
    addu at,v1,at
    .word 0x8c228c44
    beqz v0,L172810
    nop
    .word 0x3c01003b
    addu at,v1,at
    .word 0x8c258ab8
    .word 0x70003628
    .word 0x3c010030
    .word 0x8c24a6e0
    .word 0x8c820018
    jalr ra,v0
    .word 0x70004628
L172810:
    .word 0x8f828410
    .word 0x3c01003b
    ori v1,zero,0x8000
    addu at,v0,at
    b L17287c
    .word 0xac238adc
    .word 0x3c01003b
L17282c:
    addiu v0,zero,1
    addu at,a0,at
    .word 0xac228c4c
    .word 0x8f828410
    .word 0x3c01003a
    ori at,at,0x8a58
    jal fn_1b3f30
    addu a0,v0,at
    .word 0x8f828410
    .word 0x3c01003a
    ori at,at,0x8a58
    jal fn_1b3c20
    addu a0,v0,at
    b L172880
    .word 0x7bbf0000
L172868:
    .word 0x8f828410
    .word 0x3c01003a
    ori at,at,0x8a58
    jal fn_1b3c20
    addu a0,v0,at
L17287c:
    .word 0x7bbf0000
L172880:
    addiu v0,zero,1
    jr ra
    addiu sp,sp,32
}


