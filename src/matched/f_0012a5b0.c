extern void func_001214b8(void);
extern void func_0012b050(void);
extern void func_0012b500(void);
extern void func_0012e880(void);
extern void func_00141ef0(void);
extern void func_00142aa0(void);
extern void func_00142ad0(void);
extern void func_00142b00(void);
extern void func_0016bd40(void);
extern void func_0018c1b0(void);
extern void func_001a8850(void);
extern void func_001a8b70(void);
extern void func_001a98c0(void);
extern void func_001bf2b0(void);
extern void func_001c35a0(void);
extern void func_001c3b00(void);
extern void func_001c3b70(void);
extern void func_001c7320(void);
extern void func_001ca2d0(void);
extern void func_001ce160(void);
extern void func_00201390(void);
extern void func_00201d20(void);
extern void func_00203c80(void);
extern void func_00203d40(void);
extern void func_00203df0(void);
extern void func_00222280(void);
extern void func_00247ee0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-176
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70808628
    .word 0x70a08e28
    b L12a6d8
    .word 0x70009628
L12a5d8:
    b L12a6c8
    .word 0x70009e28
    sll v0,s2,0x3
L12a5e4:
    subu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v0,s2
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s3,0x3
    subu v0,v0,s3
    sll v0,v0,0x2
    addu v0,v0,s3
    sll v0,v0,0x2
    addu v0,v1,v0
    jal func_00247ee0
    addiu a0,v0,200
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v0,s2
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s3,0x3
    subu v0,v0,s3
    sll v0,v0,0x2
    addu v0,v0,s3
    sll v0,v0,0x2
    addu v0,v1,v0
    jal func_00247ee0
    addiu a0,v0,9248
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v0,s2
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s3,0x3
    subu v0,v0,s3
    sll v0,v0,0x2
    addu v0,v0,s3
    sll v0,v0,0x2
    addu v0,v1,v0
    jal func_00247ee0
    addiu a0,v0,3216
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v0,s2
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s3,0x3
    subu v0,v0,s3
    sll v0,v0,0x2
    addu v0,v0,s3
    sll v0,v0,0x2
    addu v0,v1,v0
    jal func_00247ee0
    addiu a0,v0,6232
    addiu s3,s3,1
    nop
L12a6c8:
    slti v0,s3,2
    bnez v0,L12a5e4
    sll v0,s2,0x3
    addiu s2,s2,1
L12a6d8:
    slti v0,s2,13
    bnez v0,L12a5d8
    nop
    addiu a1,sp,80
    jal func_001bf2b0
    .word 0x72202628
    addiu a2,zero,108
    .word 0x72202628
    jal func_001ca2d0
    .word 0x72002e28
    .word 0x8e050018
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8e060020
    .word 0x8c42013c
    addiu a0,zero,1
    sll v1,a1,0x2
    addu v1,v1,a1
    sll v1,v1,0x1
    addu v1,v1,a1
    sll v1,v1,0x2
    jalr ra,v0
    .word 0x00c32818
    .word 0xae0200b4
    .word 0xc600000c
    .word 0x3c023f80
    .word 0x44820800
    .word 0x72202628
    div.s $f0,$f1,$f0
    .word 0xe600006c
    .word 0xc6000010
    div.s $f0,$f1,$f0
    .word 0xe6000070
    .word 0xc6000014
    div.s $f0,$f1,$f0
    nop
    nop
    jal func_00141ef0
    .word 0xe6000074
    beqz v0,L12a788
    addiu a1,sp,144
    jal func_0018c1b0
    .word 0x72202628
    addiu a1,sp,144
L12a788:
    jal func_001bf2b0
    .word 0x72202628
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    .word 0x8fa40094
    .word 0x8fa60094
    .word 0x70409628
    .word 0x72202628
    jal func_001ca2d0
    .word 0x72402e28
    addiu v0,s2,40
    .word 0xae420024
    .word 0x72202628
    .word 0x72002e28
    jal func_0012b500
    .word 0xae1200c0
    .word 0x72202628
    jal func_0012b050
    .word 0x72002e28
    jal func_00222280
    .word 0x72202628
    addiu a1,sp,160
    .word 0xae022fe8
    jal func_001bf2b0
    .word 0x72202628
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    .word 0x8fa400a4
    .word 0x8fa600a4
    .word 0x70409e28
    .word 0x72202628
    jal func_001ca2d0
    .word 0x72602e28
    addiu a1,sp,160
    jal func_001bf2b0
    .word 0x72202628
    .word 0x8fa600a4
    .word 0x3c020030
    addiu s2,v0,-21880
    .word 0x72202628
    jal func_001ca2d0
    .word 0x72402e28
    .word 0x3c020030
    b L12a880
    addiu v1,v0,-21880
