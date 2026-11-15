extern void func_0012b910(void);
extern void func_00179d10(void);
extern void func_001be3a0(void);
extern void func_001be240(void);
extern void func_001be540(void);
extern void func_0017a070(void);
extern void func_0017a1b0(void);
extern void func_001c3b80(void);
extern void func_0024a430(void);
extern void func_0024a190(void);
extern void func_0016b700(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-128
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xac85003c
    .word 0x8c83003c
    addiu a1,zero,1
    beq v1,a1,L12cd20
    paddub s1,a0,zero
    addiu v0,zero,4
    beq v1,v0,L12cac0
    nop
    addiu v0,zero,2
    beq v1,v0,L12c95c
    nop
    beqz v1,L12c93c
    nop
    b L12cdec
    .word 0x7bbf0020
L12c93c:
    jal func_0012b910
    nop
    .word 0x8e220010
    ori v0,v0,0x4
    .word 0xae220010
    .word 0x8e220030
    b L12cde8
    .word 0xae2200bc
L12c95c:
    .word 0x8e300034
    beqz s0,L12c970
    nop
    jal func_00179d10
    .word 0x70002e28
L12c970:
    .word 0x8e240030
    .word 0x3c02002f
    jal func_001be3a0
    addiu a1,v0,-16408
    .word 0x8e240030
    .word 0x3c02002f
    .word 0x44806000
    addiu a1,v0,-16408
    addiu a2,zero,1
    jal func_001be240
    .word 0x70003e28
    beqz v0,L12c9d4
    nop
    .word 0x3c02002f
    addiu a1,v0,-16408
    .word 0x8e230010
    .word 0x3c020013
    addiu a2,v0,-7648
    ori v0,v1,0x800
    .word 0xae220010
    .word 0x8e240030
    jal func_001be540
    paddub a3,s1,zero
    b L12c9e8
    .word 0x8e240010
L12c9d4:
    .word 0x8e230010
    addiu v0,zero,-2049
    and v0,v1,v0
    .word 0xae220010
    .word 0x8e240010
L12c9e8:
    addiu v1,zero,-481
    .word 0x3c027f7f
    ori v0,v0,0xffff
    and v1,a0,v1
    .word 0xae230010
    .word 0xae2200d4
    .word 0xae2000d8
    .word 0x8e220038
    .word 0x8c420000
    beqz v0,L12ca58
    nop
    .word 0x8e2200cc
    addiu v1,zero,1
    .word 0xac430030
    .word 0x8e220038
    .word 0xac43003c
    .word 0x8e220038
    .word 0xac400004
    .word 0x8e220038
    .word 0xac400008
    .word 0x8e220038
    .word 0xac40000c
    .word 0x8e220038
    .word 0xac400010
    .word 0x8e220038
    .word 0xac400014
    .word 0x8e220038
    .word 0xac400018
L12ca58:
    beqz s0,L12ca88
    addiu a1,zero,1
    .word 0x8e220034
    .word 0xac400014
    .word 0x8e220034
    .word 0xac400010
    .word 0x8e220034
    .word 0xac40000c
    .word 0xae000044
    .word 0xae000040
    .word 0xae00003c
    addiu a1,zero,1
L12ca88:
    jal func_0017a070
    paddub a0,s1,zero
    .word 0x8e220010
    ori v0,v0,0x4
    .word 0xae220010
    .word 0x8e220030
    .word 0xae2200bc
    .word 0x8e2400c0
    beqz a0,L12cde8
    nop
    jal func_0017a1b0
    nop
    b L12cde8
    nop
L12cac0:
    .word 0x8e220034
    beqz v0,L12cad4
    .word 0x70008628
    jal func_00179d10
    nop
L12cad4:
    .word 0x8e220010
    andi v0,v0,0x10
    beqz v0,L12cbd4
    nop
    .word 0x8e2203e4
    beqz v0,L12cb54
    nop
    .word 0x8c420008
    jal func_001c3b80
    .word 0x8c4404ec
    .word 0xc4420030
    .word 0xc4410034
    .word 0xc4400038
    addiu a1,sp,96
    addiu v1,sp,108
    .word 0xe4a20000
    .word 0xe4a10004
    .word 0xe4a00008
    .word 0x8e2403e4
    .word 0x3c023fa0
    .word 0x8c84000c
    .word 0xc482000c
    .word 0xc4810010
    .word 0xc4800014
    .word 0xe4620000
    .word 0xe4610004
    .word 0xe4600008
    .word 0xafa20078
    jal func_0024a430
    .word 0x8e2400b4
    b L12cb64
    .word 0xc6230070
L12cb54:
    .word 0x8e2400b4
    jal func_0024a430
    .word 0x70002e28
    .word 0xc6230070
L12cb64:
    .word 0xc6220074
    .word 0xc6210078
    .word 0xc620007c
    addiu a1,sp,48
    addiu v1,sp,64
    .word 0x3c017000
    .word 0xe4a30000
    .word 0xe4a20004
    .word 0xe4a10008
    .word 0xe4a0000c
    .word 0xc6230080
    .word 0xc6220084
    .word 0xc6210088
    .word 0xc620008c
    addiu v0,sp,80
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0x8c233fd8
    .word 0xc4620028
    .word 0xc461002c
    .word 0xc4600030
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    jal func_0024a190
    .word 0x8e2400b4
L12cbd4:
    .word 0x8e2400b4
    beqz a0,L12cc0c
    nop
    .word 0x3c02002f
    jal func_001be3a0
    addiu a1,v0,-16408
    .word 0x8e2400b4
    .word 0x3c02002f
    .word 0x44806000
    addiu a1,v0,-16408
    addiu a2,zero,1
    jal func_001be240
    .word 0x70003e28
    paddub s0,v0,zero
L12cc0c:
    beqz s0,L12cc44
    nop
    .word 0x3c02002f
    addiu a1,v0,-16408
    .word 0x8e230010
    .word 0x3c020013
    addiu a2,v0,-7648
    ori v0,v1,0x800
    .word 0xae220010
    .word 0x8e2400b4
    jal func_001be540
    paddub a3,s1,zero
    b L12cc54
    nop
L12cc44:
    .word 0x8e230010
    addiu v0,zero,-2049
    and v0,v1,v0
    .word 0xae220010
L12cc54:
    beqz s0,L12cc98
    nop
    .word 0x8e2403e0
    beqz a0,L12cc74
    nop
    .word 0x44806000
    jal func_0016b700
    addiu a1,zero,1
L12cc74:
    .word 0x8e2200b4
    .word 0xae2200bc
    .word 0x8e2400c4
    beqz a0,L12ccec
    nop
    jal func_0017a1b0
    nop
    b L12ccf0
    .word 0x8e2200cc
L12cc98:
    .word 0x8e22003c
    addiu a1,zero,1
    beq v0,a1,L12ccec
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L12ccec
    nop
    .word 0x8e22000c
    paddub a0,s1,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s1,12
    beqz v0,L12ccec
    nop
    .word 0x8e020000
    addiu a1,zero,1
    paddub a0,s1,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L12ccec:
    .word 0x8e2200cc
L12ccf0:
    beqz v0,L12cd10
    nop
    .word 0x8c420018
    beqz v0,L12cd10
    nop
    addiu a1,zero,2
    jal func_0017a070
    paddub a0,s1,zero
L12cd10:
    .word 0x8e220010
    ori v0,v0,0x4
    b L12cde8
    .word 0xae220010
L12cd20:
    .word 0x8e2400b8
    beqz a0,L12cd54
    .word 0x70001628
    .word 0x3c02002f
    jal func_001be3a0
    addiu a1,v0,-16408
    .word 0x8e2400b8
    .word 0x3c02002f
    .word 0x44806000
    addiu a1,v0,-16408
    addiu a2,zero,1
    jal func_001be240
    .word 0x70003e28
L12cd54:
    beqz v0,L12cd8c
    nop
    .word 0x3c02002f
    addiu a1,v0,-16408
    .word 0x8e230010
    .word 0x3c020013
    addiu a2,v0,-7648
    ori v0,v1,0x800
    .word 0xae220010
    .word 0x8e2400b8
    jal func_001be540
    paddub a3,s1,zero
    b L12cda0
    .word 0x8e220034
L12cd8c:
    .word 0x8e230010
    addiu v0,zero,-2049
    and v0,v1,v0
    .word 0xae220010
    .word 0x8e220034
L12cda0:
    beqz v0,L12cdb8
    addiu a1,zero,3
    addiu a1,zero,2
    jal func_00179d10
    paddub a0,s1,zero
    addiu a1,zero,3
L12cdb8:
    jal func_0017a070
    paddub a0,s1,zero
    .word 0x8e220010
    ori v0,v0,0x4
    .word 0xae220010
    .word 0x8e2200b8
    .word 0xae2200bc
    .word 0x8e2400c8
    beqz a0,L12cde8
    nop
    jal func_0017a1b0
    nop
L12cde8:
    .word 0x7bbf0020
L12cdec:
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,128
}


