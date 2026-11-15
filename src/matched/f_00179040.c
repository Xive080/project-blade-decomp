extern void func_0011eac8(void);
extern void func_0016afd0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s1,a0,zero
    jal func_0016afd0
    paddub s0,a1,zero
    beqz v0,L179100
    nop
    jal func_0016afd0
    nop
    beqz v0,L1790b0
    nop
    .word 0x3c010030
    .word 0x8c246078
    addiu a1,zero,-1
    .word 0x3c010030
    .word 0x8c22607c
    addu v1,a0,a1
    nor v1,v1,zero
    addu v0,v0,a0
    addu v0,v0,a1
    and v0,v1,v0
    addu v1,v0,s0
    .word 0x3c010030
    b L1790c0
    .word 0xac23607c
L1790b0:
    .word 0x3c010030
    .word 0x8c226084
    jalr ra,v0
    paddub a0,s0,zero
L1790c0:
    paddub s2,v0,zero
    paddub a2,s0,zero
    paddub a0,s2,zero
    jal func_0011eac8
    paddub a1,s1,zero
    jal func_0016afd0
    nop
    bnez v0,L1790f8
    paddub v0,s2,zero
    .word 0x3c010030
    .word 0x8c226088
    jalr ra,v0
    paddub a0,s1,zero
    paddub v0,s2,zero
L1790f8:
    b L179118
    .word 0x7bbf0030
L179100:
    .word 0x3c010030
    .word 0x8c22608c
    paddub a0,s1,zero
    jalr ra,v0
    paddub a1,s0,zero
    .word 0x7bbf0030
L179118:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
