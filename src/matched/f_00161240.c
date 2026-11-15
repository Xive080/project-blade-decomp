extern void func_001214b8(void);
extern void func_0012e7d0(void);
extern void func_0013be60(void);
extern void func_0013bff0(void);
extern void func_00142a90(void);
extern void func_00142aa0(void);
extern void func_00142ad0(void);
extern void func_00143640(void);
extern void func_00156ca0(void);
extern void func_00161db0(void);
extern void func_00179d10(void);
extern void func_0017a3c0(void);
extern void func_0017b460(void);
extern void func_0017b5f0(void);
extern void func_0017f260(void);
extern void func_0017f3f0(void);
extern void func_0017f610(void);
extern void func_0017f790(void);
extern void func_0017fc00(void);
extern void func_00180470(void);
extern void func_001a7230(void);
extern void func_001a98c0(void);
extern void func_001c3b00(void);
extern void func_001c3b70(void);
extern void func_001c3b80(void);
extern void func_001c7c70(void);
extern void func_001c7e20(void);
extern void func_00201570(void);
extern void func_00247ee0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-224
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70808628
    addiu a0,s0,1016
    jal func_00247ee0
    .word 0x70a08e28
    jal func_00247ee0
    addiu a0,s0,1132
    jal func_00247ee0
    addiu a0,s0,1252
    jal func_0017a3c0
    nop
    .word 0x8c420000
    .word 0x72002628
    jalr ra,v0
    .word 0x72202e28
    bnez v0,L1612ac
    nop
    b L161934
    .word 0x70001628
L1612ac:
    .word 0x8e0200d0
    andi v0,v0,0x1
    beqz v0,L1612c8
    nop
    .word 0xae0003d8
    b L1612e0
    .word 0xae0003dc
L1612c8:
    .word 0x8e220054
    .word 0xae0203d8
    .word 0x8e250058
    jal func_00156ca0
    .word 0x8e240054
    .word 0xae0203dc
L1612e0:
    jal func_00180470
    nop
    .word 0xae020038
    .word 0x8e020038
    bnez v0,L161300
    nop
    b L161934
    .word 0x70001628
L161300:
    .word 0x3c020030
    addiu v0,v0,24032
    .word 0xae02000c
    .word 0xae00055c
    .word 0x8e040030
    jal func_00161db0
    addiu a1,s0,1440
    .word 0x8e0400b4
    jal func_00161db0
    addiu a1,s0,1504
    .word 0x8e0400b8
    jal func_00161db0
    addiu a1,s0,1568
    addiu v0,s0,1440
    jal func_001c7e20
    .word 0xae020660
    jal func_001c7e20
    .word 0xae02056c
    .word 0xae020570
    .word 0x8e04056c
    .word 0x3c063f80
    .word 0x3c020002
    ori v0,v0,0x3
    .word 0x3c034020
    .word 0xac860028
    .word 0x8e04056c
    .word 0xac860014
    .word 0x8e04056c
    .word 0xac860000
    .word 0x8e04056c
    .word 0xac800010
    .word 0x8e04056c
    .word 0xac800008
    .word 0x8e04056c
    .word 0xac800004
    .word 0x8e04056c
    .word 0xac800024
    .word 0x8e04056c
    .word 0xac800020
    .word 0x8e04056c
    .word 0xac800018
    .word 0x8e04056c
    .word 0xac800038
    .word 0x8e04056c
    .word 0xac800034
    .word 0x8e04056c
    .word 0xac800030
    .word 0x8e05056c
    .word 0x8ca4000c
    or a0,a0,v0
    .word 0xaca4000c
    .word 0x8e040570
    .word 0xac860028
    .word 0x8e040570
    .word 0xac860014
    .word 0x8e040570
    .word 0xac860000
    .word 0x8e040570
    .word 0xac800010
    .word 0x8e040570
    .word 0xac800008
    .word 0x8e040570
    .word 0xac800004
    .word 0x8e040570
    .word 0xac800024
    .word 0x8e040570
    .word 0xac800020
    .word 0x8e040570
    .word 0xac800018
    .word 0x8e040570
    .word 0xac800038
    .word 0x8e040570
    .word 0xac800034
    .word 0x8e040570
    .word 0xac800030
    .word 0x8e050570
    .word 0x8ca4000c
    or v0,a0,v0
    .word 0xaca2000c
    .word 0xae000588
    .word 0xae00058c
    .word 0xae000590
    .word 0xae0303e4
    .word 0xae000560
    .word 0xae000564
    .word 0xae000568
    .word 0xae000664
    .word 0xae000668
    .word 0x8e020360
    beqz v0,L161488
    nop
    .word 0x8e020354
    beqz v0,L161488
    nop
    .word 0x8e020010
    ori v0,v0,0x2000
    b L161498
    .word 0xae020010
