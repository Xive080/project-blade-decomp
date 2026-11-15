extern void fn_188ff0(void);
extern void fn_1214b8(void);
extern void fn_182e50(void);
extern void fn_189050(void);
extern void fn_121a58(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-160
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b50004
    addiu v1,zero,16
    .word 0xe7b40000
    beq a1,v1,L24596c
    paddub s1,a0,zero
    b L245b88
    .word 0x7bbf0030
L24596c:
    .word 0x8e24003c
    beqz a0,L245984
    paddub s0,a2,zero
    jal fn_188ff0
    nop
    .word 0xae20003c
L245984:
    bltz s0,L245b74
    nop
    .word 0x3c0241c0
    .word 0x4482a000
    addiu v1,sp,144
    .word 0x4480a800
    .word 0x3c02002e
    addiu v0,v0,1696
    .word 0x78420000
    slti at,s0,8
    beqz at,L245a84
    .word 0x7c620000
    .word 0x3c02002f
    addiu v0,v0,-32032
    sll a0,s0,0x2
    addu v0,v0,a0
    .word 0x90420000
    bltz v0,L2459e0
    srl v1,v0,0x1
    .word 0x44820000
    b L2459f8
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L2459e0:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L2459f8:
    .word 0x3c02002f
    addiu v0,v0,-32031
    addu v0,v0,a0
    .word 0xe7a00090
    .word 0x90420000
    bltz v0,L245a24
    srl v1,v0,0x1
    .word 0x44820000
    b L245a3c
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L245a24:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L245a3c:
    .word 0x3c02002f
    addiu v0,v0,-32030
    addu v0,v0,a0
    .word 0xe7a00094
    .word 0x90420000
    bltz v0,L245a68
    srl v1,v0,0x1
    .word 0x44820000
    b L245a80
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L245a68:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L245a80:
    .word 0xe7a00098
L245a84:
    .word 0x8e23002c
    andi v0,v1,0x1
    beqz v0,L245aac
    andi v0,v1,0x2
    .word 0x3c023f80
    .word 0x4482a800
    .word 0x4480a000
    b L245ac0
    nop
    andi v0,v1,0x2
L245aac:
    beqz v0,L245ac0
    nop
    .word 0x3c023f00
    .word 0x4482a800
    .word 0x4480a000
L245ac0:
    .word 0x3c02002f
    addiu a2,s0,1
    addiu a0,s1,48
    jal fn_1214b8
    addiu a1,v0,3912
    .word 0x8f8484b0
    addiu v1,zero,2
    .word 0x3c024188
    addiu a1,s1,48
    .word 0x8c840028
    .word 0xafa30040
    .word 0xe7b50044
    .word 0xafa00048
    .word 0xe7b4004c
    .word 0xafa20050
    .word 0xafa4006c
    jal fn_182e50
    .word 0xafa50070
    addiu v0,sp,116
    .word 0xe4400000
    .word 0x3c054210
    .word 0x44850800
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    addiu v1,sp,144
    addiu v0,sp,92
    .word 0xe7a00054
    .word 0xafa50058
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0x8f8284b0
    .word 0x9627001c
    .word 0x8e260034
    .word 0x8c450014
    jal fn_189050
    addiu a0,sp,64
    b L245b84
    .word 0xae22003c
L245b74:
    .word 0x3c02002f
    addiu a0,s1,48
    jal fn_121a58
    addiu a1,v0,3920
L245b84:
    .word 0x7bbf0030
L245b88:
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,160
}


