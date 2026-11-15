extern void func_0015d100(void);
extern void func_00163f20(void);
extern void func_00165590(void);
extern void func_00165f40(void);
extern void func_001663b0(void);
extern void func_00166f90(void);
extern void func_00167400(void);
extern void func_00167780(void);
extern void func_00168ea0(void);
extern void func_0016b090(void);
extern void func_0017b870(void);
extern void func_0017bb00(void);
extern void func_0017e1d0(void);
extern void func_001c3b00(void);
extern void func_001c3b70(void);
extern void func_001c42c0(void);
extern void func_001c7320(void);
extern void func_001c73c0(void);
extern void func_001ce160(void);
extern void func_001f79f0(void);
extern void func_00234ff0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-224
    .word 0x7fbf0070
    .word 0x7fb40060
    .word 0x7fb30050
    .word 0x7fb20040
    .word 0x7fb10030
    .word 0x7fb00020
    .word 0xe7b50014
    .word 0x3c027000
    .word 0xe7b40010
    ori v0,v0,0x3fa8
    .word 0x70808628
    .word 0x70808e28
    .word 0x8c840068
    jal func_001c3b70
    .word 0xc4550000
    .word 0xc4410030
    .word 0xc60000fc
    .word 0x3c037000
    ori v1,v1,0x3fb0
    .word 0xc603017c
    .word 0xc4620000
    .word 0x70409628
    sub.s $f0,$f1,$f0
    .word 0x72402628
    .word 0x72402e28
    .word 0xe4400030
    .word 0xc4410034
    .word 0xc6000100
    sub.s $f20,$f3,$f2
    sub.s $f0,$f1,$f0
    .word 0xe4400034
    .word 0xc4410038
    .word 0xc6000104
    sub.s $f0,$f1,$f0
    .word 0xe4400038
    .word 0xc4410020
    .word 0xc6000114
    sub.s $f0,$f1,$f0
    .word 0xe4400020
    .word 0xc4410024
    .word 0xc6000118
    sub.s $f0,$f1,$f0
    .word 0xe4400024
    .word 0xc4410028
    .word 0xc600011c
    sub.s $f0,$f1,$f0
    .word 0xe4400028
    .word 0xc4430014
    .word 0xc4420028
    .word 0xc4410018
    .word 0xc4400024
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc4430018
    .word 0xc4420020
    .word 0xc4410010
    .word 0xc4400028
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400004
    .word 0xc4430010
    .word 0xc4420024
    .word 0xc4410014
    .word 0xc4400020
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400008
    .word 0xc4430024
    .word 0xc4420008
    .word 0xc4410028
    .word 0xc4400004
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400010
    .word 0xc4430028
    .word 0xc4420000
    .word 0xc4410020
    .word 0xc4400008
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400014
    .word 0xc4430020
    .word 0xc4420004
    .word 0xc4410024
    .word 0xc4400000
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400018
    .word 0xc4430014
    .word 0xc4420028
    .word 0xc4410018
    .word 0xc4400024
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc4430018
    .word 0xc4420020
    .word 0xc4410010
    .word 0xc4400028
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400004
    .word 0xc4430010
    .word 0xc4420024
    .word 0xc4410014
    .word 0xc4400020
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    jal func_001c73c0
    .word 0xe4400008
    .word 0x8e23003c
    .word 0x3c020020
    beq v1,v0,L162e5c
    nop
    .word 0x3c020040
    bne v1,v0,L162f1c
    nop
