extern void func_001f79f0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8ca3000c
    sll v0,v1,0x4
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,a0,v0
    .word 0xc4541dc8
    .word 0x8c431dd8
    sll v0,v1,0x4
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,a0,v0
    .word 0xc4401dc8
    c.le.s $f0,$f20
    nop
    bc1t L15be18
    .word 0x70a08628
    .word 0x46000506
L15be18:
    jal func_001f79f0
    nop
    andi v0,v0,0x7fff
    bltz v0,L15be38
    srl v1,v0,0x1
    .word 0x44820000
    b L15be50
    cvt.s.w $f2,$f0
L15be38:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f2,$f0
    add.s $f2,$f2,$f2
L15be50:
    .word 0x3c024700
    .word 0x44820800
    addiu a2,sp,64
    div.s $f1,$f2,$f1
    addiu v1,zero,1
    addiu t2,sp,80
    .word 0x70001628
    .word 0x70003e28
    .word 0x70004628
    .word 0x70c04e28
    sub.s $f0,$f20,$f20
    mul.s $f0,$f1,$f0
    add.s $f0,$f20,$f0
    .word 0xe6000054
    .word 0xae030058
    .word 0x8e030140
    .word 0x8e0400e4
    .word 0x00031880
    addu v1,a0,v1
    .word 0x8c640000
    nop
L15bea4:
    .word 0x8e050140
    .word 0x8e0300e4
    sll a1,a1,0x4
    addu v1,v1,a1
    addu v1,v1,t0
    .word 0x8c650024
    slti at,a1,0
    bnezl at,L15bf0c
    addiu a3,a3,1
    sll v1,a1,0x2
    addu t3,a0,v1
    .word 0x8d630004
    .word 0x8c630014
    bnez v1,L15bef0
    nop
    .word 0x8d630014
    bnez v1,L15bf08
    nop
    nop
L15bef0:
    .word 0xad250000
    .word 0xad470000
    addiu t1,t1,4
    addiu t2,t2,4
    addiu v0,v0,1
    nop
L15bf08:
    addiu a3,a3,1
L15bf0c:
    slti v1,a3,3
    bnez v1,L15bea4
    addiu t0,t0,4
    slti at,v0,2
    bnezl at,L15c260
    .word 0x70008e28
    .word 0x3c034e6e
    ori v1,v1,0x6b28
    .word 0x44830000
    .word 0x44800800
    slt at,zero,v0
    beqz at,L15c260
    .word 0x70001e28
    .word 0x8f858338
    nop
L15bf48:
    .word 0x8cc80000
    .word 0x3c077878
    ori t1,a3,0x7879
    .word 0x3c070030
    addiu t3,a3,-4848
    .word 0x44801000
    sll a3,t0,0x2
    addu a3,a0,a3
    .word 0x8ce80004
    subu t2,t0,a1
    mult t1,t2
    srl t5,t2,0x1f
    nop
    mfhi t4
    .word 0x8d0a0008
    .word 0x8d09000c
    sra t4,t4,0x5
    addu t4,t4,t5
    sll t4,t4,0x2
    addu t3,t3,t4
    .word 0xc5630000
    addiu t2,t2,-1
    sll t2,t2,0x5
    cvt.s.w $f5,$f3
    addu t3,t1,t2
    .word 0xc5660018
    .word 0xc563001c
    sub.s $f4,$f3,$f6
    c.eq.s $f2,$f4
    nop
    bc1f L15bfd0
    nop
    b L15bffc
    nop
L15bfd0:
    .word 0x8d0a0010
    .word 0x3c093f80
    .word 0x44891000
    sll t1,t2,0x1
    .word 0x44891800
    nop
    cvt.s.w $f3,$f3
    div.s $f2,$f2,$f3
    mul.s $f2,$f2,$f4
    add.s $f6,$f6,$f2
    nop
L15bffc:
    nop
    div.s $f5,$f5,$f6
    nop
    nop
    c.lt.s $f5,$f0
    nop
    bc1f L15c120
    nop
    .word 0x8cea0014
    .word 0x46002806
    .word 0x70608e28
    beqz t2,L15c038
    addiu a3,t0,28
    b L15c040
    .word 0x8d090020
L15c038:
    .word 0x8d09001c
    nop
