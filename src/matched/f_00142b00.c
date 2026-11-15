extern void func_00142fd0(void);
extern void func_001c3b00(void);
extern void func_001c3b70(void);
extern void func_001c3b80(void);
extern void func_001c3bc0(void);
extern void func_001c7710(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff20
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x70809e28
    .word 0x7fb00000
    .word 0x70a09628
    beqz s3, L142b34
    .word 0x70c08e28
    bnez s2, L142b40
    .word 0x3c027f7f
L142b34:
    b L142d58
    .word 0x70001628
    .word 0x3c027f7f
L142b40:
    .word 0x3442ffff
    .word 0xae42000c
    .word 0xae420010
    .word 0xae420014
    .word 0x3c02ff7f
    .word 0x3442ffff
    .word 0xae420000
    .word 0xae420004
    .word 0xae420008
    .word 0x8e640004
    jal func_001c3b70
    .word 0x26700004
    .word 0x27a600a0
    addiu a1,zero,8
    .word 0x70403e28
L142b7c:
    .word 0x8ce40000
    .word 0x8ce30004
    .word 0x24a5ffff
    .word 0xacc40000
    .word 0xacc30004
    .word 0x24e70008
    bgtz a1, L142b7c
    .word 0x24c60008
    .word 0x3c033f80
    .word 0xac430028
    .word 0xac430014
    .word 0xac430000
    .word 0xac400010
    .word 0xac400008
    .word 0xac400004
    .word 0xac400024
    .word 0xac400020
    .word 0xac400018
    .word 0xac400038
    .word 0xac400034
    .word 0x3c030002
    .word 0xac400030
    .word 0x34640003
    .word 0x8c43000c
    .word 0x00641825
    .word 0xac43000c
    jal func_001c3b00
    .word 0x8e040000
    jal func_001c3b80
    .word 0x8e040000
    .word 0x3c023f80
    .word 0xafa20088
    .word 0xafa20074
    .word 0xafa20060
    .word 0xafa00070
    .word 0xafa00068
    .word 0xafa00064
    .word 0xafa00084
    .word 0xafa00080
    .word 0xafa00078
    .word 0xafa00098
    .word 0xafa00094
    .word 0x27a4006c
    .word 0xafa00090
    .word 0x8c830000
    .word 0x3c020002
    .word 0x34420003
    .word 0x00621025
    .word 0xac820000
    jal func_001c3bc0
    .word 0x8e040000
    jal func_001c3b70
    .word 0x70402628
    .word 0x27a40060
    jal func_001c7710
    .word 0x70402e28
    .word 0x8e630008
    .word 0x26620008
    bne v1,v0, L142c78
    .word 0x2474ffc0
    b L142c78
    .word 0x7000a628
    .word 0x2474ffc0
L142c78:
    beqz s4, L142cd8
    nop
L142c80:
    beqz s1, L142c9c
    .word 0x27a60060
    .word 0x92820002
    .word 0x30420004
    beqz v0, L142cb0
    nop
    .word 0x27a60060
L142c9c:
    .word 0x72602628
    .word 0x72802e28
    jal func_00142fd0
    .word 0x72403e28
    nop
L142cb0:
    .word 0x8e830040
    .word 0x26620008
    bne v1,v0, L142ccc
    .word 0x2474ffc0
    b L142cd0
    .word 0x7000a628
    .word 0x2474ffc0
L142ccc:
    nop
L142cd0:
    bnez s4, L142c80
    nop
L142cd8:
    .word 0xc641000c
    .word 0x3c027f7f
    .word 0x3442ffff
    .word 0x44820000
    nop
    .word 0x46010032
    nop
    bc1f L142d14
    nop
    .word 0xae40000c
    .word 0xae400010
    .word 0xae400014
    .word 0xae400000
    .word 0xae400004
    .word 0xae400008
L142d14:
    jal func_001c3b70
    .word 0x8e040000
    .word 0x27a600a0
    addiu a1,zero,8
L142d24:
    .word 0x8cc40000
    .word 0x8cc30004
    .word 0x24a5ffff
    .word 0xac440000
    .word 0xac430004
    .word 0x24c60008
    bgtz a1, L142d24
    .word 0x24420008
    jal func_001c3b00
    .word 0x8e040000
    jal func_001c3b80
    .word 0x8e040000
    addiu v0,zero,1
L142d58:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd00e0
}