L162e5c:
    .word 0x44800000
    nop
    c.lt.s $f20,$f0
    nop
    bc1f L162f1c
    nop
    .word 0x8e02003c
    beqz v0,L162ec8
    addiu s4,s0,60
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L162ec8
    nop
    .word 0x8e02000c
    .word 0x72002628
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s3,s0,12
    beqz v0,L162ec8
    nop
    .word 0x8e620000
    .word 0x72002628
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L162ec8:
    .word 0x8e820000
    addiu a1,zero,16
    beq v0,a1,L162f1c
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L162f1c
    nop
    .word 0x8e02000c
    .word 0x72002628
    .word 0x8c420010
    jalr ra,v0
    addiu s3,s0,12
    beqz v0,L162f1c
    nop
    .word 0x8e620000
    addiu a1,zero,16
    .word 0x72002628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L162f1c:
    .word 0x8e23003c
    addiu v0,zero,64
    beq v1,v0,L162fe0
    .word 0x72002628
    addiu v0,zero,512
    beq v1,v0,L162fdc
    nop
    addiu v0,zero,4096
    beq v1,v0,L162fdc
    nop
    addiu v0,zero,2048
    beq v1,v0,L162fdc
    nop
    addiu v0,zero,1024
    beq v1,v0,L162fdc
    nop
    addiu v0,zero,256
    beq v1,v0,L162fdc
    nop
    addiu v0,zero,8192
    beq v1,v0,L162fdc
    nop
    addiu v0,zero,128
    beq v1,v0,L162fdc
    nop
    .word 0x3c020008
    beq v1,v0,L162fdc
    nop
    .word 0x3c020004
    beq v1,v0,L162fdc
    nop
    .word 0x3c020002
    beq v1,v0,L162fdc
    nop
    .word 0x3c020010
    beq v1,v0,L162fdc
    nop
    .word 0x3c020001
    beq v1,v0,L162fdc
    nop
    .word 0x3c020020
    beq v1,v0,L162fdc
    nop
    .word 0x3c020040
    beq v1,v0,L162fdc
    nop
    b L162fec
    .word 0x3c017000
L162fdc:
    .word 0x72002628
L162fe0:
    jal func_00163f20
    nop
    .word 0x3c017000
L162fec:
    .word 0xc4213fac
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L163028
    .word 0x3c023c88
    .word 0x3c017000
    .word 0xc4203fa8
    div.s $f12,$f0,$f1
    nop
    nop
    b L163030
    nop
    .word 0x3c023c88
L163028:
    ori v0,v0,0x8889
    .word 0x44826000
L163030:
    .word 0xc6000170
    .word 0x44800800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L16306c
    nop
    sub.s $f0,$f0,$f12
    c.le.s $f0,$f1
    nop
    bc1f L16306c
    .word 0xe6000170
    addiu v0,zero,1
    .word 0xae000170
    .word 0xae020174
L16306c:
    .word 0x8e23003c
    .word 0x3c020080
    beq v1,v0,L163180
    addiu a0,zero,1
    addiu v0,zero,16384
    beq v1,v0,L16316c
    .word 0x72202628
    ori v0,zero,32768
    beq v1,v0,L163168
    nop
    addiu v0,zero,32
    beq v1,v0,L163158
    .word 0x72202628
    addiu v0,zero,16
    beq v1,v0,L163144
    .word 0x72202628
    addiu v0,zero,8
    beq v1,v0,L163120
    .word 0x72202628
    addiu v0,zero,4
    beq v1,v0,L1630fc
    .word 0x72202628
    addiu v0,zero,2
    beq v1,v0,L1630e8
    .word 0x72202628
    addiu v0,zero,1
    beq v1,v0,L163188
    nop
    b L16318c
    .word 0xc6020094
    .word 0x72202628
L1630e8:
    jal func_00167780
    mov.s $f12,$f21
    b L163188
    nop
    .word 0x72202628
L1630fc:
    jal func_00167400
    nop
    jal func_001c7320
    .word 0x72402628
    jal func_001c3b00
    .word 0x8e040068
    b L163ec0
    .word 0x7bbf0070
    .word 0x72202628
L163120:
    jal func_00166f90
    nop
    jal func_001c7320
    .word 0x72402628
    jal func_001c3b00
    .word 0x8e040068
    b L163ebc
    nop
    .word 0x72202628
L163144:
    jal func_001663b0
    mov.s $f12,$f21
    b L163188
    nop
    .word 0x72202628
L163158:
    jal func_00165590
    mov.s $f12,$f21
    b L163188
    nop
L163168:
    .word 0x72202628
L16316c:
    jal func_00165f40
    mov.s $f12,$f21
    b L163188
    nop
    addiu a0,zero,1
L163180:
    jal func_00168ea0
    nop
L163188:
    .word 0xc6020094
