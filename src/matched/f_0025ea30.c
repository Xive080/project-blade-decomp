extern void func_0016b090(void);
extern void func_0016f4c0(void);
extern void func_00172270(void);
extern void func_0025f230(void);
extern void func_00188ff0(void);
extern void func_00189650(void);
extern void func_00171880(void);
extern void func_001718b0(void);
extern void func_00132a00(void);
extern void func_001b5c30(void);
extern void func_00132950(void);
extern void func_00133120(void);
extern void func_001879b0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c830328
    addiu v0,zero,3
    beq v1,v0,L25ed3c
    paddub s0,a0,zero
    addiu a0,zero,2
    beq v1,a0,L25eb60
    .word 0x3c017000
    addiu v0,zero,1
    beq v1,v0,L25eab0
    nop
    beqz v1,L25ea78
    nop
    b L25ee50
    .word 0x3c017000
L25ea78:
    jal func_0016b090
    nop
    bnez v0,L25ee4c
    nop
    addiu v0,zero,1
    addiu a0,zero,2
    .word 0xae020328
    jal func_0016f4c0
    .word 0x70002e28
    addiu a1,zero,1
    jal func_00172270
    paddub a0,v0,zero
    b L25ee4c
    nop
L25eab0:
    .word 0x3c020033
    addiu v0,v0,24304
    .word 0x44801000
    .word 0x78420000
    addiu v1,sp,48
    .word 0x3c017000
    .word 0x7c620000
    .word 0xc601032c
    .word 0xc4203fa8
    sub.s $f1,$f1,$f0
    c.le.s $f1,$f2
    nop
    bc1f L25eb20
    .word 0xe601032c
    .word 0xae00032c
    .word 0x8e020014
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4430028
    .word 0xe442002c
    .word 0xe4410030
    .word 0xe4400034
    jal func_0025f230
    .word 0xae040328
    b L25ee4c
    nop
L25eb20:
    .word 0x3c02437f
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f1
    .word 0xe7a0003c
    .word 0x8e020014
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4430028
    .word 0xe442002c
    .word 0xe4410030
    b L25ee4c
    .word 0xe4400034
    .word 0x3c017000
L25eb60:
    .word 0xc4233fa8
    .word 0x3c023ca3
    ori v0,v0,0xd70a
    .word 0x44821000
    .word 0x44800000
    div.s $f2,$f2,$f3
    .word 0x3c010030
    .word 0xc421a868
    nop
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L25ebac
    addiu v1,zero,48
    .word 0x3c024080
    .word 0x44820000
    nop
    mul.s $f2,$f2,$f0
    addiu v1,zero,48
L25ebac:
    paddub v0,v1,zero
    addiu a0,s0,24
    beqz v0,L25ec00
    addiu v1,v1,-1
    .word 0x44800800
L25ebc0:
    .word 0x8c850000
    beqz a1,L25ebf4
    paddub v0,v1,zero
    .word 0xc4a00010
    add.s $f0,$f0,$f1
    .word 0xe4a00010
    .word 0xc4a00014
    sub.s $f0,$f0,$f2
    .word 0xe4a00014
    .word 0x8ca2000c
    ori v0,v0,0x1
    .word 0xaca2000c
    paddub v0,v1,zero
L25ebf4:
    addiu a0,a0,16
    bnez v0,L25ebc0
    addiu v1,v1,-1
L25ec00:
    .word 0x8e02031c
    sll v0,v0,0x4
    addu v0,s0,v0
    .word 0x8c44001c
    beqz a0,L25ecd0
    addiu s1,v0,24
    .word 0x8e220000
    .word 0xc620000c
    .word 0xc4410014
    neg.s $f0,$f0
    c.lt.s $f1,$f0
    nop
    bc1f L25ecd0
    nop
    beqz a0,L25ec4c
    nop
    jal func_00188ff0
    nop
    .word 0xae200004
L25ec4c:
    .word 0x8e240008
    beqz a0,L25ec64
    nop
    jal func_00188ff0
    nop
    .word 0xae200008
L25ec64:
    .word 0x8e240000
    beqz a0,L25ec7c
    nop
    jal func_00189650
    nop
    .word 0xae200000
L25ec7c:
    .word 0xae20000c
    .word 0x8e03031c
    addiu v0,zero,48
    addiu v1,v1,1
    .word 0x0062001a
    nop
    nop
    mfhi v0
    .word 0xae02031c
    .word 0x8e020324
    addiu v0,v0,-1
    .word 0xae020324
    .word 0x8e020324
    bnez v0,L25ecd0
    nop
    jal func_00171880
    nop
    addiu v0,zero,3
    .word 0xae020328
    .word 0x3c023f80
    .word 0xae02032c
L25ecd0:
    .word 0x8e030320
    addiu v0,zero,48
    addiu v1,v1,47
    .word 0x0062001a
    nop
    nop
    mfhi v0
    sll v0,v0,0x4
    addu v0,s0,v0
    addiu a0,v0,24
    .word 0x8c42001c
    beqz v0,L25ee4c
    nop
    .word 0x8c830000
    .word 0x3c0243e0
    .word 0xc481000c
    .word 0x44820000
    .word 0xc4620014
    sub.s $f0,$f0,$f1
    c.le.s $f2,$f0
    nop
    bc1f L25ee4c
    nop
    jal func_0025f230
    nop
    b L25ee4c
    nop
L25ed3c:
    .word 0x3c02002f
    addiu v0,v0,-26368
    .word 0x44801000
    .word 0x78420000
    addiu v1,sp,64
    .word 0x3c017000
    .word 0x7c620000
    .word 0xc601032c
    .word 0xc4203fa8
    sub.s $f0,$f1,$f0
    c.lt.s $f0,$f2
    nop
    bc1f L25ed78
    .word 0xe600032c
    .word 0xae00032c
L25ed78:
    .word 0xc601032c
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1f L25edf0
    nop
    jal func_001718b0
    nop
    beqz v0,L25edf0
    nop
    addiu v0,sp,64
    .word 0x8e030014
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0xe4630028
    .word 0xe462002c
    .word 0xe4610030
    jal func_00132a00
    .word 0xe4600034
    jal func_001b5c30
    nop
    jal func_00132950
    .word 0x46000306
    jal func_00133120
    addiu a0,zero,9
    b L25ee4c
    nop
L25edf0:
    .word 0xc602032c
    .word 0x3c023f80
    .word 0x44820800
    .word 0x3c02437f
    .word 0x44820000
    nop
    sub.s $f1,$f1,$f2
    addiu v0,sp,64
    mul.s $f0,$f0,$f1
    .word 0xe7a0004c
    .word 0x8e030014
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0xe4630028
    .word 0xe462002c
    .word 0xe4610030
    jal func_001b5c30
    .word 0xe4600034
    .word 0xc601032c
    jal func_00132950
    mul.s $f12,$f1,$f0
L25ee4c:
    .word 0x3c017000
L25ee50:
    .word 0xc42c3fa8
    jal func_001879b0
    .word 0x8e04000c
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,80
}


