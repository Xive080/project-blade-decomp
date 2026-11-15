extern void func_0024b5f0(void);
extern void func_0024bba0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    .word 0x70809628
    beqz s2,L24bcbc
    sq s0,0(sp)
    .word 0x3c033e4c
    ori a0,v1,0xcccd
    lw v1,-30224(gp)
    beqz a1,L24bcb0
    sw a0,24(v1)
    lw v1,-30224(gp)
    lwc1 f2,0(a1)
    lwc1 f1,4(a1)
    lwc1 f0,8(a1)
    swc1 f2,28(v1)
    swc1 f1,32(v1)
    b L24bcc4
    swc1 f0,36(v1)
L24bcb0:
    lw v1,-30224(gp)
    b L24bcc4
    sw zero,28(v1)
L24bcbc:
    lw v1,-30224(gp)
    sw zero,24(v1)
L24bcc4:
    .word 0x70008628
    b L24bd40
    .word 0x70008e28
    addu v1,a0,s1
L24bcd4:
    lw a1,44(v1)
    lw v1,40(a1)
    beqzl v1,L24bd3c
    addiu s1,s1,4
    beqz s2,L24bd04
    sll v1,s0,0x2
    lw v1,36(a1)
    andi v1,v1,0x1c
    beqz v1,L24bd38
    nop
    nop
    sll v1,s0,0x2
L24bd04:
    addu v1,a0,v1
    lw a0,44(v1)
    lw v1,40(a0)
    beqz v1,L24bd38
    nop
    beqz s2,L24bd30
    nop
    jal func_0024b5f0
    .word 0x70002e28
    b L24bd38
    nop
L24bd30:
    jal func_0024bba0
    nop
L24bd38:
    addiu s1,s1,4
L24bd3c:
    addiu s0,s0,1
L24bd40:
    lw a0,-30224(gp)
    lw v1,40(a0)
    sltu v1,s0,v1
    bnez v1,L24bcd4
    addu v1,a0,s1
    lq ra,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
