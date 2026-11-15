extern void f1d8470(void);
extern void f1d97c0(void);
extern void f1d99e0(void);
extern void f1d9af0(void);
extern void f1d9c00(void);
extern void f20ff50(void);
extern void f20ff90(void);
extern void f20ffd0(void);
extern void f210040(void);
extern void f210220(void);
extern void f2105a0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    sq ra,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    paddub s1,a0,zero
    beqz a1,L23d6f4
    paddub s0,a2,zero
    lui v0,0x2e
    b L23d6fc
    addiu s2,v0,22784
L23d6f4:
    lui v0,0x2e
    addiu s2,v0,22768
L23d6fc:
    addiu s3,zero,2
    addiu v0,zero,1
    jal f1d8470
    movz s3,v0,a1
    jal f1d99e0
    paddub a0,v0,zero
    paddub a0,s1,zero
    jal f2105a0
    paddub s1,v0,zero
    paddub a0,s1,zero
    paddub s1,v0,zero
    .word 0x70002e28
    paddub a2,s1,zero
    jal f1d9c00
    .word 0x70003e28
    lw a1,0(s1)
    paddub s4,v0,zero
    paddub a0,s4,zero
    .word 0x70003628
    jal f1d9af0
    .word 0x70003e28
    paddub a0,v0,zero
    lui v0,0x2e
    addiu a1,v0,22752
    jal f20ffd0
    .word 0x70003628
    paddub a1,s2,zero
    paddub a2,s3,zero
    jal f20ffd0
    paddub a0,v0,zero
    paddub a0,v0,zero
    lui v0,0x2e
    addiu a1,v0,22800
    jal f20ffd0
    addiu a2,zero,3
    paddub a0,v0,zero
    lui v0,0x2e
    addiu a1,v0,22816
    jal f20ffd0
    addiu a2,zero,4
    paddub a0,v0,zero
    addiu a1,zero,4
    addiu a2,zero,56
    jal f210040
    addiu a3,zero,18
    jal f1d97c0
    paddub a0,s4,zero
    lw a1,0(s1)
    .word 0x70003628
    .word 0x70003e28
    paddub s1,v0,zero
    jal f1d9af0
    paddub a0,s1,zero
    paddub s2,v0,zero
    paddub a0,s2,zero
    jal f210220
    addiu a1,zero,224
    lw v0,20(s2)
    addiu v1,zero,1
    paddub a1,s0,zero
    paddub a0,s2,zero
    jal f20ff50
    sw v1,8(v0)
    lui v0,0x24
    paddub a0,s2,zero
    jal f20ff90
    addiu a1,v0,-12256
    paddub v0,s1,zero
    lq ra,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,96
}
