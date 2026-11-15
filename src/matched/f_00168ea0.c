extern void func_001c3b70(void);
extern void func_001ce160(void);
extern void func_001c3b80(void);
extern void func_001c7710(void);
extern void func_001ce410(void);
extern void func_001c7610(void);
extern void func_00169470(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-208
    .word 0x7fbf0080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x3c010030
    .word 0x8c225e10
    paddub s3,a0,zero
    jal func_001c3b70
    .word 0x8c440068
    .word 0x3c010030
    .word 0xc4235eac
    addiu a0,sp,192
    .word 0x4480b000
    addiu s1,sp,196
    .word 0x4600b506
    addiu s2,sp,200
    .word 0x3c010030
    .word 0xc4225ea0
    paddub s0,v0,zero
    paddub a1,a0,zero
    .word 0x3c010030
    .word 0xc4215eb0
    sub.s $f2,$f3,$f2
    .word 0xe7a200c0
    .word 0x3c010030
    .word 0xc4205ea4
    sub.s $f0,$f1,$f0
    .word 0x3c010030
    .word 0xe6200000
    .word 0xc4215eb4
    .word 0x3c010030
    .word 0xc4205ea8
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe6400000
    beqz s3,L169110
    .word 0x46000546
    .word 0x3c010030
    .word 0xc421a89c
    .word 0x3c023f00
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L168fb0
    .word 0x3c02bf00
    .word 0x3c023f33
    ori v0,v0,0x3333
    .word 0x44820000
    nop
    c.le.s $f21,$f0
    nop
    bc1t L168fdc
    nop
    .word 0x3c023d23
    ori v0,v0,0xd70a
    .word 0x44820000
    b L168fdc
    sub.s $f21,$f21,$f0
    .word 0x3c02bf00
L168fb0:
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L168fdc
    nop
    .word 0x3c023d23
    ori v0,v0,0xd70a
    .word 0x44820000
    nop
    add.s $f21,$f21,$f0
L168fdc:
    .word 0x3c010030
    .word 0xc421a898
    .word 0x3c023f00
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L169028
    .word 0x3c02bf00
    .word 0x3c010030
    .word 0xc4215ef8
    .word 0x3c023f80
    .word 0x44820000
    nop
    add.s $f0,$f1,$f0
    .word 0x3c010030
    b L169060
    .word 0xe4205ef8
    .word 0x3c02bf00
L169028:
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L169060
    nop
    .word 0x3c010030
    .word 0xc4215ef8
    .word 0x3c023f80
    .word 0x44820000
    nop
    sub.s $f0,$f1,$f0
    .word 0x3c010030
    .word 0xe4205ef8
L169060:
    .word 0x3c010030
    .word 0xc421a890
    .word 0x3c023f00
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L169098
    .word 0x3c02bf00
    .word 0x3c02bfc0
    .word 0x4482b000
    b L1690b8
    nop
    .word 0x3c02bf00
L169098:
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L1690b8
    nop
    .word 0x3c023fc0
    .word 0x4482b000
L1690b8:
    .word 0x3c010030
    .word 0xc421a894
    .word 0x3c023f00
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L1690f0
    .word 0x3c02bf00
    .word 0x3c023fc0
    .word 0x4482a000
    b L169110
    nop
    .word 0x3c02bf00
L1690f0:
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L169110
    nop
    .word 0x3c02bfc0
    .word 0x4482a000
L169110:
    .word 0x3c010030
    .word 0x8c225e14
    jal func_001c3b80
    .word 0x8c4404ec
    .word 0x3c030030
    addiu a2,v1,24096
    addiu a1,zero,8
L16912c:
    .word 0x8c440000
    .word 0x8c430004
    addiu a1,a1,-1
    .word 0xacc40000
    .word 0xacc30004
    addiu v0,v0,8
    bgtz a1,L16912c
    addiu a2,a2,8
    .word 0x3c020030
    addiu a0,v0,24160
    .word 0x3c020030
    jal func_001c7710
    addiu a1,v0,24096
    .word 0xc7a000c0
    addiu a0,sp,192
    .word 0x3c020030
    addiu s3,sp,148
    mul.s $f0,$f0,$f21
    addiu s4,sp,152
    .word 0x3c010030
    addiu a2,zero,1
    .word 0xe7a00090
    .word 0xc6200000
    addiu a3,v0,24096
    paddub a1,a0,zero
    mul.s $f0,$f0,$f21
    .word 0xe6600000
    .word 0xc6400000
    mul.s $f0,$f0,$f21
    .word 0xe6800000
    .word 0xc4215eac
    .word 0xc7a00090
    .word 0x3c010030
    sub.s $f0,$f1,$f0
    .word 0xe4205ea0
    .word 0x3c010030
    .word 0xc4215eb0
    .word 0xc6600000
    .word 0x3c010030
    sub.s $f0,$f1,$f0
    .word 0xe4205ea4
    .word 0x3c010030
    .word 0xc4215eb4
    .word 0xc6800000
    .word 0x3c010030
    sub.s $f0,$f1,$f0
    jal func_001ce410
    .word 0xe4205ea8
    addiu a0,sp,144
    .word 0x3c020030
    addiu a2,zero,1
    addiu a3,v0,24096
    jal func_001ce410
    paddub a1,a0,zero
    addiu s6,sp,180
    .word 0x4600b306
    .word 0xafa000b0
    .word 0x3c023f80
    .word 0xaec20000
    addiu s5,sp,184
    .word 0x3c027000
    addiu a1,sp,176
    ori a0,v0,0x3ed0
    .word 0x70003628
    jal func_001c7610
    .word 0xaea00000
    addiu a0,sp,144
    .word 0x3c027000
    addiu a2,zero,1
    paddub a1,a0,zero
    jal func_001ce410
    ori a3,v0,0x3ed0
    addiu a0,sp,192
    .word 0x3c027000
    addiu a2,zero,1
    paddub a1,a0,zero
    jal func_001ce410
    ori a3,v0,0x3ed0
    .word 0xc6c50000
    .word 0xc6420000
    .word 0xc6a30000
    .word 0xc6260000
    .word 0xc7a400c0
    .word 0xc7a700b0
    .word 0x44800800
    mula.s $f5,$f2
    c.le.s $f20,$f1
    msub.s $f0,$f3,$f6
    .word 0xe7a000a0
    mula.s $f3,$f4
    msub.s $f0,$f7,$f2
    .word 0xe7a000a4
    mula.s $f7,$f6
    msub.s $f0,$f5,$f4
    bc1t L1692d4
    .word 0xe7a000a8
    .word 0x3c02bf73
    ori v0,v0,0x3333
    .word 0x44820000
    nop
    c.lt.s $f6,$f0
    nop
    bc1f L1692d4
    nop
    b L169310
    .word 0x46000d06
L1692d4:
    .word 0x44800800
    nop
    c.lt.s $f20,$f1
    nop
    bc1f L169314
    .word 0x3c027000
    .word 0x3c023f73
    ori v0,v0,0x3333
    .word 0x44820000
    nop
    c.le.s $f6,$f0
    nop
    bc1t L169310
    nop
    .word 0x46000d06
L169310:
    .word 0x3c027000
L169314:
    addiu a1,sp,160
    .word 0x4600a306
    ori a0,v0,0x3ed0
    jal func_001c7610
    .word 0x70003628
    addiu a0,sp,144
    .word 0x3c027000
    addiu a2,zero,1
    paddub a1,a0,zero
    jal func_001ce410
    ori a3,v0,0x3ed0
    addiu a0,sp,144
    .word 0x3c020030
    addiu a2,zero,1
    addiu a3,v0,24160
    jal func_001ce410
    paddub a1,a0,zero
    .word 0x3c010030
    .word 0xc4215eac
    .word 0xc7a00090
    paddub a0,s0,zero
    .word 0x3c010030
    sub.s $f0,$f1,$f0
    .word 0xe4205ea0
    .word 0x3c010030
    .word 0xc4215eb0
    .word 0xc6600000
    .word 0x3c010030
    sub.s $f0,$f1,$f0
    .word 0xe4205ea4
    .word 0x3c010030
    .word 0xc4215eb4
    .word 0xc6800000
    .word 0x3c010030
    sub.s $f0,$f1,$f0
    jal func_00169470
    .word 0xe4205ea8
    .word 0x3c010030
    .word 0x8c235e10
    .word 0xc6020030
    .word 0xc6010034
    .word 0xc6000038
    .word 0x3c010030
    .word 0xe4620094
    .word 0xe4610098
    .word 0xe460009c
    .word 0xc6010030
    .word 0xc6000020
    .word 0x8c235e10
    add.s $f0,$f1,$f0
    .word 0x3c010030
    .word 0xe46000a0
    .word 0x8c235e10
    .word 0xc6010034
    .word 0xc6000024
    .word 0x3c010030
    add.s $f0,$f1,$f0
    .word 0xe46000a4
    .word 0x8c235e10
    .word 0xc6010038
    .word 0xc6000028
    .word 0x3c010030
    add.s $f0,$f1,$f0
    .word 0xe46000a8
    .word 0x8c235e10
    .word 0xc6020010
    .word 0xc6010014
    .word 0xc6000018
    .word 0xe46200ac
    .word 0xe46100b0
    .word 0xe46000b4
    .word 0x7bbf0080
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
    addiu sp,sp,208
}


