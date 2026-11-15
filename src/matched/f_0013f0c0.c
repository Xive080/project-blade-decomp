extern void func_00149e60(void);
extern void func_0015c9c0(void);
extern void func_0015ca40(void);
extern void func_0015d8d0(void);
extern void func_001c3b70(void);
extern void func_001ce300(void);
asm void func(void) {
.set noreorder
.set noat
    .word 0x27bdff80
    .word 0x7fbf0060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8c900008
    .word 0x70a09e28
    jal func_00149e60
    .word 0x7080a628
    .word 0x8c420018
    .word 0x0040f809
    .word 0x72002628
    .word 0x70408e28
    bnez s1,L20
    .word 0x00000000
    b L556
    .word 0x70001628
L20:
    .word 0x8e020560
    .word 0x30420004
    .word 0x5440000c
    .word 0x70009e28
    .word 0x3c010001
    .word 0x02010821
    .word 0xc421ea00
    .word 0x3c023f80
    .word 0x44820000
    .word 0x00000000
    .word 0x46000834
    .word 0x00000000
    bc1f L35
    .word 0x00000000
    .word 0x70009e28
L35:
    .word 0x8e030540
    .word 0x24020002
    beq v1,v0,L41
    .word 0x32620009
    .word 0x70009e28
    .word 0x32620009
L41:
    beqz v0,L155
    .word 0x00000000
    .word 0x32620001
    bnez v0,L49
    .word 0x00000000
    .word 0x44801000
    b L68
    .word 0xc603052c
L49:
    .word 0x8e02051c
    bnez v0,L60
    .word 0x00000000
    .word 0xc6820280
    .word 0xc681027c
    .word 0x3c023f80
    .word 0x44820000
    .word 0x00000000
    .word 0x46011041
    b L67
    .word 0x46010082
L60:
    .word 0xc682027c
    .word 0xc6810280
    .word 0x3c023f80
    .word 0x44820000
    .word 0x00000000
    .word 0x46011041
    .word 0x46010082
L67:
    .word 0xc603052c
L68:
    .word 0x44800000
    .word 0x00000000
    .word 0x46001834
    .word 0x00000000
    bc1t L77
    .word 0x46001847
    b L77
    .word 0x46001846
    .word 0x46001847
L77:
    .word 0x3c023eba
    .word 0x34422e8c
    .word 0x44820000
    .word 0x00000000
    .word 0x46000834
    .word 0x00000000
    bc1t L117
    .word 0x00000000
    .word 0x44800000
    .word 0x00000000
    .word 0x46001836
    .word 0x00000000
    bc1t L93
    .word 0x00000000
    b L100
    .word 0x24030001
L93:
    .word 0x46001834
    .word 0x00000000
    bc1f L100
    .word 0x70001e28
    b L100
    .word 0x2403ffff
    .word 0x70001e28
L100:
    .word 0x44800000
    .word 0x00000000
    .word 0x46001036
    .word 0x00000000
    bc1t L108
    .word 0x00000000
    b L115
    .word 0x24020001
L108:
    .word 0x46001034
    .word 0x00000000
    bc1f L115
    .word 0x70001628
    b L115
    .word 0x2402ffff
    .word 0x70001628
L115:
    beq v0,v1,L133
    .word 0x3c023f00
L117:
    .word 0x44800000
    .word 0x3c023f00
    .word 0x46001034
    .word 0x44820800
    bc1t L126
    .word 0x46001007
    b L126
    .word 0x46001006
    .word 0x46001007
L126:
    .word 0x46000802
    .word 0x3c024000
    .word 0x46000840
    .word 0x44820000
    b L134
    .word 0x46010042
    .word 0x3c023f00
L133:
    .word 0x44820800
L134:
    .word 0x46031081
    .word 0x3c017000
    .word 0xc4233fa8
    .word 0x46000807
    .word 0x46030002
    .word 0x46001034
    .word 0x00000000
    .word 0x45020004
    .word 0x46030802
    b L151
    .word 0x46000086
    .word 0x46030802
L146:
    .word 0x46001036
    .word 0x00000000
    bc1t L151
    .word 0x00000000
    .word 0x46000086
L151:
    .word 0xc600052c
    .word 0x46020000
    b L156
    .word 0xe600052c
L155:
    .word 0xae00052c
L156:
    .word 0x3262000a
    beqz v0,L277
    .word 0x00000000
    jal func_001c3b70
    .word 0x72202628
    .word 0xc4400020
    .word 0x72202628
    jal func_001c3b70
    .word 0xe7a00070
    .word 0xc4400028
    .word 0x27b20074
    .word 0x72202628
    jal func_001c3b70
    .word 0xe6400000
    .word 0xc4400010
    .word 0x72202628
    .word 0x46000007
    jal func_001c3b70
    .word 0xe7a00078
    .word 0xc4400018
    .word 0x27a3007c
    .word 0x46000007
    .word 0x32620002
    bnez v0,L184
    .word 0xe4600000
    .word 0x44800000
    b L253
    .word 0xc6140520
L184:
    .word 0x8e820004
    .word 0x30420100
    beqz v0,L191
    .word 0x00000000
    .word 0x44800000
    b L253
    .word 0xc6140520
L191:
    .word 0xc7a00070
    .word 0x4480a000
    .word 0x00000000
    .word 0x4600a032
    .word 0x00000000
    bc1f L207
    .word 0x00000000
    .word 0xc6400000
    .word 0x4600a032
    .word 0x00000000
    bc1f L207
    .word 0x00000000
    .word 0x3c023f80
    .word 0x44820000
    b L254
    .word 0xe6140520
L207:
    .word 0xc7a10078
    .word 0x44800000
    .word 0x00000000
    .word 0x46010032
    .word 0x00000000
    bc1f L222
    .word 0x3c02bf80
    .word 0xc4610000
    .word 0x46010032
    .word 0x00000000
    bc1f L221
    .word 0x00000000
    b L253
    .word 0xc6140520
L221:
    .word 0x3c02bf80
L222:
    .word 0x44826000
    .word 0x27a40070
    jal func_0015d8d0
    .word 0x27a50078
    .word 0x27a40078
    jal func_001ce300
    .word 0x46000506
    .word 0x44800800
    .word 0x00000000
    .word 0x46010034
    .word 0x00000000
    bc1f L238
    .word 0x3c023f80
    b L245
    .word 0x46000806
    .word 0x3c023f80
L238:
    .word 0x44820800
    .word 0x00000000
    .word 0x46010036
    .word 0x00000000
    bc1t L245
    .word 0x00000000
    .word 0x46000806
L245:
    .word 0x8e03051c
    .word 0x24020001
    bne v1,v0,L253
    .word 0x00000000
    .word 0x3c024334
    .word 0x44820800
    .word 0x00000000
    .word 0x46140d01
L253:
    .word 0xe6140520
L254:
    .word 0xc6020524
    .word 0x3c017000
    .word 0x3c02bf80
    .word 0xc4233fa8
    .word 0x44820800
    .word 0x00000000
    .word 0x46020081
    .word 0x46030802
    .word 0x46001034
    .word 0x00000000
    bc1f L268
    .word 0x00000000
    b L273
    .word 0x46000086
L268:
    .word 0x46031036
    .word 0x00000000
    bc1t L273
    .word 0x00000000
    .word 0x46001886
L273:
    .word 0xc6000524
    .word 0x46020000
    b L279
    .word 0xe6000524
L277:
    .word 0xae000520
    .word 0xae000524
L279:
    .word 0x3262000c
    beqz v0,L552
    .word 0x00000000
    .word 0x32620004
    bnez v0,L292
    .word 0x00000000
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_0015ca40
    .word 0x26840018
    .word 0xc6800030
    b L503
    .word 0xe6000528
L292:
    .word 0x8e83000c
    .word 0x3c02c031
    .word 0x3442c71d
    .word 0xc6800038
    .word 0x44821000
    .word 0xc4610010
    .word 0x46000d01
    .word 0x4602a034
    .word 0x00000000
    bc1f L306
    .word 0x3c024031
    b L317
    .word 0x3c027000
    .word 0x3c024031
L306:
    .word 0x3442c71d
    .word 0x44821000
    .word 0x00000000
    .word 0x4602a036
    .word 0x00000000
    .word 0x45030004
    .word 0x4600a086
    b L316
    .word 0x00000000
    .word 0x4600a086
L316:
    .word 0x3c027000
L317:
    .word 0x34423fa8
    .word 0xc4410000
    .word 0x26840018
    .word 0x3c02428c
    .word 0x44820000
    .word 0x00000000
    .word 0x46010002
    .word 0x46001082
    jal func_0015c9c0
    .word 0x46001307
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_0015ca40
    .word 0x26840018
    .word 0xc6800030
    .word 0x44800800
    .word 0x00000000
    .word 0x4601a034
    .word 0x00000000
    bc1f L349
    .word 0xe6000528
    .word 0x4601a034
    .word 0x00000000
    bc1t L345
    .word 0x4600a047
    b L345
    .word 0x4600a046
    .word 0x4600a047
L345:
    .word 0x3c024170
    .word 0x44820000
    b L364
    .word 0x46010042
L349:
    .word 0x4601a034
    .word 0x00000000
    bc1t L356
    .word 0x4600a047
    b L356
    .word 0x4600a046
    .word 0x4600a047
L356:
    .word 0x3c024170
    .word 0x44820000
    .word 0x00000000
    .word 0x46010042
    .word 0x3c024000
    .word 0x44820000
    .word 0x00000000
    .word 0x46010042
L364:
    .word 0x3c017000
    .word 0xc4223fa8
    .word 0x46000807
    .word 0x46020002
    .word 0x4600a034
    .word 0x00000000
    .word 0x45020004
    .word 0x46020802
    b L380
    .word 0x46000506
    .word 0x46020802
L375:
    .word 0x4600a036
    .word 0x00000000
    bc1t L380
    .word 0x00000000
    .word 0x46000506
L380:
    .word 0xc6800038
    .word 0x72202628
    .word 0x46140000
    jal func_001c3b70
    .word 0xe6800038
    .word 0xc4410014
    .word 0x3c023f4c
    .word 0x3442cccd
    .word 0x44820000
    .word 0x00000000
    .word 0x46000836
    .word 0x00000000
    bc1t L481
    .word 0x00000000
    .word 0x3c010001
    .word 0x02010821
    .word 0xc422ea6c
    .word 0x3c023dca
    .word 0x3442c083
    .word 0x44820000
    .word 0x3c010001
    .word 0x02010821
    .word 0xc421ea64
    .word 0x46011041
    .word 0x46000836
    .word 0x00000000
    bc1t L481
    .word 0x00000000
    .word 0x3c010001
    .word 0x02010821
    .word 0x44800000
    .word 0xc426ea4c
    .word 0x3c010001
    .word 0x02010821
    .word 0xc425ea34
    .word 0x3c010001
    .word 0x02010821
    .word 0x46053141
    .word 0xc424ea50
    .word 0x46002834
    .word 0x3c010001
    .word 0x02010821
    .word 0xc423ea38
    .word 0x3c010001
    .word 0x02010821
    .word 0x460320c1
    .word 0xc422ea54
    .word 0x3c010001
    .word 0x02010821
    .word 0xc421ea3c
    bc1t L434
    .word 0x46011041
    b L436
    .word 0x3c023c23
L434:
    .word 0x46002947
    .word 0x3c023c23
L436:
    .word 0x3442d70a
    .word 0x44820000
    .word 0x00000000
    .word 0x46002834
    .word 0x00000000
    bc1f L481
    .word 0x00000000
    .word 0x44800000
    .word 0x00000000
    .word 0x46001834
    .word 0x00000000
    .word 0x45030004
    .word 0x460018c7
    b L453
    .word 0x3c023c23
    .word 0x460018c7
L452:
    .word 0x3c023c23
L453:
    .word 0x3442d70a
    .word 0x44820000
    .word 0x00000000
    .word 0x46001834
    .word 0x00000000
    bc1f L481
    .word 0x00000000
    .word 0x44800000
    .word 0x00000000
    .word 0x46000834
    .word 0x00000000
    .word 0x45030004
    .word 0x46000847
    b L470
    .word 0x3c023c23
    .word 0x46000847
L469:
    .word 0x3c023c23
L470:
    .word 0x3442d70a
    .word 0x44820000
    .word 0x00000000
    .word 0x46000834
    .word 0x00000000
    bc1f L481
    .word 0x00000000
    .word 0x3c024000
    .word 0x44826000
    jal func_0015c9c0
    .word 0x26840018
L481:
    .word 0x8e82000c
    .word 0x44800000
    .word 0xc4410010
    .word 0x46000834
    .word 0x00000000
    bc1f L503
    .word 0x00000000
    .word 0x8e03003c
    .word 0x24020100
    bne v1,v0,L503
    .word 0x00000000
    .word 0xc681003c
    .word 0x3c024000
    .word 0x44820000
    .word 0x00000000
    .word 0x46000836
    .word 0x00000000
    bc1t L503
    .word 0x00000000
    .word 0x3c023f80
    .word 0xae820020
    .word 0xae820034
L503:
    .word 0xc6810018
    .word 0x3c02bf80
    .word 0x44820000
    .word 0x00000000
    .word 0x46010032
    .word 0x00000000
    bc1f L527
    .word 0x00000000
    .word 0xc6800030
    .word 0x3c02bf40
    .word 0x44820800
    .word 0x00000000
    .word 0x46010036
    .word 0x00000000
    bc1t L527
    .word 0x00000000
    .word 0xc6810034
    .word 0x44800000
    .word 0x00000000
    .word 0x46000836
    .word 0x00000000
    bc1t L527
    .word 0x00000000
    .word 0xae820018
L527:
    .word 0xc6810020
    .word 0x3c023f80
    .word 0x44820000
    .word 0x00000000
    .word 0x46010032
    .word 0x00000000
    bc1f L556
    .word 0x24020001
    .word 0xc6800030
    .word 0x3c023f40
    .word 0x44820800
    .word 0x00000000
    .word 0x46010034
    .word 0x00000000
    bc1f L555
    .word 0x00000000
    .word 0xc6810034
    .word 0x44800000
    .word 0x00000000
    .word 0x46000834
    .word 0x00000000
    bc1f L555
    .word 0x00000000
    b L555
    .word 0xae820020
L552:
    .word 0xae800030
    .word 0xae800034
    .word 0xae000528
L555:
    .word 0x24020001
L556:
    .word 0x7bbf0060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    .word 0x03e00008
    .word 0x27bd0080
}
