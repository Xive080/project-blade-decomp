extern void f_185d80(void);
extern void f_185f50(void);
asm void func(void) {
        .set noreorder
        j f_185f50
        paddub a0,a1,zero
        nop
        nop
        addiu sp,sp,-32
        sq ra,0(sp)
        lw v1,20(a0)
        lui v0,0x437f
        lwc1 $f1,116(a0)
        .word 0x27A70014
        mtc1 v0,$f2
        .word 0x27A80018
        lwc1 $f0,80(v1)
        .word 0x27A9001C
        mul.s $f0,$f1,$f0
        swc1 $f0,16(sp)
        lw v1,20(a0)
        lwc1 $f1,120(a0)
        lwc1 $f0,84(v1)
        mul.s $f0,$f1,$f0
        swc1 $f0,0($7)
        lw v1,20(a0)
        lwc1 $f1,124(a0)
        lwc1 $f0,88(v1)
        mul.s $f0,$f1,$f0
        swc1 $f0,0($8)
        lw v1,20(a0)
        lwc1 $f1,128(a0)
        lwc1 $f0,92(v1)
        mul.s $f0,$f1,$f0
        swc1 $f0,0($9)
        lwc1 $f0,16(sp)
        c.le.s $f0,$f2
        nop
        bc1t L188764
        addiu a2,a0,116
        sw v0,16(sp)
L188764:
        lwc1 $f1,0(a3)
        lui v0,0x437f
        mtc1 v0,$f0
        nop
        c.le.s $f1,$f0
        nop
        bc1t L188788
        nop
        sw v0,0(a3)
L188788:
        lwc1 $f1,0(t0)
        lui v0,0x437f
        mtc1 v0,$f0
        nop
        c.le.s $f1,$f0
        nop
        bc1t L1887ac
        nop
        sw v0,0(t0)
L1887ac:
        lwc1 $f1,0(t1)
        lui v0,0x437f
        mtc1 v0,$f0
        nop
        c.le.s $f1,$f0
        nop
        bc1t L1887d0
        nop
        sw v0,0(t1)
L1887d0:
        lw a2,16(a2)
        paddub a0,a1,zero
        jal f_185d80
        addiu a1,sp,16
        lq ra,0(sp)
        jr ra
        addiu sp,sp,32
}
