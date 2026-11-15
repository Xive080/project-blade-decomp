extern void fn_1b9690(void);
extern void fn_1b4a70(void);
extern void fn_234ff0(void);
extern void fn_142a90(void);
extern void fn_1c3b70(void);
extern void fn_1a8600(void);
extern void fn_1a8e80(void);
extern void fn_1b4fe0(void);
extern void fn_243290(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-176
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    paddub s6,a0,zero
    .word 0x7fb50050
    .word 0x3c020033
    paddub s5,a1,zero
    addiu a0,v0,-26768
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x3c020025
    .word 0x7fb20020
    .word 0x7fb10010
    addiu a1,s5,664
    addiu t0,v0,-26208
    paddub s7,a2,zero
    paddub s8,a3,zero
    paddub t1,s5,zero
    jal fn_1b9690
    .word 0x7fb00000
    .word 0xafa200ac
    andi v0,v0,0x8
    beqz v0,L249950
    paddub a0,s6,zero
    .word 0x3c010033
    .word 0xac203194
    .word 0x3c010033
    .word 0x9025a578
    .word 0x3c020033
    addiu s1,v0,-26768
    .word 0x3c020030
    addiu v0,v0,29208
    .word 0x3c010033
    .word 0x9024a579
    .word 0x70009e28
    .word 0x70008628
    .word 0x3c010033
    .word 0x9023a57a
    addu a0,a1,a0
    addu a0,v1,a0
    sll v1,a0,0x1
    addu v1,v1,a0
    sll v1,v1,0x3
    addu v0,v0,v1
    addiu s2,v0,4
    .word 0x3c020033
    b L249850
    addiu s4,v0,12608
L2497f8:
    .word 0x8e420000
    andi v0,v0,0x2
    beqzl v0,L249844
    addiu s2,s2,24
    .word 0x3c010030
    .word 0x9024a61f
    jal fn_1b4a70
    paddub a1,s0,zero
    .word 0x3c010033
    .word 0x8c223194
    addiu v0,v0,1
    .word 0x3c010033
    .word 0xac223194
    .word 0x8e820000
    bnez v0,L249840
    nop
    addiu s3,zero,1
    .word 0xae930000
L249840:
    addiu s2,s2,24
L249844:
    addiu s4,s4,4
    addiu s0,s0,1
    nop
L249850:
    .word 0x92220e0b
    slt v0,s0,v0
    bnez v0,L2497f8
    nop
    beqz s3,L2498bc
    nop
    jal fn_234ff0
    nop
    addiu a0,zero,5
    .word 0x8ea30008
    .word 0x0044001a
    nop
    nop
    mfhi a0
    .word 0x3c02002f
    addiu v0,v0,-30768
    sll a0,a0,0x2
    addu v0,v0,a0
    .word 0x8c440000
    sll v0,a0,0x3
    subu v0,v0,a0
    sll v0,v0,0x2
    addu v0,v0,a0
    sll v0,v0,0x2
    addu v0,v1,v0
    b L2498f4
    addiu s0,v0,5844
L2498bc:
    jal fn_234ff0
    nop
    addiu a0,zero,14
    andi a1,v0,0x1
    addiu v1,zero,15
    .word 0x8ea20008
    movz a0,v1,a1
    sll v1,a0,0x3
    subu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v0,v0,v1
    addiu s0,v0,5844
L2498f4:
    beqz s0,L249928
    nop
    .word 0x8ea20008
    jal fn_142a90
    .word 0x8c440404
    jal fn_1c3b70
    paddub a0,v0,zero
    addiu a1,v0,48
    paddub a0,s0,zero
    jal fn_1a8600
    .word 0x70003628
    jal fn_1a8e80
    paddub a0,s0,zero
L249928:
    .word 0x3c010033
    .word 0x8c233194
    .word 0x3c010033
    .word 0x8c223190
    bne v1,v0,L24994c
    nop
    .word 0x3c010030
    jal fn_1b4fe0
    .word 0x9024a61f
L24994c:
    paddub a0,s6,zero
L249950:
    paddub a1,s5,zero
    paddub a2,s7,zero
    jal fn_243290
    paddub a3,s8,zero
    .word 0x8fa200ac
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,176
}


