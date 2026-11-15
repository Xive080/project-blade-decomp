extern void func_001c3b80(void);
extern void func_001ce3f0(void);
extern void func_001ce160(void);
extern void func_0017f6b0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-192
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c90000c
    paddub s6,a0,zero
    .word 0x8e170024
    jal func_001c3b80
    .word 0x8e040048
    paddub s2,v0,zero
    addiu v0,zero,1
    .word 0xaec00270
    .word 0xaec20274
    .word 0xaec20278
    .word 0xaec0026c
    .word 0xafa000a8
    .word 0xafa000a4
    .word 0xafa000a0
    .word 0x7000a628
    .word 0x7000ae28
    .word 0x70009e28
    b L1acb88
    .word 0x70008e28
L1ac814:
    .word 0x8ec20008
    sll v1,s1,0x2
    .word 0x3c010001
    addu v0,v1,v0
    addu at,v0,at
    .word 0x8c22ea74
    beqz v0,L1acb58
    nop
    .word 0x8e03004c
    sll v0,s1,0x6
    addiu a0,sp,144
    addiu a2,zero,1
    addu v0,v0,v1
    .word 0xc4420018
    .word 0xc441001c
    .word 0xc4400020
    paddub a1,a0,zero
    paddub a3,s2,zero
    .word 0xe4820000
    .word 0xe4810004
    jal func_001ce3f0
    .word 0xe4800008
    .word 0x8ec50008
    sll v0,s1,0x1
    addu v0,v0,s1
    .word 0xc7a00090
    sll a0,v0,0x2
    .word 0x3c010001
    addu v0,a0,a1
    addu at,v0,at
    .word 0xc421ea04
    sll v1,s1,0x2
    sub.s $f0,$f0,$f1
    .word 0x3c010001
    .word 0xe7a00090
    .word 0x8ec20008
    .word 0xc7a00094
    addu v0,a0,v0
    addu at,v0,at
    .word 0xc421ea08
    sub.s $f0,$f0,$f1
    .word 0x3c010001
    .word 0xe7a00094
    .word 0x8ec20008
    .word 0xc7a00098
    addu v0,a0,v0
    addu at,v0,at
    .word 0xc421ea0c
    sub.s $f0,$f0,$f1
    .word 0x3c010001
    .word 0xe7a00098
    .word 0xc7a20090
    .word 0xc7a10094
    .word 0x8ec20008
    .word 0xc7a00098
    mul.s $f2,$f2,$f2
    addu v0,v1,v0
    addu at,v0,at
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f0,$f0,$f0
    .word 0xe420ea64
    .word 0x8ec20008
    .word 0x3c010001
    addu v0,v1,v0
    addu at,v0,at
    .word 0xc420ea64
    sqrt.s $f0,$f0
    .word 0x3c010001
    addu at,v0,at
    .word 0xe420ea64
    .word 0x8ec20008
    .word 0x3c010032
    .word 0xc4207bb0
    addu v0,v1,v0
    .word 0x3c010001
    addu at,v0,at
    .word 0xc421ea64
    c.lt.s $f1,$f0
    nop
    bc1f L1ac968
    nop
    addiu v0,zero,1
    b L1ac990
    .word 0xaec20270
L1ac968:
    .word 0xaec00274
    .word 0x8ec20008
    .word 0x3c010001
    addu v0,v1,v0
    addu at,v0,at
    .word 0x8c22ea84
    bnez v0,L1ac990
    nop
    .word 0xaec00278
    nop
L1ac990:
    .word 0x8ec30008
    .word 0x3c023e19
    .word 0x8e06004c
    ori v0,v0,0x999a
    .word 0x44820000
    sll a0,s1,0x2
    addu v0,a0,v1
    sll a1,s1,0x6
    .word 0x3c010001
    addu a1,a1,a2
    addu at,v0,at
    .word 0xc4a2001c
    .word 0xc421ea64
    .word 0x3c010001
    sub.s $f1,$f1,$f2
    addu at,v0,at
    .word 0xe421ea64
    .word 0x8ec30008
    .word 0x3c010001
    .word 0x00831021
    addu at,v0,at
    .word 0xc421ea64
    c.lt.s $f1,$f0
    nop
    bc1f L1aca28
    nop
    sll v0,s3,0x2
    addu v0,v0,v1
    .word 0x3c010001
    addu at,v0,at
    .word 0xc420ea64
    c.lt.s $f1,$f0
    nop
    bc1f L1aca24
    addiu s5,zero,1
    paddub s3,s1,zero
    addiu s5,zero,1
L1aca24:
    nop
L1aca28:
    .word 0x8ec30008
    sll v0,s1,0x2
    .word 0x3c010001
    addu v0,v0,v1
    addu at,v0,at
    .word 0x8c23ea94
    andi v0,v1,0x2
    bnez v0,L1aca60
    addiu a2,zero,1
    andi v0,v1,0x200
    bnez v0,L1aca60
    nop
    .word 0x70003628
    nop
