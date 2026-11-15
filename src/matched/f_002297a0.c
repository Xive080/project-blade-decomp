extern void func_0013b550(void);
extern void func_00142a90(void);
extern void func_0016f2e0(void);
extern void func_001a8600(void);
extern void func_001a8e80(void);
extern void func_001c3b70(void);
extern void func_0022ba90(void);
extern void func_0022baa0(void);
extern void func_0022bd00(void);
extern void func_0022d320(void);
extern void func_00234ff0(void);
extern void func_00242960(void);
extern void func_002432e0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-256
    .word 0x7fbf0080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8c83000c
    addiu v0,zero,5
    .word 0x70a0b628
    beq v1,v0,L2298b8
    .word 0x70808628
    addiu v0,zero,4
    beq v1,v0,L2297f0
    nop
    b L229f7c
    .word 0x72002628
L2297f0:
    .word 0x3c020030
    addiu a1,v0,28544
    .word 0x8ca20158
    bnez v0,L2298b8
    nop
    .word 0x8ca20708
    bnez v0,L2298b8
    nop
    .word 0x8ca30004
    andi v0,v1,0x6000
    bnez v0,L2298b8
    nop
    .word 0xc4a10150
    .word 0xc4a00700
    c.eq.s $f1,$f0
    nop
    bc1t L22988c
    ori v0,v1,0x4000
    c.le.s $f1,$f0
    nop
    bc1t L229854
    addiu v0,zero,1
    b L229854
    .word 0x70001628
    addiu v0,zero,1
L229854:
    addiu v1,zero,1456
    .word 0x00432018
    xori v0,v0,0x1
    mult1 v0,v0,v1
    addu v1,v0,a1
    addu a0,a0,a1
    .word 0x8c820004
    ori v0,v0,0x2000
    .word 0xac820004
    .word 0x8c620004
    ori v0,v0,0x4000
    b L22989c
    .word 0xac620004
    ori v0,v1,0x4000
L22988c:
    .word 0xaca20004
    .word 0x8ca205b4
    ori v0,v0,0x4000
    .word 0xaca205b4
L22989c:
    jal func_00242960
    nop
    .word 0x3c027f7f
    ori v0,v0,0xffff
    .word 0x44826000
    jal func_0022ba90
    .word 0x8e04003c
L2298b8:
    jal func_0022bd00
    .word 0x8e04003c
    .word 0x70408e28
    .word 0x3c020030
    addiu s2,v0,28544
    addiu s4,zero,2
    .word 0x3c040040
    jal func_0016f2e0
    .word 0x70009e28
L2298dc:
    .word 0x8e450008
    beql a1,s1,L229c54
    .word 0x72409e28
    .word 0x3c027000
    ori v0,v0,0x3fb0
    .word 0xc4410000
    .word 0xc6000040
    c.lt.s $f1,$f0
    nop
    bc1t L229c58
    nop
    .word 0x8e15003c
    addiu a0,sp,224
    jal func_0022d320
    .word 0x70003628
    addiu v1,sp,224
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    addiu v0,sp,240
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0x8ea516e8
    .word 0x8ea416e4
    addiu v1,zero,240
    .word 0x70a01628
    subu a0,a0,a1
    addiu a0,a0,240
    .word 0x0083001a
    nop
    nop
    mfhi a0
    beqz v0,L2299f0
    addiu a1,a1,-1
    .word 0xc7a500f4
    .word 0xc7a600f8
    nop
    nop
    .word 0xc7a400f0
    .word 0x3c023f80
    .word 0x44820000
L229984:
    sll v0,a0,0x1
    addu v0,v0,a0
    sll v0,v0,0x2
    addu v0,s5,v0
    .word 0xc4420424
    .word 0xc4410428
    .word 0xc443042c
    sub.s $f2,$f4,$f2
    sub.s $f1,$f5,$f1
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    sub.s $f1,$f6,$f3
    madd.s $f1,$f1,$f1
    c.lt.s $f1,$f0
    nop
    bc1f L2299d8
    addiu v0,a0,1
    b L2299f8
    addiu v0,zero,1
    addiu v0,a0,1
L2299d8:
    .word 0x0043001a
    .word 0x70a01628
    nop
    mfhi a0
    bnez v0,L229984
    addiu a1,a1,-1
L2299f0:
    .word 0x70001628
    nop
