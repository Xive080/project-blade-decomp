extern void func_00129210(void);
extern void func_00130e80(void);
extern void func_001312f0(void);
extern void func_0016c1c0(void);
extern void func_0016f240(void);
extern void func_001a7200(void);
extern void func_001f7930(void);
extern void func_002227a0(void);
extern void func_00249220(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffb0
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c010031
    .word 0xac20813c
    .word 0x70808e28
    .word 0x3c017000
    .word 0x8c243fd8
    .word 0x3c020017
    .word 0x24450f50
    jal func_00129210
    .word 0x70003628
    .word 0x32300001
    beqz s0, L170d98
    .word 0x32220010
    jal func_001f7930
    addiu a0,zero,12345
    .word 0x3c010030
    .word 0x3c027000
    .word 0xac20a560
    .word 0x34423ffc
    .word 0x8c430000
    .word 0x3c02afbf
    .word 0x3442cfdf
    bne v1,v0, L170d64
    nop
    .word 0x3c010030
    .word 0xc420a560
    .word 0x3c017000
    .word 0xe4203fb0
L170d64:
    .word 0x3c010030
    .word 0xac20a564
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    .word 0x3442cfdf
    bne v1,v0, L170d94
    nop
    .word 0x3c010030
    .word 0xc420a564
    .word 0x3c017000
    .word 0xe4203fb4
L170d94:
    .word 0x32220010
L170d98:
    beqz v0, L170ddc
    .word 0x3c017000
    addiu a0,zero,17
    addiu a1,zero,-1
    jal func_0016f240
    addiu a2,zero,101
    addiu a0,zero,2
    .word 0x70409628
    .word 0x3c010030
    jal func_001312f0
    .word 0xac326f94
    .word 0x8e450068
    jal func_00130e80
    .word 0x70002628
    b L170ee4
    nop
    .word 0x3c017000
L170ddc:
    .word 0x8c233fc0
    .word 0x30620001
    beqz v0, L170e58
    .word 0x30620002
    addiu a0,zero,17
    addiu a1,zero,-1
    jal func_0016f240
    addiu a2,zero,101
    addiu a0,zero,17
    addiu a1,zero,-1
    addiu a2,zero,103
    jal func_0016f240
    .word 0x70409628
    .word 0x70409e28
    jal func_001312f0
    .word 0x70002628
    .word 0x3c010030
    .word 0x32220008
    beqz v0, L170e40
    .word 0xac326f94
    .word 0x8e450068
    jal func_00130e80
    .word 0x70002628
    b L170ee4
    nop
L170e40:
    .word 0x8e650068
    jal func_00130e80
    .word 0x70002628
    b L170ee4
    nop
    .word 0x30620002
L170e58:
    beqz v0, L170ee4
    nop
    addiu a0,zero,17
    addiu a1,zero,-1
    jal func_0016f240
    addiu a2,zero,101
    addiu a0,zero,1
    jal func_001312f0
    .word 0x70409628
    addiu a0,zero,17
    .word 0x3c010030
    addiu a1,zero,-1
    addiu a2,zero,103
    jal func_0016f240
    .word 0xac326f94
    .word 0x32230008
    beqz v1, L170eb4
    nop
    .word 0x8e450068
    jal func_00130e80
    .word 0x70002628
    b L170ec4
    addiu a0,zero,17
L170eb4:
    .word 0x8c450068
    jal func_00130e80
    .word 0x70002628
    addiu a0,zero,17
L170ec4:
    addiu a1,zero,-1
    jal func_0016f240
    addiu a2,zero,102
    .word 0x3c010030
    .word 0xac227544
    .word 0x8c450068
    jal func_00130e80
    addiu a0,zero,1
L170ee4:
    .word 0x3c020031
    jal func_001a7200
    .word 0x244474a0
    .word 0x3c017000
    .word 0x8c243fdc
    jal func_0016c1c0
    .word 0x72202e28
    beqz s0, L170f30
    nop
    jal func_002227a0
    nop
    jal func_00249220
    nop
    .word 0x8f8484ac
    beqz a0, L170f30
    nop
    .word 0x8c820000
    jalr ra,v0
    nop
L170f30:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0050
}
