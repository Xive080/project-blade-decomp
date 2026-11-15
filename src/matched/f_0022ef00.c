extern void func_00188e80(void);
extern void func_00188f00(void);
extern void func_00182cf0(void);
extern void func_00189050(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdfea0
    .word 0x7fbf0040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    paddub s2,a0,zero
    .word 0x8c840010
    beqz a0,L22efcc
    paddub s0,a1,zero
    .word 0xc481003c
    .word 0xc6000170
    mtc1 zero,$f2
    sub.s $f20,$f1,$f0
    c.eq.s $f2,$f20
    nop
    bc1t L22efcc
    nop
    .word 0x3c03c120
    mtc1 v1,$f0
    nop
    c.lt.s $f20,$f0
    nop
    bc1f L22efc0
    nop
    .word 0x8e450014
    beqz a1,L22ef7c
    .word 0x3c023e80
    jal func_00188e80
    paddub a2,zero,zero
    .word 0x3c023e80
L22ef7c:
    .word 0xafa20070
    .word 0xafa00074
    .word 0xafa00078
    .word 0xafa0007c
    addiu v0,zero,14
    .word 0xafa00080
    .word 0xafa20050
    addiu v0,zero,1
    .word 0xe7b40054
    .word 0xafa2006c
    .word 0x3c020019
    .word 0x8e440010
    .word 0x26470014
    .word 0x27a50050
    jal func_00188f00
    .word 0x2446b790
    .word 0xae420014
L22efc0:
    .word 0xc6000170
    .word 0x8e430010
    .word 0xe460003c
L22efcc:
    .word 0x8e040178
    beqz a0,L22f350
    nop
    sll v1,a0,0x4
    subu a0,v1,a0
    sll v1,a0,0x2
    subu v1,v1,a0
    sll v1,v1,0x2
    mtc1 v1,$f0
    .word 0x8e43000c
    beqz v1,L22f16c
    cvt.s.w $f3,$f0
    .word 0xc460003c
    c.eq.s $f3,$f0
    nop
    bc1t L22f350
    .word 0x2464003c
    .word 0xe4830000
    .word 0x8e43000c
    .word 0x3c024479
    ori v0,v0,0xe000
    mtc1 v0,$f0
    nop
    c.lt.s $f3,$f0
    .word 0x24710038
    bc1f L22f040
    .word 0x24700018
    b L22f06c
    addiu v0,zero,3
L22f040:
    .word 0x3c02461c
    ori v0,v0,0x3e00
    mtc1 v0,$f0
    nop
    c.lt.s $f3,$f0
    nop
    bc1f L22f06c
    addiu v0,zero,5
    b L22f06c
    addiu v0,zero,4
    addiu v0,zero,5
L22f06c:
    .word 0xae220008
    .word 0x3c024479
    ori v0,v0,0xe000
    mtc1 v0,$f0
    nop
    c.lt.s $f3,$f0
    nop
    bc1f L22f09c
    .word 0x3c02461c
    b L22f0c4
    addiu a1,zero,3
    .word 0x3c02461c
L22f09c:
    ori v0,v0,0x3e00
    mtc1 v0,$f0
    nop
    c.lt.s $f3,$f0
    nop
    bc1f L22f0c4
    addiu a1,zero,5
    b L22f0c4
    addiu a1,zero,4
    addiu a1,zero,5
L22f0c4:
    .word 0x8c660044
    jal func_00182cf0
    .word 0x8c640038
    .word 0xe6200010
    .word 0xc603000c
    .word 0xc6020008
    mtc1 zero,$f4
    .word 0xc6010000
    mul.s $f3,$f0,$f3
    sub.s $f0,$f2,$f3
    mul.s $f0,$f4,$f0
    add.s $f0,$f1,$f0
    .word 0xe6000000
    .word 0xe6030008
    .word 0x8e450018
    beqz a1,L22f118
    .word 0x3c023e80
    .word 0x8e44000c
    jal func_00188e80
    paddub a2,zero,zero
    .word 0x3c023e80
L22f118:
    .word 0xafa20100
    addiu v0,zero,2
    .word 0xafa00104
    .word 0xafa20108
    .word 0xafa0010c
    addiu v0,zero,17
    .word 0xafa00110
    .word 0xafa200e0
    .word 0x3c024000
    .word 0xafa200e4
    .word 0xafa200e8
    addiu v0,zero,1
    .word 0xafa200fc
    .word 0x3c020019
    .word 0x8e44000c
    .word 0x26470018
    .word 0x27a500e0
    jal func_00188f00
    .word 0x2446b790
    b L22f350
    .word 0xae420018
L22f16c:
    .word 0x8e420008
    beqzl v0,L22f198
    .word 0x3c024000
    .word 0xc4420018
    .word 0xc4410020
    .word 0x3c024000
    add.s $f1,$f2,$f1
    mtc1 v0,$f0
    b L22f19c
    add.s $f0,$f0,$f1
    .word 0x3c024000
L22f198:
    mtc1 v0,$f0
L22f19c:
    .word 0x8f8484b0
    .word 0x3c024479
    ori v0,v0,0xe000
    mtc1 v0,$f1
    addiu a2,zero,3
    c.lt.s $f3,$f1
    .word 0x8c840028
    .word 0x3c053f00
    .word 0x3c033f80
    .word 0xafa60090
    .word 0xafa00094
    .word 0xafa50098
    .word 0xe7a0009c
    .word 0xafa300a0
    .word 0xafa400bc
    bc1f L22f1e8
    .word 0xe7a300c0
    b L22f218
    .word 0x3c024479
L22f1e8:
    .word 0x3c02461c
    ori v0,v0,0x3e00
    mtc1 v0,$f0
    nop
    c.lt.s $f3,$f0
    nop
    bc1f L22f214
    addiu a2,zero,5
    b L22f214
    addiu a2,zero,4
    addiu a2,zero,5
L22f214:
    .word 0x3c024479
L22f218:
    ori v0,v0,0xe000
    mtc1 v0,$f0
    .word 0xafa600c4
    c.lt.s $f3,$f0
    nop
    bc1f L22f23c
    .word 0xafa000c8
    b L22f268
    addiu a1,zero,3
L22f23c:
    .word 0x3c02461c
    ori v0,v0,0x3e00
    mtc1 v0,$f0
    nop
    c.lt.s $f3,$f0
    nop
    bc1f L22f268
    addiu a1,zero,5
    b L22f268
    addiu a1,zero,4
    addiu a1,zero,5
L22f268:
    jal func_00182cf0
    paddub a2,zero,zero
    .word 0x27a200cc
    .word 0xe4400000
    .word 0x3c054140
    mtc1 a1,$f1
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    .word 0x3c02002e
    .word 0x244306a0
    .word 0x27a200ac
    .word 0xe7a000a4
    .word 0xafa500a8
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0x27a40090
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0x8e420004
    .word 0x8f8384b0
    .word 0x8e460000
    .word 0x8c420010
    .word 0x8c650014
    jal func_00189050
    .word 0x24470001
    .word 0xae42000c
    .word 0x8e450018
    beqz a1,L22f300
    .word 0x3c023e80
    .word 0x8e44000c
    jal func_00188e80
    paddub a2,zero,zero
    .word 0x3c023e80
L22f300:
    .word 0xafa20140
    addiu v0,zero,2
    .word 0xafa00144
    .word 0xafa20148
    .word 0xafa0014c
    addiu v0,zero,17
    .word 0xafa00150
    .word 0xafa20120
    .word 0x3c024000
    .word 0xafa20124
    .word 0xafa20128
    addiu v0,zero,1
    .word 0xafa2013c
    .word 0x3c020019
    .word 0x8e44000c
    .word 0x26470018
    .word 0x27a50120
    jal func_00188f00
    .word 0x2446b790
    .word 0xae420018
L22f350:
    .word 0x7bbf0040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    .word 0x27bd0160
}
