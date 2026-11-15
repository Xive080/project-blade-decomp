extern void func_00149e60(void);
extern void func_001c3b70(void);
extern void func_001c3b80(void);
extern void func_001ce3f0(void);
extern void func_001c7610(void);
extern void func_001c7320(void);
extern void func_001ce160(void);
extern void func_0011a620(void);
extern void func_001ce410(void);
asm void f(void) {
    .set noreorder
    .set noat
    .word 0x27bdff10
    .word 0x7fbf0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b7000c
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0x7080b628
    jal func_00149e60
    .word 0xe7b40000
    .word 0x8c420018
    jalr ra,v0
    .word 0x8ec40008
    beqzl v0,L134f8c
    addiu v0,zero,1
    jal func_001c3b70
    .word 0x70402628
    .word 0x8ec50000
    .word 0x70408628
    .word 0x3c020030
    .word 0x24436d54
    .word 0x3c020030
    sll a0,a1,0x3
    subu a0,a0,a1
    sll a0,a0,0x6
    .word 0x24426d50
    addu v1,v1,a0
    addu v0,v0,a0
    .word 0xc4610000
    .word 0xc4400000
    .word 0x70009e28
    jal func_00149e60
    sub.s $f22,$f1,$f0
    .word 0x8c420028
    .word 0x8ec40008
    jalr ra,v0
    addiu a1,zero,2
    .word 0xc6010030
    .word 0xc4400030
    .word 0x27a300a0
    sub.s $f0,$f1,$f0
    .word 0xe6c00100
    .word 0xc6010034
    .word 0xc4400034
    sub.s $f0,$f1,$f0
    .word 0xe6c00104
    .word 0xc4400038
    .word 0xc6010038
    sub.s $f0,$f1,$f0
    .word 0xe6c00108
    .word 0xc6c200b8
    .word 0xc6c100bc
    .word 0xc6c000c0
    .word 0xe4620000
    .word 0xe4610004
    .word 0xe4600008
    .word 0x8ec40070
    beqz a0,L134198
    .word 0x3c027000
    .word 0x8ec20074
    .word 0x8c42000c
    andi v0,v0,0x20
    beqz v0,L134168
    nop
    jal func_001c3b80
    .word 0x8ec4012c
    b L134184
    .word 0x27a400a0
L134168:
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
    .word 0x27a400a0
L134184:
    addiu a2,zero,1
    .word 0x70403e28
    jal func_001ce3f0
    .word 0x70802e28
    .word 0x3c027000
L134198:
    ori v0,v0,0x3fa8
    .word 0xc4410000
    .word 0xc6c000a0
    .word 0x8ec20008
    .word 0x8c42051c
    bnez v0,L1342a0
    mul.s $f20,$f0,$f1
    .word 0x8ec40098
    bnez a0,L1341f0
    addiu v1,zero,1
    .word 0xc6c3009c
    .word 0x3c0343b4
    .word 0x44831000
    nop
    div.s $f1,$f3,$f2
    .word 0x46000864
    cvt.s.w $f1,$f1
    mul.s $f1,$f2,$f1
    sub.s $f1,$f3,$f1
    b L134388
    sub.s $f21,$f2,$f1
    addiu v1,zero,1
L1341f0:
    bne a0,v1,L13422c
    addiu v1,zero,2
    .word 0xc6c4009c
    .word 0x3c0343b4
    .word 0x44831800
    .word 0x3c0342b4
    .word 0x44830800
    div.s $f2,$f4,$f3
    .word 0x460010a4
    cvt.s.w $f2,$f2
    mul.s $f2,$f3,$f2
    sub.s $f2,$f4,$f2
    b L134388
    sub.s $f21,$f1,$f2
    addiu v1,zero,2
L13422c:
    bne a0,v1,L134268
    addiu v1,zero,3
    .word 0xc6c4009c
    .word 0x3c0343b4
    .word 0x44831800
    .word 0x3c034334
    .word 0x44830800
    div.s $f2,$f4,$f3
    .word 0x460010a4
    cvt.s.w $f2,$f2
    mul.s $f2,$f3,$f2
    sub.s $f2,$f4,$f2
    b L134388
    sub.s $f21,$f1,$f2
    addiu v1,zero,3
L134268:
    bne a0,v1,L13438c
    .word 0x3c0343b4
    .word 0xc6c4009c
    .word 0x3c0343b4
    .word 0x44831800
    .word 0x3c034387
    .word 0x44830800
    div.s $f2,$f4,$f3
    .word 0x460010a4
    cvt.s.w $f2,$f2
    mul.s $f2,$f3,$f2
    sub.s $f2,$f4,$f2
    b L134388
    sub.s $f21,$f1,$f2
L1342a0:
    .word 0x8ec40098
    bnez a0,L1342dc
    addiu v1,zero,1
    .word 0xc6c3009c
    .word 0x3c0343b4
    .word 0x44831000
    nop
    div.s $f1,$f3,$f2
    .word 0x46000864
    cvt.s.w $f1,$f1
    mul.s $f1,$f2,$f1
    sub.s $f1,$f3,$f1
    b L134388
    sub.s $f21,$f2,$f1
    addiu v1,zero,1
L1342dc:
    bne a0,v1,L134318
    addiu v1,zero,2
    .word 0xc6c4009c
    .word 0x3c0343b4
    .word 0x44831800
    .word 0x3c034387
    .word 0x44830800
    div.s $f2,$f4,$f3
    .word 0x460010a4
    cvt.s.w $f2,$f2
    mul.s $f2,$f3,$f2
    sub.s $f2,$f4,$f2
    b L134388
    sub.s $f21,$f1,$f2
    addiu v1,zero,2
L134318:
    bne a0,v1,L134354
    addiu v1,zero,3
    .word 0xc6c4009c
    .word 0x3c0343b4
    .word 0x44831800
    .word 0x3c034334
    .word 0x44830800
    div.s $f2,$f4,$f3
    .word 0x460010a4
    cvt.s.w $f2,$f2
    mul.s $f2,$f3,$f2
    sub.s $f2,$f4,$f2
    b L134388
    sub.s $f21,$f1,$f2
    addiu v1,zero,3
L134354:
    bne a0,v1,L134388
    nop
    .word 0xc6c4009c
    .word 0x3c0343b4
    .word 0x44831800
    .word 0x3c0342b4
    .word 0x44830800
    div.s $f2,$f4,$f3
    .word 0x460010a4
    cvt.s.w $f2,$f2
    mul.s $f2,$f3,$f2
    sub.s $f2,$f4,$f2
    sub.s $f21,$f1,$f2
L134388:
    .word 0x3c0343b4
L13438c:
    .word 0x44830800
    nop
    c.eq.s $f1,$f21
    nop
    bc1f L1343a8
    nop
    .word 0x4480a800
L1343a8:
    .word 0x8ec400b4
    addiu v1,zero,4
    beq a0,v1,L1343f4
    nop
    .word 0x3c0343e1
    .word 0x44830800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L134424
    nop
    .word 0xc6c100a4
    .word 0x3c03c220
    .word 0x44830000
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L134424
    nop
L1343f4:
    c.lt.s $f21,$f20
    nop
    bc1f L134424
    nop
    .word 0x44800000
    nop
    c.lt.s $f21,$f0
    nop
    bc1t L134424
    nop
    addiu s3,zero,1
    .word 0x4600ad06
L134424:
    bnez v0,L13444c
    .word 0x26c400d0
    .word 0x26c400d0
    .word 0x4600a306
    .word 0x26c500e0
    jal func_001c7610
    addiu a2,zero,2
    b L134460
    .word 0xc6c10100
    .word 0x26c400d0
L13444c:
    neg.s $f12,$f20
    .word 0x26c500e0
    jal func_001c7610
    addiu a2,zero,2
    .word 0xc6c10100
L134460:
    .word 0xc7a000a0
    .word 0x27b100a4
    .word 0x27b200a8
    .word 0x26c400d0
    add.s $f0,$f1,$f0
    .word 0xe6c00100
    .word 0xc6c10104
    .word 0xc6200000
    add.s $f0,$f1,$f0
    .word 0xe6c00104
    .word 0xc6c10108
    .word 0xc6400000
    add.s $f0,$f1,$f0
    jal func_001c7320
    .word 0xe6c00108
    .word 0xc6c0009c
    .word 0x3c0243e1
    .word 0x44820800
    nop
    add.s $f0,$f0,$f20
    .word 0xe6c0009c
    .word 0xc6c000a0
    c.eq.s $f1,$f0
    nop
    bc1f L13462c
    nop
    .word 0xc6c100a4
    .word 0x3c02c220
    .word 0x44820000
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L13462c
    nop
    beqz s3,L13462c
    nop
    .word 0x8ec300b4
    addiu v0,zero,4
    beq v1,v0,L13462c
    nop
    .word 0x8ed10008
    .word 0x3c050004
    .word 0x8e22003c
    beql v0,a1,L134558
    .word 0x26c500d0
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L134554
    nop
    .word 0x8e22000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72202628
    beqz v0,L134554
    nop
    .word 0x8e22000c
    addiu a2,zero,8
    .word 0x72202628
    .word 0x8c420014
    jalr ra,v0
    .word 0x3c050004
L134554:
    .word 0x26c500d0
L134558:
    addiu a0,zero,8
L13455c:
    .word 0x8ca30000
    .word 0x8ca20004
    .word 0x2484ffff
    .word 0xae030000
    .word 0xae020004
    .word 0x24a50008
    bgtz a0,L13455c
    .word 0x26100008
    .word 0xc6c000f0
    .word 0x3c0240b1
    ori v1,v0,0xc71d
    .word 0x44830800
    .word 0x8ec2000c
    mul.s $f0,$f1,$f0
    .word 0xe440000c
    .word 0xc6c000f4
    .word 0x8ec2000c
    mul.s $f0,$f1,$f0
    .word 0xe4400010
    .word 0xc6c000f8
    .word 0x8ec2000c
    mul.s $f0,$f1,$f0
    .word 0xe4400014
    .word 0x8ec2000c
    .word 0xac430010
    .word 0x8ec40070
    beqz a0,L1345e8
    .word 0x3c017000
    .word 0x8c82000c
    addiu a2,zero,5
    .word 0x72c02e28
    .word 0x8c420020
    jalr ra,v0
    .word 0x70003e28
    .word 0x3c017000
L1345e8:
    .word 0xc4213fb0
    .word 0x3c0240a0
    .word 0x44820000
    .word 0x3c054120
    .word 0x3c023f33
    ori a2,v0,0x3333
    add.s $f0,$f0,$f1
    .word 0x3c044270
    addiu v0,zero,1
    .word 0xe6c000ac
    .word 0x8ec30014
    .word 0xac66007c
    .word 0x8ec30014
    .word 0xac650084
    .word 0x8ec30014
    b L134f8c
    .word 0xac640088
L13462c:
    bnez s3,L13465c
    nop
    c.lt.s $f21,$f20
    nop
    bc1f L1346b4
    nop
    .word 0x44800000
    nop
    c.lt.s $f21,$f0
    nop
    bc1t L1346b4
    nop
L13465c:
    .word 0xc6c200a4
    .word 0xc6c100a0
    .word 0x3c0243e1
    .word 0x44820000
    nop
    add.s $f1,$f1,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L13468c
    .word 0xe6c100a0
    b L1346ac
    .word 0xaec200a0
L13468c:
    .word 0x3c024448
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1tl L1346b0
    .word 0x3c02c220
    .word 0xaec200a0
L1346ac:
    .word 0x3c02c220
L1346b0:
    .word 0xaec200a4
L1346b4:
    .word 0x8ec300b4
    addiu v0,zero,1
    bne v1,v0,L1346d4
    addiu v0,zero,2
    addiu v0,zero,2
    b L134ac4
    .word 0xaec200b4
    addiu v0,zero,2
L1346d4:
    bne v1,v0,L1347c8
    addiu v0,zero,3
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0xc6c00134
    c.le.s $f1,$f0
    nop
    bc1t L13475c
    nop
    .word 0x3c020030
    .word 0x24436d78
    .word 0x8ec40000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820800
    sll v0,a0,0x3
    subu v0,v0,a0
    sll a0,v0,0x6
    addu v0,v1,a0
    .word 0xc4400000
    c.lt.s $f0,$f1
    nop
    bc1f L13475c
    nop
    .word 0x3c020030
    .word 0x24426d84
    addu v0,v0,a0
    .word 0xc4400000
    c.lt.s $f0,$f1
    nop
    bc1f L13475c
    nop
    addiu v0,zero,3
    .word 0xaec200b4
L13475c:
    .word 0xc6c1009c
    .word 0x3c0243b4
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L134ac4
    nop
    .word 0x3c020030
    .word 0x24436d64
    .word 0x8ec40000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    sll v0,a0,0x3
    subu v0,v0,a0
    sll v0,v0,0x6
    addu v0,v1,v0
    .word 0xc4410000
    c.lt.s $f1,$f0
    nop
    bc1f L134ac4
    nop
    addiu v0,zero,4
    b L134ac4
    .word 0xaec200b4
    addiu v0,zero,3
L1347c8:
    bne v1,v0,L13493c
    addiu v0,zero,4
    .word 0x3c020030
    .word 0x24436d78
    .word 0x8ec40000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44821000
    sll v0,a0,0x3
    subu v0,v0,a0
    sll a0,v0,0x6
    addu v0,v1,a0
    .word 0xc4410000
    c.le.s $f1,$f2
    nop
    bc1f L134830
    .word 0x3c023e4c
    .word 0x3c020030
    .word 0x24426d84
    addu v0,v0,a0
    .word 0xc4400000
    c.le.s $f0,$f2
    nop
    bc1t L1348d0
    nop
    .word 0x3c023e4c
L134830:
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L134870
    nop
    .word 0x8ec30098
    addiu v0,zero,3
    bne v1,v0,L134868
    .word 0x24620001
    b L134890
    .word 0xaec00098
    .word 0x24620001
L134868:
    b L134890
    .word 0xaec20098
L134870:
    .word 0x8ec20098
    bnezl v0,L13488c
    .word 0x2442ffff
    addiu v0,zero,3
    b L134890
    .word 0xaec20098
    .word 0x2442ffff
L13488c:
    .word 0xaec20098
L134890:
    .word 0x8ec30014
    .word 0x3c053f80
    .word 0x3c023e80
    .word 0x44820000
    .word 0x3c044270
    .word 0x3c017000
    .word 0xac65007c
    .word 0x8ec30014
    addiu v0,zero,2
    .word 0xac640084
    .word 0x8ec30014
    .word 0xac640088
    .word 0xc4213fb0
    add.s $f0,$f0,$f1
    .word 0xe6c00134
    .word 0xaec200b4
L1348d0:
    .word 0xc6c1009c
    .word 0x3c0243b4
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L134ac4
    nop
    .word 0x3c020030
    .word 0x24436d64
    .word 0x8ec40000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    sll v0,a0,0x3
    subu v0,v0,a0
    sll v0,v0,0x6
    addu v0,v1,v0
    .word 0xc4410000
    c.lt.s $f1,$f0
    nop
    bc1f L134ac4
    nop
    addiu v0,zero,4
    b L134ac4
    .word 0xaec200b4
    addiu v0,zero,4
L13493c:
    bne v1,v0,L134ac4
    nop
    beqz s3,L134ac4
    nop
    .word 0xc6c200d0
    .word 0xc6c100d4
    .word 0xc6c000d8
    .word 0x3c02415e
    ori v0,v0,0x38e4
    .word 0x44821800
    addiu a1,zero,256
    .word 0xe6020000
    .word 0xe6010004
    .word 0xe6000008
    .word 0xc6c200e0
    .word 0xc6c100e4
    .word 0xc6c000e8
    .word 0x3c023f80
    .word 0x44822000
    .word 0xe6020010
    .word 0xe6010014
    .word 0xe6000018
    .word 0xc6c200f0
    .word 0xc6c100f4
    .word 0xc6c000f8
    .word 0xe6020020
    .word 0xe6010024
    .word 0xe6000028
    .word 0xc6000020
    .word 0x8ec2000c
    mul.s $f0,$f3,$f0
    .word 0xe440000c
    .word 0xc6000024
    .word 0x8ec2000c
    mul.s $f0,$f3,$f0
    .word 0xe4400010
    .word 0xc6000028
    .word 0x8ec2000c
    mul.s $f0,$f3,$f0
    .word 0xe4400014
    .word 0x8ec2000c
    .word 0xc4400010
    add.s $f0,$f0,$f4
    .word 0xe4400010
    .word 0x8ed00008
    .word 0x8e02003c
    beq v0,a1,L134a3c
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L134a3c
    nop
    .word 0x8e02000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72002628
    beqz v0,L134a3c
    nop
    .word 0x8e02000c
    addiu a1,zero,256
    .word 0x72002628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L134a3c:
    .word 0x8ec40070
    beqz a0,L134a80
    .word 0x3c017000
    .word 0x8c82000c
    addiu a2,zero,7
    .word 0x72c02e28
    .word 0x8c420020
    jalr ra,v0
    .word 0x70003e28
    .word 0x8ec40070
    addiu a2,zero,5
    .word 0x72c02e28
    .word 0x8c82000c
    .word 0x8c420020
    jalr ra,v0
    .word 0x70003e28
    .word 0x3c017000
L134a80:
    .word 0xc4213fb0
    .word 0x3c023f80
    .word 0x44820000
    .word 0x3c054120
    .word 0x3c023f33
    ori a2,v0,0x3333
    add.s $f0,$f0,$f1
    .word 0x3c044270
    addiu v0,zero,1
    .word 0xe6c000ac
    .word 0x8ec30014
    .word 0xac66007c
    .word 0x8ec30014
    .word 0xac650084
    .word 0x8ec30014
    b L134f8c
    .word 0xac640088
L134ac4:
    .word 0x8ec40070
    beqz a0,L134af0
    .word 0x8ed00014
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
    b L134b70
    .word 0x7040ae28
L134af0:
    .word 0x3c027000
    ori s5,v0,0x3ed0
    .word 0x26c600d0
    addiu a0,zero,8
    .word 0x72a02e28
L134b04:
    .word 0x8cc30000
    .word 0x8cc20004
    .word 0x2484ffff
    .word 0xaca30000
    .word 0xaca20004
    .word 0x24c60008
    bgtz a0,L134b04
    .word 0x24a50008
    .word 0x8ec20008
    .word 0x8c42051c
    bnez v0,L134b58
    nop
    .word 0xc6c0009c
    .word 0x3c027000
    addiu a2,zero,2
    ori a0,v0,0x3ed0
    ori a1,v0,0x3ee0
    jal func_001c7610
    neg.s $f12,$f0
    b L134b74
    .word 0x8ec30098
L134b58:
    .word 0xc6cc009c
    .word 0x3c027000
    addiu a2,zero,2
    ori a0,v0,0x3ed0
    jal func_001c7610
    ori a1,v0,0x3ee0
L134b70:
    .word 0x8ec30098
L134b74:
    bnez v1,L134bb4
    addiu v0,zero,1
    .word 0xc6a00020
    .word 0x3c02bf80
    .word 0x44820800
    nop
    mul.s $f0,$f1,$f0
    .word 0xe7a000b0
    .word 0xc6a00024
    mul.s $f0,$f1,$f0
    .word 0xe7a000b4
    .word 0xc6a00028
    mul.s $f0,$f1,$f0
    b L134c44
    .word 0xe7a000b8
    addiu v0,zero,1
L134bb4:
    bne v1,v0,L134bf4
    addiu v0,zero,2
    .word 0xc6a00000
    .word 0x3c02bf80
    .word 0x44820800
    nop
    mul.s $f0,$f1,$f0
    .word 0xe7a000b0
    .word 0xc6a00004
    mul.s $f0,$f1,$f0
    .word 0xe7a000b4
    .word 0xc6a00008
    mul.s $f0,$f1,$f0
    b L134c44
    .word 0xe7a000b8
    addiu v0,zero,2
L134bf4:
    bne v1,v0,L134c20
    addiu v0,zero,3
    .word 0xc6a20020
    .word 0xc6a10024
    .word 0xc6a00028
    .word 0x27a200b0
    .word 0xe4420000
    .word 0xe4410004
    b L134c44
    .word 0xe4400008
    addiu v0,zero,3
L134c20:
    bne v1,v0,L134c44
    nop
    .word 0xc6a20000
    .word 0xc6a10004
    .word 0xc6a00008
    .word 0x27a200b0
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
L134c44:
    .word 0xc6010094
    .word 0xc7a000a0
    .word 0x27a400c0
    .word 0x27b300c4
    .word 0x27b400c8
    sub.s $f0,$f1,$f0
    .word 0x70802e28
    .word 0xe7a000c0
    .word 0xc6010098
    .word 0xc6200000
    sub.s $f0,$f1,$f0
    .word 0xe6600000
    .word 0xc601009c
    .word 0xc6400000
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe6800000
    .word 0xc7a300c0
    .word 0xc7a200b0
    .word 0xc7b500b4
    .word 0xc6610000
    .word 0xc7b400b8
    .word 0xc6800000
    .word 0x3c02bf80
    mul.s $f2,$f3,$f2
    mul.s $f1,$f1,$f21
    adda.s $f2,$f1
    madd.s $f12,$f0,$f20
    .word 0x44820000
    nop
    c.lt.s $f12,$f0
    nop
    bc1f L134cd8
    .word 0x3c023f80
    b L134cf4
    .word 0x46000306
    .word 0x3c023f80
L134cd8:
    .word 0x44820000
    nop
    c.le.s $f12,$f0
    nop
    bc1t L134cf4
    nop
    .word 0x46000306
L134cf4:
    jal func_0011a620
    nop
    .word 0x3c024265
    ori v0,v0,0x2ee1
    .word 0x44820800
    .word 0x44801000
    mul.s $f23,$f1,$f0
    c.lt.s $f23,$f2
    nop
    bc1t L134d2c
    neg.s $f1,$f23
    b L134d2c
    .word 0x4600b846
    neg.s $f1,$f23
L134d2c:
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L134d54
    .word 0x3c0242b4
    .word 0x4480b800
    .word 0x3c0242b4
L134d54:
    .word 0x44820000
    nop
    c.lt.s $f23,$f0
    nop
    bc1f L134db4
    nop
    .word 0xc6820000
    .word 0xc6640000
    .word 0xc7a300c0
    .word 0xc7a100b0
    .word 0x27a400d0
    mula.s $f21,$f2
    msub.s $f0,$f20,$f4
    .word 0xe7a000d0
    mula.s $f20,$f3
    msub.s $f0,$f1,$f2
    mula.s $f1,$f4
    .word 0xe7a000d4
    msub.s $f0,$f21,$f3
    .word 0x70802e28
    jal func_001ce160
    .word 0xe7a000d8
    b L134dd4
    .word 0xc7a200d8
L134db4:
    .word 0xc6a20010
    .word 0xc6a10014
    .word 0xc6a00018
    .word 0x27a200d0
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0xc7a200d8
L134dd4:
    .word 0xc7a400d4
    .word 0xc7a300d0
    .word 0xc7a000b0
    .word 0x27a400e0
    mula.s $f21,$f2
    msub.s $f1,$f20,$f4
    mula.s $f20,$f3
    .word 0x27b700e4
    msub.s $f0,$f0,$f2
    .word 0xe7a100e0
    .word 0xe6e00000
    .word 0xc7a000b0
    .word 0x27b500e8
    .word 0x70802e28
    mula.s $f0,$f4
    msub.s $f0,$f21,$f3
    jal func_001ce160
    .word 0xe6a00000
    .word 0xc6640000
    .word 0xc6e30000
    .word 0xc7a600c0
    .word 0xc7a500e0
    .word 0xc6820000
    .word 0xc6a10000
    .word 0x44800000
    mul.s $f3,$f4,$f3
    mul.s $f4,$f6,$f5
    adda.s $f4,$f3
    madd.s $f1,$f2,$f1
    c.le.s $f1,$f0
    nop
    bc1tl L134e64
    neg.s $f23,$f23
    b L134e68
    .word 0x3c017000
    neg.s $f23,$f23
L134e64:
    .word 0x3c017000
L134e68:
    .word 0xc4213fa8
    .word 0x3c02c3b4
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f1
    c.lt.s $f23,$f0
    nop
    bc1f L134e98
    .word 0x3c0243b4
    b L134eb8
    .word 0x460005c6
    .word 0x3c0243b4
L134e98:
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f1
    c.le.s $f23,$f0
    nop
    bc1t L134eb8
    nop
    .word 0x460005c6
L134eb8:
    .word 0x44800000
    nop
    c.eq.s $f0,$f23
    nop
    bc1t L134f60
    nop
    .word 0x3c027000
    .word 0x27a500d0
    .word 0x4600bb06
    ori a0,v0,0x3ed0
    jal func_001c7610
    .word 0x70003628
    .word 0xc6010094
    .word 0xc7a000a0
    .word 0x26040094
    .word 0x3c027000
    addiu a2,zero,1
    sub.s $f0,$f1,$f0
    .word 0x70802e28
    ori a3,v0,0x3ed0
    .word 0xe6000094
    .word 0xc6010098
    .word 0xc6200000
    sub.s $f0,$f1,$f0
    .word 0xe6000098
    .word 0xc601009c
    .word 0xc6400000
    sub.s $f0,$f1,$f0
    jal func_001ce410
    .word 0xe600009c
    .word 0xc6010094
    .word 0xc7a000a0
    add.s $f0,$f1,$f0
    .word 0xe6000094
    .word 0xc6200000
    .word 0xc6010098
    add.s $f0,$f1,$f0
    .word 0xe6000098
    .word 0xc6400000
    .word 0xc601009c
    add.s $f0,$f1,$f0
    .word 0xe600009c
L134f60:
    .word 0x8ec20014
    .word 0x3c053f80
    .word 0x3c044120
    .word 0x3c034270
    .word 0xac45007c
    .word 0x8ec20014
    .word 0xac440084
    .word 0x8ec20014
    .word 0xac430088
    .word 0xe6d600c4
    addiu v0,zero,1
L134f8c:
    .word 0x7bbf0090
    .word 0x7bb70080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b7000c
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    .word 0x27bd00f0
}
