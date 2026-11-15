extern void func_0011ec80(void);
extern void func_001d5ee0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffd0
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8ca40000
    .word 0x3c020033
    .word 0x2445e620
    .word 0x8ca30000
    .word 0x2490000c
    addiu v0,zero,3
    .word 0x24640014
    .word 0x8c630014
    bne v1,v0, L1d40cc
    .word 0x70008e28
    addiu v0,zero,2
    .word 0xac820000
    .word 0x8ca20000
    .word 0x8c510018
    nop
L1d40cc:
    .word 0x72002628
    .word 0x70002e28
    jal func_0011ec80
    addiu a2,zero,48
    .word 0x8e230008
    addiu v0,zero,-1
    .word 0x8c630000
    bne v1,v0, L1d40f8
    .word 0x000310c0
    b L1d4128
    .word 0x70002628
L1d40f8:
    .word 0x00431023
    .word 0x00021080
    .word 0x00511821
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e220008
    .word 0x8c430000
    .word 0x000310c0
    .word 0x00431023
    .word 0x00021080
    .word 0x02221021
    .word 0x24440014
L1d4128:
    .word 0x8c830008
    addiu v0,zero,-1
    .word 0xae03000c
    .word 0x94830000
    .word 0x34630002
    .word 0xa4830000
    .word 0x8e230008
    .word 0x8c630004
    bne v1,v0, L1d4158
    .word 0x000310c0
    b L1d4188
    .word 0x70002628
L1d4158:
    .word 0x00431023
    .word 0x00021080
    .word 0x00511821
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e220008
    .word 0x8c430004
    .word 0x000310c0
    .word 0x00431023
    .word 0x00021080
    .word 0x02221021
    .word 0x24440014
L1d4188:
    .word 0x8c830008
    addiu v0,zero,-1
    .word 0xae030010
    .word 0x94830000
    .word 0x34630002
    .word 0xa4830000
    .word 0x8e230008
    .word 0x8c630008
    bne v1,v0, L1d41b8
    .word 0x000310c0
    b L1d41e8
    .word 0x70002628
L1d41b8:
    .word 0x00431023
    .word 0x00021080
    .word 0x00511821
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e220008
    .word 0x8c430008
    .word 0x000310c0
    .word 0x00431023
    .word 0x00021080
    .word 0x02221021
    .word 0x24440014
L1d41e8:
    .word 0x8c830008
    addiu v0,zero,-1
    .word 0xae030014
    .word 0x94830000
    .word 0x34630002
    .word 0xa4830000
    .word 0x8e230008
    .word 0x8c63000c
    bne v1,v0, L1d4218
    .word 0x000310c0
    b L1d4248
    .word 0x70002628
L1d4218:
    .word 0x00431023
    .word 0x00021080
    .word 0x00511821
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e220008
    .word 0x8c43000c
    .word 0x000310c0
    .word 0x00431023
    .word 0x00021080
    .word 0x02221021
    .word 0x24440014
L1d4248:
    .word 0x8c830008
    addiu v0,zero,-1
    .word 0xae030018
    .word 0x8e030018
    .word 0x8c6300b0
    .word 0xae030008
    .word 0x94830000
    .word 0x34630002
    .word 0xa4830000
    .word 0x8e230008
    .word 0x8c630010
    bne v1,v0, L1d4284
    .word 0x000310c0
    b L1d42b4
    .word 0x70001e28
L1d4284:
    .word 0x00431023
    .word 0x00021080
    .word 0x00511821
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e220008
    .word 0x8c430010
    .word 0x000310c0
    .word 0x00431023
    .word 0x00021080
    .word 0x02221021
    .word 0x24430014
L1d42b4:
    .word 0x8c620008
    .word 0x72202628
    .word 0xae02001c
    .word 0x94620000
    .word 0x34420002
    jal func_001d5ee0
    .word 0xa4620000
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    .word 0x27bd0030
}
