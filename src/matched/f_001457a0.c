extern void func_00145f50(void);
extern void func_00147b70(void);
extern void func_001ce240(void);
extern void func_001ce160(void);
extern void func_001463d0(void);
extern void func_001457a0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-176
    .word 0x7fbf0070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x8c820000
    paddub s0,a0,zero
    paddub s5,a1,zero
    andi v0,v0,0x8
    bnez v0,L145800
    .word 0x46006506
    .word 0x8f82836c
    slti at,v0,20
    beqzl at,L145804
    paddub a0,s0,zero
    jal func_00145f50
    nop
    beqz v0,L145ae8
    paddub a0,s0,zero
L145800:
    paddub a0,s0,zero
L145804:
    jal func_00147b70
    paddub a1,s5,zero
    paddub s0,v0,zero
    bnez s0,L145820
    nop
    b L145b4c
    .word 0x70001628
L145820:
    .word 0xc6010000
    .word 0xc6a00000
    addiu s1,sp,148
    addiu s3,sp,152
    addiu a0,sp,144
    sub.s $f0,$f1,$f0
    .word 0xe7a00090
    .word 0xc6010004
    .word 0xc6a00004
    sub.s $f0,$f1,$f0
    .word 0xe6200000
    .word 0xc6010008
    .word 0xc6a00008
    sub.s $f0,$f1,$f0
    jal func_001ce240
    .word 0xe6600000
    .word 0x8f828370
    .word 0x46000506
    addiu a0,sp,144
    .word 0xc6a00000
    addiu s2,sp,132
    .word 0xc4410000
    addiu s4,sp,136
    paddub a1,a0,zero
    sub.s $f0,$f1,$f0
    .word 0xe7a00080
    .word 0xc4410004
    .word 0xc6a00004
    sub.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc4410008
    .word 0xc6a00008
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe6800000
    .word 0xc7a50080
    .word 0xc7a60090
    .word 0xc6440000
    .word 0xc6230000
    .word 0xc6820000
    .word 0xc6610000
    .word 0x44800000
    mul.s $f5,$f5,$f6
    mul.s $f3,$f4,$f3
    adda.s $f5,$f3
    madd.s $f21,$f2,$f1
    c.lt.s $f21,$f0
    nop
    bc1f L145968
    nop
    .word 0x8f828370
    .word 0xc6a00000
    addiu a0,sp,128
    .word 0xc4410000
    sub.s $f0,$f1,$f0
    .word 0xe7a00080
    .word 0xc4410004
    .word 0xc6a00004
    sub.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc4410008
    .word 0xc6a00008
    sub.s $f0,$f1,$f0
    jal func_001ce240
    .word 0xe6800000
    .word 0xc7818378
    c.lt.s $f0,$f1
    nop
    bc1f L145b4c
    addiu v0,zero,1
    .word 0xe7808378
    .word 0xc6a20000
    .word 0xc6a10004
    .word 0xc6a00008
    .word 0x3c020030
    addiu v0,v0,8320
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0xc6a0000c
    b L145b48
    .word 0xe7808374
L145968:
    c.lt.s $f21,$f20
    nop
    bc1f L145a64
    nop
    mul.s $f0,$f6,$f21
    addiu v0,sp,164
    addiu a1,sp,168
    .word 0xe7a00090
    .word 0xc6200000
    addiu a0,sp,128
    mul.s $f0,$f0,$f21
    .word 0xe6200000
    .word 0xc6600000
    mul.s $f0,$f0,$f21
    .word 0xe6600000
    .word 0xc6a10000
    .word 0xc7a00090
    add.s $f0,$f1,$f0
    .word 0xe7a000a0
    .word 0xc6200000
    .word 0xc6a10004
    add.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc6600000
    .word 0xc6a10008
    add.s $f0,$f1,$f0
    .word 0xe4a00000
    .word 0x8f838370
    .word 0xc7a000a0
    .word 0xc4610000
    sub.s $f0,$f1,$f0
    .word 0xe7a00080
    .word 0xc4400000
    .word 0xc4610004
    sub.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc4610008
    .word 0xc4a00000
    sub.s $f0,$f1,$f0
    jal func_001ce240
    .word 0xe6800000
    .word 0xc7818378
    c.lt.s $f0,$f1
    nop
    bc1f L145b48
    nop
    .word 0xe7808378
    nop
    div.s $f0,$f21,$f20
    .word 0x3c020030
    addiu a0,sp,160
    addiu v1,v0,8320
    .word 0xc4810008
    .word 0xdc820000
    .word 0xfc620000
    .word 0xe4610008
    .word 0xc6a2000c
    .word 0xc601000c
    sub.s $f1,$f1,$f2
    mul.s $f0,$f1,$f0
    add.s $f0,$f2,$f0
    b L145b48
    .word 0xe7808374
L145a64:
    .word 0x8f828370
    .word 0xc6000000
    addiu a0,sp,128
    .word 0xc4410000
    sub.s $f0,$f1,$f0
    .word 0xe7a00080
    .word 0xc4410004
    .word 0xc6000004
    sub.s $f0,$f1,$f0
    .word 0xe6400000
    .word 0xc4410008
    .word 0xc6000008
    sub.s $f0,$f1,$f0
    jal func_001ce240
    .word 0xe6800000
    .word 0xc7818378
    c.lt.s $f0,$f1
    nop
    bc1f L145b48
    nop
    .word 0xe7808378
    .word 0xc6020000
    .word 0xc6010004
    .word 0xc6000008
    .word 0x3c020030
    addiu v0,v0,8320
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0xc600000c
    b L145b48
    .word 0xe7808374
    paddub a0,s0,zero
L145ae8:
    jal func_001463d0
    paddub a1,s5,zero
    paddub a0,s0,zero
    jal func_00147b70
    paddub a1,s5,zero
    paddub s1,v0,zero
    bnez s1,L145b10
    nop
    b L145b4c
    .word 0x70001628
L145b10:
    .word 0x8f82836c
    paddub a1,s5,zero
    paddub a0,s0,zero
    .word 0x4600a306
    addiu v0,v0,1
    jal func_001457a0
    .word 0xaf82836c
    paddub a0,s0,zero
    paddub a1,s1,zero
    jal func_001457a0
    .word 0x4600a306
    .word 0x8f82836c
    addiu v0,v0,-1
    .word 0xaf82836c
L145b48:
    addiu v0,zero,1
L145b4c:
    .word 0x7bbf0070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,176
}


