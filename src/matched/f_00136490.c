extern void func_00133cd0(void);
extern void func_00133f30(void);
extern void func_00145b80(void);
extern void func_00146d40(void);
extern void func_00149e60(void);
extern void func_0015d760(void);
extern void func_001c3b70(void);
extern void func_001c7320(void);
extern void func_001c7610(void);
extern void func_001ce160(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-208
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c017000
    .word 0xc48100ac
    .word 0xc4203fb0
    paddub s4,a1,zero
    c.le.s $f1,$f0
    nop
    bc1t L1364d8
    paddub s5,a0,zero
    b L13694c
    paddub v0,zero,zero
L1364d8:
    jal func_00149e60
    nop
    .word 0x8c420018
    jalr ra,v0
    .word 0x8ea40008
    jal func_001c3b70
    paddub a0,v0,zero
    paddub s1,v0,zero
    .word 0x8e82000c
    andi v0,v0,0x6
    bnez v0,L136510
    nop
    b L13694c
    paddub v0,zero,zero
L136510:
    jal func_00149e60
    nop
    .word 0x8c420028
    .word 0x8ea40008
    jalr ra,v0
    addiu a1,zero,2
    .word 0xc6200010
    addiu s0,v0,48
    .word 0x3c023fc0
    mtc1 v0,$f1
    addiu v1,sp,184
    mul.s $f0,$f1,$f0
    addiu v0,sp,180
    .word 0xe7a000b0
    .word 0xc6200014
    mul.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc6200018
    mul.s $f0,$f1,$f0
    .word 0xe4600000
    .word 0xc6210030
    .word 0xc7a000b0
    add.s $f0,$f0,$f1
    .word 0xe7a000b0
    .word 0xc4410000
    .word 0xc6200034
    add.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc4610000
    .word 0xc6200038
    add.s $f0,$f1,$f0
    .word 0xe4600000
    .word 0x8e83000c
    andi v0,v1,0x4
    beqz v0,L136764
    andi v0,v1,0x2
    addiu a1,sp,176
    addiu a2,sp,204
    addiu a3,sp,196
    addiu t0,sp,192
    jal func_00145b80
    paddub a0,s4,zero
    .word 0xc7a000cc
    addiu a1,sp,200
    addiu a2,s5,184
    addiu a3,sp,160
    addiu t0,sp,196
    paddub a0,s4,zero
    jal func_00146d40
    .word 0xe7a000c8
    .word 0xc6a300b8
    .word 0xc6a200bc
    .word 0xc6a100c0
    addiu v1,sp,144
    .word 0x3c024010
    addiu s2,sp,148
    mtc1 v0,$f0
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    addiu s3,sp,152
    .word 0xc6040004
    .word 0xc6430000
    .word 0xc6060000
    .word 0xc7a50090
    .word 0xc6020008
    .word 0xc6610000
    sub.s $f3,$f4,$f3
    sub.s $f4,$f2,$f1
    sub.s $f5,$f6,$f5
    mul.s $f2,$f5,$f5
    mul.s $f1,$f3,$f3
    adda.s $f2,$f1
    madd.s $f1,$f4,$f4
    c.lt.s $f1,$f0
    nop
    bc1f L13694c
    paddub v0,zero,zero
    .word 0xc6210020
    mtc1 zero,$f2
    nop
    c.eq.s $f2,$f1
    nop
    bc1f L136678
    nop
    .word 0xc6200028
    c.eq.s $f2,$f0
    nop
    bc1t L1366ac
    nop
L136678:
    .word 0xe7a10080
    .word 0xafa00084
    .word 0xc6200028
    addiu a0,sp,128
    paddub a1,a0,zero
    jal func_001ce160
    .word 0xe7a00088
    addiu a0,s5,208
    addiu a1,sp,128
    jal func_0015d760
    paddub a2,zero,zero
    b L1366e0
    .word 0xc6210030
L1366ac:
    .word 0xc6200010
    addiu a0,sp,128
    paddub a1,a0,zero
    .word 0xe7a00080
    .word 0xafa00084
    .word 0xc6200018
    jal func_001ce160
    .word 0xe7a00088
    addiu a0,s5,208
    addiu a1,sp,128
    jal func_0015d760
    paddub a2,zero,zero
    .word 0xc6210030
L1366e0:
    .word 0xc6000000
    addiu a0,s5,208
    sub.s $f0,$f1,$f0
    .word 0xe6a00100
    .word 0xc6210034
    .word 0xc6000004
    sub.s $f0,$f1,$f0
    .word 0xe6a00104
    .word 0xc6210038
    .word 0xc6000008
    sub.s $f0,$f1,$f0
    .word 0xe6a00108
    .word 0xc6a10100
    .word 0xc7a00090
    add.s $f0,$f1,$f0
    .word 0xe6a00100
    .word 0xc6400000
    .word 0xc6a10104
    add.s $f0,$f1,$f0
    .word 0xe6a00104
    .word 0xc6600000
    .word 0xc6a10108
    add.s $f0,$f1,$f0
    jal func_001c7320
    .word 0xe6a00108
    .word 0xc7ac00cc
    paddub a0,s5,zero
    paddub a2,s4,zero
    jal func_00133cd0
    paddub a1,zero,zero
    b L13694c
    addiu v0,zero,1
    andi v0,v1,0x2
L136764:
    beqz v0,L136948
    nop
    addiu a1,sp,176
    addiu a2,sp,204
    addiu a3,sp,196
    addiu t0,sp,192
    jal func_00145b80
    paddub a0,s4,zero
    .word 0xc7a000cc
    addiu a1,sp,200
    addiu a2,s5,184
    addiu a3,sp,160
    addiu t0,sp,196
    paddub a0,s4,zero
    jal func_00146d40
    .word 0xe7a000c8
    .word 0xc6a300b8
    .word 0xc6a200bc
    .word 0xc6a100c0
    addiu v1,sp,144
    .word 0x3c024010
    addiu a1,sp,148
    mtc1 v0,$f0
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    addiu a2,sp,152
    .word 0xc6040004
    .word 0xc4a30000
    .word 0xc6060000
    .word 0xc7a50090
    .word 0xc6020008
    .word 0xc4c10000
    sub.s $f3,$f4,$f3
    sub.s $f4,$f2,$f1
    sub.s $f5,$f6,$f5
    mul.s $f2,$f5,$f5
    mul.s $f1,$f3,$f3
    adda.s $f2,$f1
    madd.s $f1,$f4,$f4
    c.lt.s $f1,$f0
    nop
    bc1f L136948
    nop
    .word 0x3c02002e
    addiu a0,v0,-8192
    mtc1 zero,$f0
    .word 0xdc820000
    .word 0xc4810008
    addiu v1,sp,112
    .word 0xfc620000
    .word 0xe4610008
    .word 0xc6220030
    .word 0xc6010000
    sub.s $f1,$f2,$f1
    .word 0xe6a10100
    .word 0xc6220034
    .word 0xc6010004
    sub.s $f1,$f2,$f1
    .word 0xe6a10104
    .word 0xc6220038
    .word 0xc6010008
    sub.s $f1,$f2,$f1
    .word 0xe6a10108
    .word 0xc6a20100
    .word 0xc7a10090
    add.s $f1,$f2,$f1
    .word 0xe6a10100
    .word 0xc4a10000
    .word 0xc6a20104
    add.s $f1,$f2,$f1
    .word 0xe6a10104
    .word 0xc4c10000
    .word 0xc6a20108
    add.s $f1,$f2,$f1
    .word 0xe6a10108
    .word 0x8ea2000c
    .word 0xc7a400a8
    .word 0xc7a200a0
    .word 0xc443000c
    .word 0xc4410014
    mula.s $f4,$f3
    msub.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1f L1368cc
    addiu s0,zero,1
    b L1368cc
    paddub s0,zero,zero
    addiu s0,zero,1
L1368cc:
    addiu a0,s5,208
    addiu a1,sp,160
    jal func_0015d760
    addiu a2,sp,112
    bnez s0,L136908
    .word 0x3c0242b4
    .word 0x3c02c2b4
    mtc1 v0,$f12
    addiu a0,s5,208
    addiu a1,sp,112
    jal func_001c7610
    addiu a2,zero,1
    b L136920
    addiu a0,s5,208
    .word 0x3c0242b4
L136908:
    mtc1 v0,$f12
    addiu a0,s5,208
    addiu a1,sp,112
    jal func_001c7610
    addiu a2,zero,1
    addiu a0,s5,208
L136920:
    jal func_001c7320
    nop
    .word 0xc7ac00cc
    paddub a0,s5,zero
    paddub a2,s4,zero
    paddub a3,s0,zero
    jal func_00133f30
    paddub a1,zero,zero
    b L13694c
    addiu v0,zero,1
L136948:
    paddub v0,zero,zero
L13694c:
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,208
}
