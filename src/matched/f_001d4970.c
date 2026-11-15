extern void func_001c21a0(void);
extern void func_001d8240(void);
extern void func_001d8120(void);
extern void func_001d5d50(void);
extern void func_001d5ee0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-192
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s0,a1,zero
    paddub s8,a0,zero
    jal func_001c21a0
    paddub a0,s0,zero
    .word 0x8444001c
    .word 0x3c030033
    addiu s4,v1,-6592
    .word 0x3c030033
    addiu s5,v1,-6624
    addiu v1,zero,3
    .word 0x44840000
    nop
    cvt.s.w $f0,$f0
    .word 0xe6800018
    .word 0x8444001e
    .word 0x44840000
    nop
    cvt.s.w $f0,$f0
    .word 0xe680001c
    .word 0xc440000c
    cvt.s.w $f0,$f0
    .word 0xe6800010
    .word 0xc4400010
    cvt.s.w $f0,$f0
    .word 0xe6800014
    .word 0xc6000084
    .word 0xe680000c
    .word 0xc6000080
    .word 0xe6800008
    .word 0xc600008c
    .word 0xe6800000
    .word 0xc6000090
    .word 0xe6800004
    .word 0x8ea20000
    addiu a0,v0,20
    .word 0x8c420014
    bne v0,v1,L1d4a48
    .word 0x70009628
    addiu v0,zero,2
    .word 0xac820000
    .word 0x8ea20000
    .word 0x8c520018
    nop
L1d4a48:
    .word 0x8e430008
    addiu v0,zero,-1
    .word 0x7000be28
    .word 0x70008628
    .word 0x8c630000
    bne v1,v0,L1d4a6c
    .word 0x70008e28
    b L1d4aa0
    .word 0x70009e28
L1d4a6c:
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s2
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e420008
    .word 0x8c430000
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s2,v0
    addiu s3,v0,20
L1d4aa0:
    paddub a0,s2,zero
    addiu a1,zero,1
    jal func_001d8240
    paddub a2,s8,zero
    .word 0xafa200ac
    paddub a0,s2,zero
    addiu a1,zero,2
    jal func_001d8240
    paddub a2,s8,zero
    paddub a0,s2,zero
    paddub s6,v0,zero
    addiu a1,zero,3
    jal func_001d8240
    paddub a2,s8,zero
    .word 0x8c520008
    .word 0x8e4500b0
    bnez a1,L1d4af0
    addiu v0,zero,1
    b L1d5228
    .word 0x7bbf0090
L1d4af0:
    .word 0x8fa400ac
    jal func_001d8120
    addiu a2,zero,40
    .word 0x8e4500b0
    paddub a0,s6,zero
    paddub s6,v0,zero
    jal func_001d8120
    addiu a2,zero,64
    .word 0x8e4a0000
    .word 0x8e4300b0
    andi a1,t2,0x2
    beqz a1,L1d4b2c
    addiu a0,s2,80
    b L1d4b64
    addiu s7,zero,1
L1d4b2c:
    andi a1,t2,0x8
    beqz a1,L1d4b40
    nop
    b L1d4b64
    addiu s0,zero,1
L1d4b40:
    .word 0x924800a0
    .word 0x924700a1
    .word 0x924600a2
    .word 0x924500a3
    addiu t1,sp,188
    .word 0xa1280000
    .word 0xa1270001
    .word 0xa1260002
    .word 0xa1250003
L1d4b64:
    andi a1,t2,0x4
    beqz a1,L1d4b74
    nop
    addiu s1,zero,1
L1d4b74:
    .word 0x96670002
    .word 0x96c80002
    .word 0x94490002
    paddub t2,v1,zero
    .word 0x70002e28
    addiu a2,zero,-1
    beqz t2,L1d5140
    addiu v1,v1,-1
