extern void func_00145e80(void);
extern void func_00147b70(void);
extern void func_00147c60(void);
extern void func_001ce160(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-192
    .word 0x7fbf00a0
    .word 0x7fbe0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b50004
    paddub s2,a0,zero
    .word 0xe7b40000
    paddub s5,a2,zero
    paddub s4,a3,zero
    paddub s3,t0,zero
    beqz s2,L145bdc
    paddub s6,a1,zero
    beqz s6,L145bdc
    nop
    bnez s5,L145bec
    .word 0x3c027f7f
L145bdc:
    .word 0xaea00000
    b L145e3c
    paddub v0,zero,zero
    .word 0x3c027f7f
L145bec:
    ori v0,v0,0xffff
    mtc1 v0,$f12
    jal func_00145e80
    nop
    paddub s0,v0,zero
    bnez s0,L145c18
    paddub a0,s2,zero
    .word 0xaea00000
    b L145e3c
    paddub v0,zero,zero
    paddub a0,s2,zero
L145c18:
    jal func_00147c60
    paddub a1,s0,zero
    beqz s4,L145c2c
    paddub s1,v0,zero
    .word 0xae910000
L145c2c:
    beqz s3,L145c38
    nop
    .word 0xae700000
L145c38:
    beqz s1,L145cc8
    nop
    .word 0xc6010000
    .word 0xc6200000
    addiu a0,sp,176
    addiu s8,sp,180
    addiu s7,sp,184
    sub.s $f0,$f1,$f0
    paddub a1,a0,zero
    .word 0xe7a000b0
    .word 0xc6010004
    .word 0xc6200004
    sub.s $f0,$f1,$f0
    .word 0xe7c00000
    .word 0xc6010008
    .word 0xc6200008
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe6e00000
    .word 0xc6c80004
    .word 0xc6270004
    .word 0xc6c50000
    .word 0xc6240000
    .word 0xc7c60000
    .word 0xc7a300b0
    .word 0xc6c20008
    .word 0xc6210008
    sub.s $f7,$f8,$f7
    sub.s $f4,$f5,$f4
    mov.s $f20,$f0
    .word 0xc6e00000
    mul.s $f6,$f7,$f6
    mul.s $f3,$f4,$f3
    sub.s $f1,$f2,$f1
    adda.s $f3,$f6
    madd.s $f21,$f1,$f0
L145cc8:
    beqz s1,L145ce4
    paddub a0,s2,zero
    c.lt.s $f20,$f21
    nop
    bc1f L145d98
    nop
    paddub a0,s2,zero
L145ce4:
    jal func_00147b70
    paddub a1,s0,zero
    paddub s1,v0,zero
    beqz s1,L145d80
    nop
    .word 0xc6010000
    .word 0xc6200000
    addiu a0,sp,176
    addiu s7,sp,180
    addiu s2,sp,184
    sub.s $f0,$f1,$f0
    paddub a1,a0,zero
    .word 0xe7a000b0
    .word 0xc6010004
    .word 0xc6200004
    sub.s $f0,$f1,$f0
    .word 0xe6e00000
    .word 0xc6010008
    .word 0xc6200008
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe6400000
    .word 0xc6c80004
    .word 0xc6270004
    .word 0xc6c50000
    .word 0xc6240000
    .word 0xc6e60000
    .word 0xc7a300b0
    .word 0xc6c20008
    .word 0xc6210008
    sub.s $f7,$f8,$f7
    sub.s $f4,$f5,$f4
    mov.s $f20,$f0
    .word 0xc6400000
    mul.s $f6,$f7,$f6
    mul.s $f3,$f4,$f3
    sub.s $f1,$f2,$f1
    adda.s $f3,$f6
    madd.s $f21,$f1,$f0
L145d80:
    beqz s4,L145d8c
    nop
    .word 0xae900000
L145d8c:
    beqz s3,L145d98
    nop
    .word 0xae710000
L145d98:
    bnez s1,L145db0
    nop
    .word 0xc600000c
    paddub v0,zero,zero
    b L145e3c
    .word 0xe6a00000
L145db0:
    mtc1 zero,$f0
    nop
    c.eq.s $f0,$f20
    nop
    bc1t L145e30
    nop
    nop
    nop
    div.s $f1,$f21,$f20
    nop
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L145df8
    .word 0x3c023f80
    b L145e14
    mov.s $f1,$f0
    .word 0x3c023f80
L145df8:
    mtc1 v0,$f0
    nop
    c.le.s $f1,$f0
    nop
    bc1t L145e14
    nop
    mov.s $f1,$f0
L145e14:
    .word 0xc622000c
    .word 0xc600000c
    sub.s $f0,$f2,$f0
    mul.s $f0,$f1,$f0
    sub.s $f0,$f2,$f0
    b L145e38
    .word 0xe6a00000
L145e30:
    .word 0xc600000c
    .word 0xe6a00000
L145e38:
    addiu v0,zero,1
L145e3c:
    .word 0x7bbf00a0
    .word 0x7bbe0090
    .word 0x7bb70080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,192
}
