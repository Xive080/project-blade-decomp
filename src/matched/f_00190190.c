extern void func_001214b8(void);
extern void func_00121a58(void);
extern void func_00121b70(void);
extern void func_00122150(void);
extern void func_0012e7d0(void);
extern void func_0013be60(void);
extern void func_0013bff0(void);
extern void func_00142a90(void);
extern void func_00142ad0(void);
extern void func_0016ff90(void);
extern void func_00179d10(void);
extern void func_0017a3c0(void);
extern void func_0017b460(void);
extern void func_0017b5f0(void);
extern void func_0017f3f0(void);
extern void func_0017f610(void);
extern void func_001a7230(void);
extern void func_001a85d0(void);
extern void func_001a98c0(void);
extern void func_001c35a0(void);
extern void func_001c3b70(void);
extern void func_001f7cf0(void);
extern void func_001f7d20(void);
extern void func_001f7d70(void);
extern void func_001f7d90(void);
extern void func_001f97f0(void);
extern void func_001f9cd0(void);
extern void func_001f9d10(void);
extern void func_00247ee0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-144
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7080a628
    .word 0x7fb00000
    addiu a0,s4,1108
    jal func_00247ee0
    .word 0x70a08628
    jal func_00247ee0
    addiu a0,s4,1224
    jal func_00247ee0
    addiu a0,s4,1340
    jal func_0017a3c0
    nop
    .word 0x8c420000
    .word 0x72802628
    jalr ra,v0
    .word 0x72002e28
    bnez v0,L1901f4
    nop
    b L190718
    .word 0x70001628
L1901f4:
    .word 0x3c020031
    addiu v0,v0,10224
    .word 0xae82000c
    .word 0x8e040054
    .word 0x3c023f8c
    ori v1,v0,0xcccd
    addiu v0,zero,-1
    .word 0x70008e28
    .word 0xae8403d8
    .word 0x8e040058
    .word 0x70009628
    .word 0x72809e28
    .word 0xae840350
    .word 0xae80041c
    .word 0xae830428
    .word 0xae800328
    .word 0xae82032c
    .word 0xae800330
    .word 0xae8005d0
L190240:
    .word 0x8e8200cc
    addiu a0,sp,96
    addu v0,v0,s2
    jal func_00121a58
    addiu a1,v0,1360
    jal func_00121b70
    addiu a0,sp,96
    beqzl v0,L190294
    addiu s1,s1,1
    addiu a0,sp,96
    jal func_00122150
    addiu a1,zero,46
    beqz v0,L190284
    addiu a0,sp,96
    .word 0xa0400000
    nop
    addiu a0,sp,96
L190284:
    jal func_0016ff90
    nop
    .word 0xae620330
    addiu s1,s1,1
L190294:
    slti v0,s1,8
    addiu s2,s2,16
    bnez v0,L190240
    addiu s3,s3,4
    addiu v0,zero,1
    .word 0xae820328
    .word 0xae80032c
    .word 0x8e820030
    jal func_001c3b70
    .word 0x8c440004
    .word 0xae820414
    jal func_00142a90
    .word 0x8e840030
    .word 0xae820418
    jal func_00142ad0
    .word 0x8e840030
    .word 0xae8205cc
    jal func_0012e7d0
    .word 0x8e8405cc
    jal func_001f7d70
    .word 0x8e8405cc
    .word 0xae8205c8
    .word 0x8e8405c8
    beqz a0,L190340
    nop
    jal func_001f7cf0
    nop
    .word 0x8e8405c8
    jal func_001f7d20
    .word 0x70402e28
    .word 0x8e8405c8
    jal func_001f9d10
    addiu a1,zero,1045
    .word 0x70408e28
    bltz s1,L190340
    nop
    jal func_001c35a0
    nop
    .word 0xae8205d0
    .word 0x8e8405c8
    .word 0x8e8605d0
    jal func_001f9cd0
    .word 0x72202e28
L190340:
    .word 0x8e82032c
    sll v0,v0,0x2
    addu v0,v0,s4
    .word 0x8c450330
    .word 0xae8005c0
    beqz a1,L190388
    .word 0xae8005c4
    jal func_001f7d90
    .word 0x8e8405c8
    .word 0x44806000
    jal func_001f97f0
    .word 0x8e8405c8
    .word 0x8e8205c8
    .word 0x8c420014
    .word 0x8c420004
    .word 0xc4400008
    b L190394
    .word 0xe68005c4
L190388:
    .word 0x8e8205c8
    .word 0x8c420014
    .word 0xac400004
L190394:
    .word 0x3c023fa6
    ori v0,v0,0x6666
    .word 0x44826000
    jal func_0013bff0
    .word 0x72802628
    jal func_0013be60
    .word 0x72802628
    jal func_0017f610
    addiu a0,zero,2
    .word 0xae820034
    .word 0x8e820030
    .word 0x8c450004
    jal func_0017f3f0
    .word 0x8e840034
    .word 0x3c020031
    addiu a0,zero,1
    jal func_0017b460
    addiu a1,v0,10160
    .word 0x8e840034
    .word 0x3c030031
    addiu a1,v1,10160
    .word 0xac820024
    .word 0x8e820034
    .word 0x8c440024
    jal func_0017b5f0
    .word 0x72803628
    .word 0x72802628
    jal func_00179d10
    .word 0x70002e28
    .word 0xae800410
    .word 0xae80040c
    .word 0x8e8303d8
    beqz v1,L1906b4
    nop
    addiu v0,zero,1
    beq v1,v0,L190620
    nop
    addiu v0,zero,4
    beq v1,v0,L190454
    nop
    addiu v0,zero,3
    beq v1,v0,L190454
    nop
    addiu v0,zero,2
    beq v1,v0,L190454
    nop
    b L190718
    addiu v0,zero,1