L16318c:
    .word 0xc6400030
    addiu v1,sp,132
    .word 0x44800800
    addiu a0,sp,136
    sub.s $f0,$f2,$f0
    .word 0xe7a00080
    .word 0xc6020098
    .word 0xc6400034
    sub.s $f0,$f2,$f0
    .word 0xe4600000
    .word 0xc602009c
    .word 0xc6400038
    sub.s $f0,$f2,$f0
    .word 0xe4800000
    .word 0xc7a00080
    c.eq.s $f1,$f0
    nop
    bc1f L163200
    nop
    .word 0xc4600000
    c.eq.s $f1,$f0
    nop
    bc1f L163200
    nop
    .word 0xc4800000
    c.eq.s $f1,$f0
    nop
    bc1t L163358
    nop
L163200:
    .word 0xc7a10080
    .word 0xc600007c
    mul.s $f0,$f1,$f0
    .word 0xe7a00080
    .word 0x8e020010
    andi v0,v0,0x80
    beqz v0,L163254
    nop
    .word 0xc6010080
    .word 0xc600007c
    c.lt.s $f1,$f0
    nop
    bc1fl L163244
    mov.s $f1,$f0
    b L163248
    .word 0xc4600000
    mov.s $f1,$f0
L163244:
    .word 0xc4600000
L163248:
    mul.s $f0,$f0,$f1
    b L163264
    .word 0xe4600000
L163254:
    .word 0xc4610000
    .word 0xc600007c
    mul.s $f0,$f1,$f0
    .word 0xe4600000
L163264:
    .word 0xc4810000
    .word 0xc600007c
    .word 0x44801800
    mul.s $f0,$f1,$f0
    .word 0xe4800000
    .word 0xc6090160
    c.eq.s $f9,$f3
    nop
    bc1t L163328
    nop
    .word 0xc6050164
    .word 0xc7a60080
    .word 0xc6040168
    .word 0xc4600000
    .word 0xc607016c
    .word 0xc4880000
    mul.s $f2,$f5,$f6
    mul.s $f1,$f4,$f0
    adda.s $f2,$f1
    madd.s $f0,$f7,$f8
    c.lt.s $f0,$f3
    nop
    bc1f L163300
    .word 0x3c017000
    adda.s $f2,$f1
    madd.s $f0,$f8,$f7
    mul.s $f1,$f9,$f0
    mul.s $f0,$f5,$f1
    sub.s $f0,$f6,$f0
    .word 0xe7a00080
    mul.s $f2,$f4,$f1
    mul.s $f0,$f7,$f1
    .word 0xc4610000
    sub.s $f1,$f1,$f2
    .word 0xe4610000
    .word 0xc4810000
    sub.s $f0,$f1,$f0
    .word 0xe4800000
    .word 0x3c017000
L163300:
    .word 0xc6020160
    .word 0xc4213fa8
    .word 0x44800000
    nop
    sub.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1f L163328
    .word 0xe6010160
    .word 0xae000160
L163328:
    .word 0xc6410030
    .word 0xc7a00080
    add.s $f0,$f1,$f0
    .word 0xe6400030
    .word 0xc6410034
    .word 0xc4600000
    add.s $f0,$f1,$f0
    .word 0xe6400034
    .word 0xc6410038
    .word 0xc4800000
    add.s $f0,$f1,$f0
    .word 0xe6400038
L163358:
    .word 0x8e020010
    andi v0,v0,0x100
    beqz v0,L16347c
    nop
    .word 0xc60100ac
    .word 0xc6400010
    .word 0x3c023f80
    .word 0x44821800
    sub.s $f0,$f1,$f0
    .word 0xe7a00080
    .word 0xc60100b0
    .word 0xc6400014
    sub.s $f0,$f1,$f0
    .word 0xe4600000
    .word 0xc60100b4
    .word 0xc6400018
    sub.s $f0,$f1,$f0
    .word 0xe4800000
    .word 0xc6000088
    mul.s $f2,$f0,$f21
    c.lt.s $f2,$f3
    nop
    bc1fl L1633c4
    mov.s $f2,$f3
    b L1633c8
    .word 0xc7a10080
    mov.s $f2,$f3
L1633c4:
    .word 0xc7a10080
L1633c8:
    .word 0x3c023f80
    .word 0x44820000
    nop
    mul.s $f1,$f1,$f2
    .word 0xe7a10080
    .word 0xc6010088
    mul.s $f2,$f1,$f21
    c.lt.s $f2,$f0
    nop
    bc1fl L163400
    mov.s $f2,$f0
    b L163404
    .word 0xc4610000
    mov.s $f2,$f0
