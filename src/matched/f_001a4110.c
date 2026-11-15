extern void func_00256438(void);
extern void func_00164c20(void);
extern void func_0011eac8(void);
extern void func_001c3b70(void);
extern void func_001ce3f0(void);
extern void func_001f79f0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-400
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
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x3c01002e
    .word 0x8c343604
    .word 0x3c01002e
    .word 0x8c26326c
    .word 0x3c01002e
    .word 0x8c253600
    .word 0x3c01002e
    .word 0x8c243248
    mult a1,a2,a1
    .word 0x3c01002e
    .word 0x8c233244
    .word 0x3c01002e
    .word 0x8c223254
    addu v0,v1,v0
    addiu v1,a1,91
    addu v1,a0,v1
    sltu at,v1,v0
    beqz at,L1a4730
    nop
    .word 0x3c027000
    ori v0,v0,0x3fb0
    .word 0xc4540000
    .word 0xafa000b0
    .word 0x3c020030
    addiu s8,v0,24688
    .word 0x3c02002e
    addiu s5,v0,12864
    .word 0x3c02002e
    .word 0x24563240
    .word 0x3c023ea8
    ori v0,v0,0xf5c3
    .word 0x44820000
    b L1a46f0
    add.s $f21,$f0,$f20
L1a41cc:
    .word 0x8fd70400
    .word 0x70008628
    .word 0x72809628
    .word 0x72a09e28
    .word 0x8ef10518
    nop
    nop
L1a41e8:
    .word 0xc6610190
    .word 0xc6400150
    c.eq.s $f1,$f0
    nop
    bc1tl L1a426c
    addiu s0,s0,1
    .word 0x3c01002e
    .word 0x8c233248
    .word 0x3c02437f
    .word 0x44820800
    .word 0x3c023f00
    .word 0x44820000
    .word 0xa0700000
    .word 0x3c01002e
    .word 0x8c223248
    addiu v0,v0,1
    .word 0x3c01002e
    .word 0xac223248
    .word 0xc6420150
    mul.s $f1,$f1,$f2
    jal func_00256438
    add.s $f12,$f0,$f1
    .word 0x3c01002e
    .word 0x8c233248
    .word 0xa0620000
    .word 0x3c01002e
    .word 0x8c223248
    addiu v0,v0,1
    .word 0x3c01002e
    .word 0xac223248
    .word 0xc6400150
    .word 0xe6600190
    addiu s0,s0,1
L1a426c:
    slti v0,s0,16
    addiu s2,s2,4
    bnez v0,L1a41e8
    addiu s3,s3,4
    .word 0x70003628
    .word 0x72802628
    .word 0x72a02e28
    .word 0x3c02437f
    .word 0x44801000
    .word 0x44820800
L1a4294:
    .word 0xc4a301d0
    .word 0xc4800190
    c.eq.s $f3,$f0
    nop
    bc1tl L1a433c
    addiu a2,a2,1
    .word 0x3c01002e
    .word 0x8c223248
    addiu v1,a2,16
    .word 0xa0430000
    .word 0x3c01002e
    .word 0x8c223248
    addiu v0,v0,1
    .word 0x3c01002e
    .word 0xac223248
    .word 0xc4800190
    c.lt.s $f0,$f2
    nop
    bc1t L1a42fc
    .word 0xc4a301e0
    mul.s $f0,$f0,$f3
    sub.s $f0,$f3,$f0
    .word 0x46000024
    mfc1 v1,$f0
    b L1a430c
    nop
L1a42fc:
    suba.s $f1,$f3
    msub.s $f0,$f0,$f3
    .word 0x46000024
    mfc1 v1,$f0
L1a430c:
    .word 0x3c01002e
    .word 0x8c223248
    .word 0xa0430000
    .word 0x3c01002e
    .word 0x8c223248
    addiu v0,v0,1
    .word 0x3c01002e
    .word 0xac223248
    .word 0xc4800190
    .word 0xe4a001d0
    nop
    addiu a2,a2,1
