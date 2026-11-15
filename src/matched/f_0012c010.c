extern void func_001be190(void);
extern void func_00223150(void);
extern void func_001ffac0(void);
extern void func_001c3b70(void);
extern void func_00222f80(void);
extern void func_0017a150(void);
extern void func_00179ef0(void);
extern void func_0024a6f0(void);
extern void func_0016b6c0(void);
extern void func_0012d390(void);
extern void func_0012d1f0(void);
extern void func_0012cfd0(void);
extern void func_00180320(void);
extern void func_001801f0(void);
extern void func_00180540(void);
extern void func_001ce410(void);
extern void func_0017e660(void);
extern void func_00180ab0(void);
extern void func_001810a0(void);
extern void func_001c3b00(void);
extern void func_0012b7e0(void);
extern void func_0013bcf0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-144
    .word 0x7fbf0040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    paddub s0,a0,zero
    .word 0x8c84003c
    beqz a0,L12c048
    nop
    .word 0x8e030010
    andi v1,v1,0x1
    beqzl v1,L12c05c
    addiu v0,zero,1
L12c048:
    .word 0x8e030010
    andi v1,v1,0x1000
    beqz v1,L12c8d4
    nop
    addiu v0,zero,1
L12c05c:
    beq a0,v0,L12c3c8
    nop
    addiu v0,zero,4
    beq a0,v0,L12c340
    nop
    addiu v0,zero,2
    beq a0,v0,L12c084
    nop
    b L12c4e0
    .word 0x8e0200cc
L12c084:
    .word 0x8e030010
    andi v0,v1,0x800
    beqz v0,L12c0b4
    nop
    .word 0x8e040030
    beqz a0,L12c0b4
    nop
    ori v0,v1,0x4
    .word 0xae020010
    .word 0x3c017000
    jal func_001be190
    .word 0xc42c3fa8
L12c0b4:
    .word 0x8e020010
    andi v0,v0,0x1000
    beqz v0,L12c268
    nop
    .word 0x8e040360
    beqz a0,L12c17c
    nop
    .word 0x8c820008
    beqz v0,L12c17c
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    .word 0x44800000
    nop
    c.le.s $f12,$f0
    nop
    bc1t L12c120
    nop
    .word 0xc441000c
    .word 0xc480000c
    sub.s $f0,$f1,$f0
    c.lt.s $f0,$f12
    nop
    bc1f L12c13c
    nop
    b L12c13c
    .word 0x46000306
L12c120:
    .word 0xc481000c
    neg.s $f0,$f12
    c.lt.s $f1,$f0
    nop
    bc1f L12c13c
    nop
    neg.s $f12,$f1
L12c13c:
    jal func_00223150
    nop
    jal func_001ffac0
    .word 0x8e040360
    .word 0x8e04045c
    beqz a0,L12c268
    nop
    jal func_001c3b70
    nop
    .word 0xc4420030
    .word 0xc4410034
    .word 0xc4400038
    .word 0xe6020014
    .word 0xe6010018
    b L12c268
    .word 0xe600001c
L12c17c:
    .word 0x8e040364
    beqz a0,L12c268
    nop
    .word 0x8c830008
    beqz v1,L12c268
    nop
    .word 0x8e020368
    beqz v0,L12c268
    nop
    .word 0x8c420008
    beqz v0,L12c268
    nop
    .word 0x3c017000
    .word 0xc4343fa8
    .word 0x44800000
    nop
    c.le.s $f20,$f0
    nop
    bc1t L12c1f0
    nop
    .word 0xc461000c
    .word 0xc480000c
    sub.s $f0,$f1,$f0
    c.lt.s $f0,$f20
    nop
    bc1f L12c210
    .word 0x4600a306
    b L12c20c
    .word 0x46000506
L12c1f0:
    .word 0xc481000c
    neg.s $f0,$f20
    c.lt.s $f1,$f0
    nop
    bc1f L12c20c
    nop
    neg.s $f20,$f1
L12c20c:
    .word 0x4600a306
L12c210:
    jal func_00223150
    nop
    .word 0x8e040368
    jal func_00223150
    .word 0x4600a306
    .word 0x8e050364
    .word 0x8e060368
    jal func_00222f80
    .word 0x8e040360
    jal func_001ffac0
    .word 0x8e040360
    .word 0x8e04045c
    beqz a0,L12c268
    nop
    jal func_001c3b70
    nop
    .word 0xc4420030
    .word 0xc4410034
    .word 0xc4400038
    .word 0xe6020014
    .word 0xe6010018
    .word 0xe600001c
L12c268:
    .word 0x8e020010
    andi v0,v0,0x20
    beqz v0,L12c2fc
    nop
    .word 0x3c017000
    .word 0x8c243fcc
    .word 0x8e0503e4
    .word 0x70003628
    .word 0x8c820000
    .word 0x8c420010
    jalr ra,v0
    paddub a3,s0,zero
    .word 0x8e02003c
    addiu a1,zero,4
    beq v0,a1,L12c2ec
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L12c2ec
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s0,12
    beqz v0,L12c2ec
    nop
    .word 0x8e220000
    addiu a1,zero,4
    paddub a0,s0,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L12c2ec:
    .word 0x8e030010
    addiu v0,zero,-33
    and v0,v1,v0
    .word 0xae020010
