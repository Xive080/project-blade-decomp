extern void func_001c3b70(void);
extern void func_001ce3f0(void);
extern void func_001c2510(void);
extern void func_001c24a0(void);
extern void func_001297c0(void);
extern void func_001c5f10(void);
extern void func_001c5eb0(void);
extern void func_001ceb00(void);
extern void func_001ceda0(void);
extern void func_001cebe0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-224
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8ca2000c
    .word 0x3c010030
    .word 0x8c31a588
    paddub s3,a0,zero
    paddub s2,a1,zero
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s2,zero
    jal func_001c3b70
    paddub a0,v0,zero
    addiu a0,sp,160
    addiu a1,s2,20
    addiu a2,zero,1
    jal func_001ce3f0
    paddub a3,v0,zero
    jal func_001c2510
    .word 0x8f848350
    jal func_001c3b70
    paddub a0,v0,zero
    .word 0x8f848360
    jal func_001c24a0
    paddub s0,v0,zero
    addiu a0,sp,176
    addiu a1,sp,160
    addiu a2,zero,1
    jal func_001ce3f0
    paddub a3,v0,zero
    addiu v0,sp,160
    .word 0x44802000
    .word 0xdc440000
    .word 0xc4410008
    addiu a1,sp,192
    addiu v1,sp,80
    addiu a2,sp,92
    .word 0xfca40000
    .word 0xe4a10008
    .word 0xc4a30000
    .word 0xc4a20004
    .word 0xc4a10008
    .word 0x3c023d4c
    ori v0,v0,0xcccd
    .word 0x44820000
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xc4a30000
    .word 0xc4a20004
    .word 0xc4a10008
    .word 0xe4c30000
    .word 0xe4c20004
    .word 0xe4c10008
    .word 0xc6420020
    .word 0xc6010028
    c.lt.s $f1,$f4
    nop
    bc1t L1443ec
    add.s $f0,$f0,$f2
    .word 0xc6220014
    .word 0xc7a10058
    add.s $f1,$f1,$f2
    .word 0xe7a10058
    .word 0xc7a10064
    sub.s $f1,$f1,$f0
    b L144408
    .word 0xe7a10064
L1443ec:
    .word 0xc7a10058
    add.s $f1,$f1,$f0
    .word 0xe7a10058
    .word 0xc6220014
    .word 0xc7a10064
    sub.s $f1,$f1,$f2
    .word 0xe7a10064
L144408:
    .word 0xc6020020
    .word 0x44800800
    nop
    c.lt.s $f2,$f1
    nop
    bc1t L144444
    nop
    .word 0xc622000c
    .word 0xc7a10050
    add.s $f1,$f1,$f2
    .word 0xe7a10050
    .word 0xc4c10000
    sub.s $f1,$f1,$f0
    b L144460
    .word 0xe4c10000
L144444:
    .word 0xc7a10050
    add.s $f1,$f1,$f0
    .word 0xe7a10050
    .word 0xc622000c
    .word 0xc4c10000
    sub.s $f1,$f1,$f2
    .word 0xe4c10000
L144460:
    addiu s0,sp,116
    .word 0xafb30070
    .word 0xae000000
    .word 0xc4c20000
    .word 0xc621000c
    addiu v1,sp,140
    addiu a0,sp,144
    addiu a1,sp,148
    div.s $f1,$f2,$f1
    .word 0x46000864
    mfc1 v0,$f1
    nop
    .word 0xac620000
    .word 0xc7a20064
    .word 0xc6210014
    div.s $f1,$f2,$f1
    .word 0x46000864
    mfc1 v0,$f1
    nop
    .word 0xac820000
    .word 0xc7a20050
    .word 0xc621000c
    div.s $f1,$f2,$f1
    .word 0x46000864
    mfc1 v0,$f1
    nop
    .word 0xaca20000
    .word 0x8e420008
    slti at,v0,10000
    beqz at,L14452c
    addiu v0,zero,110
    .word 0xc6440080
    .word 0xc6430084
    .word 0x3c0242b4
    .word 0x44820800
    .word 0xc6420088
    .word 0x3c0240ac
    ori v0,v0,0xcccc
    add.s $f3,$f4,$f3
    add.s $f2,$f2,$f3
    mul.s $f2,$f1,$f2
    .word 0x44820800
    nop
    div.s $f1,$f2,$f1
    .word 0x46000864
    mfc1 v0,$f1
    nop
    addiu v0,v0,40
    b L144530
    .word 0xafa20098
    addiu v0,zero,110
L14452c:
    .word 0xafa20098
L144530:
    .word 0x8c620000
    bgez v0,L144540
    nop
    .word 0xac600000
L144540:
    .word 0x8c820000
    bgez v0,L144550
    nop
    .word 0xac800000
L144550:
    .word 0x8ca20000
    .word 0x8e230018
    slt v0,v0,v1
    bnez v0,L144568
    nop
    .word 0xaca30000
L144568:
    .word 0xc7a400b0
    .word 0x3c020014
    .word 0xc6630004
    .word 0xc7a500b4
    .word 0xc7a100b8
    addiu a3,sp,112
    add.s $f2,$f4,$f0
    addiu a1,sp,80
    addiu a2,v0,18160
    add.s $f2,$f3,$f2
    paddub a0,s1,zero
    .word 0xe7a20078
    .word 0xc6630008
    add.s $f2,$f5,$f0
    add.s $f2,$f3,$f2
    .word 0xe7a2007c
    .word 0xc6620004
    add.s $f2,$f0,$f2
    sub.s $f2,$f4,$f2
    .word 0xe7a20080
    .word 0xc6620008
    add.s $f0,$f0,$f2
    sub.s $f0,$f5,$f0
    .word 0xe7a00084
    jal func_001297c0
    .word 0xe7a10088
    .word 0x8e030000
    beqz v1,L1446d0
    nop
    addiu a1,sp,204
    jal func_001c5f10
    addiu a0,zero,6
    addiu a1,sp,208
    jal func_001c5f10
    addiu a0,zero,8
    addiu a1,sp,212
    jal func_001c5f10
    addiu a0,zero,3
    addiu a1,sp,216
    jal func_001c5f10
    addiu a0,zero,4
    addiu a1,sp,220
    jal func_001c5f10
    addiu a0,zero,9
    addiu a0,zero,6
    jal func_001c5eb0
    addiu a1,zero,1
    addiu a0,zero,8
    jal func_001c5eb0
    .word 0x70002e28
    addiu a0,zero,3
    jal func_001c5eb0
    paddub a1,a0,zero
    addiu a0,zero,4
    jal func_001c5eb0
    addiu a1,zero,3
    addiu a0,zero,9
    jal func_001c5eb0
    addiu a1,zero,2
    .word 0x8e050000
    .word 0x3c020030
    addiu a0,v0,-4640
    addiu a3,zero,1
    jal func_001ceb00
    .word 0x70003628
    beqz v0,L144694
    nop
    .word 0x3c010030
    .word 0x8c25a43c
    jal func_001c5eb0
    addiu a0,zero,1
    jal func_001ceda0
    addiu a0,zero,3
    jal func_001cebe0
    nop
L144694:
    .word 0x8fa500cc
    jal func_001c5eb0
    addiu a0,zero,6
    .word 0x8fa500d4
    jal func_001c5eb0
    addiu a0,zero,3
    .word 0x8fa500d8
    jal func_001c5eb0
    addiu a0,zero,4
    .word 0x8fa500d0
    jal func_001c5eb0
    addiu a0,zero,8
    .word 0x8fa500dc
    jal func_001c5eb0
    addiu a0,zero,9
L1446d0:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,224
}


