extern void func_0012b7e0(void);
extern void func_001625a0(void);
extern void func_00179e70(void);
extern void func_001a8d50(void);
extern void func_001ff7d0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c83003c
    addiu a1,zero,16
    beq v1,a1,L160ecc
    paddub s1,a0,zero
    addiu v0,zero,4
    beql v1,v0,L160ea8
    addiu a1,zero,1
    addiu v0,zero,2
    beq v1,v0,L160ea4
    nop
    addiu v0,zero,8
    beq v1,v0,L160dfc
    nop
    beqz v1,L160d9c
    .word 0x3c017000
    b L160efc
    .word 0x7bbf0030
    .word 0x3c017000
L160d9c:
    .word 0x8c243fd8
    paddub a1,s1,zero
    jal func_0012b7e0
    paddub a2,zero,zero
    .word 0x8e220360
    beqz v0,L160ef8
    nop
    .word 0x8e220354
    beqz v0,L160ef8
    nop
    .word 0xae200560
    .word 0xae200564
    .word 0x8e220360
    mtc1 zero,$f12
    .word 0x8c420008
    .word 0xc440000c
    .word 0xe6200568
    .word 0x8e220010
    ori v0,v0,0x2000
    .word 0xae220010
    jal func_001ff7d0
    .word 0x8e240360
    b L160ef8
    nop
L160dfc:
    .word 0x8e22055c
    .word 0x8c500014
    .word 0x8e02003c
    beq v0,a1,L160e54
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L160e54
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s2,s0,12
    beqz v0,L160e54
    nop
    .word 0x8e420000
    addiu a1,zero,16
    paddub a0,s0,zero
    .word 0x8c420014
    jalr ra,v0
    paddub a2,zero,zero
L160e54:
    .word 0x8e22055c
    jal func_001625a0
    .word 0x8c520008
    .word 0x8c420028
    .word 0x8e4604f8
    paddub a0,s0,zero
    jalr ra,v0
    paddub a1,s2,zero
    .word 0x3c024000
    .word 0xae0200bc
    .word 0x8e2200cc
    .word 0x8c420028
    beqz v0,L160ef8
    nop
    .word 0x8e2303dc
    beqz v1,L160ef8
    nop
    addiu v0,zero,4
    b L160ef8
    .word 0xac620008
L160ea4:
    addiu a1,zero,1
L160ea8:
    jal func_00179e70
    paddub a0,s1,zero
    .word 0x8e22047c
    beqz v0,L160ef8
    nop
    jal func_001a8d50
    addiu a0,s1,1132
    b L160ef8
    nop
L160ecc:
    jal func_00179e70
    addiu a1,zero,3
    .word 0x8e2200cc
    .word 0x8c420028
    bnez v0,L160ef8
    nop
    .word 0x8e22047c
    beqz v0,L160ef8
    nop
    jal func_001a8d50
    addiu a0,s1,1132
L160ef8:
    .word 0x7bbf0030
L160efc:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,64
}
