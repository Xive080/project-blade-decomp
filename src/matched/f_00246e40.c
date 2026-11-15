extern void func_00132150(void);
extern void func_00132160(void);
extern void func_0013b550(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,11
    beq a1,v0,L246f94
    paddub s0,a0,zero
    addiu v0,zero,10
    beq a1,v0,L246f8c
    .word 0x3c023f80
    addiu v0,zero,7
    beq a1,v0,L246f18
    nop
    addiu v0,zero,9
    beq a1,v0,L246f10
    nop
    addiu v0,zero,12
    beq a1,v0,L246e94
    nop
    b L247020
    .word 0x7bbf0020
L246e94:
    .word 0x3c010030
    .word 0x8c236f84
    addiu v0,zero,-5
    addiu a1,zero,4
    and v0,v1,v0
    .word 0x3c010030
    .word 0xac226f84
    .word 0x3c010030
    .word 0x8c316f88
    .word 0x8e22003c
    beq v0,a1,L246f08
    .word 0x3c0241a0
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L246f04
    nop
    .word 0x8e22000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s1,zero
    beqz v0,L246f04
    nop
    .word 0x8e22000c
    addiu a1,zero,4
    paddub a0,s1,zero
    .word 0x8c420014
    jalr ra,v0
    paddub a2,zero,zero
L246f04:
    .word 0x3c0241a0
L246f08:
    b L24701c
    .word 0xae020048
L246f10:
    b L24701c
    .word 0xae000040
L246f18:
    .word 0x8e020038
    paddub a0,zero,zero
    sll v0,v0,0x1
    jal func_00132160
    addiu a1,v0,-1
    jal func_00132150
    nop
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c023f80
    mtc1 v0,$f0
    .word 0x8f848328
    add.s $f0,$f0,$f1
    .word 0x3c010030
    .word 0xe420a6d8
    .word 0x8e020038
    jal func_0013b550
    addiu a1,v0,502
    .word 0x8f8484ac
    beqzl a0,L246f80
    addiu v0,zero,1
    paddub a2,v0,zero
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,10
    addiu v0,zero,1
L246f80:
    b L24701c
    .word 0xae020044
    .word 0x3c023f80
L246f8c:
    b L24701c
    .word 0xae020040
L246f94:
    .word 0x8e030038
    .word 0x8e02003c
    addiu v1,v1,1
    slt at,v1,v0
    beqz at,L246fb4
    .word 0x8f848328
    b L246fb8
    addiu a1,zero,510
L246fb4:
    addiu a1,zero,502
L246fb8:
    jal func_0013b550
    nop
    .word 0x8f8484ac
    beqz a0,L246fdc
    nop
    paddub a2,v0,zero
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,8
L246fdc:
    .word 0x8e020038
    blez v0,L24701c
    nop
    sll a1,v0,0x1
    jal func_00132160
    paddub a0,zero,zero
    jal func_00132150
    nop
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c023f80
    mtc1 v0,$f0
    nop
    add.s $f0,$f0,$f1
    .word 0x3c010030
    .word 0xe420a6d8
L24701c:
    .word 0x7bbf0020
L247020:
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
