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
    .word 0x24020001
    .word 0xafa200a0
    jal func_001d8240
    .word 0x70002e28
    .word 0x8fa40168
    .word 0x8fa6016c
    .word 0x70408628
    jal func_001d8240
    .word 0x24050001
    .word 0x8fa40168
    .word 0x8fa6016c
    .word 0x70408e28
    jal func_001d8240
    .word 0x24050002
    .word 0x8fa40168
    .word 0x8fa6016c
    .word 0x70409628
    jal func_001d8240
    .word 0x24050003
    .word 0x7040a628
    .word 0x8fa20168
    .word 0x8c430008
    .word 0x8c630010
    .word 0x2402ffff
    bne v1,v0,L1d0e7c
    .word 0x000310c0
    b L1d0eb8
    .word 0x70001e28
L1d0e7c:
    .word 0x00431023
    .word 0x00021880
    .word 0x8fa20168
    .word 0x00621821
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8fa20168
    .word 0x8c420008
    .word 0x8c430010
    .word 0x000310c0
    .word 0x00431023
    .word 0x00021880
    .word 0x8fa20168
    .word 0x00431021
    .word 0x24430014
L1d0eb8:
    beqz v1,L1d0ed8
    nop
    .word 0x8c620004
    beqz v0,L1d0ed8
    nop
    .word 0x8c620008
    b L1d0eec
    .word 0xafa200c0
L1d0ed8:
    .word 0x3c020033
    .word 0x2443a620
    .word 0x8f828618
    .word 0x00621021
    .word 0xafa200c0
L1d0eec:
    .word 0x8fa40168
    .word 0x8fa6016c
    jal func_001d8240
    .word 0x24050005
    .word 0x70409e28
    .word 0x8e820008
    .word 0xafa200b0
    beqz s3,L1d0f1c
    .word 0x96430002
    .word 0x2402000c
    .word 0xa6620002
    .word 0xae600010
L1d0f1c:
    .word 0x8fa200b0
    .word 0x8c4200b4
    beqz v0,L1d18a4
    nop
    .word 0x8fa200b0
    .word 0x8c4200ac
    .word 0xafa200d0
    .word 0x8fa200d0
    beqz v0,L1d1870
    .word 0x7000f628
    .word 0x3c02002f
    .word 0x24420410
    .word 0xafa20120
    .word 0x3c020033
    .word 0x2456e640
    .word 0x00031040
    .word 0x00431021
    .word 0xafa20130
L1d0f64:
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
    .word 0x70821018
    .word 0x00e21021
    .word 0x9046000c
    .word 0x00e31021
    .word 0x9045000c
    .word 0x97a20110
    .word 0x00a61825
    .word 0x00821018
    .word 0x00e21021
    .word 0x9044000c
    .word 0x00a61024
    .word 0x00831825
    .word 0x00821024
    .word 0x307500ff
    beqz s5,L1d1720
    .word 0x304200ff
    bnez v0,L1d1728
    nop
    .word 0x8e420010
    .word 0x8e43000c
    .word 0x24420018
    .word 0x0062082b
    beqz at,L1d1040
    nop
    .word 0x8fa200d0
    .word 0x72402628
    .word 0x005e1023
    .word 0x00621021
    jal func_001d81c0
    .word 0x24450018
    .word 0x0002102b
    .word 0xafa200a0
    .word 0x8fa200a0
    beqz v0,L1d1840
    nop
    .word 0x96440002
    .word 0x001e1040
    .word 0x005e1821
    .word 0x8e420004
    .word 0x00831818
    .word 0x00431021
    .word 0xae420008
L1d1040:
    .word 0x8e020010
    .word 0x8e03000c
    .word 0x2442000c
    .word 0x0062082b
    beqz at,L1d1088
    nop
    .word 0x8fa200d0
    .word 0x72002628
    .word 0x005e1023
    .word 0x00621021
    jal func_001d81c0
    .word 0x2445000c
    .word 0x0002102b
    .word 0xafa200a0
    .word 0x8fa200a0
    beqz v0,L1d1840
    nop
    nop
L1d1088:
    .word 0x8e220010
    .word 0x8e23000c
    .word 0x2442000c
    .word 0x0062082b
    beqz at,L1d10d0
    nop
    .word 0x8fa200d0
    .word 0x72202628
    .word 0x005e1023
    .word 0x00621021
    jal func_001d81c0
    .word 0x2445000c
    .word 0x0002102b
    .word 0xafa200a0
    .word 0x8fa200a0
    beqz v0,L1d1840
    nop
    nop
L1d10d0:
    beqz s3,L1d1148
    nop
    .word 0x8e620010
    .word 0x8e63000c
    .word 0x2442000c
    .word 0x0062082b
    beqz at,L1d1148
    nop
    .word 0x8fa200d0
    .word 0x005e1023
    .word 0x00621021
    bnez v1,L1d1118
    .word 0x2445000c
    .word 0x72602628
    jal func_001d8120
    .word 0x2406000c
    b L1d1120
    nop
