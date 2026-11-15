extern void func_0017f190(void);
extern void func_0014a7c0(void);
extern void func_001ac410(void);
extern void func_001abdb0(void);
extern void func_001ac7a0(void);
extern void func_001acfe0(void);
extern void func_0011a398(void);
extern void func_001b2ac0(void);
extern void func_001b2950(void);
extern void func_001abb80(void);
extern void func_001ad4d0(void);
extern void func_001c3b70(void);
extern void func_0017ef00(void);
extern void func_0017ee60(void);
extern void func_0017bd80(void);
extern void func_00180540(void);
extern void func_00180320(void);
extern void func_001801f0(void);
extern void func_00180ab0(void);
extern void func_001810a0(void);
extern void func_001c3b00(void);
extern void func_0012b7e0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c82000c
    paddub s0,a1,zero
    beqz v0,L1abb64
    paddub s1,a0,zero
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea80
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea7c
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea78
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea74
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea90
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea8c
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea88
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea84
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20eaa0
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea9c
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea98
    .word 0x8e220008
    .word 0x3c010001
    addu at,v0,at
    .word 0xac20ea94
    .word 0xaf91853c
    .word 0xaf808538
    .word 0x8e24000c
    jal func_0017f190
    paddub a1,s1,zero
    .word 0x8f838538
    addiu v0,zero,4
    bne v1,v0,L1ab75c
    nop
    jal func_0014a7c0
    .word 0x8e240008
L1ab75c:
    .word 0x8e220274
    beqz v0,L1ab7ac
    paddub a0,s1,zero
    .word 0x8e230008
    addiu v0,zero,8
    .word 0x8c63003c
    beq v1,v0,L1ab7a8
    nop
    .word 0x3c020010
    beq v1,v0,L1ab7a8
    nop
    .word 0x3c020020
    beq v1,v0,L1ab7a8
    nop
    .word 0x3c020004
    beq v1,v0,L1ab7a8
    nop
    jal func_001ac410
    paddub a0,s1,zero
L1ab7a8:
    paddub a0,s1,zero
L1ab7ac:
    jal func_001abdb0
    nop
    jal func_001ac7a0
    paddub a0,s1,zero
    jal func_001acfe0
    paddub a0,s1,zero
    .word 0x3c027000
    ori v0,v0,0x3fa8
    .word 0xc4410000
    .word 0xc620025c
    .word 0x3c023f80
    add.s $f0,$f0,$f1
    .word 0x44821000
    b L1ab7f8
    .word 0xe620025c
L1ab7e8:
    .word 0xc620025c
    sub.s $f0,$f0,$f2
    .word 0xe620025c
    nop
L1ab7f8:
    .word 0xc621025c
    c.le.s $f1,$f2
    nop
    bc1f L1ab7e8
    nop
    .word 0x3c0240c9
    ori v0,v0,0xfdb
    .word 0x44820000
    jal func_0011a398
    mul.s $f12,$f0,$f1
    .word 0x8e220260
    bnez v0,L1ab86c
    .word 0x3c023f93
    .word 0x3c023f00
    .word 0x44821000
    .word 0x3c010032
    .word 0x3c023e00
    .word 0x44820800
    nop
    mul.s $f0,$f1,$f0
    .word 0x3c023f93
    ori v0,v0,0x3333
    mul.s $f1,$f2,$f0
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    b L1ab878
    .word 0xe4207bb0
    .word 0x3c023f93
L1ab86c:
    ori v0,v0,0x3333
    .word 0x3c010032
    .word 0xac227bb0
L1ab878:
    .word 0x8e230270
    bnez v1,L1ab8a4
    nop
    .word 0x8e220004
    andi v0,v0,0x100
    bnez v0,L1ab8a4
    nop
    jal func_001b2ac0
    paddub a0,s1,zero
    b L1ab8dc
    paddub a0,s1,zero
L1ab8a4:
    beqz v1,L1ab8b8
    nop
    .word 0x8e220274
    beqz v0,L1ab8d0
    paddub a0,s1,zero
L1ab8b8:
    .word 0x8e230004
    addiu v0,zero,-4097
    and v0,v1,v0
    beqz v0,L1ab8d8
    nop
    paddub a0,s1,zero
L1ab8d0:
    jal func_001b2950
    nop
L1ab8d8:
    paddub a0,s1,zero
