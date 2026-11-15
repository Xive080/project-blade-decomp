asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c017000
    .word 0x8c233fc8
    addiu v0,zero,2
    bne v1,v0,L243818
    .word 0x70809e28
    .word 0xc6620018
    .word 0x44800800
    nop
    c.eq.s $f2,$f1
    nop
    bc1t L24344c
    nop
    .word 0x3c017000
    .word 0xc4203fa8
    sub.s $f0,$f2,$f0
    c.lt.s $f0,$f1
    nop
    bc1f L2433d8
    .word 0xe6600018
    .word 0xae600018
L2433d8:
    .word 0xc6610018
    .word 0x3c023e80
    .word 0x44821000
    .word 0x3c02437f
    .word 0x44820000
    nop
    div.s $f1,$f1,$f2
    .word 0x3c020030
    addiu v1,v0,-23668
    .word 0x3c020030
    addiu v0,v0,-23592
    mul.s $f0,$f0,$f1
    .word 0xe6600028
    .word 0xc663001c
    .word 0xc6620020
    .word 0xc6610024
    .word 0xc6600028
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0xc663001c
    .word 0xc6620020
    .word 0xc6610024
    .word 0xc6600028
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
L24344c:
    .word 0xc6610008
    .word 0x44801000
    nop
    c.eq.s $f1,$f2
    nop
    bc1t L2434e8
    nop
    .word 0x3c010030
    .word 0x8c226f88
    beqz v0,L2434e8
    nop
    .word 0x8c43003c
    addiu v0,zero,2
    beq v1,v0,L2434e8
    nop
    .word 0x3c027000
    ori v0,v0,0x3fa8
    .word 0xc4400000
    .word 0x3c010030
    sub.s $f0,$f1,$f0
    .word 0xe6600008
    .word 0xc42171bc
    .word 0x3c017000
    .word 0xc4203fa8
    add.s $f0,$f1,$f0
    .word 0x3c010030
    .word 0xe42071bc
    .word 0xc6600008
    c.lt.s $f0,$f2
    nop
    bc1f L2434e8
    nop
    .word 0xae600008
    .word 0x8e620000
    .word 0x72602628
    .word 0x70002e28
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
L2434e8:
    .word 0xc6610010
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L243654
    addiu s0,zero,2
    .word 0x3c017000
    .word 0x8e620004
    .word 0x8c233fc0
    .word 0x70002628
    andi v0,v0,0x8
    beqz v0,L243550
    andi a1,v1,0x1
    .word 0xae600010
    .word 0x8e620000
    addiu a1,zero,4
    .word 0x72602628
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
    .word 0x8e630004
    addiu v0,zero,-9
    and v0,v1,v0
    b L243650
    .word 0xae620004
L243550:
    .word 0x3c010030
    .word 0x8c2270d8
    beqz v0,L243590
    nop
    .word 0x3c010030
    .word 0x8c236f84
    .word 0x3c020001
    and v0,v1,v0
    bnez v0,L243590
    nop
    .word 0x3c010030
    .word 0x8c236f88
    ori v0,zero,32768
    .word 0x8c63003c
    bne v1,v0,L2435a8
    nop
L243590:
    .word 0x3c010030
    .word 0x8c226f84
    addiu a0,zero,1
    ori v0,v0,0x4
    .word 0x3c010030
    .word 0xac226f84
L2435a8:
    .word 0x3c010030
    .word 0x8c227688
    beqz v0,L2435e8
    nop
    .word 0x3c010030
    .word 0x8c237534
    .word 0x3c020001
    and v0,v1,v0
    bnez v0,L2435e8
    nop
    .word 0x3c010030
    .word 0x8c237538
    ori v0,zero,32768
    .word 0x8c63003c
    bne v1,v0,L243600
    nop
L2435e8:
    .word 0x3c010030
    .word 0x8c227534
    addiu a1,zero,1
    ori v0,v0,0x4
    .word 0x3c010030
    .word 0xac227534
