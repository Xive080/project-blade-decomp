extern void sub1(void);
extern void sub2(void);
asm void func(void) {
    .set noreorder
    lwc1 $f1,124(a0)
    lui v0,0x3f80
    mtc1 v0,$f2
    lwc1 $f0,8(a1)
    paddub a2,a1,zero
    div.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    swc1 $f0,8(a1)
    lwc1 $f0,12(a1)
    mul.s $f0,$f0,$f1
    swc1 $f0,12(a1)
    lw a1,120(a0)
    j sub1
    lw a0,116(a0)
    nop
    nop
    addiu sp,sp,-32
    sq ra,0(sp)
    lwc1 $f1,16(a1)
    lwc1 $f0,0(a1)
    addiu v0,sp,24
    addiu a2,a0,120
    add.s $f0,$f0,$f1
    swc1 $f0,0(a1)
    lwc1 $f1,20(a1)
    lwc1 $f0,4(a1)
    add.s $f0,$f0,$f1
    swc1 $f0,4(a1)
    lwc1 $f1,8(a1)
    lwc1 $f0,12(a1)
    .word 0xE4410000
    .word 0xE4400004
    lwc1 $f0,16(a1)
    neg.s $f0,$f0
    swc1 $f0,8(a1)
    lwc1 $f0,20(a1)
    neg.s $f0,$f0
    swc1 $f0,12(a1)
    .word 0xC4410000
    .word 0xC4400004
    swc1 $f1,16(a1)
    swc1 $f0,20(a1)
    jal sub2
    lw a0,116(a0)
    lq ra,0(sp)
    jr ra
    addiu sp,sp,32
}
