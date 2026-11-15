extern void func_0025b060(void);
extern void func_00182e50(void);
extern void func_00189050(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-256
    .word 0x7fbf00a0
    .word 0x7fbe0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x3c0241c8
    .word 0x4482a000
    jal func_0025b060
    paddub s5,a0,zero
    .word 0x8ea30000
    paddub s1,v0,zero
    addiu v0,zero,19
    beq v1,v0,L2591d0
    nop
    addiu v0,zero,18
    beq v1,v0,L2591d0
    nop
    addiu v0,zero,21
    beq v1,v0,L2591a8
    .word 0x3c024220
    b L2591dc
    nop
    .word 0x3c024220
L2591a8:
    .word 0x4482a000
    .word 0x8ea20018
    beqz v0,L2591c4
    nop
    .word 0x3c02002e
    b L2591e4
    addiu s0,v0,1696
L2591c4:
    .word 0x3c02002e
    b L2591e4
    addiu s0,v0,1728
L2591d0:
    .word 0x3c02002e
    b L2591e4
    addiu s0,v0,1728
L2591dc:
    .word 0x3c02002e
    addiu s0,v0,1696
L2591e4:
    .word 0x8f8489f0
    .word 0xc6a10004
    .word 0x8ea50014
    addiu v0,zero,2
    .word 0x3c033f00
    .word 0x8c840008
    .word 0x3c010033
    addiu s8,sp,220
    addiu s7,sp,224
    .word 0xafa200b0
    addiu v0,sp,180
    .word 0xac400000
    addiu v0,sp,184
    .word 0xac430000
    .word 0xc4203264
    addiu v0,sp,188
    .word 0xe4400000
    addiu v0,sp,192
    .word 0xe4410000
    .word 0xafc40000
    jal func_00182e50
    .word 0xaee50000
    addiu v0,sp,228
    .word 0xe4400000
    mul.s $f0,$f20,$f0
    addiu s6,sp,196
    addiu s4,sp,200
    .word 0xe6c00000
    .word 0xe6940000
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    addiu s3,sp,204
    .word 0x3c010033
    addiu a0,sp,176
    .word 0xe6630000
    .word 0xe6620004
    .word 0xe6610008
    .word 0xe660000c
    .word 0x8c2234a0
    .word 0x8f8389f0
    .word 0x8e260000
    .word 0x8c42002c
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae220008
    .word 0x3c02002e
    addiu v0,v0,1760
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0x3c010033
    .word 0xe6630000
    .word 0xe6620004
    .word 0xe6610008
    .word 0xe660000c
    .word 0x8f8389f0
    .word 0x8c2234a0
    .word 0x8e260000
    .word 0x8c650000
    .word 0x8c47002c
    jal func_00189050
    addiu a0,sp,176
    .word 0xae22000c
    .word 0x8ea40000
    addiu v1,zero,21
    beq a0,v1,L259524
    nop
    jal func_0025b060
    paddub a0,s5,zero
    .word 0x3c010033
    .word 0xc4213268
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L259330
    paddub s2,v0,zero
    b L259348
    .word 0x8f8489f0
L259330:
    .word 0x8f8389f0
    .word 0x3c024420
    .word 0x44820000
    .word 0xc4610098
    sub.s $f1,$f0,$f1
    .word 0x8f8489f0
L259348:
    .word 0xc6a00004
    .word 0x8ea50018
    addiu v0,zero,2
    .word 0x3c063f80
    .word 0x8c840008
    .word 0x3c033f00
    .word 0xafa200b0
    addiu v0,sp,180
    .word 0xac460000
    addiu v0,sp,184
    .word 0xac430000
    addiu v0,sp,188
    .word 0xe4410000
    addiu v0,sp,192
    .word 0xe4400000
    .word 0xafc40000
    jal func_00182e50
    .word 0xaee50000
    addiu v0,sp,228
    .word 0xe4400000
    mul.s $f0,$f20,$f0
    .word 0x3c010033
    addiu a0,sp,176
    .word 0xe6c00000
    .word 0xe6940000
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    .word 0xe6630000
    .word 0xe6620004
    .word 0xe6610008
    .word 0xe660000c
    .word 0x8c2234a0
    .word 0x8f8389f0
    .word 0x8e460000
    .word 0x8c42002c
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae420008
    .word 0x3c02002e
    addiu v0,v0,1760
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0x3c010033
    .word 0xe6630000
    .word 0xe6620004
    .word 0xe6610008
    .word 0xe660000c
    .word 0x8f8389f0
    .word 0x8c2234a0
    .word 0x8e460000
    .word 0x8c650000
    .word 0x8c47002c
    jal func_00189050
    addiu a0,sp,176
    .word 0xae42000c
    .word 0x8e250008
    .word 0x8e440008
    .word 0x3c034120
    .word 0x44830000
    .word 0xc4a20018
    .word 0xc4810018
    .word 0xc4a40020
    sub.s $f1,$f1,$f2
    sub.s $f3,$f1,$f0
    c.le.s $f4,$f3
    nop
    bc1t L259490
    neg.s $f5,$f3
    sub.s $f1,$f4,$f3
    .word 0x44800000
    nop
    mul.s $f0,$f0,$f1
    add.s $f0,$f2,$f0
    .word 0xe4a00018
    b L2594bc
    .word 0xe4a30020
    neg.s $f5,$f3
L259490:
    c.lt.s $f4,$f5
    nop
    bc1f L2594bc
    nop
    add.s $f1,$f4,$f3
    .word 0x44800000
    nop
    mul.s $f0,$f0,$f1
    add.s $f0,$f2,$f0
    .word 0xe4a00018
    .word 0xe4a50020
L2594bc:
    .word 0x8e23000c
    .word 0xc4600020
    c.le.s $f0,$f3
    nop
    bc1t L2594f8
    neg.s $f4,$f3
    sub.s $f2,$f0,$f3
    .word 0x44800800
    .word 0xc4600018
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4600018
    b L259524
    .word 0xe4630020
    neg.s $f4,$f3
L2594f8:
    c.lt.s $f0,$f4
    nop
    bc1f L259524
    nop
    add.s $f2,$f0,$f3
    .word 0x44800800
    .word 0xc4600018
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4600018
    .word 0xe4640020
L259524:
    .word 0x7bbf00a0
    .word 0x7bbe0090
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
    addiu sp,sp,256
}


