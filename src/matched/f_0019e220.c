extern void func_001214b8(void);
extern void func_00121b70(void);
extern void func_0013b550(void);
extern void func_0024b540(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdfe50
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x70808e28
    .word 0x3c02002e
    .word 0x7fb00000
    .word 0x24452610
    .word 0x27a60030
    addiu a0,zero,11
    .word 0x70008628
L19e248:
    .word 0x78a30000
    .word 0x78a20010
    .word 0x2484ffff
    .word 0x7cc30000
    .word 0x7cc20010
    .word 0x24a50020
    bgtz a0, L19e248
    .word 0x24c60020
    .word 0xdca30000
    .word 0xc4a20008
    .word 0xfcc30000
    .word 0xe4c20008
    .word 0x8f848328
    addiu a1,zero,4
    jal func_0013b550
    .word 0xaf80851c
    .word 0xafa20044
    .word 0x3c010030
    .word 0x9022a61f
    .word 0x8f848328
    jal func_0013b550
    .word 0x24450016
    bnez s1, L19e2b0
    .word 0xafa20060
    addiu v0,zero,25
    .word 0xafa200a0
L19e2b0:
    .word 0x3c010033
    .word 0x8c2a3190
    .word 0x3c020033
    .word 0x24483140
    .word 0x27a90030
    addiu a2,zero,2
    addiu a1,zero,1
    addiu a0,zero,17
    addiu v1,zero,16
    b L19e330
    .word 0x70003e28
L19e2dc:
    .word 0x8d020028
    .word 0xad2200a0
    .word 0x8d020000
    beq v0,a2, L19e318
    nop
    beq v0,a1, L19e300
    nop
    b L19e324
    .word 0x25080004
L19e300:
    .word 0xad24008c
    .word 0x8fa20058
    .word 0x00501021
    .word 0x26100001
    b L19e320
    .word 0xad2200a4
L19e318:
    .word 0xad23008c
    nop
L19e320:
    .word 0x25080004
L19e324:
    .word 0x2529001c
    .word 0x24e70001
    nop
L19e330:
    .word 0x00ea102b
    bnez v0, L19e2dc
    nop
    .word 0x3c010033
    .word 0x8c233194
    .word 0x27a201a0
    .word 0x8f848328
    .word 0xafa20080
    addiu a1,zero,324
    .word 0x3c010033
    .word 0x8c313190
    .word 0x00701023
    .word 0xafa201a0
    jal func_0013b550
    .word 0xafa301a4
    .word 0x8f84851c
    beqz a0, L19e394
    .word 0x70408628
    jal func_00121b70
    nop
    .word 0x24430001
    .word 0x8f82851c
    .word 0x00431021
    b L19e3a0
    .word 0xaf82851c
L19e394:
    .word 0x3c020031
    .word 0x24426900
    .word 0xaf82851c
L19e3a0:
    .word 0x8f84851c
    .word 0x72002e28
    .word 0x72203628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f85851c
    .word 0xdf8384d8
    .word 0x27a601a8
    .word 0x3c010033
    .word 0x27a20030
    .word 0xafa5007c
    .word 0xfcc30000
    .word 0x8c233190
    addiu a0,zero,10
    .word 0x70002e28
    .word 0x24630005
    .word 0xafa301a8
    jal func_0024b540
    .word 0xafa201ac
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd01b0
}