L163400:
    .word 0xc4610000
L163404:
    .word 0x3c023f80
    .word 0x44820000
    nop
    mul.s $f1,$f1,$f2
    .word 0xe4610000
    .word 0xc6010088
    mul.s $f1,$f1,$f21
    c.lt.s $f1,$f0
    nop
    bc1fl L16343c
    mov.s $f1,$f0
    b L163440
    .word 0xc4800000
    mov.s $f1,$f0
L16343c:
    .word 0xc4800000
L163440:
    mul.s $f0,$f0,$f1
    .word 0xe4800000
    .word 0xc6410010
    .word 0xc7a00080
    add.s $f0,$f0,$f1
    .word 0xe7a00080
    .word 0xc4610000
    .word 0xc6400014
    add.s $f0,$f1,$f0
    .word 0xe4600000
    .word 0xc4810000
    .word 0xc6400018
    add.s $f0,$f1,$f0
    b L163498
    .word 0xe4800000
L16347c:
    .word 0xc60200ac
    .word 0xc60100b0
    .word 0xc60000b4
    addiu v0,sp,128
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
L163498:
    .word 0x8e020010
    andi v0,v0,0x400
    beqz v0,L1634b8
    nop
    .word 0x3c024270
    .word 0x44820000
    b L1634c4
    mul.s $f12,$f0,$f21
L1634b8:
    .word 0xc6000084
    nop
    mul.s $f12,$f0,$f21
L1634c4:
    addiu a1,s0,160
    addiu a2,sp,128
    addiu a3,zero,1
    .word 0x72402628
    jal func_0015d100
    .word 0x70004628
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0xc60000f8
    c.lt.s $f1,$f0
    nop
    bc1f L163650
    nop
    jal func_001f79f0
    nop
    andi v0,v0,0x7fff
    bltz v0,L16351c
    srl v1,v0,0x1
    .word 0x44820000
    b L163534
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L16351c:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L163534:
    .word 0x3c024700
    .word 0x44820800
    nop
    div.s $f1,$f0,$f1
    .word 0x3c023f00
    .word 0x44821000
    .word 0xc60000f4
    sub.s $f1,$f1,$f2
    mul.s $f0,$f0,$f1
    jal func_001f79f0
    .word 0xe60000fc
    andi v0,v0,0x7fff
    bltz v0,L16357c
    srl v1,v0,0x1
    .word 0x44820000
    b L163594
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L16357c:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L163594:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f2,$f1,$f0
    .word 0x3c023f00
    .word 0x44820800
    .word 0xc60000f4
    sub.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    jal func_001f79f0
    .word 0xe6000100
    andi v0,v0,0x7fff
    bltz v0,L1635dc
    srl v1,v0,0x1
    .word 0x44820000
    b L1635f4
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L1635dc:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L1635f4:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f2,$f1,$f0
    .word 0x3c023f00
    .word 0x44820800
    .word 0xc60000f4
    sub.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    .word 0xe6000104
    .word 0xc6410030
    .word 0xc60000fc
    add.s $f0,$f1,$f0
    .word 0xe6400030
    .word 0xc6410034
    .word 0xc6000100
    add.s $f0,$f1,$f0
    .word 0xe6400034
    .word 0xc6410038
    .word 0xc6000104
    add.s $f0,$f1,$f0
    b L16365c
    .word 0xe6400038
L163650:
    .word 0xae0000fc
    .word 0xae000100
    .word 0xae000104
L16365c:
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0xc6000148
    c.lt.s $f1,$f0
    nop
    bc1f L163a68
    nop
    .word 0xc6420020
    .word 0xc6410024
    .word 0xc6400028
    .word 0x3c023b03
    ori v0,v0,0x126f
    .word 0x44821800
    .word 0x3c023f80
    .word 0xe6020114
    .word 0xe6010118
    .word 0xe600011c
    .word 0xc6010138
    .word 0xc6000140
    .word 0x44822000
    div.s $f1,$f3,$f1
    add.s $f0,$f0,$f1
    .word 0xe6000140
    .word 0xc601013c
    .word 0xc6000144
    div.s $f1,$f3,$f1
    add.s $f0,$f0,$f1
    .word 0xe6000144
    .word 0xc6000140
    c.le.s $f0,$f4
    nop
    bc1t L163780
    nop
    .word 0xae000140
