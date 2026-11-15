extern void fn_1a90e0(void);
extern void fn_109d20(void);
extern void fn_1214b8(void);
extern void fn_11fe10(void);
extern void fn_11eac8(void);
extern void fn_1aa740(void);
extern void fn_109d00(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-320
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c830010
    addiu v0,zero,1
    beq v1,v0,L1a8eac
    paddub s2,a0,zero
    b L1a90bc
    paddub v0,zero,zero
L1a8eac:
    .word 0x8e430014
    andi v0,v1,0x4
    sltu s0,zero,v0
    andi v0,v1,0x2
    beqz v0,L1a8ed4
    nop
    jal fn_1a90e0
    nop
    b L1a8fc4
    .word 0x8f84806c
L1a8ed4:
    jal fn_109d20
    .word 0x8f84806c
    .word 0x3c010031
    .word 0x8c2976b0
    .word 0x8e43001c
    .word 0x8f82852c
    .word 0x3c010032
    .word 0xac237740
    addiu v1,t1,1
    .word 0x3c010032
    .word 0xac207744
    beqz v0,L1a8f4c
    sll s1,v1,0x3
    .word 0x3c020032
    addiu v0,v0,30528
    .word 0x8c470000
    addiu a0,sp,64
    addiu t3,zero,8
    ori a2,zero,0x800e
    .word 0x3c020032
    addiu v0,v0,30528
    .word 0x8c480004
    paddub t2,s1,zero
    .word 0x3c02002f
    jal fn_1214b8
    addiu a1,v0,176
    .word 0x3c02002f
    addiu a0,v0,272
    jal fn_11fe10
    addiu a1,sp,64
L1a8f4c:
    .word 0x3c010031
    addiu v0,s1,1
    .word 0x8c2476b4
    sll v1,v0,0x2
    .word 0x3c020032
    addiu a1,v0,30528
    sll a3,s1,0x2
    addu v0,a0,a3
    ori t0,zero,0x800e
    .word 0xac480000
    .word 0x3c010031
    .word 0x8c2276b4
    addiu a2,zero,8
    jal fn_11eac8
    addu a0,v0,v1
    .word 0x3c010031
    .word 0x8c2276b0
    addiu v0,v0,1
    .word 0x3c010031
    .word 0xac2276b0
    .word 0x3c010031
    .word 0x8c2276b0
    slti v0,v0,1023
    bnez v0,L1a8fb8
    nop
    jal fn_1aa740
    paddub a0,zero,zero
L1a8fb8:
    jal fn_109d00
    .word 0x8f84806c
    .word 0x8f84806c
L1a8fc4:
    jal fn_109d20
    nop
    .word 0x3c010031
    .word 0x8c2976b0
    .word 0x8e43001c
    .word 0x8f82852c
    .word 0x3c010032
    .word 0xac237740
    .word 0x3c010032
    addiu v1,t1,1
    .word 0xac307744
    beqz v0,L1a903c
    sll s0,v1,0x3
    .word 0x3c020032
    addiu v0,v0,30528
    .word 0x8c470000
    addiu a0,sp,192
    addiu t3,zero,8
    ori a2,zero,0x8005
    .word 0x3c020032
    addiu v0,v0,30528
    .word 0x8c480004
    paddub t2,s0,zero
    .word 0x3c02002f
    jal fn_1214b8
    addiu a1,v0,176
    .word 0x3c02002f
    addiu a0,v0,272
    jal fn_11fe10
    addiu a1,sp,192
L1a903c:
    .word 0x3c010031
    addiu v0,s0,1
    .word 0x8c2476b4
    sll v1,v0,0x2
    .word 0x3c020032
    addiu a1,v0,30528
    sll a3,s0,0x2
    addu v0,a0,a3
    ori t0,zero,0x8005
    .word 0xac480000
    .word 0x3c010031
    .word 0x8c2276b4
    addiu a2,zero,8
    jal fn_11eac8
    addu a0,v0,v1
    .word 0x3c010031
    .word 0x8c2276b0
    addiu v0,v0,1
    .word 0x3c010031
    .word 0xac2276b0
    .word 0x3c010031
    .word 0x8c2276b0
    slti v0,v0,1023
    bnez v0,L1a90ac
    addiu v0,zero,2
    jal fn_1aa740
    paddub a0,zero,zero
    addiu v0,zero,2
L1a90ac:
    .word 0xae420018
    jal fn_109d00
    .word 0x8f84806c
    addiu v0,zero,1
L1a90bc:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,320
}

