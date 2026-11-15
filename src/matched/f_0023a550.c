extern void func_0011ec80(void);
extern void func_001a98c0(void);
extern void func_00239190(void);
extern void func_00239580(void);
extern void func_0023a020(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff90
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x70809628
    .word 0x70a08e28
    .word 0x26440014
    addiu a2,zero,2452
    .word 0x70002e28
    jal func_0011ec80
    .word 0x7fb00000
    jal func_0023a020
    .word 0x26440910
    .word 0x8f82897c
    .word 0x26430910
    bnez v0, L23a5d0
    .word 0xafa30040
    .word 0x27828988
    .word 0xaf82897c
    .word 0x8f90897c
    addiu v0,zero,19
    .word 0xae020000
    .word 0x8f828980
    bnez v0, L23a5c8
    nop
    .word 0x3c020033
    .word 0x24422830
    .word 0xaf828980
    jal func_00239580
    .word 0x8f848980
L23a5c8:
    .word 0x8f828980
    .word 0xae020004
L23a5d0:
    .word 0x8f82897c
    .word 0x26270014
    .word 0x264600ac
    addiu a1,zero,320
    .word 0xafa20044
    .word 0x8e280010
    .word 0x3c020024
    .word 0x26440144
    .word 0x26430284
    .word 0xafa80048
    .word 0xafa7004c
    .word 0xafa60050
    .word 0xafa50054
    .word 0xafa40058
    .word 0x2442a4e0
    .word 0xafa3005c
    jal func_00239190
    .word 0xafa20060
    .word 0x8c420000
    .word 0x27a50040
    jalr ra,v0
    .word 0x72402628
    bnez v0, L23a638
    nop
    b L23a6e0
    .word 0x70001628
L23a638:
    .word 0x8e220010
    .word 0x70003628
    .word 0x72203e28
    .word 0x72404628
    b L23a6b8
    .word 0xae420614
L23a650:
    .word 0x8ce50144
    .word 0x8e42001c
    .word 0x8e430024
    .word 0x24c60001
    .word 0x8ca40004
    .word 0x8ca50000
    .word 0x000420c0
    .word 0x000528c0
    .word 0x00451021
    .word 0x8c420000
    .word 0x00621021
    .word 0xad020618
    .word 0x8e42001c
    .word 0x8e430028
    .word 0x00441021
    .word 0x8c420000
    .word 0x00621021
    .word 0xad02061c
    .word 0x8ce20148
    .word 0xad020620
    .word 0x8ce2014c
    .word 0xad020624
    .word 0x8ce20150
    .word 0xad020628
    .word 0x24e70010
    .word 0x25080014
L23a6b8:
    .word 0x8e420614
    .word 0x00c2102b
    bnez v0, L23a650
    nop
    .word 0x26440038
    addiu a2,zero,1
    addiu a3,zero,122
    jal func_001a98c0
    .word 0x72202e28
    addiu v0,zero,1
L23a6e0:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0070
}
