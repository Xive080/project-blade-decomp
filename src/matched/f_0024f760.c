extern void func_00234ff0(void);
extern void func_0024ff10(void);
extern void func_00188ff0(void);
extern void func_0024afb0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8c8300e4
    .word 0x46006506
    beqz v1,L24fce0
    paddub s0,a0,zero
    .word 0xc6010108
    .word 0x3c033f80
    .word 0xc6000100
    .word 0x44831000
    mul.s $f1,$f20,$f1
    add.s $f0,$f0,$f1
    .word 0xe6000100
    .word 0xc601010c
    .word 0xc6000104
    mul.s $f1,$f20,$f1
    add.s $f0,$f0,$f1
    .word 0xe6000104
    .word 0xc6000100
    c.le.s $f0,$f2
    nop
    bc1t L24f7d4
    nop
    .word 0xae030100
L24f7d4:
    .word 0xc6010104
    .word 0x3c033f80
    .word 0x44830000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L24f7f8
    nop
    .word 0xae030104
L24f7f8:
    .word 0xc6000100
    .word 0x3c033f80
    .word 0x44830800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L24f874
    nop
    .word 0xc6000104
    c.eq.s $f1,$f0
    nop
    bc1f L24f874
    nop
    .word 0xc6010110
    .word 0x44800000
    nop
    sub.s $f1,$f1,$f20
    c.le.s $f1,$f0
    nop
    bc1f L24f874
    .word 0xe6010110
    jal func_00234ff0
    nop
    .word 0x8e0300e4
    .word 0x8c630008
    .word 0x0043001b
    nop
    nop
    mfhi a1
    jal func_0024ff10
    paddub a0,s0,zero
L24f874:
    .word 0xc6020134
    .word 0x3c033f80
    .word 0xc600012c
    .word 0x44830800
    mul.s $f2,$f20,$f2
    add.s $f0,$f0,$f2
    .word 0xe600012c
    .word 0xc6020138
    .word 0xc6000130
    mul.s $f2,$f20,$f2
    add.s $f0,$f0,$f2
    .word 0xe6000130
    .word 0xc600012c
    c.lt.s $f0,$f1
    nop
    bc1f L24f8cc
    nop
    .word 0xc6000130
    c.lt.s $f0,$f1
    nop
    bc1t L24fa48
    nop
L24f8cc:
    jal func_00234ff0
    nop
    .word 0xc600012c
    .word 0x3c033f80
    .word 0x44832800
    nop
    c.lt.s $f0,$f5
    nop
    bc1t L24f98c
    nop
    andi v1,v0,0x3ff
    .word 0x44830000
    .word 0xc6020124
    cvt.s.w $f1,$f0
    .word 0x3c03447f
    ori a0,v1,0xc000
    .word 0x3c033eb3
    ori v1,v1,0x3333
    .word 0xe602011c
    .word 0x44840000
    .word 0x44832000
    div.s $f0,$f1,$f0
    andi a1,v0,0xff
    .word 0xae00012c
    .word 0x3c033e19
    ori a2,v1,0x999a
    .word 0x3c033ccc
    .word 0x3c0442ff
    ori v1,v1,0xcccd
    .word 0x44850800
    nop
    .word 0xe6000134
    cvt.s.w $f1,$f1
    .word 0xc6030134
    .word 0x44840000
    .word 0x44861000
    div.s $f0,$f1,$f0
    mul.s $f1,$f4,$f3
    add.s $f1,$f2,$f1
    .word 0xe6010134
    sub.s $f1,$f0,$f5
    .word 0xc6020134
    .word 0x44830000
    nop
    mul.s $f0,$f0,$f1
    div.s $f1,$f5,$f2
    .word 0xe6010134
    .word 0xe6000124
L24f98c:
    .word 0xc6000130
    .word 0x3c033f80
    .word 0x44832800
    nop
    c.lt.s $f0,$f5
    nop
    bc1t L24fa48
    nop
    andi v1,v0,0xfff
    .word 0x44830000
    .word 0xc6020128
    cvt.s.w $f1,$f0
    .word 0x3c03457f
    ori a0,v1,0xf000
    .word 0x3c033eb3
    ori v1,v1,0x3333
    .word 0xe6020120
    .word 0x44840000
    .word 0x44832000
    div.s $f0,$f1,$f0
    andi a1,v0,0x3fff
    .word 0x3c033e19
    ori a2,v1,0x999a
    .word 0xae000130
    .word 0x3c0345ff
    ori a0,v1,0xfc00
    .word 0x3c033ccc
    ori v1,v1,0xcccd
    .word 0x44850800
    nop
    .word 0xe6000138
    cvt.s.w $f1,$f1
    .word 0xc6030138
    .word 0x44840000
    .word 0x44861000
    div.s $f0,$f1,$f0
    mul.s $f1,$f4,$f3
    add.s $f1,$f2,$f1
    .word 0xe6010138
    sub.s $f1,$f0,$f5
    .word 0xc6020138
    .word 0x44830000
    nop
    mul.s $f0,$f0,$f1
    div.s $f1,$f5,$f2
    .word 0xe6010138
    .word 0xe6000128
