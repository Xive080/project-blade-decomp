extern void F111a70(void);
extern void F111ab8(void);
extern void F1dd1d0(void);
extern void F1df850(void);
extern void F1f3c40(void);
extern void F1f3d10(void);
extern void F21cf30(void);
asm void func(void) {
    .set noreorder
    .word 0x27BDFFD0
    .word 0x7FBF0020
    .word 0x7FB10010
    .word 0x7FB00000
    .word 0x8C820040
    beq v0,zero,L10
    .word 0x70808E28
    jal F1f3c40
    .word 0x8C440000
    nop
L10:
    .word 0x8E300040
    beq s0,zero,L16
    .word 0x70001E28
    .word 0x8E030000
    nop
    nop
L16:
    .word 0x8F828790
    beql v1,v0,L91
    .word 0x2410000B
    .word 0xAF838790
    .word 0x8F848790
    beq a0,zero,L40
    .word 0xAF80878C
    .word 0x90860023
    .word 0xDF828138
    .word 0x8F83878C
    .word 0x70002E28
    .word 0x30C8000F
    .word 0x39060001
    .word 0x2CC70001
    .word 0x39060005
    .word 0x2CC60001
    .word 0x00E63025
    .word 0x00661825
    .word 0x34420010
    .word 0xAF83878C
    jal F1f3d10
    .word 0xFF828138
    beq zero,zero,L45
    .word 0x8F838788
L40:
    .word 0xDF838138
    .word 0x2402FFEF
    .word 0x00621024
    .word 0xFF828138
    .word 0x8F838788
L45:
    .word 0x8F82878C
    .word 0x00621025
    beq v0,zero,L53
    nop
    .word 0xDF828138
    .word 0x34420040
    beq zero,zero,L58
    .word 0xFF828138
L53:
    .word 0xDF838138
    .word 0x2402FFBF
    .word 0x00621024
    .word 0xFF828138
    nop
L58:
    .word 0x8F82878C
    beq v0,zero,L65
    nop
    .word 0xDF828710
    .word 0x34420001
    beq zero,zero,L70
    .word 0xFF828710
L65:
    .word 0xDF838710
    .word 0x2402FFFE
    .word 0x00621024
    .word 0xFF828710
    nop
L70:
    beq s0,zero,L90
    nop
    jal F21cf30
    .word 0x8E040054
    .word 0xFF808728
    .word 0x8E030058
    .word 0x24020003
    bne v1,v0,L82
    nop
    .word 0x70001628
    .word 0x34420001
    .word 0xFF828728
L82:
    .word 0x8E03005C
    .word 0x24020003
    bne v1,v0,L90
    nop
    .word 0xDF828728
    .word 0x34420004
    .word 0xFF828728
    nop
L90:
    .word 0x2410000B
L91:
    .word 0x3C028800
    .word 0x00102823
    jal F1dd1d0
    .word 0x34440501
    .word 0x0010183C
    .word 0x0003183E
    .word 0x3C021000
    .word 0x00621825
    .word 0x70001628
    .word 0x70431B89
    .word 0x8F828690
    .word 0x3C046C01
    .word 0x348403FA
    .word 0x00042438
    .word 0x34840100
    .word 0x00042438
    .word 0x7C430000
    .word 0x8F828690
    .word 0x34840404
    .word 0x70001E28
    .word 0x24420010
    .word 0xAF828690
    .word 0x70833389
    .word 0x8F838690
    .word 0x3C020033
    .word 0x2445F5C0
    .word 0x3C02FC03
    .word 0x3444FFFF
    .word 0x7C660000
    .word 0x8F868690
    .word 0x3C020033
    .word 0x2443F5C0
    .word 0x3C076C03
    .word 0x34E703FD
    .word 0x24C20010
    .word 0xAF828690
    .word 0x8CA20004
    .word 0x00073C38
    .word 0x34E70100
    .word 0x00073C38
    .word 0x3C010033
    .word 0x34E70404
    .word 0x00441024
    .word 0xACA20004
    .word 0x8F848138
    .word 0x8C620004
    .word 0x70003628
    .word 0x308407FF
    .word 0x000423C0
    .word 0x00441025
    .word 0xAC620004
    .word 0x7823F5C0
    .word 0x8F828690
    .word 0x7C430000
    .word 0x8F828690
    .word 0x24420010
    .word 0xAF828690
    .word 0x92220028
    .word 0x30420007
    .word 0x70E62389
    .word 0x8F838690
    .word 0x7C640000
    .word 0x8F848690
    .word 0x8F8387DC
    .word 0x24840010
    beq v1,zero,L162
    .word 0xAF848690
    .word 0x30430004
    beql v1,zero,L169
    .word 0x34420008
    nop
L162:
    .word 0x8F838164
    beq v1,zero,L171
    .word 0x30430008
    .word 0x30430004
    beq v1,zero,L170
    nop
    .word 0x34420008
L169:
    nop
L170:
    .word 0x30430008
L171:
    beq v1,zero,L188
    nop
    .word 0x3C010033
    .word 0x7824F640
    .word 0x8F838690
    .word 0x3C010033
    .word 0x7C640000
    .word 0x8F838690
    .word 0x7824F650
    .word 0x24630010
    .word 0xAF838690
    .word 0x8F838690
    .word 0x7C640000
    .word 0x8F838690
    .word 0x24630010
    beq zero,zero,L202
    .word 0xAF838690
L188:
    .word 0x3C010033
    .word 0x7824F620
    .word 0x8F838690
    .word 0x3C010033
    .word 0x7C640000
    .word 0x8F838690
    .word 0x7824F630
    .word 0x24630010
    .word 0xAF838690
    .word 0x8F838690
    .word 0x7C640000
    .word 0x8F838690
    .word 0x24630010
    .word 0xAF838690
L202:
    .word 0x8F848780
    .word 0x24030003
    bne a0,v1,L208
    .word 0xAF8087D4
    .word 0x24030020
    .word 0xAF8387D4
L208:
    .word 0x9F8487D8
    .word 0x9F8387D4
    .word 0x0004203C
    .word 0x00833825
    .word 0x70E22389
    .word 0x8F838690
    .word 0x7C640000
    .word 0x8F838690
    .word 0x24630010
    .word 0xAF838690
    .word 0x8E230040
    beq v1,zero,L265
    .word 0x70001628
    .word 0x3C035000
    .word 0x34630004
    .word 0x0003183C
    .word 0x70621389
    .word 0x8F848690
    .word 0x3C051000
    .word 0x0005283C
    .word 0x2403000E
    .word 0x34A58003
    .word 0x7C820000
    .word 0x8F828690
    .word 0x24420010
    .word 0xAF828690
    .word 0x70651389
    .word 0x8F848690
    .word 0x24030047
    .word 0x7C820000
    .word 0x8F828690
    .word 0xDF858710
    .word 0x24420010
    .word 0xAF828690
    .word 0x70651389
    .word 0x8F848690
    .word 0x24030014
    .word 0x7C820000
    .word 0x8F828690
    .word 0xDF858730
    .word 0x24420010
    .word 0xAF828690
    .word 0x70651389
    .word 0x8F848690
    .word 0x24030008
    .word 0x7C820000
    .word 0x8F828690
    .word 0xDF858728
    .word 0x24420010
    .word 0xAF828690
    .word 0x70651389
    .word 0x8F838690
    .word 0x7C620000
    .word 0x8F828690
    .word 0x24420010
    beq zero,zero,L338
    .word 0xAF828690
L265:
    .word 0xDF838710
    .word 0x30630001
    beq v1,zero,L312
    nop
    .word 0x8F858690
    .word 0x3C035000
    .word 0x34630002
    .word 0x2404FFFE
    .word 0x0003183C
    .word 0x7CA20000
    .word 0x8F858690
    .word 0x70003628
    .word 0x24A50010
    .word 0xAF858690
    .word 0x8F858690
    .word 0x7CA20000
    .word 0x8F858690
    .word 0xDF828710
    .word 0x24A50010
    .word 0x00441024
    .word 0xAF858690
    .word 0xFF828710
    .word 0x70661389
    .word 0x8F848690
    .word 0x3C051000
    .word 0x0005283C
    .word 0x2403000E
    .word 0x34A58001
    .word 0x7C820000
    .word 0x8F828690
    .word 0x24420010
    .word 0xAF828690
    .word 0x70651389
    .word 0x8F848690
    .word 0x24030047
    .word 0x7C820000
    .word 0x8F828690
    .word 0xDF858710
    .word 0x24420010
    .word 0xAF828690
    .word 0x70651389
    .word 0x8F838690
    .word 0x7C620000
    .word 0x8F828690
    .word 0x24420010
    beq zero,zero,L338
    .word 0xAF828690
L312:
    .word 0x8F838690
    .word 0x7C620000
    .word 0x8F838690
    .word 0x24630010
    .word 0xAF838690
    .word 0x8F838690
    .word 0x7C620000
    .word 0x8F838690
    .word 0x24630010
    .word 0xAF838690
    .word 0x8F838690
    .word 0x7C620000
    .word 0x8F838690
    .word 0x24630010
    .word 0xAF838690
    .word 0x8F838690
    .word 0x7C620000
    .word 0x8F838690
    .word 0x24630010
    .word 0xAF838690
    .word 0x8F838690
    .word 0x7C620000
    .word 0x8F828690
    .word 0x24420010
    .word 0xAF828690
    nop
L338:
    .word 0xA220002B
    .word 0x8E230004
    .word 0x9224002B
    .word 0x8F8287D0
    .word 0x8C630024
    .word 0x00042080
    .word 0x00641821
    .word 0x8C640000
    beq v0,a0,L362
    nop
    .word 0x0004103C
    .word 0x0002103E
    .word 0x0002183C
    .word 0x3C025000
    .word 0x00621825
    .word 0x70001628
    .word 0x70431B89
    .word 0x8F828690
    .word 0x7C430000
    .word 0x8F828690
    .word 0xAF8487D0
    .word 0x24420010
    .word 0xAF828690
    nop
L362:
    .word 0x8E260030
    .word 0x8E240004
    .word 0x3C030200
    .word 0x3C020300
    .word 0x3C055000
    .word 0x8CC60000
    .word 0x8C840020
    .word 0x24D00018
    .word 0x9CC60020
    .word 0x00831825
    .word 0x0003183C
    .word 0x00621825
    .word 0x0006103C
    .word 0x00452825
    .word 0x70651B89
    .word 0x8F828690
    .word 0x3405F000
    .word 0x00052C38
    .word 0x70002628
    .word 0x7C430000
    .word 0x8F828690
    .word 0x24420010
    .word 0xAF828690
    .word 0x70851B89
    .word 0x8F828690
    .word 0x24040001
    .word 0x70002E28
    .word 0x7C430000
    .word 0x8F828690
    .word 0x24420010
    jal F1dd1d0
    .word 0xAF828690
    jal F111a70
    nop
    .word 0x8E020000
    .word 0x24420001
    jal F111ab8
    .word 0xAE020000
    .word 0x8E030004
    .word 0x24020001
    .word 0x24630001
    .word 0xAE030004
    .word 0x8E030004
    bne v1,v0,L410
    nop
    jal F1df850
    .word 0x72002628
    nop
L410:
    .word 0x7BBF0020
    .word 0x7BB10010
    .word 0x7BB00000
    .word 0x24020001
    jr ra
    .word 0x27BD0030
}
