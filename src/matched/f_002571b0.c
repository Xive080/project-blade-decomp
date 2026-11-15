extern void func_00188ff0(void);
extern void func_00189050(void);
extern void func_001214b8(void);
extern void func_0013b550(void);
extern void func_00182e50(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-224
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x7080ae28
    .word 0x8ca40000
    addiu v1,zero,4
    beq a0,v1,L25759c
    .word 0x70a0be28
    addiu v1,zero,3
    beq a0,v1,L2573d8
    nop
    addiu v1,zero,2
    beq a0,v1,L257368
    nop
    addiu v1,zero,1
    beq a0,v1,L2572fc
    nop
    beqz a0,L257224
    .word 0x70008628
    b L257614
    .word 0x7bbf0080
    .word 0x70008628
L257224:
    .word 0x72a08e28
L257228:
    .word 0x8e240090
    beqzl a0,L257244
    addiu s0,s0,1
    jal func_00188ff0
    nop
    .word 0xae200090
    addiu s0,s0,1
L257244:
    sltiu v0,s0,3
    bnez v0,L257228
    addiu s1,s1,4
    .word 0x3c02002e
    addiu a0,v0,1728
    .word 0xc6a200dc
    .word 0x3c024160
    .word 0x44820000
    .word 0x8f8a89f0
    .word 0x8ee90008
    .word 0xc6a100d8
    div.s $f0,$f2,$f0
    addiu a3,zero,5
    .word 0x8d480008
    .word 0x3c063f00
    .word 0x3c0543e0
    addiu v1,sp,172
    .word 0x3c024200
    .word 0xafa70090
    .word 0xafa60094
    .word 0xafa00098
    .word 0xafa0009c
    .word 0xe7a100a0
    .word 0xe7a200a4
    .word 0xafa500a8
    .word 0xc4840000
    .word 0xc4830004
    .word 0xc481000c
    .word 0xc4820008
    .word 0xe4640000
    .word 0xe4630004
    .word 0xe4620008
    .word 0xe461000c
    .word 0xafa000bc
    .word 0xafa800c0
    .word 0xafa900c4
    .word 0xe7a000c8
    .word 0xafa200cc
    .word 0x8ea2002c
    .word 0x8d450000
    .word 0x8ea60028
    addiu a0,sp,144
    jal func_00189050
    addiu a3,v0,3
    b L257610
    .word 0xaea20090
L2572fc:
    .word 0x8ee30004
    beqz v1,L257338
    nop
    .word 0x3c03002e
    addiu v1,v1,1696
    .word 0x8ea40088
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4830028
    .word 0xe482002c
    .word 0xe4810030
    b L257610
    .word 0xe4800034
L257338:
    .word 0x3c03002e
    addiu v1,v1,1728
    .word 0x8ea40088
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4830028
    .word 0xe482002c
    .word 0xe4810030
    b L257610
    .word 0xe4800034
L257368:
    .word 0x8ea4008c
    beqz a0,L257610
    nop
    .word 0x8ee30004
    beqz v1,L2573ac
    nop
    .word 0x3c03002e
    addiu v1,v1,1696
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4830028
    .word 0xe482002c
    .word 0xe4810030
    b L257610
    .word 0xe4800034
L2573ac:
    .word 0x3c03002e
    addiu v1,v1,1728
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4830028
    .word 0xe482002c
    .word 0xe4810030
    b L257610
    .word 0xe4800034
L2573d8:
    .word 0x8ef30008
    .word 0x70008628
    .word 0x72a08e28
L2573e4:
    .word 0x8e240090
    beqzl a0,L257404
    addiu s0,s0,1
    jal func_00188ff0
    nop
    .word 0xae200090
    nop
    addiu s0,s0,1
L257404:
    sltiu v0,s0,3
    bnez v0,L2573e4
    addiu s1,s1,4
    .word 0x70008628
    .word 0x72a0b628
    .word 0x72a0a628
L25741c:
    .word 0x8e620020
    beqz v0,L257450
    addiu s1,s6,168
    .word 0x3c02002f
    addiu a2,s0,1
    addiu a1,v0,5360
    addiu a3,s3,16
    jal func_001214b8
    .word 0x72202628
    .word 0x3c02002e
    addiu v0,v0,1728
    b L257480
    .word 0xae82009c
L257450:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,144
    .word 0x70403e28
    .word 0x3c02002f
    addiu a2,s0,1
    addiu a1,v0,5360
    jal func_001214b8
    .word 0x72202628
    .word 0x3c02002f
    addiu v0,v0,-28368
    .word 0xae82009c
L257480:
    .word 0x8ee20004
    bne v0,s0,L257498
    nop
    .word 0x3c02002e
    b L2574a0
    addiu s2,v0,1696
L257498:
    .word 0x8e92009c
    nop
L2574a0:
    .word 0x3c024170
    .word 0x44820800
    bltz s0,L2574bc
    .word 0xc6a200d8
    .word 0x44900000
    b L2574d8
    cvt.s.w $f0,$f0
L2574bc:
    srl v1,s0,0x1
    andi v0,s0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L2574d8:
    .word 0x8f8489f0
    mul.s $f0,$f1,$f0
    addiu v1,zero,2
    .word 0x3c02c282
    .word 0x72202e28
    .word 0x8c840008
    add.s $f0,$f2,$f0
    .word 0xafa30090
    .word 0xafa00094
    .word 0xafa00098
    .word 0xafa2009c
    .word 0xe7a000a0
    .word 0xafa400bc
    jal func_00182e50
    .word 0xafb100c0
    addiu v0,sp,196
    .word 0xe4400000
    .word 0x3c034160
    .word 0x44830800
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    addiu v0,sp,172
    addiu a0,sp,144
    .word 0xe7a000a4
    .word 0xafa300a8
    .word 0xc6430000
    .word 0xc6420004
    .word 0xc6410008
    .word 0xc640000c
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0x8f8389f0
    .word 0x8ea2002c
    .word 0x8ea60028
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,3
    addiu s0,s0,1
    .word 0xae820090
    addiu s6,s6,16
    addiu s3,s3,20
    sltiu v1,s0,3
    bnez v1,L25741c
    addiu s4,s4,4
    b L257610
    nop
L25759c:
    .word 0x70003628
    .word 0x3c03002e
    addiu a0,v1,1696
L2575a8:
    .word 0x8ee30004
    bne v1,a2,L2575d8
    .word 0x8ea50090
    .word 0xc4830000
    .word 0xc4820004
    .word 0xc4810008
    .word 0xc480000c
    .word 0xe4a30028
    .word 0xe4a2002c
    .word 0xe4a10030
    b L257600
    .word 0xe4a00034
L2575d8:
    .word 0x8ea3009c
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4a30028
    .word 0xe4a2002c
    .word 0xe4a10030
    .word 0xe4a00034
    nop
L257600:
    addiu a2,a2,1
    sltiu v1,a2,3
    bnez v1,L2575a8
    addiu s5,s5,4
L257610:
    .word 0x7bbf0080
L257614:
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,224
}


