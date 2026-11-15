extern void func_001c3b80(void);
extern void func_00223150(void);
extern void func_001ffac0(void);
extern void func_001c3bc0(void);
extern void func_001c3b70(void);
extern void func_001c7610(void);
extern void func_001c3b00(void);
extern void func_0017a2c0(void);
extern void func_00179a00(void);
extern void func_00221a70(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-160
    .word 0x7fbf0080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    paddub s0,a0,zero
    .word 0xe7b40000
    .word 0x70009e28
    bnez s0,L15e620
    .word 0x7000ae28
    b L15e914
    .word 0x70001628
L15e620:
    .word 0x8e03003c
    .word 0x8e1200bc
    addiu v0,zero,2
    beq v1,v0,L15e640
    .word 0x8e1103dc
    addiu v0,zero,4
    bne v1,v0,L15e654
    addiu v0,zero,8
L15e640:
    .word 0x8e1300c0
    .word 0x8e15036c
    b L15e688
    .word 0x8e140360
    addiu v0,zero,8
L15e654:
    bne v1,v0,L15e670
    addiu v0,zero,16
    .word 0x8e1300c4
    .word 0x8e150370
    b L15e688
    .word 0x8e140364
    addiu v0,zero,16
L15e670:
    bne v1,v0,L15e688
    nop
    .word 0x8e140368
    .word 0x8e1300c8
    .word 0x8e150374
    nop
L15e688:
    beqz s2,L15e900
    nop
    .word 0x8e020010
    andi v0,v0,0x2000
    beqz v0,L15e6f8
    nop
    .word 0xc6010564
    .word 0xc6020560
    c.le.s $f1,$f2
    nop
    bc1f L15e6c0
    nop
    b L15e6cc
    sub.s $f20,$f2,$f1
L15e6c0:
    .word 0xc6000568
    sub.s $f0,$f0,$f1
    add.s $f20,$f2,$f0
L15e6cc:
    beqz s4,L15e6f0
    nop
    jal func_001c3b80
    .word 0x8e440004
    .word 0x4600a306
    jal func_00223150
    paddub a0,s4,zero
    jal func_001ffac0
    paddub a0,s4,zero
L15e6f0:
    .word 0xc6000560
    .word 0xe6000564
L15e6f8:
    beqz s1,L15e8a8
    nop
    .word 0x8e220000
    beqz v0,L15e8a8
    nop
    .word 0x8e03003c
    addiu v0,zero,2
    beq v1,v0,L15e79c
    .word 0x70008e28
    .word 0x8e020660
    .word 0x44800000
    .word 0xc4430030
    c.le.s $f3,$f0
    nop
    bc1t L15e798
    nop
    .word 0xc6020668
    .word 0x3c024265
    ori v0,v0,0x2ee1
    .word 0x44820800
    .word 0xc6000664
    .word 0x3c0243b4
    div.s $f2,$f2,$f3
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0x44821000
    nop
    c.lt.s $f0,$f2
    nop
    bc1t L15e798
    .word 0xe6000664
    nop
    nop
    div.s $f1,$f0,$f2
    cvt.w.s $f1,$f1
    .word 0xc6000664
    cvt.s.w $f1,$f1
    mul.s $f1,$f2,$f1
    sub.s $f0,$f0,$f1
    .word 0xe6000664
L15e798:
    .word 0x70008e28
L15e79c:
    .word 0x7000b628
L15e7a0:
    .word 0x8e020660
    addu v0,v0,s6
    .word 0x8c540020
    beqzl s4,L15e89c
    addiu s1,s1,1
    .word 0x8e020030
    jal func_001c3bc0
    .word 0x8c440004
    jal func_001c3b70
    paddub a0,v0,zero
    .word 0xc6820030
    .word 0xc6810034
    .word 0xc6800038
    addiu a0,sp,144
    .word 0x3c020002
    .word 0x3c033f80
    ori v0,v0,0x3
    .word 0xe4820000
    .word 0xe4810004
    .word 0xe4800008
    .word 0xae830028
    .word 0xae830014
    .word 0xae830000
    .word 0xae800010
    .word 0xae800008
    .word 0xae800004
    .word 0xae800024
    .word 0xae800020
    .word 0xae800018
    .word 0xae800038
    .word 0xae800034
    .word 0xae800030
    .word 0x8e83000c
    slti at,s1,2
    or v0,v1,v0
    beqz at,L15e848
    .word 0xae82000c
    .word 0x44806000
    addiu a1,s4,16
    addiu a2,zero,2
    jal func_001c7610
    paddub a0,s4,zero
L15e848:
    .word 0xc60c0664
    addiu a2,zero,2
    paddub a0,s4,zero
    jal func_001c7610
    paddub a1,s4,zero
    addiu v0,sp,144
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6820030
    .word 0xe6810034
    .word 0xe6800038
    .word 0x8e020660
    addu v0,v0,s6
    jal func_001c3b00
    .word 0x8c440010
    .word 0x8e020660
    addu v0,v0,s6
    jal func_001c3b80
    .word 0x8c440010
    addiu s1,s1,1
L15e89c:
    slti v0,s1,4
    bnez v0,L15e7a0
    addiu s6,s6,4
L15e8a8:
    .word 0x8e030010
    andi v0,v1,0x4
    beqz v0,L15e8cc
    nop
    addiu v0,zero,-5
    and v0,v1,v0
    .word 0xae020010
    jal func_0017a2c0
    paddub a0,s0,zero
L15e8cc:
    .word 0x8e020038
    beqz v0,L15e8e4
    nop
    .word 0x8c420000
    bnez v0,L15e8f0
    .word 0x70003e28
L15e8e4:
    b L15e8f0
    .word 0x8e0700b0
    .word 0x70003e28
L15e8f0:
    paddub a1,s2,zero
    paddub a2,s3,zero
    jal func_00179a00
    paddub a0,s0,zero
L15e900:
    beqz s5,L15e910
    .word 0xae000668
    jal func_00221a70
    paddub a0,s5,zero
L15e910:
    addiu v0,zero,1
L15e914:
    .word 0x7bbf0080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,160
}


