extern void func_00210750(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdfc50
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7080b628
    bnez s6, L210094
    .word 0x7fb00000
    b L2101f8
    .word 0x70001628
L210094:
    .word 0x8ed00014
    bnez s0, L2100a8
    .word 0x27a20080
    b L2101f8
    .word 0x70001628
L2100a8:
    .word 0xaec20014
    .word 0xc602030c
    .word 0xc6010310
    .word 0xc6000314
    .word 0x27b10098
    .word 0x2607000c
    addiu a0,zero,96
    .word 0x72203628
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
L2100d4:
    .word 0x8ce30000
    .word 0x8ce20004
    .word 0x2484ffff
    .word 0xacc30000
    .word 0xacc20004
    .word 0x24e70008
    bgtz a0, L2100d4
    .word 0x24c60008
    .word 0xc6020000
    .word 0xc6010004
    .word 0xc6000008
    .word 0x27b2008c
    .word 0x27b503a0
    .word 0x27b30398
    .word 0x27b4039c
    .word 0x26070320
    .word 0xe6420000
    .word 0xe6410004
    .word 0xe6400008
    .word 0x8e020318
    addiu a0,zero,7
    .word 0x72a03628
    .word 0xae620000
    .word 0x8e02031c
    .word 0xae820000
L210138:
    .word 0x80e30000
    .word 0x80e20001
    .word 0x2484ffff
    .word 0xa0c30000
    .word 0xa0c20001
    .word 0x24e70002
    bgtz a0, L210138
    .word 0x24c60002
    jal func_00210750
    .word 0x72c02628
    .word 0x27a30080
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    .word 0x2606000c
    addiu a1,zero,96
    .word 0xe602030c
    .word 0xe6010310
    .word 0xe6000314
L210184:
    .word 0x8e240000
    .word 0x8e230004
    .word 0x24a5ffff
    .word 0xacc40000
    .word 0xacc30004
    .word 0x26310008
    bgtz a1, L210184
    .word 0x24c60008
    .word 0xc6420000
    .word 0xc6410004
    .word 0xc6400008
    .word 0x26060320
    addiu a1,zero,7
    .word 0xe6020000
    .word 0xe6010004
    .word 0xe6000008
    .word 0x8e630000
    .word 0xae030318
    .word 0x8e830000
    .word 0xae03031c
L2101d4:
    .word 0x82a40000
    .word 0x82a30001
    .word 0x24a5ffff
    .word 0xa0c40000
    .word 0xa0c30001
    .word 0x26b50002
    bgtz a1, L2101d4
    .word 0x24c60002
    .word 0xaed00014
L2101f8:
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd03b0
}
