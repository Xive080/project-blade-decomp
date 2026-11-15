extern void func_00188e80(void);
extern void func_00188f00(void);
extern void func_001895d0(void);
extern void func_00231450(void);
extern void func_00231500(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c8300f4
    .word 0x8c910034
    .word 0x70809628
    .word 0x00031080
    .word 0x00431021
    .word 0x000210c0
    .word 0x00821021
    .word 0x8c45006c
    beqz a1, L22de28
    .word 0x24500054
    .word 0x8e04000c
    jal func_00188e80
    .word 0x70003628
L22de28:
    .word 0x8e42002c
    .word 0x30420004
    bnez v0, L22de8c
    nop
    .word 0x3c023f00
    .word 0xafa20060
    addiu v0,zero,2
    .word 0xafa00064
    .word 0xafa20068
    .word 0xafa0006c
    addiu v0,zero,17
    .word 0xafa00070
    .word 0xafa20040
    .word 0x3c024000
    .word 0xafa20044
    .word 0xafa20048
    addiu v0,zero,1
    .word 0xafa2005c
    .word 0x3c020019
    .word 0x8e040010
    .word 0x26070018
    .word 0x27a50040
    jal func_00188f00
    .word 0x2446b790
    .word 0xae020018
L22de8c:
    .word 0x8e050014
    beqz a1, L22dea4
    nop
    .word 0x8e040010
    jal func_00188e80
    .word 0x70003628
L22dea4:
    .word 0x8e42002c
    .word 0x30420004
    bnez v0, L22df08
    .word 0x3c023e80
    .word 0x3c023e80
    .word 0xafa20060
    .word 0x3c023f00
    .word 0xafa20064
    .word 0xafa00068
    .word 0xafa0006c
    .word 0xafa00070
    .word 0xc6200154
    addiu v0,zero,14
    .word 0x26070014
    .word 0x27a50040
    .word 0x46000007
    .word 0xafa20040
    .word 0xe7a00044
    .word 0xafa0005c
    .word 0x8e040010
    .word 0x3c020019
    jal func_00188f00
    .word 0x2446b790
    .word 0xae020014
    .word 0x3c023e80
L22df08:
    .word 0xafa20060
    .word 0x3c023f40
    .word 0xafa20064
    addiu v0,zero,1
    .word 0xafa20068
    .word 0xafa0006c
    .word 0xafa00070
    .word 0x8e42002c
    .word 0x30420001
    beqz v0, L22df48
    .word 0x3c02c396
    .word 0x3c024396
    .word 0x44820000
    b L22df50
    addiu v0,zero,9
    .word 0x3c02c396
L22df48:
    .word 0x44820000
    addiu v0,zero,9
L22df50:
    .word 0xafa20040
    .word 0xe7a00044
    .word 0x3c0238d1
    .word 0xafa00048
    .word 0x3442b717
    .word 0xafa20054
    .word 0xafa0005c
    .word 0x8e440040
    .word 0x3c020023
    .word 0x27a50040
    .word 0x2446e2e0
    jal func_001895d0
    .word 0x72403e28
    .word 0xae420044
    .word 0x8e44003c
    beqz a0, L22e018
    nop
    .word 0x8e43002c
    .word 0x30630004
    bnez v1, L22e018
    nop
    .word 0x8e430114
    bnez v1, L22e018
    nop
    .word 0x8e220158
    bltz v0, L22dfcc
    .word 0x00021842
    .word 0x44820000
    b L22dfe4
    .word 0x46800060
    .word 0x00021842
L22dfcc:
    .word 0x30420001
    .word 0x00621825
    .word 0x44830000
    nop
    .word 0x46800060
    .word 0x46010840
L22dfe4:
    .word 0xc6200154
    .word 0x3c023e80
    .word 0x44826800
    .word 0x3c023f00
    .word 0x44827000
    jal func_00231500
    .word 0x46010302
    .word 0x3c023e80
    .word 0x44826000
    .word 0x3c023f40
    .word 0x44826800
    jal func_00231450
    .word 0x8e44003c
L22e018:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0080
}