L1d4b94:
    .word 0x8e6b0008
    addiu t2,sp,176
    .word 0xc5620000
    .word 0xc5610004
    .word 0xc5600008
    .word 0xe5420000
    .word 0xe5410004
    .word 0xe5400008
    .word 0xc7ac00b0
    .word 0xc4810000
    .word 0xc7ad00b4
    .word 0xc4820010
    .word 0xc4880004
    .word 0xc4870014
    .word 0xc4840008
    mul.s $f11,$f12,$f1
    .word 0xc7ae00b8
    .word 0xc4890020
    .word 0xc4800030
    .word 0xc4860024
    mul.s $f10,$f13,$f2
    .word 0xc4810018
    .word 0xc4850034
    .word 0xc4830028
    .word 0x8eca0008
    adda.s $f11,$f10
    madd.s $f9,$f14,$f9
    .word 0xc4820038
    add.s $f0,$f0,$f9
    mul.s $f8,$f12,$f8
    .word 0xe5400000
    .word 0x8eca0008
    mul.s $f7,$f13,$f7
    adda.s $f8,$f7
    mul.s $f4,$f12,$f4
    mul.s $f1,$f13,$f1
    madd.s $f6,$f14,$f6
    adda.s $f4,$f1
    add.s $f1,$f5,$f6
    .word 0xe5410004
    madd.s $f3,$f14,$f3
    .word 0x8eca0008
    add.s $f2,$f2,$f3
    beqz s0,L1d4d54
    .word 0xe5420008
    .word 0x8e6a0008
    addiu t6,sp,188
    .word 0x914d000c
    .word 0x914c000d
    .word 0x914b000e
    .word 0x914a000f
    .word 0xa1cd0000
    .word 0xa1cc0001
    .word 0xa1cb0002
    .word 0xa1ca0003
    .word 0x93aa00bc
    bltz t2,L1d4c88
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4ca0
    cvt.s.w $f3,$f3
L1d4c88:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4ca0:
    .word 0x8eca0008
    .word 0xe5430010
    .word 0x93aa00bd
    bltz t2,L1d4cc0
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4cd8
    cvt.s.w $f3,$f3
L1d4cc0:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4cd8:
    .word 0x8eca0008
    .word 0xe5430014
    .word 0x93aa00be
    bltz t2,L1d4cf8
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4d10
    cvt.s.w $f3,$f3
L1d4cf8:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4d10:
    .word 0x8eca0008
    .word 0xe5430018
    .word 0x93aa00bf
    bltz t2,L1d4d30
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4d48
    cvt.s.w $f3,$f3
L1d4d30:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4d48:
    .word 0x8eca0008
    b L1d4e90
    .word 0xe543001c
L1d4d54:
    beqz s7,L1d4e68
    nop
    .word 0x8e6a0008
    addiu t6,sp,188
    .word 0x914d000c
    .word 0x914c000d
    .word 0x914b000e
    .word 0x914a000f
    .word 0xa1cd0000
    .word 0xa1cc0001
    .word 0xa1cb0002
    .word 0xa1ca0003
    .word 0x93aa00bc
    bltz t2,L1d4d9c
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4db4
    cvt.s.w $f3,$f3
L1d4d9c:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4db4:
    .word 0x8eca0008
    .word 0xe5430010
    .word 0x93aa00bd
    bltz t2,L1d4dd4
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4dec
    cvt.s.w $f3,$f3
L1d4dd4:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4dec:
    .word 0x8eca0008
    .word 0xe5430014
    .word 0x93aa00be
    bltz t2,L1d4e0c
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4e24
    cvt.s.w $f3,$f3
L1d4e0c:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4e24:
    .word 0x8eca0008
    .word 0xe5430018
    .word 0x93aa00bf
    bltz t2,L1d4e44
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4e5c
    cvt.s.w $f3,$f3
L1d4e44:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4e5c:
    .word 0x8eca0008
    b L1d4e90
    .word 0xe543001c
L1d4e68:
    .word 0x8eca0008
    .word 0x3c0b437f
    .word 0xad400010
    .word 0x8eca0008
    .word 0xad400014
    .word 0x8eca0008
    .word 0xad400018
    .word 0x8eca0008
    .word 0xad4b001c
    nop
L1d4e90:
    .word 0x93aa00bc
    bltz t2,L1d4ea8
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4ec0
    cvt.s.w $f3,$f3
L1d4ea8:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4ec0:
    .word 0x8c4a0008
    .word 0xe5430020
    .word 0x93aa00bd
    bltz t2,L1d4ee0
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4ef8
    cvt.s.w $f3,$f3
L1d4ee0:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4ef8:
    .word 0x8c4a0008
    .word 0xe5430024
    .word 0x93aa00be
    bltz t2,L1d4f18
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4f30
    cvt.s.w $f3,$f3
L1d4f18:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4f30:
    .word 0x8c4a0008
    .word 0xe5430028
    .word 0x93aa00bf
    bltz t2,L1d4f50
    srl t3,t2,0x1
    .word 0x448a1800
    b L1d4f68
    cvt.s.w $f3,$f3
L1d4f50:
    andi t2,t2,0x1
    or t3,t3,t2
    .word 0x448b1800
    nop
    cvt.s.w $f3,$f3
    add.s $f3,$f3,$f3
