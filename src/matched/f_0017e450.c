extern void func_0017c8a0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffb0
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c017000
    .word 0x8c820048
    .word 0x8c233fb8
    .word 0x70a08628
    bne v0,v1, L17e480
    .word 0x70808e28
    b L17e640
    .word 0x72201628
L17e480:
    .word 0xae230048
    .word 0x8e220034
    beqzl v0, L17e52c
    .word 0x72201628
    .word 0x8c490024
    .word 0x8d230000
    addiu v0,zero,1
    bne v1,v0, L17e520
    .word 0x72201628
    .word 0x8d26001c
    bnez a2, L17e4b8
    nop
    b L17e640
    .word 0x72201628
L17e4b8:
    .word 0x8f8488b0
    addiu v0,zero,-2
    .word 0x64030001
    .word 0x26050018
    .word 0xac860010
    .word 0x8f8488b0
    .word 0x26060024
    .word 0x27a70040
    .word 0xac800080
    .word 0x8d290024
    .word 0x8f8488b0
    .word 0xac890020
    .word 0x8f8988b0
    .word 0x91240001
    .word 0x00821024
    .word 0x00431025
    .word 0xa1220001
    .word 0x8e220034
    .word 0x8c440024
    jal func_0017c8a0
    .word 0x27a8004c
    bnez v0, L17e534
    nop
    b L17e640
    .word 0x72201628
    .word 0x72201628
L17e520:
    b L17e644
    .word 0x7bbf0020
    .word 0x72201628
L17e52c:
    b L17e640
    nop
L17e534:
    .word 0xc6010024
    .word 0xc6000018
    .word 0x27a20034
    .word 0x27a30038
    .word 0x46000801
    .word 0xe7a00030
    .word 0xc6010028
    .word 0xc600001c
    .word 0x46000801
    .word 0xe4400000
    .word 0xc601002c
    .word 0xc6000020
    .word 0x46000801
    .word 0xe4600000
    .word 0xc7a1004c
    .word 0xc7a00030
    .word 0x46010002
    .word 0xe7a00030
    .word 0xc4400000
    .word 0x46010002
    .word 0xe4400000
    .word 0xc4600000
    .word 0x46010002
    .word 0xe4600000
    .word 0xc6010018
    .word 0xc7a00030
    .word 0x46000800
    .word 0xe7a00030
    .word 0xc601001c
    .word 0xc4400000
    .word 0x46000800
    .word 0xe4400000
    .word 0xc6010020
    .word 0xc4600000
    .word 0x46000800
    .word 0xe4600000
    .word 0x8e020034
    beqz v0, L17e5f8
    nop
    .word 0x27a60030
    .word 0x27a80040
    .word 0x70002628
    .word 0x70002e28
    jalr ra,v0
    .word 0x72203e28
    bnez v0, L17e5f8
    nop
    b L17e640
    .word 0x72201628
L17e5f8:
    .word 0xc7a1004c
    .word 0xc6000000
    .word 0x46000834
    nop
    bc1f L17e640
    .word 0x72201628
    .word 0x27a20040
    .word 0xe6010000
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6020008
    .word 0xe601000c
    addiu v0,zero,1
    .word 0xe6000010
    .word 0xae020004
    .word 0xae000014
    .word 0x72201628
L17e640:
    .word 0x7bbf0020
L17e644:
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0050
}
