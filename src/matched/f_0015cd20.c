extern void func_001c7710(void);
extern void func_001c7c70(void);
extern void func_001c7dd0(void);
extern void func_001ce160(void);
extern void func_001c7610(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-208
    .word 0x7fbf0040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x70809628
    .word 0x70c08628
    .word 0x46006506
    beqz s2,L15cd5c
    .word 0x70a08e28
    beqz s1,L15cd60
    .word 0x70001628
    bnez s0,L15cd68
    nop
L15cd5c:
    .word 0x70001628
L15cd60:
    b L15d0dc
    .word 0x7bbf0040
L15cd68:
    .word 0x44800000
    nop
    c.le.s $f20,$f0
    nop
    bc1f L15cdbc
    .word 0x3c023f80
    beq s2,s1,L15cdb0
    addiu v0,zero,1
    addiu a0,zero,8
L15cd8c:
    .word 0x8e230000
    .word 0x8e220004
    addiu a0,a0,-1
    .word 0xae430000
    .word 0xae420004
    addiu s1,s1,8
    bgtz a0,L15cd8c
    addiu s2,s2,8
    addiu v0,zero,1
L15cdb0:
    b L15d0d8
    nop
    .word 0x3c023f80
L15cdbc:
    .word 0x44820000
    nop
    c.lt.s $f20,$f0
    nop
    bc1t L15ce10
    addiu a0,sp,80
    beq s2,s0,L15ce04
    addiu v0,zero,1
    addiu a0,zero,8
L15cde0:
    .word 0x8e030000
    .word 0x8e020004
    addiu a0,a0,-1
    .word 0xae430000
    .word 0xae420004
    addiu s0,s0,8
    bgtz a0,L15cde0
    addiu s2,s2,8
    addiu v0,zero,1
L15ce04:
    b L15d0d8
    nop
    addiu a0,sp,80
L15ce10:
    jal func_001c7710
    nop
    addiu a0,sp,80
    addiu a2,zero,2
    jal func_001c7c70
    .word 0x72002e28
    addiu a0,sp,80
    addiu a1,sp,144
    addiu a2,sp,204
    jal func_001c7dd0
    addiu a3,sp,160
    .word 0xc7a100cc
    .word 0x3c024000
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L15cfd4
    nop
    .word 0xc6050004
    .word 0xc6210004
    .word 0xc6000000
    .word 0xc62c0000
    .word 0xc6060008
    .word 0xc6220008
    .word 0xc6080010
    sub.s $f1,$f5,$f1
    .word 0xc6230010
    .word 0xc6090014
    .word 0xc6240014
    .word 0xc60a0018
    .word 0xc6250018
    sub.s $f0,$f0,$f12
    .word 0xc6120020
    .word 0xc6110024
    .word 0xc6270024
    sub.s $f2,$f6,$f2
    .word 0xc6100028
    .word 0xc60f0030
    .word 0xc60e0034
    sub.s $f3,$f8,$f3
    .word 0xc6260020
    .word 0xc60d0038
    .word 0xc62b0038
    sub.s $f4,$f9,$f4
    .word 0xc6280028
    .word 0x72402628
    .word 0x72402e28
    sub.s $f5,$f10,$f5
    .word 0xc6290030
    mul.s $f0,$f0,$f20
    .word 0xc62a0034
    add.s $f0,$f12,$f0
    .word 0xe6400000
    .word 0xc6200004
    mul.s $f1,$f1,$f20
    add.s $f0,$f0,$f1
    .word 0xe6400004
    .word 0xc6200008
    mul.s $f2,$f2,$f20
    add.s $f0,$f0,$f2
    .word 0xe6400008
    .word 0xc6200010
    mul.s $f3,$f3,$f20
    add.s $f0,$f0,$f3
    .word 0xe6400010
    .word 0xc6200014
    mul.s $f4,$f4,$f20
    add.s $f0,$f0,$f4
    .word 0xe6400014
    sub.s $f6,$f18,$f6
    .word 0xc6200018
    mul.s $f5,$f5,$f20
    add.s $f0,$f0,$f5
    .word 0xe6400018
    sub.s $f7,$f17,$f7
    .word 0xc6200020
    mul.s $f6,$f6,$f20
    add.s $f0,$f0,$f6
    .word 0xe6400020
    sub.s $f8,$f16,$f8
    .word 0xc6200024
    mul.s $f7,$f7,$f20
    add.s $f0,$f0,$f7
    .word 0xe6400024
    sub.s $f9,$f15,$f9
    .word 0xc6200028
    mul.s $f8,$f8,$f20
    add.s $f0,$f0,$f8
    .word 0xe6400028
    sub.s $f10,$f14,$f10
    .word 0xc6200030
    mul.s $f9,$f9,$f20
    add.s $f0,$f0,$f9
    .word 0xe6400030
    sub.s $f11,$f13,$f11
    .word 0xc6200034
    mul.s $f10,$f10,$f20
    add.s $f0,$f0,$f10
    .word 0xe6400034
    .word 0xc6200038
    mul.s $f11,$f11,$f20
    add.s $f0,$f0,$f11
    jal func_001ce160
    .word 0xe6400038
    addiu a0,s2,16
    jal func_001ce160
    .word 0x70802e28
    addiu a0,s2,32
    jal func_001ce160
    .word 0x70802e28
    b L15d0d8
    addiu v0,zero,1
L15cfd4:
    .word 0xc6220030
    .word 0xc6210034
    .word 0xc6200038
    addiu v1,sp,176
    addiu v0,sp,192
    addiu a0,zero,8
    .word 0xe4620000
    .word 0xe4610004
    .word 0xe4600008
    .word 0xc6020030
    .word 0xc6010034
    .word 0xc6000038
    .word 0x72402e28
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
L15d014:
    .word 0x8e230000
    .word 0x8e220004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu s1,s1,8
    bgtz a0,L15d014
    addiu a1,a1,8
    .word 0xae400030
    .word 0xae400034
    .word 0xae400038
    .word 0xc7a000cc
    addiu a1,sp,144
    addiu a2,zero,2
    .word 0x72402628
    jal func_001c7610
    mul.s $f12,$f0,$f20
    .word 0xc7a100c0
    .word 0xc7a000b0
    sub.s $f0,$f1,$f0
    .word 0xe6400030
    .word 0xc7a000c4
    .word 0xc7a200b4
    sub.s $f0,$f0,$f2
    .word 0xe6400034
    .word 0xc7a000c8
    .word 0xc7a300b8
    sub.s $f0,$f0,$f3
    .word 0xe6400038
    .word 0xc6400030
    mul.s $f0,$f0,$f20
    .word 0xe6400030
    .word 0xc6400034
    mul.s $f0,$f0,$f20
    .word 0xe6400034
    .word 0xc6400038
    mul.s $f0,$f0,$f20
    .word 0xe6400038
    .word 0xc6410030
    .word 0xc7a000b0
    add.s $f0,$f1,$f0
    .word 0xe6400030
    .word 0xc6400034
    add.s $f0,$f0,$f2
    .word 0xe6400034
    .word 0xc6400038
    add.s $f0,$f0,$f3
    .word 0xe6400038
    addiu v0,zero,1
L15d0d8:
    .word 0x7bbf0040
L15d0dc:
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,208
}


