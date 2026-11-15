extern void func_0011eac8(void);
extern void func_001c8470(void);
extern void func_001c84b0(void);
extern void func_001c85a0(void);
extern void func_001c8860(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-128
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x90a20022
    paddub s1,a0,zero
    paddub s0,a1,zero
    paddub s4,zero,zero
    andi v0,v0,0x2
    beqz v0,L1ece24
    paddub s5,zero,zero
    addiu s4,zero,1
L1ece24:
    bnez s4,L1ece48
    paddub a0,s0,zero
    paddub a1,zero,zero
    jal func_001c8860
    addiu a2,zero,2
    bnez v0,L1ece48
    paddub v0,zero,zero
    b L1ed8f0
    .word 0x7bbf0070
L1ece48:
    .word 0x92020023
    andi v0,v0,0x60
    beqz v0,L1ece8c
    nop
    .word 0x92020022
    andi v0,v0,0x8
    beqz v0,L1ece6c
    nop
    addiu s5,zero,1
L1ece6c:
    bnez s5,L1ece8c
    paddub a0,s0,zero
    jal func_001c85a0
    addiu a1,zero,2
    bnez v0,L1ece8c
    paddub v0,zero,zero
    b L1ed8ec
    nop
L1ece8c:
    .word 0x8e24000c
    .word 0x8e330014
    .word 0x8e220018
    addiu a1,zero,32
    beq a0,a1,L1ed3c4
    .word 0x8e120004
    addiu v1,zero,8
    beq a0,v1,L1ed084
    addiu v1,zero,4
    beq a0,v1,L1ecec0
    nop
    b L1ed880
    .word 0x92020023
L1ecec0:
    .word 0x92050023
    addiu v1,zero,64
    andi a0,a1,0x40
    beq a0,v1,L1ecedc
    andi a0,a1,0xf
    b L1ed050
    andi v0,a1,0x60
L1ecedc:
    addiu v1,zero,5
    beq a0,v1,L1ecf54
    addiu v1,zero,1
    beq a0,v1,L1ecef8
    nop
    b L1ecfbc
    paddub a0,zero,zero
L1ecef8:
    .word 0x8e080008
    paddub a3,zero,zero
L1ecf00:
    .word 0x95060000
    addiu a3,a3,1
    addiu a0,zero,255
    slti v1,a3,16
    sra a1,a2,0x7
    andi a1,a1,0xf8
    .word 0xa0450002
    sra a1,a2,0x2
    andi a1,a1,0xf8
    .word 0xa0450001
    sll a1,a2,0x3
    andi a1,a1,0xf8
    .word 0xa0450000
    andi a1,a2,0x8000
    movz a0,zero,a1
    .word 0xa0440003
    addiu v0,v0,4
    bnez v1,L1ecf00
    addiu t0,t0,2
    b L1ecfb8
    nop
L1ecf54:
    .word 0x8e080008
    paddub t1,zero,zero
    .word 0x3c03fe00
    .word 0x3c07ff00
    ori a2,v1,0x1ff
L1ecf68:
    .word 0x8d050000
    addiu t1,t1,1
    slti v1,t1,16
    srl a0,a1,0x10
    .word 0xa0440002
    srl a0,a1,0x8
    .word 0xa0440001
    and a0,a1,a3
    .word 0x00c40019
    .word 0xa0450000
    addiu t0,t0,4
    mfhi a1
    subu a0,a0,a1
    srl a0,a0,0x1
    addu a0,a0,a1
    srl a0,a0,0x17
    .word 0xa0440003
    bnez v1,L1ecf68
    addiu v0,v0,4
    nop
L1ecfb8:
    paddub a0,zero,zero
L1ecfbc:
    b L1ed03c
    .word 0x8e020010
L1ecfc4:
    paddub a1,s3,zero
    b L1ed010
    paddub a2,zero,zero
L1ecfd0:
    .word 0x8602001c
    addu v0,a2,v0
    andi v0,v0,0x1
    beqz v0,L1ecffc
    nop
    .word 0x90620000
    sra v0,v0,0x4
    andi v0,v0,0xf
    .word 0xa0a20000
    b L1ed008
    addiu v1,v1,1
L1ecffc:
    .word 0x80620000
    andi v0,v0,0xf
    .word 0xa0a20000
L1ed008:
    addiu a1,a1,1
    addiu a2,a2,1
L1ed010:
    .word 0x8e02000c
    slt v0,a2,v0
    bnez v0,L1ecfd0
    nop
    .word 0x8e230010
    .word 0x8e020018
    addiu a0,a0,1
    addu s3,s3,v1
    addu s2,s2,v0
    nop
    .word 0x8e020010
L1ed03c:
    slt v0,a0,v0
    bnez v0,L1ecfc4
    paddub v1,s2,zero
    b L1ed8bc
    .word 0x92020023
L1ed050:
    beqz v0,L1ed068
    nop
    bnez s5,L1ed068
    paddub a0,s0,zero
    jal func_001c84b0
    nop
L1ed068:
    bnez s4,L1ed07c
    paddub v0,zero,zero
    jal func_001c8470
    paddub a0,s0,zero
    paddub v0,zero,zero
L1ed07c:
    b L1ed8ec
    nop
L1ed084:
    .word 0x92040023
    andi a2,a0,0x60
    beql a2,a1,L1ed218
    andi a0,a0,0xf
    addiu v1,zero,64
    beql a2,v1,L1ed0a8
    andi a0,a0,0xf
    b L1ed390
    nop
L1ed0a8:
    addiu v1,zero,5
    beq a0,v1,L1ed120
    addiu v1,zero,1
    beq a0,v1,L1ed0c4
    nop
    b L1ed184
    paddub a2,zero,zero
L1ed0c4:
    .word 0x8e070008
    paddub t0,zero,zero
L1ed0cc:
    .word 0x94e60000
    addiu t0,t0,1
    addiu a0,zero,255
    slti v1,t0,16
    sra a1,a2,0x7
    andi a1,a1,0xf8
    .word 0xa0450002
    sra a1,a2,0x2
    andi a1,a1,0xf8
    .word 0xa0450001
    sll a1,a2,0x3
    andi a1,a1,0xf8
    .word 0xa0450000
    andi a1,a2,0x8000
    movz a0,zero,a1
    .word 0xa0440003
    addiu v0,v0,4
    bnez v1,L1ed0cc
    addiu a3,a3,2
    b L1ed180
    nop
L1ed120:
    .word 0x8e080008
    paddub t1,zero,zero
    .word 0x3c03fe00
    .word 0x3c07ff00
    ori a2,v1,0x1ff
L1ed134:
    .word 0x8d050000
    addiu t1,t1,1
    slti v1,t1,16
    srl a0,a1,0x10
    .word 0xa0440002
    srl a0,a1,0x8
    .word 0xa0440001
    and a0,a1,a3
    .word 0x00c40019
    .word 0xa0450000
    addiu t0,t0,4
    mfhi a1
    subu a0,a0,a1
    srl a0,a0,0x1
    addu a0,a0,a1
    srl a0,a0,0x17
    .word 0xa0440003
    bnez v1,L1ed134
    addiu v0,v0,4
L1ed180:
    paddub a2,zero,zero
L1ed184:
    b L1ed204
    .word 0x8e020010
L1ed18c:
    paddub a0,s3,zero
    b L1ed1d8
    paddub a1,zero,zero
L1ed198:
    .word 0x8602001c
    addu v0,a1,v0
    andi v0,v0,0x1
    beqz v0,L1ed1c4
    nop
    .word 0x90620000
    sra v0,v0,0x4
    andi v0,v0,0xf
    .word 0xa0820000
    b L1ed1d0
    addiu v1,v1,1
L1ed1c4:
    .word 0x80620000
    andi v0,v0,0xf
    .word 0xa0820000
L1ed1d0:
    addiu a0,a0,1
    addiu a1,a1,1
L1ed1d8:
    .word 0x8e02000c
    slt v0,a1,v0
    bnez v0,L1ed198
    nop
    .word 0x8e230010
    .word 0x8e020018
    addiu a2,a2,1
    addu s3,s3,v1
    addu s2,s2,v0
    nop
    .word 0x8e020010
L1ed204:
    slt v0,a2,v0
    bnez v0,L1ed18c
    paddub v1,s2,zero
    b L1ed8b8
    nop
L1ed218:
    addiu v1,zero,5
    beq a0,v1,L1ed2b8
    addiu v1,zero,1
    beq a0,v1,L1ed234
    nop
    b L1ed34c
    paddub s6,zero,zero
L1ed234:
    .word 0x8e030008
    .word 0x3c04002f
    paddub a1,zero,zero
    addiu a0,a0,2048
L1ed244:
    sra a2,a1,0x3
    andi a2,a2,0x3
    sll a2,a2,0x2
    addu a2,a0,a2
    .word 0x8cc80000
    andi t1,a1,0xe7
    addiu a1,a1,1
    addiu a3,zero,255
    or t0,t1,t0
    sll t0,t0,0x1
    addu t0,v1,t0
    .word 0x95090000
    slti a2,a1,256
    sra t0,t1,0x7
    andi t0,t0,0xf8
    .word 0xa0480002
    sra t0,t1,0x2
    andi t0,t0,0xf8
    .word 0xa0480001
    sll t0,t1,0x3
    andi t0,t0,0xf8
    .word 0xa0480000
    andi t0,t1,0x8000
    movz a3,zero,t0
    .word 0xa0470003
    bnez a2,L1ed244
    addiu v0,v0,4
    b L1ed348
    nop
L1ed2b8:
    .word 0x8e030008
    .word 0x3c04002f
    paddub a1,zero,zero
    addiu a0,a0,2048
    .word 0x3c06fe00
    .word 0x3c0aff00
    ori t1,a2,0x1ff
L1ed2d4:
    sra a2,a1,0x3
    andi a2,a2,0x3
    sll a2,a2,0x2
    addu a2,a0,a2
    .word 0x8cc70000
    andi t0,a1,0xe7
    addiu a1,a1,1
    or a3,t0,a3
    sll a3,a3,0x2
    addu a3,v1,a3
    .word 0x8ce80000
    slti a2,a1,256
    srl a3,t0,0x10
    .word 0xa0470002
    srl a3,t0,0x8
    .word 0xa0470001
    and a3,t0,t2
    .word 0x01270019
    .word 0xa0480000
    nop
    mfhi t0
    subu a3,a3,t0
    srl a3,a3,0x1
    addu a3,a3,t0
    srl a3,a3,0x17
    .word 0xa0470003
    bnez a2,L1ed2d4
    addiu v0,v0,4
    nop
L1ed348:
    paddub s6,zero,zero
L1ed34c:
    b L1ed37c
    .word 0x8e020010
L1ed354:
    .word 0x8e06000c
    paddub a0,s3,zero
    jal func_0011eac8
    paddub a1,s2,zero
    .word 0x8e230010
    .word 0x8e020018
    addiu s6,s6,1
    addu s3,s3,v1
    addu s2,s2,v0
    .word 0x8e020010
L1ed37c:
    slt v0,s6,v0
    bnez v0,L1ed354
    nop
    b L1ed8b8
    nop
L1ed390:
    beqz a2,L1ed3a8
    nop
    bnez s5,L1ed3a8
    paddub a0,s0,zero
    jal func_001c84b0
    nop
L1ed3a8:
    bnez s4,L1ed3bc
    paddub v0,zero,zero
    jal func_001c8470
    paddub a0,s0,zero
    paddub v0,zero,zero
L1ed3bc:
    b L1ed8ec
    nop
L1ed3c4:
    .word 0x3c02002f
    paddub a3,zero,zero
    b L1ed868
    addiu a1,v0,2048
L1ed3d4:
    .word 0x92060023
    addiu v1,zero,5
    andi a0,a2,0x6f
    beq a0,v1,L1ed7a0
    paddub v0,s3,zero
    addiu v1,zero,6
    beq a0,v1,L1ed73c
    paddub t1,s2,zero
    addiu v1,zero,1
    beq a0,v1,L1ed6d4
    paddub t0,s2,zero
    beqz a0,L1ed6d0
    addiu v1,zero,37
    beq a0,v1,L1ed630
    addiu v1,zero,33
    beq a0,v1,L1ed598
    addiu v1,zero,32
    beq a0,v1,L1ed598
    addiu v1,zero,69
    beq a0,v1,L1ed4e8
    addiu v1,zero,65
    beq a0,v1,L1ed440
    addiu v1,zero,64
    beq a0,v1,L1ed440
    nop
    b L1ed81c
    andi v0,a2,0x60
L1ed440:
    .word 0x8e030008
    paddub a0,s2,zero
    b L1ed4d0
    paddub a2,zero,zero
L1ed450:
    .word 0x8608001c
    addu t0,a2,t0
    andi t0,t0,0x1
    beqz t0,L1ed478
    nop
    .word 0x90880000
    sra t0,t0,0x4
    andi t0,t0,0xf
    b L1ed480
    addiu a0,a0,1
L1ed478:
    .word 0x90880000
    andi t0,t0,0xf
L1ed480:
    andi t0,t0,0xffff
    sll t0,t0,0x1
    addu t0,v1,t0
    .word 0x950a0000
    addiu a2,a2,1
    sra t1,t2,0x7
    andi t1,t1,0xf8
    .word 0xa0490002
    sra t1,t2,0x2
    andi t1,t1,0xf8
    .word 0xa0490001
    sll t1,t2,0x3
    andi t1,t1,0xf8
    .word 0xa0490000
    addiu t0,zero,255
    andi t1,t2,0x8000
    movz t0,zero,t1
    .word 0xa0480003
    addiu v0,v0,4
    nop
L1ed4d0:
    .word 0x8e08000c
    slt t0,a2,t0
    bnez t0,L1ed450
    nop
    b L1ed854
    .word 0x8e230010
L1ed4e8:
    .word 0x8e030008
    paddub a0,s2,zero
    b L1ed580
    paddub a2,zero,zero
L1ed4f8:
    .word 0x8608001c
    addu t0,a2,t0
    andi t0,t0,0x1
    beqz t0,L1ed520
    nop
    .word 0x90880000
    sra t0,t0,0x4
    andi t0,t0,0xf
    b L1ed528
    addiu a0,a0,1
L1ed520:
    .word 0x90880000
    andi t0,t0,0xf
L1ed528:
    sll t0,t0,0x2
    addu t0,v1,t0
    .word 0x8d0b0000
    .word 0x3c09ff00
    addiu a2,a2,1
    .word 0x3c08fe00
    ori t0,t0,0x1ff
    and t2,t3,t1
    .word 0x010a0019
    srl t0,t3,0x10
    .word 0xa0480002
    srl t0,t3,0x8
    .word 0xa0480001
    mfhi t1
    .word 0xa04b0000
    subu t0,t2,t1
    srl t0,t0,0x1
    addu t0,t0,t1
    srl t0,t0,0x17
    .word 0xa0480003
    addiu v0,v0,4
    nop
L1ed580:
    .word 0x8e08000c
    slt t0,a2,t0
    bnez t0,L1ed4f8
    nop
    b L1ed850
    nop
L1ed598:
    .word 0x8e030008
    paddub a0,s2,zero
    b L1ed618
    paddub a2,zero,zero
L1ed5a8:
    .word 0x908a0000
    addiu t0,zero,255
    addiu a2,a2,1
    sra t1,t2,0x3
    andi t1,t1,0x3
    sll t1,t1,0x2
    addu t1,a1,t1
    .word 0x8d290000
    andi t2,t2,0xe7
    addiu a0,a0,1
    or t1,t2,t1
    sll t1,t1,0x1
    addu t1,v1,t1
    .word 0x952a0000
    sra t1,t2,0x7
    andi t1,t1,0xf8
    .word 0xa0490002
    sra t1,t2,0x2
    andi t1,t1,0xf8
    .word 0xa0490001
    sll t1,t2,0x3
    andi t1,t1,0xf8
    .word 0xa0490000
    andi t1,t2,0x8000
    movz t0,zero,t1
    .word 0xa0480003
    addiu v0,v0,4
    nop
L1ed618:
    .word 0x8e08000c
    slt t0,a2,t0
    bnez t0,L1ed5a8
    nop
    b L1ed850
    nop
L1ed630:
    .word 0x8e030008
    paddub a0,s2,zero
    b L1ed6b8
    paddub a2,zero,zero
L1ed640:
    .word 0x908c0000
    .word 0x3c08fe00
    .word 0x3c09ff00
    ori t0,t0,0x1ff
    addiu a2,a2,1
    srl t2,t4,0x3
    andi t2,t2,0x3
    sll t2,t2,0x2
    addu t2,a1,t2
    .word 0x8d4b0000
    addiu a0,a0,1
    andi t2,t4,0xe7
    or t2,t2,t3
    sll t2,t2,0x2
    addu t2,v1,t2
    .word 0x8d4b0000
    and t2,t3,t1
    .word 0x010a0019
    srl t0,t3,0x10
    .word 0xa0480002
    srl t0,t3,0x8
    .word 0xa0480001
    mfhi t1
    .word 0xa04b0000
    subu t0,t2,t1
    srl t0,t0,0x1
    addu t0,t0,t1
    srl t0,t0,0x17
    .word 0xa0480003
    addiu v0,v0,4
L1ed6b8:
    .word 0x8e08000c
    slt t0,a2,t0
    bnez t0,L1ed640
    nop
    b L1ed850
    nop
L1ed6d0:
    paddub t0,s2,zero
L1ed6d4:
    b L1ed720
    paddub t1,zero,zero
L1ed6dc:
    .word 0x95060000
    addiu v1,zero,255
    addiu t1,t1,1
    sra a0,a2,0x7
    andi a0,a0,0xf8
    .word 0xa0440002
    sra a0,a2,0x2
    andi a0,a0,0xf8
    .word 0xa0440001
    sll a0,a2,0x3
    andi a0,a0,0xf8
    .word 0xa0440000
    andi a0,a2,0x8000
    movz v1,zero,a0
    .word 0xa0430003
    addiu t0,t0,2
    addiu v0,v0,4
L1ed720:
    .word 0x8e03000c
    slt v1,t1,v1
    bnez v1,L1ed6dc
    nop
    b L1ed850
    nop
    paddub t1,s2,zero
L1ed73c:
    b L1ed788
    paddub t2,zero,zero
L1ed744:
    .word 0x91280001
    .word 0x91240002
    .word 0x91260000
    addiu v1,zero,255
    addiu t2,t2,1
    sll t0,t0,0x8
    sll a0,a0,0x10
    or a2,a2,t0
    or a2,a0,a2
    .word 0xa0460000
    srl a0,a2,0x8
    .word 0xa0440001
    srl a0,a2,0x10
    .word 0xa0440002
    .word 0xa0430003
    addiu t1,t1,3
    addiu v0,v0,4
L1ed788:
    .word 0x8e03000c
    slt v1,t2,v1
    bnez v1,L1ed744
    nop
    b L1ed850
    nop
L1ed7a0:
    paddub t0,s2,zero
    b L1ed800
    paddub t2,zero,zero
L1ed7ac:
    .word 0x8d090000
    .word 0x3c04ff00
    .word 0x3c03fe00
    ori v1,v1,0x1ff
    addiu t2,t2,1
    and a2,t1,a0
    .word 0x00660019
    addiu t0,t0,4
    srl v1,t1,0x10
    .word 0xa0430002
    srl v1,t1,0x8
    .word 0xa0430001
    mfhi a0
    .word 0xa0490000
    subu v1,a2,a0
    srl v1,v1,0x1
    addu v1,v1,a0
    srl v1,v1,0x17
    .word 0xa0430003
    addiu v0,v0,4
    nop
L1ed800:
    .word 0x8e03000c
    slt v1,t2,v1
    bnez v1,L1ed7ac
    nop
    b L1ed850
    nop
    andi v0,a2,0x60
L1ed81c:
    beqz v0,L1ed834
    nop
    bnez s5,L1ed834
    paddub a0,s0,zero
    jal func_001c84b0
    nop
L1ed834:
    bnez s4,L1ed848
    paddub v0,zero,zero
    jal func_001c8470
    paddub a0,s0,zero
    paddub v0,zero,zero
L1ed848:
    b L1ed8ec
    nop
L1ed850:
    .word 0x8e230010
L1ed854:
    .word 0x8e020018
    addiu a3,a3,1
    addu s3,s3,v1
    addu s2,s2,v0
    nop
L1ed868:
    .word 0x8e020010
    slt v0,a3,v0
    bnez v0,L1ed3d4
    nop
    b L1ed8b8
    nop
L1ed880:
    andi v0,v0,0x60
    beqz v0,L1ed89c
    nop
    bnez s5,L1ed89c
    paddub a0,s0,zero
    jal func_001c84b0
    nop
L1ed89c:
    bnez s4,L1ed8b0
    paddub v0,zero,zero
    jal func_001c8470
    paddub a0,s0,zero
    paddub v0,zero,zero
L1ed8b0:
    b L1ed8ec
    nop
L1ed8b8:
    .word 0x92020023
L1ed8bc:
    andi v0,v0,0x60
    beqz v0,L1ed8d8
    nop
    bnez s5,L1ed8d8
    paddub a0,s0,zero
    jal func_001c84b0
    nop
L1ed8d8:
    bnez s4,L1ed8ec
    addiu v0,zero,1
    jal func_001c8470
    paddub a0,s0,zero
    addiu v0,zero,1
L1ed8ec:
    .word 0x7bbf0070
L1ed8f0:
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,128
}
