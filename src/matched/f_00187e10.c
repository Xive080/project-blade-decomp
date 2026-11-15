extern void func_0018a050(void);
extern void func_0018b8e0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffa0
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c910084
    .word 0x70809628
    b L187ed0
    .word 0x70008628
L187e3c:
    .word 0xae200000
    .word 0x8e330008
    beqz s3, L187e7c
    .word 0x26240004
    nop
    .word 0x26740008
L187e54:
    jal func_0018b8e0
    .word 0x72802628
    .word 0x8e820008
    .word 0x24420001
    .word 0xae820008
    .word 0x8e730004
    bnez s3, L187e54
    .word 0x26740008
    nop
    .word 0x26240004
L187e7c:
    jal func_0018b8e0
    nop
    .word 0x8e340010
    beqz s4, L187ebc
    .word 0x2624000c
    .word 0x26930008
L187e94:
    jal func_0018b8e0
    .word 0x72602628
    .word 0x8e620008
    .word 0x24420001
    .word 0xae620008
    .word 0x8e940004
    bnez s4, L187e94
    .word 0x26930008
    nop
    .word 0x2624000c
L187ebc:
    jal func_0018b8e0
    nop
    .word 0x26100001
    .word 0x26310014
    nop
L187ed0:
    .word 0x8e420080
    .word 0x0202102b
    bnez v0, L187e3c
    nop
    .word 0x8e500064
    beqz s0, L187f0c
    .word 0x26440060
L187eec:
    jal func_0018a050
    .word 0x26040008
    .word 0x8e100004
    nop
    nop
    bnez s0, L187eec
    nop
    .word 0x26440060
L187f0c:
    jal func_0018b8e0
    nop
    jal func_0018b8e0
    .word 0x72402628
    .word 0x3c03002e
    .word 0x24660700
    .word 0x8e440008
    .word 0x3c03002e
    .word 0x24650700
    .word 0x24830001
    .word 0xae430008
    .word 0xae40000c
    .word 0xc4c30000
    .word 0xc4c20004
    .word 0xc4c10008
    .word 0xc4c0000c
    .word 0x3c033f92
    .word 0x3c043f80
    .word 0x34634925
    .word 0xe6430010
    .word 0xe6420014
    .word 0xe6410018
    .word 0xe640001c
    .word 0xc4c30010
    .word 0xc4c20014
    .word 0xc4c10018
    .word 0xc4c0001c
    .word 0xe6430020
    .word 0xe6420024
    .word 0xe6410028
    .word 0xe640002c
    .word 0xc4c10020
    .word 0xc4c00024
    .word 0xe6410030
    .word 0xe6400034
    .word 0xc4a30000
    .word 0xc4a20004
    .word 0xc4a10008
    .word 0xc4a0000c
    .word 0xe6430038
    .word 0xe642003c
    .word 0xe6410040
    .word 0xe6400044
    .word 0xc4a30010
    .word 0xc4a20014
    .word 0xc4a10018
    .word 0xc4a0001c
    .word 0xe6430048
    .word 0xe642004c
    .word 0xe6410050
    .word 0xe6400054
    .word 0xc4a10020
    .word 0xc4a00024
    .word 0xe6410058
    .word 0xe640005c
    .word 0xae440018
    .word 0xae430024
    .word 0xae440040
    .word 0xae43004c
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0060
}
