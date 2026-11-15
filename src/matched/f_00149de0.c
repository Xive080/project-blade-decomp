asm void f(int *o, float *p, float t) {
    .set noreorder
    lwc1 $f0,0(a1)
    lwc1 $f1,20(a1)
    sub.s $f0,$f0,$f12
    c.lt.s $f0,$f1
    nop
    bc1f L1
    lui v1,0x4180
    mov.s $f0,$f1
    lui v1,0x4180
L1:
    mtc1 v1,$f1
    nop
    mul.s $f0,$f1,$f0
    cvt.w.s $f0,$f0
    mfc1 v1,$f0
    nop
    sw v1,0(a0)
    lwc1 $f0,4(a1)
    lwc1 $f1,24(a1)
    sub.s $f2,$f0,$f12
    c.lt.s $f2,$f1
    nop
    bc1f L2
    lui v1,0x4180
    mov.s $f2,$f1
    lui v1,0x4180
L2:
    mtc1 v1,$f0
    nop
    mul.s $f0,$f0,$f2
    cvt.w.s $f0,$f0
    mfc1 v1,$f0
    jr ra
    sw v1,4(a0)
}
