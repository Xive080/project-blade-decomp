extern void func_0015d760(void);
extern void func_0015cd20(void);
extern void func_001c7320(void);
extern void func_001c73c0(void);
extern void func_001ce160(void);
extern void func_0011a620(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-288
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
    paddub s6,a0,zero
    .word 0x46006506
    .word 0xafa700bc
    paddub s4,t0,zero
    beqz s6,L15d210
    paddub s5,a1,zero
    bnez s5,L15d21c
    .word 0x3c023f7d
L15d210:
    b L15d5c4
    .word 0x70001628
    .word 0x3c023f7d
L15d21c:
    ori v0,v0,0x70a4
    .word 0x44820000
    nop
    c.le.s $f20,$f0
    nop
    bc1t L15d25c
    addiu s3,sp,232
    jal func_0015d760
    nop
    beqz s4,L15d250
    addiu v0,zero,1
    .word 0xae800000
    addiu v0,zero,1
L15d250:
    b L15d5c8
    .word 0x7bbf00a0
    addiu s3,sp,232
L15d25c:
    .word 0x3c023f80
    addiu s7,sp,212
    .word 0xae620000
    .word 0xaee20000
    .word 0xafa200c0
    addiu s8,sp,208
    addiu v0,sp,200
    .word 0xafc00000
    .word 0xac400000
    addiu v0,sp,196
    .word 0xac400000
    addiu s2,sp,228
    addiu s1,sp,224
    .word 0xae400000
    addiu s0,sp,216
    .word 0xae200000
    .word 0xae000000
    .word 0xafa000f8
    addiu v0,sp,240
    .word 0xafa000f4
    .word 0xac400000
    addiu a3,sp,204
    .word 0x3c020002
    .word 0x8ce30000
    ori v0,v0,0x3
    addiu a0,sp,192
    or v0,v1,v0
    jal func_0015d760
    .word 0xace20000
    .word 0xc6c20030
    .word 0xc6c10034
    .word 0xc6c00038
    addiu v0,sp,240
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0x8fa200bc
    beqz v0,L15d314
    nop
    addiu a2,sp,192
    .word 0x4600a306
    paddub a0,s6,zero
    jal func_0015cd20
    paddub a1,s6,zero
    b L15d4cc
    nop
L15d314:
    .word 0xc7a100c0
    .word 0xc6c00000
    addiu v0,sp,196
    paddub a0,s6,zero
    sub.s $f0,$f1,$f0
    .word 0xe7a000c0
    .word 0xc4410000
    .word 0xc6c00004
    sub.s $f0,$f1,$f0
    .word 0xe4400000
    addiu v0,sp,200
    .word 0xc6c00008
    .word 0xc4410000
    sub.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc7c10000
    .word 0xc6c00010
    addiu v0,sp,196
    sub.s $f0,$f1,$f0
    .word 0xe7c00000
    .word 0xc6e10000
    .word 0xc6c00014
    sub.s $f0,$f1,$f0
    .word 0xe6e00000
    .word 0xc6010000
    .word 0xc6c00018
    sub.s $f0,$f1,$f0
    .word 0xe6000000
    .word 0xc6210000
    .word 0xc6c00020
    sub.s $f0,$f1,$f0
    .word 0xe6200000
    .word 0xc6410000
    .word 0xc6c00024
    sub.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc6610000
    .word 0xc6c00028
    sub.s $f0,$f1,$f0
    .word 0xe6600000
    .word 0xc7a000c0
    mul.s $f0,$f0,$f20
    .word 0xe7a000c0
    .word 0xc4400000
    mul.s $f0,$f0,$f20
    .word 0xe4400000
    addiu v0,sp,200
    .word 0xc4400000
    mul.s $f0,$f0,$f20
    .word 0xe4400000
    .word 0xc7c00000
    addiu v0,sp,196
    mul.s $f0,$f0,$f20
    .word 0xe7c00000
    .word 0xc6e00000
    mul.s $f0,$f0,$f20
    .word 0xe6e00000
    .word 0xc6000000
    mul.s $f0,$f0,$f20
    .word 0xe6000000
    .word 0xc6200000
    mul.s $f0,$f0,$f20
    .word 0xe6200000
    .word 0xc6400000
    mul.s $f0,$f0,$f20
    .word 0xe6400000
    .word 0xc6600000
    mul.s $f0,$f0,$f20
    .word 0xe6600000
    .word 0xc6c10000
    .word 0xc7a000c0
    add.s $f0,$f1,$f0
    .word 0xe6c00000
    .word 0xc4400000
    .word 0xc6c10004
    addiu v0,sp,200
    add.s $f0,$f1,$f0
    .word 0xe6c00004
    .word 0xc4400000
    .word 0xc6c10008
    add.s $f0,$f1,$f0
    .word 0xe6c00008
    .word 0xc7c00000
    .word 0xc6c10010
    add.s $f0,$f1,$f0
    .word 0xe6c00010
    .word 0xc6e00000
    .word 0xc6c10014
    add.s $f0,$f1,$f0
    .word 0xe6c00014
    .word 0xc6000000
    .word 0xc6c10018
    add.s $f0,$f1,$f0
    .word 0xe6c00018
    .word 0xc6200000
    .word 0xc6c10020
    add.s $f0,$f1,$f0
    .word 0xe6c00020
    .word 0xc6400000
    .word 0xc6c10024
    add.s $f0,$f1,$f0
    .word 0xe6c00024
    .word 0xc6600000
    .word 0xc6c10028
    add.s $f0,$f1,$f0
    jal func_001c7320
    .word 0xe6c00028
    paddub a0,s6,zero
    jal func_001c73c0
    paddub a1,s6,zero
L15d4cc:
    beqz s4,L15d5c4
    addiu v0,zero,1
    addiu a1,s6,32
    jal func_001ce160
    addiu a0,sp,272
    addiu a0,sp,256
    jal func_001ce160
    paddub a1,s5,zero
    .word 0xc7a50110
    .word 0xc7a40100
    .word 0xc7a30114
    .word 0xc7a20104
    .word 0xc7a10118
    .word 0xc7a00108
    .word 0x3c02bf80
    mul.s $f4,$f5,$f4
    mul.s $f2,$f3,$f2
    adda.s $f4,$f2
    madd.s $f12,$f1,$f0
    .word 0x44820000
    nop
    c.lt.s $f12,$f0
    nop
    bc1f L15d53c
    .word 0x3c023f80
    b L15d558
    .word 0x46000306
    .word 0x3c023f80
L15d53c:
    .word 0x44820000
    nop
    c.le.s $f12,$f0
    nop
    bc1t L15d558
    nop
    .word 0x46000306
L15d558:
    .word 0x44800000
    nop
    c.lt.s $f12,$f0
    nop
    bc1t L15d57c
    neg.s $f1,$f12
    b L15d57c
    .word 0x46006046
    neg.s $f1,$f12
L15d57c:
    .word 0x3c023c23
    ori v0,v0,0xd70a
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L15d5a0
    nop
    .word 0x44806000
L15d5a0:
    jal func_0011a620
    nop
    .word 0x3c024265
    ori v0,v0,0x2ee1
    .word 0x44820800
    nop
    mul.s $f0,$f1,$f0
    .word 0xe6800000
    addiu v0,zero,1
L15d5c4:
    .word 0x7bbf00a0
L15d5c8:
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
    addiu sp,sp,288
}


