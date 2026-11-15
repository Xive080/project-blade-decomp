asm void f(void) {
.set noreorder
    lui v0,0x33
    addiu t2,v0,-6592
    lwc1 $f4,8(a1)
    .word 0xC5430008
    lwc1 $f0,8(a2)
    lui v0,0x3f00
    mtc1 v0,$f2
    lwc1 $f5,0(a1)
    lwc1 $f1,0(a2)
    sub.s $f3,$f3,$f4
    lui v1,0x4780
    ori t3,zero,32768
    addiu v0,zero,16
    sub.s $f0,$f0,$f4
    div.s $f0,$f3,$f0
    sub.s $f1,$f1,$f5
    mul.s $f1,$f0,$f1
    add.s $f1,$f5,$f1
    swc1 $f1,0(a0)
    mtc1 v1,$f1
    lwc1 $f4,4(a1)
    mul.s $f1,$f1,$f0
    lwc1 $f3,4(a2)
    add.s $f1,$f2,$f1
    sub.s $f2,$f3,$f4
    mul.s $f2,$f0,$f2
    add.s $f2,$f4,$f2
    swc1 $f2,4(a0)
    lwc1 $f2,8(t2)
    cvt.w.s $f1,$f1
    swc1 $f2,8(a0)
    lwc1 $f3,32(a1)
    lwc1 $f2,32(a2)
    mfc1 t2,$f1
    mtc1 zero,$f1
    sub.s $f2,$f2,$f3
    mul.s $f2,$f0,$f2
    add.s $f2,$f3,$f2
    swc1 $f2,32(a0)
    lwc1 $f3,36(a1)
    lwc1 $f2,36(a2)
    sub.s $f2,$f2,$f3
    mul.s $f2,$f0,$f2
    add.s $f2,$f3,$f2
    swc1 $f2,36(a0)
    lwc1 $f3,32(t0)
    lwc1 $f2,32(t1)
    sub.s $f2,$f2,$f3
    cvt.w.s $f2,$f2
    mfc1 v1,$f2
    nop 
    .word 0x01431818
    addu v1,v1,t3
    sra v1,v1,0x10
    mtc1 v1,$f2
    nop 
    cvt.s.w $f2,$f2
    add.s $f2,$f3,$f2
    swc1 $f2,32(a3)
    lwc1 $f3,36(t0)
    lwc1 $f2,36(t1)
    sub.s $f2,$f2,$f3
    cvt.w.s $f2,$f2
    mfc1 v1,$f2
    nop 
    .word 0x71431818
    addiu v1,v1,32767
    addiu v1,v1,1
    sra v1,v1,0x10
    mtc1 v1,$f2
    nop 
    cvt.s.w $f2,$f2
    add.s $f2,$f3,$f2
    swc1 $f2,36(a3)
    lwc1 $f3,40(t0)
    lwc1 $f2,40(t1)
    sub.s $f2,$f2,$f3
    cvt.w.s $f2,$f2
    mfc1 v1,$f2
    nop 
    .word 0x01431818
    addiu v1,v1,32767
    addiu v1,v1,1
    sra v1,v1,0x10
    mtc1 v1,$f2
    nop 
    cvt.s.w $f2,$f2
    add.s $f2,$f3,$f2
    swc1 $f2,40(a3)
    lwc1 $f3,44(t0)
    lwc1 $f2,44(t1)
    sub.s $f2,$f2,$f3
    cvt.w.s $f2,$f2
    mfc1 v1,$f2
    nop 
    .word 0x01431818
    addiu v1,v1,32767
    addiu v1,v1,1
    sra v1,v1,0x10
    mtc1 v1,$f2
    nop 
    cvt.s.w $f2,$f2
    add.s $f2,$f3,$f2
    swc1 $f2,44(a3)
    sb v0,12(a0)
    lwc1 $f2,4(a0)
    c.lt.s $f2,$f1
    nop 
    bc1f L1d67a0
    addiu v0,zero,4
    b L1d67c0
    andi v1,v0,0xff
L1d67a0:
    lwc1 $f1,8(a0)
    c.le.s $f2,$f1
    nop 
    bc1t L1d67bc
    paddub v0,zero,zero
    b L1d67bc
    addiu v0,zero,8
L1d67bc:
    andi v1,v0,0xff
L1d67c0:
    lbu v0,12(a0)
    mtc1 zero,$f1
    or v0,v0,v1
    sb v0,12(a0)
    lwc1 $f2,0(a0)
    c.lt.s $f2,$f1
    nop 
    bc1f L1d67ec
    addiu v0,zero,1
    b L1d680c
    andi v1,v0,0xff
L1d67ec:
    lwc1 $f1,8(a0)
    c.le.s $f2,$f1
    nop 
    bc1t L1d6808
    paddub v0,zero,zero
    b L1d6808
    addiu v0,zero,2
L1d6808:
    andi v1,v0,0xff
L1d680c:
    lbu v0,12(a0)
    or v0,v0,v1
    jr ra
    sb v0,12(a0)
}
