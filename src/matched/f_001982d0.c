extern void func_001214b8(void);
extern void func_00121b70(void);
extern void func_0013b550(void);
extern void func_00195560(void);
extern void func_001a3ac0(void);
extern void func_0024b4b0(void);
extern void func_0024b540(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-688
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70a08e28
    .word 0x70809e28
    beqz s1,L198300
    .word 0x70c08628
    b L1983a0
    .word 0x72003628
L198300:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,211
    .word 0xae620008
    .word 0x3c020031
    addiu v0,v0,21888
    .word 0xae60000c
    .word 0xae620014
    addiu v0,zero,6
    .word 0xae620010
    .word 0x3c020031
    .word 0xae600018
    addiu a0,v0,21888
    addiu a1,zero,212
    jal func_00195560
    .word 0xae600004
    .word 0x3c020031
    addiu a0,v0,21920
    jal func_00195560
    addiu a1,zero,213
    .word 0x3c020031
    addiu a0,v0,21952
    jal func_00195560
    addiu a1,zero,214
    .word 0x3c020031
    addiu a0,v0,21984
    jal func_00195560
    addiu a1,zero,215
    .word 0x3c020031
    addiu a0,v0,22016
    jal func_00195560
    addiu a1,zero,216
    .word 0x3c020031
    addiu a0,v0,22048
    jal func_00195560
    addiu a1,zero,217
    .word 0x8e620004
    ori v0,v0,0x10
    .word 0xae620004
    .word 0x72003628
L1983a0:
    .word 0x72602628
    jal func_001a3ac0
    .word 0x72202e28
    bnez v0,L1983c0
    addiu v0,zero,6
    b L199610
    .word 0x70001628
    addiu v0,zero,6
L1983c0:
    beq s1,v0,L1983e8
    nop
    addiu v0,zero,5
    beq s1,v0,L1983e8
    nop
    addiu v0,zero,3
    beq s1,v0,L1983e8
    nop
    b L199610
    addiu v0,zero,1
L1983e8:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,267
    .word 0x80500000
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,268
    .word 0x80510000
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,269
    .word 0x80520000
    addiu a0,sp,80
    addiu v1,zero,15
    .word 0x3c02002e
    addiu a1,v0,12304
L198428:
    .word 0x78a20000
    addiu v1,v1,-1
    .word 0x7c820000
    addiu a1,a1,16
    addiu a0,a0,16
    bgtz v1,L198428
    nop
    .word 0xdca30000
    .word 0xc4a20008
    .word 0xfc830000
    .word 0xe4820008
    .word 0xaf80851c
    .word 0x8e620018
    sltiu at,v0,6
    beqz at,L199604
    addiu a0,zero,10
    .word 0x3c03002f
    addiu v1,v1,-416
    sll v0,v0,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,396
    .word 0x8f848328
    addiu a1,zero,397
    jal func_0013b550
    .word 0xafa20064
    .word 0x8f848328
    addiu a1,zero,398
    jal func_0013b550
    .word 0xafa20080
    .word 0x8f848328
    addiu a1,zero,399
    jal func_0013b550
    .word 0xafa2009c
    .word 0x8f848328
    addiu a1,zero,400
    jal func_0013b550
    .word 0xafa200b8
    .word 0x8f848328
    addiu a1,zero,401
    jal func_0013b550
    .word 0xafa200d4
    .word 0x8f848328
    addiu a1,zero,403
    jal func_0013b550
    .word 0xafa200f0
    .word 0x8f848328
    addiu a1,zero,402
    jal func_0013b550
    .word 0xafa2010c
    .word 0x8f848328
    addiu a1,zero,404
    jal func_0013b550
    .word 0xafa20128
    .word 0x8f84851c
    .word 0xa3b10158
    .word 0xa3a00159
    .word 0xa3a0015a
    .word 0xa3a0015b
    .word 0xafa20144
    beqz a0,L19854c
    .word 0xa3a0015c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198558
    .word 0xaf82851c
L19854c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198558:
    .word 0x8f84851c
    addiu a1,sp,344
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-123
    .word 0xa3a20160
    .word 0xa3b10161
    .word 0xa3a00162
    .word 0xa3a00163
    .word 0xafa40068
    beqz a0,L1985ac
    .word 0xa3a00164
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L1985b8
    .word 0xaf82851c
L1985ac:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L1985b8:
    .word 0x8f84851c
    addiu a1,sp,352
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-122
    .word 0xa3a20168
    .word 0xa3b10169
    .word 0xa3a0016a
    .word 0xa3a0016b
    .word 0xafa40084
    beqz a0,L19860c
    .word 0xa3a0016c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198618
    .word 0xaf82851c
L19860c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198618:
    .word 0x8f84851c
    addiu a1,sp,360
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-125
    .word 0xa3a20170
    .word 0xa3b10171
    .word 0xa3a00172
    .word 0xa3a00173
    .word 0xafa400a0
    beqz a0,L19866c
    .word 0xa3a00174
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198678
    .word 0xaf82851c
L19866c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198678:
    .word 0x8f84851c
    addiu a1,sp,368
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-124
    .word 0xa3a20178
    .word 0xa3b10179
    .word 0xa3a0017a
    .word 0xa3a0017b
    .word 0xafa400bc
    beqz a0,L1986cc
    .word 0xa3a0017c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L1986d8
    .word 0xaf82851c
L1986cc:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L1986d8:
    .word 0x8f84851c
    addiu a1,sp,376
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-123
    .word 0xa3a20180
    .word 0xa3a20181
    .word 0xa3b10182
    .word 0xa3a00183
    .word 0xafa400d8
    beqz a0,L19872c
    .word 0xa3a00184
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198738
    .word 0xaf82851c
L19872c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198738:
    .word 0x8f84851c
    addiu a1,sp,384
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-122
    .word 0xa3a20188
    .word 0xa3a20189
    .word 0xa3b1018a
    .word 0xa3a0018b
    .word 0xafa400f4
    beqz a0,L19878c
    .word 0xa3a0018c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198798
    .word 0xaf82851c
L19878c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198798:
    .word 0x8f84851c
    addiu a1,sp,392
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-125
    .word 0xa3a20190
    .word 0xa3a20191
    .word 0xa3b10192
    .word 0xa3a00193
    .word 0xafa40110
    beqz a0,L1987ec
    .word 0xa3a00194
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L1987f8
    .word 0xaf82851c
L1987ec:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L1987f8:
    .word 0x8f84851c
    addiu a1,sp,400
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-124
    .word 0xa3a20198
    .word 0xa3a20199
    .word 0xa3b1019a
    .word 0xa3a0019b
    .word 0xafa4012c
    beqz a0,L19884c
    .word 0xa3a0019c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198858
    .word 0xaf82851c
L19884c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198858:
    .word 0x8f84851c
    addiu a1,sp,408
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    .word 0xdf8584d8
    addiu a2,sp,416
    addiu v1,zero,9
    .word 0xafa40148
    .word 0xfcc50000
    addiu v0,sp,80
    .word 0xafa301a0
    addiu a0,zero,10
    .word 0xafa201a4
    jal func_0024b540
    .word 0x70002e28
    b L19960c
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,405
    .word 0x8f848328
    addiu a1,zero,410
    jal func_0013b550
    .word 0xafa20064
    .word 0x8f848328
    addiu a1,zero,411
    jal func_0013b550
    .word 0xafa20080
    .word 0x8f848328
    addiu a1,zero,412
    jal func_0013b550
    .word 0xafa2009c
    .word 0x8f848328
    addiu a1,zero,413
    jal func_0013b550
    .word 0xafa200b8
    .word 0x8f848328
    addiu a1,zero,406
    jal func_0013b550
    .word 0xafa200d4
    .word 0x8f848328
    addiu a1,zero,407
    jal func_0013b550
    .word 0xafa200f0
    .word 0x8f848328
    addiu a1,zero,408
    jal func_0013b550
    .word 0xafa2010c
    .word 0x8f848328
    addiu a1,zero,409
    jal func_0013b550
    .word 0xafa20128
    .word 0x8f84851c
    .word 0xa3b101a8
    .word 0xa3a001a9
    .word 0xa3a001aa
    .word 0xa3a001ab
    .word 0xafa20144
    beqz a0,L19896c
    .word 0xa3a001ac
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198978
    .word 0xaf82851c
L19896c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198978:
    .word 0x8f84851c
    addiu a1,sp,424
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-123
    .word 0xa3a201b0
    .word 0xa3b101b1
    .word 0xa3a001b2
    .word 0xa3a001b3
    .word 0xafa40068
    beqz a0,L1989cc
    .word 0xa3a001b4
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L1989d8
    .word 0xaf82851c
L1989cc:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L1989d8:
    .word 0x8f84851c
    addiu a1,sp,432
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-122
    .word 0xa3a201b8
    .word 0xa3b101b9
    .word 0xa3a001ba
    .word 0xa3a001bb
    .word 0xafa40084
    beqz a0,L198a2c
    .word 0xa3a001bc
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198a38
    .word 0xaf82851c
L198a2c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198a38:
    .word 0x8f84851c
    addiu a1,sp,440
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-125
    .word 0xa3a201c0
    .word 0xa3b101c1
    .word 0xa3a001c2
    .word 0xa3a001c3
    .word 0xafa400a0
    beqz a0,L198a8c
    .word 0xa3a001c4
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198a98
    .word 0xaf82851c
L198a8c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198a98:
    .word 0x8f84851c
    addiu a1,sp,448
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-124
    .word 0xa3a201c8
    .word 0xa3b101c9
    .word 0xa3a001ca
    .word 0xa3a001cb
    .word 0xafa400bc
    beqz a0,L198aec
    .word 0xa3a001cc
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198af8
    .word 0xaf82851c
L198aec:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198af8:
    .word 0x8f84851c
    addiu a1,sp,456
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-123
    .word 0xa3a201d0
    .word 0xa3a201d1
    .word 0xa3b101d2
    .word 0xa3a001d3
    .word 0xafa400d8
    beqz a0,L198b4c
    .word 0xa3a001d4
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198b58
    .word 0xaf82851c
L198b4c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198b58:
    .word 0x8f84851c
    addiu a1,sp,464
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-122
    .word 0xa3a201d8
    .word 0xa3a201d9
    .word 0xa3b101da
    .word 0xa3a001db
    .word 0xafa400f4
    beqz a0,L198bac
    .word 0xa3a001dc
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198bb8
    .word 0xaf82851c
L198bac:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198bb8:
    .word 0x8f84851c
    addiu a1,sp,472
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-125
    .word 0xa3a201e0
    .word 0xa3a201e1
    .word 0xa3b101e2
    .word 0xa3a001e3
    .word 0xafa40110
    beqz a0,L198c0c
    .word 0xa3a001e4
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198c18
    .word 0xaf82851c
L198c0c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198c18:
    .word 0x8f84851c
    addiu a1,sp,480
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-124
    .word 0xa3a201e8
    .word 0xa3a201e9
    .word 0xa3b101ea
    .word 0xa3a001eb
    .word 0xafa4012c
    beqz a0,L198c6c
    .word 0xa3a001ec
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198c78
    .word 0xaf82851c
L198c6c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198c78:
    .word 0x8f84851c
    addiu a1,sp,488
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    .word 0xdf8584d8
    addiu a2,sp,496
    addiu v1,zero,9
    .word 0xafa40148
    .word 0xfcc50000
    addiu v0,sp,80
    .word 0xafa301f0
    addiu a0,zero,10
    .word 0xafa201f4
    jal func_0024b540
    .word 0x70002e28
    b L19960c
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,416
    .word 0x8f848328
    addiu a1,zero,415
    jal func_0013b550
    .word 0xafa20064
    .word 0x8f848328
    addiu a1,zero,418
    jal func_0013b550
    .word 0xafa20080
    .word 0x8f848328
    addiu a1,zero,417
    jal func_0013b550
    .word 0xafa2009c
    .word 0xafa200b8
    addiu v0,zero,-123
    .word 0x8f84851c
    .word 0xa3a201f8
    addiu v0,zero,-122
    .word 0xa3a201f9
    .word 0xa3b101fa
    .word 0xa3a001fb
    beqz a0,L198d44
    .word 0xa3a001fc
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198d50
    .word 0xaf82851c
L198d44:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198d50:
    .word 0x8f84851c
    addiu a1,sp,504
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    addiu v0,zero,-122
    .word 0x8f84851c
    .word 0xa3a20200
    addiu v0,zero,-123
    .word 0xa3a20201
    .word 0xa3b10202
    .word 0xa3a00203
    .word 0xafa40068
    beqz a0,L198da8
    .word 0xa3a00204
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198db4
    .word 0xaf82851c
L198da8:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198db4:
    .word 0x8f84851c
    addiu a1,sp,512
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    addiu v0,zero,-125
    .word 0x8f84851c
    .word 0xa3a20208
    addiu v0,zero,-124
    .word 0xa3a20209
    .word 0xa3b1020a
    .word 0xa3a0020b
    .word 0xafa40084
    beqz a0,L198e0c
    .word 0xa3a0020c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198e18
    .word 0xaf82851c
L198e0c:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198e18:
    .word 0x8f84851c
    addiu a1,sp,520
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    addiu v0,zero,-124
    .word 0x8f84851c
    .word 0xa3a20210
    addiu v0,zero,-125
    .word 0xa3a20211
    .word 0xa3b10212
    .word 0xa3a00213
    .word 0xafa400a0
    beqz a0,L198e70
    .word 0xa3a00214
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198e7c
    .word 0xaf82851c
L198e70:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198e7c:
    .word 0x8f84851c
    addiu a1,sp,528
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    .word 0xdf8584d8
    addiu a2,sp,536
    addiu v1,zero,4
    .word 0xafa400bc
    .word 0xfcc50000
    addiu v0,sp,80
    .word 0xafa30218
    addiu a0,zero,10
    .word 0xafa2021c
    jal func_0024b540
    .word 0x70002e28
    b L19960c
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,422
    .word 0x8f848328
    addiu a1,zero,421
    jal func_0013b550
    .word 0xafa20064
    .word 0x8f848328
    addiu a1,zero,419
    jal func_0013b550
    .word 0xafa20080
    .word 0x8f848328
    addiu a1,zero,420
    jal func_0013b550
    .word 0xafa2009c
    .word 0xafa200b8
    addiu v1,zero,-123
    .word 0x8f84851c
    addiu v0,zero,-122
    .word 0xa3a30220
    .word 0xa3a20221
    .word 0xa3a30222
    .word 0xa3b10223
    beqz a0,L198f48
    .word 0xa3a00224
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198f54
    .word 0xaf82851c
L198f48:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198f54:
    .word 0x8f84851c
    addiu a1,sp,544
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v1,zero,-122
    addiu v0,zero,-123
    .word 0xa3a30228
    .word 0xa3a20229
    .word 0xa3a3022a
    .word 0xa3b1022b
    .word 0xafa40068
    beqz a0,L198fac
    .word 0xa3a0022c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L198fb8
    .word 0xaf82851c
L198fac:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L198fb8:
    .word 0x8f84851c
    addiu a1,sp,552
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v1,zero,-125
    addiu v0,zero,-124
    .word 0xa3a30230
    .word 0xa3a20231
    .word 0xa3a30232
    .word 0xa3b10233
    .word 0xafa40084
    beqz a0,L199010
    .word 0xa3a00234
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19901c
    .word 0xaf82851c
L199010:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19901c:
    .word 0x8f84851c
    addiu a1,sp,560
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v1,zero,-124
    addiu v0,zero,-125
    .word 0xa3a30238
    .word 0xa3a20239
    .word 0xa3a3023a
    .word 0xa3b1023b
    .word 0xafa400a0
    beqz a0,L199074
    .word 0xa3a0023c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L199080
    .word 0xaf82851c
L199074:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L199080:
    .word 0x8f84851c
    addiu a1,sp,568
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    .word 0xdf8584d8
    addiu a2,sp,576
    addiu v1,zero,4
    .word 0xafa400bc
    .word 0xfcc50000
    addiu v0,sp,80
    .word 0xafa30240
    addiu a0,zero,10
    .word 0xafa20244
    jal func_0024b540
    .word 0x70002e28
    b L19960c
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,392
    .word 0x8f848328
    addiu a1,zero,393
    jal func_0013b550
    .word 0xafa20064
    .word 0x8f848328
    addiu a1,zero,394
    jal func_0013b550
    .word 0xafa20080
    .word 0x8f848328
    addiu a1,zero,395
    jal func_0013b550
    .word 0xafa2009c
    .word 0xafa200b8
    addiu v0,zero,-123
    .word 0x8f84851c
    .word 0xa3a20248
    .word 0xa3b20249
    .word 0xa3a0024a
    .word 0xa3a0024b
    beqz a0,L199148
    .word 0xa3a0024c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L199154
    .word 0xaf82851c
L199148:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L199154:
    .word 0x8f84851c
    addiu a1,sp,584
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-122
    .word 0xa3a20250
    .word 0xa3b20251
    .word 0xa3a00252
    .word 0xa3a00253
    .word 0xafa40068
    beqz a0,L1991a8
    .word 0xa3a00254
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L1991b4
    .word 0xaf82851c
L1991a8:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L1991b4:
    .word 0x8f84851c
    addiu a1,sp,592
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-125
    .word 0xa3a20258
    .word 0xa3b20259
    .word 0xa3a0025a
    .word 0xa3a0025b
    .word 0xafa40084
    beqz a0,L199208
    .word 0xa3a0025c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L199214
    .word 0xaf82851c
L199208:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L199214:
    .word 0x8f84851c
    addiu a1,sp,600
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-124
    .word 0xa3a20260
    .word 0xa3b20261
    .word 0xa3a00262
    .word 0xa3a00263
    .word 0xafa400a0
    beqz a0,L199268
    .word 0xa3a00264
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L199274
    .word 0xaf82851c
L199268:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L199274:
    .word 0x8f84851c
    addiu a1,sp,608
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    .word 0xdf8584d8
    addiu a2,sp,616
    addiu v1,zero,4
    .word 0xafa400bc
    .word 0xfcc50000
    addiu v0,sp,80
    .word 0xafa30268
    addiu a0,zero,10
    .word 0xafa2026c
    jal func_0024b540
    .word 0x70002e28
    b L19960c
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,385
    .word 0x8f848328
    addiu a1,zero,388
    jal func_0013b550
    .word 0xafa20064
    .word 0x8f848328
    addiu a1,zero,389
    jal func_0013b550
    .word 0xafa20080
    .word 0x8f848328
    addiu a1,zero,387
    jal func_0013b550
    .word 0xafa2009c
    .word 0x8f848328
    addiu a1,zero,386
    jal func_0013b550
    .word 0xafa200b8
    .word 0x8f848328
    addiu a1,zero,390
    jal func_0013b550
    .word 0xafa200d4
    .word 0x8f848328
    addiu a1,zero,391
    jal func_0013b550
    .word 0xafa200f0
    .word 0x8f84851c
    .word 0xa3b00270
    .word 0xa3a00271
    .word 0xa3a00272
    .word 0xa3a00273
    .word 0xafa2010c
    beqz a0,L199368
    .word 0xa3a00274
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L199374
    .word 0xaf82851c
L199368:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L199374:
    .word 0x8f84851c
    addiu a1,sp,624
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-123
    .word 0xa3a20278
    .word 0xa3b00279
    .word 0xa3a0027a
    .word 0xa3a0027b
    .word 0xafa40068
    beqz a0,L1993c8
    .word 0xa3a0027c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L1993d4
    .word 0xaf82851c
L1993c8:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L1993d4:
    .word 0x8f84851c
    addiu a1,sp,632
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-122
    .word 0xa3a20280
    .word 0xa3b00281
    .word 0xa3a00282
    .word 0xa3a00283
    .word 0xafa40084
    beqz a0,L199428
    .word 0xa3a00284
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L199434
    .word 0xaf82851c
L199428:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L199434:
    .word 0x8f84851c
    addiu a1,sp,640
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-125
    .word 0xa3a20288
    .word 0xa3b00289
    .word 0xa3a0028a
    .word 0xa3a0028b
    .word 0xafa400a0
    beqz a0,L199488
    .word 0xa3a0028c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L199494
    .word 0xaf82851c
L199488:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L199494:
    .word 0x8f84851c
    addiu a1,sp,648
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-124
    .word 0xa3a20290
    .word 0xa3b00291
    .word 0xa3a00292
    .word 0xa3a00293
    .word 0xafa400bc
    beqz a0,L1994e8
    .word 0xa3a00294
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L1994f4
    .word 0xaf82851c
L1994e8:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L1994f4:
    .word 0x8f84851c
    addiu a1,sp,656
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-125
    .word 0xa3a20298
    .word 0xa3a20299
    .word 0xa3b0029a
    .word 0xa3a0029b
    .word 0xafa400d8
    beqz a0,L199548
    .word 0xa3a0029c
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L199554
    .word 0xaf82851c
L199548:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L199554:
    .word 0x8f84851c
    addiu a1,sp,664
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    addiu v0,zero,-124
    .word 0xa3a202a0
    .word 0xa3a202a1
    .word 0xa3b002a2
    .word 0xa3a002a3
    .word 0xafa400f4
    beqz a0,L1995a8
    .word 0xa3a002a4
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L1995b4
    .word 0xaf82851c
L1995a8:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L1995b4:
    .word 0x8f84851c
    addiu a1,sp,672
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    .word 0xdf8584d8
    addiu a2,sp,680
    addiu v1,zero,7
    .word 0xafa40110
    .word 0xfcc50000
    addiu v0,sp,80
    .word 0xafa302a8
    addiu a0,zero,10
    .word 0xafa202ac
    jal func_0024b540
    .word 0x70002e28
    b L19960c
    nop
    addiu a0,zero,10
L199604:
    jal func_0024b4b0
    .word 0x70002e28
L19960c:
    addiu v0,zero,1
L199610:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,688
}
