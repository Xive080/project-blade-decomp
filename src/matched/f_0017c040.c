asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c017000
    .word 0x8c820048
    .word 0x8c233fb8
    paddub s0,a1,zero
    bne v0,v1,L17c070
    paddub s1,a0,zero
    b L17c1e4
    paddub v0,s1,zero
L17c070:
    .word 0xae230048
    .word 0x8e050000
    bne s1,a1,L17c088
    nop
    b L17c1e4
    paddub v0,s1,zero
L17c088:
    .word 0x8e230034
    beqz v1,L17c1c0
    nop
    .word 0x8e220038
    beqz v0,L17c0ac
    nop
    .word 0x8c420000
    bnez v0,L17c1c0
    nop
L17c0ac:
    .word 0x8c640024
    addiu v0,zero,1
    .word 0x8c830000
    bne v1,v0,L17c0cc
    nop
    .word 0x3c020018
    b L17c0d4
    addiu v0,v0,-15872
L17c0cc:
    .word 0x3c020018
    addiu v0,v0,-15216
L17c0d4:
    addiu a1,s0,20
    addiu a2,s0,8
    addiu a3,sp,64
    jalr ra,v0
    addiu t0,sp,80
    beqz v0,L17c194
    nop
    .word 0x8e020048
    beqz v0,L17c124
    nop
    .word 0x8e040004
    .word 0x8e050000
    addiu a2,sp,48
    addiu t0,sp,64
    jalr ra,v0
    paddub a3,s1,zero
    bnez v0,L17c124
    nop
    b L17c1e4
    paddub v0,s1,zero
L17c124:
    .word 0x8e020044
    addiu v0,v0,1
    .word 0xae020044
    .word 0xc601002c
    .word 0xc7a00040
    add.s $f0,$f1,$f0
    .word 0xe600002c
    .word 0xc6010030
    .word 0xc7a00044
    add.s $f0,$f1,$f0
    .word 0xe6000030
    .word 0xc6010034
    .word 0xc7a00048
    add.s $f0,$f1,$f0
    .word 0xe6000034
    .word 0xc6010020
    .word 0xc7a00050
    add.s $f0,$f1,$f0
    .word 0xe6000020
    .word 0xc6010024
    .word 0xc7a00054
    add.s $f0,$f1,$f0
    .word 0xe6000024
    .word 0xc6010028
    .word 0xc7a00058
    add.s $f0,$f1,$f0
    b L17c1e0
    .word 0xe6000028
L17c194:
    .word 0x8e020048
    beqzl v0,L17c1e4
    paddub v0,s1,zero
    .word 0x8e040004
    .word 0x8e050000
    paddub a2,zero,zero
    paddub a3,s1,zero
    jalr ra,v0
    paddub t0,zero,zero
    b L17c1e0
    nop
L17c1c0:
    .word 0x8e020048
    beqz v0,L17c1e0
    nop
    .word 0x8e040004
    paddub a2,zero,zero
    paddub a3,s1,zero
    jalr ra,v0
    paddub t0,zero,zero
L17c1e0:
    paddub v0,s1,zero
L17c1e4:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
