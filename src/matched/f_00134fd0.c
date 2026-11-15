extern void func_00149e60(void);
extern void func_001c3b70(void);
extern void func_001ce3f0(void);
asm void func(void) {
.set noreorder
.set noat
    addiu sp,sp,-96
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c900014
    .word 0x70809e28
    jal func_00149e60
    .word 0x70009628
    .word 0x8c420018
    jalr ra,v0
    .word 0x8e640008
    jal func_001c3b70
    .word 0x70402628
    .word 0x8e640070
    beqz a0,L135034
    .word 0x70408e28
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
    .word 0x70409628
L135034:
    .word 0xc66200b8
    .word 0xc66100bc
    .word 0xc66000c0
    addiu a0,sp,80
    .word 0xe4820000
    .word 0xe4810004
    beqz s2,L135064
    .word 0xe4800008
    addiu a2,zero,1
    .word 0x72403e28
    jal func_001ce3f0
    .word 0x70802e28
L135064:
    addiu a0,sp,80
    .word 0xc4820000
    .word 0xc4810004
    .word 0xc4800008
    .word 0x3c03c040
    mtc1 v1,$f4
    addiu a1,zero,1
    .word 0x3c033f80
    .word 0xe6020094
    .word 0xe6010098
    .word 0xe600009c
    .word 0xc6200020
    .word 0xc6230024
    .word 0xc6220028
    .word 0xc6010094
    mul.s $f0,$f4,$f0
    add.s $f0,$f1,$f0
    .word 0xe6000094
    .word 0xc6000098
    mul.s $f3,$f4,$f3
    add.s $f0,$f0,$f3
    .word 0xe6000098
    .word 0xc600009c
    mul.s $f2,$f4,$f2
    add.s $f0,$f0,$f2
    .word 0xe600009c
    .word 0xc4820000
    .word 0xc4810004
    .word 0xc4800008
    .word 0xe60200a0
    .word 0xe60100a4
    .word 0xe60000a8
    .word 0xae0000ac
    .word 0xae0300b0
    .word 0xae0000b4
    .word 0x8e03003c
    beq v1,a1,L135140
    nop
    .word 0x8e030010
    andi v1,v1,0x2
    bnez v1,L135140
    nop
    .word 0x8e02000c
    .word 0x72002628
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s0,12
    beqz v0,L135140
    nop
    .word 0x8e220000
    addiu a1,zero,1
    .word 0x72002628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L135140:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
