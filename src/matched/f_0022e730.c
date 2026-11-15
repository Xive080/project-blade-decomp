extern void sub182cf0(void);
extern void sub188e80(void);
extern void sub188f00(void);
asm void f(void *a, void *b) {
    .set noreorder
    .set noat
    addiu sp,sp,-176
    sq ra,96(sp)
    sq s4,80(sp)
    sq s3,64(sp)
    sq s2,48(sp)
    sq s1,32(sp)
    sq s0,16(sp)
    swc1 $f20,0(sp)
    lw v1,344(a1)
    paddub s2,a0,zero
    addiu s0,s2,248
    bltz v1,L22e770
    paddub s1,a1,zero
    mtc1 v1,$f0
    b L22e78c
    cvt.s.w $f1,$f0
L22e770:
    srl a0,v1,0x1
    andi v1,v1,0x1
    or a0,a0,v1
    mtc1 a0,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L22e78c:
    lw v1,4(s0)
    lwc1 $f0,60(v1)
    c.eq.s $f1,$f0
    nop
    bc1t L22e8b4
    addiu a0,v1,60
    swc1 $f1,0(a0)
    lw v0,344(s1)
    sltiu at,v0,10
    beqz at,L22e7c4
    sltiu at,v0,100
    b L22e7d8
    addiu a1,zero,1
    sltiu at,v0,100
L22e7c4:
    beqz at,L22e7d8
    addiu a1,zero,3
    b L22e7d8
    addiu a1,zero,2
    addiu a1,zero,3
L22e7d8:
    lw v0,4(s0)
    sw a1,64(v0)
    lw a0,56(v0)
    lw a2,68(v0)
    addiu s4,v0,56
    jal sub182cf0
    addiu s3,v0,24
    swc1 $f0,16(s4)
    lwc1 $f4,12(s3)
    lui v0,0x4120
    lwc1 $f3,8(s3)
    mtc1 zero,$f5
    lwc1 $f2,0(s3)
    mtc1 v0,$f1
    nop
    mul.s $f4,$f0,$f4
    sub.s $f0,$f3,$f4
    mul.s $f0,$f5,$f0
    add.s $f0,$f2,$f0
    swc1 $f0,0(s3)
    swc1 $f4,8(s3)
    lw v1,4(s0)
    lw v0,8(s0)
    lwc1 $f2,24(v1)
    lwc1 $f0,32(v1)
    add.s $f0,$f2,$f0
    add.s $f0,$f1,$f0
    swc1 $f0,24(v0)
    lw a1,20(s0)
    beqz a1,L22e864
    lui v0,0x3e80
    lw a0,4(s0)
    jal sub188e80
    paddub a2,zero,zero
    lui v0,0x3e80
L22e864:
    sw v0,144(sp)
    addiu v0,zero,2
    sw zero,148(sp)
    sw v0,152(sp)
    sw zero,156(sp)
    addiu v0,zero,17
    sw zero,160(sp)
    sw v0,112(sp)
    lui v0,0x4000
    sw v0,116(sp)
    sw v0,120(sp)
    addiu v0,zero,1
    sw v0,140(sp)
    lui v0,0x19
    lw a0,4(s0)
    addiu a3,s0,20
    addiu a1,sp,112
    jal sub188f00
    addiu a2,v0,-18544
    sw v0,20(s0)
L22e8b4:
    lw v1,44(s2)
    andi v1,v1,0x4
    bnez v1,L22e96c
    nop
    lw a0,12(s0)
    lwc1 $f0,340(s1)
    mtc1 zero,$f2
    lwc1 $f1,60(a0)
    sub.s $f20,$f1,$f0
    c.eq.s $f2,$f20
    nop
    bc1t L22e96c
    nop
    lui v1,0xc120
    mtc1 v1,$f0
    nop
    c.lt.s $f20,$f0
    nop
    bc1f L22e960
    nop
    lw a1,24(s0)
    beqz a1,L22e91c
    lui v0,0x3e80
    jal sub188e80
    paddub a2,zero,zero
    lui v0,0x3e80
L22e91c:
    sw v0,144(sp)
    sw zero,148(sp)
    sw zero,152(sp)
    sw zero,156(sp)
    addiu v0,zero,14
    sw zero,160(sp)
    sw v0,112(sp)
    addiu v0,zero,1
    swc1 $f20,116(sp)
    sw v0,140(sp)
    lui v0,0x19
    lw a0,12(s0)
    addiu a3,s0,24
    addiu a1,sp,112
    jal sub188f00
    addiu a2,v0,-18544
    sw v0,24(s0)
L22e960:
    lwc1 $f0,340(s1)
    lw v1,12(s0)
    swc1 $f0,60(v1)
L22e96c:
    lq ra,96(sp)
    lq s4,80(sp)
    lq s3,64(sp)
    lq s2,48(sp)
    lq s1,32(sp)
    lq s0,16(sp)
    lwc1 $f20,0(sp)
    jr ra
    addiu sp,sp,176
}