L24fa48:
    .word 0xc60700f0
    .word 0xc60300fc
    .word 0xc60400e8
    .word 0xc60100f4
    .word 0xc60600ec
    .word 0xc60200f8
    .word 0xc6000104
    sub.s $f3,$f3,$f7
    .word 0xc6050100
    .word 0xc608012c
    .word 0x3c033f00
    sub.s $f1,$f1,$f4
    mul.s $f0,$f0,$f3
    sub.s $f2,$f2,$f6
    mul.s $f1,$f5,$f1
    mul.s $f2,$f5,$f2
    .word 0x44831800
    add.s $f1,$f4,$f1
    add.s $f2,$f6,$f2
    c.le.s $f8,$f3
    nop
    bc1t L24fad0
    add.s $f0,$f7,$f0
    .word 0x3c033f80
    .word 0x44832000
    nop
    sub.s $f5,$f4,$f8
    .word 0x3c034000
    .word 0x44831800
    nop
    mul.s $f3,$f3,$f5
    mul.s $f3,$f3,$f5
    b L24fae4
    sub.s $f8,$f4,$f3
L24fad0:
    .word 0x3c034000
    .word 0x44831800
    nop
    mul.s $f3,$f3,$f8
    mul.s $f8,$f8,$f3
L24fae4:
    .word 0xc605011c
    .word 0xc6040124
    .word 0x3c033f00
    .word 0xc6060130
    .word 0x44831800
    sub.s $f4,$f4,$f5
    mul.s $f4,$f8,$f4
    add.s $f4,$f5,$f4
    c.le.s $f6,$f3
    nop
    bc1t L24fb40
    add.s $f1,$f1,$f4
    .word 0x3c033f80
    .word 0x44832000
    nop
    sub.s $f5,$f4,$f6
    .word 0x3c034000
    .word 0x44831800
    nop
    mul.s $f3,$f3,$f5
    mul.s $f3,$f3,$f5
    b L24fb54
    sub.s $f6,$f4,$f3
L24fb40:
    .word 0x3c034000
    .word 0x44831800
    nop
    mul.s $f3,$f3,$f6
    mul.s $f6,$f6,$f3
L24fb54:
    .word 0xc6040120
    .word 0xc6030128
    .word 0x8e040084
    addiu v1,zero,4
    sub.s $f3,$f3,$f4
    mul.s $f3,$f6,$f3
    add.s $f3,$f4,$f3
    beq a0,v1,L24fcac
    add.s $f2,$f2,$f3
    .word 0x3c033c23
    ori v1,v1,0xd70a
    .word 0x44831800
    nop
    c.lt.s $f1,$f3
    nop
    bc1f L24fba4
    .word 0x3c033f7d
    b L24fbc4
    .word 0x46001846
    .word 0x3c033f7d
L24fba4:
    ori v1,v1,0x70a4
    .word 0x44831800
    nop
    c.le.s $f1,$f3
    nop
    bc1t L24fbc8
    .word 0x3c033c23
    .word 0x46001846
L24fbc4:
    .word 0x3c033c23
L24fbc8:
    ori v1,v1,0xd70a
    .word 0x44831800
    nop
    c.lt.s $f2,$f3
    nop
    bc1f L24fbf0
    .word 0x3c033f7d
    b L24fc10
    .word 0x46001886
    .word 0x3c033f7d
L24fbf0:
    ori v1,v1,0x70a4
    .word 0x44831800
    nop
    c.le.s $f2,$f3
    nop
    bc1tl L24fc14
    sub.s $f3,$f1,$f0
    .word 0x46001886
L24fc10:
    sub.s $f3,$f1,$f0
L24fc14:
    .word 0x44802000
    nop
    c.lt.s $f3,$f4
    nop
    bc1f L24fc30
    nop
    .word 0x46000806
L24fc30:
    .word 0xc60500dc
    .word 0x44801800
    mul.s $f4,$f0,$f5
    sub.s $f4,$f2,$f4
    c.lt.s $f4,$f3
    nop
    bc1f L24fc5c
    add.s $f4,$f1,$f0
    .word 0xc60000e0
    mul.s $f0,$f2,$f0
    add.s $f4,$f1,$f0
L24fc5c:
    .word 0x3c033f80
    .word 0x44831800
    nop
    c.le.s $f4,$f3
    nop
    bc1tl L24fc80
    mul.s $f3,$f0,$f5
    sub.s $f0,$f3,$f1
    mul.s $f3,$f0,$f5
