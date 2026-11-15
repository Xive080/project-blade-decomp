extern void func_001eb380(void);
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
asm void func(void) {
    .set noreorder
    addiu sp,sp,-256
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
    .word 0xafa000f0
    addiu t3,gp,-30776
    addiu t6,sp,228
    addiu s8,sp,232
    paddub s1,a0,zero
    addu v0,a0,v0
    .word 0xafa200b0
    addiu v0,sp,244
    .word 0xac400000
    .word 0x8c83000c
    addiu v0,sp,248
    addiu t4,sp,236
    .word 0xac430000
    .word 0x8c830010
    addiu v0,sp,252
    .word 0xac430000
    .word 0x8d660000
    .word 0x8ca20000
    addiu a0,sp,240
    .word 0x84c3001c
    addu v0,v0,v1
    .word 0xafa200e0
    .word 0x84c3001e
    .word 0x8ca20004
    addu v0,v0,v1
    .word 0xadc20000
    .word 0x8ca20008
    .word 0xafc20000
    .word 0x8ca2000c
    .word 0xad820000
    jal func_001eb380
    addiu a1,sp,224
    bnez v0,L1ec060
    addiu v0,zero,1
    b L1ec5c4
    .word 0x7bbf00a0
L1ec060:
    .word 0x92240020
    addiu v0,zero,1
    beql a0,v0,L1ec080
    .word 0x70001628
    addiu v1,zero,2
    bne a0,v1,L1ec088
    nop
    .word 0x70001628
L1ec080:
    b L1ec5c0
    nop
L1ec088:
    .word 0x8d650000
    .word 0x90a40020
    beq a0,v0,L1ec5b4
    .word 0x70001628
    addiu v0,zero,4
    beq a0,v0,L1ec268
    nop
    beqz a0,L1ec268
    nop
    beq a0,v1,L1ec0bc
    nop
    b L1ec5b0
    nop
L1ec0bc:
    .word 0x8dc30000
    .word 0x8d820000
    sll s2,v1,0x10
    .word 0xafa200d0
    addiu v0,sp,244
    .word 0x8c500000
    addiu v0,sp,252
    .word 0x8c570000
    addu v0,s0,s7
    jal func_001ea840
    .word 0xafa200c0
    addiu s5,gp,-30784
    b L1ec1f8
    addiu s6,gp,-30792
L1ec0f4:
    bnez at,L1ec100
    paddub s4,v1,zero
    addiu s4,zero,64
L1ec100:
    addiu v0,sp,244
    .word 0xac500000
    addiu v0,sp,252
    sltiu at,v1,65
    bnez at,L1ec120
    .word 0xac540000
    addiu s4,s4,-1
    nop
L1ec120:
    .word 0x8fa200d0
    sll v1,s4,0x10
    .word 0x621018
    bnez s7,L1ec138
    .word 0x57001b
    .word 0x1cd
L1ec138:
    .word 0x8ec20000
    mflo s3
    sll v0,v0,0x2
    addu v0,s5,v0
    jal func_001f41b0
    .word 0x8c440000
    .word 0x8ec20000
    paddub a1,s1,zero
    sll v0,v0,0x2
    addu v0,s5,v0
    .word 0x8c440000
    jal func_001c86c0
    addiu a2,sp,240
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
    .word 0x8fa400e0
    addu v0,s2,s3
    addiu v1,zero,1
    srl a3,v0,0x10
    addiu t0,zero,8
    addiu v0,sp,248
    .word 0xffa30000
    .word 0x8c430000
    .word 0x8fc60000
    srl a1,s2,0x10
    paddub t1,t0,zero
    addiu v0,sp,252
    .word 0x8c420000
    .word 0x00031900
    addu a2,a0,a2
    addiu t2,v1,-8
    sll v0,v0,0x4
    jal func_001eac60
    addiu t3,v0,-8
    .word 0x8ec20000
    addu s0,s0,s4
    addu s2,s2,s3
    xori v0,v0,0x1
    .word 0xaec20000
L1ec1f8:
    .word 0x8fa200c0
    subu v1,v0,s0
    bnez v1,L1ec0f4
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
    bne v0,v1,L1ec5c0
    addiu v0,zero,1
    jal func_001df850
    .word 0x8fa400b0
    b L1ec5bc
    nop
L1ec268:
    .word 0x8ca20004
    beqz v0,L1ec280
    addiu a0,a1,4
    .word 0x8e220004
    bnez v0,L1ec288
    nop
L1ec280:
    b L1ec5c0
    .word 0x70001628
L1ec288:
    .word 0x84a6001c
    .word 0x8fa300e0
    .word 0x8e220014
    .word 0x8ca80014
    addiu a3,zero,22
    subu v1,v1,a2
    addiu v0,v0,7
    .word 0xafa300e0
    addiu t0,t0,7
    sra v1,t0,0x3
    sll a2,v1,0x2
    addu a2,a2,v1
    .word 0x84a9001e
    .word 0x8dc80000
    sra v0,v0,0x3
    sll a2,a2,0x1
    addu t2,v0,a2
    subu a2,t0,t1
    .word 0xadc60000
    .word 0x8cb00018
    .word 0x8c920000
    addiu a2,sp,252
    .word 0x8cc80000
    .word 0x8faf00e0
    .word 0x8fc90000
    .word 0x8dc50000
    addiu a0,sp,244
    addiu a2,sp,248
    .word 0x8ccd0000
    .word 0x706f1818
    .word 0x2059818
    .word 0x8c8e0000
    addu s2,s2,s3
    .word 0x8e300018
    addu t7,s2,v1
    .word 0x8fa400f0
    .word 0x8e250004
    .word 0x8d860000
    .word 0x20e1818
    .word 0x441018
    addu v1,a1,v1
    beq t2,a3,L1ec4d0
    addu t6,v1,v0
    addiu v0,zero,44
    beq t2,v0,L1ec348
    negu a3,a2
    b L1ec5a8
    .word 0x70001628
L1ec348:
    b L1ec4b8
    negu s5,t1
L1ec350:
    .word 0x8fc50000
    paddub s0,t7,zero
    paddub s2,t6,zero
    paddub t2,s5,zero
    paddub v0,a1,zero
    beqz v0,L1ec478
    addiu a1,a1,-1
    nop
L1ec370:
    .word 0x8e430000
    .word 0x3c02ff00
    .word 0x3c017f00
    ori at,at,0x1
    and v0,v1,v0
    sltu at,v0,at
    bnez at,L1ec39c
    srl s6,v0,0x18
    b L1ec438
    .word 0xae030000
    srl s6,v0,0x18
L1ec39c:
    addiu v0,zero,128
    subu s4,v0,s6
    .word 0x3c1700ff
    .word 0x8e130000
    and v0,v1,s7
    srl v0,v0,0x10
    .word 0x562018
    andi t8,s3,0xff00
    and v0,s3,s7
    srl v0,v0,0x10
    .word 0x70541018
    addu v0,a0,v0
    andi v0,v0,0x7f80
    sll a0,v0,0x9
    .word 0x3c02ff00
    and v0,s3,v0
    srl v0,v0,0x18
    mult v0,s4
    andi s7,v1,0xff
    srl t8,t8,0x8
    andi s3,s3,0xff
    andi v0,v1,0xff00
    maddu v1,s6,s6
    srl v0,v0,0x8
    mult v0,s6
    andi v0,v1,0x7f80
    sll v0,v0,0x11
    addu v1,v0,a0
    maddu v0,t8,s4
    andi v0,v0,0x7f80
    sll v0,v0,0x1
    mult s7,s6
    addu v1,v0,v1
    nop
    maddu v0,s3,s4
    andi v0,v0,0x7f80
    srl v0,v0,0x7
    addu v0,v0,v1
    .word 0xae020000
L1ec438:
    addu t2,t2,t5
    blez t2,L1ec468
    addiu s0,s0,4
    nop
L1ec448:
    subu t2,t2,t1
    addiu s2,s2,4
    nop
    nop
    nop
    bgtz t2,L1ec448
    nop
    nop
L1ec468:
    paddub v0,a1,zero
    bnez v0,L1ec370
    addiu a1,a1,-1
    nop
L1ec478:
    .word 0x8d620000
    addu a3,a3,t0
    .word 0x8c420018
    blez a3,L1ec4b8
    addu t7,t7,v0
    nop
    .word 0x8e220018
    nop
L1ec498:
    subu a3,a3,a2
    addu t6,t6,v0
    nop
    nop
    nop
    bgtz a3,L1ec498
    nop
    nop
L1ec4b8:
    .word 0x8d830000
    addiu v0,v1,-1
    bnez v1,L1ec350
    .word 0xad820000
    b L1ec5bc
    nop
L1ec4d0:
    negu t2,a2
    b L1ec590
    negu a3,t1
L1ec4dc:
    .word 0x8fd00000
    paddub a0,t7,zero
    paddub a1,t6,zero
    paddub s2,a3,zero
    paddub v0,s0,zero
    beqz v0,L1ec550
    addiu s0,s0,-1
L1ec4f8:
    .word 0x94a30000
    andi v0,v1,0x8000
    beqzl v0,L1ec514
    addu s2,s2,t5
    .word 0xa4830000
    nop
    addu s2,s2,t5
L1ec514:
    blez s2,L1ec540
    addiu a0,a0,2
    nop
L1ec520:
    subu s2,s2,t1
    addiu a1,a1,2
    nop
    nop
    nop
    bgtz s2,L1ec520
    nop
    nop
L1ec540:
    paddub v0,s0,zero
    bnez v0,L1ec4f8
    addiu s0,s0,-1
    nop
L1ec550:
    .word 0x8d620000
    addu t2,t2,t0
    .word 0x8c420018
    blez t2,L1ec590
    addu t7,t7,v0
    nop
    .word 0x8e220018
    nop
L1ec570:
    subu t2,t2,a2
    addu t6,t6,v0
    nop
    nop
    nop
    bgtz t2,L1ec570
    nop
    nop
L1ec590:
    .word 0x8d830000
    addiu v0,v1,-1
    bnez v1,L1ec4dc
    .word 0xad820000
    b L1ec5bc
    nop
L1ec5a8:
    b L1ec5c0
    nop
L1ec5b0:
    .word 0x70001628
L1ec5b4:
    b L1ec5c0
    nop
L1ec5bc:
    addiu v0,zero,1
L1ec5c0:
    .word 0x7bbf00a0
L1ec5c4:
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
    addiu sp,sp,256
}


