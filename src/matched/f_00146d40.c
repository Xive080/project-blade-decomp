extern void func_00147e20(void);
extern void func_00147d50(void);
extern void func_00147b70(void);
extern void func_00147c60(void);
extern void func_001ce160(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-176
    .word 0x7fbf0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    paddub s6,a0,zero
    .word 0x4480a000
    paddub s5,a1,zero
    paddub s4,a2,zero
    paddub s3,a3,zero
    beqz s6,L146da8
    paddub s2,t0,zero
    beqz s5,L146dac
    .word 0x70001628
    beqz s4,L146da8
    nop
    .word 0x86c20006
    slti at,v0,2
    beqz at,L146db4
    nop
L146da8:
    .word 0x70001628
L146dac:
    b L1472d0
    .word 0x7bbf0090
L146db4:
    beqz s6,L146df8
    nop
    beqz v0,L146df8
    nop
    jal func_00147e20
    nop
    beqz v0,L146de0
    paddub a0,s6,zero
    .word 0xc440000c
    .word 0xe7a000a8
    paddub a0,s6,zero
L146de0:
    jal func_00147d50
    nop
    beqz v0,L146df8
    nop
    .word 0xc440000c
    .word 0xe7a000ac
L146df8:
    .word 0xc6a20000
    .word 0xc7a000a8
    c.le.s $f2,$f0
    nop
    bc1f L146e3c
    nop
    sub.s $f20,$f2,$f0
    .word 0xe6a00000
    jal func_00147e20
    paddub a0,s6,zero
    paddub s0,v0,zero
    paddub a0,s6,zero
    jal func_00147b70
    paddub a1,s0,zero
    .word 0x44801800
    b L146fe8
    paddub s1,v0,zero
L146e3c:
    .word 0xc7a300ac
    c.lt.s $f2,$f3
    nop
    bc1t L146e84
    nop
    sub.s $f20,$f2,$f3
    .word 0xe6a30000
    jal func_00147d50
    paddub a0,s6,zero
    paddub s1,v0,zero
    paddub a0,s6,zero
    jal func_00147c60
    paddub a1,s1,zero
    paddub s0,v0,zero
    .word 0x3c023f80
    .word 0x44821800
    b L146fec
    .word 0x8ec30000
L146e84:
    beqz s2,L146ee8
    sub.s $f1,$f2,$f0
    .word 0x8e510000
    beqz s1,L146ee4
    nop
    .word 0xc620000c
    c.lt.s $f2,$f0
    nop
    bc1f L146eb0
    addiu s7,zero,1
    .word 0x7000be28
L146eb0:
    beqz s7,L146ed0
    paddub a1,s1,zero
    paddub a0,s6,zero
    jal func_00147c60
    paddub a1,s1,zero
    b L146f48
    paddub s0,v0,zero
    paddub a1,s1,zero
L146ed0:
    paddub a0,s6,zero
    jal func_00147b70
    paddub s0,s1,zero
    b L146f48
    paddub s1,v0,zero
L146ee4:
    sub.s $f1,$f2,$f0
L146ee8:
    sub.s $f0,$f3,$f2
    c.lt.s $f1,$f0
    nop
    bc1t L146f00
    addiu s7,zero,1
    .word 0x7000be28
L146f00:
    beqz s7,L146f2c
    paddub a0,s6,zero
    jal func_00147e20
    paddub a0,s6,zero
    paddub s0,v0,zero
    paddub a0,s6,zero
    jal func_00147b70
    paddub a1,s0,zero
    b L146f48
    paddub s1,v0,zero
    paddub a0,s6,zero
L146f2c:
    jal func_00147d50
    nop
    paddub s1,v0,zero
    paddub a0,s6,zero
    jal func_00147c60
    paddub a1,s1,zero
    paddub s0,v0,zero
L146f48:
    beqz s7,L146f94
    nop
    beqz s1,L146fd0
    nop
L146f58:
    .word 0xc6a10000
    .word 0xc620000c
    c.le.s $f1,$f0
    nop
    bc1t L146fd0
    nop
    paddub a1,s1,zero
    paddub a0,s6,zero
    jal func_00147b70
    paddub s0,s1,zero
    paddub s1,v0,zero
    bnez s1,L146f58
    nop
    b L146fd4
    .word 0xc602000c
L146f94:
    beqz s0,L146fd0
    nop
L146f9c:
    .word 0xc6a10000
    .word 0xc600000c
    c.lt.s $f1,$f0
    nop
    bc1f L146fd0
    nop
    paddub a1,s0,zero
    paddub a0,s6,zero
    jal func_00147c60
    paddub s1,s0,zero
    paddub s0,v0,zero
    bnez s0,L146f9c
    nop
L146fd0:
    .word 0xc602000c
L146fd4:
    .word 0xc6a10000
    .word 0xc620000c
    sub.s $f1,$f1,$f2
    sub.s $f0,$f0,$f2
    div.s $f3,$f1,$f0
L146fe8:
    .word 0x8ec30000
L146fec:
    andi v0,v1,0x1
    beqz v0,L14710c
    andi v0,v1,0x6
    .word 0xc6210000
    .word 0xc6000000
    sub.s $f0,$f1,$f0
    .word 0xe6800000
    .word 0xc6210004
    .word 0xc6000004
    sub.s $f0,$f1,$f0
    .word 0xe6800004
    .word 0xc6210008
    .word 0xc6000008
    sub.s $f0,$f1,$f0
    .word 0xe6800008
    .word 0xc6800000
    mul.s $f0,$f0,$f3
    .word 0xe6800000
    .word 0xc6800004
    mul.s $f0,$f0,$f3
    .word 0xe6800004
    .word 0xc6800008
    mul.s $f0,$f0,$f3
    .word 0xe6800008
    .word 0xc6810000
    .word 0xc6000000
    add.s $f0,$f1,$f0
    .word 0xe6800000
    .word 0xc6810004
    .word 0xc6000004
    add.s $f0,$f1,$f0
    .word 0xe6800004
    .word 0xc6810008
    .word 0xc6000008
    add.s $f0,$f1,$f0
    beqz s3,L1472b8
    .word 0xe6800008
    .word 0xc6220000
    .word 0xc6000000
    .word 0x44800800
    nop
    sub.s $f0,$f2,$f0
    .word 0xe6600000
    .word 0xc6220004
    .word 0xc6000004
    sub.s $f0,$f2,$f0
    .word 0xe6600004
    .word 0xc6220008
    .word 0xc6000008
    sub.s $f0,$f2,$f0
    .word 0xe6600008
    .word 0xc6600000
    c.eq.s $f1,$f0
    nop
    bc1f L1470f8
    paddub a0,s3,zero
    .word 0xc6600004
    c.eq.s $f1,$f0
    nop
    bc1f L1470f4
    nop
    .word 0xc6600008
    c.eq.s $f1,$f0
    nop
    bc1t L1472b8
    nop
L1470f4:
    paddub a0,s3,zero
L1470f8:
    jal func_001ce160
    paddub a1,s3,zero
    b L1472bc
    .word 0xe6b40000
    andi v0,v1,0x6
L14710c:
    beqz v0,L1472b8
    nop
    .word 0xc6320018
    .word 0xc6200008
    .word 0xc6310014
    .word 0xc6210004
    .word 0xc6300010
    .word 0xc6220000
    .word 0xc60d001c
    sub.s $f9,$f0,$f18
    .word 0xc60a0000
    .word 0xc60e0020
    .word 0xc60b0004
    sub.s $f8,$f1,$f17
    .word 0xc60f0024
    .word 0xc60c0008
    sub.s $f7,$f2,$f16
    sub.s $f4,$f13,$f10
    sub.s $f0,$f16,$f13
    sub.s $f5,$f14,$f11
    sub.s $f1,$f17,$f14
    sub.s $f6,$f15,$f12
    sub.s $f2,$f18,$f15
    mul.s $f4,$f4,$f3
    mul.s $f0,$f0,$f3
    mul.s $f7,$f7,$f3
    mul.s $f5,$f5,$f3
    mul.s $f1,$f1,$f3
    mul.s $f8,$f8,$f3
    mul.s $f6,$f6,$f3
    mul.s $f2,$f2,$f3
    mul.s $f9,$f9,$f3
    add.s $f4,$f4,$f10
    add.s $f0,$f0,$f13
    add.s $f7,$f7,$f16
    sub.s $f10,$f7,$f0
    sub.s $f7,$f0,$f4
    mul.s $f7,$f7,$f3
    mul.s $f10,$f10,$f3
    add.s $f5,$f5,$f11
    add.s $f1,$f1,$f14
    add.s $f8,$f8,$f17
    sub.s $f11,$f8,$f1
    sub.s $f8,$f1,$f5
    mul.s $f8,$f8,$f3
    mul.s $f11,$f11,$f3
    add.s $f6,$f6,$f12
    add.s $f2,$f2,$f15
    add.s $f9,$f9,$f18
    sub.s $f12,$f9,$f2
    sub.s $f9,$f2,$f6
    mul.s $f9,$f9,$f3
    mul.s $f12,$f12,$f3
    add.s $f7,$f7,$f4
    add.s $f10,$f10,$f0
    sub.s $f4,$f10,$f7
    add.s $f8,$f8,$f5
    .word 0xe6840000
    add.s $f11,$f11,$f1
    sub.s $f1,$f11,$f8
    add.s $f9,$f9,$f6
    .word 0xe6810004
    add.s $f12,$f12,$f2
    sub.s $f2,$f12,$f9
    .word 0xe6820008
    .word 0xc6800000
    mul.s $f0,$f0,$f3
    .word 0xe6800000
    .word 0xc6800004
    mul.s $f0,$f0,$f3
    .word 0xe6800004
    .word 0xc6800008
    mul.s $f0,$f0,$f3
    .word 0xe6800008
    .word 0xc6800000
    add.s $f0,$f0,$f7
    .word 0xe6800000
    .word 0xc6800004
    add.s $f0,$f0,$f8
    .word 0xe6800004
    .word 0xc6800008
    add.s $f0,$f0,$f9
    beqz s3,L1472b8
    .word 0xe6800008
    .word 0xe6640000
    .word 0xe6610004
    .word 0xe6620008
    .word 0xc6600000
    .word 0x44800800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L1472b0
    paddub a0,s3,zero
    .word 0xc6600004
    c.eq.s $f1,$f0
    nop
    bc1f L1472ac
    nop
    .word 0xc6600008
    c.eq.s $f1,$f0
    nop
    bc1t L1472b8
    nop
L1472ac:
    paddub a0,s3,zero
L1472b0:
    jal func_001ce160
    paddub a1,s3,zero
L1472b8:
    .word 0xe6b40000
L1472bc:
    beqz s2,L1472cc
    addiu v0,zero,1
    .word 0xae500000
    addiu v0,zero,1
L1472cc:
    .word 0x7bbf0090
L1472d0:
    .word 0x7bb70080
    .word 0x7bb60070
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


