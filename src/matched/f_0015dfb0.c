extern void func_00149e60(void);
extern void func_00142a90(void);
extern void func_001c3b70(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c820010
    paddub s1,a1,zero
    paddub s0,a3,zero
    andi v0,v0,0x1
    beqz v0,L15dfe8
    paddub s2,a0,zero
    b L15e5bc
    .word 0x70001628
L15dfe8:
    sltiu at,a2,10
    beqz at,L15e5b8
    .word 0xae51055c
    .word 0x3c03002f
    addiu v1,v1,-14560
    sll v0,a2,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0x8e5003dc
    bnez s0,L15e024
    nop
    b L15e5bc
    .word 0x70001628
L15e024:
    .word 0x8e030008
    addiu v0,zero,1
    bne v1,v0,L15e03c
    nop
    b L15e5bc
    .word 0x70001628
L15e03c:
    jal func_00149e60
    nop
    .word 0x8c420018
    jalr ra,v0
    .word 0x8e240008
    .word 0x8e440030
    jal func_00142a90
    paddub s1,v0,zero
    beqz s1,L15e06c
    paddub s3,v0,zero
    bnez s3,L15e078
    paddub a0,s1,zero
L15e06c:
    b L15e5bc
    .word 0x70001628
    paddub a0,s1,zero
L15e078:
    jal func_001c3b70
    nop
    paddub a0,s3,zero
    jal func_001c3b70
    paddub s1,v0,zero
    .word 0xc64003f4
    .word 0x3c033f66
    ori v1,v1,0x6666
    .word 0x44830800
    .word 0xc64b03e4
    .word 0xc4470028
    mul.s $f0,$f1,$f0
    .word 0xc4440038
    .word 0xc4480024
    .word 0xc4490020
    .word 0xc4460030
    add.s $f10,$f0,$f11
    .word 0xc4450034
    .word 0xc6210038
    .word 0xc6220030
    mul.s $f7,$f7,$f10
    .word 0xc6230034
    .word 0x3c023ef5
    ori v0,v0,0xc28f
    add.s $f7,$f7,$f4
    mul.s $f8,$f8,$f10
    sub.s $f4,$f7,$f1
    mul.s $f9,$f9,$f10
    add.s $f9,$f9,$f6
    sub.s $f2,$f9,$f2
    add.s $f8,$f8,$f5
    .word 0x44820800
    mul.s $f2,$f2,$f2
    add.s $f8,$f8,$f1
    sub.s $f1,$f8,$f3
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    mul.s $f0,$f11,$f11
    madd.s $f1,$f4,$f4
    c.lt.s $f1,$f0
    nop
    bc1f L15e164
    .word 0x70001628
    .word 0x8e030008
    addiu v0,zero,4
    beq v1,v0,L15e158
    addiu v0,zero,1
    addiu v0,zero,3
    beq v1,v0,L15e154
    nop
    addiu v0,zero,2
    beq v1,v0,L15e154
    nop
    addiu v0,zero,1
    .word 0xae020008
L15e154:
    addiu v0,zero,1
L15e158:
    b L15e5c0
    .word 0x7bbf0040
    .word 0x70001628
L15e164:
    b L15e5bc
    nop
    .word 0x8e430010
    addiu v0,zero,4
    ori v1,v1,0x20
    .word 0xae430010
    .word 0x8e43003c
    bne v1,v0,L15e39c
    addiu v0,zero,1
    .word 0x8e5303dc
    beqz s3,L15e398
    nop
    .word 0x8e240008
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    nop
    jal func_001c3b70
    paddub a0,v0,zero
    .word 0xc6660014
    .word 0xc6610024
    .word 0xc6600028
    .word 0x8e23000c
    .word 0xc663002c
    .word 0xc6070000
    .word 0xc6080004
    mul.s $f4,$f1,$f6
    .word 0xc6090008
    .word 0xc462000c
    .word 0x3c024329
    mul.s $f5,$f0,$f6
    .word 0xc4610010
    .word 0xc4600014
    mul.s $f3,$f3,$f6
    sub.s $f1,$f1,$f5
    sub.s $f5,$f0,$f3
    sub.s $f2,$f2,$f4
    mul.s $f3,$f1,$f8
    mul.s $f0,$f2,$f7
    adda.s $f0,$f3
    madd.s $f1,$f5,$f9
    mul.s $f1,$f7,$f1
    mul.s $f4,$f5,$f9
    mul.s $f5,$f1,$f7
    mul.s $f2,$f1,$f1
    add.s $f1,$f5,$f3
    add.s $f1,$f4,$f1
    mul.s $f3,$f8,$f1
    mul.s $f1,$f3,$f8
    add.s $f1,$f5,$f1
    add.s $f1,$f4,$f1
    mul.s $f4,$f9,$f1
    mul.s $f1,$f3,$f3
    adda.s $f2,$f1
    .word 0x44820000
    madd.s $f1,$f4,$f4
    c.le.s $f1,$f0
    nop
    bc1t L15e398
    nop
    .word 0x8e42000c
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s2,zero
    jal func_001c3b70
    paddub a0,v0,zero
    .word 0x8e320008
    paddub s0,v0,zero
    .word 0x3c050004
    .word 0x8e42003c
    beq v0,a1,L15e2c4
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L15e2c4
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s2,zero
    beqz v0,L15e2c4
    nop
    .word 0x8e42000c
    paddub a0,s2,zero
    .word 0x3c050004
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L15e2c4:
    .word 0xc6000020
    .word 0x3c024031
    ori v0,v0,0xc71d
    .word 0x44822000
    .word 0x8e23000c
    .word 0x3c0240a0
    mul.s $f0,$f4,$f0
    .word 0xe460000c
    .word 0xc6000024
    .word 0x44822800
    .word 0x8e22000c
    mul.s $f0,$f4,$f0
    .word 0xe4400010
    .word 0xc6000028
    .word 0x8e22000c
    mul.s $f0,$f4,$f0
    .word 0xe4400014
    .word 0xc6010004
    .word 0xc6000000
    .word 0xc6020008
    .word 0x8e22000c
    mul.s $f3,$f4,$f1
    .word 0xc441000c
    mul.s $f0,$f4,$f0
    add.s $f0,$f1,$f0
    .word 0xe440000c
    .word 0x8e22000c
    mul.s $f2,$f4,$f2
    .word 0xc4400010
    add.s $f0,$f0,$f3
    .word 0xe4400010
    .word 0x8e22000c
    .word 0xc4400014
    add.s $f0,$f0,$f2
    .word 0xe4400014
    .word 0xc6000014
    .word 0xc6010010
    .word 0xc6020018
    .word 0x8e22000c
    mul.s $f3,$f5,$f0
    .word 0xc440000c
    mul.s $f1,$f5,$f1
    add.s $f0,$f0,$f1
    .word 0xe440000c
    .word 0x8e22000c
    mul.s $f2,$f5,$f2
    .word 0xc4400010
    add.s $f0,$f0,$f3
    .word 0xe4400010
    .word 0x8e22000c
    .word 0xc4400014
    add.s $f0,$f0,$f2
    .word 0xe4400014
L15e398:
    addiu v0,zero,1
L15e39c:
    b L15e5bc
    nop
    .word 0x8e43003c
    addiu v0,zero,2
    beq v1,v0,L15e3c8
    nop
    addiu v0,zero,4
    beq v1,v0,L15e3c8
    nop
    b L15e5bc
    .word 0x70001628
L15e3c8:
    .word 0x8e430010
    addiu v0,zero,1
    ori v1,v1,0x80
    b L15e5bc
    .word 0xae430010
    .word 0x8e42003c
    addiu v1,zero,4
    beq v0,v1,L15e3f4
    nop
    b L15e5bc
    .word 0x70001628
L15e3f4:
    .word 0x8e4403dc
    addiu v0,zero,3
    .word 0x8c850008
    beq a1,v0,L15e420
    .word 0x70001628
    beq a1,v1,L15e41c
    nop
    addiu v0,zero,2
    bne a1,v0,L15e428
    nop
L15e41c:
    .word 0x70001628
L15e420:
    b L15e5bc
    nop
L15e428:
    .word 0x8e4303d8
    .word 0x3c023f66
    ori v0,v0,0x6666
    .word 0x44821000
    .word 0xc4800014
    .word 0xc4611dc8
    mul.s $f1,$f2,$f1
    c.lt.s $f0,$f1
    nop
    bc1f L15e45c
    nop
    b L15e5bc
    .word 0x70001628
L15e45c:
    .word 0x8e430010
    addiu v0,zero,1
    ori v1,v1,0x40
    b L15e5bc
    .word 0xae430010
    .word 0x8e430010
    andi v0,v1,0x200
    beqz v0,L15e48c
    addiu v0,zero,1
    ori v0,v1,0x800
    .word 0xae420010
    addiu v0,zero,1
L15e48c:
    b L15e5bc
    nop
    .word 0x8e43003c
    addiu v0,zero,2
    bne v1,v0,L15e4ac
    nop
    b L15e5bc
    .word 0x70001628
L15e4ac:
    .word 0x8e4203dc
    addiu v1,v0,372
    .word 0x8c420174
    beqz v0,L15e4d0
    .word 0x70001628
    addiu v0,zero,1
    b L15e5bc
    .word 0xac600000
    .word 0x70001628
L15e4d0:
    b L15e5bc
    nop
    .word 0x8e430010
    andi v0,v1,0x100
    beqz v0,L15e4f4
    addiu v0,zero,1
    ori v0,v1,0x400
    .word 0xae420010
    addiu v0,zero,1
L15e4f4:
    b L15e5bc
    nop
    .word 0x8e4200cc
    .word 0x8c420018
    andi v0,v0,0x4
    beqz v0,L15e548
    .word 0x70001628
    .word 0x8e43003c
    addiu v0,zero,2
    beq v1,v0,L15e52c
    nop
    addiu v0,zero,4
    bne v1,v0,L15e53c
    addiu v0,zero,1
L15e52c:
    .word 0x8e420010
    ori v0,v0,0x1000
    .word 0xae420010
    addiu v0,zero,1
L15e53c:
    b L15e5bc
    nop
    .word 0x70001628
L15e548:
    b L15e5bc
    nop
    .word 0x8e4200cc
    .word 0x8c420018
    andi v0,v0,0x1
    beqz v0,L15e59c
    .word 0x70001628
    .word 0x8e43003c
    addiu v0,zero,2
    beq v1,v0,L15e580
    nop
    addiu v0,zero,4
    bne v1,v0,L15e590
    addiu v0,zero,1
L15e580:
    .word 0x8e420010
    ori v0,v0,0x1000
    .word 0xae420010
    addiu v0,zero,1
L15e590:
    b L15e5bc
    nop
    .word 0x70001628
L15e59c:
    b L15e5bc
    nop
    .word 0x8e430010
    addiu v0,zero,1
    ori v1,v1,0x1000
    b L15e5bc
    .word 0xae430010
L15e5b8:
    .word 0x70001628
L15e5bc:
    .word 0x7bbf0040
L15e5c0:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}


