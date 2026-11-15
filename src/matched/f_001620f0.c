extern void func_001c3b70(void);
extern void func_00162840(void);
extern void func_00130eb0(void);
extern void func_001ce160(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-128
    .word 0x7fbf0060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    paddub s1,a1,zero
    paddub s2,a0,zero
    .word 0x3c01002e
    .word 0x8ca50000
    addiu v1,zero,253
    bne a1,v1,L1622d0
    .word 0x8c24e528
    .word 0x8e4301ac
    bnez v1,L1624ec
    nop
    .word 0x8e43003c
    bne v1,a0,L1624ec
    nop
    .word 0x3c017000
    .word 0xc4223fb0
    .word 0xc6410178
    .word 0x3c033ff3
    ori v1,v1,0x3333
    .word 0x44830000
    nop
    sub.s $f1,$f2,$f1
    c.le.s $f1,$f0
    nop
    bc1t L1624ec
    nop
    jal func_001c3b70
    .word 0x8e440068
    .word 0x3c030016
    addiu v1,v1,27824
    .word 0xffa30000
    addiu a1,v0,48
    .word 0x3c030016
    addiu v1,v1,28080
    .word 0x3c02002e
    addiu a2,s1,40
    addiu a3,s1,4
    addiu t0,s1,16
    addiu t1,s1,28
    addiu t2,v0,-6976
    addiu t3,zero,5
    .word 0xffa30008
    jal func_00162840
    paddub a0,s2,zero
    bltz v0,L1624ec
    nop
    .word 0x3c03002e
    addiu v1,v1,-6912
    sll a0,v0,0x2
    addu v1,v1,a0
    .word 0xc4600000
    .word 0xe6400078
    .word 0x8e440064
    addiu v1,zero,-1
    beq a0,v1,L162220
    nop
    sll v0,a0,0x3
    addu v0,v0,a0
    sll v0,v0,0x1
    addu v0,v0,a0
    sll v1,v0,0x2
    .word 0x3c020030
    addiu v0,v0,-23692
    addu v0,v0,v1
    .word 0x8c440000
    .word 0x3c023faa
    ori v0,v0,0xaaab
    .word 0x44826800
    jal func_00130eb0
    .word 0xc64c0078
L162220:
    .word 0x8e43003c
    beqz v1,L162274
    addiu s0,s2,60
    .word 0x8e430010
    andi v1,v1,0x2
    bnez v1,L162274
    nop
    .word 0x8e42000c
    paddub a0,s2,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s2,12
    beqz v0,L162274
    nop
    .word 0x8e220000
    paddub a0,s2,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L162274:
    .word 0x8e030000
    addiu a1,zero,512
    beq v1,a1,L1624ec
    nop
    .word 0x8e430010
    andi v1,v1,0x2
    bnez v1,L1624ec
    nop
    .word 0x8e42000c
    paddub a0,s2,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s2,12
    beqz v0,L1624ec
    nop
    .word 0x8e020000
    addiu a1,zero,512
    paddub a0,s2,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L1624f0
    .word 0x7bbf0060
L1622d0:
    addiu v1,zero,252
    bne a1,v1,L1624ec
    nop
    .word 0xc6200004
    .word 0x44800800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L1624ec
    nop
    .word 0xc6200014
    c.lt.s $f0,$f1
    nop
    bc1t L1624ec
    nop
    jal func_001c3b70
    .word 0x8e440068
    .word 0x8e42003c
    beqz v0,L162368
    addiu s0,s2,60
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L16236c
    .word 0x3c027000
    .word 0x8e42000c
    paddub a0,s2,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s3,s2,12
    beqz v0,L162368
    nop
    .word 0x8e620000
    paddub a0,s2,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L162368:
    .word 0x3c027000
L16236c:
    ori v0,v0,0x3fb0
    .word 0xc4410000
    .word 0x3c017000
    .word 0xe6410178
    .word 0xc6220004
    .word 0xc4213fb0
    .word 0x3c023f80
    .word 0x44820000
    .word 0x3c024020
    .word 0x44821800
    nop
    add.s $f1,$f2,$f1
    add.s $f1,$f0,$f1
    .word 0xe641017c
    .word 0xc6400178
    sub.s $f0,$f1,$f0
    c.lt.s $f3,$f0
    nop
    bc1f L1623c0
    nop
    .word 0x46001806
L1623c0:
    .word 0xe64001a4
    .word 0xc6210014
    .word 0xc6200008
    addiu a0,sp,112
    addiu s3,sp,116
    addiu s4,sp,120
    sub.s $f0,$f1,$f0
    paddub a1,a0,zero
    .word 0xe7a00070
    .word 0xc6210018
    .word 0xc620000c
    sub.s $f0,$f1,$f0
    .word 0xe6600000
    .word 0xc621001c
    .word 0xc6200010
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe6800000
    .word 0xc7a00070
    .word 0x3c033ff3
    ori v1,v1,0x3333
    .word 0x44830800
    .word 0x3c050010
    mul.s $f0,$f1,$f0
    .word 0xe7a00070
    .word 0xc6600000
    mul.s $f0,$f1,$f0
    .word 0xe6600000
    .word 0xc6800000
    mul.s $f0,$f1,$f0
    .word 0xe6800000
    .word 0xc6210008
    .word 0xc7a00070
    add.s $f0,$f1,$f0
    .word 0xe640018c
    .word 0xc6600000
    .word 0xc621000c
    add.s $f0,$f1,$f0
    .word 0xe6400190
    .word 0xc6800000
    .word 0xc6210010
    add.s $f0,$f1,$f0
    .word 0xe6400194
    .word 0xc6220014
    .word 0xc6210018
    .word 0xc620001c
    .word 0xe6420198
    .word 0xe641019c
    .word 0xe64001a0
    .word 0xc6220008
    .word 0xc621000c
    .word 0xc6200010
    .word 0xe64200a0
    .word 0xe64100a4
    .word 0xe64000a8
    .word 0x8e030000
    beq v1,a1,L1624ec
    nop
    .word 0x8e430010
    andi v1,v1,0x2
    bnez v1,L1624ec
    nop
    .word 0x8e42000c
    paddub a0,s2,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s2,12
    beqz v0,L1624ec
    nop
    .word 0x8e020000
    paddub a0,s2,zero
    .word 0x3c050010
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1624ec:
    .word 0x7bbf0060
L1624f0:
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    jr ra
    addiu sp,sp,128
}


