extern void fn_17a3c0(void);
extern void fn_1c3b80(void);
extern void fn_1c3b00(void);
extern void fn_12b7e0(void);
extern void fn_18fe80(void);
extern void fn_17a220(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s1,a0,zero
    jal fn_17a3c0
    paddub s0,a1,zero
    .word 0x8c420008
    paddub a1,s0,zero
    jalr ra,v0
    paddub a0,s1,zero
    .word 0x8e22003c
    beqz v0,L18fc44
    addiu s0,s1,60
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L18fc44
    nop
    .word 0x8e22000c
    paddub a0,s1,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s2,s1,12
    beqz v0,L18fc44
    nop
    .word 0x8e420000
    paddub a0,s1,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L18fc44:
    .word 0xae200010
    .word 0x3c027f7f
    .word 0xae2005b8
    ori v0,v0,0xffff
    .word 0xae2205f4
    .word 0xae2005fc
    .word 0xae200600
    .word 0xae2005b0
    .word 0x3c017000
    .word 0xc4203fb0
    addiu v0,zero,4
    .word 0xe62005f8
    .word 0x8e2303d8
    beq v1,v0,L18fd5c
    nop
    addiu v0,zero,3
    beq v1,v0,L18fcac
    nop
    addiu v0,zero,2
    beq v1,v0,L18fcac
    nop
    addiu v0,zero,1
    beq v1,v0,L18fcac
    nop
    b L18fe5c
    paddub a0,s1,zero
L18fcac:
    .word 0x8e020000
    beqz v0,L18fd00
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L18fd00
    nop
    .word 0x8e22000c
    paddub a0,s1,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s2,s1,12
    beqz v0,L18fd00
    nop
    .word 0x8e420000
    paddub a0,s1,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L18fd00:
    .word 0x8e020000
    addiu a1,zero,64
    beq v0,a1,L18fe58
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L18fe58
    nop
    .word 0x8e22000c
    paddub a0,s1,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s1,12
    beqz v0,L18fe58
    nop
    .word 0x8e020000
    addiu a1,zero,64
    paddub a0,s1,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L18fe58
    nop
L18fd5c:
    .word 0x8e220414
    .word 0xc6220400
    .word 0xc6210404
    .word 0xc6200408
    .word 0xe4420030
    .word 0xe4410034
    .word 0xe4400038
    .word 0x8e220030
    jal fn_1c3b80
    .word 0x8c440004
    .word 0x8e220030
    jal fn_1c3b00
    .word 0x8c440004
    .word 0x3c017000
    .word 0x8c243fd8
    .word 0x8e260414
    jal fn_12b7e0
    paddub a1,s1,zero
    .word 0x8e020000
    beqz v0,L18fdf8
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L18fdf8
    nop
    .word 0x8e22000c
    paddub a0,s1,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s2,s1,12
    beqz v0,L18fdf8
    nop
    .word 0x8e420000
    paddub a0,s1,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L18fdf8:
    .word 0x8e020000
    addiu a1,zero,2
    beq v0,a1,L18fe50
    paddub a0,s1,zero
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L18fe4c
    nop
    .word 0x8e22000c
    paddub a0,s1,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s1,12
    beqz v0,L18fe4c
    nop
    .word 0x8e020000
    addiu a1,zero,2
    paddub a0,s1,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L18fe4c:
    paddub a0,s1,zero
L18fe50:
    jal fn_18fe80
    nop
L18fe58:
    paddub a0,s1,zero
L18fe5c:
    jal fn_17a220
    nop
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}


