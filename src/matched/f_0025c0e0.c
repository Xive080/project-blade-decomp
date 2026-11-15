extern void func_0024b410(void);
extern void func_0024b400(void);
extern void func_0024b3f0(void);
extern void func_0024b3c0(void);
extern void func_0024b370(void);
extern void func_0024bc20(void);
extern void func_0024bc00(void);
extern void func_0025b9e0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffe0
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0xac8502f8
    .word 0x8c8202f8
    .word 0x90420004
    slti at,v0,9
    bnez at,L25c108
    .word 0x70808628
    addiu v0,zero,8
L25c108:
    .word 0xae0202fc
    .word 0x8f8289f0
    addiu a1,zero,1
    .word 0xc44c00a0
    .word 0xc44d00b4
    jal func_0024b410
    .word 0x72002628
    .word 0x8f8389f0
    .word 0x8c6200c0
    beqz v0,L25c160
    nop
    .word 0x8c620000
    .word 0x8e03002c
    .word 0x8c420084
    .word 0x24640001
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v0,v1
    .word 0x8c620000
    ori v0,v0,0x20
    .word 0xac620000
L25c160:
    .word 0x8f8289f0
    .word 0x8e03002c
    .word 0x72002628
    .word 0x8c420000
    .word 0x24650001
    sll v1,a1,0x2
    addu v1,v1,a1
    .word 0x8c420084
    sll v1,v1,0x2
    addu v1,v0,v1
    .word 0x8c620000
    ori v0,v0,0x80
    .word 0xac620000
    .word 0x8e02002c
    .word 0x24450001
    jal func_0024b400
    .word 0x70a03628
    .word 0x8e05002c
    .word 0x72002628
    jal func_0024b3f0
    .word 0x24a60001
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44826800
    .word 0x3c024420
    .word 0x44827000
    .word 0x3c023f80
    .word 0x44828000
    .word 0x3c023f19
    ori v0,v0,0x999a
    .word 0x44826000
    .word 0x3c024000
    .word 0x44827800
    jal func_0024b3c0
    .word 0x72002628
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44826000
    .word 0x72002628
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44826800
    .word 0x3c02c353
    ori v0,v0,0x3334
    .word 0x44827000
    .word 0x3c02c1b4
    .word 0x44827800
    .word 0x3c024307
    .word 0x44828000
    .word 0x3c02002e
    jal func_0024b370
    .word 0x244505d0
    jal func_0024bc20
    .word 0x72002628
    .word 0x3c02421c
    .word 0x44826000
    .word 0x44806800
    nop
    .word 0x46006386
    jal func_0024bc00
    .word 0x72002628
    .word 0x72002628
    jal func_0025b9e0
    .word 0x70002e28
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0020
}
