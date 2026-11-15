extern void func_001214b8(void);
extern void func_00121b70(void);
extern void func_0013b550(void);
extern void func_00195a30(void);
extern void func_001a3ac0(void);
extern void func_001b4b20(void);
extern void func_001b6240(void);
extern void func_0024b540(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff20
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,3
    .word 0x70a08e28
    .word 0x70809628
    beq s1,v0, L19cc38
    .word 0x70c08628
    addiu v0,zero,9
    beq s1,v0, L19cc20
    nop
    beqz s1, L19cbcc
    nop
    b L19cd5c
    .word 0x72402628
L19cbcc:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,332
    .word 0xae420008
    .word 0x3c020031
    .word 0x24425e20
    .word 0xae40000c
    .word 0xae420014
    addiu v0,zero,1
    .word 0xae420010
    .word 0x3c020031
    .word 0xae400018
    .word 0x24445e20
    addiu a1,zero,332
    addiu a2,zero,43
    jal func_00195a30
    .word 0xae400004
    .word 0x8e420004
    .word 0x3442000a
    b L19cd58
    .word 0xae420004
L19cc20:
    jal func_001b6240
    nop
    bnez v0, L19cd58
    nop
    b L19cd68
    addiu v0,zero,1
L19cc38:
    .word 0x3c02002e
    .word 0x24452b40
    .word 0x27a40060
    addiu v1,zero,7
L19cc48:
    .word 0x78a20000
    .word 0x2463ffff
    .word 0x7c820000
    .word 0x24a50010
    .word 0x24840010
    bgtz v1, L19cc48
    nop
    jal func_001b4b20
    .word 0xaf80851c
    .word 0x8c540000
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,331
    .word 0x8f84851c
    beqz a0, L19cca4
    .word 0x70409e28
    jal func_00121b70
    nop
    .word 0x24430001
    .word 0x8f82851c
    .word 0x00431021
    b L19ccb0
    .word 0xaf82851c
L19cca4:
    .word 0x3c020031
    .word 0x24426900
    .word 0xaf82851c
L19ccb0:
    .word 0x8f84851c
    addiu a2,zero,1
    .word 0x72602e28
    jal func_001214b8
    .word 0x72803e28
    .word 0x8f82851c
    jal func_001b4b20
    .word 0xafa20074
    .word 0x8c540004
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,331
    .word 0x8f84851c
    beqz a0, L19cd08
    .word 0x70409e28
    jal func_00121b70
    nop
    .word 0x24430001
    .word 0x8f82851c
    .word 0x00431021
    b L19cd14
    .word 0xaf82851c
L19cd08:
    .word 0x3c020031
    .word 0x24426900
    .word 0xaf82851c
L19cd14:
    .word 0x8f84851c
    addiu a2,zero,2
    .word 0x72602e28
    jal func_001214b8
    .word 0x72803e28
    .word 0x8f84851c
    .word 0xdf8584d8
    .word 0x27a600d8
    addiu v1,zero,4
    .word 0xafa40090
    .word 0xfcc50000
    .word 0x27a20060
    .word 0xafa300d8
    addiu a0,zero,10
    .word 0xafa200dc
    jal func_0024b540
    .word 0x70002e28
L19cd58:
    .word 0x72402628
L19cd5c:
    .word 0x72202e28
    jal func_001a3ac0
    .word 0x72003628
L19cd68:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd00e0
}
