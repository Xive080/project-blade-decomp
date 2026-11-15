extern void F1d8470(void);
extern void F1d97c0(void);
extern void F1d99e0(void);
extern void F1d9af0(void);
extern void F1d9c00(void);
extern void F20ff50(void);
extern void F20ff90(void);
extern void F20ffd0(void);
extern void F210040(void);
extern void F210220(void);
extern void F2105a0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    sq ra,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    beqz a0,L23d570
    .word 0x70A08E28
    .word 0x3C02002E
    b L23d578
    addiu s3,v0,22784
L23d570:
    .word 0x3C02002E
    addiu s3,v0,22768
L23d578:
    addiu s4,zero,2
    addiu v0,zero,1
    jal F1d8470
    movz s4,v0,a0
    jal F1d99e0
    .word 0x70402628
    .word 0x70408628
    jal F2105a0
    addiu a0,zero,1
    .word 0x70409628
    .word 0x72002628
    .word 0x70002E28
    .word 0x72403628
    jal F1d9c00
    .word 0x70003E28
    lw a1,0(s2)
    .word 0x70408628
    .word 0x72002628
    .word 0x70003628
    jal F1d9af0
    .word 0x70003E28
    .word 0x70402628
    .word 0x3C02002E
    addiu a1,v0,22752
    jal F20ffd0
    .word 0x70003628
    .word 0x72602E28
    .word 0x72803628
    jal F20ffd0
    .word 0x70402628
    .word 0x70402628
    .word 0x3C02002E
    addiu a1,v0,22800
    jal F20ffd0
    addiu a2,zero,3
    .word 0x70402628
    .word 0x3C02002E
    addiu a1,v0,22816
    jal F20ffd0
    addiu a2,zero,4
    .word 0x70402628
    .word 0x3C02002E
    addiu a1,v0,22832
    jal F20ffd0
    addiu a2,zero,5
    .word 0x70402628
    addiu a1,zero,5
    addiu a2,zero,36
    jal F210040
    addiu a3,zero,12
    jal F1d97c0
    .word 0x72002628
    lw a1,0(s2)
    .word 0x70408628
    .word 0x72002628
    .word 0x70003628
    jal F1d9af0
    .word 0x70003E28
    .word 0x70409628
    .word 0x72402628
    jal F210220
    addiu a1,zero,180
    lw v0,20(s2)
    addiu v1,zero,1
    .word 0x72202E28
    .word 0x72402628
    jal F20ff50
    sw v1,8(v0)
    .word 0x3C020024
    .word 0x72402628
    jal F20ff90
    addiu a1,v0,-12256
    .word 0x72001628
    lq ra,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,96
}
