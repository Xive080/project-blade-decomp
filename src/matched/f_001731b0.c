extern void func_00132a70(void);
extern void func_001a9a40(void);
extern void func_00131540(void);
extern void func_0025f720(void);
extern void func_0025cac0(void);
extern void func_00131be0(void);
extern void func_00170ce0(void);
extern void func_001c3b70(void);
extern void func_00170a90(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,1
    paddub s0,a0,zero
    .word 0xaf828428
    jal func_00132a70
    .word 0x70002628
    addiu a0,zero,-1
    jal func_001a9a40
    addiu a1,zero,1
    .word 0x3c020017
    addiu a1,v0,14032
    jal func_00131540
    .word 0x70002628
    addiu a0,zero,1
    jal func_0025f720
    .word 0x70002e28
    addiu v0,zero,7
    .word 0x3c010030
    .word 0xac22a364
    .word 0x3c010030
    .word 0x8c26a364
    .word 0x3c020017
    addiu a0,v0,13536
    .word 0xaf80842c
    .word 0x3c03bf80
    ori v0,a2,0x10
    .word 0x3c010030
    .word 0xac22a364
    .word 0xae000018
    .word 0x70002e28
    jal func_0025cac0
    .word 0xae03001c
    jal func_00131be0
    nop
    .word 0x3c010031
    .word 0xac208200
    .word 0x3c010031
    .word 0xac208204
    .word 0x3c010031
    .word 0xac208208
    .word 0x3c010031
    .word 0xac20820c
    .word 0x3c010031
    .word 0xac208210
    .word 0x3c02002e
    .word 0x3c010031
    .word 0xac208214
    addiu v0,v0,-7744
    .word 0xaf808430
    .word 0x78430000
    .word 0x3c01002e
    addiu a0,zero,28
    .word 0x3c020031
    addiu a1,v0,-32304
    .word 0x7ca30000
    .word 0xc422e1b0
    .word 0x3c023f80
    .word 0x3c01002e
    .word 0xc421e1b4
    .word 0x3c01002e
    .word 0xc420e1b8
    .word 0x3c010031
    .word 0xe42281e0
    .word 0x3c010031
    .word 0xe42181e4
    .word 0x3c010031
    .word 0xe42081e8
    .word 0x3c010031
    .word 0xac2081ec
    .word 0x3c010031
    .word 0xac2081f0
    .word 0x3c010031
    .word 0xac2081f4
    .word 0x3c010031
    jal func_00170ce0
    .word 0xac2281f8
    .word 0x70008628
    b L173448
    .word 0x70008e28
    addu a2,v1,s1
L173300:
    .word 0x8cc40614
    addiu v0,zero,-1
    bne a0,v0,L173318
    nop
    b L173370
    .word 0x70002628
L173318:
    .word 0x3c020030
    addiu a1,v0,24688
    .word 0x70001e28
    nop
L173328:
    .word 0x8ca20514
    beqzl v0,L17336c
    .word 0x70002628
    .word 0x8c420008
    bnel v0,a0,L17335c
    addiu v1,v1,1
    .word 0x3c020030
    addiu v0,v0,24688
    sll v1,v1,0x2
    addu v0,v0,v1
    b L173370
    .word 0x8c440514
    addiu v1,v1,1
L17335c:
    slti v0,v1,256
    bnez v0,L173328
    addiu a1,a1,4
    .word 0x70002628
L17336c:
    nop
L173370:
    .word 0x8cc50618
    addiu v0,zero,-1
    bne a1,v0,L173388
    nop
    b L1733e0
    .word 0x70009628
L173388:
    .word 0x3c020030
    addiu a2,v0,24688
    .word 0x70001e28
    nop
L173398:
    .word 0x8cc20514
    beqz v0,L1733dc
    .word 0x70009628
    .word 0x8c420008
    bnel v0,a1,L1733cc
    addiu v1,v1,1
    .word 0x3c020030
    addiu v0,v0,24688
    sll v1,v1,0x2
    addu v0,v0,v1
    b L1733e0
    .word 0x8c520514
    addiu v1,v1,1
L1733cc:
    slti v0,v1,256
    bnez v0,L173398
    addiu a2,a2,4
    .word 0x70009628
L1733dc:
    nop
L1733e0:
    beqzl a0,L173444
    addiu s1,s1,64
    beqz s2,L173440
    nop
    .word 0x8c820030
    jal func_001c3b70
    .word 0x8c440004
    .word 0x8e430030
    .word 0x8c640004
    jal func_001c3b70
    paddub s2,v0,zero
    beqz s2,L173440
    nop
    beqz v0,L173440
    nop
    .word 0x3c017000
    .word 0x8c233fdc
    addu v1,v1,s1
    .word 0xac72061c
    .word 0x3c017000
    .word 0x8c233fdc
    addu v1,v1,s1
    .word 0xac620620
    nop
L173440:
    addiu s1,s1,64
L173444:
    addiu s0,s0,1
L173448:
    .word 0x3c027000
    ori v0,v0,0x3fdc
    .word 0x8c430000
    .word 0x8c620610
    slt v0,s0,v0
    bnez v0,L173300
    addu a2,v1,s1
    .word 0x3c017000
    .word 0x8c303fe0
    addiu a1,zero,1
    .word 0x8e02003c
    beq v0,a1,L1734bc
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L1734bc
    nop
    .word 0x8e02000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s0,zero
    beqz v0,L1734bc
    nop
    .word 0x8e02000c
    addiu a1,zero,1
    paddub a0,s0,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1734bc:
    jal func_00170a90
    .word 0xaf808424
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,64
}


