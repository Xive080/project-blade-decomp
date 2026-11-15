extern void func_0012bcc0(void);
extern void func_00137350(void);
extern void func_00145b80(void);
extern void func_00146d40(void);
extern void func_00147300(void);
extern void func_0015d600(void);
extern void func_0015d760(void);
extern void func_00161d20(void);
extern void func_001c3b70(void);
extern void func_001c3b80(void);
extern void func_001c7710(void);
extern void func_001c7c70(void);
extern void func_001ce160(void);
extern void func_001ce3f0(void);
extern void func_001ce410(void);
asm void func_0013a0c0(void) {
.set noreorder
.set noat
    addiu sp,sp,-688
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
    .word 0x7080b628
    .word 0x8c840008
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    .word 0x70a0ae28
    jal func_001c3b70
    .word 0x70402628
    .word 0x7040f628
    .word 0x8ea2000c
    .word 0x8c420018
    jalr ra,v0
    .word 0x72a02628
    jal func_001c3b70
    .word 0x70402628
    addiu a0,sp,160
    jal func_001c7710
    .word 0x70402e28
    addiu v0,sp,160
    .word 0x78480000
    .word 0x78470010
    .word 0x78430020
    addiu a0,sp,224
    addiu a2,zero,1
    .word 0x73c02e28
    .word 0x78420030
    .word 0x7c880000
    .word 0x7c870010
    .word 0x7c830020
    jal func_001c7c70
    .word 0x7c820030
    .word 0x8ec2000c
    .word 0x44800800
    .word 0xc440000c
    c.eq.s $f1,$f0
    nop
    bc1f L13a1ac
    addiu v1,v0,12
    .word 0xc4400010
    c.eq.s $f1,$f0
    nop
    bc1f L13a1ac
    nop
    .word 0xc4400014
    c.eq.s $f1,$f0
    nop
    .word 0x4503000f
    addiu v1,sp,256
L13a1ac:
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    addiu a0,sp,432
    addiu a2,zero,1
    addiu a3,sp,160
    .word 0xe4820000
    .word 0xe4810004
    .word 0x70802e28
    jal func_001ce410
    .word 0xe4800008
    b L13a204
    .word 0x8ea30000
    addiu v1,sp,256
L13a1e4:
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    addiu v0,sp,432
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0x8ea30000
L13a204:
    .word 0x3c020004
    bne v1,v0,L13a9a8
    .word 0x3c020008
    addiu s8,sp,272
    .word 0x70008628
    addiu a2,zero,1
L13a21c:
    .word 0x72002e28
    jal func_00161d20
    .word 0x72a02628
    .word 0x8ec40008
    .word 0x70408628
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
    beqz s6,L13a260
    .word 0x70409628
    beqz s0,L13a264
    .word 0x70001628
    b L13a270
    .word 0x3c027000
L13a260:
    .word 0x70001628
L13a264:
    b L13a960
    nop
    .word 0x3c027000
L13a270:
    ori v0,v0,0x3fb0
    .word 0xc6c1011c
    .word 0xc4400000
    c.le.s $f1,$f0
    nop
    bc1t L13a294
    nop
    b L13a960
    .word 0x70001628
L13a294:
    .word 0x8e02000c
    andi v0,v0,0x1
    beqz v0,L13a95c
    .word 0x70001628
    addiu a1,sp,432
    jal func_001ce160
    addiu a0,sp,496
    addiu a2,sp,660
    addiu a3,sp,652
    addiu t0,sp,648
    .word 0x72002628
    jal func_00145b80
    .word 0x73c02e28
    .word 0xc7a00294
    addiu a1,sp,656
    addiu a2,sp,528
    addiu a3,sp,512
    addiu t0,sp,652
    .word 0x72002628
    jal func_00146d40
    .word 0xe7a00290
    .word 0xc7a00200
    .word 0x44800800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L13a348
    nop
    .word 0xc7a00204
    c.eq.s $f1,$f0
    nop
    bc1f L13a348
    nop
    .word 0xc7a00208
    c.eq.s $f1,$f0
    nop
    bc1f L13a348
    nop
    addiu a0,sp,496
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,512
    .word 0xfc620000
    .word 0xe4600008
    nop
L13a348:
    .word 0xc7a20114
    .word 0xc7a10214
    .word 0x3c02bf00
    .word 0x44820000
    nop
    sub.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1t L13a958
    nop
    mul.s $f0,$f1,$f1
    .word 0x8ed10008
    .word 0xc7c40000
    .word 0xc7a30210
    .word 0xc7a20118
    .word 0xc7a10218
    addiu v0,zero,4096
    .word 0x8e23003c
    sub.s $f3,$f4,$f3
    sub.s $f2,$f2,$f1
    mul.s $f1,$f3,$f3
    adda.s $f1,$f0
    bne v1,v0,L13a8cc
    madd.s $f1,$f2,$f2
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L13a958
    nop
    .word 0xc7a50200
    .word 0xc7a001f0
    addiu s7,sp,516
    .word 0xc7a201f4
    .word 0xc6e30000
    addiu s4,sp,520
    mul.s $f4,$f5,$f0
    .word 0xc6810000
    mul.s $f2,$f3,$f2
    .word 0xc7a001f8
    adda.s $f4,$f2
    madd.s $f1,$f1,$f0
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L13a418
    addiu s3,zero,1
    b L13a418
    .word 0x70009e28
    addiu s3,zero,1
L13a418:
    bnez s3,L13a43c
    nop
    .word 0xc7a00294
    .word 0x3c023f80
    .word 0x44820800
    nop
    add.s $f0,$f1,$f0
    b L13a478
    .word 0xe7a00290
L13a43c:
    .word 0xc7a10294
    .word 0x3c023f80
    .word 0x44820000
    .word 0x3c02bf80
    .word 0x44821000
    sub.s $f0,$f1,$f0
    .word 0xe7a00290
    mul.s $f0,$f2,$f5
    .word 0xe7a00200
    .word 0xc6e00000
    mul.s $f0,$f2,$f0
    .word 0xe6e00000
    .word 0xc6800000
    mul.s $f0,$f2,$f0
    .word 0xe6800000
L13a478:
    addiu a1,sp,656
    addiu a2,sp,480
    addiu a3,sp,464
    addiu t0,sp,652
    jal func_00146d40
    .word 0x72002628
    .word 0xc7a001d0
    .word 0x44800800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L13a4f0
    nop
    .word 0xc7a001d4
    c.eq.s $f1,$f0
    nop
    bc1f L13a4f0
    nop
    .word 0xc7a001d8
    c.eq.s $f1,$f0
    nop
    bc1f L13a4f0
    nop
    addiu a0,sp,496
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,464
    .word 0xfc620000
    .word 0xe4600008
    nop
L13a4f0:
    .word 0xc7a60200
    .word 0xc7a501d0
    .word 0xc6e40000
    .word 0xc7a301d4
    .word 0xc6820000
    .word 0xc7a101d8
    .word 0x44800000
    mul.s $f5,$f6,$f5
    mul.s $f3,$f4,$f3
    adda.s $f5,$f3
    madd.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    .word 0x45030004
    neg.s $f1,$f1
    b L13a53c
    .word 0x3c023f24
    neg.s $f1,$f1
L13a538:
    .word 0x3c023f24
L13a53c:
    ori v0,v0,0x8dbb
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L13a958
    nop
    addiu a1,sp,644
    addiu a2,sp,640
    jal func_00147300
    .word 0x72002628
    .word 0x8e03000c
    .word 0x3c028000
    and v0,v1,v0
    beqz v0,L13a58c
    nop
    .word 0xc7a10280
    .word 0xc7a00284
    b L13a5b0
    sub.s $f1,$f1,$f0
L13a58c:
    bnez s3,L13a5a4
    nop
    .word 0xc7a10280
    .word 0xc7a00294
    b L13a5b0
    sub.s $f1,$f1,$f0
L13a5a4:
    .word 0xc7a10294
    .word 0xc7a00284
    sub.s $f1,$f1,$f0
L13a5b0:
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L13a958
    nop
    beqz s5,L13a61c
    addiu a0,s6,208
    .word 0x8ea2000c
    .word 0x8c420018
    jalr ra,v0
    .word 0x72a02628
    jal func_001c3b70
    .word 0x70402628
    addiu a0,sp,528
    .word 0x70408e28
    addiu a2,zero,1
    .word 0x70802e28
    jal func_001ce3f0
    .word 0x72203e28
    addiu a0,sp,512
    addiu a2,zero,1
    .word 0x72203e28
    jal func_001ce410
    .word 0x70802e28
    addiu a0,s6,208
L13a61c:
    addiu a1,sp,512
    jal func_0015d760
    .word 0x70003628
    addiu v0,sp,528
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    addiu a0,sp,448
    .word 0x70802e28
    .word 0xe6c20100
    .word 0xe6c10104
    .word 0xe6c00108
    .word 0xc6c700d0
    .word 0xc6480010
    .word 0xc6c300d4
    .word 0xc6440014
    .word 0xc6460018
    .word 0xc6c500d8
    .word 0xc6c000e0
    mul.s $f2,$f7,$f8
    mul.s $f1,$f3,$f4
    adda.s $f2,$f1
    madd.s $f2,$f5,$f6
    mul.s $f1,$f7,$f2
    sub.s $f1,$f8,$f1
    add.s $f0,$f0,$f1
    mul.s $f1,$f3,$f2
    .word 0xe7a001c0
    .word 0xc6c000e4
    sub.s $f1,$f4,$f1
    add.s $f0,$f0,$f1
    mul.s $f1,$f5,$f2
    .word 0xe7a001c4
    .word 0xc6c000e8
    sub.s $f1,$f6,$f1
    add.s $f0,$f0,$f1
    jal func_001ce160
    .word 0xe7a001c8
    addiu a0,s6,208
    addiu a1,sp,448
    jal func_0015d600
    addiu a2,sp,512
    .word 0x8ec20008
    .word 0x3401ead0
    addiu a2,s6,208
    addiu a0,zero,8
    addu a1,v0,at
L13a6d8:
    .word 0x8cc30000
    .word 0x8cc20004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu a2,a2,8
    bgtz a0,L13a6d8
    addiu a1,a1,8
    .word 0xc7a00200
    .word 0x8ec3000c
    addiu v0,zero,7
    .word 0xe460000c
    .word 0xc6e00000
    .word 0x8ec3000c
    .word 0xe4600010
    .word 0xc6800000
    .word 0x8ec3000c
    .word 0xe4600014
    .word 0x8ec30148
    beq v1,v0,L13a738
    nop
    addiu v0,zero,12
    bne v1,v0,L13a760
    addiu v0,zero,8
L13a738:
    .word 0xc7ac0294
    addiu t0,zero,5
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13a8c4
    addiu v0,zero,1
    addiu v0,zero,8
L13a760:
    beq v1,v0,L13a778
    nop
    addiu v0,zero,13
    bne v1,v0,L13a79c
    nop
    nop
L13a778:
    .word 0xc7ac0294
    addiu t0,zero,6
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13a8c0
    nop
L13a79c:
    .word 0x3c020030
    addiu v1,v0,27648
    .word 0x8ec40000
    .word 0x3c023f00
    .word 0x44820800
    sll v0,a0,0x3
    subu v0,v0,a0
    sll v0,v0,0x6
    addu v0,v1,v0
    .word 0xc4400150
    c.le.s $f0,$f1
    nop
    bc1t L13a7f8
    nop
    .word 0xc7ac0294
    addiu t0,zero,3
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13a8c0
    nop
L13a7f8:
    .word 0xc4400154
    c.le.s $f0,$f1
    nop
    bc1t L13a830
    nop
    .word 0xc7ac0294
    addiu t0,zero,4
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13a8c0
    nop
L13a830:
    .word 0xc4400158
    c.le.s $f0,$f1
    nop
    bc1t L13a868
    nop
    .word 0xc7ac0294
    addiu t0,zero,2
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13a8c0
    nop
L13a868:
    .word 0xc440015c
    c.le.s $f0,$f1
    nop
    bc1t L13a8a0
    nop
    .word 0xc7ac0294
    addiu t0,zero,1
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13a8c0
    nop
L13a8a0:
    .word 0xc7ac0294
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    .word 0x72003628
    jal func_00137350
    .word 0x70004628
    nop
L13a8c0:
    addiu v0,zero,1
L13a8c4:
    b L13a960
    nop
L13a8cc:
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L13a958
    nop
    .word 0x3c050004
    beq v1,a1,L13a93c
    .word 0x3c017000
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L13a938
    nop
    .word 0x8e22000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72202628
    beqz v0,L13a938
    nop
    .word 0x8e22000c
    .word 0x72202628
    .word 0x3c050004
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    nop
L13a938:
    .word 0x3c017000
L13a93c:
    .word 0xc4213fb0
    .word 0x3c023f40
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    .word 0xe6c0011c
    nop
L13a958:
    .word 0x70001628
L13a95c:
    nop
L13a960:
    beqz v0,L13a994
    nop
    .word 0x8ea2000c
    addiu a2,zero,2
    .word 0x72a02628
    .word 0x72c02e28
    .word 0x8c420020
    jalr ra,v0
    .word 0x70003e28
    beqz v0,L13a994
    nop
    b L13b1b4
    addiu v0,zero,1
L13a994:
    bnez s0,L13a21c
    addiu a2,zero,1
    b L13b1b4
    .word 0x70001628
    .word 0x3c020008
L13a9a8:
    bne v1,v0,L13b1b0
    nop
    .word 0x70008628
    addiu a2,zero,1
L13a9b8:
    addiu a3,sp,288
    .word 0x72002e28
    .word 0x72a02628
    jal func_0012bcc0
    .word 0xafa00120
    .word 0x8fa40120
    beqz a0,L13aa28
    .word 0x70408628
    jal func_001c3b80
    nop
    addiu a0,sp,304
    jal func_001c7710
    .word 0x70402e28
    addiu v0,sp,304
    .word 0x78480000
    .word 0x78470010
    .word 0x78430020
    addiu a0,sp,368
    addiu a2,zero,1
    .word 0x73c02e28
    .word 0x78420030
    .word 0x7c880000
    .word 0x7c870010
    .word 0x7c830020
    jal func_001c7c70
    .word 0x7c820030
    b L13aa30
    addiu s1,sp,368
L13aa28:
    addiu s1,sp,224
    nop
L13aa30:
    .word 0x8ec40008
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
    beqz s6,L13aa68
    .word 0x70409628
    beqz s0,L13aa6c
    .word 0x70001628
    bnez s1,L13aa78
    .word 0x3c027000
    nop
L13aa68:
    .word 0x70001628
L13aa6c:
    b L13b168
    nop
    .word 0x3c027000
L13aa78:
    ori v0,v0,0x3fb0
    .word 0xc6c1011c
    .word 0xc4400000
    c.le.s $f1,$f0
    nop
    bc1t L13aa9c
    nop
    b L13b168
    .word 0x70001628
L13aa9c:
    .word 0x8e02000c
    andi v0,v0,0x1
    beqz v0,L13b164
    .word 0x70001628
    addiu a1,sp,432
    jal func_001ce160
    addiu a0,sp,592
    addiu a1,s1,48
    addiu a2,sp,684
    addiu a3,sp,676
    addiu t0,sp,672
    jal func_00145b80
    .word 0x72002628
    .word 0xc7a002ac
    addiu a1,sp,680
    addiu a2,sp,624
    addiu a3,sp,608
    addiu t0,sp,676
    .word 0x72002628
    jal func_00146d40
    .word 0xe7a002a8
    .word 0xc7a00260
    .word 0x44800800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L13ab50
    nop
    .word 0xc7a00264
    c.eq.s $f1,$f0
    nop
    bc1f L13ab50
    nop
    .word 0xc7a00268
    c.eq.s $f1,$f0
    nop
    bc1f L13ab50
    nop
    addiu a0,sp,592
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,608
    .word 0xfc620000
    .word 0xe4600008
    nop
L13ab50:
    .word 0xc6220034
    .word 0xc7a10274
    .word 0x3c02bf00
    .word 0x44820000
    nop
    sub.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1t L13b160
    nop
    mul.s $f0,$f1,$f1
    .word 0xc6240030
    .word 0xc6220038
    .word 0xc7a30270
    addiu v0,zero,4096
    .word 0xc7a10278
    .word 0x8ed10008
    sub.s $f3,$f4,$f3
    sub.s $f2,$f2,$f1
    .word 0x8e23003c
    mul.s $f1,$f3,$f3
    adda.s $f1,$f0
    bne v1,v0,L13b0d4
    madd.s $f1,$f2,$f2
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L13b160
    nop
    .word 0xc7a50260
    .word 0xc7a00250
    addiu s7,sp,612
    .word 0xc7a20254
    .word 0xc6e30000
    addiu s4,sp,616
    mul.s $f4,$f5,$f0
    .word 0xc6810000
    mul.s $f2,$f3,$f2
    .word 0xc7a00258
    adda.s $f4,$f2
    madd.s $f1,$f1,$f0
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L13ac20
    addiu s3,zero,1
    b L13ac20
    .word 0x70009e28
    addiu s3,zero,1
L13ac20:
    bnez s3,L13ac44
    nop
    .word 0xc7a002ac
    .word 0x3c023f80
    .word 0x44820800
    nop
    add.s $f0,$f1,$f0
    b L13ac80
    .word 0xe7a002a8
L13ac44:
    .word 0xc7a102ac
    .word 0x3c023f80
    .word 0x44820000
    .word 0x3c02bf80
    .word 0x44821000
    sub.s $f0,$f1,$f0
    .word 0xe7a002a8
    mul.s $f0,$f2,$f5
    .word 0xe7a00260
    .word 0xc6e00000
    mul.s $f0,$f2,$f0
    .word 0xe6e00000
    .word 0xc6800000
    mul.s $f0,$f2,$f0
    .word 0xe6800000
L13ac80:
    addiu a1,sp,680
    addiu a2,sp,576
    addiu a3,sp,560
    addiu t0,sp,676
    jal func_00146d40
    .word 0x72002628
    .word 0xc7a00230
    .word 0x44800800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L13acf8
    nop
    .word 0xc7a00234
    c.eq.s $f1,$f0
    nop
    bc1f L13acf8
    nop
    .word 0xc7a00238
    c.eq.s $f1,$f0
    nop
    bc1f L13acf8
    nop
    addiu a0,sp,592
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,560
    .word 0xfc620000
    .word 0xe4600008
    nop
L13acf8:
    .word 0xc7a60260
    .word 0xc7a50230
    .word 0xc6e40000
    .word 0xc7a30234
    .word 0xc6820000
    .word 0xc7a10238
    .word 0x44800000
    mul.s $f5,$f6,$f5
    mul.s $f3,$f4,$f3
    adda.s $f5,$f3
    madd.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    .word 0x45030004
    neg.s $f1,$f1
    b L13ad44
    .word 0x3c023f24
    neg.s $f1,$f1
L13ad40:
    .word 0x3c023f24
L13ad44:
    ori v0,v0,0x8dbb
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L13b160
    nop
    addiu a1,sp,668
    addiu a2,sp,664
    jal func_00147300
    .word 0x72002628
    .word 0x8e03000c
    .word 0x3c028000
    and v0,v1,v0
    beqz v0,L13ad94
    nop
    .word 0xc7a10298
    .word 0xc7a0029c
    b L13adb8
    sub.s $f1,$f1,$f0
L13ad94:
    bnez s3,L13adac
    nop
    .word 0xc7a10298
    .word 0xc7a002ac
    b L13adb8
    sub.s $f1,$f1,$f0
L13adac:
    .word 0xc7a102ac
    .word 0xc7a0029c
    sub.s $f1,$f1,$f0
L13adb8:
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L13b160
    nop
    beqz s5,L13ae24
    addiu a0,s6,208
    .word 0x8ea2000c
    .word 0x8c420018
    jalr ra,v0
    .word 0x72a02628
    jal func_001c3b70
    .word 0x70402628
    addiu a0,sp,624
    .word 0x70408e28
    addiu a2,zero,1
    .word 0x70802e28
    jal func_001ce3f0
    .word 0x72203e28
    addiu a0,sp,608
    addiu a2,zero,1
    .word 0x72203e28
    jal func_001ce410
    .word 0x70802e28
    addiu a0,s6,208
L13ae24:
    addiu a1,sp,608
    jal func_0015d760
    .word 0x70003628
    addiu v0,sp,624
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    addiu a0,sp,544
    .word 0x70802e28
    .word 0xe6c20100
    .word 0xe6c10104
    .word 0xe6c00108
    .word 0xc6c700d0
    .word 0xc6480010
    .word 0xc6c300d4
    .word 0xc6440014
    .word 0xc6460018
    .word 0xc6c500d8
    .word 0xc6c000e0
    mul.s $f2,$f7,$f8
    mul.s $f1,$f3,$f4
    adda.s $f2,$f1
    madd.s $f2,$f5,$f6
    mul.s $f1,$f7,$f2
    sub.s $f1,$f8,$f1
    add.s $f0,$f0,$f1
    mul.s $f1,$f3,$f2
    .word 0xe7a00220
    .word 0xc6c000e4
    sub.s $f1,$f4,$f1
    add.s $f0,$f0,$f1
    mul.s $f1,$f5,$f2
    .word 0xe7a00224
    .word 0xc6c000e8
    sub.s $f1,$f6,$f1
    add.s $f0,$f0,$f1
    jal func_001ce160
    .word 0xe7a00228
    addiu a0,s6,208
    addiu a1,sp,544
    jal func_0015d600
    addiu a2,sp,608
    .word 0x8ec20008
    .word 0x3401ead0
    addiu a2,s6,208
    addiu a0,zero,8
    addu a1,v0,at
L13aee0:
    .word 0x8cc30000
    .word 0x8cc20004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu a2,a2,8
    bgtz a0,L13aee0
    addiu a1,a1,8
    .word 0xc7a00260
    .word 0x8ec3000c
    addiu v0,zero,7
    .word 0xe460000c
    .word 0xc6e00000
    .word 0x8ec3000c
    .word 0xe4600010
    .word 0xc6800000
    .word 0x8ec3000c
    .word 0xe4600014
    .word 0x8ec30148
    beq v1,v0,L13af40
    nop
    addiu v0,zero,12
    bne v1,v0,L13af68
    addiu v0,zero,8
L13af40:
    .word 0xc7ac02ac
    addiu t0,zero,5
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13b0cc
    addiu v0,zero,1
    addiu v0,zero,8
L13af68:
    beq v1,v0,L13af80
    nop
    addiu v0,zero,13
    bne v1,v0,L13afa4
    nop
    nop
L13af80:
    .word 0xc7ac02ac
    addiu t0,zero,6
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13b0c8
    nop
L13afa4:
    .word 0x3c020030
    addiu v1,v0,27648
    .word 0x8ec40000
    .word 0x3c023f00
    .word 0x44820800
    sll v0,a0,0x3
    subu v0,v0,a0
    sll v0,v0,0x6
    addu v0,v1,v0
    .word 0xc4400150
    c.le.s $f0,$f1
    nop
    bc1t L13b000
    nop
    .word 0xc7ac02ac
    addiu t0,zero,3
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13b0c8
    nop
L13b000:
    .word 0xc4400154
    c.le.s $f0,$f1
    nop
    bc1t L13b038
    nop
    .word 0xc7ac02ac
    addiu t0,zero,4
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13b0c8
    nop
L13b038:
    .word 0xc4400158
    c.le.s $f0,$f1
    nop
    bc1t L13b070
    nop
    .word 0xc7ac02ac
    addiu t0,zero,2
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13b0c8
    nop
L13b070:
    .word 0xc440015c
    c.le.s $f0,$f1
    nop
    bc1t L13b0a8
    nop
    .word 0xc7ac02ac
    addiu t0,zero,1
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    jal func_00137350
    .word 0x72003628
    b L13b0c8
    nop
L13b0a8:
    .word 0xc7ac02ac
    .word 0x72603e28
    .word 0x72c02628
    .word 0x72a02e28
    .word 0x72003628
    jal func_00137350
    .word 0x70004628
    nop
L13b0c8:
    addiu v0,zero,1
L13b0cc:
    b L13b168
    nop
L13b0d4:
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L13b160
    nop
    .word 0x3c050004
    beq v1,a1,L13b144
    .word 0x3c017000
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L13b140
    nop
    .word 0x8e22000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72202628
    beqz v0,L13b140
    nop
    .word 0x8e22000c
    .word 0x72202628
    .word 0x3c050004
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    nop
L13b140:
    .word 0x3c017000
L13b144:
    .word 0xc4213fb0
    .word 0x3c023f40
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    .word 0xe6c0011c
    nop
L13b160:
    .word 0x70001628
L13b164:
    nop
L13b168:
    beqz v0,L13b1a4
    nop
    .word 0x8ea2000c
    addiu a2,zero,2
    .word 0x72a02628
    .word 0x72c02e28
    .word 0x8c420020
    jalr ra,v0
    .word 0x70003e28
    beqz v0,L13b1a4
    nop
    .word 0x8fa30120
    addiu v0,zero,1
    b L13b1b4
    .word 0xaec3012c
L13b1a4:
    bnez s0,L13a9b8
    addiu a2,zero,1
    nop
L13b1b0:
    .word 0x70001628
L13b1b4:
    .word 0x7bbf0090
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
    addiu sp,sp,688
}