L1d1118:
    jal func_001d81c0
    .word 0x72602628
L1d1120:
    bnez v0,L1d1130
    nop
    b L1d1840
    .word 0xafa000a0
L1d1130:
    .word 0x96640002
    .word 0x8e630010
    .word 0x8e620004
    .word 0x00831818
    .word 0x00431021
    .word 0xae620008
L1d1148:
    .word 0x8e420008
    .word 0x24040003
    .word 0xafa200f0
    .word 0x32a200ff
    .word 0xafa20140
    .word 0x8fa20140
    .word 0xa7b70170
    .word 0xafa4019c
    .word 0xafa00198
    .word 0x30430030
    .word 0x97a20100
    .word 0xa7a20172
    .word 0x97a20110
    beqz v1,L1d1278
    .word 0xa7a20174
    .word 0x8fa20140
    .word 0x30420010
    beqz v0,L1d11c8
    nop
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    .word 0x27a70170
    .word 0x27a80198
    .word 0x8c4b0000
    .word 0x27a9019c
    jal func_001d6410
    .word 0x240a0010
    .word 0x28420003
    bnez v0,L1d1728
    nop
L1d11c8:
    .word 0x8fa20140
    .word 0x30420020
    beqz v0,L1d1210
    nop
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    .word 0x27a70170
    .word 0x27a80198
    .word 0x8c4b0004
    .word 0x27a9019c
    jal func_001d6410
    .word 0x240a0020
    .word 0x28420003
    bnez v0,L1d1728
    nop
    nop
L1d1210:
    .word 0x8fa70198
    .word 0x96030002
    .word 0x8e040004
    .word 0x8fa2019c
    .word 0x00072840
    .word 0x00bd2821
    .word 0x94a60170
    .word 0x24e50001
    .word 0x30a7000f
    .word 0x00662818
    .word 0x00852821
    .word 0x90b5000c
    nop
    nop
L1d1248:
    .word 0x00072840
    .word 0x00bd2821
    .word 0x94a60170
    .word 0x24e50001
    .word 0x30a7000f
    .word 0x00662818
    .word 0x00852821
    .word 0x90a5000c
    .word 0x02a52825
    bne a3,v0,L1d1248
    .word 0x30b500ff
    nop
L1d1278:
    .word 0x32a200ff
    .word 0xafa20150
    .word 0x8fa20150
    .word 0x3042000c
    beqzl v0,L1d138c
    .word 0x32b500ff
    .word 0x8fa20150
    .word 0x30420004
    beqz v0,L1d12d8
    nop
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    .word 0x27a70170
    .word 0x27a80198
    .word 0x8c4b0008
    .word 0x27a9019c
    jal func_001d6410
    .word 0x240a0004
    .word 0x28420003
    bnez v0,L1d1728
    nop
    nop
L1d12d8:
    .word 0x8fa20150
    .word 0x30420008
    beqz v0,L1d1320
    nop
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    .word 0x27a70170
    .word 0x27a80198
    .word 0x8c4b000c
    .word 0x27a9019c
    jal func_001d6410
    .word 0x240a0008
    .word 0x28420003
    bnez v0,L1d1728
    nop
    nop
L1d1320:
    .word 0x8fa70198
    .word 0x96030002
    .word 0x8e040004
    .word 0x8fa2019c
    .word 0x00072840
    .word 0x00bd2821
    .word 0x94a60170
    .word 0x24e50001
    .word 0x30a7000f
    .word 0x00662818
    .word 0x00852821
    .word 0x90b5000c
    nop
    nop
L1d1358:
    .word 0x00072840
    .word 0x00bd2821
    .word 0x94a60170
    .word 0x24e50001
    .word 0x30a7000f
    .word 0x00662818
    .word 0x00852821
    .word 0x90a5000c
    .word 0x02a52825
    bne a3,v0,L1d1358
    .word 0x30b500ff
    nop
    .word 0x32b500ff
L1d138c:
    .word 0x32a20003
    beqz v0,L1d1418
    .word 0x32a20001
    beqz v0,L1d13dc
    .word 0x32a20002
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    .word 0x27a70170
    .word 0x27a80198
    .word 0x8c4b0010
    .word 0x27a9019c
    jal func_001d6410
    .word 0x240a0001
    .word 0x28420003
    bnez v0,L1d1728
    nop
    nop
    .word 0x32a20002
L1d13dc:
    beqz v0,L1d1418
    nop
    .word 0x8fa20120
    .word 0x72002628
    .word 0x72202e28
    .word 0x72603628
    .word 0x27a70170
    .word 0x27a80198
    .word 0x8c4b0014
    .word 0x27a9019c
    jal func_001d6410
    .word 0x240a0002
    .word 0x28420003
    bnez v0,L1d1728
    nop
