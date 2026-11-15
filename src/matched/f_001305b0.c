extern void fn_201090(void);
extern void fn_202b00(void);
extern void fn_20eef0(void);
extern void fn_1c7340(void);
extern void fn_1f7d70(void);
extern void fn_1fc0f0(void);
extern void fn_1dd1d0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c900008
    .word 0x70809e28
    .word 0x70a09628
    jal fn_201090
    .word 0x72002628
    .word 0x3c030033
    addiu v1,v1,-23008
    .word 0x8c630000
    addiu a0,zero,2
    addiu a2,zero,5
    b L130668
    addiu a1,v1,172
L1305f8:
    .word 0xc4460004
    .word 0xc4a00004
    .word 0xc4450000
    .word 0xc4a40000
    .word 0xc4430008
    .word 0xc4a20008
    .word 0xc4a1000c
    mul.s $f6,$f6,$f0
    mul.s $f4,$f5,$f4
    .word 0xc440000c
    adda.s $f4,$f6
    madd.s $f2,$f3,$f2
    sub.s $f2,$f2,$f1
    c.le.s $f2,$f0
    nop
    bc1tl L130648
    neg.s $f0,$f0
    b L130678
    .word 0x70002628
    neg.s $f0,$f0
L130648:
    c.le.s $f2,$f0
    nop
    bc1tl L130664
    addiu a1,a1,20
    addiu a0,zero,1
    nop
    addiu a1,a1,20
L130664:
    nop
L130668:
    .word 0x70c01e28
    bnez v1,L1305f8
    addiu a2,a2,-1
    nop
L130678:
    .word 0x938387cc
    bnez a0,L13068c
    .word 0xa2630028
    b L1309c0
    .word 0x70001628
L13068c:
    addiu v1,zero,1
    bne a0,v1,L130728
    nop
    .word 0x3c030033
    addiu a0,v1,-23008
    .word 0x8f838778
    .word 0x8c840000
    addiu a1,zero,5
    addu v1,a0,v1
    b L130718
    addiu a0,v1,116
L1306b8:
    .word 0xc4460004
    .word 0xc4800004
    .word 0xc4450000
    .word 0xc4840000
    .word 0xc4430008
    .word 0xc4820008
    .word 0xc481000c
    mul.s $f6,$f6,$f0
    mul.s $f4,$f5,$f4
    .word 0xc440000c
    adda.s $f4,$f6
    madd.s $f2,$f3,$f2
    sub.s $f2,$f2,$f1
    neg.s $f0,$f0
    c.le.s $f2,$f0
    nop
    bc1tl L130714
    addiu a0,a0,20
    .word 0x92620028
    ori v0,v0,0x2
    b L130728
    .word 0xa2620028
    addiu a0,a0,20
L130714:
    nop
L130718:
    .word 0x70a01e28
    bnez v1,L1306b8
    addiu a1,a1,-1
    nop
L130728:
    .word 0x8e110018
    .word 0x8e220044
    .word 0x72202628
    jal fn_202b00
    .word 0xae62000c
    addiu v1,zero,1
    beq v0,v1,L130768
    nop
    .word 0x8e220044
    .word 0x8f838874
    .word 0x94450004
    jal fn_20eef0
    addu a0,s0,v1
    .word 0x8c420000
    b L130788
    .word 0xae620010
L130768:
    .word 0x8e220044
    .word 0x8f838878
    .word 0x94450004
    jal fn_20eef0
    addu a0,s1,v1
    .word 0x8c420000
    .word 0xae620010
    nop
L130788:
    .word 0x8e640014
    addiu v1,zero,-2
    .word 0x3c020033
    addiu v0,v0,-23008
    and v1,a0,v1
    .word 0xae630014
    .word 0x8c420000
    .word 0x8e030004
    .word 0x8e440000
    addiu a2,v0,32
    jal fn_1c7340
    addiu a1,v1,80
    addiu v0,zero,1
    .word 0xa262002a
    addiu v0,zero,4
    .word 0xa2620029
    .word 0x8f848578
    .word 0x3c020030
    addiu a2,v0,-23760
    .word 0x8f89886c
    addiu v1,zero,-16
    addu v0,s0,a0
    addiu v0,v0,15
    and t2,v0,v1
    .word 0x79440000
    .word 0x3c020030
    addiu a1,v0,-23792
    .word 0x3c020030
    addiu v1,v0,-23744
    .word 0x7d240000
    .word 0x79470010
    addiu t1,t1,16
    .word 0x3c083f80
    addiu v0,zero,7
    .word 0x7d270000
    .word 0x79470020
    addiu t1,t1,16
    .word 0x72002628
    .word 0x7d270000
    .word 0x79470030
    addiu t1,t1,16
    .word 0x7d270000
    .word 0x8f87886c
    addiu t1,t1,16
    .word 0xace8000c
    .word 0x78c60000
    .word 0x7d260000
    .word 0x78a50000
    addiu t1,t1,16
    .word 0x7d250000
    .word 0x78630000
    addiu t1,t1,16
    .word 0x7d230000
    addiu t1,t1,16
    .word 0xaf828868
    jal fn_1f7d70
    .word 0xaf89886c
    .word 0x70408e28
    bnez s1,L130884
    .word 0x72002628
    b L1309c0
    addiu v0,zero,1
    .word 0x72002628
L130884:
    jal fn_1fc0f0
    .word 0x72202e28
    .word 0x8e310000
    .word 0x70408628
    .word 0x3c028800
    ori a0,v0,0x501
    sll v0,s1,0x2
    addiu v0,v0,2
    jal fn_1dd1d0
    negu a1,v0
    .word 0x8f848690
    bnez a0,L1308c4
    sll v0,s1,0x2
    b L1309c0
    .word 0x70001628
    sll v0,s1,0x2
L1308c4:
    dsll32 v1,v0,0x0
    dsrl32 v1,v1,0x0
    .word 0x3c021000
    or a1,v1,v0
    sll v0,s1,0x12
    dsll32 v1,v0,0x0
    .word 0x3c026c00
    dsrl32 v1,v1,0x0
    ori v0,v0,0x2d0
    or v0,v1,v0
    dsll32 v1,v0,0x0
    .word 0x3c020100
    ori v0,v0,0x404
    or v0,v1,v0
    pcpyld a2,v0,a1
    .word 0x7c860000
    .word 0x8f828690
    .word 0x70001e28
    addiu v0,v0,16
    b L130980
    .word 0xaf828690
L130918:
    .word 0x7a060000
    .word 0x8f828690
    addiu v1,v1,1
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x7a060010
    .word 0x8f828690
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x7a060020
    .word 0x8f828690
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x7a060030
    .word 0x8f828690
    addiu s0,s0,64
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
L130980:
    slt v0,v1,s1
    bnez v0,L130918
    nop
    ori a1,zero,0xf000
    dsll a1,a1,0x10
    .word 0x70001628
    pcpyld a2,v0,a1
    .word 0x8f828690
    addiu a0,zero,1
    .word 0x70002e28
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    jal fn_1dd1d0
    .word 0xaf828690
    addiu v0,zero,1
L1309c0:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}