L243600:
    beqz a0,L243650
    nop
    beqz a1,L243650
    nop
    .word 0x3c017000
    .word 0xc6610010
    .word 0xc4203fa8
    .word 0x44801000
    sub.s $f0,$f1,$f0
    c.le.s $f0,$f2
    nop
    bc1f L243650
    .word 0xe6600010
    .word 0xae600010
    .word 0x8e620000
    addiu a1,zero,4
    .word 0x72602628
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
L243650:
    addiu s0,zero,2
L243654:
    .word 0x72001628
    beqz v0,L243818
    addiu s0,s0,-1
    addiu v0,zero,1456
    .word 0x02021818
    .word 0x3c020030
    addiu v0,v0,27648
    addu s1,v0,v1
    sll v0,s0,0x2
    addu s2,s3,v0
L24367c:
    .word 0x8e230384
    .word 0x3c020001
    and v0,v1,v0
    beqz v0,L24374c
    addiu a2,s1,896
    .word 0x3c017000
    .word 0xc4223fa8
    .word 0x3c024000
    .word 0x44820800
    .word 0xc640002c
    .word 0x3c023f80
    .word 0x44821800
    nop
    div.s $f1,$f2,$f1
    add.s $f0,$f0,$f1
    c.lt.s $f0,$f3
    nop
    bc1t L2436e0
    .word 0xe640002c
    .word 0xae42002c
    .word 0x8e620000
    addiu a1,zero,2
    .word 0x8c420004
    jalr ra,v0
    .word 0x72602628
L2436e0:
    .word 0x3c02002f
    addiu v0,v0,-32064
    .word 0x78430000
    addiu a0,sp,80
    .word 0x7c830000
    .word 0xc640002c
    .word 0x3c02437f
    .word 0x44820800
    sll v0,s0,0x3
    addu v0,v0,s0
    mul.s $f0,$f1,$f0
    sll v0,v0,0x1
    addu v0,v0,s0
    sll v1,v0,0x2
    .word 0xe7a0005c
    .word 0xc4830000
    .word 0x3c020030
    addiu v0,v0,-23712
    .word 0xc4820004
    .word 0xc4810008
    .word 0xc480000c
    addu v0,v0,v1
    .word 0xe443002c
    .word 0xe4420030
    .word 0xe4410034
    b L243800
    .word 0xe4400038
L24374c:
    .word 0xc643002c
    .word 0x44801000
    nop
    c.eq.s $f3,$f2
    nop
    bc1t L243804
    .word 0x72001628
    .word 0x3c017000
    .word 0xc4213fa8
    .word 0x3c023e80
    .word 0x44820000
    nop
    div.s $f0,$f1,$f0
    sub.s $f0,$f3,$f0
    c.le.s $f0,$f2
    nop
    bc1f L243798
    .word 0xe640002c
    .word 0xae40002c
L243798:
    .word 0x3c02002f
    addiu v0,v0,-32048
    .word 0x78430000
    addiu a0,sp,96
    .word 0x7c830000
    .word 0xc640002c
    .word 0x3c02437f
    .word 0x44820800
    sll v0,s0,0x3
    addu v0,v0,s0
    mul.s $f0,$f1,$f0
    sll v0,v0,0x1
    addu v0,v0,s0
    sll v1,v0,0x2
    .word 0xe7a0006c
    .word 0xc4830000
    .word 0x3c020030
    addiu v0,v0,-23712
    .word 0xc4820004
    .word 0xc4810008
    .word 0xc480000c
    addu v0,v0,v1
    .word 0xe443002c
    .word 0xe4420030
    .word 0xe4410034
    .word 0xe4400038
L243800:
    .word 0x72001628
L243804:
    addiu s1,s1,-1456
    addiu s2,s2,-4
    bnez v0,L24367c
    addiu s0,s0,-1
    nop
L243818:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,112
}
