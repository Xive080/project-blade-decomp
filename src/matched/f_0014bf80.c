extern void func_001214b8(void);
extern void func_0016fb90(void);
extern void func_00200300(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff20
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    addiu v1,zero,2
    .word 0x46006506
    .word 0x70809e28
    .word 0x70a09628
    bne s3,v1, L14bfc4
    .word 0x70e08e28
    .word 0x3c030030
    .word 0x246334d0
    b L14bfd0
    .word 0xaf838030
L14bfc4:
    .word 0x3c030030
    .word 0x24633974
    .word 0xaf838030
L14bfd0:
    .word 0x8f848030
    .word 0x00061840
    .word 0x00661821
    .word 0x00038080
    .word 0x02042021
    .word 0x8c830004
    bnez v1, L14c168
    nop
    .word 0x8c830008
    beqzl v1, L14c004
    .word 0x3c02002f
    b L14c16c
    .word 0x7bbf0050
L14c004:
    .word 0x27a40060
    .word 0x2445c638
    jal func_001214b8
    .word 0x72203628
    .word 0x27a40060
    jal func_0016fb90
    .word 0x72602e28
    .word 0x8f838030
    .word 0x02031821
    .word 0xac620004
    .word 0x8f828030
    .word 0x02021021
    .word 0x8c420004
    bnez v0, L14c070
    nop
    .word 0x3c02002f
    .word 0x2445c638
    .word 0x3c02002f
    .word 0x27a40060
    jal func_001214b8
    .word 0x2446c578
    .word 0x27a40060
    jal func_0016fb90
    .word 0x72602e28
    .word 0x8f838030
    .word 0x02031821
    .word 0xac620004
L14c070:
    .word 0x3c02002f
    .word 0x27a40060
    .word 0x2445c640
    jal func_001214b8
    .word 0x72203628
    .word 0x27a40060
    jal func_0016fb90
    .word 0x72602e28
    .word 0x8f838030
    .word 0x02031821
    .word 0xac620008
    .word 0x8f828030
    .word 0x02021821
    .word 0x8c620008
    bnez v0, L14c0e0
    .word 0x3c02002f
    .word 0x2445c640
    .word 0x3c02002f
    .word 0x27a40060
    jal func_001214b8
    .word 0x2446c578
    .word 0x27a40060
    jal func_0016fb90
    .word 0x72602e28
    .word 0x8f838030
    .word 0x02031821
    b L14c168
    .word 0xac620008
L14c0e0:
    .word 0x8c630004
    .word 0x3c02002f
    .word 0x27a40060
    .word 0x2445c650
    .word 0x8c670004
    jal func_001214b8
    .word 0x72203628
    .word 0x8f838030
    .word 0x3c02002f
    .word 0x2445c680
    .word 0x27a40060
    .word 0x02031021
    .word 0x8c420008
    .word 0x8c470004
    jal func_001214b8
    .word 0x72203628
    .word 0x44800000
    nop
    .word 0x4600a034
    nop
    bc1t L14c168
    nop
    .word 0x8f828030
    .word 0x72402e28
    .word 0x02021021
    .word 0x8c440004
    jal func_00200300
    .word 0x4600a306
    .word 0x8f828030
    .word 0x72402e28
    .word 0x02021021
    .word 0x8c440008
    jal func_00200300
    .word 0x4600a306
L14c168:
    .word 0x7bbf0050
L14c16c:
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    .word 0x27bd00e0
}
