extern void func_00147b70(void);
extern void func_001ce160(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-176
    .word 0x7fbf0070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    paddub s1,a0,zero
    .word 0x46006506
    beqz s1,L145f8c
    paddub s0,a1,zero
    bnez s0,L145f94
    nop
L145f8c:
    b L1463a8
    .word 0x70001628
L145f94:
    jal func_00147b70
    nop
    bnez v0,L145fac
    nop
    b L1463a8
    .word 0x70001628
L145fac:
    .word 0x8e240000
    andi v1,a0,0x1
    beqz v1,L145fc8
    andi v1,a0,0x6
    b L1463a8
    addiu v0,zero,1
    andi v1,a0,0x6
L145fc8:
    beqzl v1,L1463a8
    .word 0x70001628
    .word 0xc4410000
    .word 0xc6000000
    addiu s2,sp,132
    .word 0x44801000
    addiu s3,sp,136
    sub.s $f0,$f1,$f0
    .word 0xe7a00080
    .word 0xc4410004
    .word 0xc6000004
    sub.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc4410008
    .word 0xc6000008
    sub.s $f0,$f1,$f0
    .word 0xe6600000
    .word 0xc7a00080
    c.lt.s $f0,$f2
    nop
    bc1t L146028
    paddub s1,v0,zero
    b L146030
    .word 0x3c023a83
L146028:
    neg.s $f0,$f0
    .word 0x3c023a83
L146030:
    ori v0,v0,0x126f
    .word 0x44820800
    nop
    c.le.s $f0,$f1
    nop
    bc1f L1460e0
    addiu a0,sp,128
    .word 0xc6410000
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1tl L146074
    neg.s $f1,$f1
    b L146078
    .word 0x3c023a83
    neg.s $f1,$f1
L146074:
    .word 0x3c023a83
L146078:
    ori v0,v0,0x126f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1f L1460dc
    nop
    .word 0xc6610000
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1tl L1460bc
    neg.s $f1,$f1
    b L1460c0
    .word 0x3c023a83
    neg.s $f1,$f1
L1460bc:
    .word 0x3c023a83
L1460c0:
    ori v0,v0,0x126f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L14639c
    addiu v0,zero,1
L1460dc:
    addiu a0,sp,128
L1460e0:
    jal func_001ce160
    paddub a1,a0,zero
    .word 0xc602001c
    .word 0xc6010000
    addiu s4,sp,148
    .word 0x44800000
    addiu s5,sp,152
    sub.s $f1,$f2,$f1
    .word 0xe7a10090
    .word 0xc6020020
    .word 0xc6010004
    sub.s $f1,$f2,$f1
    .word 0xe6810000
    .word 0xc6020024
    .word 0xc6010008
    sub.s $f1,$f2,$f1
    .word 0xe6a10000
    .word 0xc7a10090
    c.lt.s $f1,$f0
    nop
    bc1tl L146144
    neg.s $f1,$f1
    b L146148
    .word 0x3c023a83
    neg.s $f1,$f1
L146144:
    .word 0x3c023a83
L146148:
    ori v0,v0,0x126f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1f L1461f8
    addiu a0,sp,144
    .word 0xc6810000
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1tl L14618c
    neg.s $f1,$f1
    b L146190
    .word 0x3c023a83
    neg.s $f1,$f1
L14618c:
    .word 0x3c023a83
L146190:
    ori v0,v0,0x126f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1f L1461f4
    nop
    .word 0xc6a10000
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1tl L1461d4
    neg.s $f1,$f1
    b L1461d8
    .word 0x3c023a83
    neg.s $f1,$f1
L1461d4:
    .word 0x3c023a83
L1461d8:
    ori v0,v0,0x126f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L146240
    nop
L1461f4:
    addiu a0,sp,144
L1461f8:
    jal func_001ce160
    paddub a1,a0,zero
    .word 0xc6820000
    .word 0xc6430000
    .word 0xc7a50080
    .word 0xc7a40090
    .word 0xc6a00000
    .word 0xc6610000
    mul.s $f2,$f3,$f2
    mul.s $f4,$f5,$f4
    adda.s $f4,$f2
    madd.s $f0,$f1,$f0
    c.lt.s $f0,$f20
    nop
    bc1f L146240
    nop
    b L1463a8
    .word 0x70001628
L146240:
    .word 0xc6220010
    .word 0xc6010000
    addiu s4,sp,164
    .word 0x44800000
    addiu s5,sp,168
    sub.s $f1,$f2,$f1
    .word 0xe7a100a0
    .word 0xc6220014
    .word 0xc6010004
    sub.s $f1,$f2,$f1
    .word 0xe6810000
    .word 0xc6220018
    .word 0xc6010008
    sub.s $f1,$f2,$f1
    .word 0xe6a10000
    .word 0xc7a100a0
    c.lt.s $f1,$f0
    nop
    bc1tl L14629c
    neg.s $f1,$f1
    b L1462a0
    .word 0x3c023a83
    neg.s $f1,$f1
L14629c:
    .word 0x3c023a83
L1462a0:
    ori v0,v0,0x126f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1f L146350
    addiu a0,sp,160
    .word 0xc6810000
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1tl L1462e4
    neg.s $f1,$f1
    b L1462e8
    .word 0x3c023a83
    neg.s $f1,$f1
L1462e4:
    .word 0x3c023a83
L1462e8:
    ori v0,v0,0x126f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1f L14634c
    nop
    .word 0xc6a10000
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1tl L14632c
    neg.s $f1,$f1
    b L146330
    .word 0x3c023a83
    neg.s $f1,$f1
L14632c:
    .word 0x3c023a83
L146330:
    ori v0,v0,0x126f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L146398
    nop
L14634c:
    addiu a0,sp,160
L146350:
    jal func_001ce160
    paddub a1,a0,zero
    .word 0xc6430000
    .word 0xc6820000
    .word 0xc7a50080
    .word 0xc7a400a0
    .word 0xc6610000
    .word 0xc6a00000
    mul.s $f2,$f3,$f2
    mul.s $f3,$f5,$f4
    adda.s $f3,$f2
    madd.s $f0,$f1,$f0
    c.lt.s $f0,$f20
    nop
    bc1f L146398
    nop
    b L1463a8
    .word 0x70001628
L146398:
    addiu v0,zero,1
L14639c:
    b L1463ac
    .word 0x7bbf0070
    .word 0x70001628
L1463a8:
    .word 0x7bbf0070
L1463ac:
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,176
}


