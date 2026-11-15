extern void func_00182e50(void);
extern void func_00188ff0(void);
extern void func_00189050(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-144
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    paddub s1,a0,zero
    .word 0x8c8400c0
    addiu v1,zero,1
    beq a0,v1,L2565f4
    .word 0xc4b40000
    beqz a0,L2565bc
    .word 0x3c0338d1
    b L25676c
    nop
    .word 0x3c0338d1
L2565bc:
    ori v1,v1,0xb717
    mtc1 v1,$f0
    nop
    c.le.s $f20,$f0
    nop
    bc1t L2565dc
    .word 0x8e240084
    mov.s $f0,$f20
L2565dc:
    .word 0xe4800018
    .word 0xac80001c
    .word 0x8c83000c
    ori v1,v1,0x2
    b L25676c
    .word 0xac83000c
L2565f4:
    .word 0x8e240098
    beqz a0,L25660c
    nop
    jal func_00188ff0
    nop
    .word 0xae200098
L25660c:
    .word 0x8e24009c
    beqz a0,L256624
    nop
    jal func_00188ff0
    nop
    .word 0xae20009c
L256624:
    mtc1 zero,$f0
    nop
    c.lt.s $f20,$f0
    nop
    bc1f L25674c
    .word 0x3c034270
    .word 0x8e240090
    .word 0x3c023f99
    ori a2,v0,0x999a
    .word 0x3c02002f
    .word 0x8f8389f0
    addiu a3,zero,2
    .word 0xc4800018
    .word 0x3c053f00
    addiu v0,v0,5352
    .word 0x8c640004
    .word 0xafa70040
    .word 0xafa60044
    .word 0xafa50048
    .word 0x3c03bf80
    .word 0xe7a0004c
    .word 0xafa30050
    .word 0xafa4006c
    .word 0xafa20070
    .word 0x3c02002f
    jal func_00182e50
    addiu a1,v0,5352
    addiu v0,sp,116
    .word 0xe4400000
    .word 0x3c034140
    mtc1 v1,$f1
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    .word 0x3c02002e
    addiu v0,v0,1696
    addiu s0,sp,92
    .word 0xe7a00054
    .word 0xafa30058
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    addiu a0,sp,64
    .word 0xe6030000
    .word 0xe6020004
    .word 0xe6010008
    .word 0xe600000c
    .word 0x8f8389f0
    .word 0x8e22002c
    .word 0x8e260028
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,3
    .word 0xae220098
    .word 0x3c02002e
    addiu v0,v0,1760
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    addiu a0,sp,64
    .word 0xe6030000
    .word 0xe6020004
    .word 0xe6010008
    .word 0xe600000c
    .word 0x8f8389f0
    .word 0x8e22002c
    .word 0x8e260028
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae22009c
    .word 0x3c034270
L25674c:
    mtc1 v1,$f0
    .word 0x3c044000
    mul.s $f1,$f0,$f20
    .word 0x8e23008c
    mtc1 a0,$f0
    nop
    sub.s $f0,$f1,$f0
    .word 0xe4600018
L25676c:
    mtc1 zero,$f0
    nop
    c.lt.s $f20,$f0
    nop
    bc1f L25678c
    .word 0x3c0342c8
    neg.s $f20,$f20
    .word 0x3c0342c8
L25678c:
    mtc1 v1,$f0
    .word 0x8e230090
    mul.s $f0,$f0,$f20
    .word 0xe460003c
    .word 0x8e230094
    .word 0xe460003c
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,144
}