L1d1418:
    .word 0x8fa40198
    nop
    .word 0x00041040
L1d1424:
    .word 0x005d1021
    .word 0x94470170
    .word 0x96030002
    .word 0x8e020004
    .word 0x00671818
    .word 0x00431821
    .word 0x9069000c
    .word 0x3122003f
    beqz v0,L1d1588
    nop
    .word 0xc4610008
    .word 0x3c053f80
    .word 0x44850000
    .word 0x96260002
    .word 0x8e280004
    .word 0xc4620000
    .word 0x46010103
    .word 0xc4630004
    .word 0x24050001
    .word 0x00c73818
    .word 0x01073821
    .word 0xe4e1000c
    .word 0x31260003
    beq a2,a1,L1d14b0
    .word 0xe4e40018
    .word 0x24050002
    beq a2,a1,L1d149c
    nop
    b L1d14c0
    .word 0xc6c10010
L1d149c:
    .word 0xc6c10010
    .word 0xc6c00018
    .word 0x46000800
    b L1d14d8
    .word 0xe4e00000
L1d14b0:
    .word 0xc6c00018
    b L1d14d8
    .word 0xe4e00000
    .word 0xc6c10010
L1d14c0:
    .word 0xc6c00018
    .word 0x46020842
    .word 0x46012042
    .word 0x46010000
    .word 0xe4e00000
    nop
L1d14d8:
    .word 0x3126000f
    .word 0x24050004
    beq a2,a1,L1d150c
    .word 0x24050008
    beq a2,a1,L1d14f8
    nop
    b L1d151c
    .word 0xc6c10014
L1d14f8:
    .word 0xc6c10014
    .word 0xc6c0001c
    .word 0x46000800
    b L1d1530
    .word 0xe4e00004
L1d150c:
    .word 0xc6c0001c
    b L1d1530
    .word 0xe4e00004
    .word 0xc6c10014
L1d151c:
    .word 0xc6c0001c
    .word 0x46030842
    .word 0x46012042
    .word 0x46010000
    .word 0xe4e00004
L1d1530:
    .word 0x24050010
    beq v0,a1,L1d1558
    .word 0x24050020
    beq v0,a1,L1d154c
    nop
    b L1d1568
    .word 0xc6c00000
L1d154c:
    .word 0xc6c00024
    b L1d1578
    .word 0xe4e00008
L1d1558:
    .word 0xc6c00020
    b L1d1578
    .word 0xe4e00008
    .word 0xc6c00000
L1d1568:
    .word 0xc6c10004
    .word 0x46040002
    .word 0x46000800
    .word 0xe4e00008
L1d1578:
    .word 0xc4600020
    .word 0xe4e00010
    .word 0xc4600024
    .word 0xe4e00014
L1d1588:
    .word 0x8fa6019c
    .word 0x24820001
    .word 0x3044000f
    bne a0,a2,L1d1424
    .word 0x00041040
    .word 0x8fa200c0
    .word 0x8fa50198
    .word 0x8c430004
    .word 0x00051040
    .word 0x005d1021
    .word 0x30630002
    bnez v1,L1d1650
    .word 0x94420170
    b L1d1604
    .word 0x3047ffff
    .word 0x00051040
L1d15c8:
    .word 0x005d1021
    .word 0x94440170
    .word 0x00061040
    .word 0x005d1821
    .word 0x24c20001
    .word 0x3046000f
    .word 0x24a20001
    .word 0x3045000f
    .word 0x00051040
    .word 0xa4640170
    .word 0x005d1021
    .word 0x94420170
    nop
    nop
    .word 0x3047ffff
L1d1604:
    bnel a3,s7,L1d15c8
    .word 0x00051040
    .word 0xafa6019c
    beq a3,s7,L1d1650
    .word 0xafa50198
    .word 0x96230002
    .word 0x8e250004
    .word 0x00772018
    .word 0x00a42021
    .word 0xc4830020
    .word 0xc4820024
    .word 0xc4810028
    .word 0xc480002c
    .word 0x70671818
    .word 0x00a31821
    .word 0xe4630020
    .word 0xe4620024
    .word 0xe4610028
    .word 0xe460002c
L1d1650:
    .word 0x8fa40198
    .word 0x8fa300f0
    .word 0x24140001
    .word 0xa4620000
    .word 0x24830001
    .word 0x3065000f
    .word 0x24830002
    .word 0x00052040
    .word 0x009d2021
    .word 0x94870170
    .word 0x8fa500f0
    .word 0x3063000f
    .word 0x00032040
    .word 0x009d3021
    .word 0xa4a70002
    .word 0x94c60170
    .word 0x8fa500f0
    .word 0x24640001
    .word 0x3084000f
    .word 0xa4a60004
    .word 0x8e460010
    .word 0x96470002
    .word 0x8e450004
    .word 0x24c6fffd
    .word 0x00e63018
    .word 0x00a62821
    b L1d1708
    .word 0xae450008
    .word 0x00031840
