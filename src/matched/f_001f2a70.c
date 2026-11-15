extern void fn_1dd1d0(void);
extern void fn_254190(void);
extern void fn_1ea6e0(void);
extern void fn_1f1690(void);
extern void fn_1f1b90(void);
extern void fn_1f1eb0(void);
extern void fn_1f21c0(void);
extern void fn_111a70(void);
extern void fn_111ab8(void);
extern void fn_1df850(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-304
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
    .word 0x8f82877c
    .word 0xafa500ec
    paddub s3,a2,zero
    addu s0,a0,v0
    .word 0x92020036
    andi v0,v0,0x1
    beqz v0,L1f2c64
    paddub s7,a0,zero
    .word 0x8ee20024
    .word 0x8c510000
    addiu s2,v0,16
    beqz s3,L1f2ae4
    .word 0xaf9387f0
    addiu v0,zero,1
    .word 0xaf82862c
    .word 0x3c028800
    b L1f2aec
    ori a0,v0,0x142
L1f2ae4:
    .word 0x3c028800
    ori a0,v0,0x102
L1f2aec:
    sll v0,s1,0x2
    addiu v0,v0,4
    jal fn_1dd1d0
    negu a1,v0
    .word 0x8fa200ec
    addiu v1,zero,-64
    .word 0xaf80862c
    .word 0x70002e28
    and v0,v0,v1
    dsll32 v0,v0,0x0
    dsrl32 v0,v0,0x0
    b L1f2ba0
    dsll a0,v0,0x1a
L1f2b20:
    .word 0x7a430000
    .word 0x8f828690
    addiu s2,s2,16
    .word 0x7c430000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x7a430000
    .word 0x8f828690
    addiu s2,s2,16
    .word 0x7c430000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    .word 0xde470000
    .word 0xde430008
    daddu a3,a3,a0
    pcpyld a2,v1,a3
    .word 0x8f828690
    addiu s2,s2,16
    addiu a1,a1,1
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x7a430000
    .word 0x8f828690
    addiu s2,s2,16
    .word 0x7c430000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
L1f2ba0:
    sltu v0,a1,s1
    bnez v0,L1f2b20
    .word 0x3c035000
    .word 0x3c021000
    ori v1,v1,0x2
    ori a3,v0,0x2
    dsll32 v1,v1,0x0
    pcpyld a2,v1,a3
    dsll32 a3,v0,0x0
    .word 0x8f828690
    ori a3,a3,0x8001
    addiu v1,zero,14
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    pcpyld a2,v1,a3
    .word 0x8f828690
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    beqz s3,L1f2c0c
    .word 0xaf828690
    addiu v0,zero,127
    .word 0x70001e28
    b L1f2c18
    pcpyld a2,v0,v1
L1f2c0c:
    addiu v0,zero,63
    .word 0x70001e28
    pcpyld a2,v0,v1
L1f2c18:
    .word 0x8f828690
    ori a3,zero,0xf000
    dsll a3,a3,0x10
    .word 0x70001e28
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    pcpyld a2,v1,a3
    .word 0x8f828690
    addiu a0,zero,1
    .word 0x70002e28
    .word 0x7c460000
    .word 0x8f828690
    addiu v0,v0,16
    jal fn_1dd1d0
    .word 0xaf828690
    b L1f338c
    nop
L1f2c64:
    .word 0x8ef50004
    .word 0xaf8087f0
    .word 0x8ee20014
    .word 0xafa200a0
    .word 0x8e020008
    .word 0x92030016
    .word 0x8ee5000c
    .word 0x8ee40018
    srl v0,v0,0x14
    andi v0,v0,0x3f
    sra v1,v1,0x2
    .word 0xafa200b0
    .word 0x8fa200a0
    sltiu at,v1,7
    mult v0,a1,v0
    sra v0,v0,0x3
    xor v0,a0,v0
    sltiu v0,v0,1
    beqz at,L1f2cd0
    .word 0xafa200c0
    sll v0,v1,0x2
    .word 0x3c03002f
    addiu v1,v1,2224
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
L1f2cd0:
    lwu v0,36(s0)
    lwu v1,32(s0)
    dsll32 v0,v0,0x0
    or v1,v1,v0
    andi v0,v1,0x3fff
    .word 0xafa20100
    dsrl v0,v1,0x14
    andi v0,v0,0x3fff
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xafa20104
    dsrl32 v0,v1,0x8
    andi v0,v0,0x3fff
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xafa20108
    dsrl v0,v1,0xe
    andi v0,v0,0x3f
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xafa20120
    dsrl32 v0,v1,0x2
    andi v0,v0,0x3f
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xafa20124
    dsrl32 v0,v1,0x16
    andi v0,v0,0x3f
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xafa20128
    lwu v0,28(s0)
    lwu v1,24(s0)
    dsll32 v0,v0,0x0
    or v1,v1,v0
    andi v0,v1,0x3fff
    .word 0xafa200f4
    dsrl v0,v1,0x14
    andi v0,v0,0x3fff
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xafa200f8
    dsrl32 v0,v1,0x8
    andi v0,v0,0x3fff
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xafa200fc
    dsrl v0,v1,0xe
    andi v0,v0,0x3f
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xafa20114
    dsrl32 v0,v1,0x2
    andi v0,v0,0x3f
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xafa20118
    dsrl32 v0,v1,0x16
    andi v0,v0,0x3f
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    .word 0xafa2011c
    .word 0xafa000f0
    .word 0x8e020008
    .word 0x70008e28
    srl v0,v0,0xe
    andi v0,v0,0x3f
    b L1f3200
    .word 0xafa20110
L1f2de4:
    .word 0x8fa200ec
    .word 0x8ee30018
    .word 0x8ee7000c
    .word 0x8ee60010
    sll a0,s1,0x2
    srl a1,v0,0x6
    addu v0,a0,sp
    srav s6,v1,s1
    .word 0x8c4300f0
    srav s2,a3,s1
    srav s3,a2,s1
    andi v0,s5,0xf
    sltu v0,zero,v0
    xori v0,v0,0x1
    beqz v0,L1f30f0
    addu s4,a1,v1
    .word 0x8fa200c0
    beqz v0,L1f3004
    addu v0,a0,s0
    .word 0x8c42003c
    bnez v0,L1f2f00
    nop
    .word 0x92020034
    mult v1,s2,s3
    .word 0xa3a200d0
    .word 0x8fa200a0
    mult v0,v0,v1
    srl v0,v0,0x3
    dsll32 s8,v0,0x0
    .word 0x93a200d0
    beqz v0,L1f2ea8
    dsrl32 s8,s8,0x0
    daddiu v0,s8,15
    dsrl a0,v0,0x4
    jal fn_254190
    addiu a1,zero,32750
    daddiu v1,v0,1
    dsll v0,v1,0x1
    daddu v0,v0,v1
    dsll v0,v0,0x4
    daddiu v0,v0,176
    dsll32 a0,v0,0x0
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    dsra32 a0,a0,0x0
    b L1f2ee4
    .word 0x93a700d0
L1f2ea8:
    daddiu v0,s8,15
    dsrl a0,v0,0x4
    jal fn_254190
    addiu a1,zero,32750
    daddiu v1,v0,1
    dsll v0,v1,0x1
    daddu v0,v0,v1
    dsll v0,v0,0x4
    daddiu v0,v0,176
    dsll32 a1,v0,0x0
    .word 0x8f848680
    dsra32 a1,a1,0x0
    jal fn_1ea6e0
    addiu a2,zero,2
    .word 0x93a700d0
L1f2ee4:
    paddub a2,s8,zero
    paddub a0,v0,zero
    jal fn_1f1690
    paddub a1,s5,zero
    sll v1,s1,0x2
    addu v1,v1,s0
    .word 0xac62003c
L1f2f00:
    .word 0x92020036
    andi v0,v0,0x2
    beqz v0,L1f2f5c
    nop
    .word 0x8e030008
    addiu v0,zero,19
    srl v1,v1,0x14
    andi v1,v1,0x3f
    bne v1,v0,L1f2f5c
    sll a3,s1,0x2
    addu v0,a3,sp
    .word 0x8c430110
    .word 0x920a0034
    srl a0,s2,0x1
    paddub a2,s4,zero
    srl a1,s3,0x1
    .word 0x70004628
    addu v0,a3,s0
    .word 0x8c49003c
    jal fn_1f1b90
    srl a3,v1,0x1
    b L1f2fec
    .word 0x92020034
L1f2f5c:
    .word 0x92020036
    andi v0,v0,0x4
    beqz v0,L1f2fbc
    sll v0,s1,0x2
    .word 0x8e030008
    addiu v0,zero,20
    srl v1,v1,0x14
    andi v1,v1,0x3f
    bne v1,v0,L1f2fb8
    sll a3,s1,0x2
    addu v0,a3,sp
    .word 0x8c430110
    .word 0x920a0034
    srl a0,s2,0x1
    paddub a2,s4,zero
    srl a1,s3,0x1
    addiu t0,zero,2
    addu v0,a3,s0
    .word 0x8c49003c
    jal fn_1f1b90
    srl a3,v1,0x1
    b L1f2fe8
    nop
L1f2fb8:
    sll v0,s1,0x2
L1f2fbc:
    addu v1,v0,sp
    addu v0,v0,s0
    .word 0x8c670110
    .word 0x8c49003c
    .word 0x8fa800b0
    .word 0x920a0034
    paddub a0,s2,zero
    paddub a2,s4,zero
    jal fn_1f1b90
    paddub a1,s3,zero
    nop
L1f2fe8:
    .word 0x92020034
L1f2fec:
    bnez v0,L1f31dc
    mult v0,s6,s3
    sll v0,s1,0x2
    addu v0,v0,s0
    b L1f31d8
    .word 0xac40003c
L1f3004:
    .word 0x92020036
    andi v0,v0,0x2
    beqz v0,L1f3060
    nop
    .word 0x8e030008
    addiu v0,zero,19
    srl v1,v1,0x14
    andi v1,v1,0x3f
    bne v1,v0,L1f3060
    sll v0,s1,0x2
    addu v0,v0,sp
    .word 0x8c420110
    srl a0,s2,0x1
    paddub a3,s4,zero
    srl a1,s3,0x1
    paddub a2,s5,zero
    addiu t1,zero,32
    .word 0x70005628
    paddub t3,s6,zero
    jal fn_1f1eb0
    srl t0,v0,0x1
    b L1f31d8
    nop
L1f3060:
    .word 0x92020036
    andi v0,v0,0x4
    beqz v0,L1f30c0
    sll v0,s1,0x2
    .word 0x8e030008
    addiu v0,zero,20
    srl v1,v1,0x14
    andi v1,v1,0x3f
    bne v1,v0,L1f30bc
    sll v0,s1,0x2
    addu v0,v0,sp
    .word 0x8c420110
    srl a0,s2,0x1
    paddub a3,s4,zero
    srl a1,s3,0x1
    paddub a2,s5,zero
    addiu t1,zero,16
    addiu t2,zero,2
    paddub t3,s6,zero
    jal fn_1f1eb0
    srl t0,v0,0x1
    b L1f31d8
    nop
L1f30bc:
    sll v0,s1,0x2
L1f30c0:
    addu v0,v0,sp
    .word 0x8c480110
    .word 0x8fa900a0
    .word 0x8faa00b0
    paddub a0,s2,zero
    paddub a3,s4,zero
    paddub a1,s3,zero
    paddub a2,s5,zero
    jal fn_1f1eb0
    paddub t3,s6,zero
    b L1f31d8
    nop
L1f30f0:
    .word 0x92020036
    andi v0,v0,0x2
    beqz v0,L1f314c
    nop
    .word 0x8e030008
    addiu v0,zero,19
    srl v1,v1,0x14
    andi v1,v1,0x3f
    bne v1,v0,L1f314c
    sll v0,s1,0x2
    addu v0,v0,sp
    .word 0x8c420110
    srl a0,s2,0x1
    paddub a3,s4,zero
    srl a1,s3,0x1
    paddub a2,s5,zero
    addiu t1,zero,32
    .word 0x70005628
    paddub t3,s6,zero
    jal fn_1f21c0
    srl t0,v0,0x1
    b L1f31d8
    nop
L1f314c:
    .word 0x92020036
    andi v0,v0,0x4
    beqz v0,L1f31ac
    sll v0,s1,0x2
    .word 0x8e030008
    addiu v0,zero,20
    srl v1,v1,0x14
    andi v1,v1,0x3f
    bne v1,v0,L1f31a8
    sll v0,s1,0x2
    addu v0,v0,sp
    .word 0x8c420110
    srl a0,s2,0x1
    paddub a3,s4,zero
    srl a1,s3,0x1
    paddub a2,s5,zero
    addiu t1,zero,16
    addiu t2,zero,2
    paddub t3,s6,zero
    jal fn_1f21c0
    srl t0,v0,0x1
    b L1f31d8
    nop
L1f31a8:
    sll v0,s1,0x2
L1f31ac:
    addu v0,v0,sp
    .word 0x8c480110
    .word 0x8fa900a0
    .word 0x8faa00b0
    paddub a0,s2,zero
    paddub a3,s4,zero
    paddub a1,s3,zero
    paddub a2,s5,zero
    jal fn_1f21c0
    paddub t3,s6,zero
    nop
L1f31d8:
    mult v0,s6,s3
L1f31dc:
    addu s5,s5,v0
    andi v0,s5,0xf
    beqzl v0,L1f31fc
    addiu s1,s1,1
    addiu v1,s5,15
    addiu v0,zero,-16
    and s5,v1,v0
    addiu s1,s1,1
L1f31fc:
    nop
L1f3200:
    .word 0x92020016
    sra v0,v0,0x2
    slt at,v0,s1
    beqz at,L1f2de4
    nop
    .word 0x8e02002c
    beqz v0,L1f338c
    nop
    .word 0x8ee30014
    slti at,v1,9
    beqz at,L1f338c
    nop
    .word 0x8fa200ec
    sll v1,v1,0x2
    .word 0x8e06000c
    .word 0x8e040010
    srl a1,v0,0x6
    .word 0x3c02002f
    addiu v0,v0,2156
    addu v0,v0,v1
    .word 0x8c510000
    srl v0,a2,0x13
    andi s3,v0,0xf
    .word 0x3c02002f
    addiu v0,v0,2188
    addu v0,v0,v1
    .word 0x8c520000
    addiu v0,zero,10
    beq s3,v0,L1f329c
    addu s8,a1,a0
    addiu v0,zero,2
    beq s3,v0,L1f32a0
    addiu v1,zero,16
    beqz s3,L1f3294
    addiu v1,zero,32
    b L1f329c
    nop
L1f3294:
    b L1f32a4
    .word 0x8e020038
L1f329c:
    addiu v1,zero,16
L1f32a0:
    .word 0x8e020038
L1f32a4:
    bnez v0,L1f335c
    mult v0,s1,s2
    .word 0x92160034
    .word 0x8ef50008
    mult v0,v1,v0
    srl v0,v0,0x3
    dsll32 s4,v0,0x0
    beqz s6,L1f330c
    dsrl32 s4,s4,0x0
    daddiu v0,s4,15
    dsrl a0,v0,0x4
    jal fn_254190
    addiu a1,zero,32750
    daddiu v1,v0,1
    dsll v0,v1,0x1
    daddu v0,v0,v1
    dsll v0,v0,0x4
    daddiu v0,v0,176
    dsll32 a0,v0,0x0
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    dsra32 a0,a0,0x0
    b L1f3348
    paddub a1,s5,zero
L1f330c:
    daddiu v0,s4,15
    dsrl a0,v0,0x4
    jal fn_254190
    addiu a1,zero,32750
    daddiu v1,v0,1
    dsll v0,v1,0x1
    daddu v0,v0,v1
    dsll v0,v0,0x4
    daddiu v0,v0,176
    dsll32 a1,v0,0x0
    .word 0x8f848680
    dsra32 a1,a1,0x0
    jal fn_1ea6e0
    addiu a2,zero,2
    paddub a1,s5,zero
L1f3348:
    paddub a2,s4,zero
    paddub a3,s6,zero
    jal fn_1f1690
    paddub a0,v0,zero
    .word 0xae020038
L1f335c:
    .word 0x8e090038
    .word 0x920a0034
    paddub a0,s1,zero
    paddub a1,s2,zero
    paddub a2,s8,zero
    paddub t0,s3,zero
    jal fn_1f1b90
    addiu a3,zero,1
    .word 0x92020034
    bnez v0,L1f338c
    nop
    .word 0xae000038
L1f338c:
    jal fn_111a70
    nop
    .word 0x8e020000
    addiu v0,v0,1
    jal fn_111ab8
    .word 0xae020000
    .word 0x8e040004
    addiu v1,zero,1
    addiu a0,a0,1
    .word 0xae040004
    .word 0x8e040004
    bne a0,v1,L1f33c8
    paddub a0,s0,zero
    jal fn_1df850
    nop
L1f33c8:
    .word 0x7bbf0090
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
    addiu sp,sp,304
}