L161488:
    .word 0x8e030010
    addiu v0,zero,-8193
    and v0,v1,v0
    .word 0xae020010
L161498:
    jal func_00142a90
    .word 0x8e040030
    .word 0x70409628
    jal func_001c3b70
    .word 0x72402628
    .word 0x8e050570
    .word 0x70409e28
    .word 0x72602628
    jal func_001c7c70
    .word 0x70003628
    .word 0x8e05056c
    addiu a2,zero,2
    jal func_001c7c70
    .word 0x72602628
    jal func_001c3b80
    .word 0x72402628
    .word 0x8e040030
    .word 0x3c027f7f
    addiu s2,sp,140
    ori v0,v0,0xffff
    addiu s3,sp,144
    .word 0xae420000
    addiu s4,sp,148
    .word 0xae620000
    .word 0xae820000
    .word 0x3c02ff7f
    ori v0,v0,0xffff
    addiu s5,sp,132
    .word 0xafa20080
    addiu s6,sp,136
    .word 0xaea20000
    .word 0xaec20000
    .word 0x3c020016
    addiu a2,sp,128
    jal func_00201570
    addiu a1,v0,6496
    .word 0xc6400000
    .word 0x3c027f7f
    ori v0,v0,0xffff
    .word 0x44820800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L161564
    nop
    .word 0xae400000
    .word 0xae600000
    .word 0xae800000
    .word 0xafa00080
    .word 0xaea00000
    .word 0xaec00000
L161564:
    .word 0xc6400000
    .word 0xc7a10080
    addiu a0,zero,2
    sub.s $f0,$f1,$f0
    .word 0xe60003ec
    .word 0xc6a10000
    .word 0xc6600000
    sub.s $f0,$f1,$f0
    .word 0xe60003f0
    .word 0xc6c10000
    .word 0xc6800000
    sub.s $f0,$f1,$f0
    jal func_0017f610
    .word 0xe60003f4
    .word 0xae020034
    .word 0x8e040034
    jal func_0017fc00
    addiu a1,zero,1
    .word 0x8e020030
    .word 0x8c450004
    jal func_0017f3f0
    .word 0x8e040034
    .word 0x3c020030
    addiu a2,v0,24012
    .word 0x8e040034
    .word 0x3c020030
    addiu a3,zero,2
    addiu t0,v0,23936
    jal func_0017f790
    .word 0x70002e28
    .word 0x8e040034
    jal func_0017f260
    addiu a1,zero,1
    .word 0x3c020030
    addiu a0,zero,1
    jal func_0017b460
    addiu a1,v0,23904
    .word 0x8e040034
    .word 0x3c030030
    addiu a1,v1,23904
    .word 0xac820024
    .word 0x8e020034
    .word 0x8c440024
    jal func_0017b5f0
    .word 0x72003628
    .word 0x72002628
    jal func_00179d10
    .word 0x70002e28
    .word 0x3c023f80
    .word 0x44826000
    jal func_0013bff0
    .word 0x72002628
    jal func_0013be60
    .word 0x72002628
    .word 0x3c010030
    .word 0x9023a61f
    addiu v0,zero,5
    bne v1,v0,L161654
    addiu a0,zero,1
    addiu a0,zero,2
L161654:
    .word 0x8e050030
    jal func_00143640
    .word 0x72003628
    .word 0xae0200b0
    .word 0x8e130030
    jal func_00142ad0
    .word 0x72602628
    .word 0x70409628
L161674:
    jal func_0012e7d0
    .word 0x72402628
    .word 0x72402e28
    jal func_00142aa0
    .word 0x72602628
    .word 0x70409628
    bnez s2,L161674
    nop
    .word 0x8e1300b4
    jal func_00142ad0
    .word 0x72602628
    .word 0x70409628
L1616a4:
    jal func_0012e7d0
    .word 0x72402628
    .word 0x72402e28
    jal func_00142aa0
    .word 0x72602628
    .word 0x70409628
    bnez s2,L1616a4
    nop
    .word 0x8e1300b8
    jal func_00142ad0
    .word 0x72602628
    .word 0x70409628