L2299f8:
    beqz v0,L229c58
    nop
    .word 0xc6010008
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L229c58
    nop
    .word 0x8e03003c
    addiu v0,zero,2
    .word 0x8c63003c
    bne v1,v0,L229ac0
    nop
    .word 0x3c010030
    .word 0x8e450000
    .word 0x8c227538
    .word 0x3c030030
    addiu v1,v1,28544
    addiu s3,sp,212
    .word 0xafa300d0
    addiu s1,zero,347
    addiu a0,zero,348
    addiu s4,sp,216
    .word 0xae620000
    movn s1,a0,a1
    .word 0xae800000
    .word 0x8f8484ac
    beqz a0,L229a80
    nop
    .word 0x8c820010
    addiu a2,sp,208
    jalr ra,v0
    addiu a1,zero,13
L229a80:
    .word 0x3c020030
    addiu v1,v0,30000
    .word 0x3c010030
    .word 0x8c226f88
    .word 0xafa300d0
    .word 0xae620000
    .word 0xae800000
    .word 0x8f8484ac
    beqz a0,L229adc
    nop
    .word 0x8c820010
    addiu a2,sp,208
    jalr ra,v0
    addiu a1,zero,13
    b L229ae0
    .word 0x8f848328
L229ac0:
    .word 0x8f8388a8
    addiu s1,zero,345
    addiu v0,zero,346
    addiu v1,v1,1
    .word 0xaf8388a8
    .word 0x8e430000
    movn s1,v0,v1
L229adc:
    .word 0x8f848328
L229ae0:
    jal func_0013b550
    .word 0x72202e28
    .word 0x8f8484ac
    beqz a0,L229b04
    nop
    .word 0x70403628
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,10
L229b04:
    .word 0x8e04003c
    jal func_0022baa0
    .word 0x8e450008
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c024000
    .word 0x44820000
    addiu s1,zero,2
    .word 0x72201628
    add.s $f0,$f0,$f1
    addiu s1,s1,-1
    beqz v0,L229c48
    .word 0xe6000040
    addiu v0,zero,1456
    .word 0x02221818
    .word 0x3c020030
    addiu v0,v0,27648
    addu s4,v0,v1
    sll v0,s1,0x3
    addu s5,s0,v0
L229b54:
    .word 0x8e930388
    .word 0x8e420008
    bne s3,v0,L229bc8
    nop
    jal func_00234ff0
    nop
    addiu v1,zero,5
    .word 0x0043001a
    .word 0x3c017000
    .word 0x3c02002e
    addiu v1,v0,26896
    .word 0x3c023e80
    .word 0x44820000
    mfhi v0
    sll v0,v0,0x2
    addu v0,v1,v0
    .word 0x8c430000
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s3,v0
    addiu v0,v0,5844
    .word 0xaea20050
    .word 0xc4213fb0
    add.s $f0,$f0,$f1
    b L229c30
    .word 0xe6a0004c
L229bc8:
    jal func_00234ff0
    nop
    addiu v1,zero,3
    .word 0x0043001a
    .word 0x3c017000
    .word 0x3c02002e
    addiu v1,v0,26920
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820000
    mfhi v0
    sll v0,v0,0x2
    addu v0,v1,v0
    .word 0x8c430000
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s3,v0
    addiu v0,v0,5844
    .word 0xaea20050
    .word 0xc4213fb0
    add.s $f0,$f0,$f1
    .word 0xe6a0004c
    nop
L229c30:
    .word 0x72201628
    addiu s4,s4,-1456
    addiu s5,s5,-8
    bnez v0,L229b54
    addiu s1,s1,-1
    nop
L229c48:
    b L229d00
    .word 0x72409e28
    .word 0x72409e28
L229c54:
    nop
L229c58:
    .word 0x8e420000
    sll v0,v0,0x3
    addu v1,s0,v0
    .word 0x8c620050
    beqzl v0,L229cf4
    addiu s4,s4,-1
    .word 0x3c017000
    .word 0xc460004c
    .word 0xc4213fb0
    c.le.s $f1,$f0
    nop
    bc1t L229cf0
    nop
    .word 0x8e420008
    jal func_00142a90
    .word 0x8c440404
    jal func_001c3b70
    .word 0x70402628
    addiu a1,v0,48
    .word 0x8e420000
    sll v0,v0,0x3
    addu v0,s0,v0
    .word 0x8c440050
    jal func_001a8600
    .word 0x70003628
    .word 0x8e420000
    sll v0,v0,0x3
    addu v0,s0,v0
    jal func_001a8e80
    .word 0x8c440050
    .word 0x8e420000
    sll v0,v0,0x3
    addu v0,s0,v0
    .word 0xac400050
    .word 0x8e420000
    sll v0,v0,0x3
    addu v0,s0,v0
    .word 0xac40004c