L1ab8dc:
    jal func_001abb80
    nop
    .word 0x8e230008
    .word 0x3c020004
    .word 0x8c63003c
    bne v1,v0,L1ab910
    paddub a1,s0,zero
    paddub a0,s1,zero
    jal func_001ad4d0
    .word 0x70002e28
    b L1ab91c
    .word 0x8e30000c
    paddub a1,s0,zero
L1ab910:
    jal func_001ad4d0
    paddub a0,s1,zero
    .word 0x8e30000c
L1ab91c:
    jal func_001c3b70
    .word 0x8e040048
    .word 0x8e240008
    .word 0x3c030030
    ori v1,v1,0x8
    .word 0x8c84003c
    and v1,a0,v1
    beqz v1,L1aba20
    nop
    .word 0x8e040024
    .word 0x8c83000c
    beqz v1,L1ab9cc
    nop
    .word 0xc4450010
    .word 0xc4840010
    .word 0xc4430014
    .word 0xc4820014
    .word 0xc4410018
    .word 0xc4800018
    mul.s $f4,$f5,$f4
    .word 0x3c023f66
    ori v0,v0,0x6666
    mul.s $f2,$f3,$f2
    adda.s $f4,$f2
    madd.s $f1,$f1,$f0
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L1ab9cc
    nop
    .word 0xc602000c
    .word 0xc6010010
    .word 0x3c0240a2
    .word 0xc6030014
    .word 0x44820000
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f1,$f3,$f3
    c.lt.s $f1,$f0
    nop
    bc1t L1ab9e0
    nop
L1ab9cc:
    .word 0x8e230004
    .word 0x3c020010
    and v0,v1,v0
    beqz v0,L1aba20
    nop
L1ab9e0:
    .word 0xae000008
    .word 0xae000004
    .word 0xae000000
    .word 0xae000038
    .word 0xae000034
    .word 0xae000030
    .word 0xae000014
    .word 0xae000010
    .word 0xae00000c
    .word 0xae000044
    .word 0xae000040
    .word 0xae00003c
    .word 0x8e230004
    .word 0x3c020010
    or v0,v1,v0
    .word 0xae220004
L1aba20:
    jal func_0017ef00
    .word 0x8e24000c
    jal func_0017ee60
    .word 0x8e24000c
    .word 0x8e26000c
    .word 0x8cc50024
    jal func_0017bd80
    .word 0x8e240008
    .word 0x8e230008
    .word 0x3c020004
    .word 0x8c63003c
    beq v1,v0,L1abab0
    nop
    .word 0x8e25000c
    .word 0x3c020032
    .word 0x8e230010
    addiu a0,v0,30992
    .word 0x3c010032
    .word 0xc4a2000c
    .word 0xc4a10010
    .word 0xc4a00014
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0x8e220010
    .word 0xc4a2003c
    .word 0xc4a10040
    .word 0xc4a00044
    .word 0xe4420010
    .word 0xe4410014
    .word 0xe4400018
    .word 0x8e220010
    jal func_00180540
    .word 0xac227948
    b L1abb54
    .word 0x3c017000
L1abab0:
    bne v1,v0,L1abb50
    nop
    jal func_001c3b70
    .word 0x8e240288
    .word 0x8e24028c
    .word 0x3c03411c
    ori v1,v1,0xf5c3
    .word 0x3c017000
    .word 0x44830000
    .word 0xac820038
    .word 0xc4213fa8
    .word 0x8e22028c
    mul.s $f1,$f0,$f1
    .word 0xc4400008
    sub.s $f0,$f0,$f1
    .word 0xe4400008
    jal func_00180320
    .word 0x8e24028c
    jal func_001801f0
    .word 0x8e24028c
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820800
    .word 0x3c010032
    .word 0x8c22798c
    .word 0x8e24028c
    addiu a3,zero,10
    .word 0xc4400000
    .word 0x8c830038
    mul.s $f12,$f1,$f0
    addiu a1,v1,48
    jal func_00180ab0
    paddub a2,a1,zero
    .word 0x8e23028c
    .word 0xac620044
    .word 0x8e25028c
    jal func_001810a0
    paddub a0,s1,zero
    jal func_001c3b00
    .word 0x8e240288
L1abb50:
    .word 0x3c017000
L1abb54:
    .word 0x8e250008
    .word 0x8c243fd8
    jal func_0012b7e0
    .word 0x70003628
L1abb64:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}


