extern void func_00224460(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xc4800004
    .word 0x3c0346ff
    addiu s1,sp,48
    ori v1,v1,0xfe00
    .word 0x44830800
    nop
    .word 0xe6200004
    lh v1,8(a0)
    .word 0x70808628
    addiu v0,sp,72
    .word 0x44830000
    nop
    .word 0x46800020
    div.s $f0,$f0,$f1
    .word 0xe6200008
    lh v1,10(a0)
    .word 0x44830000
    nop
    .word 0x46800020
    div.s $f0,$f0,$f1
    .word 0xe620000c
    lh a0,12(a0)
    bgez a0, L2235b8
    sra v1,a0,0x1
    addiu v1,a0,1
    sra v1,v1,0x1
L2235b8:
    .word 0x44830000
    nop
    .word 0x468000a0
    .word 0x3c03467f
    ori a0,v1,0xfc00
    .word 0x3c033f80
    .word 0x44840000
    .word 0x44830800
    nop
    div.s $f0,$f2,$f0
    .word 0xe6200010
    .word 0xc6240008
    .word 0xc623000c
    .word 0xc6220010
    .word 0x44800000
    mul.s $f4,$f4,$f4
    mul.s $f3,$f3,$f3
    adda.s $f4,$f3
    madd.s $f2,$f2,$f2
    sub.s $f1,$f1,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L223620
    nop
    b L22362c
    mov.s $f1,$f0
L223620:
    nop
    nop
    .word 0x46010044
L22362c:
    lh v1,12(s0)
    andi v1,v1,0x1
    beqz v1, L223648
    nop
    neg.s $f0,$f1
    b L22364c
    .word 0xe6200014
L223648:
    .word 0xe6210014
L22364c:
    .word 0xc4a00004
    .word 0x3c0346ff
    ori v1,v1,0xfe00
    .word 0x44830800
    nop
    .word 0xe4400004
    lh v1,8(a1)
    .word 0x44830000
    nop
    .word 0x46800020
    div.s $f0,$f0,$f1
    .word 0xe4400008
    lh v1,10(a1)
    .word 0x44830000
    nop
    .word 0x46800020
    div.s $f0,$f0,$f1
    .word 0xe440000c
    lh a0,12(a1)
    bgez a0, L2236a8
    sra v1,a0,0x1
    addiu v1,a0,1
    sra v1,v1,0x1
L2236a8:
    .word 0x44830000
    nop
    .word 0x468000a0
    .word 0x3c03467f
    ori a0,v1,0xfc00
    .word 0x3c033f80
    .word 0x44840000
    .word 0x44830800
    nop
    div.s $f0,$f2,$f0
    .word 0xe4400010
    .word 0xc4440008
    .word 0xc443000c
    .word 0xc4420010
    .word 0x44800000
    mul.s $f4,$f4,$f4
    mul.s $f3,$f3,$f3
    adda.s $f4,$f3
    madd.s $f2,$f2,$f2
    sub.s $f1,$f1,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L223710
    nop
    b L22371c
    mov.s $f1,$f0
L223710:
    nop
    nop
    .word 0x46010044
L22371c:
    lh v1,12(a1)
    andi v1,v1,0x1
    beqz v1, L223738
    nop
    neg.s $f0,$f1
    b L22373c
    .word 0xe4400014
L223738:
    .word 0xe4410014
L22373c:
    .word 0x70402e28
    jal func_00224460
    .word 0x72202628
    .word 0xc6200008
    .word 0x3c03bf80
    .word 0x44830800
    nop
    c.lt.s $f0,$f1
    nop
    bc1fl L22378c
    .word 0x3c033f80
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L223780
    sw v1,8(s1)
L223780:
    b L2237c8
    .word 0xc620000c
    .word 0x3c033f80
L22378c:
    .word 0x44830800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L2237c4
    nop
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L2237bc
    sw v1,8(s1)
L2237bc:
    b L2237c4
    nop
L2237c4:
    .word 0xc620000c
L2237c8:
    .word 0x3c03bf80
    .word 0x44830800
    nop
    c.lt.s $f0,$f1
    nop
    bc1fl L223808
    .word 0x3c033f80
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L2237fc
    sw v1,12(s1)
L2237fc:
    b L223844
    .word 0xc6200010
    .word 0x3c033f80
L223808:
    .word 0x44830800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L223840
    nop
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L223838
    sw v1,12(s1)
L223838:
    b L223840
    nop
L223840:
    .word 0xc6200010
L223844:
    .word 0x3c03bf80
    .word 0x44830800
    nop
    c.lt.s $f0,$f1
    nop
    bc1fl L223884
    .word 0x3c033f80
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L223878
    sw v1,16(s1)
L223878:
    b L2238c0
    .word 0xc6200014
    .word 0x3c033f80
L223884:
    .word 0x44830800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L2238bc
    nop
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L2238b4
    sw v1,16(s1)
L2238b4:
    b L2238bc
    nop
L2238bc:
    .word 0xc6200014
L2238c0:
    .word 0x3c03bf80
    .word 0x44830800
    nop
    c.lt.s $f0,$f1
    nop
    bc1fl L223900
    .word 0x3c033f80
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L2238f4
    sw v1,20(s1)
L2238f4:
    b L22393c
    .word 0xc6200004
    .word 0x3c033f80
L223900:
    .word 0x44830800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L223938
    nop
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L223930
    sw v1,20(s1)
L223930:
    b L223938
    nop
L223938:
    .word 0xc6200004
L22393c:
    .word 0x3c0346ff
    ori v1,v1,0xfe00
    .word 0x44831800
    .word 0x3c03467f
    .word 0xe6000004
    .word 0xc6210008
    ori v1,v1,0xfc00
    .word 0x44831000
    .word 0x44800000
    nop
    mul.s $f1,$f3,$f1
    .word 0x46000864
    .word 0x44030800
    nop
    sh v1,8(s0)
    .word 0xc621000c
    mul.s $f1,$f3,$f1
    .word 0x46000864
    .word 0x44030800
    nop
    sh v1,10(s0)
    .word 0xc6210010
    mul.s $f1,$f2,$f1
    .word 0x46000864
    .word 0x44030800
    nop
    sh v1,12(s0)
    lh v1,12(s0)
    sll v1,v1,0x1
    sh v1,12(s0)
    .word 0xc6210014
    c.lt.s $f1,$f0
    nop
    bc1f L2239d4
    nop
    lh v1,12(s0)
    addiu v1,v1,1
    sh v1,12(s0)
L2239d4:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