L1636e4:
    jal func_00234ff0
    nop
    andi v0,v0,0x7fff
    .word 0x44820000
    .word 0x3c044700
    cvt.s.w $f2,$f0
    .word 0x3c033f00
    .word 0x3c023e19
    ori v0,v0,0x999a
    .word 0x44840800
    .word 0x44830000
    nop
    div.s $f1,$f2,$f1
    sub.s $f2,$f1,$f0
    .word 0x44820800
    .word 0x44800000
    nop
    mul.s $f1,$f1,$f2
    .word 0xe6010130
    .word 0xc6010120
    .word 0xe6010128
    .word 0xc6020130
    .word 0xc6010128
    sub.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1tl L163760
    neg.s $f1,$f1
    b L163764
    .word 0x3c023a83
    neg.s $f1,$f1
L163760:
    .word 0x3c023a83
L163764:
    ori v0,v0,0x126f
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L1636e4
    .word 0xe6010138
L163780:
    .word 0xc6010144
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L163844
    .word 0x3c024040
    .word 0xae000144
L1637a4:
    jal func_00234ff0
    nop
    andi v0,v0,0x7fff
    .word 0x44820000
    .word 0x3c044700
    cvt.s.w $f2,$f0
    .word 0x3c033f00
    .word 0x3c023e19
    ori v0,v0,0x999a
    .word 0x44840800
    .word 0x44830000
    nop
    div.s $f1,$f2,$f1
    sub.s $f2,$f1,$f0
    .word 0x44820800
    .word 0x44800000
    nop
    mul.s $f1,$f1,$f2
    .word 0xe6010134
    .word 0xc6010124
    .word 0xe601012c
    .word 0xc6020134
    .word 0xc601012c
    sub.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1tl L163820
    neg.s $f1,$f1
    b L163824
    .word 0x3c023a83
    neg.s $f1,$f1
L163820:
    .word 0x3c023a83
L163824:
    ori v0,v0,0x126f
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L1637a4
    .word 0xe601013c
    .word 0x3c024040
L163844:
    .word 0x44824800
    .word 0xc6030140
    .word 0x3c024000
    .word 0x44824000
    .word 0xc6010134
    .word 0xc600012c
    addiu a0,s2,32
    mul.s $f4,$f8,$f3
    .word 0xc6050144
    .word 0xc6020130
    .word 0xc6070128
    .word 0x70802e28
    sub.s $f6,$f1,$f0
    mul.s $f3,$f3,$f3
    sub.s $f0,$f9,$f4
    mul.s $f3,$f0,$f3
    mul.s $f0,$f8,$f5
    sub.s $f1,$f9,$f0
    mul.s $f0,$f5,$f5
    mul.s $f1,$f1,$f0
    sub.s $f0,$f2,$f7
    mul.s $f0,$f0,$f3
    add.s $f0,$f0,$f7
    .word 0xe6000120
    .word 0xc600012c
    mul.s $f6,$f6,$f1
    add.s $f0,$f6,$f0
    .word 0xe6000124
    .word 0xc6070120
    .word 0xc6400004
    .word 0xc6450008
    .word 0xc6410020
    .word 0xc6080124
    .word 0xc6430014
    .word 0xc6420018
    mul.s $f6,$f0,$f7
    .word 0xc6440010
    .word 0xc6400000
    mul.s $f5,$f5,$f7
    mul.s $f0,$f0,$f7
    add.s $f0,$f1,$f0
    .word 0xe6400020
    .word 0xc6400024
    mul.s $f1,$f4,$f8
    add.s $f0,$f0,$f6
    .word 0xe6400024
    .word 0xc6400028
    mul.s $f3,$f3,$f8
    add.s $f0,$f0,$f5
    .word 0xe6400028
    .word 0xc6400020
    mul.s $f2,$f2,$f8
    add.s $f0,$f0,$f1
    .word 0xe6400020
    .word 0xc6400024
    add.s $f0,$f0,$f3
    .word 0xe6400024
    .word 0xc6400028
    add.s $f0,$f0,$f2
    jal func_001ce160
    .word 0xe6400028
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
    .word 0xe6400018
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
    .word 0xc6410020
    .word 0xc6000114
    sub.s $f0,$f1,$f0
    .word 0xe6000114
    .word 0xc6410024
    .word 0xc6000118
    sub.s $f0,$f1,$f0
    .word 0xe6000118
    .word 0xc6410028
    .word 0xc600011c
    sub.s $f0,$f1,$f0
    b L163a74
    .word 0xe600011c
