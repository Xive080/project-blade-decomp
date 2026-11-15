extern void func_00112220(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffe0
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x8c820148
    beqz v0,L1765c8
    paddub s0,a0,zero
    .word 0x8e040140
    .word 0x8e050144
    jal func_00112220
    .word 0x26060008
    bnez v0,L175468
    nop
    b L1765cc
    addiu v0,zero,-1
L175468:
    .word 0x92020008
    bnez v0,L1765cc
    addiu v0,zero,-1
    .word 0x92030009
    addiu v0,zero,121
    beq v1,v0,L175da0
    nop
    addiu v0,zero,115
    beq v1,v0,L17575c
    nop
    addiu v0,zero,65
    beq v1,v0,L1754a4
    nop
    b L1765b4
    addiu v0,zero,3
L1754a4:
    .word 0x8e040000
    addiu v0,zero,1
    beq a0,v0,L1754e4
    nop
    addiu v0,zero,2
    beq a0,v0,L1754e4
    nop
    addiu v1,zero,4
    beq a0,v1,L1754e4
    nop
    addiu v1,zero,8
    beq a0,v1,L1754e4
    nop
    .word 0xae000000
    b L1765cc
    .word 0xae02014c
L1754e4:
    .word 0x8f828464
    and v0,v0,a0
    beqz v0,L175754
    addiu v0,zero,3
    .word 0x9203000a
    .word 0x3c023f80
    mtc1 v0,$f0
    addiu v0,zero,4
    sra v1,v1,0x7
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010150
    .word 0x9203000a
    sra v1,v1,0x5
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010154
    .word 0x9203000a
    sra v1,v1,0x4
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010158
    .word 0x9203000a
    sra v1,v1,0x6
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe601015c
    .word 0x9203000b
    sra v1,v1,0x4
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010160
    .word 0x9203000b
    sra v1,v1,0x5
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010164
    .word 0x9203000b
    sra v1,v1,0x6
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010168
    .word 0x9203000b
    sra v1,v1,0x7
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe601016c
    .word 0x9203000b
    sra v1,v1,0x2
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010178
    .word 0x9203000b
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe601017c
    .word 0x9203000b
    sra v1,v1,0x3
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010184
    .word 0x9203000b
    sra v1,v1,0x1
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010188
    .word 0x9203000a
    sra v1,v1,0x3
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010170
    .word 0x9203000a
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f0,$f0,$f1
    .word 0xe6000174
    .word 0x8e030000
    beq v1,v0,L1756d0
    nop
    addiu v0,zero,8
    bne v1,v0,L17571c
    nop
L1756d0:
    .word 0x9203000a
    .word 0x3c023f80
    mtc1 v0,$f1
    sra v0,v1,0x1
    andi v0,v0,0x1
    mtc1 v0,$f0
    nop
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    .word 0xe6000180
    .word 0x9202000a
    sra v0,v0,0x2
    andi v0,v0,0x1
    mtc1 v0,$f0
    nop
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    b L175724
    .word 0xe600018c
L17571c:
    .word 0xae000180
    .word 0xae00018c
L175724:
    .word 0x8e030000
    addiu v0,zero,1
    beq v1,v0,L1765c0
    addiu v0,zero,1
    .word 0xae000190
    .word 0xae000194
    .word 0xae000198
    .word 0xae00019c
    .word 0xae0001b0
    b L1765bc
    .word 0xae0001b4
    addiu v0,zero,3
L175754:
    b L1765d0
    .word 0x7bbf0010
L17575c:
    .word 0x8e040000
    addiu v0,zero,2
    beq a0,v0,L175790
    nop
    addiu v1,zero,4
    beq a0,v1,L175790
    nop
    addiu v1,zero,8
    beq a0,v1,L175790
    nop
    .word 0xae000000
    b L1765cc
    .word 0xae02014c
L175790:
    .word 0x8f828464
    and v0,v0,a0
    beqz v0,L175d98
    addiu v0,zero,3
    .word 0x9204000e
    .word 0xc60001a0
    mtc1 zero,$f2
    mtc1 a0,$f1
    nop
    c.lt.s $f0,$f2
    nop
    bc1f L175814
    cvt.s.w $f2,$f1
    slti v0,a0,5
    bnez v0,L1757dc
    nop
    slti at,a0,251
    bnez at,L1757e4
    nop
L1757dc:
    b L175890
    .word 0xae000190
L1757e4:
    bltz a0,L1757f8
    srl v1,a0,0x1
    b L175810
    .word 0x46001006
    srl v1,a0,0x1
L1757f8:
    andi v0,a0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L175810:
    .word 0xe60001a0
L175814:
    .word 0xc60301a0
    mtc1 zero,$f1
    sub.s $f0,$f3,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L175850
    .word 0x3c02437f
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L175890
    .word 0xe6000190
    .word 0x3c02437f
L175850:
    mtc1 v0,$f0
    nop
    sub.s $f0,$f0,$f3
    sub.s $f0,$f0,$f2
    c.le.s $f0,$f1
    nop
    bc1f L17588c
    nop
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L175890
    .word 0xe6000190
L17588c:
    .word 0xae000190
L175890:
    .word 0x9204000f
    .word 0xc60101a4
    mtc1 zero,$f0
    mtc1 a0,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L175900
    cvt.s.w $f2,$f2
    slti v0,a0,5
    bnez v0,L1758c8
    nop
    slti at,a0,251
    bnez at,L1758d0
    nop
L1758c8:
    b L17597c
    .word 0xae000194
L1758d0:
    bltz a0,L1758e4
    srl v1,a0,0x1
    b L1758fc
    .word 0x46001006
    srl v1,a0,0x1
L1758e4:
    andi v0,a0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L1758fc:
    .word 0xe60001a4
L175900:
    .word 0xc60301a4
    mtc1 zero,$f1
    sub.s $f0,$f3,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L17593c
    .word 0x3c02437f
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L17597c
    .word 0xe6000194
    .word 0x3c02437f
L17593c:
    mtc1 v0,$f0
    nop
    sub.s $f0,$f0,$f3
    sub.s $f0,$f0,$f2
    c.le.s $f0,$f1
    nop
    bc1f L175978
    nop
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L17597c
    .word 0xe6000194
L175978:
    .word 0xae000194
L17597c:
    .word 0x9204000c
    .word 0xc60101a8
    mtc1 zero,$f0
    mtc1 a0,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L1759ec
    cvt.s.w $f2,$f2
    slti v0,a0,5
    bnez v0,L1759b4
    nop
    slti at,a0,251
    bnez at,L1759bc
    nop
L1759b4:
    b L175a68
    .word 0xae000198
L1759bc:
    bltz a0,L1759d0
    srl v1,a0,0x1
    b L1759e8
    .word 0x46001006
    srl v1,a0,0x1
L1759d0:
    andi v0,a0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L1759e8:
    .word 0xe60001a8
L1759ec:
    .word 0xc60301a8
    mtc1 zero,$f1
    sub.s $f0,$f3,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L175a28
    .word 0x3c02437f
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L175a68
    .word 0xe6000198
    .word 0x3c02437f
L175a28:
    mtc1 v0,$f0
    nop
    sub.s $f0,$f0,$f3
    sub.s $f0,$f0,$f2
    c.le.s $f0,$f1
    nop
    bc1f L175a64
    nop
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L175a68
    .word 0xe6000198
L175a64:
    .word 0xae000198
L175a68:
    .word 0x9204000d
    .word 0xc60101ac
    mtc1 zero,$f0
    mtc1 a0,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L175ad8
    cvt.s.w $f2,$f2
    slti v0,a0,5
    bnez v0,L175aa0
    nop
    slti at,a0,251
    bnez at,L175aa8
    nop
L175aa0:
    b L175b54
    .word 0xae00019c
L175aa8:
    bltz a0,L175abc
    srl v1,a0,0x1
    b L175ad4
    .word 0x46001006
    srl v1,a0,0x1
L175abc:
    andi v0,a0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L175ad4:
    .word 0xe60001ac
L175ad8:
    .word 0xc60301ac
    mtc1 zero,$f1
    sub.s $f0,$f3,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L175b14
    .word 0x3c02437f
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L175b54
    .word 0xe600019c
    .word 0x3c02437f
L175b14:
    mtc1 v0,$f0
    nop
    sub.s $f0,$f0,$f3
    sub.s $f0,$f0,$f2
    c.le.s $f0,$f1
    nop
    bc1f L175b50
    nop
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L175b54
    .word 0xe600019c
L175b50:
    .word 0xae00019c
L175b54:
    .word 0x9203000a
    .word 0x3c023f80
    mtc1 v0,$f0
    addiu v0,zero,4
    sra v1,v1,0x7
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010150
    .word 0x9203000a
    sra v1,v1,0x5
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010154
    .word 0x9203000a
    sra v1,v1,0x4
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010158
    .word 0x9203000a
    sra v1,v1,0x6
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe601015c
    .word 0x9203000b
    sra v1,v1,0x4
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010160
    .word 0x9203000b
    sra v1,v1,0x5
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010164
    .word 0x9203000b
    sra v1,v1,0x6
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010168
    .word 0x9203000b
    sra v1,v1,0x7
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe601016c
    .word 0x9203000b
    sra v1,v1,0x2
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010178
    .word 0x9203000b
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe601017c
    .word 0x9203000b
    sra v1,v1,0x3
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010184
    .word 0x9203000b
    sra v1,v1,0x1
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010188
    .word 0x9203000a
    sra v1,v1,0x3
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f1,$f0,$f1
    .word 0xe6010170
    .word 0x9203000a
    andi v1,v1,0x1
    mtc1 v1,$f1
    nop
    cvt.s.w $f1,$f1
    sub.s $f0,$f0,$f1
    .word 0xe6000174
    .word 0x8e030000
    beq v1,v0,L175d30
    nop
    addiu v0,zero,8
    bne v1,v0,L175d7c
    nop
L175d30:
    .word 0x9203000a
    .word 0x3c023f80
    mtc1 v0,$f1
    sra v0,v1,0x1
    andi v0,v0,0x1
    mtc1 v0,$f0
    nop
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    .word 0xe6000180
    .word 0x9202000a
    sra v0,v0,0x2
    andi v0,v0,0x1
    mtc1 v0,$f0
    nop
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    b L175d84
    .word 0xe600018c
L175d7c:
    .word 0xae000180
    .word 0xae00018c
L175d84:
    addiu v0,zero,1
    .word 0xae0001b0
    b L1765bc
    .word 0xae0201b4
    addiu v0,zero,3
L175d98:
    b L1765cc
    nop
L175da0:
    .word 0x8e030000
    addiu v0,zero,8
    beq v1,v0,L175dc0
    nop
    addiu v0,zero,2
    .word 0xae000000
    b L1765cc
    .word 0xae02014c
L175dc0:
    .word 0x8f828464
    and v0,v0,v1
    beqz v0,L1765a8
    addiu v0,zero,3
    .word 0x9204000e
    .word 0xc60001a0
    mtc1 zero,$f2
    mtc1 a0,$f1
    nop
    c.lt.s $f0,$f2
    nop
    bc1f L175e44
    cvt.s.w $f2,$f1
    slti v0,a0,5
    bnez v0,L175e0c
    nop
    slti at,a0,251
    bnez at,L175e14
    nop
L175e0c:
    b L175ec0
    .word 0xae000190
L175e14:
    bltz a0,L175e28
    srl v1,a0,0x1
    b L175e40
    .word 0x46001006
    srl v1,a0,0x1
L175e28:
    andi v0,a0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L175e40:
    .word 0xe60001a0
L175e44:
    .word 0xc60301a0
    mtc1 zero,$f1
    sub.s $f0,$f3,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L175e80
    .word 0x3c02437f
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L175ec0
    .word 0xe6000190
    .word 0x3c02437f
L175e80:
    mtc1 v0,$f0
    nop
    sub.s $f0,$f0,$f3
    sub.s $f0,$f0,$f2
    c.le.s $f0,$f1
    nop
    bc1f L175ebc
    nop
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L175ec0
    .word 0xe6000190
L175ebc:
    .word 0xae000190
L175ec0:
    .word 0x9204000f
    .word 0xc60101a4
    mtc1 zero,$f0
    mtc1 a0,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L175f30
    cvt.s.w $f2,$f2
    slti v0,a0,5
    bnez v0,L175ef8
    nop
    slti at,a0,251
    bnez at,L175f00
    nop
L175ef8:
    b L175fac
    .word 0xae000194
L175f00:
    bltz a0,L175f14
    srl v1,a0,0x1
    b L175f2c
    .word 0x46001006
    srl v1,a0,0x1
L175f14:
    andi v0,a0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L175f2c:
    .word 0xe60001a4
L175f30:
    .word 0xc60301a4
    mtc1 zero,$f1
    sub.s $f0,$f3,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L175f6c
    .word 0x3c02437f
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L175fac
    .word 0xe6000194
    .word 0x3c02437f
L175f6c:
    mtc1 v0,$f0
    nop
    sub.s $f0,$f0,$f3
    sub.s $f0,$f0,$f2
    c.le.s $f0,$f1
    nop
    bc1f L175fa8
    nop
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L175fac
    .word 0xe6000194
L175fa8:
    .word 0xae000194
L175fac:
    .word 0x9204000c
    .word 0xc60101a8
    mtc1 zero,$f0
    mtc1 a0,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L17601c
    cvt.s.w $f2,$f2
    slti v0,a0,5
    bnez v0,L175fe4
    nop
    slti at,a0,251
    bnez at,L175fec
    nop
L175fe4:
    b L176098
    .word 0xae000198
L175fec:
    bltz a0,L176000
    srl v1,a0,0x1
    b L176018
    .word 0x46001006
    srl v1,a0,0x1
L176000:
    andi v0,a0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L176018:
    .word 0xe60001a8
L17601c:
    .word 0xc60301a8
    mtc1 zero,$f1
    sub.s $f0,$f3,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L176058
    .word 0x3c02437f
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L176098
    .word 0xe6000198
    .word 0x3c02437f
L176058:
    mtc1 v0,$f0
    nop
    sub.s $f0,$f0,$f3
    sub.s $f0,$f0,$f2
    c.le.s $f0,$f1
    nop
    bc1f L176094
    nop
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L176098
    .word 0xe6000198
L176094:
    .word 0xae000198
L176098:
    .word 0x9204000d
    .word 0xc60101ac
    mtc1 zero,$f0
    mtc1 a0,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L176108
    cvt.s.w $f2,$f2
    slti v0,a0,5
    bnez v0,L1760d0
    nop
    slti at,a0,251
    bnez at,L1760d8
    nop
L1760d0:
    b L176184
    .word 0xae00019c
L1760d8:
    bltz a0,L1760ec
    srl v1,a0,0x1
    b L176104
    .word 0x46001006
    srl v1,a0,0x1
L1760ec:
    andi v0,a0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L176104:
    .word 0xe60001ac
L176108:
    .word 0xc60301ac
    mtc1 zero,$f1
    sub.s $f0,$f3,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L176144
    .word 0x3c02437f
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L176184
    .word 0xe600019c
    .word 0x3c02437f
L176144:
    mtc1 v0,$f0
    nop
    sub.s $f0,$f0,$f3
    sub.s $f0,$f0,$f2
    c.le.s $f0,$f1
    nop
    bc1f L176180
    nop
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L176184
    .word 0xe600019c
L176180:
    .word 0xae00019c
L176184:
    .word 0x92020011
    bltz v0,L1761a0
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L1761b8
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L1761a0:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L1761b8:
    .word 0x3c02437f
    mtc1 v0,$f1
    nop
    div.s $f0,$f0,$f1
    nop
    .word 0xe6000150
    .word 0x92020010
    bltz v0,L1761ec
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L176204
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L1761ec:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L176204:
    .word 0x3c02437f
    mtc1 v0,$f0
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe6000154
    .word 0x92020012
    bltz v0,L176238
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L176250
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L176238:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L176250:
    .word 0x3c02437f
    mtc1 v0,$f0
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe6000158
    .word 0x92020013
    bltz v0,L176284
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L17629c
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L176284:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L17629c:
    .word 0x3c02437f
    mtc1 v0,$f0
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe600015c
    .word 0x92020014
    bltz v0,L1762d0
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L1762e8
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L1762d0:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L1762e8:
    .word 0x3c02437f
    mtc1 v0,$f0
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe6000160
    .word 0x92020015
    bltz v0,L17631c
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L176334
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L17631c:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L176334:
    .word 0x3c02437f
    mtc1 v0,$f0
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe6000164
    .word 0x92020016
    bltz v0,L176368
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L176380
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L176368:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L176380:
    .word 0x3c02437f
    mtc1 v0,$f0
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe6000168
    .word 0x92020017
    bltz v0,L1763b4
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L1763cc
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L1763b4:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L1763cc:
    .word 0x3c02437f
    mtc1 v0,$f0
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe600016c
    .word 0x92020018
    bltz v0,L176400
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L176418
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L176400:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L176418:
    .word 0x3c02437f
    mtc1 v0,$f0
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe6000178
    .word 0x9202001a
    bltz v0,L17644c
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L176464
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L17644c:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L176464:
    .word 0x3c02437f
    mtc1 v0,$f0
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe600017c
    .word 0x92020019
    bltz v0,L176498
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L1764b0
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L176498:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L1764b0:
    .word 0x3c02437f
    mtc1 v0,$f0
    nop
    div.s $f0,$f1,$f0
    nop
    .word 0xe6000184
    .word 0x9202001b
    bltz v0,L1764e4
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L1764fc
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L1764e4:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L1764fc:
    .word 0x3c02437f
    mtc1 v0,$f0
    .word 0x3c033f80
    div.s $f0,$f1,$f0
    addiu v0,zero,1
    mtc1 v1,$f1
    nop
    .word 0xe6000188
    .word 0x9203000a
    sra v1,v1,0x3
    andi v1,v1,0x1
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    .word 0xe6000170
    .word 0x9203000a
    andi v1,v1,0x1
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    .word 0xe6000174
    .word 0x9203000a
    sra v1,v1,0x1
    andi v1,v1,0x1
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    .word 0xe6000180
    .word 0x9203000a
    sra v1,v1,0x2
    andi v1,v1,0x1
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    .word 0xe600018c
    .word 0xae0201b0
    b L1765bc
    .word 0xae0201b4
    addiu v0,zero,3
L1765a8:
    b L1765cc
    nop
    addiu v0,zero,3
L1765b4:
    b L1765cc
    nop
L1765bc:
    addiu v0,zero,1
L1765c0:
    b L1765cc
    nop
L1765c8:
    addiu v0,zero,-1
L1765cc:
    .word 0x7bbf0010
L1765d0:
    .word 0x7bb00000
    jr ra
    .word 0x27bd0020
}
