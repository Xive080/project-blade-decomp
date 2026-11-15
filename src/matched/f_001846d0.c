extern void func_00186290(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0000
    .word 0xc4a00000
    .word 0xc4840000
    .word 0xc4a10018
    .word 0xc4a20004
    .word 0xc4850004
    .word 0xc487000c
    .word 0xc4860008
    sub.s $f3,$f0,$f4
    .word 0xc4a0001c
    sub.s $f2,$f2,$f5
    sub.s $f1,$f1,$f4
    sub.s $f0,$f0,$f5
    mula.s $f3,$f7
    msub.s $f5,$f2,$f6
    mula.s $f1,$f7
    msub.s $f1,$f0,$f6
    .word 0x44800000
    nop
    c.lt.s $f5,$f0
    nop
    bc1t L184740
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L184768
    nop
L184740:
    .word 0x44800000
    nop
    c.lt.s $f5,$f0
    nop
    bc1f L1848d4
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L1848d4
    nop
L184768:
    .word 0x44800000
    nop
    c.lt.s $f5,$f0
    nop
    bc1t L1847bc
    nop
    .word 0xc4a10000
    .word 0xc4a00004
    addiu v1,sp,16
    addiu v0,sp,24
    .word 0xe4610000
    .word 0xe4600004
    .word 0xc4a30008
    .word 0xc4a2000c
    .word 0xc4a10010
    .word 0xc4a00014
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    b L1847f4
    .word 0xe440000c
L1847bc:
    .word 0xc4a10018
    .word 0xc4a0001c
    addiu v1,sp,16
    addiu v0,sp,24
    .word 0xe4610000
    .word 0xe4600004
    .word 0xc4a30008
    .word 0xc4a2000c
    .word 0xc4a10010
    .word 0xc4a00014
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
L1847f4:
    .word 0xc4a3001c
    .word 0xc4a20004
    .word 0xc4a40018
    .word 0xc4a60000
    .word 0xc4810008
    .word 0xc480000c
    sub.s $f3,$f3,$f2
    sub.s $f4,$f4,$f6
    mula.s $f3,$f1
    msub.s $f0,$f4,$f0
    div.s $f2,$f5,$f0
    mul.s $f0,$f2,$f4
    add.s $f0,$f6,$f0
    .word 0xe7a00028
    .word 0xc4a10004
    mul.s $f0,$f2,$f3
    add.s $f0,$f1,$f0
    .word 0xe7a0002c
    .word 0xc4a10008
    .word 0xc4a00020
    sub.s $f0,$f0,$f1
    mul.s $f0,$f2,$f0
    add.s $f0,$f1,$f0
    .word 0xe7a00030
    .word 0xc4a1000c
    .word 0xc4a00024
    sub.s $f0,$f0,$f1
    mul.s $f0,$f2,$f0
    add.s $f0,$f1,$f0
    .word 0xe7a00034
    .word 0xc4a10010
    .word 0xc4a00028
    sub.s $f0,$f0,$f1
    mul.s $f0,$f2,$f0
    add.s $f0,$f1,$f0
    .word 0xe7a00038
    .word 0xc4a10014
    .word 0xc4a0002c
    sub.s $f0,$f0,$f1
    mul.s $f0,$f2,$f0
    add.s $f0,$f1,$f0
    .word 0xe7a0003c
    .word 0x8cc20000
    bnez v0,L1848bc
    addiu a0,v0,60
    jal func_00186290
    addiu a0,sp,16
    b L18491c
    .word 0x7bbf0000
    addiu a0,v0,60
L1848bc:
    .word 0x8c420088
    addiu a1,sp,16
    jalr ra,v0
    addiu a2,a2,4
    b L184918
    nop
L1848d4:
    .word 0x44800000
    nop
    c.lt.s $f5,$f0
    nop
    bc1t L184918
    nop
    .word 0x8cc20000
    bnez v0,L18490c
    addiu a0,v0,60
    jal func_00186290
    .word 0x70a02628
    b L184918
    nop
    addiu a0,v0,60
L18490c:
    .word 0x8c420088
    jalr ra,v0
    addiu a2,a2,4
L184918:
    .word 0x7bbf0000
L18491c:
    jr ra
    addiu sp,sp,64
}
