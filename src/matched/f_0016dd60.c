extern void func_001214b8(void);
extern void func_0012ba30(void);
extern void func_00130eb0(void);
extern void func_0016e320(void);
extern void func_0016f240(void);
extern void func_0016ff20(void);
extern void func_001c21d0(void);
extern void func_001c2220(void);
extern void func_001fefa0(void);
extern void func_00222f80(void);
extern void func_0025cad0(void);
extern void func_0025cd40(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-256
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c027000
    paddub s0,a0,zero
    ori v0,v0,0x3fe0
    .word 0x8c440000
    .word 0x8c830064
    addiu v0,zero,-1
    beq v1,v0,L16de08
    .word 0x3c017000
    sll v0,v1,0x3
    addu v0,v0,v1
    .word 0xc48c0078
    sll v0,v0,0x1
    addu v0,v0,v1
    sll v1,v0,0x2
    .word 0x3c020030
    addiu v0,v0,-23692
    addu v0,v0,v1
    .word 0x8c510000
    .word 0x3c023faa
    ori v0,v0,0xaaab
    mtc1 v0,$f13
    jal func_00130eb0
    paddub a0,s1,zero
    .word 0x3c023f40
    mtc1 v0,$f12
    jal func_001c21d0
    paddub a0,s1,zero
    .word 0x3c017000
    .word 0x8c223fd8
    .word 0xc44c00a4
    jal func_001c2220
    paddub a0,s1,zero
    .word 0x3c017000
L16de08:
    .word 0x8c223fc0
    andi v0,v0,0x2
    beqz v0,L16de94
    paddub s1,zero,zero
    .word 0x3c017000
    .word 0x8c243fe0
    addiu v0,zero,-1
    .word 0x8c830224
    beq v1,v0,L16de90
    nop
    sll v0,v1,0x3
    addu v0,v0,v1
    .word 0xc48c0238
    sll v0,v0,0x1
    addu v0,v0,v1
    sll v1,v0,0x2
    .word 0x3c020030
    addiu v0,v0,-23692
    addu v0,v0,v1
    .word 0x8c510000
    .word 0x3c023faa
    ori v0,v0,0xaaab
    mtc1 v0,$f13
    jal func_00130eb0
    paddub a0,s1,zero
    .word 0x3c023f40
    mtc1 v0,$f12
    jal func_001c21d0
    paddub a0,s1,zero
    .word 0x3c017000
    .word 0x8c223fd8
    .word 0xc44c00a4
    jal func_001c2220
    paddub a0,s1,zero
L16de90:
    paddub s1,zero,zero
L16de94:
    b L16deb0
    paddub s2,zero,zero
L16de9c:
    jal func_0016e320
    .word 0x8ca40000
    addiu s2,s2,16
    addiu s1,s1,1
    nop
L16deb0:
    .word 0x8e02034c
    slt at,s1,v0
    beqz at,L16dee0
    nop
    .word 0x8e020348
    mtc1 zero,$f0
    addu a1,v0,s2
    .word 0xc4a1000c
    c.eq.s $f0,$f1
    nop
    bc1t L16de9c
    nop
L16dee0:
    .word 0xae110350
    .word 0x8e040000
    beqz a0,L16df04
    nop
    jal func_0025cad0
    nop
    mtc1 zero,$f12
    jal func_0025cd40
    .word 0x8e040000
L16df04:
    .word 0x8e02033c
    bnez v0,L16df1c
    paddub s4,zero,zero
    b L16e2ec
    paddub v0,zero,zero
    paddub s4,zero,zero
L16df1c:
    paddub s2,zero,zero
    b L16e0b0
    paddub s3,zero,zero
L16df28:
    .word 0x8c630030
    addiu v0,zero,19
    addu v1,v1,s2
    .word 0x8c630000
    sra a1,v1,0x10
    bne a1,v0,L16dfbc
    andi a0,v1,0xffff
    .word 0x3c020030
    addiu a1,v0,24688
    paddub v1,zero,zero
L16df50:
    .word 0x8cb10514
    beqzl s1,L16e0a4
    addiu s2,s2,16
    .word 0x8e220008
    bnel v0,a0,L16dfa8
    addiu v1,v1,1
    .word 0x8e22000c
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s1,zero
    beqz v0,L16e0a0
    nop
    .word 0x8e03033c
    .word 0x8c630000
    .word 0x8c630030
    addu v1,v1,s2
    .word 0xac62000c
    .word 0x8e020340
    addu v0,v0,s3
    b L16e0a0
    .word 0xac510000
    addiu v1,v1,1
L16dfa8:
    slti v0,v1,256
    bnez v0,L16df50
    addiu a1,a1,4
    b L16e0a0
    nop
L16dfbc:
    addiu v0,zero,20
    bnel a1,v0,L16e048
    addiu a0,zero,17
    .word 0x3c020030
    addiu v1,v0,24688
    paddub a1,zero,zero
    nop
L16dfd8:
    .word 0x8c710914
    beqz s1,L16e0a0
    nop
    .word 0x8e220008
    bnel v0,a0,L16e030
    addiu a1,a1,1
    .word 0x8e22000c
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s1,zero
    beqz v0,L16e0a0
    nop
    .word 0x8e03033c
    .word 0x8c630000
    .word 0x8c630030
    addu v1,v1,s2
    .word 0xac62000c
    .word 0x8e020340
    addu v0,v0,s3
    b L16e0a0
    .word 0xac510000
    addiu a1,a1,1
L16e030:
    slti v0,a1,16
    bnez v0,L16dfd8
    addiu v1,v1,4
    b L16e0a0
    nop
    addiu a0,zero,17
L16e048:
    bne a1,a0,L16e0a0
    nop
    addiu a1,zero,-1
    jal func_0016f240
    addiu a2,zero,101
    paddub s1,v0,zero
    beqz s1,L16e0a0
    nop
    .word 0x8e22000c
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s1,zero
    beqz v0,L16e0a0
    nop
    .word 0x8e03033c
    .word 0x8c630000
    .word 0x8c630030
    addu v1,v1,s2
    .word 0xac62000c
    .word 0x8e020340
    addu v0,v0,s3
    .word 0xac510000
L16e0a0:
    addiu s2,s2,16
L16e0a4:
    addiu s3,s3,4
    addiu s4,s4,1
    nop
L16e0b0:
    .word 0x8e02033c
    .word 0x8c430000
    .word 0x8c620004
    slt v0,s4,v0
    bnez v0,L16df28
    nop
    .word 0x8e020344
    beqz v0,L16e238
    nop
    .word 0x3c02002f
    jal func_0016ff20
    addiu a0,v0,-14464
    paddub s1,v0,zero
    .word 0x3c02002f
    jal func_0016ff20
    addiu a0,v0,-14456
    paddub s2,v0,zero
    .word 0x3c02002f
    jal func_0016ff20
    addiu a0,v0,-14448
    beqz s1,L16e12c
    paddub s3,v0,zero
    .word 0xc620000c
    .word 0x8e02033c
    .word 0xe4400010
    .word 0x8e02033c
    .word 0x8c440000
    jal func_001fefa0
    paddub a1,s1,zero
    b L16e17c
    nop
L16e12c:
    beqz s2,L16e17c
    nop
    beqz s3,L16e17c
    nop
    .word 0xc640000c
    .word 0x8e02033c
    .word 0xe4400010
    .word 0x8e02033c
    .word 0x8c440004
    jal func_001fefa0
    paddub a1,s2,zero
    .word 0x8e02033c
    .word 0x8c440008
    jal func_001fefa0
    paddub a1,s3,zero
    .word 0x8e02033c
    .word 0x8c450004
    .word 0x8c460008
    jal func_00222f80
    .word 0x8c440000
L16e17c:
    .word 0x3c020030
    addiu s3,v0,24688
    paddub s4,zero,zero
L16e188:
    .word 0x8e710514
    beqzl s1,L16e224
    addiu s4,s4,1
    .word 0x8e260008
    .word 0x3c030013
    .word 0x3c02002f
    addiu a0,sp,128
    addiu a1,v0,-14440
    or s2,a2,v1
    jal func_001214b8
    paddub a2,s2,zero
    jal func_0016ff20
    addiu a0,sp,128
    paddub s5,v0,zero
    .word 0x3c02002f
    addiu a0,sp,128
    addiu a1,v0,-14432
    jal func_001214b8
    paddub a2,s2,zero
    jal func_0016ff20
    addiu a0,sp,128
    paddub s6,v0,zero
    .word 0x3c02002f
    addiu a0,sp,128
    addiu a1,v0,-14416
    jal func_001214b8
    paddub a2,s2,zero
    jal func_0016ff20
    addiu a0,sp,128
    jal func_0012ba30
    paddub s2,v0,zero
    .word 0x8c420028
    paddub a0,s1,zero
    paddub a1,s5,zero
    paddub a2,s6,zero
    jalr ra,v0
    paddub a3,s2,zero
    nop
    addiu s4,s4,1
L16e224:
    slti v0,s4,256
    bnez v0,L16e188
    addiu s3,s3,4
    b L16e2e4
    .word 0x8e03033c
L16e238:
    .word 0x3c02002f
    jal func_0016ff20
    addiu a0,v0,-14400
    paddub s1,v0,zero
    .word 0x3c02002f
    jal func_0016ff20
    addiu a0,v0,-14392
    paddub s2,v0,zero
    .word 0x3c02002f
    jal func_0016ff20
    addiu a0,v0,-14384
    beqz s1,L16e290
    paddub s3,v0,zero
    .word 0xc620000c
    .word 0x8e02033c
    .word 0xe4400010
    .word 0x8e02033c
    .word 0x8c440000
    jal func_001fefa0
    paddub a1,s1,zero
    b L16e2e0
    nop
L16e290:
    beqz s2,L16e2e0
    nop
    beqz s3,L16e2e0
    nop
    .word 0xc640000c
    .word 0x8e02033c
    .word 0xe4400010
    .word 0x8e02033c
    .word 0x8c440004
    jal func_001fefa0
    paddub a1,s2,zero
    .word 0x8e02033c
    .word 0x8c440008
    jal func_001fefa0
    paddub a1,s3,zero
    .word 0x8e02033c
    .word 0x8c450004
    .word 0x8c460008
    jal func_00222f80
    .word 0x8c440000
L16e2e0:
    .word 0x8e03033c
L16e2e4:
    addiu v0,zero,1
    .word 0xac600014
L16e2ec:
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,256
}
