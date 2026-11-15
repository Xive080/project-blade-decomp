extern void func_00197b10(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-128
    sll v1,a0,0x3
    .word 0x7fbf0070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    addu v0,v1,a0
    sll v0,v0,0x2
    .word 0x7fb20030
    addu v0,v0,a0
    .word 0x7fb10020
    paddub s5,a0,zero
    sll s2,v0,0x2
    subu v0,v1,s5
    paddub s4,a1,zero
    sll a1,v0,0x6
    .word 0x3c020031
    addiu v0,v0,21584
    addu s1,v0,s2
    .word 0x3c020030
    addiu v0,v0,-23424
    .word 0x7fb00010
    addu v0,v0,a1
    addiu s0,v0,640
    .word 0x3c020030
    .word 0xe7b40000
    addiu v0,v0,-21888
    .word 0x46006506
    sll v1,a0,0x2
    addu v0,v0,v1
    .word 0x8c430000
    addiu v0,zero,1
    beq v1,v0,L197614
    paddub s3,a2,zero
    .word 0xae200000
    b L197adc
    .word 0x70001628
L197614:
    .word 0x8e220004
    .word 0xae220000
    .word 0xae200004
    .word 0x8e220000
    andi v0,v0,0x1
    beqz v0,L197648
    .word 0x3c023f19
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44820800
    b L197654
    .word 0xc6000158
    .word 0x3c023f19
L197648:
    ori v0,v0,0x999a
    .word 0x44820800
    .word 0xc6000158
L197654:
    c.le.s $f0,$f1
    nop
    bc1t L197674
    andi v0,s4,0x10
    .word 0x8e220004
    ori v0,v0,0x1
    .word 0xae220004
    andi v0,s4,0x10
L197674:
    beqz v0,L1976ac
    nop
    addiu a2,zero,17
    .word 0x4600a306
    addiu a3,zero,34
    paddub a0,s1,zero
    .word 0x70002e28
    paddub t0,s3,zero
    jal func_00197b10
    paddub t1,s5,zero
    bnez v0,L1976bc
    nop
    b L197adc
    .word 0x70001628
L1976ac:
    .word 0x3c020031
    addiu v0,v0,21596
    addu v0,v0,s2
    .word 0xac400000
L1976bc:
    .word 0x8e220000
    andi v0,v0,0x2
    beqz v0,L1976e4
    .word 0x3c023f19
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44820800
    b L1976f0
    .word 0xc600015c
    .word 0x3c023f19
L1976e4:
    ori v0,v0,0x999a
    .word 0x44820800
    .word 0xc600015c
L1976f0:
    c.le.s $f0,$f1
    nop
    bc1t L197710
    andi v0,s4,0x20
    .word 0x8e220004
    ori v0,v0,0x2
    .word 0xae220004
    andi v0,s4,0x20
L197710:
    beqz v0,L197748
    nop
    addiu a1,zero,1
    .word 0x4600a306
    addiu a2,zero,34
    addiu a3,zero,17
    paddub a0,s1,zero
    paddub t0,s3,zero
    jal func_00197b10
    paddub t1,s5,zero
    bnez v0,L197758
    nop
    b L197adc
    .word 0x70001628
L197748:
    .word 0x3c020031
    addiu v0,v0,21616
    addu v0,v0,s2
    .word 0xac400000
L197758:
    .word 0x8e220000
    andi v0,v0,0x4
    beqz v0,L197780
    .word 0x3c023f19
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44820800
    b L19778c
    .word 0xc6000150
    .word 0x3c023f19
L197780:
    ori v0,v0,0x999a
    .word 0x44820800
    .word 0xc6000150
L19778c:
    c.le.s $f0,$f1
    nop
    bc1t L1977ac
    andi v0,s4,0x40
    .word 0x8e220004
    ori v0,v0,0x4
    .word 0xae220004
    andi v0,s4,0x40
L1977ac:
    beqz v0,L1977e4
    nop
    addiu a1,zero,2
    .word 0x4600a306
    addiu a2,zero,68
    addiu a3,zero,136
    paddub a0,s1,zero
    paddub t0,s3,zero
    jal func_00197b10
    paddub t1,s5,zero
    bnez v0,L1977f4
    nop
    b L197adc
    .word 0x70001628
L1977e4:
    .word 0x3c020031
    addiu v0,v0,21636
    addu v0,v0,s2
    .word 0xac400000
L1977f4:
    .word 0x8e220000
    andi v0,v0,0x8
    beqz v0,L19781c
    .word 0x3c023f19
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44820800
    b L197828
    .word 0xc6000154
    .word 0x3c023f19
L19781c:
    ori v0,v0,0x999a
    .word 0x44820800
    .word 0xc6000154
L197828:
    c.le.s $f0,$f1
    nop
    bc1t L197848
    andi v0,s4,0x80
    .word 0x8e220004
    ori v0,v0,0x8
    .word 0xae220004
    andi v0,s4,0x80
L197848:
    beqz v0,L197880
    nop
    addiu a1,zero,3
    .word 0x4600a306
    addiu a2,zero,136
    addiu a3,zero,68
    paddub a0,s1,zero
    paddub t0,s3,zero
    jal func_00197b10
    paddub t1,s5,zero
    bnez v0,L197890
    nop
    b L197adc
    .word 0x70001628
L197880:
    .word 0x3c020031
    addiu v0,v0,21656
    addu v0,v0,s2
    .word 0xac400000
L197890:
    .word 0x8e220000
    andi v0,v0,0x100
    beqz v0,L1978b8
    .word 0x3c023f19
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44820800
    b L1978c4
    .word 0xc6000168
    .word 0x3c023f19
L1978b8:
    ori v0,v0,0x999a
    .word 0x44820800
    .word 0xc6000168
L1978c4:
    c.le.s $f0,$f1
    nop
    bc1t L1978e4
    andi v0,s4,0x100
    .word 0x8e220004
    ori v0,v0,0x100
    .word 0xae220004
    andi v0,s4,0x100
L1978e4:
    beqz v0,L19791c
    nop
    addiu a1,zero,4
    .word 0x4600a306
    addiu a2,zero,256
    paddub a0,s1,zero
    .word 0x70003e28
    paddub t0,s3,zero
    jal func_00197b10
    paddub t1,s5,zero
    bnez v0,L19792c
    nop
    b L197adc
    .word 0x70001628
L19791c:
    .word 0x3c020031
    addiu v0,v0,21676
    addu v0,v0,s2
    .word 0xac400000
L19792c:
    .word 0x8e220000
    andi v0,v0,0x200
    beqz v0,L197954
    .word 0x3c023f19
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44820800
    b L197960
    .word 0xc6000160
    .word 0x3c023f19
L197954:
    ori v0,v0,0x999a
    .word 0x44820800
    .word 0xc6000160
L197960:
    c.le.s $f0,$f1
    nop
    bc1t L197980
    andi v0,s4,0x200
    .word 0x8e220004
    ori v0,v0,0x200
    .word 0xae220004
    andi v0,s4,0x200
L197980:
    beqz v0,L1979b8
    nop
    addiu a1,zero,5
    .word 0x4600a306
    addiu a2,zero,512
    paddub a0,s1,zero
    .word 0x70003e28
    paddub t0,s3,zero
    jal func_00197b10
    paddub t1,s5,zero
    bnez v0,L1979c8
    nop
    b L197adc
    .word 0x70001628
L1979b8:
    .word 0x3c020031
    addiu v0,v0,21696
    addu v0,v0,s2
    .word 0xac400000
L1979c8:
    .word 0x8e220000
    andi v0,v0,0x400
    beqz v0,L1979f0
    .word 0x3c023f19
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44820800
    b L1979fc
    .word 0xc6000164
    .word 0x3c023f19
L1979f0:
    ori v0,v0,0x999a
    .word 0x44820800
    .word 0xc6000164
L1979fc:
    c.le.s $f0,$f1
    nop
    bc1t L197a1c
    andi v0,s4,0x400
    .word 0x8e220004
    ori v0,v0,0x400
    .word 0xae220004
    andi v0,s4,0x400
L197a1c:
    beqz v0,L197a54
    nop
    addiu a1,zero,6
    .word 0x4600a306
    addiu a2,zero,1024
    paddub a0,s1,zero
    .word 0x70003e28
    paddub t0,s3,zero
    jal func_00197b10
    paddub t1,s5,zero
    bnez v0,L197a64
    nop
    b L197adc
    .word 0x70001628
L197a54:
    .word 0x3c020031
    addiu v0,v0,21716
    addu v0,v0,s2
    .word 0xac400000
L197a64:
    bnez s5,L197adc
    addiu v0,zero,1
    .word 0x3c010031
    .word 0xc4205578
    .word 0x44800800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L197ad8
    nop
    .word 0x3c010031
    .word 0xc420557c
    sub.s $f0,$f0,$f20
    .word 0x3c010031
    c.lt.s $f0,$f1
    nop
    bc1f L197ad8
    .word 0xe420557c
    .word 0x3c010031
    .word 0xc4205578
    addiu a0,zero,8
    paddub a1,s5,zero
    .word 0x3c010031
    jalr ra,s3
    .word 0xe420557c
    bnez v0,L197ad8
    nop
    b L197adc
    .word 0x70001628
L197ad8:
    addiu v0,zero,1
L197adc:
    .word 0x7bbf0070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,128
}


