extern void func_001a9ed0(void);
extern void func_00109d20(void);
extern void func_00109d00(void);
extern void func_001aa810(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x3c030031
    .word 0x70808628
    addiu v1,v1,29920
    sll a0,a0,0x2
    addu v1,v1,a0
    lw v1,0(v1)
    addiu a0,zero,1
    bne v1,a0,La
    nop
    b Lc
    nop
La:
    bnez s0,Lc
    .word 0x70002628
    lw v1,-31448(gp)
    bnez v1,Lb
    nop
    addiu a1,zero,-1
    jal func_001a9ed0
    .word 0x70002628
    beqz v0,Lb
    nop
    b Lc
    addiu a0,zero,1
Lb:
    .word 0x70002628
Lc:
    beqz a0,Ld
    nop
    jal func_00109d20
    lw a0,-32660(gp)
    .word 0x3c010031
    lw v0,30388(at)
    addiu a0,zero,1
    addiu a3,zero,4
    .word 0x34058019
    sw s0,0(v0)
    .word 0x3c010031
    lw a2,30388(at)
    .word 0x70004628
    jal func_001aa810
    .word 0x70004e28
    jal func_00109d00
    lw a0,-32660(gp)
Ld:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
