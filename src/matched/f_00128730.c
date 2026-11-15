asm void f(void) {
    .set noreorder
    .set noat
    .word 0xc4a20000
    .word 0xc4a10004
    addiu sp,sp,-16
    addiu t0,sp,0
    addiu v1,sp,8
    .word 0xe5020000
    .word 0xe5010004
    .word 0xc4c20000
    .word 0xc4c10004
    .word 0xe4620000
    .word 0xe4610004
    .word 0xc7a30000
    .word 0xc7a40004
    .word 0xc7a5000c
    .word 0xc7a20008
    .word 0x46001864
    mfc1 a1,$f1
    .word 0x46002064
    mfc1 a2,$f1
    .word 0x46002864
    mfc1 t0,$f1
    nop
    bne t0,a2,L1287a0
    sub.s $f3,$f2,$f3
    .word 0x46001064
    mfc1 t1,$f1
    b L12880c
    .word 0xc7a10008
L1287a0:
    sub.s $f2,$f5,$f4
    .word 0x3c033f80
    .word 0x44830000
    .word 0x44800800
    nop
    div.s $f0,$f0,$f2
    nop
    nop
    c.lt.s $f2,$f1
    nop
    bc1t L1287e0
    addiu t3,zero,-1
    addiu t3,zero,1
    b L1287e4
    addiu t2,a2,1
    addiu t3,zero,-1
L1287e0:
    .word 0x70c05628
L1287e4:
    .word 0x448a1000
    .word 0xc7a10000
    cvt.s.w $f2,$f2
    sub.s $f2,$f2,$f4
    mul.s $f2,$f0,$f2
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0x46000864
    mfc1 t1,$f1
    .word 0xc7a10008
L12880c:
    sll v1,a2,0x2
    addu a3,a3,v1
    sll t4,t3,0x2
    .word 0x46000864
    mfc1 t5,$f1
    .word 0x44800800
    nop
    c.lt.s $f3,$f1
    nop
L128830:
    bltz a2,L1288b0
    nop
    .word 0x8c830020
    slt at,a2,v1
    beqz at,L1288b0
    nop
    bc1t L128880
    nop
    .word 0x84e30000
    slt at,a1,v1
    beqz at,L128868
    nop
    .word 0xa4e50000
    nop
L128868:
    .word 0x84e30002
    slt at,v1,t1
    beqz at,L1288b0
    nop
    b L1288b0
    .word 0xa4e90002
L128880:
    .word 0x84e30000
    slt at,t1,v1
    beqz at,L128898
    nop
    .word 0xa4e90000
    nop
L128898:
    .word 0x84e30002
    slt at,v1,a1
    beqz at,L1288b0
    nop
    .word 0xa4e50002
    nop
L1288b0:
    beql a2,t0,L128904
    addiu sp,sp,16
    addu a2,a2,t3
    addu t2,t2,t3
    addu a3,a3,t4
    bne a2,t0,L1288d4
    .word 0x71202e28
    b L128830
    .word 0x71a04e28
L1288d4:
    .word 0x448a1000
    .word 0xc7a10000
    cvt.s.w $f2,$f2
    sub.s $f2,$f2,$f4
    mul.s $f2,$f0,$f2
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0x46000864
    mfc1 t1,$f1
    b L128830
    nop
    addiu sp,sp,16
L128904:
    jr ra
    nop
}
