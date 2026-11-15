extern void func_00256438(void);
extern void func_001860d0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-224
    .word 0x7fbf0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b7000c
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x8c900004
    paddub s6,a0,zero
    .word 0x92030000
    beqz v1,L182618
    paddub s5,a1,zero
    .word 0xc6a30000
    .word 0xc6a20004
    .word 0xc6a10008
    .word 0xc6a0000c
    addiu v1,sp,176
    .word 0x44802000
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0xc6a30010
    .word 0xc6a20014
    .word 0xc6a10018
    .word 0xc6a0001c
    .word 0xe4630010
    .word 0xe4620014
    .word 0xe4610018
    .word 0xe460001c
    .word 0xc6a10020
    .word 0xc6a00024
    .word 0xe4610020
    .word 0xe4600024
    .word 0xc6d50018
    .word 0xc6c00008
    .word 0xc6c10014
    c.le.s $f21,$f4
    nop
    bc1f L1820d4
    add.s $f20,$f0,$f1
    neg.s $f0,$f21
    mul.s $f20,$f0,$f20
    .word 0xc6c0000c
    c.lt.s $f20,$f0
    nop
    bc1f L182618
    nop
    b L1822e0
    .word 0x70008e28
L1820d4:
    nop
    nop
    div.s $f0,$f1,$f20
    nop
    nop
    jal func_00256438
    add.s $f12,$f21,$f0
    .word 0x92c30010
    andi s1,v0,0xff
    sltu at,s1,v1
    beqz at,L182618
    nop
    bltz s1,L18211c
    srl a0,s1,0x1
    .word 0x44910000
    b L182134
    cvt.s.w $f0,$f0
    srl a0,s1,0x1
L18211c:
    andi v1,s1,0x1
    or a0,a0,v1
    .word 0x44840000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L182134:
    sub.s $f0,$f0,$f21
    b L1822c8
    mul.s $f20,$f20,$f0
L182140:
    .word 0x92040000
    .word 0x8ec30000
    .word 0x44800000
    addiu a0,a0,-32
    sll a0,a0,0x5
    addu s2,v1,a0
    .word 0xc6410018
    .word 0xc6430014
    add.s $f2,$f20,$f1
    add.s $f1,$f3,$f2
    c.le.s $f1,$f0
    nop
    bc1t L1822a8
    nop
    .word 0x8e440000
    addiu v1,zero,-1
    beq a0,v1,L1822e0
    nop
    c.le.s $f2,$f0
    nop
    bc1f L1822e0
    nop
    neg.s $f0,$f3
    nop
    div.s $f3,$f2,$f0
    .word 0x3c033f80
    .word 0xc6410004
    addiu v0,sp,168
    .word 0x44831000
    .word 0xc640000c
    sub.s $f2,$f2,$f3
    mula.s $f1,$f2
    madd.s $f0,$f0,$f3
    .word 0xe7a000a0
    .word 0xc6400008
    .word 0xe7a000a4
    .word 0xc641000c
    .word 0xc6400010
    .word 0xe4410000
    .word 0xe4400004
    .word 0xc6410014
    .word 0xc6a00008
    mul.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    .word 0xe7a000b8
    .word 0xc6a0000c
    mul.s $f0,$f0,$f1
    .word 0xe7a000bc
    .word 0x8ec30000
    subu v0,s2,v1
    bgez v0,L182218
    sra a0,v0,0x5
    addiu v0,v0,31
    sra a0,v0,0x5
L182218:
    slti v0,a0,109
    bnez v0,L182288
    nop
    slti at,a0,113
    beqz at,L182288
    nop
    addiu s7,sp,200
    addiu s3,sp,204
    .word 0xc6f70000
    addiu s4,sp,208
    .word 0xc6760000
    .word 0xc6950000
    .word 0x3c02437f
    addiu a1,sp,176
    .word 0xaee20000
    .word 0xae620000
    .word 0xae820000
    .word 0x8c621c04
    .word 0x8e430000
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c440000
    jal func_001860d0
    addiu a2,sp,160
    .word 0xe6f70000
    .word 0xe6760000
    b L1822a8
    .word 0xe6950000
L182288:
    .word 0x8c621c04
    addiu a1,sp,176
    .word 0x8e430000
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c440000
    jal func_001860d0
    addiu a2,sp,160
L1822a8:
    .word 0xc6420018
    .word 0xc6410014
    .word 0xc640001c
    addiu s0,s0,1
    add.s $f1,$f2,$f1
    add.s $f0,$f0,$f1
    add.s $f20,$f20,$f0
    nop
L1822c8:
    .word 0x44800000
    nop
    c.lt.s $f20,$f0
    nop
    bc1t L182140
    nop
L1822e0:
    .word 0x92030000
    bnez v1,L182308
    nop
    .word 0x92c30010
    addiu s1,s1,1
    beq s1,v1,L182618
    nop
    .word 0xc6c00014
    .word 0x8ed00004
    add.s $f20,$f20,$f0
L182308:
    .word 0x92040000
    .word 0x8ec30000
    addiu a0,a0,-32
    sll a0,a0,0x5
    addu s4,v1,a0
    .word 0xc6800018
    b L182600
    add.s $f20,$f20,$f0
