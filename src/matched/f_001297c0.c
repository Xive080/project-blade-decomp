asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff30
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xc484006c
    .word 0xc4a3000c
    .word 0xc4a10000
    .word 0x8c820018
    .word 0x70c0b628
    .word 0xc4850074
    .word 0xc4a20014
    .word 0xc4a00008
    .word 0x460418c2
    .word 0x8c860020
    .word 0xafa200a0
    .word 0xafa400cc
    .word 0x70e0ae28
    .word 0x46040842
    .word 0x70008628
    .word 0x460018e4
    .word 0x46051082
    .word 0x46050002
    .word 0x46000864
    .word 0x460010a4
    .word 0x46000024
    .word 0x44171800
    .word 0x44020800
    .word 0x44111000
    .word 0x00571023
    .word 0x24440001
    .word 0x44020000
    nop
    .word 0x00511023
    bgez s7, L129884
    .word 0x24450001
    .word 0x02e41021
    bgezl v0, L129880
    .word 0x00972021
    b L1299a4
    .word 0x70001628
    .word 0x00972021
L129880:
    .word 0x7000be28
L129884:
    .word 0x8fa200a0
    .word 0x02e41821
    .word 0x0043082a
    beqz at, L1298b0
    nop
    .word 0x0057082a
    beqz at, L1298b0
    .word 0x00572023
    b L1299a4
    .word 0x70001628
    .word 0x00572023
L1298b0:
    bgez s1, L1298d8
    .word 0x02251021
    .word 0x02251021
    bgezl v0, L1298d0
    .word 0x00b12821
    b L1299a4
    .word 0x70001628
    .word 0x00b12821
L1298d0:
    .word 0x70008e28
    .word 0x02251021
L1298d8:
    .word 0x00c2082a
    beqz at, L1298fc
    nop
    .word 0x00d1082a
    beqz at, L1298fc
    .word 0x00d12823
    b L1299a4
    .word 0x70001628
    .word 0x00d12823
L1298fc:
    .word 0x8fa200a0
    .word 0x02e4a021
    .word 0x0222f018
    .word 0x02251021
    b L129990
    .word 0xafa200b0
L129914:
    .word 0x8fa200cc
    .word 0x02fe2021
    .word 0x00041880
    .word 0x00641821
    .word 0x8c4200b4
    .word 0x00031840
    .word 0x00641821
    .word 0x00031880
    .word 0x72e09628
    b L129978
    .word 0x00439821
    .word 0x72602628
L129944:
    .word 0x72402e28
    .word 0x72203628
    jalr ra,s6
    .word 0x72a03e28
    beqz v0, L129968
    .word 0x72001628
    b L129970
    .word 0x26100001
    .word 0x72001628
L129968:
    b L1299a8
    .word 0x7bbf0090
L129970:
    .word 0x2673002c
    .word 0x26520001
L129978:
    .word 0x0254102a
    bnez v0, L129944
    .word 0x72602628
    .word 0x8fa200a0
    .word 0x26310001
    .word 0x03c2f021
L129990:
    .word 0x8fa200b0
    .word 0x0222102a
    bnez v0, L129914
    nop
    .word 0x72001628
L1299a4:
    .word 0x7bbf0090
L1299a8:
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd00d0
}
