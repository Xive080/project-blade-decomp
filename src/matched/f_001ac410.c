extern void fn_1ce160(void);
extern void fn_1c3b80(void);
extern void fn_17f270(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x44800800
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xc480005c
    .word 0x8c90000c
    c.eq.s $f1,$f0
    nop
    bc1t L1ac44c
    paddub s3,a0,zero
    b L1ac77c
    .word 0x70001628
L1ac44c:
    .word 0x8e630008
    .word 0x3c010001
    addu at,v1,at
    .word 0x8c22ea74
    beqz v0,L1ac490
    .word 0x70001628
    .word 0x3c010001
    addu at,v1,at
    .word 0x8c22ea78
    beqz v0,L1ac48c
    nop
    .word 0x3c010001
    addu at,v1,at
    .word 0x8c22ea7c
    bnez v0,L1ac49c
    .word 0x3c010001
L1ac48c:
    .word 0x70001628
L1ac490:
    b L1ac780
    .word 0x7bbf0040
    .word 0x3c010001
L1ac49c:
    addu at,v1,at
    .word 0xc421ea34
    addiu a0,sp,96
    addiu s1,sp,100
    addiu s2,sp,104
    .word 0x3c010001
    addu at,v1,at
    .word 0xc420ea40
    paddub a1,a0,zero
    add.s $f0,$f1,$f0
    .word 0x3c010001
    .word 0xe7a00060
    .word 0x8e620008
    addu at,v0,at
    .word 0xc421ea38
    .word 0x3c010001
    addu at,v0,at
    .word 0xc420ea44
    add.s $f0,$f1,$f0
    .word 0x3c010001
    .word 0xe6200000
    .word 0x8e620008
    addu at,v0,at
    .word 0xc421ea3c
    .word 0x3c010001
    addu at,v0,at
    .word 0xc420ea48
    add.s $f0,$f1,$f0
    .word 0x3c010001
    .word 0xe6400000
    .word 0x8e620008
    .word 0xc7a00060
    addu at,v0,at
    .word 0xc421ea4c
    add.s $f0,$f0,$f1
    .word 0x3c010001
    .word 0xe7a00060
    .word 0x8e620008
    .word 0xc6200000
    addu at,v0,at
    .word 0xc421ea50
    add.s $f0,$f0,$f1
    .word 0x3c010001
    .word 0xe6200000
    .word 0x8e620008
    .word 0xc6400000
    addu at,v0,at
    .word 0xc421ea54
    add.s $f0,$f0,$f1
    jal fn_1ce160
    .word 0xe6400000
    .word 0x8e620260
    beqz v0,L1ac57c
    nop
    b L1ac77c
    .word 0x70001628
L1ac57c:
    jal fn_1c3b80
    .word 0x8e040048
    .word 0xc6250000
    .word 0x3c033f73
    ori v1,v1,0x3333
    .word 0x44830000
    nop
    c.le.s $f5,$f0
    nop
    bc1fl L1ac5c8
    .word 0x70001628
    .word 0xc4410024
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L1ac5d0
    nop
    .word 0x70001628
L1ac5c8:
    b L1ac77c
    nop
L1ac5d0:
    .word 0xc602000c
    .word 0xc6010010
    .word 0x3c0342a2
    .word 0xc6030014
    .word 0x44830000
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f1,$f3,$f3
    c.le.s $f1,$f0
    nop
    bc1t L1ac60c
    nop
    b L1ac77c
    .word 0x70001628
L1ac60c:
    .word 0xc4400020
    .word 0x3c034110
    .word 0x44831000
    addiu a0,sp,84
    .word 0x3c037000
    mul.s $f0,$f2,$f0
    ori a2,v1,0x3fa8
    addiu a1,sp,88
    .word 0x3c010032
    .word 0xe7a00050
    .word 0xc4410024
    .word 0x3c033f80
    .word 0x44830000
    nop
    mul.s $f1,$f2,$f1
    .word 0xe4810000
    .word 0xc4410028
    mul.s $f1,$f2,$f1
    .word 0xe4a10000
    .word 0xc602000c
    .word 0xc7a10050
    sub.s $f1,$f1,$f2
    .word 0xe7a10050
    .word 0xc4820000
    .word 0xc6010010
    sub.s $f1,$f2,$f1
    .word 0xe4810000
    .word 0xc6010014
    .word 0xc4a20000
    sub.s $f1,$f2,$f1
    .word 0xe4a10000
    .word 0xc4820000
    .word 0xc7a70060
    .word 0xc7a40050
    .word 0xc6460000
    .word 0xc4a10000
    mul.s $f2,$f5,$f2
    mul.s $f3,$f7,$f4
    adda.s $f3,$f2
    madd.s $f2,$f6,$f1
    mul.s $f1,$f7,$f2
    sub.s $f1,$f4,$f1
    .word 0xe7a10050
    mul.s $f3,$f5,$f2
    mul.s $f1,$f6,$f2
    .word 0xc4820000
    sub.s $f2,$f2,$f3
    .word 0xe4820000
    .word 0xc4a20000
    sub.s $f1,$f2,$f1
    .word 0xe4a10000
    .word 0xc4237b8c
    .word 0xc4c20000
    .word 0xc7a10050
    .word 0x3c017000
    div.s $f2,$f3,$f2
    mul.s $f1,$f1,$f2
    .word 0xe7a10050
    .word 0xc4223fa8
    .word 0xc4810000
    div.s $f2,$f3,$f2
    .word 0x3c017000
    mul.s $f1,$f1,$f2
    .word 0xe4810000
    .word 0xc4223fa8
    .word 0xc4a10000
    div.s $f2,$f3,$f2
    .word 0x3c017000
    mul.s $f1,$f1,$f2
    .word 0xe4a10000
    .word 0xc6620264
    .word 0xc4213fb0
    add.s $f0,$f0,$f2
    c.le.s $f0,$f1
    nop
    bc1t L1ac768
    nop
    .word 0xc7a00050
    sub.s $f1,$f1,$f2
    mul.s $f0,$f0,$f1
    .word 0xe7a00050
    .word 0xc4800000
    mul.s $f0,$f0,$f1
    .word 0xe4800000
    .word 0xc4a00000
    mul.s $f0,$f0,$f1
    .word 0xe4a00000
L1ac768:
    .word 0x8e64000c
    addiu a2,sp,80
    jal fn_17f270
    .word 0x70002e28
    addiu v0,zero,1
L1ac77c:
    .word 0x7bbf0040
L1ac780:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}


