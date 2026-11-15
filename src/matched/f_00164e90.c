extern void func_00165190(void);
extern void func_0017b870(void);
extern void func_0017e1d0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-304
    .word 0x7fbf0060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0x8c8301ac
    beqz v1,L164f64
    paddub s3,a0,zero
    .word 0x8e71003c
    beqz s1,L164f08
    addiu s0,s3,60
    .word 0x8e630010
    andi v1,v1,0x2
    bnez v1,L164f08
    nop
    .word 0x8e62000c
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s2,s3,12
    beqz v0,L164f08
    nop
    .word 0x8e420000
    paddub a0,s3,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L164f08:
    .word 0x8e030000
    beq v1,s1,L165168
    nop
    .word 0x8e630010
    andi v1,v1,0x2
    bnez v1,L165168
    nop
    .word 0x8e62000c
    paddub a0,s3,zero
    paddub a1,s1,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s3,12
    beqz v0,L165168
    nop
    .word 0x8e020000
    paddub a0,s3,zero
    paddub a1,s1,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L16516c
    .word 0x7bbf0060
L164f64:
    .word 0x8e7001a8
    nop
L164f6c:
    .word 0x8e6401a8
    .word 0x3c02002e
    addiu v1,v0,-6880
    addiu v0,zero,-1
    addiu a0,a0,1
    .word 0xae6401a8
    .word 0x8e6401a8
    sll a0,a0,0x2
    addu v1,v1,a0
    .word 0x8c630000
    bne v1,v0,L164fa0
    nop
    .word 0xae6001a8
L164fa0:
    .word 0x8e6401a8
    .word 0x3c02002e
    addiu v1,v0,-6880
    .word 0x8e62003c
    sll a0,a0,0x2
    addu v1,v1,a0
    .word 0x8c720000
    beqz v0,L165010
    addiu s1,s3,60
    .word 0x8e620010
    andi v0,v0,0x2
    bnez v0,L165010
    nop
    .word 0x8e62000c
    paddub a0,s3,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s4,s3,12
    beqz v0,L165010
    nop
    .word 0x8e820000
    paddub a0,s3,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    nop
L165010:
    .word 0x8e220000
    beq v0,s2,L16506c
    .word 0x3c023f80
    .word 0x8e620010
    andi v0,v0,0x2
    bnez v0,L165068
    nop
    .word 0x8e62000c
    paddub a0,s3,zero
    paddub a1,s2,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s3,12
    beqz v0,L165068
    nop
    .word 0x8e220000
    paddub a1,s2,zero
    paddub a0,s3,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    nop
L165068:
    .word 0x3c023f80
L16506c:
    .word 0x44826000
    addiu a1,sp,112
    .word 0x46006346
    addiu a2,sp,200
    addiu a3,sp,216
    addiu t0,sp,296
    jal func_00165190
    paddub a0,s3,zero
    .word 0x3c023f59
    ori v0,v0,0x999a
    .word 0xafa200c0
    .word 0xafa200bc
    .word 0xafa200b8
    .word 0x3c020016
    addiu v0,v0,28080
    .word 0xffa00000
    .word 0xffa20008
    .word 0x3c027000
    ori v0,v0,0x3fd8
    .word 0x8c440000
    addiu a2,sp,200
    addiu a3,sp,184
    addiu t0,zero,3
    addiu t1,sp,232
    addiu t2,sp,248
    paddub a1,s3,zero
    jal func_0017b870
    .word 0x70005e28
    beqz v0,L165124
    .word 0x3c017000
    .word 0xc7a200c8
    .word 0xc7a100e8
    addiu v0,sp,204
    .word 0xc7a000ec
    addiu v1,sp,208
    add.s $f1,$f2,$f1
    .word 0xe7a100c8
    .word 0xc4410000
    add.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc4610000
    .word 0xc7a000f0
    add.s $f0,$f1,$f0
    .word 0xe4600000
    nop
    .word 0x3c017000
L165124:
    .word 0x3c020016
    addiu t2,v0,27824
    .word 0x8c243fd8
    .word 0x3c020016
    addiu a1,sp,216
    addiu a2,sp,200
    addiu a3,sp,264
    addiu t0,sp,280
    addiu t1,sp,300
    jal func_0017e1d0
    addiu t3,v0,28080
    beqz v0,L165168
    nop
    .word 0x8e6301a8
    bne v1,s0,L164f6c
    nop
    nop
L165168:
    .word 0x7bbf0060
L16516c:
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    jr ra
    addiu sp,sp,304
}


