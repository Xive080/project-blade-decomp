extern void func_001c3070(void);
extern void func_001c30e0(void);
extern void func_001e1fb0(void);
extern void func_001e2580(void);
extern void func_001e3a50(void);
extern void func_001f1850(void);
extern void func_00254130(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-496
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f82877c
    .word 0x70a08628
    jal func_001e1fb0
    addu s1,a1,v0
    bnez v0,L1e3bdc
    nop
    b L1e567c
    .word 0x70001628
L1e3bdc:
    .word 0xae000004
    .word 0xae000008
    .word 0xa2200017
    .word 0xa2200034
    .word 0xae200038
    .word 0xae20003c
    .word 0xae200040
    .word 0xae200044
    .word 0xae200048
    .word 0xae20004c
    .word 0xae200050
    .word 0xae200054
    .word 0xae200058
    .word 0xa2200036
    .word 0x8e02000c
    .word 0xae020028
    .word 0x8e020010
    .word 0xae02002c
    .word 0x8e020004
    .word 0xae020024
    .word 0x8e06000c
    beqz a2,L1e5650
    addiu v0,zero,128
    .word 0x8e030010
    beqz v1,L1e564c
    nop
    .word 0x92050020
    addiu v0,zero,2
    beq a1,v0,L1e557c
    nop
    addiu v0,zero,1
    beq a1,v0,L1e54ec
    addiu a0,a2,63
    beqz a1,L1e53e8
    nop
    addiu a0,zero,4
    beq a1,a0,L1e3d5c
    nop
    addiu a0,zero,5
    beq a1,a0,L1e3c88
    nop
    b L1e5644
    .word 0x70001628
L1e3c88:
    .word 0x92050023
    andi a0,a1,0x60
    beqz a0,L1e3cc0
    andi a0,a1,0x90
    .word 0xafa20180
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa20184
    jal func_001c3070
    addiu a0,sp,384
    b L1e567c
    .word 0x70001628
    andi a0,a1,0x90
L1e3cc0:
    beqz a0,L1e3cf0
    addiu a0,a2,63
    .word 0xafa20188
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa2018c
    jal func_001c3070
    addiu a0,sp,392
    b L1e567c
    .word 0x70001628
    addiu a0,a2,63
L1e3cf0:
    sra a0,a0,0x6
    .word 0x8f8587a8
    .word 0x00833018
    .word 0x3c03002e
    addiu a0,v1,18128
    sll a1,a1,0x4
    .word 0x3c03002e
    addu a0,a0,a1
    addiu v1,v1,18132
    .word 0x8c840000
    addu v1,v1,a1
    .word 0x8c630000
    addiu a0,a0,63
    sra a0,a0,0x6
    mult1 v1,a0,v1
    slt at,v1,a2
    beqz at,L1e3d5c
    nop
    .word 0xafa20190
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa20194
    jal func_001c3070
    addiu a0,sp,400
    b L1e567c
    .word 0x70001628
L1e3d5c:
    .word 0x8e040014
    .word 0x3c02002f
    addiu v1,v0,1548
    .word 0x3c02002f
    addiu v0,v0,1676
    .word 0x8e05000c
    sll a0,a0,0x2
    addu v1,v1,a0
    addu v0,v0,a0
    .word 0x8c720000
    .word 0x8c560000
    b L1e3d98
    addiu a0,zero,-1
L1e3d90:
    addiu a0,a0,1
    srl a1,a1,0x1
L1e3d98:
    nop
    nop
    nop
    bnez a1,L1e3d90
    nop
    addiu v0,zero,1
    sllv v1,v0,a0
    .word 0x8e02000c
    slt at,v1,v0
    beqz at,L1e3dc8
    nop
    addiu a0,a0,1
L1e3dc8:
    .word 0x8e020010
    b L1e3de0
    addiu a1,zero,-1
L1e3dd4:
    addiu a1,a1,1
    srl v0,v0,0x1
    nop
L1e3de0:
    nop
    nop
    nop
    bnez v0,L1e3dd4
    nop
    addiu v0,zero,1
    sllv v1,v0,a1
    .word 0x8e020010
    slt at,v1,v0
    beqz at,L1e3e10
    nop
    addiu a1,a1,1
L1e3e10:
    .word 0x8e02000c
    sltu at,s2,v0
    beqz at,L1e3e2c
    srl a2,s2,0x6
    b L1e3e2c
    sra a2,v0,0x6
    srl a2,s2,0x6
L1e3e2c:
    andi v0,a0,0xf
    sll v1,v0,0x1a
    sll v0,a2,0xe
    or a0,v1,v0
    andi v1,a1,0xf
    sll v0,v1,0x1e
    or v0,v0,a0
    .word 0xae220008
    sra v0,v1,0x2
    .word 0xae22000c
    .word 0x9783814c
    addiu v0,zero,1
    addiu a0,zero,32
    .word 0xa6230014
    .word 0xa2220034
    .word 0x92060023
    andi a1,a2,0x60
    beq a1,a0,L1e3fec
    addiu v1,zero,16
    addiu v1,zero,64
    beql a1,v1,L1e3f3c
    addiu a1,zero,8
    beqzl a1,L1e3e98
    andi a2,a2,0xf
    b L1e40a4
    .word 0xafa201b0
    andi a2,a2,0xf
L1e3e98:
    addiu a1,zero,5
    .word 0xafa000b0
    .word 0xafa000c0
    .word 0xafa000a0
    .word 0x70002628
    beq a2,a1,L1e3f04
    .word 0x70001e28
    addiu a1,zero,6
    beq a2,a1,L1e3ef0
    nop
    beq a2,v0,L1e3ed0
    nop
    b L1e3f18
    .word 0xafa20198
L1e3ed0:
    .word 0x8e250008
    .word 0x3c0200a0
    or v0,a1,v0
    .word 0xae220008
    .word 0x8e22000c
    ori v0,v0,0x4
    b L1e40c4
    .word 0xae22000c
L1e3ef0:
    .word 0x8e250008
    .word 0x3c020010
    or v0,a1,v0
    b L1e40c4
    .word 0xae220008
L1e3f04:
    .word 0x8e22000c
    ori v0,v0,0x4
    b L1e40c4
    .word 0xae22000c
    .word 0xafa20198
L1e3f18:
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa2019c
    jal func_001c3070
    addiu a0,sp,408
    b L1e567c
    .word 0x70001628
    addiu a1,zero,8
L1e3f3c:
    .word 0xafa500c0
    addiu a1,zero,2
    .word 0xafa500b0
    .word 0x8e280008
    .word 0x3c070140
    .word 0x3c062000
    addiu a1,zero,5
    or a3,t0,a3
    .word 0xae270008
    .word 0x8e27000c
    ori a3,a3,0x4
    .word 0xae27000c
    .word 0x8e27000c
    or a2,a3,a2
    .word 0xae26000c
    .word 0x92060023
    andi a2,a2,0xf
    beql a2,a1,L1e3fbc
    addiu v0,zero,4
    beq a2,v0,L1e3f98
    nop
    b L1e3fc8
    .word 0xafa201a0
L1e3f98:
    .word 0x8e26000c
    .word 0x8fa200b0
    .word 0x3c050050
    .word 0x70602628
    .word 0xafa200a0
    or v0,a2,a1
    b L1e40c4
    .word 0xae22000c
    addiu v0,zero,4
L1e3fbc:
    b L1e40c4
    .word 0xafa200a0
    .word 0xafa201a0
L1e3fc8:
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa201a4
    jal func_001c3070
    addiu a0,sp,416
    b L1e567c
    .word 0x70001628
    addiu v1,zero,16
L1e3fec:
    .word 0xafa300c0
    .word 0x8fa300c0
    .word 0x3c060130
    .word 0x3c052000
    .word 0xafa300b0
    .word 0x8e270008
    addiu v1,zero,5
    or a2,a3,a2
    .word 0xae260008
    .word 0x8e26000c
    ori a2,a2,0x4
    .word 0xae26000c
    .word 0x8e26000c
    or a1,a2,a1
    .word 0xae25000c
    .word 0x92050023
    andi a1,a1,0xf
    beql a1,v1,L1e4070
    addiu v0,zero,4
    beq a1,v0,L1e4048
    nop
    b L1e4080
    .word 0xafa201a8
L1e4048:
    .word 0x8e26000c
    addiu v0,zero,2
    addiu v1,zero,64
    .word 0x3c050050
    .word 0x70602628
    .word 0xafa200a0
    or v0,a2,a1
    b L1e40c4
    .word 0xae22000c
    addiu v0,zero,4
L1e4070:
    .word 0xafa200a0
    b L1e40c4
    addiu v1,zero,64
    .word 0xafa201a8
L1e4080:
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa201ac
    jal func_001c3070
    addiu a0,sp,424
    b L1e567c
    .word 0x70001628
    .word 0xafa201b0
L1e40a4:
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa201b4
    jal func_001c3070
    addiu a0,sp,432
    b L1e567c
    .word 0x70001628
L1e40c4:
    .word 0x8e050014
    .word 0x8e02000c
    .word 0x00a21018
    sra v0,v0,0x3
    .word 0xae020018
    .word 0x92020023
    andi v0,v0,0x80
    beqz v0,L1e45d4
    nop
    .word 0x8e14000c
    .word 0x8e150010
    addiu v0,zero,1
    .word 0x70009e28
    .word 0x7000f628
    .word 0x7000be28
    sltu at,s2,s4
    .word 0xffa000f0
    .word 0xffa20130
    .word 0xffa000e8
    .word 0xffa20128
    .word 0xffa000e0
    .word 0xffa20120
    .word 0xffa00108
    .word 0xffa20148
    .word 0xffa00100
    .word 0xffa20140
    .word 0xffa000f8
    .word 0xffa20138
    .word 0xafa001e0
    .word 0xffa00110
    beqz at,L1e414c
    .word 0xffa20150
    b L1e4150
    srl v0,s4,0x6
L1e414c:
    srl v0,s2,0x6
L1e4150:
    dsll32 v0,v0,0x0
    dsrl32 v0,v0,0x0
    b L1e4420
    .word 0xffa200d0
L1e4160:
    .word 0x8e030014
    addiu v0,zero,-16
    sltu at,s2,s4
    .word 0x00741818
    .word 0x02a31818
    srl v1,v1,0x3
    addiu v1,v1,15
    and v1,v1,v0
    beqz at,L1e4190
    addu s8,s8,v1
    b L1e4198
    srl v0,s4,0x6
L1e4190:
    srl v0,s2,0x6
    nop
L1e4198:
    dsll32 v1,v0,0x0
    sll v0,s3,0x3
    dsrl32 v1,v1,0x0
    addu v0,v0,sp
    .word 0xfc430120
    .word 0xdc420120
    .word 0x8e040014
    jal func_00254130
    dsll a1,v0,0x6
    sll v1,s3,0x3
    addu v1,v1,sp
    .word 0xdc640120
    dsrl v0,v0,0x3
    dsll32 v0,v0,0x0
    .word 0xdfa300d0
    beq v1,a0,L1e4238
    dsra32 v0,v0,0x0
    .word 0x8e04000c
    addiu a2,s3,-1
    addiu v1,s2,-1
    srav a0,a0,a2
    addu v1,v1,a0
    bnez s2,L1e41fc
    .word 0x0072001b
    .word 0x000001cd
L1e41fc:
    .word 0x8e040010
    mflo a1
    addiu v1,s6,-1
    srav a0,a0,a2
    addu v1,v1,a0
    bnez s6,L1e421c
    .word 0x0076001b
    .word 0x000001cd
L1e421c:
    mflo a0
    addiu v1,zero,-2048
    .word 0x00a42018
    sll a0,a0,0xb
    addu a0,s7,a0
    and v1,a0,v1
    .word 0xafa301e0
L1e4238:
    sll v1,s3,0x3
    .word 0x8fa501e0
    addu v1,v1,sp
    .word 0xdc630120
    addiu a0,zero,-64
    addiu a1,a1,63
    and a0,a1,a0
    .word 0xffa300d0
    .word 0xafa401e0
    .word 0x8e240008
    .word 0x8fa501e0
    addiu v1,zero,20
    srl a0,a0,0x14
    andi a1,a1,0x7ff
    andi a0,a0,0x3f
    beq a0,v1,L1e43ac
    srl a1,a1,0x8
    addiu v1,zero,19
    beql a0,v1,L1e4374
    sll a0,a1,0x2
    addiu v1,zero,10
    beql a0,v1,L1e4338
    sll a0,a1,0x2
    addiu v1,zero,2
    beql a0,v1,L1e42fc
    sll a0,a1,0x2
    addiu v1,zero,1
    beql a0,v1,L1e42c0
    sll a0,a1,0x2
    beqz a0,L1e42bc
    nop
    b L1e43ec
    .word 0x8fb701e0
L1e42bc:
    sll a0,a1,0x2
L1e42c0:
    .word 0x3c03002f
    .word 0x8fa501e0
    addiu v1,v1,1808
    addu v1,v1,a0
    .word 0x8c640000
    srl a1,a1,0xb
    sll a1,a1,0x5
    addu a0,a1,a0
    sll v1,s3,0x3
    dsll32 a0,a0,0x0
    addu v1,v1,sp
    dsrl32 a0,a0,0x0
    b L1e43e8
    .word 0xfc6400e0
    sll a0,a1,0x2
L1e42fc:
    .word 0x3c03002f
    .word 0x8fa501e0
    addiu v1,v1,1840
    addu v1,v1,a0
    .word 0x8c640000
    srl a1,a1,0xb
    sll a1,a1,0x5
    addu a0,a1,a0
    sll v1,s3,0x3
    dsll32 a0,a0,0x0
    addu v1,v1,sp
    dsrl32 a0,a0,0x0
    b L1e43e8
    .word 0xfc6400e0
    sll a0,a1,0x2
L1e4338:
    .word 0x3c03002f
    .word 0x8fa501e0
    addiu v1,v1,1872
    addu v1,v1,a0
    .word 0x8c640000
    srl a1,a1,0xb
    sll a1,a1,0x5
    addu a0,a1,a0
    sll v1,s3,0x3
    dsll32 a0,a0,0x0
    addu v1,v1,sp
    dsrl32 a0,a0,0x0
    b L1e43e8
    .word 0xfc6400e0
    sll a0,a1,0x2
L1e4374:
    .word 0x3c03002f
    .word 0x8fa501e0
    addiu v1,v1,1904
    addu v1,v1,a0
    .word 0x8c640000
    srl a1,a1,0xb
    sll a1,a1,0x5
    addu a0,a1,a0
    sll v1,s3,0x3
    dsll32 a0,a0,0x0
    addu v1,v1,sp
    dsrl32 a0,a0,0x0
    b L1e43e8
    .word 0xfc6400e0
L1e43ac:
    sll a0,a1,0x2
    .word 0x3c03002f
    .word 0x8fa501e0
    addiu v1,v1,1936
    addu v1,v1,a0
    .word 0x8c640000
    srl a1,a1,0xb
    sll a1,a1,0x5
    addu a0,a1,a0
    sll v1,s3,0x3
    dsll32 a0,a0,0x0
    addu v1,v1,sp
    dsrl32 a0,a0,0x0
    .word 0xfc6400e0
    nop
L1e43e8:
    .word 0x8fb701e0
L1e43ec:
    .word 0x02a21818
    addiu s3,s3,1
    srl s4,s4,0x1
    srl v1,v1,0x2
    addu v1,s7,v1
    .word 0xafa301e0
    .word 0x8fa301e0
    addiu v0,zero,-64
    srl s5,s5,0x1
    addiu v1,v1,63
    and v0,v1,v0
    .word 0xafa201e0
    nop
L1e4420:
    beqz s4,L1e4478
    nop
    beqz s5,L1e4478
    nop
    .word 0x8f828148
    sltu at,s3,v0
    beqz at,L1e4478
    nop
    .word 0x8e02000c
    slti v0,v0,8
    bnez v0,L1e4160
    nop
    .word 0x8e020010
    slti v0,v0,8
    bnez v0,L1e4160
    nop
    sltiu v0,s4,8
    bnez v0,L1e4478
    nop
    sltiu at,s5,8
    beqz at,L1e4160
    nop
L1e4478:
    .word 0x8e220008
    .word 0x8e04000c
    .word 0x8e050010
    addiu a3,sp,224
    addiu t0,sp,288
    addiu t1,sp,352
    srl v0,v0,0x14
    addiu t2,sp,480
    addiu t3,sp,484
    jal func_001e2580
    andi a2,v0,0x3f
    addiu v0,s3,-1
    .word 0xae3e0028
    sll v0,v0,0x2
    .word 0xa2220016
    .word 0xdfa700f0
    .word 0xdfa600e8
    .word 0xdfa50128
    .word 0xdfa40130
    .word 0xdfa300f8
    .word 0xdfa20138
    andi a3,a3,0x3fff
    andi a2,a2,0x3fff
    dsll a1,a1,0xe
    dsll a3,a3,0x14
    or a1,a2,a1
    andi v1,v1,0x3fff
    or a1,a3,a1
    dsll32 a0,a0,0x2
    or a0,a0,a1
    dsll32 v1,v1,0x8
    or v1,v1,a0
    dsll32 v0,v0,0x16
    or v0,v0,v1
    .word 0xae220018
    dsrl32 v0,v0,0x0
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xae22001c
    .word 0xdfa70108
    .word 0xdfa60100
    .word 0xdfa50140
    .word 0xdfa40148
    .word 0xdfa30110
    .word 0xdfa20150
    andi a3,a3,0x3fff
    andi a2,a2,0x3fff
    dsll a1,a1,0xe
    dsll a3,a3,0x14
    or a1,a2,a1
    andi v1,v1,0x3fff
    or a1,a3,a1
    dsll32 a0,a0,0x2
    or a0,a0,a1
    dsll32 v1,v1,0x8
    or v1,v1,a0
    dsll32 v0,v0,0x16
    or v0,v0,v1
    .word 0xae220020
    dsrl32 v0,v0,0x0
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xae220024
    .word 0x8fa300c0
    .word 0x8fa200b0
    .word 0x00621818
    .word 0x8fa200a0
    .word 0x00431018
    .word 0xae22002c
    .word 0x8fa201e0
    .word 0xae220030
    .word 0x8e22002c
    beqz v0,L1e45cc
    nop
    .word 0x8fa201e4
    .word 0xae220010
    .word 0x8fa301e4
    .word 0x8fa201e0
    sll v1,v1,0x6
    bne v1,v0,L1e476c
    nop
    .word 0x8e220030
    addiu v0,v0,2048
    b L1e476c
    .word 0xae220030
L1e45cc:
    b L1e476c
    .word 0xae200010
L1e45d4:
    .word 0x8e060010
    .word 0x8e020018
    .word 0x3c070040
    ori a3,a3,0x4
    dsll32 a3,a3,0x0
    addiu a1,zero,-16
    ori a3,a3,0x4000
    .word 0x00c23018
    addiu a2,a2,15
    dsrl32 v0,a3,0x0
    and a2,a2,a1
    dsll32 v0,v0,0x0
    .word 0xae260028
    dsra32 v0,v0,0x0
    .word 0xae270018
    .word 0xae22001c
    .word 0xae270020
    .word 0xae220024
    .word 0xa2200016
    .word 0xffa000e0
    .word 0x8e02000c
    addu v0,v0,s2
    addiu v0,v0,-1
    bnez s2,L1e463c
    .word 0x0052001b
    .word 0x000001cd
L1e463c:
    mflo a1
    srl v0,s2,0x6
    .word 0xafa00160
    .word 0x00451018
    dsll32 v0,v0,0x0
    dsrl32 v0,v0,0x0
    .word 0xffa20120
    .word 0x8e02000c
    addu v0,v0,s2
    addiu v0,v0,-1
    bnez s2,L1e4670
    .word 0x0052001b
    .word 0x000001cd
L1e4670:
    .word 0x8e050010
    addiu v0,s6,-1
    mflo t0
    addu v0,a1,v0
    bnez s6,L1e468c
    .word 0x0056001b
    .word 0x000001cd
L1e468c:
    .word 0x8fa500c0
    .word 0x8fa200b0
    mflo a3
    addiu a2,zero,-2048
    mult1 a1,a1,v0
    .word 0x8fa200a0
    mult1 v0,v0,a1
    .word 0x01072818
    sll a1,a1,0xb
    and a1,a1,a2
    .word 0xae250030
    .word 0xae22002c
    .word 0x8e22002c
    beqz v0,L1e4768
    nop
    .word 0x8e02000c
    .word 0x01122818
    slt at,v0,a1
    bnez at,L1e46f0
    nop
    .word 0x8e020010
    .word 0x00f62818
    slt at,v0,a1
    beqz at,L1e4704
    nop
L1e46f0:
    .word 0x8e220030
    srl v0,v0,0x6
    addiu v0,v0,-4
    b L1e476c
    .word 0xae220010
L1e4704:
    .word 0x8fa200c0
    addiu a1,v1,-1
    .word 0x8e260030
    addu v0,v0,a1
    .word 0x0043001b
    srl v0,a2,0x6
    bnez v1,L1e4728
    .word 0xae220010
    .word 0x000001cd
L1e4728:
    .word 0x8fa200b0
    addiu v1,a0,-1
    mflo a1
    addu v0,v0,v1
    bnez a0,L1e4744
    .word 0x0044001b
    .word 0x000001cd
L1e4744:
    mflo a3
    .word 0x8e230030
    addiu v0,zero,-2048
    .word 0x00a72818
    sll a0,a1,0xb
    addu v1,v1,a0
    and v0,v1,v0
    b L1e476c
    .word 0xae220030
L1e4768:
    .word 0xae200010
L1e476c:
    .word 0x8e230028
    addiu v0,zero,-16
    addiu v1,v1,15
    and v0,v1,v0
    .word 0xae220028
    .word 0x8f8286ec
    bnez v0,L1e5314
    nop
    .word 0x8e040010
    .word 0x8e03000c
    .word 0x8e020014
    .word 0x00831818
    .word 0x00431018
    sra v0,v0,0x7
    slti at,v0,32767
    beqz at,L1e5314
    nop
    .word 0x92230036
    addiu v0,zero,19
    ori v1,v1,0x1
    .word 0xa2230036
    .word 0x8e230008
    srl v1,v1,0x14
    andi v1,v1,0x3f
    bne v1,v0,L1e4918
    .word 0x70009e28
    .word 0x92220036
    ori v0,v0,0x2
    .word 0xa2220036
    .word 0x8e22000c
    srl v0,v0,0x13
    andi v0,v0,0xf
    bnez v0,L1e4918
    nop
    .word 0x92250016
    addiu v0,zero,2
    sra v1,a1,0x2
    sll v1,v1,0x3
    addu a0,v1,sp
    .word 0xdc830120
    bne v1,v0,L1e4918
    nop
    addiu v0,zero,-4
    and v0,a1,v0
    addu v0,v0,sp
    .word 0x8c450160
    .word 0xdc8400e0
    addiu v0,zero,-1
    dsll v0,v0,0x10
    ori v0,v0,0xffff
    dsll v0,v0,0x10
    andi v1,a0,0x2
    ori v0,v0,0xffe1
    dsll v1,v1,0x2
    and v0,a0,v0
    or v1,v1,v0
    andi v0,a0,0x4
    dsrl v0,v0,0x1
    or v1,v0,v1
    andi v0,a0,0x8
    dsll v0,v0,0x1
    or v1,v0,v1
    andi v0,a0,0x10
    dsrl v0,v0,0x2
    andi a2,a1,0x7ff
    or v1,v0,v1
    srl v0,a2,0x4
    dsll32 v0,v0,0x0
    srl a1,a1,0x10
    dsrl32 v0,v0,0x0
    andi a1,a1,0x7ff
    dsubu v1,v1,v0
    srl v0,a1,0x4
    sll v0,v0,0x3
    dsll32 v0,v0,0x0
    dsrl32 v0,v0,0x0
    dsubu v0,v1,v0
    dsll32 a1,v0,0x0
    .word 0x8e240010
    addiu v0,zero,-31
    dsra32 a1,a1,0x0
    andi v1,a0,0x2
    and v0,a0,v0
    sll v1,v1,0x2
    or v1,v1,v0
    andi v0,a0,0x4
    srl v0,v0,0x1
    or v1,v0,v1
    andi v0,a0,0x8
    sll v0,v0,0x1
    or v1,v0,v1
    andi v0,a0,0x10
    srl v0,v0,0x2
    or v0,v0,v1
    subu v0,v0,a1
    sll v0,v0,0x3
    andi a2,v0,0x3f
    srl v0,v0,0x6
    sll a1,v0,0x3
    sltiu at,a1,2048
    beqz at,L1e4918
    nop
    sll v0,a1,0x10
    or v0,v0,a2
    dsll32 v0,v0,0x0
    dsrl32 v0,v0,0x0
    dsll32 s3,v0,0x0
L1e4918:
    .word 0x8e230008
    addiu v0,zero,20
    srl v1,v1,0x14
    andi v1,v1,0x3f
    bne v1,v0,L1e4a98
    nop
    .word 0x92220036
    addiu a1,zero,2
    ori v0,v0,0x4
    .word 0xa2220036
    .word 0x8e22000c
    srl v0,v0,0x13
    andi v0,v0,0xf
    bne v0,a1,L1e4a98
    nop
    .word 0x92240016
    sra v0,a0,0x2
    sll v0,v0,0x3
    addu v1,v0,sp
    .word 0xdc620120
    bne v0,a1,L1e4a98
    .word 0x70009e28
    .word 0xdc6500e0
    addiu v0,zero,-4
    and v0,a0,v0
    addu v0,v0,sp
    .word 0x8c430160
    addiu v0,zero,-1
    dsll v0,v0,0x10
    ori v0,v0,0xffff
    dsll v0,v0,0x10
    ori v0,v0,0xffe0
    and a0,a1,v0
    andi v0,v1,0x7ff
    srl v1,v1,0x10
    andi a2,v1,0x7ff
    andi v1,a1,0x1
    dsll v1,v1,0x2
    or a0,a0,v1
    andi v1,a1,0x2
    dsrl v1,v1,0x1
    or a0,v1,a0
    andi v1,a1,0x4
    dsll v1,v1,0x1
    or a0,v1,a0
    andi v1,a1,0x8
    dsrl v1,v1,0x2
    or a0,v1,a0
    srl v0,v0,0x5
    andi v1,a1,0x10
    dsll32 v0,v0,0x0
    or v1,v1,a0
    dsrl32 v0,v0,0x0
    dsubu v1,v1,v0
    srl v0,a2,0x4
    sll v0,v0,0x2
    dsll32 v0,v0,0x0
    dsrl32 v0,v0,0x0
    dsubu v0,v1,v0
    dsll32 a1,v0,0x0
    .word 0x8e240010
    addiu v0,zero,-32
    dsra32 a1,a1,0x0
    and v1,a0,v0
    andi v0,a0,0x1
    sll v0,v0,0x2
    or v1,v1,v0
    andi v0,a0,0x2
    srl v0,v0,0x1
    or v1,v0,v1
    andi v0,a0,0x4
    sll v0,v0,0x1
    or v1,v0,v1
    andi v0,a0,0x8
    srl v0,v0,0x2
    or v1,v0,v1
    andi v0,a0,0x10
    or v0,v0,v1
    subu v0,v0,a1
    sll v1,v0,0x4
    andi v0,v1,0x3f
    srl v1,v1,0x6
    sll a2,v1,0x3
    sltiu at,a2,2048
    beqz at,L1e4a8c
    .word 0x70009e28
    sll v1,a2,0x10
    or v0,v1,v0
    dsll32 v0,v0,0x0
    dsrl32 v0,v0,0x0
    b L1e4a98
    dsll32 s3,v0,0x0
    .word 0x70009e28
L1e4a8c:
    b L1e4a9c
    .word 0x92220016
    .word 0x70009e28
L1e4a98:
    .word 0x92220016
L1e4a9c:
    addiu a2,sp,488
    addiu a3,sp,492
    sra v0,v0,0x2
    addiu v1,v0,1
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x4
    .word 0xae220028
    .word 0x8e220008
    .word 0x92250036
    srl v0,v0,0x14
    jal func_001e3a50
    andi a0,v0,0x3f
    .word 0x8e04000c
    .word 0x8e050010
    b L1e4b58
    .word 0x70003628
L1e4ae0:
    .word 0x8fa301e8
    slt at,a0,v1
    beqzl at,L1e4afc
    .word 0x70801e28
    b L1e4b04
    .word 0x8fa201ec
    .word 0x70801e28
L1e4afc:
    nop
    .word 0x8fa201ec
L1e4b04:
    slt at,a1,v0
    beqz at,L1e4b1c
    .word 0x70a01628
    b L1e4b20
    .word 0x8fa201e8
    .word 0x70a01628
L1e4b1c:
    nop
L1e4b20:
    .word 0x8e070014
    .word 0x00624018
    sra a0,a0,0x1
    sra a1,a1,0x1
    addiu a2,a2,1
    .word 0x8e220028
    .word 0x00e83818
    addiu v1,zero,-16
    sra a3,a3,0x3
    addiu a3,a3,15
    and v1,a3,v1
    addu v0,v0,v1
    .word 0xae220028
    nop
L1e4b58:
    .word 0x92220016
    sra v0,v0,0x2
    slt at,v0,a2
    beqz at,L1e4ae0
    nop
    .word 0x8e22002c
    beqz v0,L1e4bac
    nop
    .word 0x8fa200b0
    addiu v1,zero,2
    bne v0,v1,L1e4b90
    nop
    addiu v0,zero,3
    .word 0xafa200b0
L1e4b90:
    .word 0x8fa300c0
    .word 0x8fa200b0
    .word 0x00621818
    .word 0x8fa200a0
    .word 0x00431018
    addiu v0,v0,80
    .word 0xae22002c
L1e4bac:
    .word 0x92220016
    addiu s4,zero,16
    .word 0x70009628
    .word 0x70003628
    b L1e4be8
    sra v0,v0,0x2
    sll v1,a2,0x2
L1e4bc8:
    addu v1,v1,sp
    .word 0x8c630160
    bnezl v1,L1e4be4
    addiu a2,a2,1
    addiu s4,s4,64
    addiu s2,s2,1
    addiu a2,a2,1
L1e4be4:
    nop
L1e4be8:
    slt at,v0,a2
    beqz at,L1e4bc8
    sll v1,a2,0x2
    .word 0x8e22002c
    beqz v0,L1e4c08
    nop
    addiu s4,s4,64
    addiu s2,s2,1
L1e4c08:
    .word 0x8e22002c
    beqz v0,L1e4c5c
    nop
    bnez s3,L1e4c5c
    nop
    addiu v1,v0,63
    .word 0x8e260028
    addiu v0,zero,-64
    and v1,v1,v0
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    addiu a1,zero,-128
    addiu a2,a2,127
    addiu a0,s4,112
    and a1,a2,a1
    addu a0,a0,a1
    jalr ra,v0
    addu a0,v1,a0
    b L1e4c90
    .word 0xae020004
L1e4c5c:
    .word 0x8e260028
    .word 0x8e25002c
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    addiu a0,zero,-64
    addiu v1,s4,112
    addu a1,a2,a1
    addiu a1,a1,63
    and a0,a1,a0
    jalr ra,v0
    addu a0,v1,a0
    .word 0xae020004
L1e4c90:
    .word 0x8e020004
    bnez v0,L1e4cf0
    nop
    addiu v0,zero,1
    .word 0xafa201b8
    .word 0x8e280028
    .word 0x3c028000
    ori a0,v0,0x13
    .word 0x8e25002c
    addiu a3,zero,-128
    addiu a2,s4,112
    addiu v0,t0,127
    and v0,v0,a3
    addu a2,a2,v0
    addiu v1,zero,-64
    addiu v0,a1,63
    and v0,v0,v1
    jal func_001c30e0
    addu a1,v0,a2
    .word 0xafa201bc
    jal func_001c3070
    addiu a0,sp,440
    b L1e567c
    .word 0x70001628
L1e4cf0:
    .word 0xac520000
    .word 0x8e050004
    sll v0,s2,0x6
    addiu a0,zero,-128
    addiu v1,a1,143
    addu v0,v1,v0
    and v0,v0,a0
    .word 0xaca20004
    .word 0x8e020004
    .word 0xac520008
    .word 0x8e22002c
    beqz v0,L1e4d5c
    nop
    bnez s3,L1e4d5c
    nop
    .word 0x8e030004
    .word 0x8e220028
    addu v1,v1,s4
    addiu v1,v1,112
    addiu v0,v0,127
    and v1,v1,a0
    and v0,v0,a0
    addu v0,v0,v1
    .word 0xae020008
    .word 0x8e020008
    addiu v0,v0,80
    .word 0xae020008
L1e4d5c:
    .word 0x8e030004
    .word 0x3c091000
    dsll32 t1,t1,0x0
    ori t1,t1,0x3
    addiu t4,zero,14
    .word 0x8c620004
    addiu v1,v1,16
    pcpyld a3,t4,t1
    .word 0x3c091000
    dsll32 t1,t1,0x0
    ori t1,t1,0x1
    pcpyld t0,t4,t1
    .word 0x8e04000c
    .word 0x8e050010
    b L1e5140
    .word 0x70003628
L1e4d9c:
    .word 0x8faa01e8
    slt at,a0,t2
    beqzl at,L1e4db8
    .word 0x70805628
    b L1e4dbc
    .word 0x8fab01ec
    .word 0x70805628
L1e4db8:
    .word 0x8fab01ec
L1e4dbc:
    slt at,a1,t3
    beqzl at,L1e4dd4
    .word 0x70a05e28
    b L1e4ddc
    .word 0x7c470000
    .word 0x70a05e28
L1e4dd4:
    nop
    .word 0x7c470000
L1e4ddc:
    .word 0x92290036
    andi t1,t1,0x2
    beqz t1,L1e4e08
    addiu v0,v0,16
    .word 0x8e2c0008
    addiu t1,zero,19
    srl t4,t4,0x14
    andi t4,t4,0x3f
    beq t4,t1,L1e4e34
    sll t1,a2,0x2
    nop
L1e4e08:
    .word 0x92290036
    andi t1,t1,0x4
    beqz t1,L1e4e5c
    sll t1,a2,0x2
    .word 0x8e2c0008
    addiu t1,zero,20
    srl t4,t4,0x14
    andi t4,t4,0x3f
    bne t4,t1,L1e4e58
    nop
    sll t1,a2,0x2
L1e4e34:
    addu t1,t1,sp
    .word 0x8d2c0160
    .word 0x3c09fffe
    ori t1,t1,0xfffe
    and t1,t4,t1
    dsll32 t1,t1,0x0
    dsrl32 t1,t1,0x0
    b L1e4e68
    dsll t1,t1,0x1f
L1e4e58:
    sll t1,a2,0x2
L1e4e5c:
    addu t1,t1,sp
    lwu t1,352(t1)
    dsll32 t1,t1,0x0
L1e4e68:
    addiu t4,zero,81
    pcpyld t4,t4,t1
    .word 0x7c4c0000
    .word 0x92290036
    andi t1,t1,0x2
    beqz t1,L1e4ea0
    addiu v0,v0,16
    .word 0x8e2c0008
    addiu t1,zero,19
    srl t4,t4,0x14
    andi t4,t4,0x3f
    beq t4,t1,L1e4ecc
    sra t1,t2,0x1
    nop
L1e4ea0:
    .word 0x92290036
    andi t1,t1,0x4
    beqz t1,L1e4ef0
    dsll32 t1,t3,0x0
    .word 0x8e2c0008
    addiu t1,zero,20
    srl t4,t4,0x14
    andi t4,t4,0x3f
    bne t4,t1,L1e4eec
    nop
    sra t1,t2,0x1
L1e4ecc:
    dsll32 t4,t1,0x0
    dsll32 t1,t3,0x0
    dsra32 t1,t1,0x0
    dsra t1,t1,0x1
    dsra32 t4,t4,0x0
    dsll32 t1,t1,0x0
    b L1e4f08
    or t1,t4,t1
L1e4eec:
    dsll32 t1,t3,0x0
L1e4ef0:
    dsll32 t4,t2,0x0
    dsra32 t1,t1,0x0
    dsra32 t4,t4,0x0
    dsll32 t1,t1,0x0
    or t1,t4,t1
    nop
L1e4f08:
    addiu t4,zero,82
    pcpyld t4,t4,t1
    .word 0x7c4c0000
    .word 0x70004e28
    addiu t4,zero,83
    addiu v0,v0,16
    pcpyld t4,t4,t1
    .word 0x7c4c0000
    .word 0x014b5818
    .word 0x3c090800
    dsll32 t1,t1,0x0
    .word 0x70006628
    .word 0x8e0a0014
    addiu v0,v0,16
    .word 0x014b5018
    sra t2,t2,0x3
    addiu t2,t2,15
    sra t2,t2,0x4
    dsll32 t2,t2,0x0
    dsra32 t2,t2,0x0
    or t1,t2,t1
    andi s2,t1,0x7fff
    pcpyld t4,t4,t1
    sll t1,a2,0x2
    .word 0x7c4c0000
    addu t1,t1,sp
    .word 0x8d290160
    bnez t1,L1e50f4
    addiu v0,v0,16
    .word 0x3c0c5000
    .word 0x3c091000
    ori t4,t4,0x2
    ori t1,t1,0x2
    dsll32 t4,t4,0x0
    pcpyld t4,t4,t1
    .word 0x7c6c0000
    addiu v1,v1,16
    .word 0x7c680000
    .word 0x92290036
    andi t1,t1,0x2
    beqz t1,L1e4ff4
    addiu v1,v1,16
    .word 0x8e2a0008
    addiu t1,zero,19
    srl t2,t2,0x14
    andi t2,t2,0x3f
    bne t2,t1,L1e4ff4
    nop
    sll t1,a2,0x3
    addu t1,t1,sp
    .word 0xdd2a0120
    .word 0xdd2900e0
    andi t3,t2,0x3e
    dsll t2,t3,0xf
    dsll32 t1,t1,0x0
    or t2,t2,t1
    dsll32 t1,t3,0xf
    b L1e50a0
    or t1,t1,t2
L1e4ff4:
    .word 0x92290036
    andi t1,t1,0x4
    beqz t1,L1e505c
    sll t1,a2,0x3
    .word 0x8e2a0008
    addiu t1,zero,20
    srl t2,t2,0x14
    andi t2,t2,0x3f
    bne t2,t1,L1e5058
    nop
    sll t1,a2,0x3
    addu t1,t1,sp
    .word 0xdd2c0120
    .word 0xdd2a00e0
    .word 0x3c0b0200
    andi t5,t4,0x3e
    dsll32 t1,t3,0x0
    dsll t4,t5,0xf
    dsll32 t2,t2,0x0
    or t3,t4,t3
    or t3,t3,t2
    dsll32 t2,t5,0xf
    or t2,t2,t3
    b L1e50a0
    or t1,t2,t1
L1e5058:
    sll t1,a2,0x3
L1e505c:
    addu t1,t1,sp
    .word 0xdd2c0120
    .word 0x8e2a0008
    .word 0xdd2900e0
    srl t2,t2,0x14
    andi t3,t2,0x3f
    sll t2,t3,0x18
    dsll32 t5,t2,0x0
    dsrl32 t5,t5,0x0
    dsll32 t2,t1,0x0
    dsll32 t1,t3,0x18
    dsll t3,t4,0x10
    or t3,t5,t3
    or t3,t3,t2
    dsll32 t2,t4,0x10
    or t2,t2,t3
    or t1,t1,t2
L1e50a0:
    addiu t2,zero,80
    pcpyld t4,t2,t1
    addiu t1,s2,5
    dsll32 t3,t1,0x0
    dsra32 t3,t3,0x0
    .word 0x3c093000
    or t2,t3,t1
    addiu t1,v0,-80
    dsll32 t1,t1,0x0
    dsra32 t1,t1,0x0
    dsll32 t1,t1,0x0
    or t1,t2,t1
    .word 0x3c0a5000
    .word 0x7c6c0000
    or t2,t3,t2
    dsll32 t4,t2,0x0
    addiu v1,v1,16
    pcpyld t4,t4,t1
    .word 0x7c6c0000
    b L1e5128
    addiu v1,v1,16
L1e50f4:
    .word 0x946bfff0
    addiu t1,s2,5
    dsll32 t4,t1,0x0
    dsra32 t4,t4,0x0
    .word 0x3c093000
    .word 0x3c0a5000
    daddu t3,t3,t4
    or t1,t3,t1
    .word 0xac69fff0
    .word 0x9469fffc
    daddu t1,t1,t4
    or t1,t1,t2
    .word 0xac69fffc
L1e5128:
    sll t1,s2,0x4
    addu v0,v0,t1
    sra a0,a0,0x1
    sra a1,a1,0x1
    addiu a2,a2,1
    nop
L1e5140:
    .word 0x92290016
    sra t1,t1,0x2
    slt at,t1,a2
    beqz at,L1e4d9c
    nop
    .word 0x8e24002c
    beqz a0,L1e53b4
    nop
    beqz s3,L1e5170
    nop
    addiu v0,v0,80
    .word 0xae020008
L1e5170:
    .word 0x8e020008
    addiu t4,zero,81
    .word 0x7c47ffb0
    addiu v0,v0,-80
    addiu v0,v0,16
    pcpyld t4,t4,s3
    .word 0x7c4c0000
    .word 0x8fa400c0
    addiu t4,zero,82
    addiu v0,v0,16
    .word 0x70802e28
    .word 0x8fa400b0
    .word 0x70802628
    dsll32 a0,a0,0x0
    or t1,a1,a0
    pcpyld t4,t4,t1
    .word 0x7c4c0000
    .word 0x70004e28
    addiu t4,zero,83
    addiu v0,v0,16
    pcpyld t4,t4,t1
    .word 0x8fa500c0
    .word 0x8fa400b0
    .word 0x00a43018
    .word 0x7c4c0000
    addiu v0,v0,16
    .word 0x8fa400a0
    .word 0x3c050800
    dsll32 a1,a1,0x0
    .word 0x00862018
    addiu a0,a0,15
    sra a0,a0,0x4
    dsll32 a0,a0,0x0
    dsra32 a0,a0,0x0
    .word 0x70003628
    or t1,a0,a1
    pcpyld t4,a2,t1
    .word 0x7c4c0000
    .word 0x3c0c5000
    ori t4,t4,0x2
    andi s2,t1,0x7fff
    .word 0x3c041000
    ori t1,a0,0x2
    dsll32 t4,t4,0x0
    addiu v0,v0,16
    pcpyld t4,t4,t1
    .word 0x7c6c0000
    addiu v1,v1,16
    .word 0x7c680000
    beqz s3,L1e5290
    addiu v1,v1,16
    .word 0x7866ffc0
    addiu a0,s2,5
    dsll32 a3,a0,0x0
    dsra32 a3,a3,0x0
    .word 0x3c053000
    .word 0x3c045000
    .word 0x7c660000
    .word 0x8e080004
    addiu v1,v1,16
    .word 0x8d060000
    addiu a2,a2,-1
    .word 0xad060000
    .word 0x9466ffc0
    daddu a2,a2,a3
    or t1,a2,a1
    .word 0xac69ffc0
    .word 0x9465ffcc
    daddu a1,a1,a3
    or t1,a1,a0
    b L1e52d4
    .word 0xac69ffcc
L1e5290:
    .word 0x8e27000c
    lwu a1,16(s1)
    .word 0x3c060001
    dsll32 a0,a2,0x0
    addiu t2,zero,80
    srl a3,a3,0x13
    andi t0,a3,0xf
    dsll a3,t0,0x18
    dsll32 a1,a1,0x0
    or a2,a3,a2
    or a1,a2,a1
    or a1,a1,a0
    dsll32 a0,t0,0x18
    or t1,a0,a1
    pcpyld t4,t2,t1
    .word 0x7c6c0000
    addiu v1,v1,16
L1e52d4:
    addiu a0,s2,5
    dsll32 a1,a0,0x0
    addiu v0,v0,-80
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    dsra32 a1,a1,0x0
    .word 0x3c043000
    dsll32 v0,v0,0x0
    or a0,a1,a0
    or t1,a0,v0
    .word 0x3c025000
    or v0,a1,v0
    dsll32 t4,v0,0x0
    pcpyld t4,t4,t1
    b L1e53b4
    .word 0x7c6c0000
L1e5314:
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8e240028
    .word 0x8e23002c
    .word 0x8c420130
    jalr ra,v0
    addu a0,a0,v1
    .word 0xae020004
    .word 0x8e030004
    bnez v1,L1e5374
    nop
    addiu v0,zero,1
    .word 0xafa201c0
    .word 0x8e250028
    .word 0x8e23002c
    .word 0x3c028000
    ori a0,v0,0x13
    jal func_001c30e0
    addu a1,a1,v1
    .word 0xafa201c4
    jal func_001c3070
    addiu a0,sp,448
    b L1e567c
    .word 0x70001628
L1e5374:
    .word 0x8e22002c
    beqz v0,L1e538c
    nop
    .word 0x8e220028
    addu v0,v1,v0
    .word 0xae020008
L1e538c:
    .word 0x8e030014
    addiu v0,zero,8
    bne v1,v0,L1e53ac
    .word 0x72002628
    .word 0x92220036
    ori v0,v0,0x2
    .word 0xa2220036
    .word 0x72002628
L1e53ac:
    jal func_001f1850
    nop
L1e53b4:
    .word 0x8e020004
    .word 0xae020024
    .word 0x8e020018
    .word 0xae020030
    .word 0x92220036
    andi v0,v0,0x1
    beqz v0,L1e5660
    nop
    .word 0x8e020004
    .word 0x8c420004
    addiu v0,v0,80
    b L1e5660
    .word 0xae020004
L1e53e8:
    .word 0x8e050014
    .word 0x3c02002f
    addiu a0,v0,1548
    .word 0x3c02002f
    addiu v1,v0,1676
    .word 0x00a61018
    sll a1,a1,0x2
    addu v1,v1,a1
    addu a0,a0,a1
    .word 0x8c660000
    .word 0x8c850000
    sra v1,v0,0x3
    .word 0xae030018
    .word 0x8e040010
    .word 0x8e030018
    addiu v0,a1,-1
    mult1 v1,a0,v1
    .word 0xae230028
    .word 0x8e03000c
    addu v0,v1,v0
    bnez a1,L1e5444
    .word 0x0045001b
    .word 0x000001cd
L1e5444:
    .word 0x8e030010
    addiu v0,a2,-1
    mflo a0
    addu v0,v1,v0
    bnez a2,L1e5460
    .word 0x0046001b
    .word 0x000001cd
L1e5460:
    mflo v0
    .word 0x00821018
    sll v0,v0,0xb
    .word 0xae220030
    .word 0x92020021
    andi v0,v0,0x80
    bnez v0,L1e54d0
    nop
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    .word 0x8e240028
    .word 0xae020004
    .word 0x8e020004
    bnez v0,L1e54d4
    nop
    addiu v0,zero,1
    .word 0xafa201c8
    .word 0x8e250028
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0x13
    .word 0xafa201cc
    jal func_001c3070
    addiu a0,sp,456
    b L1e567c
    .word 0x70001628
L1e54d0:
    .word 0xae000004
L1e54d4:
    .word 0x8e020004
    .word 0xae020024
    .word 0x8e020018
    b L1e5660
    .word 0xae020030
    addiu a0,a2,63
L1e54ec:
    sra a0,a0,0x6
    .word 0x8f8587a8
    .word 0x00833018
    .word 0x3c03002e
    addiu a0,v1,18128
    sll a1,a1,0x4
    .word 0x3c03002e
    addu a0,a0,a1
    addiu v1,v1,18132
    .word 0x8c840000
    addu v1,v1,a1
    .word 0x8c630000
    addiu a0,a0,63
    sra a0,a0,0x6
    mult1 v1,a0,v1
    slt at,v1,a2
    beqz at,L1e5558
    nop
    .word 0xafa201d0
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0x10
    .word 0xafa201d4
    jal func_001c3070
    addiu a0,sp,464
    b L1e567c
    .word 0x70001628
L1e5558:
    .word 0xae000018
    .word 0xae000004
    addiu v0,zero,128
    .word 0xa2020021
    .word 0x8e020004
    .word 0xae020024
    .word 0x8e020018
    b L1e5660
    .word 0xae020030
L1e557c:
    .word 0x8f8487a8
    .word 0x3c02002e
    addiu v0,v0,18128
    sll a1,a0,0x4
    addu v0,v0,a1
    .word 0x8c420000
    slt at,v0,a2
    bnez at,L1e55c0
    addiu v0,zero,1
    .word 0x3c02002e
    addiu v0,v0,18132
    addu v0,v0,a1
    .word 0x8c420000
    slt at,v0,v1
    beqz at,L1e55e4
    nop
    addiu v0,zero,1
L1e55c0:
    .word 0xafa201d8
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0x10
    .word 0xafa201dc
    jal func_001c3070
    addiu a0,sp,472
    b L1e567c
    .word 0x70001628
L1e55e4:
    .word 0x3c02002e
    addiu v0,v0,18136
    addu v0,v0,a1
    .word 0x8c440000
    .word 0x3c02002e
    addiu v0,v0,18128
    addu v0,v0,a1
    .word 0x8c430000
    addiu a0,a0,7
    sra a0,a0,0x3
    addiu v1,v1,63
    sra v1,v1,0x6
    .word 0x00831818
    addiu v0,zero,128
    sll v1,v1,0x6
    .word 0xae030018
    .word 0xae000004
    .word 0x8e030004
    .word 0xae030024
    .word 0x8e030018
    .word 0xae030030
    b L1e5660
    .word 0xa2020021
    .word 0x70001628
L1e5644:
    b L1e5680
    .word 0x7bbf0090
L1e564c:
    addiu v0,zero,128
L1e5650:
    .word 0xa2020021
    .word 0xae000018
    .word 0x8e020018
    .word 0xae020030
L1e5660:
    .word 0x8f83877c
    addiu v0,zero,1
    addu v1,s0,v1
    .word 0xac600000
    .word 0x8f83877c
    addu v1,s0,v1
    .word 0xac600004
L1e567c:
    .word 0x7bbf0090
L1e5680:
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,496
}