L190454:
    .word 0x8f8284a8
    addiu v0,v0,1
    .word 0xaf8284a8
    .word 0x8f8284a8
    slti at,v0,4
    bnez at,L190474
    nop
    .word 0xaf8084a8
L190474:
    .word 0x8f8684a8
    beqz a2,L190494
    .word 0x70001628
    .word 0x8e8303d8
    addiu v0,zero,2
    bne v1,v0,L19049c
    nop
    .word 0x70001628
L190494:
    b L1904b8
    dsll32 s1,v0,0x18
L19049c:
    .word 0x3c02002f
    addiu a0,sp,112
    jal func_001214b8
    addiu a1,v0,-624
    .word 0x83a20070
    nop
    dsll32 s1,v0,0x18
L1904b8:
    .word 0x3c02002f
    dsra32 s1,s1,0x18
    addiu a0,sp,112
    addiu a1,v0,-616
    addiu a2,s0,12
    jal func_001214b8
    .word 0x72203e28
    addiu a0,s4,1108
    addiu a1,sp,112
    addiu a3,zero,106
    jal func_001a98c0
    .word 0x70003628
    bnez v0,L190524
    nop
    .word 0x8f8284a8
    beqz v0,L190524
    nop
    .word 0x3c02002f
    addiu a0,sp,112
    addiu a1,v0,-608
    jal func_001214b8
    addiu a2,s0,12
    addiu a0,s4,1108
    addiu a1,sp,112
    addiu a3,zero,106
    jal func_001a98c0
    .word 0x70003628
L190524:
    .word 0x3c02002f
    addiu a0,sp,112
    addiu a1,v0,-600
    jal func_001214b8
    addiu a2,s0,12
    addiu a0,s4,1224
    addiu a1,sp,112
    addiu a3,zero,106
    jal func_001a98c0
    .word 0x70003628
    .word 0x3c02002f
    addiu a0,sp,112
    addiu a1,v0,-592
    addiu a2,s0,12
    jal func_001214b8
    .word 0x72203e28
    addiu a0,s4,1340
    addiu a1,sp,112
    addiu a3,zero,106
    jal func_001a98c0
    .word 0x70003628
    bnez v0,L1905b8
    addiu a0,s4,1108
    .word 0x8f8284a8
    beqz v0,L1905b4
    nop
    .word 0x3c02002f
    addiu a0,sp,112
    addiu a1,v0,-584
    jal func_001214b8
    addiu a2,s0,12
    addiu a0,s4,1340
    addiu a1,sp,112
    addiu a3,zero,106
    jal func_001a98c0
    .word 0x70003628
L1905b4:
    addiu a0,s4,1108
L1905b8:
    jal func_001a7230
    addiu a1,s4,92
    addiu a0,s4,1224
    jal func_001a7230
    addiu a1,s4,92
    addiu a0,s4,1340
    jal func_001a7230
    addiu a1,s4,92
    .word 0x3c024120
    .word 0x44826000
    .word 0x44807800
    .word 0x3c024270
    .word 0x44826800
    .word 0x3c023f80
    .word 0x44827000
    jal func_001a85d0
    addiu a0,s4,1108
    .word 0x3c024120
    .word 0x44826000
    .word 0x44807800
    .word 0x3c024270
    .word 0x44826800
    .word 0x3c023f80
    .word 0x44827000
    jal func_001a85d0
    addiu a0,s4,1340
L190620:
    .word 0xc602001c
    .word 0xc6010020
    .word 0xc6000024
    .word 0x3c010030
    .word 0xe68203dc
    .word 0xe68103e0
    .word 0xe68003e4
    .word 0xc6020028
    .word 0xc601002c
    .word 0xc6000030
    .word 0xe68203e8
    .word 0xe68103ec
    .word 0xe68003f0
    .word 0xc6020034
    .word 0xc6010038
    .word 0xc600003c
    .word 0xe68203f4
    .word 0xe68103f8
    .word 0xe68003fc
    .word 0x8c22a628
    .word 0xc6010040
    .word 0xc4400000
    .word 0x3c010030
    add.s $f0,$f1,$f0
    .word 0xe6800400
    .word 0x8c22a628
    .word 0xc6010044
    .word 0xc4400004
    .word 0x3c010030
    add.s $f0,$f1,$f0
    .word 0xe6800404
    .word 0x8c22a628
    .word 0xc6010048
    .word 0xc4400008
    add.s $f0,$f1,$f0
    b L190714
    .word 0xe6800408
L1906b4:
    .word 0x3c010031
    .word 0x8c242788
    .word 0x3c020031
    addiu v1,v0,10000
    .word 0x3c020031
    addiu v0,v0,9952
    sll a0,a0,0x2
    addu v1,v1,a0
    .word 0xac740000
    .word 0x3c010031
    .word 0x8c242788
    addiu v1,s4,1036
    addiu a0,a0,1
    .word 0x3c010031
    .word 0xac242788
    .word 0x3c010031
    .word 0x8c2426e0
    .word 0xae84040c
    .word 0xae820410
    .word 0x3c010031
    .word 0x8c2226e0
    .word 0xac430004
    .word 0x3c010031
    .word 0xac2326e0
L190714:
    addiu v0,zero,1
L190718:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,144
}
