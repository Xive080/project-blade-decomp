extern void func_0011a488(void);
extern void func_0011a620(void);
extern void func_00165190(void);
extern void func_0017b870(void);
extern void func_001c3b70(void);
extern void func_001c7610(void);
extern void func_001ce160(void);
extern void func_001ce240(void);
extern void func_001ce410(void);
asm void func(void) {
.set noreorder
.set noat
    addiu sp,sp,-400
    mov.s $f12,$f13
    .word 0x7fbf00a0
    .word 0x7fb70090
    .word 0x7fb60080
    .word 0x7fb50070
    .word 0x7fb40060
    .word 0x7fb30050
    .word 0x7fb20040
    .word 0x7fb10030
    .word 0x7fb00020
    .word 0xe7b60018
    .word 0xe7b50014
    addiu a1,sp,176
    addiu a2,sp,272
    addiu a3,sp,240
    addiu t0,sp,396
    .word 0x7080b628
    jal func_00165190
    .word 0xe7b40010
    jal func_001c3b70
    .word 0x8ec40068
    .word 0x8ec30010
    .word 0x70408628
    andi v0,v1,0x400
    beqz v0,L164384
    andi v0,v1,0x200
    addiu v0,sp,272
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6c20094
    .word 0xe6c10098
    .word 0xe6c0009c
    .word 0xc6c20094
    .word 0xc6c10098
    .word 0xc6c0009c
    .word 0xe6020030
    .word 0xe6010034
    .word 0xe6000038
    .word 0xc6010030
    .word 0xc7a000f0
    sub.s $f0,$f1,$f0
    .word 0xe6c00180
    .word 0xc6010034
    .word 0xc7a000f4
    sub.s $f0,$f1,$f0
    .word 0xe6c00184
    .word 0xc6010038
    .word 0xc7a000f8
    sub.s $f0,$f1,$f0
    .word 0xe6c00188
    .word 0x8ec20010
    ori v0,v0,0x200
    b L1648f4
    .word 0xaec20010
    andi v0,v1,0x200
L164384:
    bnez v0,L1643c8
    nop
    .word 0xc6010030
    .word 0xc7a000f0
    sub.s $f0,$f1,$f0
    .word 0xe6c00180
    .word 0xc6010034
    .word 0xc7a000f4
    sub.s $f0,$f1,$f0
    .word 0xe6c00184
    .word 0xc6010038
    .word 0xc7a000f8
    sub.s $f0,$f1,$f0
    .word 0xe6c00188
    .word 0x8ec20010
    ori v0,v0,0x200
    .word 0xaec20010
L1643c8:
    .word 0xc6c20180
    .word 0xc6c10184
    .word 0xc6c00188
    addiu a0,sp,256
    .word 0xe4820000
    .word 0xe4810004
    jal func_001ce240
    .word 0xe4800008
    addiu a0,sp,256
    mov.s $f20,$f0
    jal func_001ce160
    .word 0x70802e28
    .word 0xc7a1018c
    .word 0xc7a00100
    addiu v0,sp,260
    mtc1 zero,$f21
    addiu v1,sp,264
    addiu s1,sp,244
    mul.s $f0,$f0,$f1
    addiu s2,sp,248
    .word 0xe7a00100
    .word 0xc4400000
    mul.s $f0,$f0,$f1
    .word 0xe4400000
    .word 0xc4600000
    mul.s $f0,$f0,$f1
    .word 0xe4600000
    .word 0xc7a100f0
    .word 0xc7a00100
    add.s $f0,$f1,$f0
    .word 0xe6c00094
    .word 0xc4400000
    .word 0xc6210000
    add.s $f0,$f1,$f0
    .word 0xe6c00098
    .word 0xc4600000
    .word 0xc6410000
    add.s $f0,$f1,$f0
    .word 0xe6c0009c
    .word 0xc6c000dc
    c.le.s $f0,$f21
    nop
    bc1t L1648c4
    .word 0x3c023fc0
    .word 0xc7a20110
    .word 0xc7a000f0
    addiu a0,sp,336
    .word 0xc7a10114
    addiu s7,sp,340
    addiu s4,sp,344
    sub.s $f0,$f2,$f0
    .word 0x70802e28
    .word 0xe7a00150
    .word 0xc6200000
    sub.s $f0,$f1,$f0
    .word 0xe6e00000
    .word 0xc7a10118
    .word 0xc6400000
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe6800000
    .word 0xc6c10094
    .word 0xc7a000f0
    addiu a0,sp,352
    addiu s3,sp,356
    addiu s5,sp,360
    sub.s $f0,$f1,$f0
    .word 0x70802e28
    .word 0xe7a00160
    .word 0xc6c10098
    .word 0xc6200000
    sub.s $f0,$f1,$f0
    .word 0xe6600000
    .word 0xc6c1009c
    .word 0xc6400000
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe6a00000
    .word 0xc7a50160
    .word 0xc7a40150
    .word 0xc6630000
    .word 0xc6e20000
    .word 0xc6a10000
    .word 0xc6800000
    .word 0x3c02bf80
    mul.s $f4,$f5,$f4
    mul.s $f2,$f3,$f2
    adda.s $f4,$f2
    madd.s $f12,$f1,$f0
    mtc1 v0,$f0
    nop
    c.lt.s $f12,$f0
    nop
    bc1f L164550
    .word 0x3c023f80
    b L16456c
    mov.s $f12,$f0
    .word 0x3c023f80
L164550:
    mtc1 v0,$f0
    nop
    c.le.s $f12,$f0
    nop
    bc1t L16456c
    nop
    mov.s $f12,$f0
L16456c:
    jal func_0011a620
    nop
    .word 0x3c024265
    ori v0,v0,0x2ee1
    mtc1 v0,$f2
    mtc1 zero,$f1
    nop
    mul.s $f22,$f2,$f0
    c.lt.s $f22,$f1
    nop
    bc1f L1645a4
    .word 0x3c0242b4
    mov.s $f22,$f1
    .word 0x3c0242b4
L1645a4:
    mtc1 v0,$f0
    nop
    c.lt.s $f22,$f0
    nop
    bc1f L164610
    addiu v1,sp,192
    .word 0xc6e40000
    .word 0xc6a10000
    .word 0xc6820000
    .word 0xc6650000
    .word 0xc7a30160
    .word 0xc7a60150
    addiu a0,sp,368
    mula.s $f4,$f1
    .word 0x70802e28
    msub.s $f0,$f2,$f5
    .word 0xe7a00170
    mula.s $f2,$f3
    msub.s $f0,$f6,$f1
    mula.s $f6,$f5
    .word 0xe7a00174
    msub.s $f0,$f4,$f3
    jal func_001ce160
    .word 0xe7a00178
    b L164630
    .word 0xc6e40000
    addiu v1,sp,192
L164610:
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    addiu v0,sp,368
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0xc6e40000
L164630:
    .word 0xc7a10178
    .word 0xc6820000
    .word 0xc7a50174
    .word 0xc7a30170
    .word 0xc7a60150
    addiu a0,sp,384
    mula.s $f4,$f1
    addiu s7,sp,388
    msub.s $f0,$f2,$f5
    .word 0xe7a00180
    mula.s $f2,$f3
    msub.s $f0,$f6,$f1
    addiu s4,sp,392
    mula.s $f6,$f5
    .word 0xe6e00000
    msub.s $f0,$f4,$f3
    .word 0xe6800000
    jal func_001ce160
    .word 0x70802e28
    .word 0xc6630000
    .word 0xc6e20000
    .word 0x8ec20010
    .word 0xc7a50160
    .word 0xc7a40180
    .word 0xc6a10000
    .word 0xc6800000
    mul.s $f2,$f3,$f2
    andi v0,v0,0x20
    mul.s $f3,$f5,$f4
    adda.s $f3,$f2
    beqz v0,L164704
    madd.s $f1,$f1,$f0
    mtc1 zero,$f0
    nop
    c.le.s $f1,$f0
    nop
    bc1t L1646dc
    nop
    .word 0x3c017000
    .word 0xc4213fa8
    .word 0xc6c000e4
    b L164780
    mul.s $f21,$f0,$f1
L1646dc:
    c.lt.s $f1,$f0
    nop
    bc1f L164784
    neg.s $f1,$f22
    .word 0xc6c100e4
    .word 0x3c017000
    .word 0xc4203fa8
    neg.s $f1,$f1
    b L164780
    mul.s $f21,$f1,$f0
L164704:
    mtc1 zero,$f2
    nop
    c.le.s $f22,$f2
    nop
    bc1t L164720
    nop
    mov.s $f2,$f22
L164720:
    mtc1 zero,$f0
    nop
    c.le.s $f1,$f0
    nop
    bc1t L164754
    nop
    .word 0x3c024000
    mtc1 v0,$f1
    .word 0x3c017000
    .word 0xc4203fa8
    mul.s $f1,$f1,$f2
    b L164780
    mul.s $f21,$f1,$f0
L164754:
    c.lt.s $f1,$f0
    nop
    bc1f L164780
    nop
    .word 0x3c024000
    mtc1 v0,$f1
    .word 0x3c017000
    mul.s $f1,$f1,$f2
    .word 0xc4203fa8
    neg.s $f1,$f1
    mul.s $f21,$f1,$f0
L164780:
    neg.s $f1,$f22
L164784:
    c.lt.s $f21,$f1
    nop
    bc1f L1647c0
    nop
    mtc1 zero,$f0
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L1647b4
    mov.s $f21,$f1
    b L1647b8
    addiu v0,zero,-1
L1647b4:
    .word 0x70001628
L1647b8:
    b L164800
    nop
L1647c0:
    c.le.s $f21,$f22
    nop
    bc1t L164800
    .word 0x70001628
    mtc1 zero,$f0
    nop
    c.eq.s $f22,$f0
    nop
    bc1t L1647f0
    mov.s $f21,$f22
    b L1647f4
    addiu v0,zero,1
L1647f0:
    .word 0x70001628
L1647f4:
    b L164800
    nop
    .word 0x70001628
L164800:
    beqz v0,L164818
    nop
    .word 0x8ec30010
    addiu v0,zero,-33
    and v0,v1,v0
    .word 0xaec20010
L164818:
    mtc1 zero,$f0
    nop
    c.eq.s $f0,$f21
    nop
    bc1t L1648c0
    nop
    .word 0x3c027000
    addiu a1,sp,368
    mov.s $f12,$f21
    ori a0,v0,0x3ed0
    jal func_001c7610
    .word 0x70003628
    .word 0xc6c10094
    .word 0xc7a000f0
    addiu a0,s6,148
    .word 0x3c027000
    addiu a2,zero,1
    sub.s $f0,$f1,$f0
    .word 0x70802e28
    ori a3,v0,0x3ed0
    .word 0xe6c00094
    .word 0xc6c10098
    .word 0xc6200000
    sub.s $f0,$f1,$f0
    .word 0xe6c00098
    .word 0xc6c1009c
    .word 0xc6400000
    sub.s $f0,$f1,$f0
    jal func_001ce410
    .word 0xe6c0009c
    .word 0xc6c10094
    .word 0xc7a000f0
    add.s $f0,$f1,$f0
    .word 0xe6c00094
    .word 0xc6200000
    .word 0xc6c10098
    add.s $f0,$f1,$f0
    .word 0xe6c00098
    .word 0xc6400000
    .word 0xc6c1009c
    add.s $f0,$f1,$f0
    .word 0xe6c0009c
L1648c0:
    .word 0x3c023fc0
L1648c4:
    mtc1 v0,$f0
    nop
    c.lt.s $f20,$f0
    nop
    bc1f L1648f4
    nop
    .word 0xc6c20094
    .word 0xc6c10098
    .word 0xc6c0009c
    .word 0xe6020030
    .word 0xe6010034
    .word 0xe6000038
L1648f4:
    .word 0xc6c20094
    .word 0xc6c10098
    .word 0xc6c0009c
    addiu v0,sp,240
    .word 0xe6020030
    .word 0xe6010034
    .word 0xe6000038
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6c200a0
    .word 0xe6c100a4
    .word 0xe6c000a8
    .word 0x8ec20010
    andi v0,v0,0x10
    beqz v0,L164950
    addiu v0,sp,192
    .word 0xaec000ac
    .word 0x3c023f80
    .word 0xaec200b0
    b L164968
    .word 0xaec000b4
    addiu v0,sp,192
L164950:
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6c200ac
    .word 0xe6c100b0
    .word 0xe6c000b4
L164968:
    .word 0x3c023f59
    ori v0,v0,0x999a
    .word 0xafa20140
    .word 0xc6c10078
    .word 0x3c023f00
    mtc1 v0,$f2
    .word 0x3c023c8e
    ori v0,v0,0xfa35
    mul.s $f1,$f2,$f1
    mtc1 v0,$f0
    jal func_0011a488
    mul.s $f12,$f0,$f1
    .word 0xc7a10140
    .word 0x3c020016
    addiu v1,v0,27824
    .word 0x3c020016
    addiu v0,v0,28080
    div.s $f0,$f1,$f0
    .word 0x3c017000
    addiu a2,s0,48
    addiu a3,sp,320
    addiu t0,zero,3
    addiu t1,sp,288
    addiu t2,sp,304
    .word 0x72c02e28
    .word 0xe7a00140
    .word 0xe7a00148
    .word 0xe7a00144
    .word 0xffa30000
    .word 0xffa20008
    .word 0x8c243fd8
    jal func_0017b870
    .word 0x70005e28
    beqz v0,L164a24
    nop
    .word 0xc6010030
    .word 0xc7a00120
    add.s $f0,$f1,$f0
    .word 0xe6000030
    .word 0xc6010034
    .word 0xc7a00124
    add.s $f0,$f1,$f0
    .word 0xe6000034
    .word 0xc6010038
    .word 0xc7a00128
    add.s $f0,$f1,$f0
    .word 0xe6000038
L164a24:
    .word 0xc6010030
    .word 0xc7a000f0
    sub.s $f0,$f1,$f0
    .word 0xe6c00180
    .word 0xc6010034
    .word 0xc7a000f4
    sub.s $f0,$f1,$f0
    .word 0xe6c00184
    .word 0xc6010038
    .word 0xc7a000f8
    sub.s $f0,$f1,$f0
    .word 0xe6c00188
    .word 0x7bbf00a0
    .word 0x7bb70090
    .word 0x7bb60080
    .word 0x7bb50070
    .word 0x7bb40060
    .word 0x7bb30050
    .word 0x7bb20040
    .word 0x7bb10030
    .word 0x7bb00020
    .word 0xc7b60018
    .word 0xc7b50014
    .word 0xc7b40010
    jr ra
    addiu sp,sp,400
}
