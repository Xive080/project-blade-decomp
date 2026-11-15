extern void func_00164e90(void);
extern void func_001642a0(void);
extern void func_00164a90(void);
extern void func_00165b90(void);
extern void func_001657c0(void);
extern void func_00165940(void);
extern void func_00165590(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-48
    .word 0x44801000
    .word 0x7fbf0020
    .word 0x7fb00010
    .word 0x3c037000
    .word 0xe7b40000
    ori v1,v1,0x3fb0
    .word 0xc481017c
    .word 0xc4600000
    .word 0x3c017000
    .word 0xc4343fa8
    sub.s $f15,$f1,$f0
    c.lt.s $f15,$f2
    nop
    bc1f L163f98
    paddub s0,a0,zero
    .word 0x8e03003c
    .word 0x3c020010
    bne v1,v0,L163f80
    paddub a0,s0,zero
    .word 0x8e020010
    ori v0,v0,0x400
    .word 0xae020010
    paddub a0,s0,zero
L163f80:
    jal func_00164e90
    nop
    .word 0x3c017000
    .word 0xc601017c
    .word 0xc4203fb0
    sub.s $f15,$f1,$f0
L163f98:
    .word 0xc600017c
    .word 0xc6030178
    .word 0x44806800
    sub.s $f4,$f0,$f3
    c.le.s $f4,$f13
    nop
    bc1t L164010
    .word 0x46006b86
    nop
    nop
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0xc60001a4
    div.s $f13,$f15,$f4
    .word 0x3c033f80
    sub.s $f1,$f1,$f3
    div.s $f1,$f1,$f0
    nop
    .word 0x44830000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L164000
    .word 0x3c033f80
    .word 0x46000046
    .word 0x3c033f80
L164000:
    .word 0x44830000
    b L164010
    sub.s $f14,$f0,$f1
    .word 0x46006b86
L164010:
    .word 0x8e04003c
    addiu v1,zero,64
    beql a0,v1,L164284
    paddub a0,s0,zero
    addiu v1,zero,256
    beql a0,v1,L164270
    paddub a0,s0,zero
    addiu v1,zero,4096
    beql a0,v1,L164248
    .word 0x3c023fc0
    addiu v1,zero,512
    beql a0,v1,L164234
    paddub a0,s0,zero
    addiu v1,zero,1024
    beql a0,v1,L1641f8
    .word 0x3c02bf99
    addiu v1,zero,8192
    beql a0,v1,L1641c4
    .word 0x3c02be99
    addiu v1,zero,2048
    beql a0,v1,L164188
    .word 0x3c02be99
    addiu v1,zero,128
    beql a0,v1,L164154
    .word 0x3c023fc0
    .word 0x3c030010
    beql a0,v1,L164140
    paddub a0,s0,zero
    .word 0x3c030008
    beq a0,v1,L16428c
    nop
    .word 0x3c030004
    beql a0,v1,L16412c
    paddub a0,s0,zero
    .word 0x3c030002
    beq a0,v1,L164128
    nop
    .word 0x3c030001
    beq a0,v1,L164128
    nop
    .word 0x3c030020
    beq a0,v1,L1640d0
    nop
    .word 0x3c030040
    beq a0,v1,L1640d0
    nop
    b L164290
    .word 0x7bbf0020
L1640d0:
    .word 0xc6010170
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1f L164128
    nop
    .word 0x3c017000
    .word 0xc4223fb0
    .word 0x3c023e80
    .word 0x44820800
    .word 0x3c017000
    .word 0xc4203fac
    suba.s $f2,$f3
    madd.s $f0,$f1,$f0
    c.le.s $f0,$f4
    nop
    bc1t L164128
    nop
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0xae020170
L164128:
    paddub a0,s0,zero
L16412c:
    jal func_001642a0
    .word 0x4600a306
    b L16428c
    nop
    paddub a0,s0,zero
L164140:
    jal func_00164a90
    .word 0x4600a306
    b L16428c
    nop
    .word 0x3c023fc0
L164154:
    .word 0x44828000
    .word 0x44807000
    .word 0x3c023f00
    .word 0x44828800
    paddub a0,s0,zero
    .word 0x3c02be99
    ori v0,v0,0x999a
    .word 0x44827800
    jal func_00165b90
    .word 0x4600a306
    b L16428c
    nop
    .word 0x3c02be99
L164188:
    ori v0,v0,0x999a
    .word 0x44827800
    paddub a0,s0,zero
    .word 0x3c02bf80
    .word 0x44828000
    .word 0x3c024040
    .word 0x44828800
    .word 0x3c023f99
    ori v0,v0,0x999a
    .word 0x44827000
    jal func_00165b90
    .word 0x4600a306
    b L16428c
    nop
    .word 0x3c02be99
L1641c4:
    ori v0,v0,0x999a
    .word 0x44827800
    .word 0x44807000
    .word 0x3c02bf00
    .word 0x44828000
    paddub a0,s0,zero
    .word 0x3c02bfc0
    .word 0x44828800
    jal func_00165b90
    .word 0x4600a306
    b L16428c
    nop
    .word 0x3c02bf99
L1641f8:
    ori v0,v0,0x999a
    .word 0x44827000
    paddub a0,s0,zero
    .word 0x3c02c040
    .word 0x44828800
    .word 0x3c02be99
    ori v0,v0,0x999a
    .word 0x44827800
    .word 0x3c024000
    .word 0x44828000
    jal func_00165b90
    .word 0x4600a306
    b L16428c
    nop
    paddub a0,s0,zero
L164234:
    jal func_001657c0
    .word 0x4600a306
    b L16428c
    nop
    .word 0x3c023fc0
L164248:
    .word 0x44828000
    .word 0x44807000
    .word 0x3c023f00
    .word 0x44828800
    paddub a0,s0,zero
    jal func_00165b90
    .word 0x4600a306
    b L16428c
    nop
    paddub a0,s0,zero
L164270:
    jal func_00165940
    .word 0x4600a306
    b L16428c
    nop
    paddub a0,s0,zero
L164284:
    jal func_00165590
    .word 0x4600a306
L16428c:
    .word 0x7bbf0020
L164290:
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,48
}