L12a84c:
    .word 0x86460000
    .word 0x86420002
    .word 0x8e0400b4
    sll a1,a2,0x2
    addu a1,a1,a2
    sll a1,a1,0x1
    addu a1,a1,a2
    sll a1,a1,0x2
    addu a0,a0,a1
    addu v0,s3,v0
    addiu s2,s2,4
    .word 0xac820028
    nop
L12a880:
    .word 0x8fa200a4
    addu v0,v1,v0
    sltu v0,s2,v0
    bnez v0,L12a84c
    nop
    addiu a1,sp,80
    jal func_001bf2b0
    .word 0x72202628
    jal func_00201d20
    .word 0x72202628
    .word 0xae02007c
    .word 0xae000078
    .word 0x3c0245c8
    .word 0xae0200a8
    .word 0x8e04007c
    addiu a1,s0,128
    jal func_00142b00
    .word 0x70003628
    .word 0xc6010080
    .word 0xc600008c
    sub.s $f0,$f1,$f0
    .word 0xe6000098
    .word 0xc6010084
    .word 0xc6000090
    sub.s $f0,$f1,$f0
    .word 0xe600009c
    .word 0xc6010088
    .word 0xc6000094
    sub.s $f0,$f1,$f0
    .word 0xe60000a0
    .word 0xc6020098
    .word 0xc601009c
    .word 0xc60000a0
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f0,$f0,$f0
    sqrt.s $f0,$f0
    .word 0xe60000a4
    .word 0xc601000c
    .word 0xc6000014
    mula.s $f1,$f1
    madd.s $f0,$f0,$f0
    sqrt.s $f0,$f0
    .word 0x3c033f00
    .word 0x3c024100
    .word 0xe60000b8
    .word 0xc60100b8
    .word 0x44831000
    .word 0x44820000
    nop
    mul.s $f1,$f2,$f1
    .word 0xe60100b8
    add.s $f1,$f0,$f1
    mov.s $f0,$f1
    mul.s $f0,$f1,$f0
    .word 0xe60100bc
    .word 0xe60000bc
    jal func_00201390
    .word 0x8e04007c
    .word 0xae020060
    .word 0x8e050060
    .word 0x8e040064
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8e030068
    .word 0x8c420130
    addu a0,a1,a0
    addu v1,v1,a0
    jalr ra,v0
    sll a0,v1,0x2
    .word 0xae0200ac
    jal func_00142ad0
    .word 0x8e04007c
    b L12a9e8
    .word 0x70408e28
L12a9b0:
    jal func_0016bd40
    .word 0x8e240004
    sll v1,v0,0x2
    .word 0x8e0200ac
    addiu a1,zero,1
    .word 0x72202628
    addu v0,v0,v1
    jal func_0012e880
    .word 0xac510000
    .word 0x8e04007c
    jal func_00142aa0
    .word 0x72202e28
    .word 0x70408e28
    nop
