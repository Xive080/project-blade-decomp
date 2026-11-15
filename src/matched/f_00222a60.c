extern void fn_202b00(void);
extern void fn_20eef0(void);
extern void fn_1c3b80(void);
extern void fn_1c7340(void);
extern void fn_1f7d70(void);
extern void fn_1fc0f0(void);
extern void fn_1dd1d0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c910008
    paddub s3,a0,zero
    paddub s2,a1,zero
    .word 0x8e300018
    .word 0x8e020044
    .word 0xac82000c
    jal fn_202b00
    paddub a0,s0,zero
    addiu v1,zero,1
    beq v0,v1,L222ac4
    nop
    .word 0x8e020044
    .word 0x8f838874
    .word 0x94450004
    jal fn_20eef0
    addu a0,s1,v1
    .word 0x8c420000
    b L222ae0
    .word 0xae620010
L222ac4:
    .word 0x8e020044
    .word 0x8f838878
    .word 0x94450004
    jal fn_20eef0
    addu a0,s0,v1
    .word 0x8c420000
    .word 0xae620010
L222ae0:
    .word 0x8e630014
    addiu v0,zero,-2
    and v0,v1,v0
    .word 0xae620014
    jal fn_1c3b80
    .word 0x8e240004
    paddub a1,v0,zero
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8e440000
    .word 0x8c420000
    jal fn_1c7340
    addiu a2,v0,32
    addiu v0,zero,4
    .word 0xa2620029
    .word 0x938287cc
    paddub a0,s1,zero
    jal fn_1f7d70
    .word 0xa2620028
    paddub s2,v0,zero
    bnez s2,L222b44
    paddub a0,s1,zero
    b L222c70
    addiu v0,zero,1
    paddub a0,s1,zero
L222b44:
    jal fn_1fc0f0
    paddub a1,s2,zero
    .word 0x8e510000
    paddub s0,v0,zero
    .word 0x3c028800
    ori a0,v0,0x501
    sll v0,s1,0x2
    addiu v0,v0,2
    jal fn_1dd1d0
    negu a1,v0
    sll v0,s1,0x2
    dsll32 v1,v0,0x0
    dsrl32 v1,v1,0x0
    .word 0x3c021000
    or a0,v1,v0
    sll v0,s1,0x12
    dsll32 v1,v0,0x0
    .word 0x3c026c00
    dsrl32 v1,v1,0x0
    ori v0,v0,0x2d0
    or v0,v1,v0
    dsll32 v1,v0,0x0
    .word 0x3c020100
    ori v0,v0,0x404
    or v0,v1,v0
    pcpyld a2,v0,a0
    .word 0x8f828690
    paddub v1,zero,zero
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    b L222c30
    .word 0xaf828690
L222bc8:
    .word 0x7a060000
    .word 0x8f828690
    addiu v1,v1,1
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x7a060010
    .word 0x8f828690
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x7a060020
    .word 0x8f828690
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x7a060030
    .word 0x8f828690
    addiu s0,s0,64
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
L222c30:
    slt v0,v1,s1
    bnez v0,L222bc8
    nop
    ori a0,zero,0xf000
    dsll a0,a0,0x10
    paddub v0,zero,zero
    pcpyld a2,v0,a0
    .word 0x8f828690
    addiu a0,zero,1
    .word 0x70002e28
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    jal fn_1dd1d0
    .word 0xaf828690
    addiu v0,zero,1
L222c70:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
