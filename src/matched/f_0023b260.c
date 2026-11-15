extern void func_0011ec80(void);
extern void func_0023c570(void);
extern void func_0023c9d0(void);
extern void func_0023ca30(void);
extern void func_0023c910(void);
extern void func_0023c970(void);
extern void func_001cc990(void);
extern void func_0023cc60(void);
extern void func_0023ccc0(void);
extern void func_0023cd80(void);
extern void func_0023cd20(void);
extern void func_0023ca90(void);
extern void func_0023cb40(void);
extern void func_0023cba0(void);
extern void func_0023cc00(void);
extern void func_0023cf50(void);
extern void func_0023cfb0(void);
extern void func_0023cde0(void);
extern void func_0023ceb0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-176
    .word 0x7fbf0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    addiu s2,gp,-30320
    .word 0x8e430000
    paddub s0,a0,zero
    addu v0,a1,v1
    .word 0x8c550000
    bne zero,s5,L23b2b0
    paddub s1,a1,zero
    b L23b4a8
    .word 0x70001628
L23b2b0:
    addu v0,s0,v1
    .word 0x8c560000
    bne zero,s6,L23b300
    .word 0x3c020033
    .word 0x3c01002e
    addiu v0,v0,-23008
    .word 0x8c420140
    jalr ra,v0
    .word 0x8c247b88
    paddub s6,v0,zero
    bne zero,s6,L23b2e8
    paddub a0,s6,zero
    b L23b300
    .word 0x7000b628
L23b2e8:
    .word 0x70002e28
    jal func_0011ec80
    addiu a2,zero,144
    .word 0x8e420000
    addu v0,s0,v0
    .word 0xac560000
L23b300:
    bne zero,s6,L23b310
    .word 0x70001628
    b L23b4ac
    .word 0x7bbf0090
L23b310:
    .word 0x8ea50080
    jal func_0023c570
    paddub a0,s0,zero
    b L23b498
    .word 0x70009628
L23b324:
    .word 0x8ea30030
    addiu v0,zero,4
    beq v1,v0,L23b448
    paddub a0,s1,zero
    addiu v0,zero,2
    beq v1,v0,L23b3d8
    paddub a0,s1,zero
    addiu v0,zero,1
    beq v1,v0,L23b360
    paddub a0,s1,zero
    beqz v1,L23b48c
    addiu v0,s2,1
    b L23b488
    nop
    paddub a0,s1,zero
L23b360:
    jal func_0023c9d0
    nop
    paddub s3,v0,zero
    jal func_0023ca30
    paddub a0,s1,zero
    .word 0x46000506
    paddub a1,s3,zero
    jal func_0023c910
    paddub a0,s0,zero
    .word 0x4600a306
    jal func_0023c970
    paddub a0,s0,zero
    .word 0x8ea20004
    .word 0xaec20004
    .word 0x8ea20008
    .word 0xaec20008
    .word 0x8ec40004
    beq zero,a0,L23b3b8
    nop
    jal func_001cc990
    nop
    nop
L23b3b8:
    .word 0x8ec40008
    beq zero,a0,L23b488
    nop
    jal func_001cc990
    nop
    b L23b488
    nop
    paddub a0,s1,zero
L23b3d8:
    jal func_0023cc60
    nop
    paddub s3,v0,zero
    jal func_0023ccc0
    paddub a0,s1,zero
    paddub s7,v0,zero
    jal func_0023cd80
    paddub a0,s1,zero
    .word 0x46000506
    jal func_0023cd20
    paddub a0,s1,zero
    beq zero,s3,L23b418
    paddub s4,v0,zero
    paddub a1,s3,zero
    jal func_0023ca90
    paddub a0,s0,zero
L23b418:
    paddub a1,s7,zero
    jal func_0023cb40
    paddub a0,s0,zero
    paddub a1,s4,zero
    jal func_0023cba0
    paddub a0,s0,zero
    .word 0x4600a306
    jal func_0023cc00
    paddub a0,s0,zero
    b L23b488
    nop
    paddub a0,s1,zero
L23b448:
    jal func_0023cf50
    nop
    paddub s3,v0,zero
    paddub a0,s1,zero
    addiu a1,sp,168
    jal func_0023cfb0
    addiu a2,sp,172
    beq zero,s3,L23b478
    paddub a1,s3,zero
    jal func_0023cde0
    paddub a0,s0,zero
    nop
L23b478:
    .word 0x8fa500a8
    .word 0x8fa600ac
    jal func_0023ceb0
    paddub a0,s0,zero
L23b488:
    addiu v0,s2,1
L23b48c:
    addiu s5,s5,64
    addiu s6,s6,64
    andi s2,v0,0xff
L23b498:
    andi v0,s2,0xff
    slti v0,v0,2
    bnez v0,L23b324
    paddub v0,s0,zero
L23b4a8:
    .word 0x7bbf0090
L23b4ac:
    .word 0x7bb70080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,176
}


