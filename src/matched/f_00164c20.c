extern void fn_1ce240(void);
extern void fn_1ce160(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    paddub s0,a0,zero
    .word 0x8c84008c
    paddub s1,a1,zero
    .word 0x8c82000c
    .word 0x8c420018
    jalr ra,v0
    mov.s $f20,$f12
    addiu a2,v0,80
    addiu a0,zero,8
    paddub a1,s1,zero
L164c5c:
    .word 0x8cc30000
    .word 0x8cc20004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu a2,a2,8
    bgtz a0,L164c5c
    addiu a1,a1,8
    .word 0x8e040090
    beqz a0,L164e68
    nop
    .word 0x8e10008c
    beqz s0,L164e38
    nop
    .word 0x8e020518
    beqz v0,L164e38
    nop
    .word 0x8c43000c
    beqz v1,L164e38
    nop
    .word 0x8e02003c
    andi v0,v0,0x6
    bnez v0,L164e38
    nop
    .word 0x3c017000
    .word 0x8c243fe0
    .word 0xc4620018
    .word 0xc461001c
    .word 0xc4600020
    addiu v0,zero,8192
    .word 0xe6220030
    .word 0xe6210034
    .word 0xe6200038
    .word 0x8e03003c
    bne v1,v0,L164d20
    paddub a1,zero,zero
    .word 0xc48000d0
    .word 0x3c02bf80
    .word 0x44820800
    addiu a1,zero,1
    mul.s $f0,$f1,$f0
    .word 0xe7a00040
    .word 0xc48000d4
    mul.s $f0,$f1,$f0
    .word 0xe7a00044
    .word 0xc48000d8
    mul.s $f0,$f1,$f0
    b L164d54
    .word 0xe7a00048
L164d20:
    .word 0x8c8200cc
    bnez v0,L164d54
    nop
    .word 0x8e030518
    addiu v0,sp,64
    addiu a1,zero,1
    .word 0x8c63000c
    .word 0xc462000c
    .word 0xc4610010
    .word 0xc4600014
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
L164d54:
    beqz a1,L164de4
    nop
    jal fn_1ce240
    addiu a0,sp,64
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44820800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L164de4
    nop
    addiu a0,s1,32
    jal fn_1ce160
    addiu a1,sp,64
    .word 0xc6230014
    .word 0xc6220028
    .word 0xc6210018
    .word 0xc6200024
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe6200000
    .word 0xc6230018
    .word 0xc6220020
    .word 0xc6210010
    .word 0xc6200028
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe6200004
    .word 0xc6230010
    .word 0xc6220024
    .word 0xc6210014
    .word 0xc6200020
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe6200008
L164de4:
    .word 0x8e020518
    .word 0x8c42000c
    jal fn_1ce240
    addiu a0,v0,12
    mul.s $f4,$f20,$f0
    .word 0xc6210020
    .word 0xc6230024
    .word 0xc6220028
    .word 0xc6200030
    mul.s $f1,$f1,$f4
    add.s $f0,$f0,$f1
    .word 0xe6200030
    .word 0xc6200034
    mul.s $f3,$f3,$f4
    add.s $f0,$f0,$f3
    .word 0xe6200034
    .word 0xc6200038
    mul.s $f2,$f2,$f4
    add.s $f0,$f0,$f2
    b L164e68
    .word 0xe6200038
L164e38:
    .word 0xc4830080
    .word 0xc4820084
    .word 0xc4810088
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44820000
    .word 0xe6230030
    .word 0xe6220034
    .word 0xe6210038
    .word 0xc6210034
    sub.s $f0,$f1,$f0
    .word 0xe6200034
L164e68:
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,80
}