L182328:
    .word 0xc6800014
    add.s $f0,$f20,$f0
    c.le.s $f0,$f1
    nop
    bc1t L1824a8
    nop
    .word 0x8e840000
    addiu v1,zero,-1
    beq a0,v1,L182618
    nop
    .word 0xc6a20008
    .word 0x3c023f80
    .word 0xc6a10000
    addiu v1,sp,160
    .word 0x44820000
    addiu a0,sp,168
    mul.s $f2,$f20,$f2
    add.s $f1,$f1,$f2
    .word 0xe7a100b0
    .word 0xc6a1000c
    .word 0xc6a20004
    mul.s $f1,$f20,$f1
    add.s $f1,$f2,$f1
    .word 0xe7a100b4
    .word 0xc6850014
    .word 0xc6c3000c
    .word 0xc6820004
    .word 0xc6810008
    add.s $f4,$f20,$f5
    .word 0xe4620000
    sub.s $f2,$f4,$f3
    .word 0xe4610004
    .word 0xc6810004
    div.s $f2,$f2,$f5
    mul.s $f1,$f1,$f2
    .word 0xe4810000
    .word 0xc681000c
    sub.s $f2,$f0,$f2
    .word 0xc4800000
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4800000
    .word 0xc6800010
    .word 0xe7a000ac
    .word 0xc6810014
    .word 0xc6a00008
    mul.s $f2,$f2,$f1
    mul.s $f0,$f0,$f2
    .word 0xe7a000b8
    .word 0xc6a0000c
    mul.s $f0,$f0,$f2
    .word 0xe7a000bc
    .word 0x8ec40000
    subu v0,s4,a0
    bgez v0,L182410
    sra v1,v0,0x5
    addiu v0,v0,31
    sra v1,v0,0x5
L182410:
    slti v0,v1,109
    bnez v0,L182480
    nop
    slti at,v1,113
    beqz at,L182480
    nop
    addiu s0,sp,200
    addiu s1,sp,204
    .word 0xc6160000
    addiu s2,sp,208
    .word 0xc6350000
    .word 0xc6540000
    .word 0x3c02437f
    addiu a1,sp,176
    .word 0xae020000
    .word 0xae220000
    .word 0xae420000
    .word 0x8e830000
    .word 0x8c821c04
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c440000
    jal func_001860d0
    addiu a2,sp,160
    .word 0xe6160000
    .word 0xe6350000
    b L182618
    .word 0xe6540000
L182480:
    .word 0x8e830000
    .word 0x8c821c04
    addiu a1,sp,176
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c440000
    jal func_001860d0
    addiu a2,sp,160
    b L18261c
    .word 0x7bbf0090
L1824a8:
    .word 0x8e840000
    addiu v1,zero,-1
    beq a0,v1,L1825a8
    nop
    .word 0xc6a10008
    .word 0xc6a00000
    mul.s $f1,$f20,$f1
    add.s $f0,$f0,$f1
    .word 0xe7a000b0
    .word 0xc6a0000c
    .word 0xc6a10004
    mul.s $f0,$f20,$f0
    add.s $f0,$f1,$f0
    .word 0xe7a000b4
    .word 0xc6a10008
    .word 0xc6800014
    mul.s $f0,$f1,$f0
    .word 0xe7a000b8
    .word 0xc6a1000c
    .word 0xc6800014
    mul.s $f0,$f1,$f0
    .word 0xe7a000bc
    .word 0x8ec30000
    subu v0,s4,v1
    bgez v0,L182518
    sra a0,v0,0x5
    addiu v0,v0,31
    sra a0,v0,0x5
L182518:
    slti v0,a0,109
    bnez v0,L182588
    nop
    slti at,a0,113
    beqz at,L182588
    nop
    addiu s7,sp,200
    addiu s2,sp,204
    .word 0xc6f70000
    addiu s3,sp,208
    .word 0xc6560000
    .word 0xc6750000
    .word 0x3c02437f
    addiu a1,sp,176
    .word 0xaee20000
    .word 0xae420000
    .word 0xae620000
    .word 0x8c621c04
    .word 0x8e830000
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c440000
    jal func_001860d0
    addiu a2,s4,4
    .word 0xe6f70000
    .word 0xe6560000
    b L1825a8
    .word 0xe6750000
L182588:
    .word 0x8c621c04
    addiu a1,sp,176
    .word 0x8e830000
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c440000
    jal func_001860d0
    addiu a2,s4,4
L1825a8:
    .word 0xc6810014
    .word 0xc680001c
    addiu s0,s0,1
    .word 0x92030000
    add.s $f0,$f1,$f0
    bnez v1,L1825e0
    add.s $f20,$f20,$f0
    .word 0x92c30010
    addiu s1,s1,1
    beq s1,v1,L182618
    nop
    .word 0xc6c00014
    .word 0x8ed00004
    add.s $f20,$f20,$f0
L1825e0:
    .word 0x92040000
    .word 0x8ec30000
    addiu a0,a0,-32
    sll a0,a0,0x5
    addu s4,v1,a0
    .word 0xc6800018
    add.s $f20,$f20,$f0
    nop
L182600:
    .word 0xc6c1000c
    c.lt.s $f20,$f1
    nop
    bc1t L182328
    nop
    nop
L182618:
    .word 0x7bbf0090
L18261c:
    .word 0x7bb70080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b7000c
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,224
}


