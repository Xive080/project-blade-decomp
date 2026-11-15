extern void func_0012bcc0(void);
extern void func_00133cd0(void);
extern void func_00133f30(void);
extern void func_0013c300(void);
extern void func_001454c0(void);
extern void func_00145b80(void);
extern void func_00146d40(void);
extern void func_00149e60(void);
extern void func_0015d760(void);
extern void func_0015daa0(void);
extern void func_00161d20(void);
extern void func_001c3b70(void);
extern void func_001c3b80(void);
extern void func_001c7320(void);
extern void func_001c7610(void);
extern void func_001c7710(void);
extern void func_001ce160(void);
extern void func_001ce3f0(void);
extern void func_001ce410(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-480
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    paddub s6,a0,zero
    paddub s5,a1,zero
    jal func_00149e60
    .word 0x7fb00000
    .word 0x8c420018
    jalr ra,v0
    .word 0x8ec40008
    jal func_001c3b70
    paddub a0,v0,zero
    paddub s0,v0,zero
    .word 0x8ea2000c
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s5,zero
    jal func_001c3b70
    paddub a0,v0,zero
    paddub s2,v0,zero
    .word 0x3c027000
    ori v0,v0,0x3fb0
    .word 0xc6c100ac
    .word 0xc4400000
    c.le.s $f1,$f0
    nop
    bc1t L136a04
    nop
    b L13731c
    paddub v0,zero,zero
L136a04:
    jal func_00149e60
    nop
    .word 0x8c420028
    .word 0x8ec40008
    jalr ra,v0
    addiu a1,zero,2
    .word 0x8ea30000
    addiu s1,v0,48
    .word 0x3c020004
    bne v1,v0,L136c84
    .word 0x3c020008
    jal func_0013c300
    nop
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s5,zero
    jal func_001c3b70
    paddub a0,v0,zero
    addiu a2,zero,16
    paddub s3,v0,zero
    paddub a0,s5,zero
    jal func_00161d20
    paddub a1,zero,zero
    addiu a0,sp,160
    paddub s4,v0,zero
    jal func_001c7710
    paddub a1,s3,zero
    addiu a0,sp,368
    addiu a2,zero,1
    addiu a3,sp,160
    jal func_001ce3f0
    paddub a1,s1,zero
    beqz s4,L13731c
    paddub v0,zero,zero
    addiu a0,s2,32
L136a90:
    addiu a1,s0,32
    jal func_0015daa0
    paddub a2,zero,zero
    .word 0x3c024234
    mtc1 v0,$f1
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L136c60
    addiu a2,zero,16
    addiu a1,sp,368
    addiu a2,s6,184
    addiu a3,sp,460
    jal func_001454c0
    paddub a0,s4,zero
    .word 0x3c023fc0
    mtc1 v0,$f1
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L136c5c
    nop
    .word 0x8ea2000c
    addiu a2,zero,4
    paddub a0,s5,zero
    paddub a1,s6,zero
    .word 0x8c420020
    jalr ra,v0
    paddub a3,zero,zero
    beqz v0,L136c5c
    nop
    .word 0xc6c100bc
    .word 0x3c023e8f
    ori v0,v0,0x5c29
    mtc1 v0,$f0
    addiu a0,s6,256
    add.s $f0,$f1,$f0
    addiu a1,s6,184
    addiu a2,zero,1
    .word 0xe6c000bc
    .word 0xc6020000
    .word 0xc6010004
    .word 0xc6000008
    paddub a3,s3,zero
    .word 0xe6c200d0
    .word 0xe6c100d4
    .word 0xe6c000d8
    .word 0xc6020010
    .word 0xc6010014
    .word 0xc6000018
    .word 0xe6c200e0
    .word 0xe6c100e4
    .word 0xe6c000e8
    .word 0xc6020020
    .word 0xc6010024
    .word 0xc6000028
    .word 0xe6c200f0
    .word 0xe6c100f4
    jal func_001ce3f0
    .word 0xe6c000f8
    jal func_001c7320
    addiu a0,s6,208
    beqz s6,L136c54
    .word 0xc7a001cc
    .word 0xaed50070
    .word 0xaed40074
    .word 0xe6c00094
    .word 0xaec0009c
    .word 0xaec000a0
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c023e80
    mtc1 v0,$f0
    addiu v1,zero,1
    .word 0x3c02fffe
    add.s $f0,$f0,$f1
    ori v0,v0,0xfff
    ori a1,zero,32768
    .word 0xe6c000b0
    .word 0xaec300b4
    .word 0x8ec30008
    .word 0xac60052c
    .word 0x8ec40008
    .word 0x8c830010
    and v0,v1,v0
    .word 0xac820010
    .word 0x8ed00008
    .word 0x8e02003c
    beq v0,a1,L136c38
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L136c38
    nop
    .word 0x8e02000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s0,zero
    beqz v0,L136c38
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    ori a1,zero,32768
    .word 0x8c420014
    jalr ra,v0
    paddub a2,zero,zero
L136c38:
    .word 0x8ec40014
    .word 0x3c053f80
    .word 0x3c02be99
    ori v1,v0,0x999a
    .word 0xac8500e8
    .word 0x8ec20014
    .word 0xac4300ec
L136c54:
    b L13731c
    addiu v0,zero,1
L136c5c:
    addiu a2,zero,16
L136c60:
    paddub a1,s4,zero
    jal func_00161d20
    paddub a0,s5,zero
    paddub s4,v0,zero
    bnez s4,L136a90
    addiu a0,s2,32
    b L137318
    nop
    .word 0x3c020008
L136c84:
    bne v1,v0,L137318
    nop
    jal func_0013c300
    nop
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s5,zero
    jal func_001c3b70
    paddub a0,v0,zero
    addiu a2,zero,6
    addiu a3,sp,288
    paddub s7,v0,zero
    paddub a0,s5,zero
    paddub a1,zero,zero
    jal func_0012bcc0
    .word 0xafa00120
    addiu a0,sp,224
    paddub s2,v0,zero
    jal func_001c7710
    paddub a1,s7,zero
    beqz s2,L137318
    nop
L136cdc:
    .word 0x8fa40120
    beqz a0,L136d0c
    addiu s1,sp,224
    jal func_001c3b80
    nop
    paddub s0,v0,zero
    addiu a0,sp,304
    jal func_001c7710
    paddub a1,s0,zero
    b L136d10
    addiu s1,sp,304
    addiu s1,sp,224
L136d0c:
    paddub s0,s7,zero
L136d10:
    jal func_00149e60
    nop
    .word 0x8c420018
    jalr ra,v0
    .word 0x8ec40008
    jal func_001c3b70
    paddub a0,v0,zero
    paddub s4,v0,zero
    .word 0x8e42000c
    andi v0,v0,0x6
    bnez v0,L136d48
    nop
    b L1372b8
    paddub v0,zero,zero
L136d48:
    jal func_00149e60
    nop
    .word 0x8c420028
    .word 0x8ec40008
    jalr ra,v0
    addiu a1,zero,2
    .word 0xc6800010
    addiu s3,v0,48
    .word 0x3c023fc0
    mtc1 v0,$f1
    addiu v1,sp,456
    mul.s $f0,$f1,$f0
    addiu v0,sp,452
    .word 0xe7a001c0
    .word 0xc6800014
    mul.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc6800018
    mul.s $f0,$f1,$f0
    .word 0xe4600000
    .word 0xc6810030
    .word 0xc7a001c0
    add.s $f0,$f0,$f1
    .word 0xe7a001c0
    .word 0xc4410000
    .word 0xc6800034
    add.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc4610000
    .word 0xc6800038
    add.s $f0,$f1,$f0
    beqz s1,L136de0
    .word 0xe4600000
    addiu a0,sp,448
    addiu a2,zero,1
    paddub a3,s1,zero
    jal func_001ce3f0
    paddub a1,a0,zero
L136de0:
    .word 0x8e43000c
    andi v0,v1,0x4
    beqz v0,L1370a0
    andi v0,v1,0x2
    addiu a1,sp,448
    addiu a2,sp,476
    addiu a3,sp,468
    addiu t0,sp,464
    jal func_00145b80
    paddub a0,s2,zero
    .word 0xc7a001dc
    addiu a1,sp,472
    addiu a2,s6,184
    addiu a3,sp,432
    addiu t0,sp,468
    paddub a0,s2,zero
    jal func_00146d40
    .word 0xe7a001d8
    .word 0xc6c200b8
    .word 0xc6c100bc
    .word 0xc6c000c0
    addiu a0,sp,416
    .word 0xe4820000
    .word 0xe4810004
    beqz s0,L136e58
    .word 0xe4800008
    addiu a2,zero,1
    paddub a1,a0,zero
    jal func_001ce3f0
    paddub a3,s0,zero
L136e58:
    .word 0xc6640000
    .word 0xc7a001a0
    addiu s8,sp,420
    .word 0xc6630004
    .word 0xc7c20000
    addiu s1,sp,424
    .word 0xc6610008
    sub.s $f4,$f4,$f0
    .word 0x3c024010
    .word 0xc6200000
    sub.s $f2,$f3,$f2
    sub.s $f3,$f1,$f0
    mul.s $f1,$f4,$f4
    mul.s $f0,$f2,$f2
    adda.s $f1,$f0
    mtc1 v0,$f0
    madd.s $f1,$f3,$f3
    c.lt.s $f1,$f0
    nop
    bc1f L1372b8
    paddub v0,zero,zero
    beqz s0,L136f2c
    nop
    .word 0xc6870020
    .word 0xc6060010
    .word 0xc6040014
    .word 0xc6810024
    addiu a0,sp,400
    .word 0xc6050018
    .word 0xc6800028
    mul.s $f2,$f7,$f6
    paddub a1,a0,zero
    mul.s $f1,$f1,$f4
    adda.s $f2,$f1
    madd.s $f3,$f0,$f5
    mul.s $f0,$f6,$f3
    sub.s $f0,$f7,$f0
    .word 0xe7a00190
    .word 0xc6820024
    mul.s $f1,$f4,$f3
    sub.s $f1,$f2,$f1
    .word 0xe7a10194
    .word 0xc6810028
    mul.s $f0,$f5,$f3
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe7a00198
    addiu a0,s6,208
    addiu a1,sp,400
    jal func_0015d760
    addiu a2,s0,16
    b L136fcc
    .word 0xc6810030
L136f2c:
    .word 0xc6810020
    mtc1 zero,$f2
    nop
    c.eq.s $f2,$f1
    nop
    bc1f L136f60
    nop
    .word 0xc6800028
    c.eq.s $f2,$f0
    nop
    bc1t L136f94
    nop
    nop
L136f60:
    .word 0xe7a10190
    .word 0xafa00194
    .word 0xc6800028
    addiu a0,sp,400
    paddub a1,a0,zero
    jal func_001ce160
    .word 0xe7a00198
    addiu a0,s6,208
    addiu a1,sp,400
    jal func_0015d760
    paddub a2,zero,zero
    b L136fc8
    nop
L136f94:
    .word 0xc6800010
    addiu a0,sp,400
    paddub a1,a0,zero
    .word 0xe7a00190
    .word 0xafa00194
    .word 0xc6800018
    jal func_001ce160
    .word 0xe7a00198
    addiu a0,s6,208
    addiu a1,sp,400
    jal func_0015d760
    paddub a2,zero,zero
    nop
L136fc8:
    .word 0xc6810030
L136fcc:
    .word 0xc6600000
    addiu a0,s6,208
    sub.s $f0,$f1,$f0
    .word 0xe6c00100
    .word 0xc6810034
    .word 0xc6600004
    sub.s $f0,$f1,$f0
    .word 0xe6c00104
    .word 0xc6600008
    .word 0xc6810038
    sub.s $f0,$f1,$f0
    .word 0xe6c00108
    .word 0xc6c10100
    .word 0xc7a001a0
    add.s $f0,$f1,$f0
    .word 0xe6c00100
    .word 0xc7c00000
    .word 0xc6c10104
    add.s $f0,$f1,$f0
    .word 0xe6c00104
    .word 0xc6200000
    .word 0xc6c10108
    add.s $f0,$f1,$f0
    jal func_001c7320
    .word 0xe6c00108
    .word 0xc7ac01dc
    paddub a0,s6,zero
    paddub a1,s5,zero
    jal func_00133cd0
    paddub a2,s2,zero
    beqz s0,L137094
    addiu v0,zero,1
    addiu a1,s4,32
    addiu a0,s0,32
    jal func_0015daa0
    addiu a2,s0,16
    .word 0xe6c0009c
    .word 0x8ec30008
    addiu v0,zero,1
    .word 0x8c63051c
    bne v1,v0,L137090
    nop
    .word 0xc6c1009c
    .word 0x3c0243b4
    mtc1 v0,$f0
    nop
    sub.s $f0,$f0,$f1
    .word 0xe6c0009c
    nop
L137090:
    addiu v0,zero,1
L137094:
    b L1372b8
    nop
    andi v0,v1,0x2
L1370a0:
    beqz v0,L1372b4
    nop
    addiu a1,sp,448
    addiu a2,sp,476
    addiu a3,sp,468
    addiu t0,sp,464
    jal func_00145b80
    paddub a0,s2,zero
    .word 0xc7a001dc
    addiu a1,sp,472
    addiu a2,s6,184
    addiu a3,sp,432
    addiu t0,sp,468
    paddub a0,s2,zero
    jal func_00146d40
    .word 0xe7a001d8
    .word 0xc6c200b8
    .word 0xc6c100bc
    .word 0xc6c000c0
    addiu a0,sp,416
    .word 0xe4820000
    .word 0xe4810004
    beqz s0,L137128
    .word 0xe4800008
    addiu a2,zero,1
    paddub a1,a0,zero
    jal func_001ce3f0
    paddub a3,s0,zero
    addiu a0,sp,432
    addiu a2,zero,1
    paddub a3,s0,zero
    jal func_001ce410
    paddub a1,a0,zero
    nop
L137128:
    .word 0xc6640000
    .word 0xc7a001a0
    addiu a1,sp,420
    .word 0xc6630004
    .word 0xc4a20000
    addiu a2,sp,424
    .word 0xc6610008
    sub.s $f4,$f4,$f0
    .word 0x3c024010
    .word 0xc4c00000
    sub.s $f2,$f3,$f2
    sub.s $f3,$f1,$f0
    mul.s $f1,$f4,$f4
    mul.s $f0,$f2,$f2
    adda.s $f1,$f0
    mtc1 v0,$f0
    madd.s $f1,$f3,$f3
    c.lt.s $f1,$f0
    nop
    bc1f L1372b4
    nop
    .word 0x3c02002e
    addiu a0,v0,-8192
    mtc1 zero,$f0
    .word 0xdc820000
    .word 0xc4810008
    addiu v1,sp,384
    .word 0xfc620000
    .word 0xe4610008
    .word 0xc6820030
    .word 0xc6610000
    sub.s $f1,$f2,$f1
    .word 0xe6c10100
    .word 0xc6820034
    .word 0xc6610004
    sub.s $f1,$f2,$f1
    .word 0xe6c10104
    .word 0xc6820038
    .word 0xc6610008
    sub.s $f1,$f2,$f1
    .word 0xe6c10108
    .word 0xc6c20100
    .word 0xc7a101a0
    add.s $f1,$f2,$f1
    .word 0xe6c10100
    .word 0xc4a10000
    .word 0xc6c20104
    add.s $f1,$f2,$f1
    .word 0xe6c10104
    .word 0xc4c10000
    .word 0xc6c20108
    add.s $f1,$f2,$f1
    .word 0xe6c10108
    .word 0x8ec2000c
    .word 0xc7a401b8
    .word 0xc7a201b0
    .word 0xc443000c
    .word 0xc4410014
    mula.s $f4,$f3
    msub.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1f L137234
    addiu s0,zero,1
    b L137234
    paddub s0,zero,zero
    addiu s0,zero,1
L137234:
    addiu a0,s6,208
    addiu a1,sp,432
    jal func_0015d760
    addiu a2,sp,384
    bnez s0,L137270
    .word 0x3c0242b4
    .word 0x3c02c2b4
    mtc1 v0,$f12
    addiu a0,s6,208
    addiu a1,sp,384
    jal func_001c7610
    addiu a2,zero,1
    b L13728c
    addiu a0,s6,208
    .word 0x3c0242b4
L137270:
    mtc1 v0,$f12
    addiu a0,s6,208
    addiu a1,sp,384
    jal func_001c7610
    addiu a2,zero,1
    nop
    addiu a0,s6,208
L13728c:
    jal func_001c7320
    nop
    .word 0xc7ac01dc
    paddub a3,s0,zero
    paddub a0,s6,zero
    paddub a1,s5,zero
    jal func_00133f30
    paddub a2,s2,zero
    b L1372b8
    addiu v0,zero,1
L1372b4:
    paddub v0,zero,zero
L1372b8:
    beqz v0,L1372f8
    addiu a2,zero,6
    .word 0x8ea2000c
    addiu a2,zero,4
    paddub a0,s5,zero
    paddub a1,s6,zero
    .word 0x8c420020
    jalr ra,v0
    paddub a3,zero,zero
    beqz v0,L1372f4
    nop
    .word 0x8fa30120
    addiu v0,zero,1
    b L13731c
    .word 0xaec3012c
L1372f4:
    addiu a2,zero,6
L1372f8:
    addiu a3,sp,288
    paddub a1,s2,zero
    paddub a0,s5,zero
    jal func_0012bcc0
    .word 0xafa00120
    paddub s2,v0,zero
    bnez s2,L136cdc
    nop
L137318:
    paddub v0,zero,zero
L13731c:
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
    addiu sp,sp,480
}