L1616d4:
    jal func_0012e7d0
    .word 0x72402628
    .word 0x72402e28
    jal func_00142aa0
    .word 0x72602628
    .word 0x70409628
    bnez s2,L1616d4
    nop
    .word 0x3c02002f
    addiu a0,sp,160
    addiu a1,v0,-14520
    jal func_001214b8
    addiu a2,s1,12
    addiu a0,s0,1016
    addiu a1,sp,160
    addiu a2,zero,1
    jal func_001a98c0
    addiu a3,zero,106
    .word 0x3c02002f
    addiu a0,sp,160
    addiu a1,v0,-14512
    jal func_001214b8
    addiu a2,s1,12
    addiu a0,s0,1252
    addiu a1,sp,160
    addiu a3,zero,106
    jal func_001a98c0
    .word 0x70003628
    .word 0xae000558
    .word 0x8e0200d0
    andi v0,v0,0x1
    beqz v0,L1618e0
    .word 0x3c023f80
    .word 0x8e020030
    jal func_001c3b70
    .word 0x8c440004
    .word 0xc622001c
    .word 0xc6210020
    .word 0xc6200024
    .word 0x3c010030
    .word 0x70409628
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0xc6220028
    .word 0xc621002c
    .word 0xc6200030
    .word 0xe4420010
    .word 0xe4410014
    .word 0xe4400018
    .word 0xc6220034
    .word 0xc6210038
    .word 0xc620003c
    .word 0xe4420020
    .word 0xe4410024
    .word 0xe4400028
    .word 0xc6220040
    .word 0xc6210044
    .word 0xc6200048
    .word 0xe4420030
    .word 0xe4410034
    .word 0xe4400038
    .word 0x8c23a628
    .word 0xc4410030
    .word 0xc4600000
    .word 0x3c010030
    add.s $f0,$f1,$f0
    .word 0xe4400030
    .word 0x8c23a628
    .word 0xc4410034
    .word 0xc4600004
    .word 0x3c010030
    add.s $f0,$f1,$f0
    .word 0xe4400034
    .word 0x8c23a628
    .word 0xc4410038
    .word 0xc4600008
    add.s $f0,$f1,$f0
    .word 0xe4400038
    .word 0x8e020030
    jal func_001c3b00
    .word 0x8c440004
    .word 0x8e020030
    jal func_001c3b80
    .word 0x8c440004
    .word 0x8e0200b4
    beqz v0,L16187c
    nop
    jal func_001c3b70
    .word 0x8c440004
    addiu a1,zero,8
    .word 0x72403628
L161844:
    .word 0x8cc40000
    .word 0x8cc30004
    addiu a1,a1,-1
    .word 0xac440000
    .word 0xac430004
    addiu a2,a2,8
    bgtz a1,L161844
    addiu v0,v0,8
    .word 0x8e0200b4
    jal func_001c3b00
    .word 0x8c440004
    .word 0x8e0200b4
    jal func_001c3b80
    .word 0x8c440004
L16187c:
    .word 0x8e0200b8
    beqz v0,L1618cc
    nop
    jal func_001c3b70
    .word 0x8c440004
    addiu a1,zero,8
L161894:
    .word 0x8e440000
    .word 0x8e430004
    addiu a1,a1,-1
    .word 0xac440000
    .word 0xac430004
    addiu s2,s2,8
    bgtz a1,L161894
    addiu v0,v0,8
    .word 0x8e0200b8
    jal func_001c3b00
    .word 0x8c440004
    .word 0x8e0200b8
    jal func_001c3b80
    .word 0x8c440004
L1618cc:
    .word 0xae00003c
    .word 0x3c02bf80
    b L16190c
    .word 0xae0204e0
    .word 0x3c023f80
L1618e0:
    .word 0xae0204e0
    .word 0x3c02002f
    addiu a2,s1,12
    addiu a0,sp,192
    jal func_001214b8
    addiu a1,v0,-14504
    addiu a0,s0,1132
    addiu a1,sp,192
    addiu a2,zero,1
    jal func_001a98c0
    addiu a3,zero,106
L16190c:
    addiu a0,s0,1016
    jal func_001a7230
    addiu a1,s0,92
    addiu a0,s0,1132
    jal func_001a7230
    addiu a1,s0,92
    addiu a0,s0,1252
    jal func_001a7230
    addiu a1,s0,92
    addiu v0,zero,1
L161934:
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,224
}
