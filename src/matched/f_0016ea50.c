extern void func_001b86b0(void);
extern void func_001b6f70(void);
extern void func_001b85a0(void);
extern void func_001b6f50(void);
extern void func_0016eeb0(void);
extern void func_001b8630(void);
extern void func_001b54e0(void);
extern void func_00178b90(void);
extern void func_00131540(void);
extern void func_00178800(void);
extern void func_00170070(void);
extern void func_0025f720(void);
extern void func_0016b090(void);
extern void func_002227b0(void);
extern void func_002492c0(void);
extern void func_0016f380(void);
extern void func_00133120(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c820004
    sltiu at,v0,9
    beqz at,L16edc4
    paddub s0,a0,zero
    .word 0x3c03002f
    addiu v1,v1,-14288
    sll v0,v0,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0x8e020008
    andi v0,v0,0x1
    beqz v0,L16edc4
    nop
    addiu v0,zero,1
    b L16edc4
    .word 0xae020004
    jal func_001b86b0
    .word 0x70002628
    addiu v0,zero,2
    b L16edc4
    .word 0xae020004
    jal func_001b6f70
    nop
    jal func_001b85a0
    .word 0x70002628
    addiu a0,zero,1
    jal func_001b85a0
    paddub s1,v0,zero
    addiu a0,zero,13
    beq s1,a0,L16edc4
    nop
    addiu v1,zero,5
    beq s1,v1,L16edc4
    nop
    beq v0,a0,L16edc4
    nop
    beq v0,v1,L16edc4
    nop
    addiu v1,zero,7
    bne s1,v1,L16eb78
    nop
    bne v0,v1,L16eb4c
    nop
    jal func_001b6f50
    addiu a0,zero,1
    paddub s1,v0,zero
    jal func_001b6f50
    .word 0x70002628
    addiu a0,s1,4
    jal func_0016eeb0
    addiu a1,v0,4
    beqz v0,L16eb4c
    nop
    addiu v0,zero,1
    b L16eb50
    .word 0xae02000c
L16eb4c:
    .word 0xae00000c
L16eb50:
    jal func_001b6f50
    .word 0x8e04000c
    .word 0x8e04000c
    jal func_001b8630
    .word 0x8c45000c
    addiu v0,zero,5
    .word 0xae020004
    addiu v0,zero,53
    b L16edc4
    .word 0xae020010
L16eb78:
    bne v0,v1,L16ebb0
    addiu v0,zero,3
    addiu a0,zero,1
    jal func_001b6f50
    .word 0xae04000c
    .word 0x8c45000c
    jal func_001b8630
    addiu a0,zero,1
    addiu v0,zero,5
    .word 0xae020004
    addiu v0,zero,53
    b L16edc4
    .word 0xae020010
    addiu v0,zero,3
L16ebb0:
    b L16edc4
    .word 0xae020004
    jal func_001b85a0
    .word 0x70002628
    addiu a0,zero,1
    jal func_001b85a0
    paddub s1,v0,zero
    jal func_001b54e0
    paddub s2,v0,zero
    beqz v0,L16ebec
    addiu v0,zero,9
    addiu v0,zero,6
    b L16edc4
    .word 0xae020004
    addiu v0,zero,9
L16ebec:
    beql s1,v0,L16ec00
    addiu v0,zero,9
    bne s2,v0,L16ec30
    addiu v0,zero,8
    addiu v0,zero,9
L16ec00:
    bne s1,v0,L16ec14
    addiu v0,zero,1
    b L16ec14
    .word 0x70001628
    addiu v0,zero,1
L16ec14:
    .word 0xae02000c
    addiu v0,zero,5
    .word 0xae020004
    addiu v0,zero,55
    b L16edc4
    .word 0xae020010
    addiu v0,zero,8
L16ec30:
    beql s1,v0,L16ec58
    addiu v0,zero,6
    beq s2,v0,L16ec54
    nop
    addiu v0,zero,15
    beq s1,v0,L16ec54
    nop
    bne s2,v0,L16ec64
    addiu v0,zero,10
L16ec54:
    addiu v0,zero,6
L16ec58:
    b L16edc4
    .word 0xae020004
    addiu v0,zero,10
L16ec64:
    beql s1,v0,L16ec78
    addiu v0,zero,5
    bne s2,v0,L16ec8c
    addiu v0,zero,6
    addiu v0,zero,5
L16ec78:
    .word 0xae020004
    addiu v0,zero,54
    b L16edc4
    .word 0xae020010
    addiu v0,zero,6
L16ec8c:
    b L16edc4
    .word 0xae020004
    .word 0x8e020008
    andi v0,v0,0x2
    beqz v0,L16edc4
    nop
    .word 0x8e040010
    .word 0x3c020017
    addiu v1,zero,1
    addiu v0,v0,-4576
    .word 0xafa40040
    .word 0xafa00044
    .word 0xafa30048
    .word 0xafa0004c
    .word 0xafa00050
    .word 0xafa00054
    addiu a0,sp,64
    jal func_00178b90
    .word 0xafa20058
    addiu v0,zero,4
    .word 0xae020004
    .word 0x3c020017
    addiu a1,v0,-4608
    jal func_00131540
    .word 0x70002628
    b L16edc8
    .word 0x7bbf0030
    jal func_00178800
    nop
    b L16edc4
    nop
    .word 0x3c02002f
    jal func_00170070
    addiu a0,v0,-14312
    beqz v0,L16edc4
    nop
    paddub a1,v0,zero
    jal func_0025f720
    .word 0x70002628
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c0240c0
    .word 0x44820000
    .word 0x70002628
    .word 0x3c020017
    addiu a1,v0,-4640
    add.s $f0,$f0,$f1
    jal func_00131540
    .word 0xe78083b0
    addiu v0,zero,7
    b L16edc4
    .word 0xae020004
    jal func_0016b090
    nop
    bnez v0,L16edc4
    nop
    jal func_002227b0
    nop
    jal func_002492c0
    nop
    jal func_0016f380
    addiu a0,zero,81
    addiu v0,zero,8
    b L16edc4
    .word 0xae020004
    jal func_0016b090
    nop
    bnez v0,L16edc4
    nop
    .word 0x3c017000
    .word 0xc78183b0
    .word 0xc4203fb0
    c.lt.s $f1,$f0
    nop
    bc1f L16edc4
    nop
    jal func_00133120
    addiu a0,zero,9
L16edc4:
    .word 0x7bbf0030
L16edc8:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,96
}