L15c040:
    bnel t1,a3,L15c0a4
    addiu t1,t1,-336
    .word 0xc563001c
    .word 0xc5610018
    .word 0x44801000
    nop
    sub.s $f4,$f3,$f1
    c.eq.s $f2,$f4
    nop
    bc1f L15c074
    nop
    b L15c09c
    nop
L15c074:
    .word 0x8d080010
    .word 0x3c073f80
    .word 0x44871000
    sll a3,t0,0x1
    .word 0x44871800
    nop
    cvt.s.w $f3,$f3
    div.s $f2,$f2,$f3
    mul.s $f2,$f2,$f4
    add.s $f1,$f1,$f2
L15c09c:
    b L15c118
    nop
L15c0a4:
    bnez t2,L15c0b4
    nop
    b L15c118
    .word 0xc5210148
L15c0b4:
    .word 0xc562001c
    .word 0xc5650018
    .word 0x44800800
    sub.s $f4,$f2,$f5
    c.eq.s $f1,$f4
    nop
    bc1f L15c0dc
    .word 0xc5230048
    b L15c114
    .word 0xc5210148
L15c0dc:
    .word 0x3c074000
    .word 0x44870800
    .word 0x8d080010
    mul.s $f2,$f1,$f3
    .word 0x3c073f80
    sll t0,t0,0x1
    .word 0x44881800
    .word 0x44870800
    cvt.s.w $f3,$f3
    sub.s $f1,$f2,$f1
    div.s $f1,$f1,$f3
    mul.s $f1,$f1,$f4
    add.s $f5,$f5,$f1
    .word 0xc5210148
L15c114:
    sub.s $f1,$f5,$f1
L15c118:
    b L15c254
    addiu v1,v1,1
L15c120:
    c.eq.s $f5,$f0
    nop
    bc1f L15c250
    nop
    .word 0x8cea0014
    beqz t2,L15c144
    addiu a3,t0,28
    b L15c150
    .word 0x8d090020
L15c144:
    .word 0x8d09001c
    nop
    nop
L15c150:
    bnel t1,a3,L15c1b4
    addiu t1,t1,-336
    .word 0xc563001c
    .word 0xc5660018
    .word 0x44801000
    nop
    sub.s $f4,$f3,$f6
    c.eq.s $f2,$f4
    nop
    bc1f L15c184
    nop
    b L15c1ac
    nop
L15c184:
    .word 0x8d080010
    .word 0x3c073f80
    .word 0x44871000
    sll a3,t0,0x1
    .word 0x44871800
    nop
    cvt.s.w $f3,$f3
    div.s $f2,$f2,$f3
    mul.s $f2,$f2,$f4
    add.s $f6,$f6,$f2
L15c1ac:
    b L15c230
    nop
L15c1b4:
    bnez t2,L15c1c4
    nop
    b L15c230
    .word 0xc5260148
L15c1c4:
    .word 0xc563001c
    .word 0xc5670018
    .word 0x44801000
    nop
    sub.s $f6,$f3,$f7
    c.eq.s $f2,$f6
    nop
    bc1f L15c1f0
    .word 0xc5240048
    b L15c228
    .word 0xc5220148
L15c1f0:
    .word 0x3c074000
    .word 0x44871000
    .word 0x8d080010
    mul.s $f3,$f2,$f4
    .word 0x3c073f80
    sll t0,t0,0x1
    .word 0x44882000
    .word 0x44871000
    cvt.s.w $f4,$f4
    sub.s $f2,$f3,$f2
    div.s $f2,$f2,$f4
    mul.s $f2,$f2,$f6
    add.s $f7,$f7,$f2
    .word 0xc5220148
L15c228:
    sub.s $f6,$f7,$f2
    nop
L15c230:
    c.le.s $f6,$f1
    nop
    bc1t L15c250
    nop
    .word 0x46002806
    .word 0x46003046
    .word 0x70608e28
    nop
L15c250:
    addiu v1,v1,1
L15c254:
    slt a3,v1,v0
    bnez a3,L15bf48
    addiu a2,a2,4
L15c260:
    sll v0,s1,0x2
    addu a0,v0,sp
    .word 0x8c830040
    addiu v0,zero,1
    .word 0xae030138
    .word 0x8c830050
    .word 0xae03013c
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,96
}


