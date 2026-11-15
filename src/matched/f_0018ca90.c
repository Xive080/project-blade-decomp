extern void func_001ce240(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffb0
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8c82003c
    .word 0x70a08e28
    beqz v0, L18cac4
    .word 0x70808628
    .word 0x8e030010
    .word 0x30620001
    beqz v0, L18cad0
    addiu v0,zero,9
L18cac4:
    b L18cc7c
    .word 0x70001628
    addiu v0,zero,9
L18cad0:
    beq a2,v0, L18cc18
    .word 0x34620100
    addiu v1,zero,1
    beq a2,v1, L18caec
    nop
    b L18cc7c
    .word 0x70001628
L18caec:
    beqz s1, L18cc78
    nop
    .word 0x8e0203d8
    beq v0,v1, L18cb10
    nop
    beqz v0, L18cb10
    nop
    b L18cc78
    nop
L18cb10:
    .word 0x8e040414
    .word 0x3c027000
    .word 0x34453ed0
    .word 0x3c023f00
    .word 0x27a30040
    .word 0x44820000
    .word 0xc4830030
    .word 0xc4820034
    .word 0xc4810038
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xc7a10044
    .word 0x46000800
    .word 0xe7a00044
    .word 0xc4a10070
    .word 0xc7a00040
    .word 0x46000801
    .word 0xe7a00040
    .word 0xc4a10074
    .word 0xc7a00044
    .word 0x46000801
    .word 0xe7a00044
    .word 0xc4a10078
    .word 0xc7a00048
    .word 0x46000801
    .word 0xe7a00048
    .word 0xc7a20040
    .word 0xc7a10044
    .word 0xc7a00048
    .word 0x46021082
    .word 0x46010842
    .word 0x46011018
    .word 0x4600051c
    .word 0x46140044
    .word 0x8e22000c
    .word 0x3c033fc0
    .word 0x2444000c
    .word 0x44830000
    jal func_001ce240
    .word 0x46000d01
    .word 0x3c0240a0
    .word 0x44820800
    nop
    .word 0x46000842
    .word 0x4601a034
    nop
    bc1f L18cc78
    nop
    .word 0x3c023fc0
    .word 0x44821000
    .word 0x8e230008
    .word 0x3c023dcc
    .word 0x3442cccd
    .word 0x44820800
    nop
    .word 0x46000802
    .word 0x46001000
    .word 0xe60005e0
    .word 0x8e020010
    .word 0x34420040
    .word 0xae020010
    .word 0xae0305b8
    b L18cc78
    .word 0xae1105bc
    .word 0x34620100
L18cc18:
    .word 0xae020010
    .word 0xae1105bc
    .word 0x8e220008
    addiu a1,zero,1024
    .word 0xae0205b8
    .word 0x8e02003c
    beq v0,a1, L18cc78
    nop
    .word 0x8e020010
    .word 0x30420002
    bnez v0, L18cc78
    nop
    .word 0x8e02000c
    .word 0x8c420010
    jalr ra,v0
    nop
    beqz v0, L18cc78
    nop
    .word 0x8e02000c
    addiu a1,zero,1024
    .word 0x72002628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L18cc78:
    .word 0x70001628
L18cc7c:
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    .word 0x27bd0050
}
