extern void f181c60(void);
extern void f181ff0(void);
extern void f256438(void);
extern void f182660(void);
asm void f(int *a, float *b) {
    .set noreorder
    lwc1 $f1,128(a0)
    .word 0x3c023f80
    mtc1 v0,$f2
    addiu v1,a0,116
    lwc1 $f0,8(a1)
    paddub a2,a1,zero
    div.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    swc1 $f0,8(a1)
    lwc1 $f0,12(a1)
    mul.s $f0,$f0,$f1
    swc1 $f0,12(a1)
    lwc1 $f1,132(a0)
    lwc1 $f0,16(a1)
    div.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    swc1 $f0,16(a1)
    lwc1 $f0,20(a1)
    mul.s $f0,$f0,$f1
    swc1 $f0,20(a1)
    lw a0,120(a0)
    .word 0x8C650008
    .word 0x8C680000
    j f181c60
    addiu a3,v1,12
    nop
    nop
    nop
    addiu a0,a0,116
    lwc1 $f0,8(a1)
    lwc1 $f1,12(a0)
    .word 0x3c023f80
    .word 0x44821000
    nop
    div.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    swc1 $f0,8(a1)
    lwc1 $f0,12(a1)
    mul.s $f0,$f0,$f1
    j f181ff0
    swc1 $f0,12(a1)
    nop
    nop
    nop
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lwc1 $f2,132(a0)
    .word 0x3c023f80
    mtc1 v0,$f3
    lwc1 $f1,8(a1)
    .word 0x3c023f00
    .word 0x44820000
    div.s $f2,$f3,$f2
    addiu s0,a0,116
    .word 0x70A08E28
    mul.s $f1,$f1,$f2
    swc1 $f1,8(a1)
    lwc1 $f1,12(a1)
    mul.s $f1,$f1,$f2
    swc1 $f1,12(a1)
    lwc1 $f1,120(a0)
    jal f256438
    add.s $f12,$f0,$f1
    .word 0x8E040000
    .word 0x8E060008
    .word 0x8E07000C
    paddub t0,s1,zero
    jal f182660
    paddub a1,v0,zero
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
