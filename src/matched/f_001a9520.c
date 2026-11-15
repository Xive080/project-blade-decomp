extern void func_00109d00(void);
extern void func_00109d20(void);
extern void func_0011eac8(void);
extern void func_0011fe10(void);
extern void func_001214b8(void);
extern void func_001aa740(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff40
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b7000c
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x70808e28
    .word 0x8f84806c
    .word 0x460065c6
    .word 0x46006d86
    .word 0x46007546
    .word 0x46007d06
    jal func_00109d20
    addiu s0,zero,2
    .word 0x3c02467f
    .word 0x3442fc00
    .word 0x44821000
    .word 0x8e23001c
    .word 0x46171002
    .word 0x3c010032
    .word 0x46000024
    .word 0xac237740
    .word 0x3c010032
    .word 0xac207744
    .word 0x8e220050
    .word 0x44050000
    .word 0x46151042
    .word 0x46161002
    .word 0x46000024
    .word 0x44030000
    .word 0x46000864
    .word 0x3064ffff
    .word 0x46141002
    .word 0x46000024
    .word 0x44030800
    .word 0x44070000
    .word 0x00031c00
    beq v0,a1, L1a95e8
    .word 0x00833025
    .word 0xae250050
    .word 0x3c010032
    .word 0x8c227744
    .word 0x26100001
    .word 0x34420001
    .word 0x3c010032
    .word 0xac227744
    .word 0x3c010032
    .word 0xac257748
L1a95e8:
    .word 0x8e220050
    blez v0, L1a966c
    nop
    .word 0x8e220058
    beq v0,a2, L1a9630
    nop
    .word 0xae260058
    .word 0x3c010032
    .word 0x8c247744
    .word 0x3c020032
    .word 0x00101880
    .word 0x24427740
    .word 0x00431021
    .word 0x34830002
    .word 0x3c010032
    .word 0xac237744
    .word 0x26100001
    .word 0xac460000
L1a9630:
    .word 0x8e220054
    beq v0,a3, L1a966c
    nop
    .word 0xae270054
    .word 0x3c010032
    .word 0x8c247744
    .word 0x3c020032
    .word 0x00101880
    .word 0x24427740
    .word 0x00431021
    .word 0x34830004
    .word 0x3c010032
    .word 0xac237744
    .word 0x26100001
    .word 0xac470000
L1a966c:
    .word 0x3c010032
    .word 0x8c227744
    beqz v0, L1a974c
    nop
    .word 0x3c010031
    .word 0x8c2976b0
    .word 0x8f82852c
    .word 0x25230001
    beqz v0, L1a96dc
    .word 0x000388c0
    .word 0x3c020032
    .word 0x24427740
    .word 0x8c470000
    .word 0x27a40040
    ori a2,zero,0x800e
    .word 0x72205628
    .word 0x3c020032
    .word 0x24427740
    .word 0x8c480004
    .word 0x26020001
    .word 0x00025880
    .word 0x3c02002f
    jal func_001214b8
    .word 0x244500b0
    .word 0x3c02002f
    .word 0x24440110
    jal func_0011fe10
    .word 0x27a50040
L1a96dc:
    .word 0x3c010031
    .word 0x8c2376b4
    .word 0x00112080
    .word 0x26020001
    .word 0x00023080
    ori a1,zero,0x800e
    .word 0x00641821
    .word 0xac650000
    .word 0x3c010031
    .word 0x8c2376b4
    .word 0x26220001
    .word 0x00022080
    .word 0x3c020032
    .word 0x24457740
    jal func_0011eac8
    .word 0x00642021
    .word 0x3c010031
    .word 0x8c2276b0
    .word 0x24420001
    .word 0x3c010031
    .word 0xac2276b0
    .word 0x3c010031
    .word 0x8c2276b0
    .word 0x284203ff
    bnez v0, L1a974c
    nop
    jal func_001aa740
    .word 0x70002628
L1a974c:
    jal func_00109d00
    .word 0x8f84806c
    .word 0x7bbf0030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b7000c
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    .word 0x27bd00c0
}
