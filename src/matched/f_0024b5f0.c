extern void func_001892c0(void);
extern void func_00189650(void);
extern void func_00189520(void);
extern void func_001895d0(void);
extern void func_00189320(void);
extern void func_00189240(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-176
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s0,a1,zero
    bnez s0,L24b65c
    paddub s1,a0,zero
    .word 0x8e230024
    andi v1,v1,0x1c
    bnez v1,L24b65c
    nop
    .word 0x8e220010
    jalr ra,v0
    nop
    .word 0x8e240034
    beqz a0,L24b644
    nop
    jal func_001892c0
    nop
    .word 0xae200034
    .word 0xae200038
L24b644:
    jal func_00189650
    .word 0x8e240028
    .word 0xae200028
    .word 0xae200030
    b L24ba5c
    .word 0xae200024
L24b65c:
    .word 0x8e250030
    beqz a1,L24b678
    nop
    .word 0x8e240028
    jal func_00189520
    .word 0x70003628
    .word 0xae200030
L24b678:
    .word 0x8e240034
    beqz a0,L24b694
    nop
    jal func_001892c0
    nop
    .word 0xae200034
    .word 0xae200038
L24b694:
    .word 0x8e240024
    andi v1,a0,0x4
    beqz v1,L24b78c
    nop
    ori v0,a0,0x1
    beqz s0,L24b6fc
    .word 0xae220024
    .word 0xc622004c
    .word 0x3c023f80
    .word 0x44820800
    .word 0xc6200050
    .word 0x3c023e4c
    ori v1,v0,0xcccd
    sub.s $f1,$f1,$f2
    addiu v0,zero,2
    sub.s $f0,$f1,$f0
    .word 0x44831800
    nop
    mul.s $f1,$f3,$f0
    mul.s $f0,$f3,$f2
    .word 0xe7a00050
    .word 0xe7a10054
    .word 0xafa20058
    .word 0xafa0005c
    b L24b740
    .word 0xafa00060
L24b6fc:
    .word 0xc620004c
    .word 0xc6210050
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44821000
    nop
    mul.s $f0,$f2,$f0
    addiu v0,zero,1
    mul.s $f1,$f2,$f1
    .word 0xe7a00050
    .word 0xe7a10054
    .word 0xafa20058
    .word 0xafa0005c
    .word 0xafa00060
    .word 0x8e220024
    ori v0,v0,0x20
    .word 0xae220024
L24b740:
    .word 0xc622005c
    .word 0xc6210058
    .word 0xc6200054
    addiu a0,zero,10
    .word 0x3c020025
    .word 0x3c033f80
    addiu a1,sp,48
    .word 0xafa40030
    .word 0xe7a00034
    .word 0xafa00038
    .word 0xe7a1003c
    .word 0xafa30040
    .word 0xe7a20044
    .word 0xafb0004c
    .word 0x8e240028
    addiu a2,v0,-17808
    jal func_001895d0
    paddub a3,s1,zero
    .word 0xae220030
L24b78c:
    .word 0x8e240024
    andi v1,a0,0x18
    beqz v1,L24ba5c
    nop
    ori v0,a0,0x2
    beqz s0,L24b7f4
    .word 0xae220024
    .word 0xc6220060
    .word 0x3c023f80
    .word 0x44820800
    .word 0xc6200064
    .word 0x3c023e4c
    ori v1,v0,0xcccd
    sub.s $f1,$f1,$f2
    addiu v0,zero,2
    sub.s $f0,$f1,$f0
    .word 0x44831800
    nop
    mul.s $f1,$f3,$f0
    mul.s $f0,$f3,$f2
    .word 0xe7a00050
    .word 0xe7a10054
    .word 0xafa20058
    .word 0xafa0005c
    b L24b838
    .word 0xafa00060
L24b7f4:
    .word 0xc6200060
    .word 0xc6210064
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44821000
    nop
    mul.s $f0,$f2,$f0
    addiu v0,zero,1
    mul.s $f1,$f2,$f1
    .word 0xe7a00050
    .word 0xe7a10054
    .word 0xafa20058
    .word 0xafa0005c
    .word 0xafa00060
    .word 0x8e220024
    ori v0,v0,0x20
    .word 0xae220024
L24b838:
    .word 0x8e220024
    andi v0,v0,0x8
    beqz v0,L24b924
    nop
    .word 0x3c02002e
    addiu t1,v0,1792
    .word 0xc5230000
    .word 0xc5220004
    .word 0xc5210008
    .word 0xc520000c
    addiu a3,sp,120
    .word 0x3c023f19
    addiu t2,sp,160
    .word 0xe4e30000
    .word 0xe4e20004
    .word 0xe4e10008
    .word 0xe4e0000c
    .word 0xc5230010
    .word 0xc5220014
    .word 0xc5210018
    .word 0xc520001c
    .word 0x3c063f80
    .word 0x3c054200
    .word 0x3c034000
    ori v0,v0,0x999a
    addiu a0,sp,112
    .word 0xe4e30010
    .word 0xe4e20014
    .word 0xe4e10018
    .word 0xe4e0001c
    .word 0xc5210020
    .word 0xc5200024
    .word 0x70004628
    .word 0xe4e10020
    .word 0xe4e00024
    .word 0xad460000
    .word 0xafa00070
    .word 0xafa50080
    .word 0xafa00084
    .word 0xafa00088
    .word 0xafa3008c
    .word 0xad420000
    .word 0x8f8289f0
    .word 0x8e26003c
    .word 0x8e270040
    .word 0x8c450000
    jal func_00189320
    paddub t1,a1,zero
    addiu v1,zero,24
    .word 0xae220034
    .word 0xafa30030
    .word 0x3c0338d1
    ori v1,v1,0xb717
    sltu v0,zero,s0
    .word 0xafa30034
    xori v0,v0,0x1
    .word 0xafa30038
    b L24ba40
    .word 0xafa2004c
L24b924:
    .word 0x8e230028
    .word 0x3c02002e
    addiu a1,v0,1792
    .word 0xc6270074
    .word 0xc626006c
    .word 0xc6240070
    .word 0xc4650014
    .word 0x8e260068
    .word 0xc4a30000
    .word 0xc4a20004
    .word 0xc4a10008
    .word 0xc4a0000c
    addiu a3,sp,120
    add.s $f4,$f4,$f5
    .word 0x3c033f80
    addiu v0,zero,3
    .word 0xe4e30000
    .word 0xe4e20004
    .word 0xe4e10008
    .word 0xe4e0000c
    .word 0xc4a30010
    .word 0xc4a20014
    .word 0xc4a10018
    .word 0xc4a0001c
    addiu a0,sp,112
    .word 0x70004628
    .word 0xe4e30010
    .word 0xe4e20014
    .word 0xe4e10018
    .word 0xe4e0001c
    .word 0xc4a10020
    .word 0xc4a00024
    .word 0xe4e10020
    .word 0xe4e00024
    .word 0xafa300a0
    .word 0xafa20070
    .word 0xafa60074
    .word 0xace00000
    .word 0xe7a4007c
    .word 0xc7a00080
    .word 0x8f8289f0
    mul.s $f0,$f0,$f6
    .word 0xe7a00080
    .word 0xc7a00084
    mul.s $f0,$f0,$f6
    .word 0xe7a00084
    .word 0xc4c10004
    .word 0xc7a00088
    cvt.s.w $f1,$f1
    div.s $f7,$f7,$f1
    mul.s $f0,$f0,$f7
    .word 0xe7a00088
    .word 0xc7a0008c
    mul.s $f0,$f0,$f7
    .word 0xe7a0008c
    .word 0x8c450000
    .word 0x8e260044
    .word 0x8e270048
    jal func_00189320
    paddub t1,a1,zero
    addiu v1,zero,24
    .word 0xae220034
    .word 0xafa30030
    .word 0x3c0338d1
    ori v1,v1,0xb717
    .word 0xafa30034
    sltu v0,zero,s0
    .word 0x3c033f80
    xori v0,v0,0x1
    .word 0xafa30038
    .word 0xafa2004c
L24ba40:
    .word 0x8e240034
    .word 0x3c020025
    addiu a1,sp,48
    addiu a2,v0,-17664
    jal func_00189240
    paddub a3,s1,zero
    .word 0xae220038
L24ba5c:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,176
}


