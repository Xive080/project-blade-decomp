extern void func_0025b060(void);
extern void func_00182e50(void);
extern void func_00189050(void);
extern void func_00182cf0(void);
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
    .word 0x3c02002e
    addiu s0,v0,1696
    paddub s5,a0,zero
    jal func_0025b060
    .word 0xe7b40000
    paddub s2,v0,zero
    jal func_0025b060
    paddub a0,s5,zero
    paddub s3,v0,zero
    .word 0x8ea20000
    addiu v1,zero,9
    beq v0,v1,L259a78
    nop
    addiu v1,zero,10
    beq v0,v1,L259a70
    nop
    addiu v1,zero,32
    beq v0,v1,L259a60
    nop
    addiu v1,zero,11
    beq v0,v1,L259a60
    nop
    addiu v1,zero,12
    beq v0,v1,L259a58
    nop
    addiu v1,zero,13
    beq v0,v1,L259a48
    nop
    addiu v1,zero,14
    beq v0,v1,L259a40
    nop
    b L259a7c
    .word 0x8ea30018
L259a40:
    .word 0x3c03002e
    addiu s0,v1,1744
L259a48:
    .word 0x8ea30018
    .word 0xc4740000
    b L259ab0
    addiu s1,zero,2
L259a58:
    .word 0x3c03002e
    addiu s0,v1,1744
L259a60:
    .word 0x8ea30018
    .word 0xc4740000
    b L259ab0
    .word 0x70008e28
L259a70:
    .word 0x3c03002e
    addiu s0,v1,1744
L259a78:
    .word 0x8ea30018
L259a7c:
    .word 0x8c630000
    bltz v1,L259a94
    .word 0x70008e28
    .word 0x44830000
    b L259ab0
    cvt.s.w $f20,$f0
L259a94:
    srl a0,v1,0x1
    andi v1,v1,0x1
    or a0,a0,v1
    .word 0x44840000
    nop
    cvt.s.w $f20,$f0
    add.s $f20,$f20,$f20
L259ab0:
    .word 0x3c010033
    .word 0xc4203264
    .word 0x8ea50014
    addiu v1,zero,32
    bne v0,v1,L259ad4
    .word 0xc6a10004
    .word 0x8f8289f0
    b L259ae0
    .word 0x8c440008
L259ad4:
    .word 0x8f8289f0
    .word 0x8c44000c
    nop
L259ae0:
    addiu v0,zero,2
    .word 0xafa200b0
    addiu v0,sp,180
    .word 0xac400000
    addiu v0,sp,184
    .word 0x3c033f00
    .word 0xac430000
    addiu v0,sp,188
    .word 0xe4400000
    addiu v0,sp,192
    .word 0xe4410000
    addiu v0,sp,220
    .word 0xac440000
    addiu v0,sp,224
    jal func_00182e50
    .word 0xac450000
    addiu s6,sp,228
    .word 0xe6c00000
    .word 0xc6c00000
    .word 0x3c0241c8
    .word 0x44820800
    addiu s8,sp,196
    addiu s7,sp,200
    mul.s $f0,$f1,$f0
    addiu s4,sp,204
    .word 0x3c010033
    addiu a0,sp,176
    .word 0xe7c00000
    .word 0xaee20000
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8c2234a0
    .word 0x8f8389f0
    .word 0x8e460000
    .word 0x8c42002c
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae420008
    .word 0x3c02002e
    addiu v0,v0,1760
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0x3c010033
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8f8389f0
    .word 0x8c2234a0
    .word 0x8e460000
    .word 0x8c650000
    .word 0x8c47002c
    jal func_00189050
    addiu a0,sp,176
    .word 0xae42000c
    .word 0x3c010033
    .word 0xc4213268
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L259c08
    nop
    b L259c20
    .word 0x8f8489f0
L259c08:
    .word 0x8f8389f0
    .word 0x3c024420
    .word 0x44820000
    .word 0xc4610098
    sub.s $f1,$f0,$f1
    .word 0x8f8489f0
L259c20:
    .word 0xc6a00004
    addiu v0,zero,3
    .word 0x3c073f80
    .word 0x3c033f00
    .word 0x8c84000c
    addiu a1,zero,8
    paddub a2,s1,zero
    .word 0xafa200b0
    addiu v0,sp,180
    .word 0xac470000
    addiu v0,sp,184
    .word 0xac430000
    addiu v0,sp,188
    .word 0xe4410000
    addiu v0,sp,192
    .word 0xe4400000
    addiu v0,sp,220
    .word 0xac440000
    addiu v0,sp,224
    .word 0xe4540000
    .word 0xaec50000
    jal func_00182cf0
    .word 0xafb100e8
    addiu v0,sp,236
    .word 0xe4400000
    .word 0x3c0241c8
    .word 0x44820800
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    .word 0x3c010033
    addiu a0,sp,176
    .word 0xe7c00000
    .word 0xaee20000
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8c2234a0
    .word 0x8f8389f0
    .word 0x8e660000
    .word 0x8c42002c
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae620008
    .word 0x3c02002e
    addiu v0,v0,1760
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0x3c010033
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8f8389f0
    .word 0x8c2234a0
    .word 0x8e660000
    .word 0x8c650000
    .word 0x8c47002c
    jal func_00189050
    addiu a0,sp,176
    .word 0xae62000c
    .word 0x7bbf00a0
    .word 0x7bbe0090
    .word 0x7bb70080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,256
}


