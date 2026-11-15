extern void func_001a5a80(void);
extern void func_001a63d0(void);
extern void func_001a63f0(void);
extern void func_001a6410(void);
extern void func_001a70e0(void);
extern void func_001c3b00(void);
extern void func_001c3b70(void);
extern void func_00201cc0(void);
extern void func_00201cf0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffb0
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c910004
    .word 0x70809e28
    .word 0x70a08628
    jal func_001c3b70
    .word 0x72202628
    .word 0x70409628
    .word 0x8e020000
    .word 0x72602628
    .word 0x24420001
    jal func_001a5a80
    .word 0xae020000
    .word 0x8e050004
    .word 0x8e040000
    .word 0x8ca30004
    bnel a0,v1, L191e00
    .word 0x72601628
    .word 0x8e040008
    .word 0xc4a4000c
    .word 0xc4a20010
    .word 0xc4a00014
    .word 0x8ca30000
    .word 0x24a6000c
    .word 0xc4850030
    .word 0xc4830034
    .word 0xc4810038
    .word 0x24850030
    .word 0x46042901
    .word 0x46021881
    .word 0x46000841
    .word 0x46042102
    .word 0x46021082
    beqz v1, L191dfc
    .word 0x46010842
    beqz v0, L191cf8
    nop
    .word 0x46022000
    .word 0x3c023f80
    .word 0x46000840
    .word 0x44820000
    nop
    .word 0x46000836
    nop
    bc1t L191dfc
    nop
L191cf8:
    .word 0xc4a20000
    .word 0xc4a10004
    .word 0xc4a00008
    .word 0x3c02bf80
    .word 0x44821800
    .word 0x72202628
    .word 0xe4c20000
    .word 0xe4c10004
    .word 0xe4c00008
    .word 0x8e020008
    .word 0xc4420030
    .word 0xc4410034
    .word 0xc4400038
    .word 0xe6420030
    .word 0xe6410034
    .word 0xe6400038
    .word 0x8e020008
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6420000
    .word 0xe6410004
    .word 0xe6400008
    .word 0x8e020008
    .word 0xc4420010
    .word 0xc4410014
    .word 0xc4400018
    .word 0xe6420020
    .word 0xe6410024
    .word 0xe6400028
    .word 0x8e020008
    .word 0xc4400020
    .word 0x46001802
    .word 0xe6400010
    .word 0x8e020008
    .word 0xc4400024
    .word 0x46001802
    .word 0xe6400014
    .word 0x8e020008
    .word 0xc4400028
    .word 0x46001802
    jal func_001c3b00
    .word 0xe6400018
    .word 0x8e020004
    .word 0x8c440018
    jal func_00201cf0
    .word 0x72602e28
    .word 0x8e020004
    .word 0x8c440018
    jal func_00201cc0
    .word 0x72602e28
    .word 0x8e020008
    .word 0xc44c0030
    jal func_001a63d0
    .word 0x72602628
    .word 0x44806000
    jal func_001a63f0
    .word 0x72602628
    .word 0x44806000
    jal func_001a6410
    .word 0x72602628
    .word 0x3c020031
    .word 0x244474a0
    jal func_001a70e0
    .word 0x72602e28
L191dfc:
    .word 0x72601628
L191e00:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0050
}
