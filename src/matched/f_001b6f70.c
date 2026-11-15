extern void fn_1b7650(void);
extern void fn_1b8320(void);
extern void fn_1214b8(void);
extern void fn_121b70(void);
extern void fn_1b54e0(void);
extern void fn_1b6120(void);
extern void fn_1b5fb0(void);
extern void fn_1b7750(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c010033
    .word 0x8c22974c
    sltiu at,v0,6
    beqz at,L1b7630
    nop
    .word 0x3c03002f
    addiu v1,v1,624
    sll v0,v0,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0x3c010033
    .word 0x8c239748
    .word 0x3c020033
    addiu v0,v0,-30144
    bne v1,v0,L1b6fdc
    nop
    .word 0x3c020033
    addiu v0,v0,-28476
    .word 0x3c010033
    b L1b6fec
    .word 0xac229748
L1b6fdc:
    .word 0x3c020033
    addiu v0,v0,-30144
    .word 0x3c010033
    .word 0xac229748
L1b6fec:
    addiu v0,zero,1
    .word 0x3c010033
    .word 0xac22974c
    .word 0x3c010033
    .word 0x8c309748
    .word 0x8e040000
    .word 0x8c820080
    jalr ra,v0
    nop
    .word 0xae020004
    .word 0x3c010033
    .word 0x8c249748
    addiu v0,zero,16
    .word 0x8c850004
    beq a1,v0,L1b72e4
    nop
    addiu v1,zero,14
    beq a1,v1,L1b72d4
    nop
    addiu v0,zero,15
    beq a1,v0,L1b72cc
    addiu v0,zero,13
    beqz a1,L1b7060
    nop
    addiu v0,zero,2
    beq a1,v0,L1b7630
    nop
    b L1b7634
    .word 0x7bbf0020
L1b7060:
    .word 0x8c850008
    beq a1,v1,L1b7078
    nop
    addiu v0,zero,13
    bne a1,v0,L1b70b4
    nop
L1b7078:
    jal fn_1b7650
    nop
    beqz v0,L1b70a8
    nop
    addiu v0,zero,2
    .word 0x3c010033
    .word 0xac22974c
    .word 0x3c010033
    .word 0x8c229748
    addiu v1,zero,5
    b L1b7630
    .word 0xac430008
L1b70a8:
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
L1b70b4:
    .word 0x3c010033
    .word 0x8c239758
    addiu v0,zero,2
    beq v1,v0,L1b72bc
    nop
    addiu v0,zero,1
    beq v1,v0,L1b7158
    nop
    beqz v1,L1b70e4
    nop
    b L1b72bc
    nop
L1b70e4:
    .word 0x3c010033
    .word 0x8c25975c
    addiu v1,zero,1668
    .word 0x3c020033
    addiu v0,v0,-30144
    mult v1,a1,v1
    addu v0,v0,v1
    bne a0,v0,L1b714c
    nop
    addiu v0,zero,5
    .word 0x3c010033
    .word 0xac229758
    .word 0x3c010033
    .word 0x8c24975c
    .word 0x3c010033
    jal fn_1b8320
    .word 0x8c259760
    beqz v0,L1b7630
    nop
    .word 0x3c010033
    .word 0x8c229748
    addiu v1,zero,3
    .word 0xac430008
    .word 0x3c010033
    b L1b7630
    .word 0xac23974c
L1b714c:
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
L1b7158:
    .word 0x3c010033
    .word 0x8c23975c
    addiu a1,zero,1668
    .word 0x3c020033
    addiu v0,v0,-30144
    mult v1,v1,a1
    addu v0,v0,v1
    bne a0,v0,L1b72b0
    nop
    .word 0x3c010033
    .word 0x8c228514
    addiu v1,zero,5
    .word 0x3c010033
    .word 0xac239758
    .word 0x3c010033
    .word 0x8c319760
    .word 0x3c010033
    .word 0x8c23975c
    sltiu at,v0,5
    beqzl at,L1b71b8
    mult v1,v1,a1
    b L1b728c
    .word 0x70001e28
    mult v1,v1,a1
L1b71b8:
    .word 0x3c020033
    addiu v0,v0,-30144
    addu s0,v0,v1
    .word 0x8e020004
    beqz v0,L1b71d8
    nop
    b L1b728c
    .word 0x70001e28
L1b71d8:
    .word 0x3c02002f
    addiu a1,v0,560
    .word 0x3c020033
    addiu a0,sp,48
    jal fn_1214b8
    addiu a2,v0,-31160
    jal fn_121b70
    addiu a0,sp,48
    addu v0,v0,sp
    addiu a0,v0,48
    addiu v1,s1,2
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v1,v0,0x3
    .word 0x3c020033
    addiu v0,v0,-31360
    addu a2,v0,v1
    .word 0x3c02002f
    jal fn_1214b8
    addiu a1,v0,560
    .word 0x8e040000
    addiu a1,sp,48
    .word 0x8c820000
    jalr ra,v0
    addiu a2,zero,17
    .word 0x3c010033
    bnez v0,L1b7250
    .word 0xac228528
    b L1b728c
    .word 0x70001e28
L1b7250:
    .word 0x3c010033
    .word 0xac308510
    addiu v1,zero,1
    .word 0x3c010033
    .word 0xac238514
    addiu v0,zero,7
    .word 0x3c010033
    .word 0xac228518
    .word 0x3c010033
    .word 0xac20851c
    .word 0x3c010033
    .word 0xac238520
    .word 0x3c010033
    .word 0xac208524
    .word 0xae110020
L1b728c:
    beqz v1,L1b7630
    nop
    .word 0x3c010033
    .word 0x8c229748
    addiu v1,zero,4
    .word 0xac430008
    .word 0x3c010033
    b L1b7630
    .word 0xac23974c
L1b72b0:
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
L1b72bc:
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
    addiu v0,zero,13
L1b72cc:
    b L1b7630
    .word 0xac820008
L1b72d4:
    .word 0xac830008
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
L1b72e4:
    .word 0x8c830008
    addiu v0,zero,15
    beq v1,v0,L1b736c
    nop
    jal fn_1b54e0
    nop
    beqz v0,L1b733c
    nop
    .word 0x3c010033
    .word 0x8c239748
    addiu a1,zero,206
    addiu a2,v1,20
L1b7314:
    .word 0x8c440000
    .word 0x8c430004
    addiu a1,a1,-1
    .word 0xacc40000
    .word 0xacc30004
    addiu v0,v0,8
    bgtz a1,L1b7314
    addiu a2,a2,8
    b L1b734c
    nop
L1b733c:
    .word 0x3c010033
    .word 0x8c229748
    jal fn_1b6120
    addiu a0,v0,20
L1b734c:
    .word 0x3c010033
    .word 0x8c229748
    jal fn_1b5fb0
    addiu a0,v0,20
    .word 0x3c010033
    .word 0x8c229748
    addiu v1,zero,15
    .word 0xac430008
L1b736c:
    .word 0x3c010033
    .word 0x8c239758
    addiu v0,zero,2
    bne v1,v0,L1b7460
    nop
    .word 0x3c010033
    .word 0x8c249748
    .word 0x3c020033
    addiu a1,zero,1668
    addiu v0,v0,-30144
    .word 0x3c010033
    .word 0x8c23975c
    mult v1,v1,a1
    addu v0,v0,v1
    bne a0,v0,L1b7454
    nop
    addiu v0,zero,5
    .word 0x3c010033
    .word 0xac229758
    .word 0x3c010033
    .word 0x8c24975c
    .word 0x3c020033
    addiu v1,v0,-30144
    addiu v0,zero,16
    mult a0,a0,a1
    addu s0,v1,a0
    .word 0x8e030004
    beq v1,v0,L1b73e8
    nop
    b L1b742c
    .word 0x70001628
L1b73e8:
    .word 0x8e040000
    .word 0x8c82008c
    jalr ra,v0
    .word 0x70002e28
    bnez v0,L1b7408
    nop
    b L1b742c
    .word 0x70001628
L1b7408:
    .word 0x3c010033
    .word 0xac308510
    addiu v0,zero,2
    .word 0x3c010033
    .word 0xac228514
    addiu v0,zero,6
    .word 0x3c010033
    .word 0xac228518
    addiu v0,zero,1
L1b742c:
    beqz v0,L1b7630
    nop
    .word 0x3c010033
    .word 0x8c239748
    addiu a0,zero,12
    addiu v0,zero,5
    .word 0xac640008
    .word 0x3c010033
    b L1b7630
    .word 0xac22974c
L1b7454:
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
L1b7460:
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
    jal fn_1b7750
    nop
    .word 0x3c010033
    .word 0x8c239748
    .word 0xac620008
    .word 0x3c010033
    .word 0x8c229748
    addiu a0,v0,8
    .word 0x8c420008
    sltiu at,v0,12
    beqz at,L1b7630
    nop
    .word 0x3c03002f
    addiu v1,v1,576
    sll v0,v0,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
    addiu v0,zero,14
    .word 0xac820000
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
    jal fn_1b7750
    nop
    .word 0x3c010033
    .word 0x8c249748
    addiu v1,zero,2
    .word 0xac820008
    .word 0x3c010033
    .word 0x8c229748
    .word 0x8c440008
    beq a0,v1,L1b7540
    addiu a1,v0,8
    addiu v0,zero,1
    beq a0,v0,L1b7530
    addiu v0,zero,14
    beqz a0,L1b752c
    nop
    addiu v0,zero,3
    beq a0,v0,L1b7630
    nop
    b L1b7630
    nop
L1b752c:
    addiu v0,zero,14
L1b7530:
    .word 0xaca20000
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
L1b7540:
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
    jal fn_1b7750
    nop
    .word 0x3c010033
    .word 0x8c249748
    addiu v1,zero,2
    .word 0xac820008
    .word 0x3c010033
    .word 0x8c229748
    .word 0x8c440008
    beq a0,v1,L1b75b4
    addiu a1,v0,8
    addiu v0,zero,1
    beq a0,v0,L1b75a4
    addiu v0,zero,14
    beqz a0,L1b75a0
    nop
    addiu v0,zero,4
    beq a0,v0,L1b7630
    nop
    b L1b7630
    nop
L1b75a0:
    addiu v0,zero,14
L1b75a4:
    .word 0xaca20000
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
L1b75b4:
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
    jal fn_1b7750
    nop
    .word 0x3c010033
    .word 0x8c249748
    addiu v1,zero,8
    .word 0xac820008
    .word 0x3c010033
    .word 0x8c229748
    .word 0x8c440008
    beq a0,v1,L1b7628
    addiu a1,v0,8
    addiu v0,zero,1
    beq a0,v0,L1b7618
    addiu v0,zero,14
    beqz a0,L1b7614
    nop
    addiu v0,zero,12
    beq a0,v0,L1b7630
    nop
    b L1b7630
    nop
L1b7614:
    addiu v0,zero,14
L1b7618:
    .word 0xaca20000
    .word 0x3c010033
    b L1b7630
    .word 0xac20974c
L1b7628:
    .word 0x3c010033
    .word 0xac20974c
L1b7630:
    .word 0x7bbf0020
L1b7634:
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,112
}