L1d4f68:
    .word 0x8c4a0008
    .word 0xe543002c
    .word 0xc6830008
    c.lt.s $f2,$f3
    nop
    bc1f L1d4f8c
    addiu t4,zero,16
    b L1d4fa8
    nop
L1d4f8c:
    .word 0xc683000c
    c.le.s $f2,$f3
    nop
    bc1t L1d4fa8
    .word 0x70006628
    b L1d4fa8
    addiu t4,zero,32
L1d4fa8:
    .word 0x44801800
    nop
    c.lt.s $f1,$f3
    nop
    bc1f L1d4fc8
    .word 0x3c0a3f80
    b L1d4fe8
    addiu t5,zero,4
L1d4fc8:
    .word 0x448a1800
    nop
    c.le.s $f1,$f3
    nop
    bc1t L1d4fe8
    .word 0x70006e28
    b L1d4fe8
    addiu t5,zero,8
L1d4fe8:
    .word 0x44801800
    nop
    c.lt.s $f0,$f3
    nop
    bc1f L1d5008
    .word 0x3c0a3f80
    b L1d5028
    addiu t3,zero,1
L1d5008:
    .word 0x448a1800
    nop
    c.le.s $f0,$f3
    nop
    bc1t L1d5028
    .word 0x70005e28
    b L1d5028
    addiu t3,zero,2
L1d5028:
    or t2,t5,t4
    or t3,t3,t2
    .word 0x8eca0008
    .word 0xa14b000c
    .word 0x8ecb0008
    .word 0x916a000c
    or a1,a1,t2
    bnez t2,L1d50dc
    and a2,a2,t2
    .word 0x8c4a0008
    .word 0x3c0b3f80
    .word 0xe542000c
    .word 0x8c4a0008
    .word 0xad4b0018
    .word 0xc6830010
    .word 0xc6840018
    .word 0x8c4a0008
    mul.s $f0,$f0,$f3
    add.s $f0,$f4,$f0
    .word 0xe5400000
    .word 0xc6800014
    .word 0xc683001c
    .word 0x8c4a0008
    mul.s $f0,$f1,$f0
    add.s $f0,$f3,$f0
    .word 0xe5400004
    .word 0xc6800000
    .word 0xc6810004
    .word 0x8c4a0008
    mul.s $f0,$f2,$f0
    add.s $f0,$f1,$f0
    beqz s1,L1d5110
    .word 0xe5400008
    .word 0x8e6b0008
    .word 0x8eca0008
    .word 0xc560001c
    .word 0xc5610020
    .word 0xe5400020
    .word 0x8eca0008
    .word 0xe5410024
    .word 0x8c4a0008
    .word 0xe5400010
    .word 0x8c4a0008
    b L1d5110
    .word 0xe5410014
L1d50dc:
    beqz s1,L1d5100
    nop
    .word 0x8e6a0008
    .word 0xc5410020
    .word 0xc540001c
    .word 0xe5600020
    .word 0x8eca0008
    .word 0xe5410024
    nop
L1d5100:
    .word 0x8c4a0008
    .word 0xad400018
    .word 0x8c4a0008
    .word 0xad400008
L1d5110:
    .word 0x8e6b0008
    paddub t2,v1,zero
    addiu v1,v1,-1
    addu t3,t3,a3
    .word 0xae6b0008
    .word 0x8ecb0008
    addu t3,t3,t0
    .word 0xaecb0008
    .word 0x8c4b0008
    addu t3,t3,t1
    bnez t2,L1d4b94
    .word 0xac4b0008
L1d5140:
    .word 0x8e4300b0
    .word 0xac430010
    .word 0x8e4200b0
    .word 0xaec20010
    .word 0xae4500b4
    beqz a2,L1d51c4
    .word 0xae4600b8
    .word 0x8ea20008
    beqz v0,L1d519c
    .word 0x8eb00000
    paddub a1,s8,zero
    paddub a0,s0,zero
    jal func_001d5d50
    addiu a2,zero,1
    beqz v0,L1d519c
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s5,16
    bnez v0,L1d519c
    nop
    .word 0xaea20008
L1d519c:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d5224
    addiu v0,zero,1
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
    b L1d5220
    nop
L1d51c4:
    .word 0x8ea20008
    beqz v0,L1d5204
    .word 0x8eb00000
    paddub a1,s8,zero
    paddub a0,s0,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d5204
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s5,16
    bnez v0,L1d5204
    nop
    .word 0xaea20008
L1d5204:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d5220
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
L1d5220:
    addiu v0,zero,1
L1d5224:
    .word 0x7bbf0090
L1d5228:
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,192
}