L1aca60:
    beqz a2,L1acab0
    nop
    .word 0x8e03004c
    .word 0x3c010032
    .word 0x8ec50008
    .word 0xc4207bb0
    sll v0,s1,0x6
    sll a0,s1,0x2
    addu v0,v0,v1
    .word 0xc441001c
    addu a0,a0,a1
    .word 0x3c010001
    addu at,a0,at
    .word 0xc422ea64
    sub.s $f0,$f0,$f1
    c.lt.s $f2,$f0
    nop
    bc1t L1acab8
    nop
    nop
L1acab0:
    bnez a2,L1acb50
    nop
L1acab8:
    .word 0x8ec40008
    sll v1,s1,0x2
    sll v0,s1,0x1
    .word 0x3c010001
    .word 0xc6c0026c
    addu v0,v0,s1
    addu v1,v1,a0
    addu at,v1,at
    .word 0xc421ea64
    sll v1,v0,0x2
    addiu s4,s4,1
    add.s $f0,$f0,$f1
    .word 0x3c010001
    .word 0xe6c0026c
    .word 0x8ec20008
    .word 0xc7a000a0
    addu v0,v1,v0
    addu at,v0,at
    .word 0xc421ea34
    add.s $f0,$f0,$f1
    .word 0x3c010001
    .word 0xe7a000a0
    .word 0x8ec20008
    .word 0xc7a000a4
    addu v0,v1,v0
    addu at,v0,at
    .word 0xc421ea38
    add.s $f0,$f0,$f1
    .word 0x3c010001
    .word 0xe7a000a4
    .word 0x8ec20008
    .word 0xc7a000a8
    addu v0,v1,v0
    addu at,v0,at
    .word 0xc421ea3c
    add.s $f0,$f0,$f1
    b L1acb80
    .word 0xe7a000a8
L1acb50:
    b L1acb80
    .word 0xaec00274
L1acb58:
    .word 0xaec00274
    .word 0x8ec20008
    .word 0x3c010001
    addu v0,v1,v0
    addu at,v0,at
    .word 0x8c22ea84
    bnezl v0,L1acb84
    addiu s1,s1,1
    .word 0xaec00278
    nop
L1acb80:
    addiu s1,s1,1
L1acb84:
    nop
L1acb88:
    slti v0,s1,4
    bnez v0,L1ac814
    nop
    beqz s5,L1acdc0
    nop
    .word 0x8ec20004
    andi v0,v0,0x1000
    beqz v0,L1acdc0
    nop
    .word 0x8ec50008
    sll v1,s3,0x2
    .word 0x3c023e19
    ori v0,v0,0x999a
    .word 0x44821000
    .word 0x3c010001
    addu v1,v1,a1
    .word 0x44800000
    addu at,v1,at
    .word 0xc423ea64
    sll v0,s3,0x1
    addu v0,v0,s3
    sll a0,v0,0x2
    addu v0,a0,a1
    sub.s $f2,$f2,$f3
    .word 0x3c010001
    addu at,v0,at
    .word 0xc421ea34
    mul.s $f1,$f1,$f2
    .word 0x3c010001
    .word 0xe7a100b0
    .word 0x8ec20008
    addu v0,a0,v0
    addu at,v0,at
    .word 0xc421ea38
    mul.s $f1,$f1,$f2
    .word 0x3c010001
    .word 0xe7a100b4
    .word 0x8ec20008
    addu v0,a0,v0
    addu at,v0,at
    .word 0xc421ea3c
    mul.s $f1,$f1,$f2
    .word 0x3c010001
    .word 0xe7a100b8
    .word 0x8ec2000c
    .word 0xc7a100b0
    .word 0xc4420018
    add.s $f1,$f1,$f2
    .word 0xe4410018
    .word 0x8ec2000c
    .word 0xc7a100b4
    .word 0xc442001c
    add.s $f1,$f1,$f2
    .word 0xe441001c
    .word 0x8ec2000c
    .word 0xc7a100b8
    .word 0xc4420020
    add.s $f1,$f1,$f2
    .word 0xe4410020
    .word 0x8ec30008
    .word 0x8ec2000c
    addu v1,a0,v1
    .word 0xc445000c
    addu at,v1,at
    .word 0xc4410010
    .word 0xc426ea34
    .word 0xc4420014
    .word 0x3c010001
    addu at,v1,at
    mul.s $f5,$f6,$f5
    .word 0xc424ea38
    .word 0x3c010001
    addu at,v1,at
    mul.s $f4,$f4,$f1
    .word 0xc423ea3c
    adda.s $f5,$f4
    madd.s $f1,$f3,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L1acdc0
    nop
    adda.s $f5,$f4
    madd.s $f0,$f3,$f2
    mul.s $f0,$f6,$f0
    .word 0x3c010001
    .word 0xe7a000b0
    .word 0x8ec30008
    .word 0x8ec2000c
    addu v1,a0,v1
    .word 0xc444000c
    addu at,v1,at
    .word 0xc4420010
    .word 0xc425ea34
    .word 0xc4400014
    .word 0x3c010001
    addu at,v1,at
    mul.s $f4,$f5,$f4
    .word 0xc423ea38
    .word 0x3c010001
    addu at,v1,at
    mul.s $f2,$f3,$f2
    .word 0xc421ea3c
    adda.s $f4,$f2
    madd.s $f0,$f1,$f0
    mul.s $f0,$f3,$f0
    .word 0x3c010001
    .word 0xe7a000b4
    .word 0x8ec30008
    .word 0x8ec2000c
    addu v1,a0,v1
    .word 0xc444000c
    addu at,v1,at
    .word 0xc4420010
    .word 0xc425ea34
    .word 0xc4400014
    .word 0x3c010001
    addu at,v1,at
    mul.s $f4,$f5,$f4
    .word 0xc423ea38
    .word 0x3c010001
    addu at,v1,at
    mul.s $f2,$f3,$f2
    .word 0xc421ea3c
    adda.s $f4,$f2
    madd.s $f0,$f1,$f0
    mul.s $f0,$f1,$f0
    .word 0xe7a000b8
    .word 0x8ec2000c
    .word 0xc7a000b0
    .word 0xc441000c
    sub.s $f0,$f1,$f0
    .word 0xe440000c
    .word 0x8ec2000c
    .word 0xc7a000b4
    .word 0xc4410010
    sub.s $f0,$f1,$f0
    .word 0xe4400010
    .word 0x8ec2000c
    .word 0xc7a000b8
    .word 0xc4410014
    sub.s $f0,$f1,$f0
    .word 0xe4400014
