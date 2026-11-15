extern void func_0013b550(void);
extern void func_001785a0(void);
extern void func_001b5b40(void);
extern void func_001b5bd0(void);
extern void func_0024b470(void);
extern void func_0024b4b0(void);
extern void func_0024b540(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,1
    paddub s1,a0,zero
    beq a1,v0,L195c34
    paddub s0,zero,zero
    addiu v0,zero,5
    beq a1,v0,L195c0c
    nop
    addiu v0,zero,4
    beq a1,v0,L195be4
    nop
    beqz a1,L195b18
    nop
    b L195c40
    nop
L195b18:
    lw a0,-31960(gp)
    addiu v0,zero,3
    addiu a1,zero,68
    jal func_0013b550
    sw v0,48(sp)
    lw a0,-31960(gp)
    addiu a1,zero,69
    jal func_0013b550
    sw v0,52(sp)
    lw a0,-31960(gp)
    addiu a1,zero,70
    jal func_0013b550
    sw v0,56(sp)
    lw a0,-31960(gp)
    addiu a1,zero,71
    jal func_0013b550
    sw v0,60(sp)
    addiu a2,sp,48
    addiu a0,zero,13
    sw v0,64(sp)
    jal func_0024b540
    paddub a1,zero,zero
    jal func_001b5b40
    nop
    addiu v1,zero,4
    beql v0,v1,L195bcc
    addiu v0,zero,2
    addiu v1,zero,3
    beql v0,v1,L195bc0
    addiu v0,zero,2
    addiu v1,zero,1
    beq v0,v1,L195bb4
    nop
    beqz v0,L195bac
    nop
    b L195bd4
    lw a1,12(s1)
L195bac:
    b L195bd0
    sw zero,12(s1)
L195bb4:
    b L195bd0
    sw v1,12(s1)
    addiu v0,zero,2
L195bc0:
    b L195bd0
    sw v0,12(s1)
    addiu v0,zero,2
L195bcc:
    sw v0,12(s1)
L195bd0:
    lw a1,12(s1)
L195bd4:
    jal func_0024b470
    addiu a0,zero,13
    b L195c40
    nop
L195be4:
    lw v0,12(s1)
    beqzl v0,L195c00
    addiu v0,zero,2
    addiu v0,v0,-1
    b L195c04
    sw v0,12(s1)
    addiu v0,zero,2
L195c00:
    sw v0,12(s1)
L195c04:
    b L195c40
    addiu s0,zero,1
L195c0c:
    lw v0,12(s1)
    sltiu at,v0,2
    beqz at,L195c28
    nop
    addiu v0,v0,1
    b L195c2c
    sw v0,12(s1)
L195c28:
    sw zero,12(s1)
L195c2c:
    b L195c40
    addiu s0,zero,1
L195c34:
    addiu a0,zero,13
    jal func_0024b4b0
    paddub a1,zero,zero
L195c40:
    beqz s0,L195cd4
    nop
    lw v1,12(s1)
    addiu a0,zero,3
    beql v1,a0,L195cb8
    addiu a0,zero,4
    addiu v0,zero,2
    beq v1,v0,L195ca4
    nop
    addiu a0,zero,1
    beq v1,a0,L195c94
    nop
    beqz v1,L195c84
    paddub a0,zero,zero
    b L195cc4
    lw a1,12(s1)
    paddub a0,zero,zero
L195c84:
    jal func_001b5bd0
    nop
    b L195cc0
    nop
L195c94:
    jal func_001b5bd0
    nop
    b L195cc0
    nop
L195ca4:
    jal func_001b5bd0
    nop
    b L195cc0
    nop
    addiu a0,zero,4
L195cb8:
    jal func_001b5bd0
    nop
L195cc0:
    lw a1,12(s1)
L195cc4:
    jal func_0024b470
    addiu a0,zero,13
    jal func_001785a0
    addiu a0,zero,4
L195cd4:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,80
}