L1d16c4:
    .word 0x007d3021
    .word 0x00041840
    .word 0x007d2821
    .word 0x8e470008
    .word 0x8fa30130
    .word 0x26940001
    .word 0x00e31821
    .word 0xae430008
    .word 0x8e470008
    .word 0x70801e28
    .word 0x24840001
    .word 0x3084000f
    .word 0xa4e20000
    .word 0x94c60170
    .word 0xa4e60002
    .word 0x94a50170
    .word 0xa4e50004
L1d1708:
    .word 0x8fa5019c
    bnel a0,a1,L1d16c4
    .word 0x00031840
    .word 0x8fa200f0
    b L1d1728
    .word 0xae420008
L1d1720:
    .word 0x24140001
    nop
L1d1728:
    bnez s4,L1d1818
    .word 0x2683ffff
    .word 0x8fa200d0
    .word 0x8e450010
    .word 0x96470002
    .word 0x8e040010
    .word 0x8e480004
    .word 0x27deffff
    .word 0x2443ffff
    .word 0x00031040
    .word 0x00431821
    .word 0x8fa200e0
    .word 0x00e33018
    .word 0x24a5fffd
    .word 0x70e52818
    .word 0x01052821
    .word 0x8fa300d0
    .word 0x00821023
    .word 0x8e440008
    .word 0x01063021
    .word 0x2463ffff
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
    .word 0x2463fffd
    .word 0xae430010
    .word 0x8fa300e0
    .word 0xae030010
    .word 0x8fa300e0
    beqz s3,L1d1840
    .word 0xae230010
    .word 0x8e630010
    .word 0x96640002
    .word 0x00621823
    beqz v0,L1d1840
    .word 0xae630010
    nop
L1d17f0:
    .word 0x8e630008
    .word 0x2442ffff
    .word 0x00641823
    .word 0xae630008
    nop
    bnez v0,L1d17f0
    nop
    b L1d1844
    .word 0x8fa200a0
    .word 0x2683ffff
L1d1818:
    .word 0x00031040
    .word 0x00431821
    .word 0x8e420010
    .word 0x00431021
    .word 0xae420010
    .word 0x8e430008
    .word 0x8fa20130
    .word 0x00621021
    .word 0xae420008
    nop
L1d1840:
    .word 0x8fa200a0
L1d1844:
    bnez v0,L1d185c
    nop
    jal func_001d5ee0
    .word 0x8fa40168
    b L1d1988
    .word 0x8fa200a0
L1d185c:
    .word 0x8fa200d0
    .word 0x27de0001
    .word 0x03c2082b
    bnez at,L1d0f64
    nop
L1d1870:
    .word 0x8e430010
    .word 0x3c02aaaa
    .word 0x3442aaab
    .word 0x00430019
    nop
    nop
    .word 0x00001010
    .word 0x00021842
    .word 0x8fa200b0
    .word 0xac4300ac
    .word 0x8e030010
    .word 0x8fa200b0
    .word 0xac4300b0
L1d18a4:
    .word 0x8fa200b0
    .word 0x8c4200ac
    bnez v0,L1d1920
    .word 0x3c020033
    .word 0x3c020033
    .word 0x2451e620
    .word 0x8e220008
    beqz v0,L1d18fc
    .word 0x8e300000
    .word 0x8fa5016c
    .word 0x72002628
    jal func_001d5d50
    .word 0x24060001
    beqz v0,L1d18fc
    .word 0x70402628
    .word 0x8c420000
    .word 0x8c420004
    .word 0x0040f809
    .word 0x26250010
    bnez v0,L1d18fc
    nop
    .word 0xae220008
L1d18fc:
    .word 0x8e020014
    .word 0x28410002
    bnez at,L1d1980
    .word 0x24020002
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
    b L1d1984
    .word 0x8fa200a0
L1d1920:
    .word 0x2451e620
    .word 0x8e220008
    beqz v0,L1d1964
    .word 0x8e300000
    .word 0x8fa5016c
    .word 0x72002628
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L1d1964
    .word 0x70402628
    .word 0x8c420000
    .word 0x8c420004
    .word 0x0040f809
    .word 0x26250010
    bnez v0,L1d1964
    nop
    .word 0xae220008
L1d1964:
    .word 0x8e020014
    .word 0x28410002
    bnez at,L1d1980
    .word 0x24020002
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
L1d1980:
    .word 0x8fa200a0
L1d1984:
    nop
L1d1988:
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