L1acdc0:
    beqz s4,L1acdec
    .word 0x3c027f7f
    .word 0x44940800
    .word 0xc6c0026c
    cvt.s.w $f1,$f1
    div.s $f0,$f0,$f1
    nop
    nop
    b L1acdf4
    .word 0xe6c0026c
    .word 0x3c027f7f
L1acdec:
    ori v0,v0,0xffff
    .word 0xaec2026c
L1acdf4:
    .word 0x8ee2000c
    beqz v0,L1acee0
    nop
    .word 0x8ec3000c
    .word 0x3c023f34
    ori v0,v0,0xfdf4
    .word 0xc6450010
    .word 0xc6430014
    .word 0xc6410018
    .word 0x8c630024
    .word 0x44820000
    .word 0xc4660010
    .word 0xc4640014
    .word 0xc4620018
    mul.s $f5,$f6,$f5
    mul.s $f3,$f4,$f3
    adda.s $f5,$f3
    madd.s $f1,$f2,$f1
    c.le.s $f1,$f0
    nop
    bc1t L1acee0
    nop
    .word 0x3c02bdcc
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.lt.s $f4,$f0
    nop
    bc1t L1ace8c
    nop
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f4,$f0
    nop
    bc1t L1acee0
    nop
L1ace8c:
    .word 0x8ec3000c
    .word 0xc7a000a0
    addiu v0,zero,1
    addiu s4,s4,1
    .word 0x8c630024
    .word 0xc4610010
    add.s $f0,$f0,$f1
    .word 0xe7a000a0
    .word 0x8ec3000c
    .word 0xc7a000a4
    .word 0x8c630024
    .word 0xc4610014
    add.s $f0,$f0,$f1
    .word 0xe7a000a4
    .word 0x8ec3000c
    .word 0xc7a000a8
    .word 0x8c630024
    .word 0xc4610018
    add.s $f0,$f0,$f1
    .word 0xe7a000a8
    .word 0xaec20270
L1acee0:
    beqz s4,L1acf68
    nop
    .word 0x44940000
    .word 0x3c023f80
    cvt.s.w $f1,$f0
    .word 0x44821000
    .word 0xc7a000a0
    div.s $f2,$f2,$f1
    mul.s $f0,$f0,$f2
    .word 0xe7a000a0
    .word 0xc7a100a4
    .word 0x44800000
    nop
    mul.s $f1,$f1,$f2
    .word 0xe7a100a4
    .word 0xc7a100a8
    mul.s $f1,$f1,$f2
    .word 0xe7a100a8
    .word 0xc7a300a0
    .word 0xc7a200a4
    .word 0xc7a100a8
    mul.s $f3,$f3,$f3
    mul.s $f2,$f2,$f2
    adda.s $f3,$f2
    madd.s $f1,$f1,$f1
    c.eq.s $f1,$f0
    nop
    bc1t L1acf68
    nop
    .word 0x8ec20008
    ori at,zero,0xeaa4
    addiu a1,sp,160
    jal func_001ce160
    addu a0,v0,at
L1acf68:
    .word 0x8ec20270
    beqz v0,L1acf90
    nop
    .word 0x8ec4000c
    addiu a1,zero,4
    addiu a2,zero,2
    jal func_0017f6b0
    addiu a3,zero,1
    b L1acfa8
    .word 0x7bbf0080
L1acf90:
    .word 0x8ec4000c
    addiu a1,zero,4
    addiu a2,zero,2
    jal func_0017f6b0
    .word 0x70003e28
    .word 0x7bbf0080
L1acfa8:
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,192
}