L24fc80:
    .word 0x3c033f80
    add.s $f4,$f2,$f3
    .word 0x44831800
    nop
    c.le.s $f4,$f3
    nop
    bc1t L24fcac
    nop
    .word 0xc60000e0
    sub.s $f3,$f3,$f2
    mul.s $f0,$f3,$f0
L24fcac:
    .word 0x8e030098
    sub.s $f3,$f1,$f0
    add.s $f1,$f1,$f0
    .word 0xe463003c
    .word 0xc60300dc
    mul.s $f3,$f0,$f3
    sub.s $f3,$f2,$f3
    .word 0xe4630040
    .word 0xe4610044
    .word 0xc60100dc
    mul.s $f0,$f0,$f1
    add.s $f0,$f2,$f0
    .word 0xe4600048
L24fce0:
    .word 0x8e03009c
    beqz v1,L24fd4c
    nop
    .word 0xc6010114
    .word 0x44800000
    nop
    sub.s $f1,$f1,$f20
    c.lt.s $f1,$f0
    nop
    bc1f L24fd4c
    .word 0xe6010114
    .word 0x8e04009c
    .word 0x3c033f80
    .word 0x44831000
    .word 0x3c033cf5
    ori v1,v1,0xc28f
    .word 0xc481003c
    .word 0x44830000
    nop
    sub.s $f1,$f2,$f1
    .word 0xe481003c
    .word 0xc4810044
    sub.s $f1,$f2,$f1
    .word 0xe4810044
    .word 0xc6010114
    add.s $f0,$f1,$f0
    .word 0xe6000114
L24fd4c:
    .word 0xc6010118
    .word 0x44800000
    nop
    sub.s $f1,$f1,$f20
    c.le.s $f1,$f0
    nop
    bc1f L24fee4
    .word 0xe6010118
    .word 0xc6010118
    .word 0x3c023d4c
    ori v0,v0,0xcccd
    .word 0x44820000
    addiu s3,s0,40
    add.s $f0,$f1,$f0
    .word 0xe6000118
    .word 0x8e02002c
    .word 0x8e0400a0
    .word 0x8e110028
    beqz a0,L24fdbc
    addiu s2,v0,2
    jal func_00188ff0
    nop
    jal func_00188ff0
    .word 0x8e0400a4
    jal func_00188ff0
    .word 0x8e0400a8
    jal func_00188ff0
    .word 0x8e0400ac
L24fdbc:
    .word 0x3c0241a0
    .word 0x44827800
    .word 0xc6000090
    .word 0x3c024220
    .word 0x44820800
    .word 0xc60c0088
    .word 0xc60d008c
    .word 0x3c024020
    add.s $f14,$f1,$f0
    paddub a0,s1,zero
    paddub a1,s2,zero
    .word 0x44828000
    jal func_0024afb0
    .word 0x70003628
    .word 0xae0200a0
    .word 0xc6000088
    .word 0x3c0241a0
    .word 0x44822000
    .word 0xc6030090
    .word 0x3c024270
    .word 0x44821000
    sub.s $f12,$f0,$f4
    .word 0x3c034140
    .word 0x3c024020
    .word 0xc601008c
    .word 0xc6000094
    add.s $f3,$f4,$f3
    paddub a0,s1,zero
    paddub a1,s2,zero
    .word 0x70003628
    add.s $f14,$f2,$f3
    .word 0x44837800
    .word 0x44828000
    jal func_0024afb0
    add.s $f13,$f1,$f0
    .word 0xae0200a4
    .word 0x3c0241a0
    .word 0x44827800
    .word 0xc6020094
    .word 0xc601008c
    .word 0x3c024220
    .word 0x44820000
    .word 0xc60c0088
    .word 0x3c024020
    add.s $f14,$f0,$f2
    addiu a2,zero,1
    paddub a0,s1,zero
    add.s $f13,$f1,$f2
    .word 0x44828000
    jal func_0024afb0
    paddub a1,s2,zero
    .word 0xae0200a8
    .word 0x8e630000
    .word 0x8f8689f0
    .word 0x3c0241a0
    .word 0x44821000
    .word 0xc6010088
    .word 0xc6000090
    .word 0xc4640014
    .word 0xc4c500b8
    .word 0x3c024140
    .word 0x44827800
    .word 0xc603008c
    .word 0x3c024020
    add.s $f12,$f1,$f0
    addiu a2,zero,1
    paddub a0,s1,zero
    sub.s $f13,$f5,$f4
    paddub a1,s2,zero
    sub.s $f0,$f13,$f3
    .word 0x44828000
    jal func_0024afb0
    add.s $f14,$f2,$f0
    .word 0xae0200ac
L24fee4:
    .word 0x7bbf0050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,96
}