L229cf0:
    addiu s4,s4,-1
L229cf4:
    bnez s4,L2298dc
    addiu s2,s2,1456
    nop
L229d00:
    .word 0x8e020044
    bnez v0,L229dd4
    .word 0x3c017000
    .word 0x3c027000
    ori v0,v0,0x3fb0
    .word 0xc4410000
    .word 0xc6000048
    c.lt.s $f1,$f0
    nop
    bc1t L229eb8
    nop
    .word 0xc6000008
    .word 0x44800800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L229eb8
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,351
    .word 0x8f8484ac
    .word 0xafa20090
    addiu v0,zero,1
    .word 0xafa00094
    .word 0xafa20098
    .word 0xafa0009c
    beqz a0,L229d84
    .word 0xafa200a0
    .word 0x8c820010
    addiu a2,sp,144
    jalr ra,v0
    addiu a1,zero,18
L229d84:
    .word 0x3c017000
    jal func_00234ff0
    .word 0xc4343fb0
    addiu v1,zero,10
    .word 0x0043001a
    nop
    nop
    mfhi v1
    .word 0x3c0240a0
    .word 0x44820000
    .word 0x44830800
    nop
    add.s $f0,$f0,$f20
    addiu v0,zero,1
    cvt.s.w $f1,$f1
    add.s $f0,$f0,$f1
    .word 0xe6000048
    b L229eb8
    .word 0xae020044
    .word 0x3c017000
L229dd4:
    .word 0xc4343fb0
    .word 0xc6000048
    c.lt.s $f20,$f0
    nop
    bc1t L229eb8
    nop
    .word 0xc6010008
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L229eb8
    nop
    jal func_00234ff0
    nop
    addiu v1,zero,15
    .word 0xc6010008
    .word 0x0043001a
    .word 0x3c024120
    .word 0x44820000
    nop
    add.s $f2,$f0,$f20
    .word 0x3c02420c
    .word 0x44820000
    mfhi v0
    .word 0x44821800
    nop
    cvt.s.w $f3,$f3
    add.s $f2,$f2,$f3
    sub.s $f1,$f1,$f2
    c.lt.s $f1,$f0
    nop
    bc1f L229e6c
    nop
    .word 0x3c027f7f
    ori v0,v0,0xffff
    b L229e70
    .word 0xae020048
L229e6c:
    .word 0xe6020048
L229e70:
    .word 0xae000044
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,352
    .word 0x8f8484ac
    .word 0xafa200b0
    addiu v1,zero,1
    .word 0xafa000b4
    .word 0x3c02be4c
    .word 0xafa300b8
    ori v0,v0,0xcccd
    .word 0xafa200bc
    beqz a0,L229eb8
    .word 0xafa300c0
    .word 0x8c820010
    addiu a2,sp,176
    jalr ra,v0
    addiu a1,zero,18
L229eb8:
    .word 0x8e020038
    bnez v0,L229f78
    nop
    .word 0xc6010008
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L229f78
    nop
    beqz s3,L229f78
    nop
    .word 0x8e620004
    andi v0,v0,0x1000
    beqz v0,L229f78
    nop
    .word 0x8e63000c
    .word 0x3c023f23
    ori v0,v0,0xd70b
    .word 0x44820000
    .word 0xc462000c
    .word 0xc4610010
    .word 0xc4630014
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f1,$f3,$f3
    c.le.s $f1,$f0
    nop
    bc1t L229f78
    nop
    .word 0x3c017000
    .word 0x8e020044
    beqz v0,L229f54
    .word 0xc4233fa8
    .word 0x3c024000
    .word 0x44821000
    b L229f60
    .word 0x3c0242c8
L229f54:
    .word 0x3c023f80
    .word 0x44821000
    .word 0x3c0242c8
L229f60:
    .word 0x44820800
    .word 0xc6600150
    mul.s $f1,$f1,$f3
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe6600150
L229f78:
    .word 0x72002628
L229f7c:
    jal func_002432e0
    .word 0x72c02e28
    .word 0x7bbf0080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,256
}

