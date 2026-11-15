extern void func_001eb220(void);
extern void func_001ea840(void);
extern void func_001f41b0(void);
extern void func_001c86c0(void);
extern void func_001eb5d0(void);
extern void func_001f3d10(void);
extern void func_001eac60(void);
extern void func_001eae20(void);
extern void func_00111a70(void);
extern void func_00111ab8(void);
extern void func_001df850(void);
extern void func_0011eac8(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-224
    .word 0x7fbf00a0
    .word 0x7fbe0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0x8f82877c
    .word 0xafa000d0
    addiu s0,sp,220
    addiu s1,gp,-30776
    addiu t3,sp,196
    addiu s8,sp,200
    addu v0,a0,v0
    .word 0xafa200b0
    addiu v0,sp,212
    .word 0xac400000
    .word 0x8c83000c
    addiu v0,sp,216
    paddub s2,a0,zero
    addiu s3,sp,204
    .word 0xac430000
    .word 0x8c820010
    .word 0xae020000
    .word 0x8e260000
    .word 0x8ca20000
    .word 0x84c3001c
    addu v0,v0,v1
    .word 0xafa200c0
    .word 0x8ca20004
    .word 0x84c3001e
    addiu a1,sp,192
    addu v0,v0,v1
    .word 0xad620000
    .word 0x8c82000c
    .word 0xafc20000
    .word 0x8c820010
    .word 0xae620000
    jal func_001eb220
    addiu a0,sp,208
    bnez v0,L1ec6b0
    addiu v0,zero,1
    b L1ec9b4
    .word 0x7bbf00a0
L1ec6b0:
    .word 0x92440020
    addiu v0,zero,1
    beql a0,v0,L1ec6d0
    .word 0x70001628
    addiu v1,zero,2
    bne a0,v1,L1ec6d8
    nop
    .word 0x70001628
L1ec6d0:
    b L1ec9b0
    nop
L1ec6d8:
    .word 0x8e250000
    .word 0x90a40020
    bne a0,v0,L1ec6f0
    nop
    b L1ec9b0
    .word 0x70001628
L1ec6f0:
    beq a0,v0,L1ec9a4
    .word 0x70001628
    addiu v0,zero,4
    beq a0,v0,L1ec87c
    nop
    beqz a0,L1ec87c
    nop
    beq a0,v1,L1ec71c
    addiu v0,sp,212
    b L1ec9a0
    nop
L1ec71c:
    .word 0x8c510000
    .word 0x8d730000
    .word 0x8e020000
    jal func_001ea840
    addu s7,s1,v0
    addiu s5,gp,-30784
    b L1ec810
    addiu s6,gp,-30792
L1ec73c:
    bnez at,L1ec748
    paddub s4,v1,zero
    addiu s4,zero,64
L1ec748:
    addiu v0,sp,212
    .word 0xac510000
    sltiu at,v1,65
    bnez at,L1ec760
    .word 0xae140000
    addiu s4,s4,-1
L1ec760:
    .word 0x8ec20000
    sll v0,v0,0x2
    addu v0,s5,v0
    jal func_001f41b0
    .word 0x8c440000
    .word 0x8ec20000
    paddub a1,s2,zero
    sll v0,v0,0x2
    addu v0,s5,v0
    .word 0x8c440000
    jal func_001c86c0
    addiu a2,sp,208
    .word 0x8ec20000
    sll v0,v0,0x2
    addu v0,s5,v0
    jal func_001eb5d0
    .word 0x8c440000
    .word 0x8ec20000
    sll v0,v0,0x2
    addu v0,s5,v0
    .word 0x8c440000
    jal func_001f3d10
    .word 0x70002e28
    .word 0x8fa400c0
    addiu t0,zero,8
    addiu v0,sp,216
    addu a3,s3,s4
    paddub a1,s3,zero
    paddub t1,t0,zero
    .word 0xffa00000
    .word 0x8c430000
    .word 0x8fc60000
    .word 0x8e020000
    sll v1,v1,0x4
    addu a2,a0,a2
    addiu t2,v1,-8
    sll v0,v0,0x4
    jal func_001eac60
    addiu t3,v0,-8
    .word 0x8ec20000
    addu s1,s1,s4
    addu s3,s3,s4
    xori v0,v0,0x1
    .word 0xaec20000
L1ec810:
    subu v1,s7,s1
    bnez v1,L1ec73c
    sltiu at,v1,65
    jal func_001eae20
    nop
    jal func_00111a70
    nop
    .word 0x8fa200b0
    .word 0x8c420000
    addiu v1,v0,1
    .word 0x8fa200b0
    jal func_00111ab8
    .word 0xac430000
    .word 0x8fa200b0
    addiu v1,zero,1
    .word 0x8c420004
    addiu a0,v0,1
    .word 0x8fa200b0
    .word 0xac440004
    .word 0x8fa200b0
    .word 0x8c420004
    bne v0,v1,L1ec9b0
    addiu v0,zero,1
    jal func_001df850
    .word 0x8fa400b0
    b L1ec9ac
    nop
L1ec87c:
    .word 0x8ca20004
    beqz v0,L1ec894
    addiu a2,a1,4
    .word 0x8e420004
    bnez v0,L1ec89c
    nop
L1ec894:
    b L1ec9b0
    .word 0x70001628
L1ec89c:
    .word 0x84a9001c
    .word 0x8fa800c0
    .word 0x8e420014
    .word 0x8ca30014
    addiu a3,zero,44
    addiu a0,a1,20
    subu t0,t0,t1
    addiu v0,v0,7
    .word 0xafa800c0
    addiu v1,v1,7
    sra v1,v1,0x3
    sll t0,v1,0x2
    addu t0,t0,v1
    .word 0x84aa001e
    .word 0x8d690000
    sra v0,v0,0x3
    sll t0,t0,0x1
    addu t0,v0,t0
    subu t1,t1,t2
    beq t0,a3,L1ec904
    .word 0xad690000
    addiu a3,zero,22
    beq t0,a3,L1ec904
    nop
    b L1ec998
    .word 0x70001628
L1ec904:
    .word 0x8c8c0000
    .word 0x8caa0018
    .word 0x8d690000
    .word 0x8cc80000
    .word 0x8fa700c0
    addiu a0,sp,212
    .word 0x8c850000
    mult t1,t2,t1
    .word 0x8e460018
    mult1 v1,v1,a3
    addu a3,t0,t1
    addu s0,a3,v1
    addiu a0,t4,7
    sra s4,a0,0x3
    .word 0x8fa300d0
    .word 0x00c52818
    .word 0x8e440004
    .word 0x00431018
    addu a0,a0,a1
    b L1ec980
    addu s5,a0,v0
L1ec958:
    .word 0x8fc20000
    paddub a0,s0,zero
    paddub a1,s5,zero
    jal func_0011eac8
    mult a2,v0,s4
    .word 0x8e220000
    .word 0x8e430018
    .word 0x8c420018
    addu s5,s5,v1
    addu s0,s0,v0
L1ec980:
    .word 0x8e630000
    addiu v0,v1,-1
    bnez v1,L1ec958
    .word 0xae620000
    b L1ec9ac
    nop
L1ec998:
    b L1ec9b0
    nop
L1ec9a0:
    .word 0x70001628
L1ec9a4:
    b L1ec9b0
    nop
L1ec9ac:
    addiu v0,zero,1
L1ec9b0:
    .word 0x7bbf00a0
L1ec9b4:
    .word 0x7bbe0090
    .word 0x7bb70080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    jr ra
    addiu sp,sp,224
}


