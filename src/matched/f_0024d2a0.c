extern void func_0011ec80(void);
extern void func_00188040(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff40
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x27a40080
    addiu a2,zero,56
    .word 0x70002e28
    jal func_0011ec80
    .word 0x7fb00000
    .word 0x3c02002f
    .word 0x244588f0
    .word 0x70002628
    .word 0x3c02002f
    .word 0x244288a0
    .word 0x27b000a0
    .word 0x27b500a4
    .word 0x27b300a8
    .word 0x27b200ac
    .word 0x27b400b0
    .word 0x27b100b4
L24d300:
    .word 0x8ca30000
    .word 0x24840001
    .word 0x8e080000
    .word 0x2c860019
    .word 0x00031880
    .word 0x00431821
    .word 0x8c630000
    .word 0x24a50004
    .word 0x8c670020
    .word 0x01073821
    .word 0xae070000
    .word 0x8c680024
    .word 0x8ea70000
    .word 0x25080001
    .word 0x00e83821
    .word 0xaea70000
    .word 0x8e680000
    .word 0x8c670028
    .word 0x01073821
    .word 0xae670000
    .word 0x8c68002c
    .word 0x8e470000
    .word 0x25080001
    .word 0x00e83821
    .word 0xae470000
    .word 0x8c680030
    .word 0x8e870000
    .word 0x25080002
    .word 0x00e83821
    .word 0xae870000
    .word 0x8c630034
    .word 0x8e270000
    .word 0x00e31821
    bnez a2, L24d300
    .word 0xae230000
    .word 0x3c020033
    .word 0x8e030000
    .word 0x2442a620
    .word 0x8c420130
    jalr ra,v0
    .word 0x24640128
    .word 0xaf8289f0
    .word 0x8e020000
    .word 0x8f8489f0
    .word 0x70002e28
    jal func_0011ec80
    .word 0x24460128
    .word 0x8f8489f0
    addiu a1,zero,25
    .word 0x3c03002f
    .word 0x246888f0
    .word 0xac850028
    .word 0x8f8489f0
    .word 0x3c03002f
    .word 0x246588a0
    .word 0x70003e28
    .word 0x70001628
    .word 0x24860128
    b L24d470
    .word 0x70004e28
    .word 0x00891821
L24d3f4:
    .word 0x8d040000
    .word 0x25290004
    .word 0x00042080
    .word 0x00a42021
    .word 0x8c8a0000
    .word 0x25080004
    .word 0xac66002c
    .word 0xc5430000
    .word 0xc5420004
    .word 0xc5410008
    .word 0xc540000c
    .word 0xe4c30000
    .word 0xe4c20004
    .word 0xe4c10008
    .word 0xe4c0000c
    .word 0xc5430010
    .word 0xc5420014
    .word 0xc5410018
    .word 0xc540001c
    .word 0xe4c30010
    .word 0xe4c20014
    .word 0xe4c10018
    .word 0xe4c0001c
    .word 0xacc20020
    .word 0xacc7002c
    .word 0x8d440020
    .word 0x8d430034
    .word 0x24420001
    .word 0x00c43021
    .word 0x00e33821
    nop
L24d470:
    .word 0x8f8489f0
    .word 0x8c830028
    .word 0x0043182b
    bnez v1, L24d3f4
    .word 0x00891821
    .word 0x7000b628
    b L24d4b8
    .word 0x70008628
    .word 0x00701021
L24d494:
    .word 0x8c44002c
    .word 0x8c820000
    beqzl v0, L24d4b4
    .word 0x26100004
    jalr ra,v0
    nop
    nop
    .word 0x26100004
L24d4b4:
    .word 0x26d60001
L24d4b8:
    .word 0x8f8389f0
    .word 0x8c620028
    .word 0x02c2102b
    bnez v0, L24d494
    .word 0x00701021
    .word 0x8e850000
    .word 0x8e660000
    .word 0x8e470000
    .word 0x8e280000
    jal func_00188040
    .word 0x8ea40000
    .word 0x8f8389f0
    .word 0xac620000
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd00c0
}


