extern void fn_201570(void);
extern void fn_1c3b80(void);
extern void fn_1c7710(void);
extern void fn_1ce410(void);
extern void fn_1ce3f0(void);
extern void fn_256538(void);
extern void fn_11a510(void);
extern void fn_255940(void);
asm void func(void) {
    .set noreorder
    paddub a2,a1,zero
    .word 0x3c020025
    j fn_201570
    addiu a1,v0,-23488
    addiu sp,sp,-160
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f828298
    addu v0,a0,v0
    .word 0x8c500000
    beqz s0,L24a6c4
    paddub s1,a0,zero
    .word 0x9202000b
    dsll32 v0,v0,0x18
    dsrl32 v0,v0,0x1d
    bltz v0,L24a490
    srl v1,v0,0x1
    .word 0x44820000
    b L24a4a8
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L24a490:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L24a4a8:
    .word 0x3c02c160
    .word 0x44820000
    nop
    div.s $f0,$f1,$f0
    .word 0xe6000038
    .word 0x92020008
    andi v0,v0,0x1
    beqz v0,L24a610
    nop
    beqz a1,L24a610
    nop
    .word 0x8e240004
    jal fn_1c3b80
    paddub s3,a1,zero
    paddub s2,v0,zero
    addiu a0,sp,80
    jal fn_1c7710
    paddub a1,s2,zero
    addiu a0,s0,40
    addiu a1,s3,12
    addiu a2,zero,1
    jal fn_1ce410
    addiu a3,sp,80
    addiu a0,sp,144
    addiu a2,zero,1
    addiu a3,sp,80
    jal fn_1ce3f0
    paddub a1,s3,zero
    .word 0xc6030030
    .word 0x44800000
    nop
    c.lt.s $f3,$f0
    nop
    bc1t L24a540
    neg.s $f1,$f3
    b L24a540
    .word 0x46001846
    neg.s $f1,$f3
L24a540:
    .word 0x3c023c23
    ori v0,v0,0xd70a
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L24a5a0
    nop
    addiu v0,sp,152
    .word 0xc6010028
    .word 0xc4420000
    .word 0xc7a00090
    mul.s $f1,$f2,$f1
    div.s $f1,$f1,$f3
    add.s $f0,$f0,$f1
    .word 0xe7a00090
    .word 0xc4430000
    .word 0xc602002c
    .word 0xc6010030
    .word 0xc7a00094
    mul.s $f2,$f3,$f2
    div.s $f1,$f2,$f1
    add.s $f0,$f0,$f1
    .word 0xe7a00094
L24a5a0:
    .word 0xc7a00090
    .word 0xe6000020
    .word 0xc7a00094
    .word 0xe6000024
    .word 0xc6410000
    .word 0xc6400004
    .word 0xc6440010
    .word 0xc6430014
    .word 0xc6420008
    .word 0xc6450018
    mul.s $f1,$f1,$f1
    mul.s $f0,$f0,$f0
    adda.s $f1,$f0
    mul.s $f1,$f4,$f4
    mul.s $f0,$f3,$f3
    madd.s $f2,$f2,$f2
    adda.s $f1,$f0
    madd.s $f0,$f5,$f5
    jal fn_256538
    add.s $f12,$f2,$f0
    jal fn_11a510
    paddub a0,v0,zero
    jal fn_255940
    paddub a0,v0,zero
    .word 0xc6610018
    mul.s $f0,$f1,$f0
    b L24a6c4
    .word 0xe6000034
L24a610:
    .word 0xae000020
    .word 0xae000024
    .word 0xae000028
    .word 0xae00002c
    .word 0x9202000b
    dsll32 v0,v0,0x1b
    dsrl32 v0,v0,0x1c
    bltz v0,L24a644
    srl v1,v0,0x1
    .word 0x44820000
    b L24a65c
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L24a644:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L24a65c:
    .word 0x3c0240a0
    .word 0x44820000
    .word 0x3c033f80
    div.s $f2,$f1,$f0
    .word 0x3c0241a0
    .word 0x44830800
    .word 0x44820000
    nop
    sub.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    .word 0xe6000030
    .word 0xc6010000
    .word 0xc6000004
    mula.s $f1,$f1
    jal fn_256538
    madd.s $f12,$f0,$f0
    jal fn_11a510
    paddub a0,v0,zero
    jal fn_255940
    paddub a0,v0,zero
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820800
    nop
    mul.s $f0,$f1,$f0
    .word 0xe6000034
L24a6c4:
    paddub v0,s1,zero
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,160
}