L1a433c:
    slti v0,a2,4
    addiu a0,a0,4
    bnez v0,L1a4294
    addiu a1,a1,4
    .word 0x3c01002e
    .word 0x8c223248
    addiu v1,zero,255
    .word 0xa0430000
    .word 0x3c01002e
    .word 0x8c223248
    addiu v0,v0,1
    .word 0x3c01002e
    .word 0xac223248
    .word 0x3c01002e
    .word 0xc4203608
    c.le.s $f20,$f0
    nop
    bc1t L1a4468
    nop
    .word 0x3c017000
    .word 0x8c243fe0
    .word 0x44806000
    jal func_00164c20
    addiu a1,sp,240
    addiu v0,sp,240
    .word 0xdc460000
    .word 0xc4430008
    addiu a1,sp,192
    addiu t1,sp,204
    addiu t0,sp,272
    .word 0xfca60000
    .word 0xe4a30008
    addiu v0,sp,256
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    addiu a3,sp,216
    addiu a0,sp,288
    .word 0x3c01002e
    .word 0xe5220000
    .word 0xe5210004
    .word 0xe5200008
    .word 0xc5020000
    .word 0xc5010004
    .word 0xc5000008
    addiu v0,sp,228
    addiu v1,zero,253
    .word 0xe4e20000
    .word 0xe4e10004
    .word 0xe4e00008
    .word 0xc4820000
    .word 0xc4810004
    .word 0xc4800008
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0x8c223248
    .word 0xa0430000
    .word 0x3c01002e
    .word 0x8c223248
    addiu v0,v0,1
    .word 0x3c01002e
    .word 0xac223248
    .word 0x3c01002e
    .word 0x8c243248
    jal func_0011eac8
    addiu a2,zero,48
    .word 0x3c01002e
    .word 0x8c223248
    addiu v0,v0,48
    .word 0x3c01002e
    .word 0xac223248
    .word 0x3c01002e
    .word 0xe4353608
    nop
L1a4468:
    .word 0x8ee4003c
    .word 0x3c030001
    bnel a0,v1,L1a448c
    .word 0x3c030002
    .word 0x8ec203cc
    bne v0,v1,L1a44a4
    .word 0x3c017000
    nop
    .word 0x3c030002
L1a448c:
    bnel a0,v1,L1a45a0
    .word 0x3c030001
    .word 0x8ec203cc
    beq v0,v1,L1a459c
    nop
    .word 0x3c017000
L1a44a4:
    .word 0xc4203fb0
    addiu v0,sp,308
    neg.s $f0,$f0
    .word 0xe7a00130
    .word 0xc62200b8
    .word 0xc62100bc
    .word 0xc62000c0
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0x8e240070
    beqz a0,L1a450c
    .word 0x3c02bf80
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
    addiu a0,sp,308
    addiu a2,zero,1
    .word 0x70403e28
    jal func_001ce3f0
    .word 0x70802e28
    nop
    .word 0x3c02bf80
L1a450c:
    .word 0xafa20140
    .word 0xafa20144
    .word 0xafa20148
    .word 0x3c01002e
    .word 0x8c223248
    addiu v1,zero,252
    .word 0xa0430000
    .word 0x3c01002e
    .word 0x8c223248
    addiu v0,v0,1
    .word 0x3c01002e
    b L1a4558
    .word 0xac223248
L1a4540:
    .word 0x3c01002e
    .word 0x8c223248
    addiu v0,v0,1
    .word 0x3c01002e
    .word 0xac223248
    nop
L1a4558:
    .word 0x3c01002e
    .word 0x8c233248
    andi v0,v1,0x3
    bnez v0,L1a4540
    nop
    .word 0xaec303f0
    .word 0x3c01002e
    .word 0x8c243248
    addiu a1,sp,304
    jal func_0011eac8
    addiu a2,zero,28
    .word 0x3c01002e
    .word 0x8c223248
    addiu v0,v0,28
    .word 0x3c01002e
    b L1a45f0
    .word 0xac223248
L1a459c:
    .word 0x3c030001
