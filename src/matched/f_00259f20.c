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
    .word 0xe7b60008
    .word 0xe7b50004
    paddub s5,a0,zero
    jal func_0025b060
    .word 0xe7b40000
    paddub s0,v0,zero
    jal func_0025b060
    paddub a0,s5,zero
    .word 0x8f8589f0
    paddub s1,v0,zero
    .word 0x8ca400c0
    beqz a0,L259f94
    addiu v1,a1,152
    .word 0xc4610014
    .word 0x3c024420
    .word 0x44820000
    b L259fa8
    sub.s $f3,$f0,$f1
L259f94:
    .word 0xc4610008
    .word 0x3c024220
    .word 0x44820000
    nop
    add.s $f3,$f0,$f1
L259fa8:
    beqz a0,L259fd4
    nop
    .word 0xc462000c
    .word 0x3c024420
    .word 0x44820800
    .word 0x3c024220
    .word 0x44820000
    nop
    sub.s $f1,$f1,$f2
    b L259fdc
    add.s $f21,$f0,$f1
L259fd4:
    .word 0xc4750014
    nop
L259fdc:
    .word 0x8ea30000
    addiu v0,zero,33
    beq v1,v0,L25a05c
    .word 0x3c024190
    addiu v0,zero,34
    beq v1,v0,L25a044
    .word 0x3c024180
    addiu v0,zero,36
    beq v1,v0,L25a02c
    nop
    addiu v0,zero,35
    beq v1,v0,L25a018
    nop
    b L25a058
    nop
L25a018:
    .word 0x8cb20008
    .word 0x3c024180
    .word 0x4482b000
    b L25a090
    .word 0x4600b506
L25a02c:
    .word 0x8cb20008
    .word 0x3c0241c8
    .word 0x4482b000
    b L25a090
    .word 0x4600b506
    .word 0x3c024180
L25a044:
    .word 0x4482b000
    .word 0x3c0241a0
    .word 0x4482a000
    b L25a090
    .word 0x8cb20008
L25a058:
    .word 0x3c024190
L25a05c:
    .word 0x4482b000
    .word 0x3c0241a0
    .word 0x4482a000
    beqz a0,L25a080
    .word 0x8cb2000c
    .word 0x3c024220
    .word 0x44820000
    b L25a090
    sub.s $f21,$f21,$f0
L25a080:
    .word 0x3c024220
    .word 0x44820000
    nop
    sub.s $f3,$f3,$f0
L25a090:
    .word 0xc6a00004
    .word 0x8ea50014
    addiu v0,zero,2
    .word 0x3c033f00
    addiu s8,sp,220
    .word 0xafa200b0
    addiu v0,sp,180
    .word 0xac400000
    addiu v0,sp,184
    .word 0xac430000
    addiu v0,sp,188
    .word 0xe4430000
    addiu v0,sp,192
    .word 0xe4400000
    addiu s7,sp,224
    .word 0xafd20000
    .word 0xaee50000
    jal func_00182e50
    paddub a0,s2,zero
    addiu v0,sp,228
    .word 0xe4400000
    mul.s $f0,$f22,$f0
    addiu s6,sp,196
    .word 0x3c02002e
    addiu s4,sp,200
    .word 0xe6c00000
    addiu v0,v0,1696
    .word 0xe6960000
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    addiu s3,sp,204
    .word 0x3c010033
    addiu a0,sp,176
    .word 0xe6630000
    .word 0xe6620004
    .word 0xe6610008
    .word 0xe660000c
    .word 0x8c2234a0
    .word 0x8f8389f0
    .word 0x8e060000
    .word 0x8c42002c
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae020008
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
    .word 0x8e060000
    .word 0x8c650000
    .word 0x8c47002c
    jal func_00189050
    addiu a0,sp,176
    .word 0xae02000c
    .word 0xc6a00004
    .word 0x8ea50018
    addiu v0,zero,2
    .word 0x3c063f80
    .word 0x3c033f00
    paddub a0,s2,zero
    .word 0xafa200b0
    addiu v0,sp,180
    .word 0xac460000
    addiu v0,sp,184
    .word 0xac430000
    addiu v0,sp,188
    .word 0xe4550000
    addiu v0,sp,192
    .word 0xe4400000
    .word 0xafd20000
    jal func_00182e50
    .word 0xaee50000
    addiu v0,sp,228
    .word 0xe4400000
    mul.s $f0,$f20,$f0
    .word 0x3c02002e
    addiu v0,v0,1696
    .word 0x3c010033
    .word 0xe6c00000
    .word 0xe6940000
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
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
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,256
}


