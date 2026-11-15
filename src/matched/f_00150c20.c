extern void func_001a8d50(void);
extern void func_001512d0(void);
extern void func_00126dd0(void);
extern void func_001a8e80(void);
extern void func_001a8600(void);
extern void func_001a8850(void);
extern void func_001c3b70(void);
extern void func_001a8b70(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8c820518
    addiu s0,zero,-1
    paddub s1,a1,zero
    bnez v0,L150c58
    paddub s2,a0,zero
    b L1512ac
    addiu v0,zero,1
L150c58:
    .word 0x8c420270
    bnez v0,L150cc4
    nop
    .word 0x8e43003c
    addiu v0,zero,8192
    beq v1,v0,L150cc4
    nop
    .word 0x8e4216a4
    beq v0,s0,L150c94
    nop
    jal func_001a8d50
    .word 0x8e44169c
    .word 0xae40169c
    paddub v0,s0,zero
    .word 0xae4216a4
L150c94:
    .word 0x8e4316ac
    addiu v0,zero,-1
    beq v1,v0,L150cbc
    addiu v0,zero,1
    jal func_001a8d50
    .word 0x8e4416a0
    addiu v0,zero,-1
    .word 0xae4016a0
    .word 0xae4216ac
    addiu v0,zero,1
L150cbc:
    b L1512b0
    .word 0x7bbf0050
L150cc4:
    .word 0x8e43003c
    addiu v0,zero,8192
    bne v1,v0,L150d5c
    .word 0x70001e28
    .word 0x8e420518
    .word 0x8c430074
    beqz v1,L150d00
    nop
    .word 0x8c420070
    bnez v0,L150d00
    nop
    jal func_001512d0
    .word 0x8c64000c
    b L150d44
    paddub s0,v0,zero
L150d00:
    .word 0x8e420518
    .word 0x8c420070
    beqzl v0,L150d48
    addiu v0,zero,-1
    .word 0x8c430000
    .word 0x3c020008
    beql v1,v0,L150d44
    .word 0x70008628
    .word 0x3c020004
    beql v1,v0,L150d38
    addiu s0,zero,11
    b L150d44
    nop
    addiu s0,zero,11
L150d38:
    b L150d44
    nop
    .word 0x70008628
L150d44:
    addiu v0,zero,-1
L150d48:
    bne s0,v0,L150ddc
    nop
    b L150ddc
    .word 0x70008628
    .word 0x70001e28
L150d5c:
    b L150d8c
    slti v0,v1,4
    sll v0,v1,0x2
L150d68:
    addu v0,v0,s2
    .word 0x3c010001
    addu at,v0,at
    .word 0x8c22ea74
    bnez v0,L150d9c
    addiu v0,zero,4
    addiu v1,v1,1
    nop
    slti v0,v1,4
L150d8c:
    bnez v0,L150d68
    sll v0,v1,0x2
    nop
    addiu v0,zero,4
L150d9c:
    bne v1,v0,L150db0
    sll v0,v1,0x2
    b L1512ac
    .word 0x70001628
    sll v0,v1,0x2
L150db0:
    addu v0,v0,s2
    .word 0x3c010001
    addu at,v0,at
    jal func_001512d0
    .word 0x8c24ea94
    paddub s0,v0,zero
    addiu v0,zero,-1
    bne s0,v0,L150ddc
    nop
    b L1512ac
    .word 0x70001628
L150ddc:
    .word 0x8e43003c
    addiu v0,zero,8192
    bne v1,v0,L150ec4
    nop
    .word 0x8e4316a4
    beq s0,v1,L150e40
    nop
    addiu v0,zero,-1
    beq v1,v0,L150e10
    .word 0x3c027000
    jal func_001a8d50
    .word 0x8e44169c
    .word 0x3c027000
L150e10:
    .word 0xae5016a4
    ori v0,v0,0x3ed0
    .word 0x8c440108
    paddub a1,s0,zero
    .word 0x70003628
    .word 0x8e420518
    .word 0x8c470000
    jal func_00126dd0
    .word 0x70004628
    .word 0xae42169c
    jal func_001a8e80
    .word 0x8e44169c
L150e40:
    .word 0x8e44169c
    addiu a1,s1,48
    jal func_001a8600
    .word 0x70003628
    .word 0x8e420518
    .word 0x44800000
    .word 0xc441009c
    c.lt.s $f1,$f0
    nop
    bc1tl L150e78
    neg.s $f1,$f1
    b L150e7c
    .word 0x3c023dcc
    neg.s $f1,$f1
L150e78:
    .word 0x3c023dcc
L150e7c:
    ori v0,v0,0xcccd
    .word 0x44820000
    .word 0x8e44169c
    mul.s $f1,$f0,$f1
    .word 0x3c023f80
    .word 0x44820000
    jal func_001a8850
    add.s $f12,$f0,$f1
    .word 0x8e4316ac
    addiu v0,zero,-1
    beq v1,v0,L150f4c
    nop
    jal func_001a8d50
    .word 0x8e4416a0
    addiu v0,zero,-1
    .word 0xae4016a0
    b L150f4c
    .word 0xae4216ac
L150ec4:
    .word 0x8e4316ac
    beq s0,v1,L150f18
    nop
    addiu v0,zero,-1
    beq v1,v0,L150ee8
    .word 0x3c027000
    jal func_001a8d50
    .word 0x8e4416a0
    .word 0x3c027000
L150ee8:
    .word 0xae5016ac
    ori v0,v0,0x3ed0
    .word 0x8c440108
    addiu a2,zero,3
    paddub a1,s0,zero
    .word 0x8e420518
    .word 0x8c470000
    jal func_00126dd0
    .word 0x70004628
    .word 0xae4216a0
    jal func_001a8e80
    .word 0x8e4416a0
L150f18:
    .word 0x8e4416a0
    addiu a1,s1,48
    jal func_001a8600
    .word 0x70003628
    .word 0x8e4316a4
    addiu v0,zero,-1
    beq v1,v0,L150f4c
    nop
    jal func_001a8d50
    .word 0x8e44169c
    addiu v0,zero,-1
    .word 0xae40169c
    .word 0xae4216a4
L150f4c:
    .word 0x8e4416a8
    addiu v0,zero,-1
    beq a0,v0,L1511a8
    nop
    jal func_001512d0
    nop
    paddub s0,v0,zero
    .word 0x8e4216b4
    bne s0,v0,L150fb4
    addiu v0,zero,-1
    .word 0x3c027000
    ori v0,v0,0x3ed0
    .word 0xc44200e0
    .word 0xc64116b0
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    sub.s $f1,$f2,$f1
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L150fb0
    nop
    addiu s0,zero,-1
    .word 0xe64216b0
L150fb0:
    addiu v0,zero,-1
L150fb4:
    beq s0,v0,L1511a4
    addiu v0,zero,-1
    .word 0x3c027000
    ori v0,v0,0x3ed0
    .word 0xc45400e0
    .word 0x8c440108
    addiu a2,zero,1
    paddub a1,s0,zero
    .word 0x8e420518
    .word 0x8c470000
    jal func_00126dd0
    paddub t0,a2,zero
    paddub s3,v0,zero
    addiu a1,s1,48
    paddub a0,s3,zero
    jal func_001a8600
    .word 0x70003628
    jal func_001a8e80
    paddub a0,s3,zero
    .word 0x3c010030
    .word 0x8c223e38
    jalr ra,v0
    paddub a0,s2,zero
    jal func_001c3b70
    paddub a0,v0,zero
    .word 0xc4450010
    .word 0xc64416bc
    .word 0xc4430014
    .word 0xc64216c0
    .word 0xc4410018
    .word 0xc64016c4
    mul.s $f4,$f5,$f4
    mul.s $f2,$f3,$f2
    adda.s $f4,$f2
    madd.s $f0,$f1,$f0
    mul.s $f0,$f5,$f0
    .word 0xe7a00060
    .word 0xc4450010
    .word 0xc64416bc
    .word 0xc4430014
    .word 0xc64216c0
    .word 0xc4410018
    .word 0xc64016c4
    mul.s $f4,$f5,$f4
    mul.s $f2,$f3,$f2
    adda.s $f4,$f2
    madd.s $f0,$f1,$f0
    mul.s $f0,$f3,$f0
    .word 0xe7a00064
    .word 0xc4450010
    .word 0xc64416bc
    .word 0xc4430014
    .word 0xc64216c0
    .word 0xc4410018
    .word 0xc64016c4
    mul.s $f4,$f5,$f4
    mul.s $f2,$f3,$f2
    adda.s $f4,$f2
    madd.s $f0,$f1,$f0
    mul.s $f0,$f1,$f0
    .word 0xe7a00068
    .word 0xc64116bc
    .word 0xc7a00060
    sub.s $f0,$f1,$f0
    .word 0xe7a00060
    .word 0xc64116c0
    .word 0xc7a00064
    sub.s $f0,$f1,$f0
    .word 0xe7a00064
    .word 0xc64116c4
    .word 0xc7a00068
    sub.s $f0,$f1,$f0
    .word 0xe7a00068
    .word 0xc7a20060
    .word 0xc7a10064
    .word 0xc7a00068
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f0,$f0,$f0
    sqrt.s $f2,$f0
    .word 0x3c024150
    .word 0x44820000
    .word 0x44800800
    nop
    div.s $f2,$f2,$f0
    nop
    nop
    c.lt.s $f2,$f1
    nop
    bc1f L151140
    .word 0x3c023f80
    c.eq.s $f1,$f1
    nop
    bc1t L151134
    .word 0x46000886
L151134:
    b L151174
    .word 0xc64016c8
    .word 0x3c023f80
L151140:
    .word 0x44820000
    nop
    c.le.s $f2,$f0
    nop
    bc1t L151170
    nop
    c.eq.s $f0,$f1
    nop
    bc1t L151168
    .word 0x46000086
L151168:
    b L151170
    nop
L151170:
    .word 0xc64016c8
L151174:
    c.le.s $f2,$f0
    nop
    bc1t L151188
    nop
    .word 0xe64216c8
L151188:
    .word 0xc6600020
    paddub a0,s3,zero
    jal func_001a8b70
    mul.s $f12,$f0,$f2
    .word 0xae5016b4
    .word 0xe65416b0
    addiu v0,zero,-1
L1511a4:
    .word 0xae4216a8
L1511a8:
    .word 0x8e4216b8
    beqz v0,L1512ac
    addiu v0,zero,1
    addiu v0,zero,-1
    beq s0,v0,L1512a8
    nop
    .word 0x3c027000
    ori v0,v0,0x3ed0
    .word 0x8c440108
    addiu a2,zero,2
    addiu t0,zero,1
    .word 0x8e420518
    .word 0x8c470000
    jal func_00126dd0
    paddub a1,s0,zero
    paddub s0,v0,zero
    addiu a1,s1,48
    paddub a0,s0,zero
    jal func_001a8600
    .word 0x70003628
    jal func_001a8e80
    paddub a0,s0,zero
    .word 0xc64216c0
    .word 0x3c024150
    .word 0x44820000
    .word 0x44800800
    neg.s $f2,$f2
    div.s $f2,$f2,$f0
    nop
    nop
    c.lt.s $f2,$f1
    nop
    bc1f L15124c
    .word 0x3c023f80
    c.eq.s $f1,$f1
    nop
    bc1t L151240
    .word 0x46000886
L151240:
    b L151280
    .word 0xc64016c8
    .word 0x3c023f80
L15124c:
    .word 0x44820000
    nop
    c.le.s $f2,$f0
    nop
    bc1t L15127c
    nop
    c.eq.s $f0,$f1
    nop
    bc1t L151274
    .word 0x46000086
L151274:
    b L15127c
    nop
L15127c:
    .word 0xc64016c8
L151280:
    c.le.s $f2,$f0
    nop
    bc1t L151294
    nop
    .word 0xe64216c8
L151294:
    .word 0xc6000020
    paddub a0,s0,zero
    jal func_001a8b70
    mul.s $f12,$f0,$f2
    .word 0xae4016b8
L1512a8:
    addiu v0,zero,1
L1512ac:
    .word 0x7bbf0050
L1512b0:
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,112
}


