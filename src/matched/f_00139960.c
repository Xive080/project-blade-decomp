extern void func_001c3b70(void);
extern void func_001ce160(void);
extern void func_00145b80(void);
extern void func_00146d40(void);
extern void func_00147300(void);
extern void func_0015d760(void);
extern void func_0015d600(void);
extern void func_00137350(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-240
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s1,a0,zero
    .word 0x8c840008
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    paddub s0,a1,zero
    jal func_001c3b70
    paddub a0,v0,zero
    paddub s2,v0,zero
    .word 0x8e22000c
    .word 0x8e240008
    addiu s4,v0,12
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    paddub a0,v0,zero
    beqz s1,L1399e0
    paddub s3,v0,zero
    beqz s0,L1399e4
    .word 0x70001628
    bnez s2,L1399f0
    .word 0x3c027000
L1399e0:
    .word 0x70001628
L1399e4:
    b L13a0a0
    .word 0x7bbf0060
    .word 0x3c027000
L1399f0:
    ori v0,v0,0x3fb0
    .word 0xc621011c
    .word 0xc4400000
    c.le.s $f1,$f0
    nop
    bc1t L139a14
    nop
    b L13a09c
    .word 0x70001628
L139a14:
    .word 0x8e02000c
    andi v0,v0,0x1
    beqz v0,L13a09c
    .word 0x70001628
    addiu a0,sp,168
    jal func_001ce160
    paddub a1,s4,zero
    addiu a1,s2,48
    addiu a2,sp,236
    addiu a3,sp,228
    addiu t0,sp,224
    jal func_00145b80
    paddub a0,s0,zero
    .word 0xc7a000ec
    addiu a1,sp,232
    addiu a2,sp,200
    addiu a3,sp,184
    addiu t0,sp,228
    paddub a0,s0,zero
    jal func_00146d40
    .word 0xe7a000e8
    .word 0xc7a000b8
    .word 0x44800800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L139ac4
    nop
    .word 0xc7a000bc
    c.eq.s $f1,$f0
    nop
    bc1f L139ac4
    nop
    .word 0xc7a000c0
    c.eq.s $f1,$f0
    nop
    bc1f L139ac4
    nop
    addiu a0,sp,168
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,184
    .word 0xfc620000
    .word 0xe4600008
L139ac4:
    .word 0xc6420034
    .word 0xc7a100cc
    .word 0x3c02bf00
    .word 0x44820000
    nop
    sub.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1t L13a098
    nop
    mul.s $f0,$f1,$f1
    .word 0xc6440030
    .word 0xc6420038
    .word 0xc7a300c8
    addiu v0,zero,4096
    .word 0xc7a100d0
    .word 0x8e320008
    sub.s $f3,$f4,$f3
    sub.s $f2,$f2,$f1
    .word 0x8e43003c
    mul.s $f1,$f3,$f3
    adda.s $f1,$f0
    bne v1,v0,L13a014
    madd.s $f1,$f2,$f2
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L13a098
    nop
    .word 0xc7a500b8
    .word 0xc7a000a8
    addiu s4,sp,188
    .word 0xc7a200ac
    .word 0xc6830000
    addiu s5,sp,192
    mul.s $f4,$f5,$f0
    .word 0xc6a10000
    mul.s $f2,$f3,$f2
    .word 0xc7a000b0
    adda.s $f4,$f2
    madd.s $f1,$f1,$f0
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L139b94
    addiu s2,zero,1
    b L139b94
    .word 0x70009628
    addiu s2,zero,1
L139b94:
    bnez s2,L139bb8
    nop
    .word 0xc7a000ec
    .word 0x3c023f80
    .word 0x44820800
    nop
    add.s $f0,$f1,$f0
    b L139bf4
    .word 0xe7a000e8
L139bb8:
    .word 0xc7a100ec
    .word 0x3c023f80
    .word 0x44820000
    .word 0x3c02bf80
    .word 0x44821000
    sub.s $f0,$f1,$f0
    .word 0xe7a000e8
    mul.s $f0,$f2,$f5
    .word 0xe7a000b8
    .word 0xc6800000
    mul.s $f0,$f2,$f0
    .word 0xe6800000
    .word 0xc6a00000
    mul.s $f0,$f2,$f0
    .word 0xe6a00000
L139bf4:
    addiu a1,sp,232
    addiu a2,sp,152
    addiu a3,sp,136
    addiu t0,sp,228
    jal func_00146d40
    paddub a0,s0,zero
    .word 0xc7a00088
    .word 0x44800800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L139c68
    nop
    .word 0xc7a0008c
    c.eq.s $f1,$f0
    nop
    bc1f L139c68
    nop
    .word 0xc7a00090
    c.eq.s $f1,$f0
    nop
    bc1f L139c68
    nop
    addiu a0,sp,168
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,136
    .word 0xfc620000
    .word 0xe4600008
L139c68:
    .word 0xc7a600b8
    .word 0xc7a50088
    .word 0xc6840000
    .word 0xc7a3008c
    .word 0xc6a20000
    .word 0xc7a10090
    .word 0x44800000
    mul.s $f5,$f6,$f5
    mul.s $f3,$f4,$f3
    adda.s $f5,$f3
    madd.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1tl L139cb0
    neg.s $f1,$f1
    b L139cb4
    .word 0x3c023f24
    neg.s $f1,$f1
L139cb0:
    .word 0x3c023f24
L139cb4:
    ori v0,v0,0x8dbb
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L13a098
    nop
    addiu a1,sp,220
    addiu a2,sp,216
    jal func_00147300
    paddub a0,s0,zero
    .word 0x8e03000c
    .word 0x3c028000
    and v0,v1,v0
    beqz v0,L139d04
    nop
    .word 0xc7a100d8
    .word 0xc7a000dc
    b L139d28
    sub.s $f1,$f1,$f0
L139d04:
    bnez s2,L139d1c
    nop
    .word 0xc7a100d8
    .word 0xc7a000ec
    b L139d28
    sub.s $f1,$f1,$f0
L139d1c:
    .word 0xc7a100ec
    .word 0xc7a000dc
    sub.s $f1,$f1,$f0
L139d28:
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L13a098
    nop
    addiu a0,s1,208
    addiu a1,sp,184
    jal func_0015d760
    .word 0x70003628
    addiu v0,sp,200
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    addiu a0,sp,120
    paddub a1,a0,zero
    .word 0xe6220100
    .word 0xe6210104
    .word 0xe6200108
    .word 0xc62700d0
    .word 0xc6680010
    .word 0xc62300d4
    .word 0xc6640014
    .word 0xc6660018
    .word 0xc62500d8
    .word 0xc62000e0
    mul.s $f2,$f7,$f8
    mul.s $f1,$f3,$f4
    adda.s $f2,$f1
    madd.s $f2,$f5,$f6
    mul.s $f1,$f7,$f2
    sub.s $f1,$f8,$f1
    add.s $f0,$f0,$f1
    mul.s $f1,$f3,$f2
    .word 0xe7a00078
    .word 0xc62000e4
    sub.s $f1,$f4,$f1
    add.s $f0,$f0,$f1
    mul.s $f1,$f5,$f2
    .word 0xe7a0007c
    .word 0xc62000e8
    sub.s $f1,$f6,$f1
    add.s $f0,$f0,$f1
    jal func_001ce160
    .word 0xe7a00080
    addiu a0,s1,208
    addiu a1,sp,120
    jal func_0015d600
    addiu a2,sp,184
    .word 0x8e220008
    ori at,zero,0xead0
    addiu a2,s1,208
    addiu a0,zero,8
    addu a1,v0,at
L139e04:
    .word 0x8cc30000
    .word 0x8cc20004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu a2,a2,8
    bgtz a0,L139e04
    addiu a1,a1,8
    .word 0xc7a000b8
    .word 0x8e23000c
    addiu v0,zero,7
    .word 0xe460000c
    .word 0xc6800000
    .word 0x8e23000c
    .word 0xe4600010
    .word 0xc6a00000
    .word 0x8e23000c
    .word 0xe4600014
    .word 0x8e230148
    beq v1,v0,L139e64
    nop
    addiu v0,zero,12
    bne v1,v0,L139e8c
    addiu v0,zero,8
L139e64:
    .word 0xc7ac00ec
    addiu t0,zero,5
    paddub a0,s1,zero
    paddub a2,s0,zero
    paddub a3,s2,zero
    jal func_00137350
    .word 0x70002e28
    b L13a00c
    addiu v0,zero,1
    addiu v0,zero,8
L139e8c:
    beq v1,v0,L139ea0
    nop
    addiu v0,zero,13
    bne v1,v0,L139ec4
    nop
L139ea0:
    .word 0xc7ac00ec
    addiu t0,zero,6
    paddub a0,s1,zero
    paddub a2,s0,zero
    paddub a3,s2,zero
    jal func_00137350
    .word 0x70002e28
    b L13a008
    nop
L139ec4:
    .word 0x3c020030
    addiu v1,v0,27984
    .word 0x8e240000
    .word 0x3c023f00
    .word 0x44820800
    sll v0,a0,0x3
    subu v0,v0,a0
    sll a0,v0,0x6
    addu v0,v1,a0
    .word 0xc4400000
    c.le.s $f0,$f1
    nop
    bc1t L139f20
    nop
    .word 0xc7ac00ec
    addiu t0,zero,3
    paddub a0,s1,zero
    paddub a2,s0,zero
    paddub a3,s2,zero
    jal func_00137350
    .word 0x70002e28
    b L13a008
    nop
L139f20:
    .word 0x3c020030
    addiu v0,v0,27988
    addu v0,v0,a0
    .word 0xc4400000
    c.le.s $f0,$f1
    nop
    bc1t L139f64
    nop
    .word 0xc7ac00ec
    addiu t0,zero,4
    paddub a0,s1,zero
    paddub a2,s0,zero
    paddub a3,s2,zero
    jal func_00137350
    .word 0x70002e28
    b L13a008
    nop
L139f64:
    .word 0x3c020030
    addiu v0,v0,27992
    addu v0,v0,a0
    .word 0xc4400000
    c.le.s $f0,$f1
    nop
    bc1t L139fa8
    nop
    .word 0xc7ac00ec
    addiu t0,zero,2
    paddub a0,s1,zero
    paddub a2,s0,zero
    paddub a3,s2,zero
    jal func_00137350
    .word 0x70002e28
    b L13a008
    nop
L139fa8:
    .word 0x3c020030
    addiu v0,v0,27996
    addu v0,v0,a0
    .word 0xc4400000
    c.le.s $f0,$f1
    nop
    bc1t L139fec
    nop
    .word 0xc7ac00ec
    addiu t0,zero,1
    paddub a0,s1,zero
    paddub a2,s0,zero
    paddub a3,s2,zero
    jal func_00137350
    .word 0x70002e28
    b L13a008
    nop
L139fec:
    .word 0xc7ac00ec
    paddub a0,s1,zero
    paddub a2,s0,zero
    paddub a3,s2,zero
    .word 0x70002e28
    jal func_00137350
    .word 0x70004628
L13a008:
    addiu v0,zero,1
L13a00c:
    b L13a09c
    nop
L13a014:
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L13a098
    nop
    .word 0x3c050004
    beq v1,a1,L13a080
    .word 0x3c017000
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13a07c
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s2,zero
    beqz v0,L13a07c
    nop
    .word 0x8e42000c
    paddub a0,s2,zero
    .word 0x3c050004
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L13a07c:
    .word 0x3c017000
L13a080:
    .word 0xc4213fb0
    .word 0x3c023f40
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    .word 0xe620011c
L13a098:
    .word 0x70001628
L13a09c:
    .word 0x7bbf0060
L13a0a0:
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,240
}