L163a68:
    .word 0xae000114
    .word 0xae000118
    .word 0xae00011c
L163a74:
    .word 0x8e040010
    addiu v1,zero,-1025
    addiu v0,zero,16
    and v1,a0,v1
    .word 0xae030010
    .word 0x8e03003c
    beq v1,v0,L163b44
    nop
    addiu v0,zero,64
    beq v1,v0,L163b44
    nop
    addiu v0,zero,512
    beq v1,v0,L163b44
    nop
    addiu v0,zero,4096
    beq v1,v0,L163b44
    nop
    addiu v0,zero,2048
    beq v1,v0,L163b44
    nop
    addiu v0,zero,1024
    beq v1,v0,L163b44
    nop
    addiu v0,zero,256
    beq v1,v0,L163b44
    nop
    addiu v0,zero,8192
    beq v1,v0,L163b44
    nop
    addiu v0,zero,128
    beq v1,v0,L163b44
    nop
    .word 0x3c020008
    beq v1,v0,L163b44
    nop
    .word 0x3c020004
    beq v1,v0,L163b44
    nop
    .word 0x3c020002
    beq v1,v0,L163b44
    nop
    .word 0x3c020010
    beq v1,v0,L163b44
    nop
    .word 0x3c020001
    beq v1,v0,L163b44
    nop
    .word 0x3c020040
    beq v1,v0,L163b44
    nop
    b L163db4
    nop
L163b44:
    .word 0x3c02002e
    addiu v0,v0,-6784
    .word 0xdc430000
    .word 0xc4410008
    addiu a0,sp,176
    .word 0xfc830000
    .word 0xe4810008
    .word 0xaf908384
    .word 0xc6440034
    .word 0xc6030150
    .word 0x3c023f38
    .word 0xc6460030
    .word 0xc605014c
    .word 0xc6420038
    .word 0xc6010154
    sub.s $f3,$f4,$f3
    ori v0,v0,0xf5c3
    sub.s $f5,$f6,$f5
    sub.s $f4,$f2,$f1
    mul.s $f2,$f5,$f5
    mul.s $f1,$f3,$f3
    adda.s $f2,$f1
    .word 0x44820000
    madd.s $f1,$f4,$f4
    c.le.s $f1,$f0
    nop
    bc1t L163c50
    nop
    .word 0x3c017000
    .word 0x3c020016
    addiu t2,v0,27824
    .word 0x8c243fd8
    .word 0x3c020016
    addiu a1,s0,332
    addiu a2,s2,48
    addiu a3,sp,192
    addiu t0,sp,208
    addiu t3,v0,28080
    jal func_0017e1d0
    .word 0x70004e28
    beqz v0,L163c50
    nop
    .word 0xc7a000d0
    .word 0x3c023e80
    .word 0x44820800
    addiu v1,sp,216
    addiu v0,sp,212
    mul.s $f0,$f1,$f0
    .word 0xe7a000d0
    .word 0xc4400000
    mul.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc4600000
    mul.s $f0,$f1,$f0
    .word 0xe4600000
    .word 0xc7a100c0
    .word 0xc7a000d0
    add.s $f0,$f1,$f0
    .word 0xe6400030
    .word 0xc4400000
    .word 0xc7a100c4
    add.s $f0,$f1,$f0
    .word 0xe6400034
    .word 0xc4600000
    .word 0xc7a100c8
    add.s $f0,$f1,$f0
    .word 0xe6400038
