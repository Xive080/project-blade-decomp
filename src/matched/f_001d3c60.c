extern void func_001dc3b0(void);
extern void func_001d7fa0(void);
extern void func_001d8240(void);
extern void func_001d7fe0(void);
extern void func_001d8120(void);
extern void func_001dc500(void);
extern void func_001d5d50(void);
extern void func_001d5ee0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8cb00000
    .word 0x8e02000c
    bnez v0,L1d3c94
    paddub s3,a0,zero
    b L1d404c
    addiu v0,zero,1
L1d3c94:
    jal func_001dc3b0
    addiu a0,zero,1
    paddub s1,v0,zero
    jal func_001d7fa0
    paddub a0,s3,zero
    paddub s2,v0,zero
    paddub a0,s2,zero
    .word 0x70002e28
    jal func_001d8240
    paddub a2,s3,zero
    beqz v0,L1d3cd8
    nop
    .word 0x8e05000c
    .word 0x8e070008
    paddub a0,v0,zero
    jal func_001d7fe0
    addiu a2,zero,36
L1d3cd8:
    .word 0x8e020010
    beq zero,v0,L1d3d04
    paddub a0,s2,zero
    addiu a1,zero,1
    jal func_001d8240
    paddub a2,s3,zero
    .word 0x8e050010
    .word 0x8e070008
    paddub a0,v0,zero
    jal func_001d7fe0
    addiu a2,zero,40
L1d3d04:
    .word 0x8e020014
    beq zero,v0,L1d3d38
    paddub a0,s2,zero
    paddub a0,s2,zero
    addiu a1,zero,2
    jal func_001d8240
    paddub a2,s3,zero
    .word 0x8e050014
    .word 0x8e070008
    paddub a0,v0,zero
    jal func_001d7fe0
    addiu a2,zero,64
    paddub a0,s2,zero
L1d3d38:
    addiu a1,zero,3
    jal func_001d8240
    paddub a2,s3,zero
    .word 0x8e050018
    paddub a0,v0,zero
    addiu a2,zero,208
    jal func_001d7fe0
    addiu a3,zero,1
    .word 0x8e020024
    sltiu at,v0,7
    beqzl at,L1d3de4
    .word 0x70001628
    .word 0x3c03002f
    sll v0,v0,0x2
    addiu v1,v1,1104
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0x8e02002c
    b L1d3dec
    addiu v1,v0,-2
    .word 0x8e03002c
    .word 0x3c02aaaa
    ori v0,v0,0xaaab
    multu v0,v1
    nop
    nop
    mfhi v0
    b L1d3dec
    srl v1,v0,0x1
    b L1d3dec
    .word 0x8e03002c
    .word 0x8e02002c
    b L1d3dec
    srl v1,v0,0x1
    .word 0x8e02002c
    b L1d3dec
    addiu v1,v0,-1
    .word 0x8e02002c
    b L1d3dec
    addiu v1,v0,-2
    .word 0x70001628
L1d3de4:
    b L1d4050
    .word 0x7bbf0050
L1d3dec:
    .word 0x8e020018
    paddub a0,s2,zero
    addiu a1,zero,4
    paddub a2,s3,zero
    .word 0xac4300ac
    .word 0x8e030024
    .word 0x8e020018
    jal func_001d8240
    .word 0xac4300a8
    .word 0x8e05001c
    beq zero,a1,L1d3ec4
    paddub a0,v0,zero
    paddub a0,v0,zero
    addiu a2,zero,48
    addiu a3,zero,1
    jal func_001d7fe0
    .word 0x7000a628
    .word 0x8e03001c
    .word 0x8c620000
    andi v0,v0,0x8
    beqz v0,L1d3e48
    nop
    addiu s4,zero,1
L1d3e48:
    .word 0xc6230000
    .word 0xc6220004
    .word 0xc6210008
    .word 0xc620000c
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0xc6230010
    .word 0xc6220014
    .word 0xc6210018
    .word 0xc620001c
    .word 0xe4630010
    .word 0xe4620014
    .word 0xe4610018
    .word 0xe460001c
    .word 0xc6230020
    .word 0xc6220024
    .word 0xc6210028
    .word 0xc620002c
    .word 0xe4630020
    .word 0xe4620024
    .word 0xe4610028
    bnez s4,L1d3f40
    .word 0xe460002c
    .word 0x8e04001c
    addiu v0,zero,-9
    .word 0x8c830000
    and v0,v1,v0
    b L1d3f40
    .word 0xac820000
L1d3ec4:
    addiu a1,zero,1
    jal func_001d8120
    addiu a2,zero,48
    .word 0x8c430008
    .word 0xc6230000
    .word 0xc6220004
    .word 0xc6210008
    .word 0xc620000c
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0xc6230010
    .word 0xc6220014
    .word 0xc6210018
    .word 0xc620001c
    .word 0xe4630010
    .word 0xe4620014
    .word 0xe4610018
    .word 0xe460001c
    .word 0xc6230020
    .word 0xc6220024
    .word 0xc6210028
    .word 0xc620002c
    .word 0xe4630020
    .word 0xe4620024
    .word 0xe4610028
    .word 0xe460002c
    .word 0x8c430010
    addiu v1,v1,1
    .word 0xac430010
L1d3f40:
    jal func_001dc500
    paddub a0,s1,zero
    .word 0x8e020028
    beq zero,v0,L1d3fe8
    .word 0x3c020033
    paddub a0,s2,zero
    addiu a1,zero,5
    jal func_001d8240
    paddub a2,s3,zero
    .word 0x8e050028
    .word 0x8e07002c
    paddub a0,v0,zero
    jal func_001d7fe0
    addiu a2,zero,2
    .word 0x3c020033
    addiu s1,v0,-6624
    .word 0x8e220008
    beqz v0,L1d3fc0
    .word 0x8e300000
    paddub a1,s3,zero
    paddub a0,s0,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d3fc0
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s1,16
    bnez v0,L1d3fc0
    nop
    .word 0xae220008
L1d3fc0:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d404c
    addiu v0,zero,1
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
    b L1d4048
    nop
L1d3fe8:
    addiu s1,v0,-6624
    .word 0x8e220008
    beqz v0,L1d402c
    .word 0x8e300000
    paddub a1,s3,zero
    paddub a0,s0,zero
    jal func_001d5d50
    addiu a2,zero,1
    beqz v0,L1d402c
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s1,16
    bnez v0,L1d402c
    nop
    .word 0xae220008
L1d402c:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d4048
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
L1d4048:
    addiu v0,zero,1
L1d404c:
    .word 0x7bbf0050
L1d4050:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}


