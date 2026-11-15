extern void func_001214b8(void);
extern void func_00121b70(void);
extern void func_0013b550(void);
extern void func_001956b0(void);
extern void func_001a3ac0(void);
extern void func_001b6240(void);
extern void func_0024b540(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-256
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,3
    .word 0x70a08e28
    .word 0x70809628
    beq s1,v0, L19c7d4
    .word 0x70c08628
    addiu v0,zero,9
    beq s1,v0, L19c7bc
    nop
    beqz s1, L19c76c
    nop
    b L19c944
    .word 0x72402628
L19c76c:
    .word 0x8f848328
    jal func_0013b550
    .word 0x70002e28
    sw v0,8(s2)
    .word 0x3c020031
    addiu v0,v0,24032
    sw zero,12(s2)
    sw v0,20(s2)
    addiu a2,zero,1
    .word 0x3c020031
    sw a2,16(s2)
    sw zero,24(s2)
    addiu a0,v0,24032
    addiu a1,zero,13
    jal func_001956b0
    sw zero,4(s2)
    lw v0,4(s2)
    ori v0,v0,0xa
    b L19c940
    sw v0,4(s2)
L19c7bc:
    jal func_001b6240
    nop
    bnez v0, L19c940
    nop
    b L19c950
    addiu v0,zero,1
L19c7d4:
    .word 0x3c02002e
    addiu a1,v0,11296
    addiu a2,sp,96
    addiu a0,zero,4
L19c7e4:
    .word 0x78a30000
    .word 0x78a20010
    addiu a0,a0,-1
    .word 0x7cc30000
    .word 0x7cc20010
    addiu a1,a1,32
    bgtz a0, L19c7e4
    addiu a2,a2,32
    .word 0xdca30000
    .word 0xc4a20008
    .word 0xfcc30000
    .word 0xe4c20008
    .word 0x8f848328
    addiu a1,zero,310
    jal func_0013b550
    .word 0xaf80851c
    sw v0,116(sp)
    .word 0x3c010033
    lw v0,11332(at)
    .word 0x8f848328
    addiu a1,zero,304
    jal func_0013b550
    addiu s4,v0,1
    .word 0x8f84851c
    beqz a0, L19c868
    .word 0x70409e28
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19c874
    .word 0xaf82851c
L19c868:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19c874:
    .word 0x8f84851c
    .word 0x72602e28
    .word 0x72803628
    jal func_001214b8
    .word 0x70003e28
    .word 0x3c010033
    lw a1,11332(at)
    .word 0x3c020033
    .word 0x8f86851c
    addiu v1,v0,11328
    .word 0x8f848328
    .word 0x3c010033
    lw v0,11336(at)
    sll a1,a1,0x3
    addu v1,v1,a1
    addiu v1,v1,16
    sw a2,144(sp)
    addiu s4,v0,1
    addiu a1,zero,320
    jal func_0013b550
    sw v1,148(sp)
    .word 0x8f84851c
    beqz a0, L19c8f0
    .word 0x70409e28
    jal func_00121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19c8fc
    .word 0xaf82851c
L19c8f0:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
L19c8fc:
    .word 0x8f84851c
    .word 0x72602e28
    .word 0x72803628
    jal func_001214b8
    .word 0x70003e28
    .word 0x8f84851c
    .word 0xdf8584d8
    addiu a2,sp,248
    addiu v1,zero,5
    sw a0,172(sp)
    .word 0xfcc50000
    addiu v0,sp,96
    sw v1,248(sp)
    addiu a0,zero,10
    sw v0,252(sp)
    jal func_0024b540
    .word 0x70002e28
L19c940:
    .word 0x72402628
L19c944:
    .word 0x72202e28
    jal func_001a3ac0
    .word 0x72003628
L19c950:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,256
}
