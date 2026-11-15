extern void func_0025b060(void);
extern void func_00182e50(void);
extern void func_00189050(void);
extern void func_0013b550(void);
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
    .word 0xe7b50004
    paddub s5,a0,zero
    jal func_0025b060
    .word 0xe7b40000
    .word 0x8ea30000
    paddub s1,v0,zero
    addiu v0,zero,15
    bne v1,v0,L2595bc
    nop
    .word 0x3c02002e
    b L2595c4
    addiu s0,v0,1728
L2595bc:
    .word 0x3c02002e
    addiu s0,v0,1696
L2595c4:
    .word 0x8f8489f0
    .word 0xc6a10004
    .word 0x8ea50014
    addiu v0,zero,2
    .word 0x3c033f00
    .word 0x8c840008
    .word 0x3c010033
    addiu s8,sp,224
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
    addiu v0,sp,220
    .word 0xac440000
    jal func_00182e50
    .word 0xafc50000
    addiu s3,sp,228
    .word 0xe6600000
    .word 0xc6600000
    .word 0x3c024180
    .word 0x44820800
    addiu s7,sp,196
    addiu s6,sp,200
    mul.s $f0,$f1,$f0
    addiu s4,sp,204
    .word 0x3c010033
    addiu a0,sp,176
    .word 0xe6e00000
    .word 0xaec20000
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
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
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8f8389f0
    .word 0x8c2234a0
    .word 0x8e260000
    .word 0x8c650000
    .word 0x8c47002c
    jal func_00189050
    addiu a0,sp,176
    .word 0xae22000c
    .word 0x8ea40000
    addiu v1,zero,15
    beq a0,v1,L259864
    nop
    jal func_0025b060
    paddub a0,s5,zero
    .word 0x3c010033
    .word 0xc4353268
    .word 0x44800000
    nop
    c.lt.s $f21,$f0
    nop
    bc1t L25971c
    paddub s2,v0,zero
    b L259734
    .word 0x8f848328
L25971c:
    .word 0x8f8389f0
    .word 0x3c024420
    .word 0x44820000
    .word 0xc4610098
    sub.s $f21,$f0,$f1
    .word 0x8f848328
L259734:
    .word 0xc6b40004
    jal func_0013b550
    addiu a1,zero,325
    .word 0x8f8489f0
    addiu v1,zero,2
    .word 0x3c073f80
    .word 0x3c063f00
    paddub a1,v0,zero
    .word 0x8c840010
    .word 0xafa300b0
    addiu v1,sp,180
    .word 0xac670000
    addiu v1,sp,184
    .word 0xac660000
    addiu v1,sp,188
    .word 0xe4750000
    addiu v1,sp,192
    .word 0xe4740000
    addiu v1,sp,220
    .word 0xac640000
    jal func_00182e50
    .word 0xafc20000
    .word 0x3c024180
    .word 0xe6600000
    .word 0x44820800
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    .word 0x3c010033
    addiu a0,sp,176
    .word 0xe6e00000
    .word 0xaec20000
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
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
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8f8389f0
    .word 0x8c2234a0
    .word 0x8e460000
    .word 0x8c650000
    .word 0x8c47002c
    jal func_00189050
    addiu a0,sp,176
    .word 0xae42000c
    .word 0x8e450008
    .word 0x8e240008
    .word 0x3c034120
    .word 0x44830000
    .word 0xc4a20018
    .word 0xc4810018
    sub.s $f1,$f2,$f1
    b L259884
    sub.s $f3,$f1,$f0
L259864:
    .word 0x8f8489f0
    .word 0x3c034420
    .word 0x44830800
    .word 0x8e230008
    .word 0xc4820098
    .word 0xc4600018
    sub.s $f1,$f1,$f2
    sub.s $f3,$f1,$f0
L259884:
    .word 0x8e230008
    .word 0xc4600020
    c.le.s $f0,$f3
    nop
    bc1t L2598c0
    neg.s $f4,$f3
    sub.s $f2,$f0,$f3
    .word 0x44800800
    .word 0xc4600018
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4600018
    b L2598ec
    .word 0xe4630020
    neg.s $f4,$f3
L2598c0:
    c.lt.s $f0,$f4
    nop
    bc1f L2598ec
    nop
    add.s $f2,$f0,$f3
    .word 0x44800800
    .word 0xc4600018
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4600018
    .word 0xe4640020
L2598ec:
    .word 0x8e23000c
    .word 0xc4600020
    c.le.s $f0,$f3
    nop
    bc1t L259928
    neg.s $f4,$f3
    sub.s $f2,$f0,$f3
    .word 0x44800800
    .word 0xc4600018
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4600018
    b L259954
    .word 0xe4630020
    neg.s $f4,$f3
L259928:
    c.lt.s $f0,$f4
    nop
    bc1f L259954
    nop
    add.s $f2,$f0,$f3
    .word 0x44800800
    .word 0xc4600018
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4600018
    .word 0xe4640020
L259954:
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
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,256
}


