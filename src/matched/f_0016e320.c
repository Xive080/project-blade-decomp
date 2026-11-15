extern void func_0012b7e0(void);
extern void func_0012b910(void);
extern void func_00130eb0(void);
extern void func_001c21d0(void);
extern void func_001c2220(void);
extern void func_00203c70(void);
extern void func_00203c80(void);
extern void func_00203c20(void);
extern void func_00203ce0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8ca70004
    paddub s0,a1,zero
    addiu v1,zero,19
    srl a2,a3,0x10
    .word 0x70002e28
    bne a2,v1,L16e390
    andi a3,a3,0xffff
    .word 0x3c030030
    addiu t1,v1,24688
    .word 0x70003628
L16e358:
    .word 0x8d280514
    beqzl t0,L16e37c
    addiu a2,a2,1
    .word 0x8d030008
    bne v1,a3,L16e378
    nop
    b L16e3f8
    paddub a1,t0,zero
L16e378:
    addiu a2,a2,1
L16e37c:
    slti v1,a2,256
    bnez v1,L16e358
    addiu t1,t1,4
    b L16e3fc
    sltiu at,a0,13
L16e390:
    addiu v1,zero,20
    bne a2,v1,L16e3e4
    addiu v1,zero,17
    .word 0x3c030030
    addiu t0,v1,24688
    .word 0x70004e28
L16e3a8:
    .word 0x8d060914
    beqzl a2,L16e3cc
    addiu t1,t1,1
    .word 0x8cc30008
    bne v1,a3,L16e3c8
    nop
    b L16e3f8
    paddub a1,a2,zero
L16e3c8:
    addiu t1,t1,1
L16e3cc:
    slti v1,t1,16
    bnez v1,L16e3a8
    addiu t0,t0,4
    b L16e3f8
    nop
    addiu v1,zero,17
L16e3e4:
    bne a2,v1,L16e3f8
    nop
    .word 0x3c017000
    .word 0x8c253fe0
    nop
L16e3f8:
    sltiu at,a0,13
L16e3fc:
    beqz at,L16e688
    nop
    sll v1,a0,0x2
    .word 0x3c04002f
    addiu a0,a0,-14368
    addu v1,v1,a0
    .word 0x8c630000
    jr v1
    nop
    beqz a1,L16e688
    nop
    .word 0x8ca40010
    addiu v1,zero,-2
    and v1,a0,v1
    .word 0xaca30010
    .word 0x8ca3003c
    beqz v1,L16e688
    nop
    .word 0x3c017000
    .word 0x8c243fd8
    jal func_0012b7e0
    .word 0x70003628
    b L16e68c
    .word 0x7bbf0020
    beqz a1,L16e688
    nop
    .word 0x8ca30010
    ori v1,v1,0x1
    .word 0xaca30010
    .word 0x8ca3003c
    beqz v1,L16e688
    nop
    jal func_0012b910
    paddub a0,a1,zero
    b L16e688
    nop
    .word 0x8ca40064
    addiu v1,zero,-1
    beq a0,v1,L16e688
    nop
    sll v0,a0,0x3
    addu v0,v0,a0
    sll v0,v0,0x1
    addu v0,v0,a0
    sll v1,v0,0x2
    .word 0x3c020030
    addiu v0,v0,-23692
    addu v0,v0,v1
    .word 0x8c440000
    .word 0x3c023faa
    ori v0,v0,0xaaab
    .word 0x44826800
    jal func_00130eb0
    .word 0xc60c0008
    b L16e688
    nop
    .word 0x8ca40064
    addiu v1,zero,-1
    beq a0,v1,L16e688
    nop
    sll v0,a0,0x3
    addu v0,v0,a0
    sll v0,v0,0x1
    addu v0,v0,a0
    sll v1,v0,0x2
    .word 0x3c020030
    addiu v0,v0,-23692
    addu v0,v0,v1
    .word 0x8c440000
    jal func_001c21d0
    .word 0xc60c0008
    b L16e688
    nop
    .word 0x8ca40064
    addiu v1,zero,-1
    beq a0,v1,L16e688
    nop
    sll v0,a0,0x3
    addu v0,v0,a0
    sll v0,v0,0x1
    addu v0,v0,a0
    sll v1,v0,0x2
    .word 0x3c020030
    addiu v0,v0,-23692
    addu v0,v0,v1
    .word 0x8c440000
    jal func_001c2220
    .word 0xc60c0008
    b L16e688
    nop
    .word 0x8ca40084
    jal func_00203c70
    addiu s1,a1,132
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    addiu a1,sp,48
    .word 0xe4a30000
    .word 0xe4a20004
    .word 0xe4a10008
    .word 0xe4a0000c
    .word 0xc6000008
    .word 0xe7a00030
    jal func_00203c80
    .word 0x8e240000
    b L16e688
    nop
    .word 0x8ca40084
    jal func_00203c70
    addiu s1,a1,132
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    addiu a1,sp,64
    .word 0xe4a30000
    .word 0xe4a20004
    .word 0xe4a10008
    .word 0xe4a0000c
    .word 0xc6000008
    .word 0xe7a00044
    jal func_00203c80
    .word 0x8e240000
    b L16e688
    nop
    .word 0x8ca40084
    jal func_00203c70
    addiu s1,a1,132
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    addiu a1,sp,80
    .word 0xe4a30000
    .word 0xe4a20004
    .word 0xe4a10008
    .word 0xe4a0000c
    .word 0xc6000008
    .word 0xe7a00058
    jal func_00203c80
    .word 0x8e240000
    b L16e688
    nop
    .word 0xc60c0008
    jal func_00203c20
    .word 0x8ca40084
    b L16e688
    nop
    .word 0xc60c0008
    jal func_00203ce0
    .word 0x8ca40084
    b L16e688
    nop
    .word 0x8ca30010
    ori v1,v1,0x20
    b L16e688
    .word 0xaca30010
    .word 0x8ca2000c
    paddub a0,a1,zero
    .word 0x8c420008
    jalr ra,v0
    .word 0x70002e28
L16e688:
    .word 0x7bbf0020
L16e68c:
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}