L1a45a0:
    beql a0,v1,L1a45bc
    .word 0x3c030002
    .word 0x8ec203cc
    beq v0,v1,L1a45d0
    nop
    nop
    .word 0x3c030002
L1a45bc:
    beq a0,v1,L1a45f0
    nop
    .word 0x8ec203cc
    bne v0,v1,L1a45f0
    nop
L1a45d0:
    .word 0x8ec203f0
    beqz v0,L1a45f0
    nop
    .word 0x3c017000
    .word 0xc4410000
    .word 0xc4203fb0
    add.s $f0,$f1,$f0
    .word 0xe4400000
L1a45f0:
    .word 0x8ec203f0
    beqz v0,L1a4698
    nop
    .word 0xc4400000
    .word 0x44806000
    nop
    c.le.s $f0,$f12
    nop
    bc1t L1a4698
    nop
    .word 0x3c017000
    .word 0x8c243fe0
    jal func_00164c20
    addiu a1,sp,336
    .word 0x8ec303f0
    addiu a0,sp,384
    .word 0xc7a30184
    .word 0x3c0242a2
    .word 0xc4850000
    .word 0xc7a10188
    .word 0xc4640008
    .word 0xc4660004
    .word 0xc462000c
    .word 0x44820000
    sub.s $f3,$f3,$f4
    sub.s $f4,$f1,$f2
    sub.s $f5,$f5,$f6
    mul.s $f2,$f5,$f5
    mul.s $f1,$f3,$f3
    adda.s $f2,$f1
    madd.s $f1,$f4,$f4
    c.le.s $f1,$f0
    nop
    bc1t L1a4698
    nop
    .word 0xc4820000
    .word 0xc4810004
    .word 0xc4800008
    .word 0xe4620010
    .word 0xe4610014
    .word 0xe4600018
    .word 0xaec003f0
L1a4698:
    .word 0x3c01002e
    .word 0x8c223248
    addiu v1,zero,255
    addiu s8,s8,4
    addiu s4,s4,448
    .word 0xa0430000
    .word 0x8fa200b0
    .word 0x3c01002e
    .word 0x8c233248
    addiu s5,s5,448
    addiu v0,v0,1
    .word 0xafa200b0
    addiu v0,v1,1
    .word 0x3c01002e
    .word 0xac223248
    .word 0x8ee2003c
    .word 0xaec203cc
    .word 0x8e220014
    .word 0x8c42003c
    .word 0xaec203d4
    addiu s6,s6,4
    nop
L1a46f0:
    .word 0x3c01002e
    .word 0x8c23326c
    .word 0x8fa200b0
    slt v0,v0,v1
    bnez v0,L1a41cc
    nop
    .word 0x3c01002e
    .word 0x8c223268
    addiu v0,v0,1
    .word 0x3c01002e
    .word 0xac223268
    .word 0x3c01002e
    .word 0x8c223248
    .word 0x3c01002e
    b L1a47b0
    .word 0xac223250
L1a4730:
    .word 0x3c01002e
    .word 0x8c223240
    addiu v0,v0,-4
    sltiu at,v0,2
    beqz at,L1a47a8
    addiu v0,zero,5
    addiu v0,zero,1
    .word 0x3c01002e
    .word 0xac22361c
    .word 0x3c01002e
    .word 0x8c233240
    .word 0x3c027000
    ori v0,v0,0x3fb0
    .word 0x3c01002e
    .word 0xac233620
    .word 0xc4400000
    .word 0x3c01002e
    .word 0xe4203624
    .word 0x3c017000
    .word 0xc4203fb4
    .word 0x3c01002e
    jal func_001f79f0
    .word 0xe4203628
    .word 0x3c01002e
    .word 0xac22362c
    .word 0x3c017000
    .word 0xc4203fb0
    .word 0x3c01002e
    .word 0xe4203264
    addiu v0,zero,5
L1a47a8:
    .word 0x3c01002e
    .word 0xac223240
L1a47b0:
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
    .word 0xc7b50004
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,400
}


