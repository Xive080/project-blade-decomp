extern void func_001d5d50(void);
extern void func_001d5ee0(void);
extern void func_001d6410(void);
extern void func_001d8120(void);
extern void func_001d81c0(void);
extern void func_001d8240(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-416
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
    .word 0xafa4016c
    .word 0xafa50168
    .word 0x8fa40168
    .word 0x8fa6016c
    addiu v0,zero,1
    .word 0xafa200a0
    jal func_001d8240
    .word 0x70002e28
    .word 0x8fa40168
    .word 0x8fa6016c
    .word 0x70408628
    jal func_001d8240
    addiu a1,zero,1
    .word 0x8fa40168
    .word 0x8fa6016c
    .word 0x70408e28
    jal func_001d8240
    addiu a1,zero,2
    .word 0x8fa40168
    .word 0x8fa6016c
    .word 0x70409628
    jal func_001d8240
    addiu a1,zero,3
    .word 0x7040a628
    .word 0x8fa20168
    .word 0x8c430008
    .word 0x8c630010
    addiu v0,zero,-1
    bne v1,v0,L1d1a6c
    sll v0,v1,0x3
    b L1d1aa8
    .word 0x70001e28
L1d1a6c:
    subu v0,v0,v1
    sll v1,v0,0x2
    .word 0x8fa20168
    addu v1,v1,v0
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8fa20168
    .word 0x8c420008
    .word 0x8c430010
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v1,v0,0x2
    .word 0x8fa20168
    addu v0,v0,v1
    addiu v1,v0,20
L1d1aa8:
    beqz v1,L1d1ac8
    nop
    .word 0x8c620004
    beqz v0,L1d1ac8
    nop
    .word 0x8c620008
    b L1d1adc
    .word 0xafa200c0
L1d1ac8:
    .word 0x3c020033
    addiu v1,v0,-23008
    .word 0x8f828618
    addu v0,v1,v0
    .word 0xafa200c0
L1d1adc:
    .word 0x8fa40168
    .word 0x8fa6016c
    jal func_001d8240
    addiu a1,zero,5
    .word 0x70409e28
    .word 0x8e820008
    .word 0xafa200b0
    beqz s3,L1d1b0c
    .word 0x96430002
    addiu v0,zero,12
    .word 0xa6620002
    .word 0xae600010
L1d1b0c:
    .word 0x8fa200b0
    .word 0x8c4200b4
    beqz v0,L1d2484
    nop
    .word 0x8fa200b0
    .word 0x8c4200ac
    .word 0xafa200d0
    .word 0x8fa200d0
    beqz v0,L1d2450
    .word 0x7000f628
    .word 0x3c02002f
    addiu v0,v0,1072
    .word 0xafa20120
    .word 0x3c020033
    addiu s6,v0,-6592
    sll v0,v1,0x1
    addu v0,v0,v1
    .word 0xafa20130
L1d1b54:
    .word 0x8e430008
    .word 0x96040002
    .word 0x8e070004
    .word 0x8e020010
    .word 0x7000a628
    .word 0xafa200e0
    .word 0x94770000
    .word 0x94620002
    .word 0xa7a20100
    .word 0x94620004
    .word 0xa7a20110
    .word 0x97a20100
    .word 0x00971818
    mult1 v0,a0,v0
    addu v0,a3,v0
    .word 0x9046000c
    addu v0,a3,v1
    .word 0x9045000c
    .word 0x97a20110
    or v1,a1,a2
    .word 0x00821018
    addu v0,a3,v0
    .word 0x9044000c
    and v0,a1,a2
    or v1,a0,v1
    and v0,a0,v0
    andi s5,v1,0xff
    beqz s5,L1d2300
    andi v0,v0,0xff
    bnez v0,L1d2308
    nop
    .word 0x8e420010
    .word 0x8e43000c
    addiu v0,v0,24
    sltu at,v1,v0
    beqz at,L1d1c30
    nop
    .word 0x8fa200d0
    .word 0x72402628
    subu v0,v0,s8
    addu v0,v1,v0
    jal func_001d81c0
    addiu a1,v0,24
    sltu v0,zero,v0
    .word 0xafa200a0
    .word 0x8fa200a0
    beqz v0,L1d2420
    nop
    .word 0x96440002
    sll v0,s8,0x1
    addu v1,v0,s8
    .word 0x8e420004
    .word 0x00831818
    addu v0,v0,v1
    .word 0xae420008
L1d1c30:
    .word 0x8e020010
    .word 0x8e03000c
    addiu v0,v0,12
    sltu at,v1,v0
    beqz at,L1d1c78
    nop
    .word 0x8fa200d0
    .word 0x72002628
    subu v0,v0,s8
    addu v0,v1,v0
    jal func_001d81c0
    addiu a1,v0,12
    sltu v0,zero,v0
    .word 0xafa200a0
    .word 0x8fa200a0
    beqz v0,L1d2420
    nop
    nop
L1d1c78:
    .word 0x8e220010
    .word 0x8e23000c
    addiu v0,v0,12
    sltu at,v1,v0
    beqz at,L1d1cc0
    nop
    .word 0x8fa200d0
    .word 0x72202628
    subu v0,v0,s8
    addu v0,v1,v0
    jal func_001d81c0
    addiu a1,v0,12
    sltu v0,zero,v0
    .word 0xafa200a0
    .word 0x8fa200a0
    beqz v0,L1d2420
    nop
    nop
L1d1cc0:
    beqz s3,L1d1d38
    nop
    .word 0x8e620010
    .word 0x8e63000c
    addiu v0,v0,12
    sltu at,v1,v0
    beqz at,L1d1d38
    nop
    .word 0x8fa200d0
    subu v0,v0,s8
    addu v0,v1,v0
    bnez v1,L1d1d08
    addiu a1,v0,12
    .word 0x72602628
    jal func_001d8120
    addiu a2,zero,12
    b L1d1d10
    nop
L1d1d08:
    jal func_001d81c0
    .word 0x72602628
L1d1d10:
    bnez v0,L1d1d20
    nop
    b L1d2420
    .word 0xafa000a0
L1d1d20:
    .word 0x96640002
    .word 0x8e630010
    .word 0x8e620004
    .word 0x00831818
    addu v0,v0,v1
    .word 0xae620008
L1d1d38:
    .word 0x8e420008
    addiu a0,zero,3
    .word 0xafa200f0
    andi v0,s5,0xff
    .word 0xafa20140
    .word 0x8fa20140
    .word 0xa7b70170
    .word 0xafa4019c
    .word 0xafa00198
    andi v1,v0,0x30
    .word 0x97a20100
    .word 0xa7a20172
    .word 0x97a20110
    beqz v1,L1d1e68
    .word 0xa7a20174
    .word 0x8fa20140
    andi v0,v0,0x10
    beqz v0,L1d1db8
    nop
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    addiu a3,sp,368
    addiu t0,sp,408
    .word 0x8c4b0000
    addiu t1,sp,412
    jal func_001d6410
    addiu t2,zero,16
    slti v0,v0,3
    bnez v0,L1d2308
    nop
L1d1db8:
    .word 0x8fa20140
    andi v0,v0,0x20
    beqz v0,L1d1e00
    nop
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    addiu a3,sp,368
    addiu t0,sp,408
    .word 0x8c4b0004
    addiu t1,sp,412
    jal func_001d6410
    addiu t2,zero,32
    slti v0,v0,3
    bnez v0,L1d2308
    nop
    nop
L1d1e00:
    .word 0x8fa70198
    .word 0x96030002
    .word 0x8e040004
    .word 0x8fa2019c
    sll a1,a3,0x1
    addu a1,a1,sp
    .word 0x94a60170
    addiu a1,a3,1
    andi a3,a1,0xf
    .word 0x00662818
    addu a1,a0,a1
    .word 0x90b5000c
    nop
    nop
L1d1e38:
    sll a1,a3,0x1
    addu a1,a1,sp
    .word 0x94a60170
    addiu a1,a3,1
    andi a3,a1,0xf
    .word 0x00662818
    addu a1,a0,a1
    .word 0x90a5000c
    or a1,s5,a1
    bne a3,v0,L1d1e38
    andi s5,a1,0xff
    nop
L1d1e68:
    andi v0,s5,0xff
    .word 0xafa20150
    .word 0x8fa20150
    andi v0,v0,0xc
    beqzl v0,L1d1f7c
    andi s5,s5,0xff
    .word 0x8fa20150
    andi v0,v0,0x4
    beqz v0,L1d1ec8
    nop
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    addiu a3,sp,368
    addiu t0,sp,408
    .word 0x8c4b0008
    addiu t1,sp,412
    jal func_001d6410
    addiu t2,zero,4
    slti v0,v0,3
    bnez v0,L1d2308
    nop
    nop
L1d1ec8:
    .word 0x8fa20150
    andi v0,v0,0x8
    beqz v0,L1d1f10
    nop
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    addiu a3,sp,368
    addiu t0,sp,408
    .word 0x8c4b000c
    addiu t1,sp,412
    jal func_001d6410
    addiu t2,zero,8
    slti v0,v0,3
    bnez v0,L1d2308
    nop
    nop
L1d1f10:
    .word 0x8fa70198
    .word 0x96030002
    .word 0x8e040004
    .word 0x8fa2019c
    sll a1,a3,0x1
    addu a1,a1,sp
    .word 0x94a60170
    addiu a1,a3,1
    andi a3,a1,0xf
    .word 0x00662818
    addu a1,a0,a1
    .word 0x90b5000c
    nop
    nop
L1d1f48:
    sll a1,a3,0x1
    addu a1,a1,sp
    .word 0x94a60170
    addiu a1,a3,1
    andi a3,a1,0xf
    .word 0x00662818
    addu a1,a0,a1
    .word 0x90a5000c
    or a1,s5,a1
    bne a3,v0,L1d1f48
    andi s5,a1,0xff
    nop
    andi s5,s5,0xff
L1d1f7c:
    andi v0,s5,0x3
    beqz v0,L1d2008
    andi v0,s5,0x1
    beqz v0,L1d1fcc
    andi v0,s5,0x2
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    addiu a3,sp,368
    addiu t0,sp,408
    .word 0x8c4b0010
    addiu t1,sp,412
    jal func_001d6410
    addiu t2,zero,1
    slti v0,v0,3
    bnez v0,L1d2308
    nop
    nop
    andi v0,s5,0x2
L1d1fcc:
    beqz v0,L1d2008
    nop
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    addiu a3,sp,368
    addiu t0,sp,408
    .word 0x8c4b0014
    addiu t1,sp,412
    jal func_001d6410
    addiu t2,zero,2
    slti v0,v0,3
    bnez v0,L1d2308
    nop
L1d2008:
    .word 0x8fa40198
    nop
    sll v0,a0,0x1
L1d2014:
    addu v0,v0,sp
    .word 0x94480170
    .word 0x96030002
    .word 0x8e020004
    .word 0x00681818
    addu v1,v0,v1
    .word 0x906a000c
    andi v0,t2,0x3f
    beqz v0,L1d2168
    nop
    .word 0x96250002
    .word 0x8e290004
    .word 0xc4620000
    .word 0xc4630004
    .word 0xc4640008
    .word 0x3c073f80
    .word 0x00a84018
    andi a2,t2,0x3
    addu t0,t1,t0
    .word 0xe504000c
    addiu a1,zero,1
    beq a2,a1,L1d2098
    .word 0xad070018
    addiu a1,zero,2
    beq a2,a1,L1d2084
    nop
    b L1d20a8
    .word 0xc6c00010
L1d2084:
    .word 0xc6c10010
    .word 0xc6c00018
    add.s $f0,$f1,$f0
    b L1d20b8
    .word 0xe5000000
L1d2098:
    .word 0xc6c00018
    b L1d20b8
    .word 0xe5000000
    .word 0xc6c00010
L1d20a8:
    .word 0xc6c10018
    mul.s $f0,$f0,$f2
    add.s $f0,$f1,$f0
    .word 0xe5000000
L1d20b8:
    andi a2,t2,0xf
    addiu a1,zero,4
    beq a2,a1,L1d20ec
    addiu a1,zero,8
    beq a2,a1,L1d20d8
    nop
    b L1d20fc
    .word 0xc6c00014
L1d20d8:
    .word 0xc6c10014
    .word 0xc6c0001c
    add.s $f0,$f1,$f0
    b L1d2110
    .word 0xe5000004
L1d20ec:
    .word 0xc6c0001c
    b L1d2110
    .word 0xe5000004
    .word 0xc6c00014
L1d20fc:
    .word 0xc6c1001c
    mul.s $f0,$f0,$f3
    add.s $f0,$f1,$f0
    .word 0xe5000004
    nop
L1d2110:
    addiu a1,zero,16
    beq v0,a1,L1d2138
    addiu a1,zero,32
    beq v0,a1,L1d212c
    nop
    b L1d2148
    .word 0xc6c00000
L1d212c:
    .word 0xc6c00024
    b L1d2158
    .word 0xe5000008
L1d2138:
    .word 0xc6c00020
    b L1d2158
    .word 0xe5000008
    .word 0xc6c00000
L1d2148:
    .word 0xc6c10004
    mul.s $f0,$f0,$f4
    add.s $f0,$f1,$f0
    .word 0xe5000008
L1d2158:
    .word 0xc4600020
    .word 0xe5000010
    .word 0xc4600024
    .word 0xe5000014
L1d2168:
    .word 0x8fa6019c
    addiu v0,a0,1
    andi a0,v0,0xf
    bne a0,a2,L1d2014
    sll v0,a0,0x1
    .word 0x8fa200c0
    .word 0x8fa50198
    .word 0x8c430004
    sll v0,a1,0x1
    addu v0,v0,sp
    andi v1,v1,0x2
    bnez v1,L1d2230
    .word 0x94420170
    b L1d21e4
    andi a3,v0,0xffff
    sll v0,a1,0x1
L1d21a8:
    addu v0,v0,sp
    .word 0x94440170
    sll v0,a2,0x1
    addu v1,v0,sp
    addiu v0,a2,1
    andi a2,v0,0xf
    addiu v0,a1,1
    andi a1,v0,0xf
    sll v0,a1,0x1
    .word 0xa4640170
    addu v0,v0,sp
    .word 0x94420170
    nop
    nop
    andi a3,v0,0xffff
L1d21e4:
    bnel a3,s7,L1d21a8
    sll v0,a1,0x1
    .word 0xafa6019c
    beq a3,s7,L1d2230
    .word 0xafa50198
    .word 0x96230002
    .word 0x8e250004
    .word 0x00772018
    addu a0,a1,a0
    .word 0xc4830020
    .word 0xc4820024
    .word 0xc4810028
    .word 0xc480002c
    mult1 v1,v1,a3
    addu v1,a1,v1
    .word 0xe4630020
    .word 0xe4620024
    .word 0xe4610028
    .word 0xe460002c
L1d2230:
    .word 0x8fa40198
    .word 0x8fa300f0
    addiu s4,zero,1
    .word 0xa4620000
    addiu v1,a0,1
    andi a1,v1,0xf
    addiu v1,a0,2
    sll a0,a1,0x1
    addu a0,a0,sp
    .word 0x94870170
    .word 0x8fa500f0
    andi v1,v1,0xf
    sll a0,v1,0x1
    addu a2,a0,sp
    .word 0xa4a70002
    .word 0x94c60170
    .word 0x8fa500f0
    addiu a0,v1,1
    andi a0,a0,0xf
    .word 0xa4a60004
    .word 0x8e460010
    .word 0x96470002
    .word 0x8e450004
    addiu a2,a2,-3
    .word 0x00e63018
    addu a1,a1,a2
    b L1d22e8
    .word 0xae450008
    sll v1,v1,0x1
L1d22a4:
    addu a2,v1,sp
    sll v1,a0,0x1
    addu a1,v1,sp
    .word 0x8e470008
    .word 0x8fa30130
    addiu s4,s4,1
    addu v1,a3,v1
    .word 0xae430008
    .word 0x8e470008
    .word 0x70801e28
    addiu a0,a0,1
    andi a0,a0,0xf
    .word 0xa4e20000
    .word 0x94c60170
    .word 0xa4e60002
    .word 0x94a50170
    .word 0xa4e50004
L1d22e8:
    .word 0x8fa5019c
    bnel a0,a1,L1d22a4
    sll v1,v1,0x1
    .word 0x8fa200f0
    b L1d2308
    .word 0xae420008
L1d2300:
    addiu s4,zero,1
    nop
L1d2308:
    bnez s4,L1d23f8
    addiu v1,s4,-1
    .word 0x8fa200d0
    .word 0x8e450010
    .word 0x96470002
    .word 0x8e040010
    .word 0x8e480004
    addiu s8,s8,-1
    addiu v1,v0,-1
    sll v0,v1,0x1
    addu v1,v0,v1
    .word 0x8fa200e0
    .word 0x00e33018
    addiu a1,a1,-3
    mult1 a1,a3,a1
    addu a1,t0,a1
    .word 0x8fa300d0
    subu v0,a0,v0
    .word 0x8e440008
    addu a2,t0,a2
    addiu v1,v1,-1
    .word 0xafa300d0
    .word 0x94c30000
    .word 0xa4830000
    .word 0x94c40002
    .word 0x8e430008
    .word 0xa4640002
    .word 0x94c40004
    .word 0x8e430008
    .word 0xa4640004
    .word 0x94a30000
    .word 0xa4c30000
    .word 0x94a30002
    .word 0xa4c30002
    .word 0x94a30004
    .word 0xa4c30004
    .word 0x8e430010
    addiu v1,v1,-3
    .word 0xae430010
    .word 0x8fa300e0
    .word 0xae030010
    .word 0x8fa300e0
    beqz s3,L1d2420
    .word 0xae230010
    .word 0x8e630010
    .word 0x96640002
    subu v1,v1,v0
    beqz v0,L1d2420
    .word 0xae630010
    nop
L1d23d0:
    .word 0x8e630008
    addiu v0,v0,-1
    subu v1,v1,a0
    .word 0xae630008
    nop
    bnez v0,L1d23d0
    nop
    b L1d2424
    .word 0x8fa200a0
    addiu v1,s4,-1
L1d23f8:
    sll v0,v1,0x1
    addu v1,v0,v1
    .word 0x8e420010
    addu v0,v0,v1
    .word 0xae420010
    .word 0x8e430008
    .word 0x8fa20130
    addu v0,v1,v0
    .word 0xae420008
    nop
L1d2420:
    .word 0x8fa200a0
L1d2424:
    bnez v0,L1d243c
    nop
    jal func_001d5ee0
    .word 0x8fa40168
    b L1d2568
    .word 0x8fa200a0
L1d243c:
    .word 0x8fa200d0
    addiu s8,s8,1
    sltu at,s8,v0
    bnez at,L1d1b54
    nop
L1d2450:
    .word 0x8e430010
    .word 0x3c02aaaa
    ori v0,v0,0xaaab
    .word 0x00430019
    nop
    nop
    mfhi v0
    srl v1,v0,0x1
    .word 0x8fa200b0
    .word 0xac4300ac
    .word 0x8e030010
    .word 0x8fa200b0
    .word 0xac4300b0
L1d2484:
    .word 0x8fa200b0
    .word 0x8c4200ac
    bnez v0,L1d2500
    .word 0x3c020033
    .word 0x3c020033
    addiu s1,v0,-6624
    .word 0x8e220008
    beqz v0,L1d24dc
    .word 0x8e300000
    .word 0x8fa5016c
    .word 0x72002628
    jal func_001d5d50
    addiu a2,zero,1
    beqz v0,L1d24dc
    .word 0x70402628
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s1,16
    bnez v0,L1d24dc
    nop
    .word 0xae220008
L1d24dc:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d2560
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
    b L1d2564
    .word 0x8fa200a0
L1d2500:
    addiu s1,v0,-6624
    .word 0x8e220008
    beqz v0,L1d2544
    .word 0x8e300000
    .word 0x8fa5016c
    .word 0x72002628
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d2544
    .word 0x70402628
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s1,16
    bnez v0,L1d2544
    nop
    .word 0xae220008
L1d2544:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L1d2560
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
L1d2560:
    .word 0x8fa200a0
L1d2564:
    nop
L1d2568:
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
    addiu sp,sp,416
}