L12a9e8:
    bnez s1,L12a9b0
    nop
    jal func_00203df0
    addiu a0,zero,1
    jal func_001c35a0
    .word 0xae0200c4
    .word 0x8e0400c4
    .word 0x70408e28
    jal func_00203d40
    .word 0x72202e28
    jal func_001c3b70
    .word 0x72202628
    addiu a0,s0,40
    .word 0x70409628
    jal func_001ce160
    .word 0x70802e28
    .word 0xc6020028
    .word 0xc601002c
    .word 0xc6000030
    .word 0x3c023f80
    .word 0x72402628
    .word 0xe6420020
    .word 0xe6410024
    .word 0xe6400028
    .word 0xae400010
    .word 0xae420014
    .word 0xae400018
    .word 0xc6430014
    .word 0xc6420028
    .word 0xc6410018
    .word 0xc6400024
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc6430018
    .word 0xc6420020
    .word 0xc6410010
    .word 0xc6400028
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe6400004
    .word 0xc6430010
    .word 0xc6420024
    .word 0xc6410014
    .word 0xc6400020
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe6400008
    .word 0xc6430024
    .word 0xc6420008
    .word 0xc6410028
    .word 0xc6400004
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe6400010
    .word 0xc6430028
    .word 0xc6420000
    .word 0xc6410020
    .word 0xc6400008
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe6400014
    .word 0xc6430020
    .word 0xc6420004
    .word 0xc6410024
    .word 0xc6400000
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    jal func_001c7320
    .word 0xe6400018
    jal func_001c3b00
    .word 0x72202628
    .word 0x92020034
    bltz v0,L12ab24
    srl v1,v0,0x1
    .word 0x44820000
    b L12ab3c
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L12ab24:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L12ab3c:
    .word 0x3c02437f
    .word 0x44820000
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe7a00060
    .word 0x92020035
    bltz v0,L12ab70
    srl v1,v0,0x1
    .word 0x44820000
    b L12ab88
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L12ab70:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L12ab88:
    .word 0x3c02437f
    .word 0x44820000
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe7a00064
    .word 0x92020036
    bltz v0,L12abbc
    srl v1,v0,0x1
    .word 0x44820000
    b L12abd4
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L12abbc:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L12abd4:
    .word 0x3c02437f
    .word 0x44820000
    nop
    div.s $f0,$f1,$f0
    .word 0x3c023f80
    .word 0xe7a00068
    .word 0xafa2006c
    .word 0x8e0400c4
    jal func_00203c80
    addiu a1,sp,96
    b L12b020
    .word 0x70008e28
L12ac04:
    b L12b010
    .word 0x70009628
    sll v0,s1,0x1
L12ac10:
    addu v0,v0,s1
    sll v1,v0,0x2
    .word 0x3c02002e
    addiu v0,v0,-8416
    addu v0,v0,v1
    .word 0x8c420000
    beqzl v0,L12b00c
    addiu s2,s2,1
    .word 0x3c02002e
    addiu v0,v0,-8416
    addu v0,v0,v1
    .word 0x8c470000
    .word 0x3c01002e
    .word 0x8c26def0
    addiu a0,sp,112
    .word 0x3c02002f
    jal func_001214b8
    addiu a1,v0,-16416
    sll v0,s1,0x3
    subu v0,v0,s1
    sll v0,v0,0x2
    addu v0,v0,s1
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    .word 0x3c01002e
    addu v0,v0,s2
    .word 0x8c26def4
    sll v0,v0,0x2
    addu v0,v1,v0
    addiu a0,v0,200
    addiu a1,sp,112
    jal func_001a98c0
    addiu a3,zero,106
    beqz v0,L12ad0c
    sll v0,s1,0x1
    sll v0,s1,0x3
    subu v0,v0,s1
    sll v0,v0,0x2
    addu v0,v0,s1
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v1,v0
    addiu a0,v0,200
    sll v0,s1,0x1
    addu v0,v0,s1
    sll v1,v0,0x2
    .word 0x3c02002e
    addiu v0,v0,-8408
    addu v0,v0,v1
    .word 0x3c01002e
    .word 0xc421def8
    .word 0xc4400000
    jal func_001a8b70
    mul.s $f12,$f1,$f0
    sll v0,s1,0x1