L163c50:
    .word 0x3c020016
    addiu v0,v0,27824
    .word 0xffa20000
    .word 0x3c020016
    addiu v0,v0,28080
    .word 0xffa20008
    .word 0x3c027000
    ori v0,v0,0x3fd8
    .word 0x8c440000
    addiu a2,s2,48
    addiu a3,sp,176
    addiu t0,zero,3
    addiu t1,sp,144
    addiu t2,sp,160
    .word 0x72002e28
    jal func_0017b870
    .word 0x70005e28
    beqz v0,L163cf0
    nop
    .word 0xc6410030
    .word 0xc7a00090
    .word 0x3c033f80
    addiu v0,sp,160
    add.s $f0,$f1,$f0
    .word 0xe6400030
    .word 0xc6410034
    .word 0xc7a00094
    add.s $f0,$f1,$f0
    .word 0xe6400034
    .word 0xc6410038
    .word 0xc7a00098
    add.s $f0,$f1,$f0
    .word 0xe6400038
    .word 0xae030160
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6020164
    .word 0xe6010168
    .word 0xe600016c
L163cf0:
    .word 0x8e040158
    beqz a0,L163d10
    nop
    .word 0x8c830010
    addiu v0,zero,-9
    and v0,v1,v0
    .word 0xac820010
    .word 0xae000158
L163d10:
    .word 0x8e04015c
    beqz a0,L163d30
    nop
    .word 0x8c830010
    addiu v0,zero,-9
    and v0,v1,v0
    .word 0xac820010
    .word 0xae00015c
L163d30:
    .word 0xc7a000b0
    .word 0x3c024040
    .word 0x44820800
    addiu v1,sp,180
    .word 0x3c020016
    mul.s $f0,$f1,$f0
    addiu a0,sp,184
    addiu v0,v0,28432
    .word 0xe7a000b0
    .word 0xc4600000
    .word 0x3c017000
    addiu a2,s2,48
    addiu a3,sp,176
    mul.s $f0,$f1,$f0
    addiu t0,zero,2
    .word 0x72002e28
    .word 0x70004e28
    .word 0xe4600000
    .word 0xc4800000
    .word 0x70005628
    mul.s $f0,$f1,$f0
    .word 0xe4800000
    .word 0xffa20000
    .word 0x8c243fd8
    jal func_0017bb00
    .word 0x70005e28
    .word 0xaf808384
    .word 0xc6420030
    .word 0xc6410034
    .word 0xc6400038
    .word 0xe602014c
    .word 0xe6010150
    .word 0xe6000154
L163db4:
    jal func_0016b090
    nop
    beqz v0,L163e14
    .word 0x72402628
    .word 0x8e020068
    addiu a0,zero,8
    addiu a2,v0,16
    addiu a1,v0,80
L163dd4:
    .word 0x8cc30000
    .word 0x8cc20004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu a2,a2,8
    bgtz a0,L163dd4
    addiu a1,a1,8
    .word 0x8e040068
    .word 0x3c020016
    addiu a1,v0,16112
    jal func_001c42c0
    .word 0x70003628
    b L163e28
    .word 0x8e040064
    .word 0x72402628
L163e14:
    jal func_001c7320
    nop
    jal func_001c3b00
    .word 0x8e040068
    .word 0x8e040064
L163e28:
    addiu v1,zero,-1
    beq a0,v1,L163ebc
    nop
    sll v1,a0,0x1
    addu v1,v1,a0
    .word 0xc6420030
    sll a0,v1,0x2
    .word 0x3c030030
    addiu v1,v1,-23232
    .word 0xc6410034
    addu a0,v1,a0
    .word 0xc6400038
    .word 0x3c03afbf
    .word 0x3c017000
    ori v1,v1,0xcfdf
    .word 0xe4820000
    .word 0xe4810004
    .word 0xe4800008
    .word 0x8c243ffc
    bne a0,v1,L163ebc
    nop
    .word 0x8e050064
    .word 0x3c030030
    .word 0x3c017000
    addiu v1,v1,-23232
    ori at,at,0x3f90
    sll a0,a1,0x1
    addu a0,a0,a1
    sll a1,a0,0x2
    addu a0,v1,a1
    .word 0xc4820000
    .word 0xc4810004
    .word 0xc4800008
    addu v1,a1,at
    .word 0xe4620000
    .word 0xe4610004
    .word 0xe4600008
L163ebc:
    .word 0x7bbf0070
L163ec0:
    .word 0x7bb40060
    .word 0x7bb30050
    .word 0x7bb20040
    .word 0x7bb10030
    .word 0x7bb00020
    .word 0xc7b50014
    .word 0xc7b40010
    jr ra
    addiu sp,sp,224
}
