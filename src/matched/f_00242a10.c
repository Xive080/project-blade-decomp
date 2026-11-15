extern void func_00131d00(void);
extern void func_00132950(void);
extern void func_00132c50(void);
extern void func_00170ce0(void);
extern void func_001b5c30(void);
extern void func_001ba140(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x3c024040
    .word 0xac820014
    addiu a2,zero,2
    paddub v0,a2,zero
    .word 0xac800010
    addiu a2,a2,-1
    paddub s0,a0,zero
    beqz v0,L242aa8
    .word 0xac800008
    sll v0,a2,0x2
    addu a3,s0,v0
    .word 0x3c020030
    addiu a1,v0,-23712
    .word 0x3c020033
    addiu v1,v0,10928
L242a58:
    sll v0,a2,0x3
    addu v0,v0,a2
    .word 0xc4630000
    sll v0,v0,0x1
    addu v0,v0,a2
    .word 0xc4620004
    sll v0,v0,0x2
    addu a0,a1,v0
    .word 0xc4610008
    .word 0xc460000c
    paddub v0,a2,zero
    addiu a2,a2,-1
    .word 0xe483002c
    .word 0xe4820030
    .word 0xe4810034
    .word 0xe4800038
    .word 0xace0002c
    bnez v0,L242a58
    addiu a3,a3,-4
    nop
L242aa8:
    jal func_00131d00
    nop
    jal func_00170ce0
    addiu a0,zero,-17
    .word 0x3c020033
    addiu a0,v0,-26768
    jal func_001ba140
    addiu a1,zero,7
    addiu v1,zero,5
    .word 0xae03000c
    .word 0x8e030004
    .word 0x30630010
    bnez v1,L242afc
    nop
    jal func_001b5c30
    nop
    jal func_00132950
    mov.s $f12,$f0
    .word 0x3c010030
    jal func_00132c50
    .word 0x9024a61f
L242afc:
    .word 0x8e040004
    addiu v1,zero,-11
    and v1,a0,v1
    .word 0xae030004
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
