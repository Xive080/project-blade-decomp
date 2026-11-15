extern void func_001ce240(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70809628
    lw a0,0(a0)
    addiu v1,zero,1
    .word 0x70a08e28
    beq a0,v1, L1595dc
    .word 0x70e08628
    sw zero,0(s1)
    sw zero,0(a2)
    b L1597b0
    sw zero,0(s0)
L1595dc:
    .word 0xc6420040
    .word 0xc6400050
    c.eq.s $f2,$f0
    nop
    bc1t L159600
    .word 0x3c03c479
    b L15960c
    lw v1,320(s2)
    .word 0x3c03c479
L159600:
    ori v1,v1,0xc000
    .word 0x44831000
    lw v1,320(s2)
L15960c:
    lw a0,228(s2)
    sltu v1,zero,v1
    xori v1,v1,0x1
    beqz v1, L159628
    addiu a0,a0,28
    b L159630
    lw a1,340(s2)
L159628:
    lw a1,336(s2)
    nop
L159630:
    beq a1,a0, L1596d0
    sw zero,0(s1)
    addiu v1,a1,-336
L15963c:
    sw v1,0(s1)
    .word 0x8e230000
    .word 0xc4630050
    c.eq.s $f3,$f2
    nop
    bc1t L1596a0
    nop
    .word 0xc4610040
    c.le.s $f1,$f3
    nop
    bc1t L159678
    nop
    mov.s $f0,$f1
    mov.s $f1,$f3
    mov.s $f3,$f0
L159678:
    .word 0xc6400048
    c.lt.s $f0,$f1
    nop
    bc1t L1596a0
    nop
    c.le.s $f0,$f3
    nop
    bc1t L1596d0
    nop
    nop
L1596a0:
    lw v1,320(s2)
    sltu v1,zero,v1
    xori v1,v1,0x1
    beqz v1, L1596bc
    nop
    b L1596c8
    lw a1,4(a1)
L1596bc:
    lw a1,0(a1)
    nop
    nop
L1596c8:
    bne a1,a0, L15963c
    addiu v1,a1,-336
L1596d0:
    bne a1,a0, L1596dc
    nop
    sw zero,0(s1)
L1596dc:
    .word 0xc64200a8
    .word 0xc641009c
    .word 0xc64000a0
    .word 0x44801800
    nop
    add.s $f1,$f2,$f1
    sub.s $f0,$f1,$f0
    c.lt.s $f0,$f3
    nop
    bc1f L15970c
    .word 0xe4c00000
    sw zero,0(a2)
L15970c:
    .word 0x8e230000
    beqz v1, L1597b0
    nop
    .word 0xc4610018
    .word 0xc6400018
    addiu a0,sp,64
    sub.s $f0,$f1,$f0
    .word 0xe7a00040
    .word 0x8e220000
    .word 0xc640001c
    .word 0xc441001c
    sub.s $f0,$f1,$f0
    .word 0xe7a00044
    .word 0x8e220000
    .word 0xc6400020
    .word 0xc4410020
    sub.s $f0,$f1,$f0
    jal func_001ce240
    .word 0xe7a00048
    .word 0xe6000000
    .word 0xc6410170
    .word 0xc6000000
    sub.s $f0,$f0,$f1
    .word 0xe6000000
    .word 0x8e250000
    lw v1,320(s2)
    lw a0,320(a1)
    beq a0,v1, L159790
    nop
    .word 0xc4a10170
    .word 0xc6000000
    sub.s $f0,$f0,$f1
    .word 0xe6000000
L159790:
    .word 0xc6010000
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L1597b0
    nop
    sw zero,0(s0)
L1597b0:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