L12c2fc:
    .word 0x8e030010
    andi v0,v1,0x100
    beqz v0,L12c318
    nop
    addiu v0,zero,-193
    and v0,v1,v0
    .word 0xae020010
L12c318:
    .word 0x8e0400c0
    beqz a0,L12c330
    addiu a1,zero,1
    jal func_0017a150
    nop
    addiu a1,zero,1
L12c330:
    jal func_00179ef0
    paddub a0,s0,zero
    b L12c4dc
    nop
L12c340:
    .word 0x8e0400b4
    beqz a0,L12c364
    nop
    .word 0x8e020010
    .word 0x3c017000
    ori v0,v0,0x4
    .word 0xae020010
    jal func_001be190
    .word 0xc42c3fa8
L12c364:
    .word 0x8e020010
    andi v0,v0,0x10
    beqz v0,L12c384
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_0024a6f0
    .word 0x8e0400b4
L12c384:
    .word 0x8e0403e0
    beqz a0,L12c3a0
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_0016b6c0
    addiu a1,zero,1
L12c3a0:
    .word 0x8e0400c4
    beqz a0,L12c3b8
    addiu a1,zero,2
    jal func_0017a150
    nop
    addiu a1,zero,2
L12c3b8:
    jal func_00179ef0
    paddub a0,s0,zero
    b L12c4dc
    nop
L12c3c8:
    .word 0x8e0400b8
    beqz a0,L12c3f0
    .word 0x3c017000
    .word 0x8e020010
    .word 0x3c017000
    ori v0,v0,0x4
    .word 0xae020010
    jal func_001be190
    .word 0xc42c3fa8
    .word 0x3c017000
L12c3f0:
    .word 0xc4213fb0
    .word 0xc60000d4
    c.le.s $f1,$f0
    nop
    bc1t L12c4bc
    nop
    .word 0x8e0200cc
    beqzl v0,L12c4b4
    .word 0x3c027f7f
    .word 0x8c430028
    addiu v0,zero,2
    beq v1,v0,L12c4a0
    paddub a0,s0,zero
    addiu v0,zero,1
    beq v1,v0,L12c440
    nop
    beqz v1,L12c4b0
    nop
    b L12c4b0
    nop
L12c440:
    .word 0x8e02003c
    beqz v0,L12c4b0
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L12c4b0
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s0,12
    beqz v0,L12c4b0
    nop
    .word 0x8e220000
    paddub a0,s0,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L12c4b0
    nop
    paddub a0,s0,zero
L12c4a0:
    jal func_0012d390
    .word 0x70002e28
    addiu v0,zero,1
    .word 0xae0200d8
L12c4b0:
    .word 0x3c027f7f
L12c4b4:
    ori v0,v0,0xffff
    .word 0xae0200d4
L12c4bc:
    .word 0x8e0400c8
    beqz a0,L12c4d4
    addiu a1,zero,3
    jal func_0017a150
    nop
    addiu a1,zero,3
L12c4d4:
    jal func_00179ef0
    paddub a0,s0,zero
L12c4dc:
    .word 0x8e0200cc
L12c4e0:
    beqz v0,L12c8cc
    paddub a0,s0,zero
    .word 0x8c42002c
    beqz v0,L12c8c8
    nop
    .word 0x8e030038
    .word 0x8c62003c
    bnez v0,L12c8c8
    nop
    .word 0x3c027000
    ori v0,v0,0x3fb0
    .word 0xc4620048
    .word 0xc4410000
    .word 0x44800000
    nop
    sub.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1f L12c614
    .word 0x3c017000
    .word 0x3c017000
    .word 0x8c223fbc
    beqz v0,L12c610
    nop
    jal func_0012d1f0
    paddub a0,s0,zero
    bnez v0,L12c580
    .word 0x70008e28
    .word 0x8e030038
    beqz v1,L12c8c8
    nop
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c0240a0
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    b L12c8c8
    .word 0xe4600048
    .word 0x70008e28
L12c580:
    b L12c598
    paddub s2,s0,zero
L12c588:
    jal func_0012cfd0
    .word 0x8e440430
    addiu s2,s2,4
    addiu s1,s1,1
L12c598:
    .word 0x8e020458
    slt v0,s1,v0
    bnez v0,L12c588
    nop
    .word 0x8e02003c
    beqz v0,L12c600
    paddub a0,s0,zero
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L12c5fc
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s0,12
    beqz v0,L12c5fc
    nop
    .word 0x8e220000
    paddub a0,s0,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L12c5fc:
    paddub a0,s0,zero
L12c600:
    jal func_0012d390
    .word 0x70002e28
    b L12c8c8
    nop
L12c610:
    .word 0x3c017000
