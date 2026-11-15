asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0000
    .word 0xc4a10018
    .word 0xc4800064
    .word 0x3c033dcc
    addiu t2,sp,40
    addiu t3,sp,44
    mul.s $f0,$f1,$f0
    addiu t4,sp,48
    ori v1,v1,0xcccd
    addiu t1,sp,52
    .word 0xe5400000
    .word 0xc4a2001c
    .word 0xc4810068
    .word 0x44830000
    nop
    mul.s $f1,$f2,$f1
    .word 0xe5610000
    .word 0xc4a20020
    .word 0xc481006c
    mul.s $f1,$f2,$f1
    .word 0xe5810000
    .word 0xc4a20024
    .word 0xc4810070
    mul.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1t L188c28
    .word 0xe5210000
    .word 0xc5400000
    .word 0x3c02437f
    .word 0x44820800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L188a88
    nop
    .word 0xad420000
L188a88:
    .word 0xc5610000
    .word 0x3c02437f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L188aac
    nop
    .word 0xad620000
L188aac:
    .word 0xc5810000
    .word 0x3c02437f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L188ad0
    nop
    .word 0xad820000
L188ad0:
    .word 0xc5210000
    .word 0x3c02437f
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L188af4
    nop
    .word 0xad220000
L188af4:
    .word 0xc4e80000
    .word 0xc4a00008
    .word 0xc4a30000
    .word 0xc4c20000
    .word 0xc4a10004
    .word 0xc4e90004
    .word 0xc4a6000c
    mul.s $f7,$f0,$f8
    .word 0xc4a50010
    .word 0xc4a40014
    addiu v0,a0,84
    .word 0xc4c00004
    add.s $f2,$f3,$f2
    mul.s $f6,$f6,$f9
    add.s $f3,$f1,$f0
    mul.s $f0,$f5,$f8
    mul.s $f1,$f4,$f9
    mul.s $f2,$f2,$f8
    beqz t0,L188b90
    mul.s $f3,$f3,$f9
    .word 0xc4450000
    .word 0xc4440008
    add.s $f4,$f5,$f4
    mul.s $f4,$f7,$f4
    .word 0xe7a40010
    .word 0xc4450000
    .word 0xc4440008
    add.s $f4,$f5,$f4
    mul.s $f4,$f6,$f4
    .word 0xe7a40014
    .word 0xc4440008
    neg.s $f4,$f4
    mul.s $f4,$f7,$f4
    .word 0xe7a40018
    .word 0xc4440008
    neg.s $f4,$f4
    mul.s $f4,$f6,$f4
    b L188bc0
    .word 0xe7a4001c
L188b90:
    .word 0xc4440000
    mul.s $f4,$f7,$f4
    .word 0xe7a40010
    .word 0xc4440000
    mul.s $f4,$f6,$f4
    .word 0xe7a40014
    .word 0xc4440008
    mul.s $f4,$f7,$f4
    .word 0xe7a40018
    .word 0xc4440008
    mul.s $f4,$f6,$f4
    .word 0xe7a4001c
L188bc0:
    .word 0xc444000c
    addiu v1,sp,20
    mul.s $f4,$f0,$f4
    .word 0xe7a40020
    .word 0xc444000c
    mul.s $f4,$f1,$f4
    .word 0xe7a40024
    .word 0xc4450004
    .word 0xc7a40010
    mul.s $f0,$f0,$f5
    add.s $f0,$f4,$f0
    .word 0xe7a00010
    .word 0xc4440004
    .word 0xc4600000
    mul.s $f1,$f1,$f4
    add.s $f0,$f0,$f1
    .word 0xe4600000
    .word 0xc7a00010
    add.s $f0,$f0,$f2
    .word 0xe7a00010
    .word 0xc4600000
    add.s $f0,$f0,$f3
    .word 0xe4600000
    .word 0x8c820090
    jalr ra,v0
    addiu a1,sp,16
L188c28:
    .word 0x7bbf0000
    jr ra
    addiu sp,sp,64
}
