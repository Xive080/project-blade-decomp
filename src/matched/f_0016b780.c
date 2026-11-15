extern void fn_2042f0(void);
extern void fn_1cc6b0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    paddub s0,a0,zero
    bnez s0,L16b7a8
    .word 0xe7b40000
    .word 0x44800000
    b L16baa0
    .word 0x7bbf0030
L16b7a8:
    .word 0x8e040010
    .word 0xc6010014
    .word 0xc4800004
    c.le.s $f1,$f0
    nop
    bc1f L16b848
    nop
    beqz a1,L16b830
    sub.s $f20,$f1,$f0
    beqz s0,L16b830
    .word 0x8c850000
    .word 0x8e040000
    beqz a0,L16b808
    nop
    beqz a1,L16b7f8
    nop
    jal fn_2042f0
    nop
    b L16b834
    .word 0xae000018
L16b7f8:
    jal fn_2042f0
    .word 0x8e050004
    b L16b830
    nop
L16b808:
    beqz a1,L16b824
    nop
    .word 0x8ca50000
    jal fn_1cc6b0
    .word 0x8e040004
    b L16b830
    nop
L16b824:
    .word 0x8e050008
    jal fn_1cc6b0
    .word 0x8e040004
L16b830:
    .word 0xae000018
L16b834:
    .word 0x8e020010
    .word 0x4600a006
    .word 0xc4410004
    b L16ba9c
    .word 0xe6010014
L16b848:
    .word 0x8e06000c
    sll v0,a2,0x3
    addu v0,v0,a0
    .word 0xc440fffc
    c.lt.s $f1,$f0
    nop
    bc1t L16b900
    nop
    beqz a1,L16b8d4
    sub.s $f20,$f1,$f0
    beqz s0,L16b8d4
    .word 0x8c45fff8
    .word 0x8e040000
    beqz a0,L16b8ac
    nop
    beqz a1,L16b89c
    nop
    jal fn_2042f0
    nop
    b L16b8d8
    .word 0x8e02000c
L16b89c:
    jal fn_2042f0
    .word 0x8e050004
    b L16b8d4
    nop
L16b8ac:
    beqz a1,L16b8c8
    nop
    .word 0x8ca50000
    jal fn_1cc6b0
    .word 0x8e040004
    b L16b8d4
    nop
L16b8c8:
    .word 0x8e050008
    jal fn_1cc6b0
    .word 0x8e040004
L16b8d4:
    .word 0x8e02000c
L16b8d8:
    .word 0x4600a006
    addiu v0,v0,-1
    .word 0xae020018
    .word 0x8e02000c
    .word 0x8e030010
    sll v0,v0,0x3
    addu v0,v0,v1
    .word 0xc441fffc
    b L16ba9c
    .word 0xe6010014
L16b900:
    .word 0x8e030018
    sll v0,v1,0x3
    addu v0,v0,a0
    .word 0xc4400004
    c.lt.s $f1,$f0
    nop
    bc1t L16b9e8
    addiu s1,v1,-1
    addiu s1,v1,1
    b L16b9d0
    sll v1,s1,0x3
    addu v0,a0,v1
L16b930:
    .word 0xc4400004
    c.lt.s $f1,$f0
    nop
    bc1fl L16b9c8
    addiu v1,v1,8
    beqz a1,L16b9bc
    addiu v0,s1,-1
    sll v0,s1,0x3
    addu v0,v0,a0
    beqz s0,L16b9b8
    .word 0x8c45fff8
    .word 0x8e040000
    beqz a0,L16b990
    nop
    beqz a1,L16b980
    nop
    jal fn_2042f0
    nop
    b L16b9b8
    nop
L16b980:
    jal fn_2042f0
    .word 0x8e050004
    b L16b9b8
    nop
L16b990:
    beqz a1,L16b9ac
    nop
    .word 0x8ca50000
    jal fn_1cc6b0
    .word 0x8e040004
    b L16b9b8
    nop
L16b9ac:
    .word 0x8e050008
    jal fn_1cc6b0
    .word 0x8e040004
L16b9b8:
    addiu v0,s1,-1
L16b9bc:
    b L16ba98
    .word 0xae020018
    addiu v1,v1,8
L16b9c8:
    addiu s1,s1,1
    nop
L16b9d0:
    slt v0,s1,a2
    bnez v0,L16b930
    addu v0,a0,v1
    b L16ba98
    nop
    addiu s1,v1,-1
L16b9e8:
    blez s1,L16ba98
    nop
    sll v1,s1,0x3
L16b9f4:
    addu v0,a0,v1
    .word 0xc4400004
    c.lt.s $f1,$f0
    nop
    bc1tl L16ba90
    addiu s1,s1,-1
    beqz a1,L16ba80
    nop
    sll v0,s1,0x3
    addu v0,a0,v0
    beqz s0,L16ba80
    .word 0x8c450000
    .word 0x8e040000
    beqz a0,L16ba58
    nop
    beqz a1,L16ba48
    nop
    jal fn_2042f0
    nop
    b L16ba84
    .word 0xae110018
L16ba48:
    jal fn_2042f0
    .word 0x8e050004
    b L16ba80
    nop
L16ba58:
    beqz a1,L16ba74
    nop
    .word 0x8ca50000
    jal fn_1cc6b0
    .word 0x8e040004
    b L16ba80
    nop
L16ba74:
    .word 0x8e050008
    jal fn_1cc6b0
    .word 0x8e040004
L16ba80:
    .word 0xae110018
L16ba84:
    b L16ba98
    nop
    addiu s1,s1,-1
L16ba90:
    bgtz s1,L16b9f4
    addiu v1,v1,-8
L16ba98:
    .word 0x44800000
L16ba9c:
    .word 0x7bbf0030
L16baa0:
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,64
}