L12ad0c:
    addu v0,v0,s1
    sll v1,v0,0x2
    .word 0x3c02002e
    addiu v0,v0,-8416
    addu v0,v0,v1
    .word 0x8c470000
    .word 0x3c01002e
    .word 0x8c26df14
    addiu a0,sp,112
    .word 0x3c02002f
    jal func_001214b8
    addiu a1,v0,-16416
    sll v0,s1,0x3
    subu v0,v0,s1
    sll v0,v0,0x2
    addu v0,v0,s1
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    .word 0x3c01002e
    addu v0,v0,s2
    .word 0x8c26df18
    sll v0,v0,0x2
    addu v0,v1,v0
    addiu a0,v0,9248
    addiu a1,sp,112
    jal func_001a98c0
    addiu a3,zero,106
    beqz v0,L12adf4
    sll v0,s1,0x1
    sll v0,s1,0x3
    subu v0,v0,s1
    sll v0,v0,0x2
    addu v0,v0,s1
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v1,v0
    addiu a0,v0,9248
    sll v0,s1,0x1
    addu v0,v0,s1
    sll v1,v0,0x2
    .word 0x3c02002e
    addiu v0,v0,-8408
    addu v0,v0,v1
    .word 0x3c01002e
    .word 0xc421df1c
    .word 0xc4400000
    jal func_001a8b70
    mul.s $f12,$f1,$f0
    nop
    sll v0,s1,0x1
L12adf4:
    addu v0,v0,s1
    sll v1,v0,0x2
    .word 0x3c02002e
    addiu v0,v0,-8416
    addu v0,v0,v1
    .word 0x8c470000
    .word 0x3c01002e
    .word 0x8c26defc
    addiu a0,sp,112
    .word 0x3c02002f
    jal func_001214b8
    addiu a1,v0,-16416
    sll v0,s1,0x3
    subu v0,v0,s1
    sll v0,v0,0x2
    addu v0,v0,s1
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    .word 0x3c01002e
    addu v0,v0,s2
    .word 0x8c26df00
    sll v0,v0,0x2
    addu v0,v1,v0
    addiu a0,v0,3216
    addiu a1,sp,112
    jal func_001a98c0
    addiu a3,zero,106
    beqz v0,L12aedc
    sll v0,s1,0x1
    sll v0,s1,0x3
    subu v0,v0,s1
    sll v0,v0,0x2
    addu v0,v0,s1
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v1,v0
    addiu a0,v0,3216
    sll v0,s1,0x1
    addu v0,v0,s1
    sll v1,v0,0x2
    .word 0x3c02002e
    addiu v0,v0,-8408
    addu v0,v0,v1
    .word 0x3c01002e
    .word 0xc421df04
    .word 0xc4400000
    jal func_001a8b70
    mul.s $f12,$f1,$f0
    nop
    sll v0,s1,0x1
L12aedc:
    addu v0,v0,s1
    sll v1,v0,0x2
    .word 0x3c02002e
    addiu v0,v0,-8416
    addu v0,v0,v1
    .word 0x8c470000
    .word 0x3c01002e
    .word 0x8c26df08
    addiu a0,sp,112
    .word 0x3c02002f
    jal func_001214b8
    addiu a1,v0,-16416
    sll v0,s1,0x3
    subu v0,v0,s1
    sll v0,v0,0x2
    addu v0,v0,s1
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    .word 0x3c01002e
    addu v0,v0,s2
    .word 0x8c26df0c
    sll v0,v0,0x2
    addu v0,v1,v0
    addiu a0,v0,6232
    addiu a1,sp,112
    jal func_001a98c0
    addiu a3,zero,106
    beqz v0,L12b008
    nop
    sll v0,s1,0x3
    subu v0,v0,s1
    sll v0,v0,0x2
    addu v0,v0,s1
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v1,v0
    addiu a0,v0,6232
    sll v0,s1,0x1
    addu v0,v0,s1
    sll v1,v0,0x2
    .word 0x3c02002e
    addiu v0,v0,-8408
    addu v0,v0,v1
    .word 0x3c01002e
    .word 0xc421df10
    .word 0xc4400000
    jal func_001a8b70
    mul.s $f12,$f1,$f0
    sll v0,s1,0x3
    subu v0,v0,s1
    sll v0,v0,0x2
    addu v0,v0,s1
    sll v0,v0,0x3
    addu v1,s0,v0
    sll v0,s2,0x3
    subu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v0,s2
    sll v0,v0,0x2
    addu v0,v1,v0
    addiu a0,v0,6232
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44826000
    jal func_001a8850
    nop
    nop
L12b008:
    addiu s2,s2,1
L12b00c:
    nop
L12b010:
    slti v0,s2,2
    bnez v0,L12ac10
    sll v0,s1,0x1
    addiu s1,s1,1
L12b020:
    slti v0,s1,13
    bnez v0,L12ac04
    nop
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,176
}
