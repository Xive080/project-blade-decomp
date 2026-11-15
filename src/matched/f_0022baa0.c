extern void func_00142a90(void);
extern void func_001a8600(void);
extern void func_001a8e80(void);
extern void func_001c3b70(void);
extern void func_0022d320(void);
extern void func_00256438(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffb0
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x70a08e28
    .word 0x7fb00000
    beqz s1, L22bc88
    .word 0x70809628
    .word 0xae510420
    .word 0x3c017000
    .word 0xc4203fb0
    addiu v0,zero,1
    .word 0x27a40040
    .word 0xe64016f0
    .word 0xae4216e4
    .word 0xae4216e8
    .word 0xae4216ec
    .word 0x8e450420
    jal func_0022d320
    .word 0x26461324
    .word 0x27a20040
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6420424
    .word 0xe6410428
    .word 0xe640042c
    .word 0x3c0243bf
    .word 0x34424000
    .word 0x44821800
    .word 0xc6420424
    .word 0x3c02437f
    .word 0xc6410428
    .word 0xc640042c
    .word 0x44822000
    .word 0xe64216f8
    .word 0xe64116fc
    .word 0xe6401700
    .word 0x8e420420
    .word 0xc4400080
    .word 0x46030302
    .word 0x46046036
    nop
    bc1t L22bb60
    .word 0x24500080
    addiu v0,zero,255
    b L22bb6c
    .word 0xa2420f64
L22bb60:
    jal func_00256438
    nop
    .word 0xa2420f64
L22bb6c:
    .word 0xc6010004
    .word 0x3c0243bf
    .word 0x34424000
    .word 0x44821000
    .word 0x3c02437f
    .word 0x46020b02
    .word 0x44820000
    nop
    .word 0x46006036
    nop
    bc1t L22bba8
    nop
    addiu v0,zero,255
    b L22bbb4
    .word 0xa2420f65
L22bba8:
    jal func_00256438
    nop
    .word 0xa2420f65
L22bbb4:
    .word 0xc6010008
    .word 0x3c0243bf
    .word 0x34424000
    .word 0x44821000
    .word 0x3c02437f
    .word 0x46020b02
    .word 0x44820000
    nop
    .word 0x46006036
    nop
    bc1t L22bbf0
    nop
    addiu v0,zero,255
    b L22bbfc
    .word 0xa2420f66
L22bbf0:
    jal func_00256438
    nop
    .word 0xa2420f66
L22bbfc:
    addiu v0,zero,255
    .word 0xa2420f67
    .word 0x8e42003c
    addiu a1,zero,4
    beq v0,a1, L22bc58
    nop
    .word 0x8e420010
    .word 0x30420002
    bnez v0, L22bc58
    nop
    .word 0x8e42000c
    .word 0x72402628
    .word 0x8c420010
    jalr ra,v0
    .word 0x2650000c
    beqz v0, L22bc58
    nop
    .word 0x8e020000
    addiu a1,zero,4
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L22bc58:
    jal func_00142a90
    .word 0x8e240404
    jal func_001c3b70
    .word 0x70402628
    .word 0x24450030
    .word 0x26441864
    jal func_001a8600
    .word 0x70003628
    jal func_001a8e80
    .word 0x26441864
    b L22bce0
    .word 0x7bbf0030
L22bc88:
    .word 0xae400420
    .word 0x8e42003c
    addiu a1,zero,2
    beq v0,a1, L22bcdc
    nop
    .word 0x8e420010
    .word 0x30420002
    bnez v0, L22bcdc
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x2650000c
    beqz v0, L22bcdc
    nop
    .word 0x8e020000
    addiu a1,zero,2
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L22bcdc:
    .word 0x7bbf0030
L22bce0:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    .word 0x27bd0050
}
