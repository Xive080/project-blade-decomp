extern void func_002017f0(void);
extern void func_00201c00(void);
extern void func_0022b3e0(void);
extern void func_001a8d50(void);
extern void func_001a9780(void);
extern void func_00238430(void);
extern void func_001feca0(void);
extern void func_001c36f0(void);
extern void func_00143600(void);
extern void func_0017a3c0(void);
extern void func_0013be20(void);
extern void func_0011ec80(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c820518
    beqz v0,L154da4
    paddub s0,a0,zero
    .word 0xac400008
L154da4:
    .word 0x8e050008
    .word 0x3c020030
    addiu v1,v0,13520
    ori v0,zero,0xeb60
    addu v0,s0,v0
    sll a0,a1,0x5
    addu a1,a0,a1
    sll a0,a1,0x3
    addu a0,a1,a0
    sll a0,a0,0x2
    addu v1,v1,a0
    .word 0xaf838030
    jal func_002017f0
    .word 0x8c440000
    .word 0x3c010001
    addu at,s0,at
    ori v0,zero,0xeb5c
    addu v0,s0,v0
    .word 0xac20eb60
    jal func_00201c00
    .word 0x8c440000
    .word 0x3c010001
    addu at,s0,at
    ori v0,zero,0xeb64
    addu v0,s0,v0
    .word 0xac20eb5c
    jal func_002017f0
    .word 0x8c440000
    .word 0x3c010001
    addu at,s0,at
    ori v0,zero,0xeb68
    addu v0,s0,v0
    .word 0xac20eb64
    jal func_002017f0
    .word 0x8c440000
    .word 0x3c010001
    addu at,s0,at
    .word 0xac20eb68
    .word 0x3c010001
    addu at,s0,at
    jal func_0022b3e0
    .word 0x8c24eb10
    .word 0x3c010001
    addu at,s0,at
    jal func_0022b3e0
    .word 0x8c24eb14
    .word 0xae00000c
    .word 0x70008e28
    paddub s2,s0,zero
L154e68:
    jal func_001a8d50
    addiu a0,s2,1380
    jal func_001a9780
    addiu a0,s2,1380
    addiu s1,s1,1
    slti v0,s1,38
    bnez v0,L154e68
    addiu s2,s2,116
    .word 0x70009628
    paddub s1,s0,zero
L154e90:
    jal func_001a8d50
    addiu a0,s1,5844
    jal func_001a9780
    addiu a0,s1,5844
    addiu s2,s2,1
    slti v0,s2,16
    bnez v0,L154e90
    addiu s1,s1,116
    .word 0xae00169c
    .word 0xae0016a0
    addiu a0,s0,7704
    jal func_00238430
    .word 0xae001e14
    .word 0x8e040450
    beqz a0,L154edc
    nop
    jal func_001feca0
    nop
    .word 0xae000450
L154edc:
    .word 0x8e040454
    beqz a0,L154ef4
    nop
    jal func_001feca0
    nop
    .word 0xae000454
L154ef4:
    .word 0x8e040458
    beqz a0,L154f10
    addiu v0,zero,-1
    jal func_001feca0
    nop
    .word 0xae000458
    addiu v0,zero,-1
L154f10:
    .word 0xae02045c
    .word 0x8e040460
    beqz a0,L154f2c
    nop
    jal func_001feca0
    nop
    .word 0xae000460
L154f2c:
    .word 0x8e040464
    beqz a0,L154f44
    nop
    jal func_001feca0
    nop
    .word 0xae000464
L154f44:
    .word 0x8e040468
    beqz a0,L154f60
    addiu v0,zero,-1
    jal func_001feca0
    nop
    .word 0xae000468
    addiu v0,zero,-1
L154f60:
    .word 0xae02046c
    .word 0x8e040470
    beqz a0,L154f7c
    nop
    jal func_001feca0
    nop
    .word 0xae000470
L154f7c:
    .word 0x8e040474
    beqz a0,L154f94
    nop
    jal func_001feca0
    nop
    .word 0xae000474
L154f94:
    .word 0x8e040478
    beqz a0,L154fb0
    addiu v0,zero,-1
    jal func_001feca0
    nop
    .word 0xae000478
    addiu v0,zero,-1
L154fb0:
    .word 0xae02047c
    .word 0x8e040480
    beqz a0,L154fcc
    nop
    jal func_001feca0
    nop
    .word 0xae000480
L154fcc:
    .word 0x8e040484
    beqz a0,L154fe4
    nop
    jal func_001feca0
    nop
    .word 0xae000484
L154fe4:
    .word 0x8e040488
    beqz a0,L155000
    addiu v0,zero,-1
    jal func_001feca0
    nop
    .word 0xae000488
    addiu v0,zero,-1
L155000:
    .word 0xae02048c
    .word 0x8e040490
    beqz a0,L15501c
    nop
    jal func_001feca0
    nop
    .word 0xae000490
L15501c:
    .word 0x8e040494
    beqz a0,L155034
    nop
    jal func_001feca0
    nop
    .word 0xae000494
L155034:
    .word 0x8e040498
    beqz a0,L155050
    addiu v0,zero,-1
    jal func_001feca0
    nop
    .word 0xae000498
    addiu v0,zero,-1
L155050:
    .word 0xae02049c
    .word 0x8e0404a0
    beqz a0,L15506c
    nop
    jal func_001feca0
    nop
    .word 0xae0004a0
L15506c:
    .word 0x8e0404a4
    beqz a0,L155084
    nop
    jal func_001feca0
    nop
    .word 0xae0004a4
L155084:
    .word 0x8e0404a8
    beqz a0,L1550a0
    addiu v0,zero,-1
    jal func_001feca0
    nop
    .word 0xae0004a8
    addiu v0,zero,-1
L1550a0:
    .word 0xae0204ac
    .word 0x8e0404b0
    beqz a0,L1550bc
    nop
    jal func_001feca0
    nop
    .word 0xae0004b0
L1550bc:
    .word 0x8e0404b4
    beqz a0,L1550d4
    nop
    jal func_001feca0
    nop
    .word 0xae0004b4
L1550d4:
    .word 0x8e0404b8
    beqz a0,L1550f0
    addiu v0,zero,-1
    jal func_001feca0
    nop
    .word 0xae0004b8
    addiu v0,zero,-1
L1550f0:
    .word 0xae0204bc
    .word 0x8e0404c0
    beqz a0,L15510c
    nop
    jal func_001feca0
    nop
    .word 0xae0004c0
L15510c:
    .word 0x8e0404c4
    beqz a0,L155124
    nop
    jal func_001feca0
    nop
    .word 0xae0004c4
L155124:
    .word 0x8e0404c8
    beqz a0,L155140
    addiu v0,zero,-1
    jal func_001feca0
    nop
    .word 0xae0004c8
    addiu v0,zero,-1
L155140:
    .word 0xae0204cc
    .word 0x8e0404d0
    beqz a0,L15515c
    nop
    jal func_001feca0
    nop
    .word 0xae0004d0
L15515c:
    .word 0x8e0404d4
    beqz a0,L155174
    nop
    jal func_001feca0
    nop
    .word 0xae0004d4
L155174:
    .word 0x8e0404d8
    beqz a0,L155190
    addiu v0,zero,-1
    jal func_001feca0
    nop
    .word 0xae0004d8
    addiu v0,zero,-1
L155190:
    .word 0xae0204dc
    .word 0x8e040404
    beqz a0,L1551ac
    nop
    jal func_00201c00
    nop
    .word 0xae000404
L1551ac:
    .word 0x8e040408
    beqz a0,L1551c4
    nop
    jal func_00201c00
    nop
    .word 0xae000408
L1551c4:
    .word 0x8e040428
    beqz a0,L1551dc
    nop
    jal func_00201c00
    nop
    .word 0xae000428
L1551dc:
    .word 0x8e04042c
    beqz a0,L1551f4
    nop
    jal func_00201c00
    nop
    .word 0xae00042c
L1551f4:
    jal func_001c36f0
    .word 0x8e0404e0
    .word 0xae0004e0
    jal func_001c36f0
    .word 0x8e0404e4
    .word 0xae0004e4
    jal func_001c36f0
    .word 0x8e0404e8
    .word 0xae0004e8
    jal func_001c36f0
    .word 0x8e0404ec
    .word 0xae0004ec
    jal func_001c36f0
    .word 0x8e0404f0
    .word 0xae0004f0
    jal func_001c36f0
    .word 0x8e0404f4
    .word 0xae0004f4
    jal func_001c36f0
    .word 0x8e0404f8
    .word 0xae0004f8
    jal func_001c36f0
    .word 0x8e0404fc
    .word 0xae0004fc
    jal func_00143600
    .word 0x8e0400b0
    jal func_0017a3c0
    nop
    .word 0x8c420004
    jalr ra,v0
    paddub a0,s0,zero
    jal func_0013be20
    paddub a0,s0,zero
    .word 0x8f848030
    addiu a2,zero,1188
    jal func_0011ec80
    .word 0x70002e28
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}


