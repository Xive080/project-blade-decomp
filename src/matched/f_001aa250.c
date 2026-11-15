extern void func_00109ce0(void);
extern void func_00109d00(void);
extern void func_00109d20(void);
extern void func_00109f60(void);
extern void func_0010cbf8(void);
extern void func_001aa470(void);
extern void func_001aa810(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffd0
    .word 0x7fbf0010
    jal func_001aa470
    .word 0x7fb00000
    addiu v0,zero,1
    .word 0x3c010031
    .word 0xac227508
    .word 0x3c010031
    .word 0xac227504
    .word 0x3c020031
    jal func_00109ce0
    .word 0x24447500
    .word 0xaf828070
    addiu v0,zero,1
    .word 0x3c010031
    .word 0xac227528
    .word 0x3c010031
    .word 0xac227524
    .word 0x3c020031
    jal func_00109ce0
    .word 0x24447520
    .word 0xaf82806c
    .word 0x3c020032
    .word 0x24447708
    addiu a1,zero,1793
    jal func_0010cbf8
    .word 0x70003628
    bgez v0, L1aa2cc
    nop
    b L1aa454
    .word 0x70001628
L1aa2cc:
    .word 0x3c010032
    .word 0x8c22772c
    bnez v0, L1aa2e8
    .word 0x70002628
    b L1aa454
    .word 0x70001628
    .word 0x70002628
L1aa2e8:
    jal func_00109f60
    nop
    .word 0x3c01002e
    .word 0x8c223660
    beqz v0, L1aa374
    .word 0x27a9002c
    jal func_00109d20
    .word 0x8f84806c
    .word 0x3c01002e
    .word 0x8c273660
    .word 0x3c020032
    .word 0x24467740
    .word 0x70004628
    .word 0x70004e28
    .word 0x3c01002e
    .word 0x8c253664
    .word 0x3c01002e
    .word 0x8c243668
    .word 0x3c01002e
    .word 0x8c23366c
    .word 0x3c010032
    .word 0xac277740
    .word 0x3c010032
    .word 0xac257744
    .word 0x3c010032
    .word 0xac247748
    .word 0x3c010032
    addiu a0,zero,1
    addiu a3,zero,16
    .word 0xac23774c
    jal func_001aa810
    ori a1,zero,0x8032
    jal func_00109d00
    .word 0x8f84806c
    .word 0x27a9002c
L1aa374:
    addiu a0,zero,1
    addiu t0,zero,4
    ori a1,zero,0x8000
    .word 0x70003628
    jal func_001aa810
    .word 0x70003e28
    .word 0x8fa2002c
    bnez v0, L1aa3a0
    nop
    b L1aa454
    .word 0x70001628
L1aa3a0:
    .word 0x8f84806c
    addiu v0,zero,1
    .word 0x3c010032
    .word 0xac227700
    .word 0x3c023f80
    .word 0x3c010031
    jal func_00109d20
    .word 0xac2275c8
    .word 0x3c02467f
    .word 0x3442fc00
    .word 0x44820000
    addiu a0,zero,1
    .word 0x46000024
    .word 0x3c020032
    .word 0x24467740
    addiu a3,zero,4
    .word 0x44100000
    .word 0x3c010032
    ori a1,zero,0x8010
    .word 0x70004628
    .word 0x70004e28
    jal func_001aa810
    .word 0xac307740
    jal func_00109d00
    .word 0x8f84806c
    .word 0x8f84806c
    .word 0x3c023f80
    .word 0x3c010031
    jal func_00109d20
    .word 0xac2275cc
    .word 0x3c020032
    .word 0x24467740
    .word 0x3c010032
    addiu a0,zero,1
    addiu a3,zero,4
    ori a1,zero,0x801e
    .word 0x70004628
    .word 0x70004e28
    jal func_001aa810
    .word 0xac307740
    jal func_00109d00
    .word 0x8f84806c
    .word 0x3c010032
    .word 0x8c227700
    nop
L1aa454:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0030
}
