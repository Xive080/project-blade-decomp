extern void func_0021de20(void);
extern void func_001dd1d0(void);
extern void func_0021cf90(void);
extern void func_0021d0f0(void);
extern void func_00111a70(void);
extern void func_00111ab8(void);
extern void func_001df850(void);
asm void func(void) {
    .set noreorder
    j func_0021de20
    nop
    nop
    nop
    .word 0x27bdffd0
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu s1,zero,10
    .word 0x70808628
    .word 0x3c028800
    negu a1,s1
    jal func_001dd1d0
    .word 0x34440501
    dsll32 v1,s1,0x0
    dsrl32 v1,v1,0x0
    .word 0x3c021000
    or v1,v1,v0
    .word 0x70001628
    pcpyld v1,v0,v1
    .word 0x8f828690
    .word 0x3c046c01
    .word 0x348403fa
    dsll a0,a0,0x10
    .word 0x34840100
    dsll a0,a0,0x10
    .word 0x7c430000
    .word 0x8f828690
    .word 0x34840404
    .word 0x70001e28
    .word 0x24420010
    .word 0xaf828690
    pcpyld a2,a0,v1
    .word 0x8f838690
    .word 0x3c020033
    .word 0x2445f5c0
    .word 0x3c02fc03
    .word 0x3444ffff
    .word 0x3c020033
    .word 0x7c660000
    .word 0x2443f5c0
    .word 0x8f828690
    .word 0x3c066c01
    .word 0x34c603fb
    dsll a2,a2,0x10
    .word 0x34c60100
    dsll a2,a2,0x10
    .word 0x24420010
    .word 0xaf828690
    .word 0x8ca20004
    .word 0x3c010033
    .word 0x34c60404
    .word 0x70003e28
    and v0,v0,a0
    .word 0xaca20004
    .word 0x8f848138
    .word 0x8c620004
    andi a0,a0,0x7ff
    sll a0,a0,0xf
    or v0,v0,a0
    .word 0xac620004
    .word 0x7823f5c0
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0x92020047
    xori v0,v0,0xff
    sltu v0,zero,v0
    .word 0xaf828788
    pcpyld v1,a2,a3
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f838690
    .word 0xdf828138
    .word 0x24630010
    andi v0,v0,0x10
    beqz v0,L21d624
    .word 0xaf838690
    .word 0x3c023b01
    .word 0x34421b50
    .word 0x44826000
    b L21d634
    .word 0x26040044
L21d624:
    .word 0x3c023b80
    .word 0x34428081
    .word 0x44826000
    .word 0x26040044
L21d634:
    jal func_0021cf90
    nop
    .word 0x3c026c01
    .word 0x344203fc
    dsll v0,v0,0x10
    .word 0x34420100
    dsll v0,v0,0x10
    .word 0x34420404
    .word 0x70001e28
    pcpyld v1,v0,v1
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0xc60c001c
    jal func_0021d0f0
    .word 0x8e04003c
    .word 0x92020028
    .word 0x3c046c03
    .word 0x348403fd
    dsll a0,a0,0x10
    .word 0x34840100
    dsll a0,a0,0x10
    .word 0x34840404
    .word 0x70001e28
    andi v0,v0,0x7
    pcpyld a0,a0,v1
    .word 0x8f838690
    .word 0x7c640000
    .word 0x8f848690
    .word 0x8f8387dc
    .word 0x24840010
    beqz v1,L21d6d0
    .word 0xaf848690
    andi v1,v0,0x4
    beqzl v1,L21d6ec
    .word 0x34420008
    nop
L21d6d0:
    .word 0x8f838164
    beqz v1,L21d6f4
    andi v1,v0,0x8
    andi v1,v0,0x4
    beqz v1,L21d6f0
    nop
    .word 0x34420008
L21d6ec:
    nop
L21d6f0:
    andi v1,v0,0x8
L21d6f4:
    beqz v1,L21d738
    nop
    .word 0x3c010033
    .word 0x7824f640
    .word 0x8f838690
    .word 0x3c010033
    .word 0x7c640000
    .word 0x8f838690
    .word 0x7824f650
    .word 0x24630010
    .word 0xaf838690
    .word 0x8f838690
    .word 0x7c640000
    .word 0x8f838690
    .word 0x24630010
    b L21d770
    .word 0xaf838690
L21d738:
    .word 0x3c010033
    .word 0x7824f620
    .word 0x8f838690
    .word 0x3c010033
    .word 0x7c640000
    .word 0x8f838690
    .word 0x7824f630
    .word 0x24630010
    .word 0xaf838690
    .word 0x8f838690
    .word 0x7c640000
    .word 0x8f838690
    .word 0x24630010
    .word 0xaf838690
L21d770:
    .word 0x8f848780
    addiu v1,zero,3
    bne a0,v1,L21d788
    .word 0xaf8087d4
    addiu v1,zero,32
    .word 0xaf8387d4
L21d788:
    lwu a0,-30760(gp)
    lwu v1,-30764(gp)
    dsll32 a0,a0,0x0
    or a0,a0,v1
    pcpyld a0,a0,v0
    .word 0x8f828690
    .word 0x7c440000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0x92040028
    andi v0,a0,0x20
    sra v1,v0,0x5
    andi v0,a0,0x18
    sra v0,v0,0x2
    or v0,v1,v0
    .word 0xa202002b
    .word 0x8e030004
    .word 0x9204002b
    .word 0x8f8287d0
    .word 0x8c630024
    sll a0,a0,0x2
    addu v1,v1,a0
    .word 0x8c640000
    beq v0,a0,L21d820
    dsll32 v0,a0,0x0
    dsrl32 v0,v0,0x0
    dsll32 v1,v0,0x0
    .word 0x3c025000
    or v1,v1,v0
    .word 0x70001628
    pcpyld v1,v0,v1
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0xaf8487d0
    .word 0x24420010
    .word 0xaf828690
L21d820:
    .word 0x8e040004
    .word 0x8e060030
    .word 0x3c030200
    .word 0x3c020300
    .word 0x3c055000
    .word 0x8c840020
    .word 0x8cc60000
    or v1,a0,v1
    lwu a0,32(a2)
    dsll32 v1,v1,0x0
    or v1,v1,v0
    .word 0x24d00018
    dsll32 v0,a0,0x0
    or a1,v0,a1
    pcpyld v1,v1,a1
    .word 0x8f828690
    ori a1,zero,0xf000
    dsll a1,a1,0x10
    .word 0x70002628
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    pcpyld v1,a0,a1
    .word 0x8f828690
    addiu a0,zero,1
    .word 0x70002e28
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    jal func_001dd1d0
    .word 0xaf828690
    jal func_00111a70
    nop
    .word 0x8e020000
    .word 0x24420001
    jal func_00111ab8
    .word 0xae020000
    .word 0x8e030004
    addiu v0,zero,1
    .word 0x24630001
    .word 0xae030004
    .word 0x8e030004
    bne v1,v0,L21d8e0
    .word 0x72002628
    jal func_001df850
    nop
    nop
L21d8e0:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    .word 0x27bd0030
}


