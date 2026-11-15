extern void func_001f3c40(void);
extern void func_001f3d10(void);
extern void func_0021cf30(void);
extern void func_001dd1d0(void);
extern void func_0021cf90(void);
extern void func_0021d0f0(void);
extern void func_00111a70(void);
extern void func_00111ab8(void);
extern void func_001df850(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c820040
    beqz v0,L21ea58
    .word 0x70808e28
    jal func_001f3c40
    .word 0x8c440000
    nop
L21ea58:
    .word 0x8e300040
    beqz s0,L21ea70
    .word 0x70001e28
    .word 0x8e030000
    nop
    nop
L21ea70:
    .word 0x8f828790
    beql v1,v0,L21eb9c
    addiu s0,zero,15
    .word 0xaf838790
    .word 0x8f848790
    beqz a0,L21ead0
    .word 0xaf80878c
    .word 0x90860023
    .word 0xdf828138
    .word 0x8f83878c
    .word 0x70002e28
    andi t0,a2,0xf
    xori a2,t0,0x1
    sltiu a3,a2,1
    xori a2,t0,0x5
    sltiu a2,a2,1
    or a2,a3,a2
    or v1,v1,a2
    ori v0,v0,0x10
    .word 0xaf83878c
    jal func_001f3d10
    .word 0xff828138
    b L21eae4
    .word 0x8f838788
L21ead0:
    .word 0xdf838138
    addiu v0,zero,-17
    and v0,v1,v0
    .word 0xff828138
    .word 0x8f838788
L21eae4:
    .word 0x8f82878c
    or v0,v1,v0
    beqz v0,L21eb04
    nop
    .word 0xdf828138
    ori v0,v0,0x40
    b L21eb18
    .word 0xff828138
L21eb04:
    .word 0xdf838138
    addiu v0,zero,-65
    and v0,v1,v0
    .word 0xff828138
    nop
L21eb18:
    .word 0x8f82878c
    beqz v0,L21eb34
    nop
    .word 0xdf828710
    ori v0,v0,0x1
    b L21eb48
    .word 0xff828710
L21eb34:
    .word 0xdf838710
    addiu v0,zero,-2
    and v0,v1,v0
    .word 0xff828710
    nop
L21eb48:
    beqz s0,L21eb98
    nop
    jal func_0021cf30
    .word 0x8e040054
    .word 0xff808728
    .word 0x8e030058
    addiu v0,zero,3
    bne v1,v0,L21eb78
    .word 0x70001628
    ori v0,v0,0x1
    .word 0xff828728
    nop
L21eb78:
    .word 0x8e03005c
    addiu v0,zero,3
    bne v1,v0,L21eb98
    nop
    .word 0xdf828728
    ori v0,v0,0x4
    .word 0xff828728
    nop
L21eb98:
    addiu s0,zero,15
L21eb9c:
    .word 0x3c028800
    negu a1,s0
    jal func_001dd1d0
    ori a0,v0,0x501
    dsll32 v1,s0,0x0
    dsrl32 v1,v1,0x0
    .word 0x3c021000
    or v1,v1,v0
    .word 0x70001628
    pcpyld v1,v0,v1
    .word 0x8f828690
    .word 0x3c046c01
    ori a0,a0,0x3fa
    dsll a0,a0,0x10
    ori a0,a0,0x100
    dsll a0,a0,0x10
    .word 0x7c430000
    .word 0x8f828690
    ori a0,a0,0x404
    .word 0x70001e28
    .word 0x24420010
    .word 0xaf828690
    pcpyld a2,a0,v1
    .word 0x8f838690
    .word 0x3c020033
    .word 0x2445f5c0
    .word 0x3c02fc03
    ori a0,v0,0xffff
    .word 0x3c020033
    .word 0x7c660000
    .word 0x2443f5c0
    .word 0x8f828690
    .word 0x3c066c01
    ori a2,a2,0x3fb
    dsll a2,a2,0x10
    ori a2,a2,0x100
    dsll a2,a2,0x10
    .word 0x24420010
    .word 0xaf828690
    .word 0x8ca20004
    .word 0x3c010033
    ori a2,a2,0x404
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
    .word 0x92220047
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
    beqz v0,L21ecc8
    .word 0xaf838690
    .word 0x3c023b01
    ori v0,v0,0x1b50
    .word 0x44826000
    b L21ecdc
    .word 0x26240044
L21ecc8:
    .word 0x3c023b80
    ori v0,v0,0x8081
    .word 0x44826000
    nop
    .word 0x26240044
L21ecdc:
    jal func_0021cf90
    nop
    .word 0x3c026c01
    ori v0,v0,0x3fc
    dsll v0,v0,0x10
    ori v0,v0,0x100
    dsll v0,v0,0x10
    ori v0,v0,0x404
    .word 0x70001e28
    pcpyld v1,v0,v1
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0xc62c001c
    jal func_0021d0f0
    .word 0x8e24003c
    .word 0x92220028
    .word 0x3c046c03
    ori a0,a0,0x3fd
    dsll a0,a0,0x10
    ori a0,a0,0x100
    dsll a0,a0,0x10
    ori a0,a0,0x404
    .word 0x70001e28
    andi v0,v0,0x7
    pcpyld a0,a0,v1
    .word 0x8f838690
    .word 0x7c640000
    .word 0x8f848690
    .word 0x8f8387dc
    .word 0x24840010
    beqz v1,L21ed78
    .word 0xaf848690
    andi v1,v0,0x4
    beqzl v1,L21ed94
    ori v0,v0,0x8
    nop
L21ed78:
    .word 0x8f838164
    beqz v1,L21ed9c
    andi v1,v0,0x8
    andi v1,v0,0x4
    beqz v1,L21ed98
    nop
    ori v0,v0,0x8
L21ed94:
    nop
L21ed98:
    andi v1,v0,0x8
L21ed9c:
    beqz v1,L21ede0
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
    b L21ee18
    .word 0xaf838690
L21ede0:
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
L21ee18:
    .word 0x8f848780
    addiu v1,zero,3
    bne a0,v1,L21ee30
    .word 0xaf8087d4
    addiu v1,zero,32
    .word 0xaf8387d4
L21ee30:
    .word 0x9f8487d8
    .word 0x9f8387d4
    dsll32 a0,a0,0x0
    or a0,a0,v1
    pcpyld a0,a0,v0
    .word 0x8f838690
    .word 0x7c640000
    .word 0x8f838690
    .word 0x24630010
    .word 0xaf838690
    .word 0x8e230040
    beqz v1,L21ef14
    .word 0x70001628
    .word 0x3c035000
    ori v1,v1,0x4
    dsll32 v1,v1,0x0
    pcpyld v0,v1,v0
    .word 0x8f848690
    .word 0x3c051000
    dsll32 a1,a1,0x0
    ori a1,a1,0x8003
    addiu v1,zero,14
    .word 0x7c820000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    pcpyld v0,v1,a1
    .word 0x8f848690
    addiu v1,zero,71
    .word 0x7c820000
    .word 0x8f828690
    .word 0xdf858710
    .word 0x24420010
    .word 0xaf828690
    pcpyld v0,v1,a1
    .word 0x8f848690
    addiu v1,zero,20
    .word 0x7c820000
    .word 0x8f828690
    .word 0xdf858730
    .word 0x24420010
    .word 0xaf828690
    pcpyld v0,v1,a1
    .word 0x8f848690
    addiu v1,zero,8
    .word 0x7c820000
    .word 0x8f828690
    .word 0xdf858728
    .word 0x24420010
    .word 0xaf828690
    pcpyld v0,v1,a1
    .word 0x8f838690
    .word 0x7c620000
    .word 0x8f828690
    .word 0x24420010
    b L21f038
    .word 0xaf828690
L21ef14:
    .word 0xdf838710
    andi v1,v1,0x1
    beqz v1,L21efd0
    nop
    .word 0x8f858690
    .word 0x3c035000
    ori v1,v1,0x2
    addiu a0,zero,-2
    dsll32 v1,v1,0x0
    .word 0x70003628
    .word 0x7ca20000
    .word 0x8f858690
    .word 0x24a50010
    .word 0xaf858690
    .word 0x8f858690
    .word 0x7ca20000
    .word 0x8f858690
    .word 0xdf828710
    .word 0x24a50010
    and v0,v0,a0
    .word 0xaf858690
    .word 0xff828710
    pcpyld v0,v1,a2
    .word 0x8f848690
    .word 0x3c051000
    dsll32 a1,a1,0x0
    ori a1,a1,0x8001
    addiu v1,zero,14
    .word 0x7c820000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    pcpyld v0,v1,a1
    .word 0x8f848690
    addiu v1,zero,71
    .word 0x7c820000
    .word 0x8f828690
    .word 0xdf858710
    .word 0x24420010
    .word 0xaf828690
    pcpyld v0,v1,a1
    .word 0x8f838690
    .word 0x7c620000
    .word 0x8f828690
    .word 0x24420010
    b L21f038
    .word 0xaf828690
L21efd0:
    .word 0x8f838690
    .word 0x7c620000
    .word 0x8f838690
    .word 0x24630010
    .word 0xaf838690
    .word 0x8f838690
    .word 0x7c620000
    .word 0x8f838690
    .word 0x24630010
    .word 0xaf838690
    .word 0x8f838690
    .word 0x7c620000
    .word 0x8f838690
    .word 0x24630010
    .word 0xaf838690
    .word 0x8f838690
    .word 0x7c620000
    .word 0x8f838690
    .word 0x24630010
    .word 0xaf838690
    .word 0x8f838690
    .word 0x7c620000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    nop
L21f038:
    .word 0x92240028
    andi v0,a0,0x20
    sra v1,v0,0x5
    andi v0,a0,0x18
    sra v0,v0,0x2
    or v0,v1,v0
    .word 0xa222002b
    .word 0x8e230004
    .word 0x9224002b
    .word 0x8f8287d0
    .word 0x8c630024
    sll a0,a0,0x2
    addu v1,v1,a0
    .word 0x8c640000
    beq v0,a0,L21f0a8
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
L21f0a8:
    .word 0x8e240004
    .word 0x8e260030
    .word 0x3c030200
    .word 0x3c020300
    .word 0x3c055000
    .word 0x8c840020
    .word 0x8cc60000
    or v1,a0,v1
    .word 0x9cc40020
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
    bne v1,v0,L21f168
    .word 0x72002628
    jal func_001df850
    nop
    nop
L21f168:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}


