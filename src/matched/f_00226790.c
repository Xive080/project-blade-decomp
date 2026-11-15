extern void func_00243290(void);
extern void func_002432e0(void);
extern void func_00242960(void);
asm void func(void) {
    .set noreorder
    .word 0x8ca80000
    addiu v0,zero,-1
    addiu v1,zero,1
    movn v0,v1,t0
    dsll32 v0,v0,0x18
    bne a2,v1,L2267bc
    dsra32 v0,v0,0x18
    .word 0xc4e10004
    .word 0xc4a00150
    sub.s $f0,$f0,$f1
    .word 0xe4a00150
L2267bc:
    addiu v1,zero,2
    beq a2,v1,L226a54
    nop
    addiu v1,zero,4
    beq a2,v1,L226874
    nop
    addiu v1,zero,1
    beq a2,v1,L2267e8
    nop
    b L226a94
    nop
L2267e8:
    .word 0x8ca30158
    sltiu at,v1,2
    bnez at,L226834
    nop
    .word 0x44820000
    .word 0xc4e30004
    .word 0x3c023a83
    ori v0,v0,0x126f
    .word 0x44822000
    cvt.s.w $f2,$f0
    .word 0x3c0240e0
    mul.s $f3,$f4,$f3
    .word 0xc4800038
    mul.s $f2,$f3,$f2
    .word 0x44820800
    nop
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4800038
L226834:
    .word 0x8ca20000
    .word 0xc4800040
    sll v0,v0,0x2
    addu v0,v0,a0
    .word 0xc4410074
    add.s $f0,$f0,$f1
    .word 0xe4800040
    .word 0x8ca20000
    sll v0,v0,0x2
    addu v0,v0,a0
    .word 0xac40006c
    .word 0x8ca20000
    sll v0,v0,0x2
    addu v0,v0,a0
    b L226a94
    .word 0xac400074
L226874:
    .word 0x8ce3000c
    beqz v1,L2268bc
    nop
    .word 0x8ca30000
    .word 0xc480003c
    sll v1,v1,0x2
    addu v1,v1,a0
    .word 0xc4610064
    add.s $f0,$f0,$f1
    .word 0xe480003c
    .word 0x8ca30000
    sll v1,v1,0x2
    addu v1,v1,a0
    .word 0xac60005c
    .word 0x8ca30000
    sll v1,v1,0x2
    addu v1,v1,a0
    .word 0xac600064
L2268bc:
    .word 0x8ce30004
    beqz v1,L226984
    nop
    .word 0x8ca80004
    .word 0x3c030001
    and v1,t0,v1
    bnez v1,L226984
    nop
    .word 0x8ca80000
    .word 0x3c033dcc
    ori v1,v1,0xcccd
    .word 0x44830000
    .word 0xc4e10000
    sll v1,t0,0x2
    addu v1,v1,a0
    .word 0xc462005c
    add.s $f1,$f2,$f1
    .word 0xe461005c
    .word 0x8ca30000
    sll v1,v1,0x2
    addu t0,v1,a0
    .word 0xc504005c
    c.le.s $f4,$f0
    nop
    bc1t L226970
    nop
    .word 0x3c033e99
    ori v1,v1,0x999a
    .word 0x44831800
    .word 0xc4e20000
    .word 0x3c033cf5
    ori v1,v1,0xc28f
    .word 0x44830800
    .word 0x44820000
    .word 0x3c0340e0
    mula.s $f3,$f2
    madd.s $f2,$f1,$f4
    cvt.s.w $f1,$f0
    mul.s $f2,$f1,$f2
    .word 0xc5000064
    .word 0x44830800
    nop
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe5000064
L226970:
    .word 0x8ca30000
    sll v1,v1,0x2
    addu v1,v1,a0
    b L2269a4
    .word 0xac60006c
L226984:
    .word 0x8ca30000
    sll v1,v1,0x2
    addu v1,v1,a0
    .word 0xac60005c
    .word 0x8ca30000
    sll v1,v1,0x2
    addu v1,v1,a0
    .word 0xac600064
L2269a4:
    .word 0x8ce30008
    beqz v1,L226a94
    nop
    .word 0x8ca80000
    .word 0x44820000
    nop
    cvt.s.w $f2,$f0
    .word 0x3c023c23
    ori v1,v0,0xd70a
    sll t0,t0,0x2
    addu t0,t0,a0
    .word 0x3c023c75
    ori v0,v0,0xc28f
    .word 0x44822000
    .word 0xc4e00000
    .word 0xc505006c
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44821800
    .word 0x44833800
    .word 0x3c0240e0
    add.s $f0,$f5,$f0
    .word 0xe500006c
    .word 0x44820800
    .word 0xc4e50000
    .word 0x8ca20000
    .word 0xc4a00170
    sll v0,v0,0x2
    mul.s $f5,$f5,$f0
    addu v0,v0,a0
    .word 0xc446006c
    mul.s $f4,$f4,$f5
    .word 0xc4400074
    mula.s $f7,$f6
    madd.s $f3,$f3,$f4
    mul.s $f2,$f2,$f3
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe4400074
    .word 0x8ca20000
    sll v0,v0,0x2
    addu v0,v0,a0
    b L226a94
    .word 0xac40005c
L226a54:
    .word 0x8ca20000
    sll v0,v0,0x2
    addu v0,v0,a0
    .word 0xac400074
    .word 0x8ca20000
    sll v0,v0,0x2
    addu v0,v0,a0
    .word 0xac40006c
    .word 0x8ca20000
    sll v0,v0,0x2
    addu v0,v0,a0
    .word 0xac400064
    .word 0x8ca20000
    sll v0,v0,0x2
    addu v0,v0,a0
    .word 0xac40005c
L226a94:
    j func_00243290
    nop
    nop
    addiu sp,sp,-144
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    jal func_002432e0
    paddub s0,a0,zero
    .word 0x8e03000c
    addiu v0,zero,5
    beq v1,v0,L226c80
    nop
    addiu v0,zero,4
    beq v1,v0,L226ae4
    nop
    b L226f8c
    .word 0x7bbf0040
L226ae4:
    .word 0xdf838898
    addiu a1,sp,104
    .word 0x3c02002e
    addiu a0,v0,26432
    .word 0xfca30000
    .word 0xdc830000
    .word 0xc4800008
    addiu v0,sp,112
    .word 0x3c010030
    .word 0xfc430000
    .word 0xe4400008
    .word 0x8c2370d8
    bnez v1,L226c80
    nop
    .word 0x3c010030
    .word 0x8c237688
    bnez v1,L226c80
    nop
    .word 0x3c010030
    .word 0x8c236f84
    andi v1,v1,0x6000
    bnez v1,L226c80
    nop
    .word 0x70004628
    paddub t1,s0,zero
    .word 0x3c033c23
    ori v1,v1,0xd70a
    .word 0x44831000
    .word 0x44802000
    .word 0x3c030030
    addiu a0,v1,27648
    .word 0x3c033f80
    addiu a1,zero,1456
    .word 0x44830800
L226b6c:
    .word 0xc5230038
    .word 0xc4400000
    div.s $f3,$f3,$f0
    nop
    nop
    c.lt.s $f3,$f4
    nop
    bc1t L226b94
    neg.s $f0,$f3
    .word 0x46001806
L226b94:
    c.le.s $f0,$f2
    nop
    bc1tl L226be4
    addiu t0,t0,1
    c.lt.s $f3,$f4
    nop
    bc1f L226bb8
    addiu a2,zero,1
    .word 0x70003628
L226bb8:
    sll v1,a2,0x2
    addu a3,v1,sp
    mult v1,a2,a1
    .word 0x8ce60068
    addu v1,a0,v1
    addiu a2,a2,1
    .word 0xace60068
    .word 0xc46004d0
    add.s $f0,$f0,$f1
    .word 0xe46004d0
    addiu t0,t0,1
L226be4:
    slti v1,t0,3
    addiu v0,v0,4
    bnez v1,L226b6c
    addiu t1,t1,4
    .word 0x8fa20068
    .word 0x8fa3006c
    beq v0,v1,L226c54
    .word 0x3c010030
    slt at,v1,v0
    addiu v0,zero,1
    addiu v1,zero,1456
    movn v0,zero,at
    mult a0,v0,v1
    xori v0,v0,0x1
    mult1 v1,v0,v1
    .word 0x3c020030
    addiu v0,v0,28548
    addu a1,v0,a0
    .word 0x3c020030
    addiu v0,v0,28548
    .word 0x8ca40000
    addu v1,v0,v1
    ori v0,a0,0x2000
    .word 0xaca20000
    .word 0x8c620000
    ori v0,v0,0x4000
    b L226c78
    .word 0xac620000
L226c54:
    .word 0x8c226f84
    ori v0,v0,0x4000
    .word 0x3c010030
    .word 0xac226f84
    .word 0x3c010030
    .word 0x8c227534
    ori v0,v0,0x4000
    .word 0x3c010030
    .word 0xac227534
L226c78:
    jal func_00242960
    nop
L226c80:
    .word 0x3c020030
    addiu a0,v0,28544
    addiu v1,zero,2
    paddub v0,v1,zero
    beqz v0,L226e20
    addiu v1,v1,-1
    .word 0x3c023a83
    ori v0,v0,0x126f
    .word 0x44821000
    .word 0x44803000
    .word 0x3c0240e0
    .word 0x44820800
    addiu v0,zero,1
L226cb4:
    .word 0x8c890000
    .word 0x8c870158
    addiu a1,zero,-1
    movn a1,v0,t1
    dsll32 t0,a1,0x18
    sltiu at,a3,2
    bnez at,L226d14
    dsra32 t0,t0,0x18
    bltz a3,L226ce8
    srl a2,a3,0x1
    .word 0x44870000
    b L226d00
    cvt.s.w $f3,$f0
L226ce8:
    andi a1,a3,0x1
    or a2,a2,a1
    .word 0x44860000
    nop
    cvt.s.w $f3,$f0
    add.s $f3,$f3,$f3
L226d00:
    .word 0xc4800154
    mul.s $f0,$f3,$f0
    mul.s $f0,$f2,$f0
    b L226d18
    mul.s $f3,$f1,$f0
L226d14:
    .word 0x44801800
L226d18:
    sll a1,t1,0x2
    addu t1,s0,a1
    .word 0xc5240074
    sltiu a1,a3,2
    .word 0xc5250064
    xori a1,a1,0x1
    addiu a2,zero,1
    c.eq.s $f6,$f4
    nop
    bc1f L226d48
    .word 0xad25007c
    .word 0x70003628
L226d48:
    beqz a2,L226d74
    nop
    .word 0x8c850000
    sll a1,a1,0x2
    addu a1,s0,a1
    .word 0xc4a00054
    c.eq.s $f4,$f0
    nop
    bc1f L226d74
    addiu a2,zero,1
    .word 0x70003628
L226d74:
    .word 0x8c850000
    c.eq.s $f6,$f5
    addiu a3,zero,1
    sll a1,a1,0x2
    addu a1,s0,a1
    bc1f L226d94
    .word 0xaca6008c
    .word 0x70003e28
L226d94:
    beqz a3,L226dc0
    nop
    .word 0x8c850000
    sll a1,a1,0x2
    addu a1,s0,a1
    .word 0xc4a0004c
    c.eq.s $f5,$f0
    nop
    bc1f L226dc0
    addiu a3,zero,1
    .word 0x70003e28
L226dc0:
    .word 0x8c860000
    .word 0x44880000
    paddub a1,v1,zero
    cvt.s.w $f0,$f0
    addiu v1,v1,-1
    sll a2,a2,0x2
    addu a2,s0,a2
    .word 0xacc70084
    .word 0x8c860000
    mul.s $f0,$f3,$f0
    sll a2,a2,0x2
    addu a2,s0,a2
    .word 0xe4c00044
    .word 0x8c860000
    sll a2,a2,0x2
    addu a2,s0,a2
    .word 0xe4c40054
    .word 0x8c860000
    sll a2,a2,0x2
    addu a2,s0,a2
    addiu a0,a0,1456
    bnez a1,L226cb4
    .word 0xe4c5004c
    nop
L226e20:
    addiu s2,sp,128
    .word 0x70008e28
    paddub s3,s0,zero
L226e2c:
    .word 0x3c02002e
    addiu a0,v0,26448
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,128
    .word 0xfc620000
    .word 0xe4600008
    .word 0xc6410000
    .word 0xc6020038
    neg.s $f0,$f1
    c.lt.s $f2,$f0
    nop
    bc1f L226e6c
    nop
    b L226e80
    .word 0xe6000038
L226e6c:
    c.le.s $f2,$f1
    nop
    bc1t L226e80
    nop
    .word 0xe6010038
L226e80:
    .word 0xafb10050
    .word 0xc6010038
    .word 0xc6400000
    addiu a2,zero,2
    paddub v0,a2,zero
    addiu a2,a2,-1
    div.s $f0,$f1,$f0
    nop
    nop
    beqz v0,L226f30
    .word 0xe7a00054
    sll v0,a2,0x2
    addu a0,s3,v0
    addu v0,v0,sp
    addiu a1,v0,80
    nop
L226ec0:
    .word 0xc6410000
    .word 0xc4820044
    neg.s $f0,$f1
    c.lt.s $f2,$f0
    nop
    bc1f L226ee4
    nop
    b L226ef8
    .word 0xe4800044
L226ee4:
    c.le.s $f2,$f1
    nop
    bc1t L226ef8
    nop
    .word 0xe4810044
L226ef8:
    .word 0xc6020038
    .word 0xc4810044
    paddub v0,a2,zero
    .word 0xc6400000
    addiu a2,a2,-1
    add.s $f1,$f2,$f1
    div.s $f0,$f1,$f0
    .word 0xe4a00008
    .word 0x8c83007c
    .word 0xaca30010
    addiu a0,a0,-4
    bnez v0,L226ec0
    addiu a1,a1,-4
    nop
L226f30:
    .word 0x8f8484ac
    beqz a0,L226f50
    nop
    .word 0x8c820010
    addiu a2,sp,80
    jalr ra,v0
    addiu a1,zero,15
    nop
L226f50:
    .word 0x8f8488c4
    addiu v0,zero,1
    .word 0xafa20060
    .word 0xafa20064
    addiu a2,sp,80
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,15
    addiu s1,s1,1
    slti v0,s1,3
    addiu s2,s2,4
    addiu s0,s0,4
    bnez v0,L226e2c
    addiu s3,s3,8
    .word 0x7bbf0040
L226f8c:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,144
}


