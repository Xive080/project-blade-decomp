asm void func(void) {
    .set noreorder
    .set noat
    lwc1 $f3,0(a1)
    lwc1 $f0,0(a2)
    lui v0,0x3f00
    mtc1 v0,$f2
    lwc1 $f4,4(a1)
    lwc1 $f1,4(a2)
    lui v1,0x4780
    sub.s $f0,$f3,$f0
    .word 0x340b8000
    .word 0x2402fffc
    div.s $f0,$f3,$f0
    sub.s $f1,$f1,$f4
    mul.s $f1,$f0,$f1
    add.s $f1,$f4,$f1
    swc1 $f1,4(a0)
    mtc1 v1,$f1
    lwc1 $f4,8(a1)
    mul.s $f1,$f1,$f0
    lwc1 $f3,8(a2)
    add.s $f1,$f2,$f1
    sub.s $f2,$f3,$f4
    mul.s $f2,$f0,$f2
    add.s $f2,$f4,$f2
    swc1 $f2,8(a0)
    sw zero,0(a0)
    .word 0x46000864
    lwc1 $f3,32(a1)
    lwc1 $f2,32(a2)
    mfc1 t2,$f1
    sub.s $f1,$f2,$f3
    mul.s $f1,$f0,$f1
    add.s $f1,$f3,$f1
    swc1 $f1,32(a0)
    lwc1 $f1,36(a2)
    lwc1 $f2,36(a1)
    sub.s $f1,$f1,$f2
    mul.s $f1,$f0,$f1
    add.s $f1,$f2,$f1
    swc1 $f1,36(a0)
    lwc1 $f2,32(t0)
    lwc1 $f1,32(t1)
    sub.s $f1,$f1,$f2
    .word 0x46000864
    mfc1 v1,$f1
    nop
    .word 0x01431818
    addu v1,v1,t3
    sra v1,v1,0x10
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    add.s $f1,$f2,$f1
    swc1 $f1,32(a3)
    lwc1 $f2,36(t0)
    lwc1 $f1,36(t1)
    sub.s $f1,$f1,$f2
    .word 0x46000864
    mfc1 v1,$f1
    nop
    .word 0x71431818
    addiu v1,v1,32767
    addiu v1,v1,1
    sra v1,v1,0x10
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    add.s $f1,$f2,$f1
    swc1 $f1,36(a3)
    lwc1 $f2,40(t0)
    lwc1 $f1,40(t1)
    sub.s $f1,$f1,$f2
    .word 0x46000864
    mfc1 v1,$f1
    nop
    .word 0x01431818
    addiu v1,v1,32767
    addiu v1,v1,1
    sra v1,v1,0x10
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    add.s $f1,$f2,$f1
    swc1 $f1,40(a3)
    lwc1 $f2,44(t0)
    lwc1 $f1,44(t1)
    sub.s $f1,$f1,$f2
    .word 0x46000864
    mfc1 v1,$f1
    nop
    .word 0x01431818
    addiu v1,v1,32767
    addiu v1,v1,1
    sra v1,v1,0x10
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    add.s $f1,$f2,$f1
    swc1 $f1,44(a3)
    lb v1,12(a1)
    and v0,v1,v0
    ori v0,v0,0x1
    jr ra
    sb v0,12(a0)
}
