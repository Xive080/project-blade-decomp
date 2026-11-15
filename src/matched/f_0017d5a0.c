extern void func_00127130(void);
extern void func_0017ddb0(void);
extern void func_001ce160(void);
asm void func(void) {
.set noreorder
.set noat
    addiu sp,sp,-1344
    .word 0x7fbf0080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0xc4d60000
    .word 0x70e0ae28
    .word 0x7100a628
    .word 0x70a0b628
    .word 0x3c020018
    .word 0x70c03e28
    .word 0xafa000a8
    .word 0xafa000a0
    addiu t0,sp,144
    addiu a1,v0,-8192
    .word 0x71209e28
    .word 0xafaa00a4
    jal func_00127130
    .word 0x72c03628
    .word 0x8fa200a8
    beqz v0,L17dd70
    .word 0x70001628
    .word 0xaea00008
    .word 0xaea00004
    .word 0xaea00000
    .word 0xae800008
    .word 0xae800004
    mul.s $f21,$f22,$f22
    .word 0xae800000
    b L17dce8
    .word 0x70008e28
L17d638:
    addu v0,v0,s1
    .word 0x44800000
    sll v0,v0,0x2
    addu v0,v0,s1
    sll v0,v0,0x2
    addu v0,v0,sp
    addiu s0,v0,172
    .word 0xc6020004
    .word 0xc6010000
    addiu v1,zero,1
    addiu v0,zero,3
    mul.s $f1,$f2,$f1
    .word 0xe7a104d0
    .word 0xc6020008
    .word 0xc6010000
    mul.s $f1,$f2,$f1
    .word 0xe7a104d4
    .word 0xc602000c
    .word 0xc6010000
    mul.s $f1,$f2,$f1
    .word 0xe7a104d8
    .word 0xc6c20000
    .word 0xc7a104d0
    sub.s $f1,$f2,$f1
    .word 0xe7a104d0
    .word 0xc6c20004
    .word 0xc7a104d4
    sub.s $f1,$f2,$f1
    .word 0xe7a104d4
    .word 0xc6c20008
    .word 0xc7a104d8
    sub.s $f1,$f2,$f1
    .word 0xe7a104d8
    .word 0xc7ab04d0
    .word 0xc7aa04d4
    .word 0xc7a904d8
    b L17d808
    .word 0x70009628
L17d6d0:
    .word 0x00e2001a
    sll a0,s2,0x1
    addu a0,a0,s2
    sll a0,a0,0x2
    addu a2,a0,s0
    .word 0xc4c10010
    .word 0x00002810
    .word 0x00e2001a
    sll a0,a1,0x1
    addu a0,a0,a1
    sll a0,a0,0x2
    addu a0,a0,s0
    .word 0xc4820010
    sub.s $f1,$f2,$f1
    .word 0xe7a104f0
    .word 0xc4c10014
    .word 0x00002810
    .word 0x00e2001a
    sll a0,a1,0x1
    addu a0,a0,a1
    sll a0,a0,0x2
    addu a0,a0,s0
    .word 0xc4820014
    sub.s $f1,$f2,$f1
    .word 0xe7a104f4
    .word 0xc4c10018
    .word 0x00002810
    sll a0,a1,0x1
    addu a0,a0,a1
    sll a0,a0,0x2
    addu a0,a0,s0
    .word 0xc4820018
    sub.s $f1,$f2,$f1
    .word 0xe7a104f8
    .word 0xc4c10010
    .word 0xc7a804f8
    .word 0xc7a704f4
    .word 0xc7a604f0
    sub.s $f1,$f11,$f1
    .word 0xe7a10500
    .word 0xc4c10014
    sub.s $f1,$f10,$f1
    .word 0xe7a10504
    .word 0xc4c10018
    sub.s $f1,$f9,$f1
    .word 0xe7a10508
    .word 0xc6040008
    .word 0xc602000c
    .word 0xc7a50500
    .word 0xc7a30504
    .word 0xc7a10508
    mula.s $f4,$f8
    msub.s $f2,$f2,$f7
    .word 0xe7a204c0
    .word 0xc604000c
    .word 0xc6020004
    mula.s $f4,$f6
    msub.s $f2,$f2,$f8
    .word 0xe7a204c4
    .word 0xc6040004
    .word 0xc6020008
    mula.s $f4,$f7
    msub.s $f2,$f2,$f6
    .word 0xe7a204c8
    .word 0xc7a604c0
    .word 0xc7a404c4
    .word 0xc7a204c8
    mul.s $f5,$f6,$f5
    mul.s $f3,$f4,$f3
    adda.s $f5,$f3
    madd.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    .word 0x45020003
    addiu s2,s2,1
    .word 0x70001e28
    addiu s2,s2,1
L17d804:
    nop
L17d808:
    slti at,s2,3
    beqz at,L17d820
    nop
    bnez v1,L17d6d0
    addiu a3,s2,1
    nop
L17d820:
    bnez v1,L17dcd0
    .word 0x3c027f7f
    ori v0,v0,0xffff
    .word 0x4482a000
    b L17db38
    .word 0x70009628
L17d838:
    addiu a3,zero,3
    .word 0x0107001a
    sll v0,s2,0x1
    addu v0,v0,s2
    sll v0,v0,0x2
    addu a2,v0,s0
    addiu a0,sp,1264
    .word 0xc4c00010
    .word 0x70802e28
    .word 0x00001810
    .word 0x0107001a
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s0
    .word 0xc4410010
    sub.s $f0,$f1,$f0
    .word 0xe7a004f0
    .word 0xc4c00014
    .word 0x00001810
    .word 0x0107001a
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s0
    .word 0xc4410014
    sub.s $f0,$f1,$f0
    .word 0xe7a004f4
    .word 0xc4c00018
    .word 0x00001810
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s0
    .word 0xc4410018
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe7a004f8
    sll v0,s2,0x1
    addu v0,v0,s2
    .word 0xc7a304d0
    sll v0,v0,0x2
    addu v1,v0,s0
    .word 0xc7a204d4
    .word 0xc4660010
    .word 0xc7a104d8
    .word 0xc7ab04f0
    .word 0xc7a804f4
    .word 0xc7a504f8
    .word 0x44802000
    sub.s $f6,$f3,$f6
    .word 0xe7a60500
    .word 0xc4660014
    sub.s $f6,$f2,$f6
    .word 0xe7a60504
    .word 0xc4660018
    sub.s $f6,$f1,$f6
    .word 0xe7a60508
    .word 0xc7ac0500
    .word 0xc7a90504
    .word 0xc7a60508
    mul.s $f10,$f12,$f11
    mul.s $f7,$f9,$f8
    adda.s $f10,$f7
    madd.s $f7,$f6,$f5
    c.lt.s $f7,$f4
    nop
    bc1f L17d990
    nop
    mul.s $f1,$f12,$f12
    mul.s $f0,$f9,$f9
    adda.s $f1,$f0
    madd.s $f7,$f6,$f6
    c.lt.s $f7,$f20
    nop
    .word 0x45020073
    addiu s2,s2,1
    .word 0xc4620010
    .word 0xc4610014
    .word 0xc4600018
    addiu v0,sp,1248
    mov.s $f20,$f7
    .word 0xe4420000
    .word 0xe4410004
    b L17db30
    .word 0xe4400008
L17d990:
    c.le.s $f7,$f0
    nop
    bc1t L17da84
    mul.s $f0,$f11,$f7
    addiu a1,s2,1
    addiu a0,zero,3
    .word 0x00a4001a
    nop
    nop
    .word 0x00001810
    .word 0x00a4001a
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s0
    .word 0xc4400010
    sub.s $f0,$f3,$f0
    .word 0xe7a00510
    .word 0x00001810
    .word 0x00a4001a
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s0
    .word 0xc4400014
    sub.s $f0,$f2,$f0
    .word 0xe7a00514
    .word 0x00001810
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s0
    .word 0xc4400018
    sub.s $f0,$f1,$f0
    .word 0xe7a00518
    .word 0xc7a20510
    .word 0xc7a10514
    .word 0xc7a00518
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f7,$f0,$f0
    c.lt.s $f7,$f20
    nop
    bc1f L17db30
    nop
    .word 0x00a4001a
    addiu v0,sp,1248
    mov.s $f20,$f7
    .word 0x00002010
    sll v1,a0,0x1
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v1,s0
    .word 0xc4620010
    .word 0xc4610014
    .word 0xc4600018
    .word 0xe4420000
    .word 0xe4410004
    b L17db30
    .word 0xe4400008
L17da84:
    .word 0xe7a00510
    mul.s $f0,$f8,$f7
    .word 0xe7a00514
    mul.s $f0,$f5,$f7
    .word 0xe7a00518
    .word 0xc4640010
    .word 0xc7a00510
    add.s $f0,$f0,$f4
    .word 0xe7a00510
    .word 0xc4640014
    .word 0xc7a00514
    add.s $f0,$f0,$f4
    .word 0xe7a00514
    .word 0xc4640018
    .word 0xc7a00518
    add.s $f0,$f0,$f4
    .word 0xe7a00518
    .word 0xc7a50510
    .word 0xc7a40514
    .word 0xc7a00518
    sub.s $f3,$f3,$f5
    sub.s $f2,$f2,$f4
    .word 0xe7a30500
    sub.s $f0,$f1,$f0
    .word 0xe7a20504
    .word 0xe7a00508
    .word 0xc7a20500
    .word 0xc7a10504
    .word 0xc7a00508
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f7,$f0,$f0
    c.lt.s $f7,$f20
    nop
    bc1f L17db30
    addiu a0,sp,1296
    mov.s $f20,$f7
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,1248
    .word 0xfc620000
    .word 0xe4600008
L17db30:
    addiu s2,s2,1
L17db34:
    nop
L17db38:
    slti v0,s2,3
    bnez v0,L17d838
    addiu t0,s2,1
    .word 0xc7a304e0
    .word 0xc6c00000
    .word 0x3c02bf80
    .word 0x44824800
    .word 0x3c034000
    .word 0xc7a204e4
    .word 0xc7a104e8
    sub.s $f0,$f3,$f0
    .word 0x3c024080
    .word 0xe7a00520
    .word 0xc6c40004
    .word 0x44834000
    .word 0x44820000
    .word 0x44801800
    nop
    sub.s $f2,$f2,$f4
    .word 0xe7a20524
    .word 0xc6c20008
    sub.s $f1,$f1,$f2
    .word 0xe7a10528
    .word 0xc6040004
    .word 0xc7a20520
    .word 0xc7a10524
    .word 0xc7a50528
    mul.s $f4,$f9,$f4
    .word 0xe7a40530
    .word 0xc6040008
    mul.s $f7,$f8,$f2
    mul.s $f4,$f9,$f4
    .word 0xe7a40534
    .word 0xc604000c
    mul.s $f6,$f8,$f1
    mul.s $f4,$f9,$f4
    .word 0xe7a40538
    .word 0xc7ab0530
    .word 0xc7aa0534
    .word 0xc7a90538
    mul.s $f4,$f8,$f5
    mul.s $f7,$f7,$f11
    mul.s $f6,$f6,$f10
    mul.s $f11,$f11,$f11
    mul.s $f10,$f10,$f10
    adda.s $f11,$f10
    madd.s $f10,$f9,$f9
    adda.s $f7,$f6
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    madd.s $f4,$f4,$f9
    adda.s $f2,$f1
    madd.s $f1,$f5,$f5
    mul.s $f0,$f0,$f10
    sub.s $f1,$f1,$f21
    mula.s $f4,$f4
    msub.s $f0,$f0,$f1
    c.le.s $f0,$f3
    nop
    bc1t L17dcc8
    nop
    nop
    nop
    .word 0x46000144
    neg.s $f0,$f4
    add.s $f2,$f0,$f5
    mul.s $f1,$f8,$f10
    div.s $f2,$f2,$f1
    sub.s $f0,$f0,$f5
    nop
    div.s $f1,$f0,$f1
    nop
    nop
    c.lt.s $f2,$f3
    nop
    bc1f L17dc74
    nop
    b L17dca8
    nop
L17dc74:
    c.lt.s $f1,$f3
    nop
    bc1f L17dc8c
    nop
    b L17dca8
    mov.s $f1,$f2
L17dc8c:
    c.le.s $f2,$f1
    nop
    bc1t L17dca4
    nop
    b L17dca8
    mov.s $f1,$f2
L17dca4:
    nop
L17dca8:
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    .word 0x4503000a
    addiu s1,s1,1
    b L17dce0
    .word 0xe6010000
L17dcc8:
    b L17dce0
    .word 0xae000000
L17dcd0:
    .word 0xc6000000
    mul.s $f0,$f22,$f0
    sub.s $f0,$f22,$f0
    .word 0xe6000000
L17dce0:
    addiu s1,s1,1
L17dce4:
    nop
L17dce8:
    .word 0x8fa500a8
    slt v0,s1,a1
    bnez v0,L17d638
    sll v0,s1,0x1
    addiu a0,sp,172
    .word 0x72a03e28
    jal func_0017ddb0
    .word 0x72803628
    beqz v0,L17dd6c
    nop
    beqz s3,L17dd20
    nop
    .word 0x8fa300a0
    .word 0xae630000
L17dd20:
    .word 0xc6800000
    .word 0x44800800
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L17dd70
    nop
    .word 0xc6800004
    c.eq.s $f0,$f1
    nop
    bc1f L17dd70
    nop
    .word 0xc6800008
    c.eq.s $f0,$f1
    nop
    bc1f L17dd70
    nop
    b L17dd70
    .word 0x70001628
L17dd6c:
    .word 0x70001628
L17dd70:
    .word 0x7bbf0080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,1344
}