L12c614:
    .word 0xc4223fa8
    .word 0x3c02411c
    ori v0,v0,0xf5c3
    .word 0x44820800
    .word 0xc4600008
    mul.s $f1,$f1,$f2
    sub.s $f0,$f0,$f1
    .word 0xe4600008
    jal func_00180320
    .word 0x8e040038
    jal func_001801f0
    .word 0x8e040038
    jal func_00180540
    paddub a0,s0,zero
    .word 0xc6020014
    .word 0xc6010018
    .word 0xc600001c
    addiu a0,sp,80
    addiu a2,zero,1
    .word 0xe4820000
    .word 0xe4810004
    .word 0xe4800008
    .word 0x8e020038
    .word 0x8c470038
    jal func_001ce410
    paddub a1,a0,zero
    .word 0x8e020038
    .word 0xc7a00050
    addiu v1,sp,84
    addiu a0,sp,88
    .word 0x8c420038
    addiu a1,sp,100
    addiu a2,sp,104
    .word 0xc4410030
    add.s $f0,$f1,$f0
    .word 0xe7a00050
    .word 0x8e020038
    .word 0xc4600000
    .word 0x8c420038
    .word 0xc4410034
    add.s $f0,$f1,$f0
    .word 0xe4600000
    .word 0x8e020038
    .word 0xc4800000
    .word 0x8c420038
    .word 0xc4410038
    add.s $f0,$f1,$f0
    .word 0xe4800000
    .word 0x8e020038
    .word 0xc6000460
    .word 0x8c420038
    .word 0xc4410030
    sub.s $f0,$f1,$f0
    .word 0xe7a00060
    .word 0x8e020038
    .word 0xc6000464
    .word 0x8c420038
    .word 0xc4410034
    sub.s $f0,$f1,$f0
    .word 0xe4a00000
    .word 0x8e020038
    .word 0xc6000468
    .word 0x8c420038
    .word 0xc4410038
    sub.s $f0,$f1,$f0
    .word 0xe4c00000
    .word 0xc4a00000
    .word 0xc7a10060
    .word 0x8e020038
    .word 0xc4c20000
    mul.s $f0,$f0,$f0
    .word 0xc4430034
    mul.s $f1,$f1,$f1
    adda.s $f1,$f0
    mul.s $f0,$f3,$f3
    madd.s $f1,$f2,$f2
    c.le.s $f1,$f0
    nop
    bc1t L12c844
    nop
    .word 0x8c420038
    addiu a2,sp,96
    .word 0x3c017000
    addiu a1,s0,1120
    .word 0xc4420030
    .word 0xc4410034
    .word 0xc4400038
    addiu a3,sp,128
    addiu t0,sp,112
    .word 0x70004e28
    .word 0xe4c20000
    .word 0xe4c10004
    .word 0xe4c00008
    .word 0x8c243fd8
    jal func_0017e660
    .word 0x70005628
    beqz v0,L12c844
    nop
    .word 0x8e030038
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44821000
    .word 0xc7a00070
    .word 0xc4610034
    .word 0x8c620038
    mul.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    .word 0xe4400030
    .word 0x8e020038
    .word 0xc7a00074
    .word 0xc4410034
    mul.s $f1,$f2,$f1
    .word 0x8c420038
    mul.s $f0,$f0,$f1
    .word 0xe4400034
    .word 0x8e020038
    .word 0xc7a00078
    .word 0xc4410034
    mul.s $f1,$f2,$f1
    .word 0x8c420038
    mul.s $f0,$f0,$f1
    .word 0xe4400038
    .word 0x8e020038
    .word 0xc7a00080
    .word 0x8c420038
    .word 0xc4410030
    add.s $f0,$f1,$f0
    .word 0xe4400030
    .word 0x8e020038
    .word 0xc7a00084
    .word 0x8c420038
    .word 0xc4410034
    add.s $f0,$f1,$f0
    .word 0xe4400034
    .word 0x8e020038
    .word 0xc7a00088
    .word 0x8c420038
    .word 0xc4410038
    add.s $f0,$f1,$f0
    .word 0xe4400038
L12c844:
    .word 0x8e040038
    addiu a2,sp,80
    addiu a3,zero,4
    .word 0x8c820038
    .word 0xc48c0034
    jal func_00180ab0
    addiu a1,v0,48
    .word 0x8e030038
    .word 0xac620044
    .word 0x8e0200cc
    .word 0x8c420034
    beqz v0,L12c884
    nop
    .word 0x8e050038
    jal func_001810a0
    paddub a0,s0,zero
L12c884:
    .word 0x8e020030
    jal func_001c3b00
    .word 0x8c440004
    .word 0x8e020038
    .word 0x3c017000
    .word 0x8c420038
    .word 0xc4420030
    .word 0xc4410034
    .word 0xc4400038
    .word 0xe6020460
    .word 0xe6010464
    .word 0xe6000468
    .word 0x8e020038
    .word 0x8c243fd8
    .word 0x8c460038
    jal func_0012b7e0
    paddub a1,s0,zero
L12c8c8:
    paddub a0,s0,zero
L12c8cc:
    jal func_0013bcf0
    nop
L12c8d4:
    .word 0x7bbf0040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,144
}


