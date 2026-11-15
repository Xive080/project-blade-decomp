extern void func_00130eb0(void);
extern void func_001312f0(void);
extern void func_00195030(void);
extern void func_001952a0(void);
extern void func_001a6bb0(void);
extern void func_001bade0(void);
extern void func_001c2190(void);
extern void func_001c21b0(void);
extern void func_001c21d0(void);
extern void func_001c2220(void);
extern void func_001c24e0(void);
extern void func_001c2580(void);
extern void func_001c35a0(void);
extern void func_001c8760(void);
extern void func_001d9af0(void);
extern void func_001e9dd0(void);
extern void func_001e9de0(void);
extern void func_001f4330(void);
extern void func_001fbdc0(void);
extern void func_00209fd0(void);
extern void func_00210050(void);
extern void func_002105a0(void);
extern void func_002215a0(void);
extern void func_002228c0(void);
extern void func_00222e00(void);
extern void func_0022d420(void);
extern void func_00234c40(void);
extern void func_00236a50(void);
extern void func_00238010(void);
extern void func_00247420(void);
extern void func_00247a50(void);
extern void func_00248930(void);
extern void func_0024a750(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0020
    .word 0x7fb10010
    jal func_001c2580
    .word 0x7fb00000
    .word 0x3c010030
    jal func_001c35a0
    .word 0xac22a360
    .word 0x3c010030
    .word 0x8c24a360
    jal func_001c24e0
    .word 0x70402e28
    addiu a0,zero,640
    addiu a1,zero,512
    addiu a3,zero,2
    jal func_001c8760
    .word 0x70003628
    .word 0x3c010030
    .word 0x8c24a360
    jal func_001c2190
    .word 0x70402e28
    addiu a0,zero,640
    addiu a1,zero,512
    addiu a3,zero,1
    jal func_001c8760
    .word 0x70003628
    .word 0x3c010030
    .word 0x8c24a360
    jal func_001c21b0
    .word 0x70402e28
    .word 0x3c023f88
    ori v0,v0,0x8889
    .word 0x3c010030
    .word 0xac22a574
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L131720
    nop
    .word 0x3c010030
    .word 0xc420a574
    .word 0x3c017000
    .word 0xe4203fc4
L131720:
    .word 0x3c020030
    addiu s1,v0,-23696
    .word 0x70008628
L13172c:
    jal func_001c2580
    .word 0xae200000
    addiu a3,zero,2
    .word 0xae220004
    .word 0x70002628
    .word 0x70002e28
    jal func_001c8760
    .word 0x70003628
    .word 0x8e240004
    jal func_001c2190
    .word 0x70402e28
    addiu a3,zero,1
    .word 0x70002628
    .word 0x70002e28
    jal func_001c8760
    .word 0x70003628
    .word 0x8e240004
    jal func_001c21b0
    .word 0x70402e28
    .word 0x3c0242a0
    .word 0x44826000
    .word 0x3c023faa
    ori v0,v0,0xaaab
    .word 0x44826800
    jal func_00130eb0
    .word 0x8e240004
    .word 0x3c023f40
    .word 0x44826000
    jal func_001c21d0
    .word 0x8e240004
    .word 0x3c024348
    .word 0x44826000
    jal func_001c2220
    .word 0x8e240004
    addiu s0,s0,1
    slti v0,s0,2
    bnez v0,L13172c
    addiu s1,s1,76
    .word 0x3c010030
    .word 0xac20a36c
    .word 0x3c010030
    .word 0xa020a418
    .word 0x3c010030
    .word 0xa020a419
    .word 0x3c010030
    .word 0xa020a41a
    addiu v0,zero,255
    .word 0x3c010030
    .word 0xa022a41b
    addiu v0,zero,2
    .word 0x3c010030
    .word 0xac22a364
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xac22a428
    .word 0x3c010030
    jal func_001c35a0
    .word 0xac20a42c
    .word 0x3c010030
    .word 0xac22a430
    jal func_001312f0
    .word 0x70002628
    .word 0x3c010030
    .word 0x8c24a364
    addiu v1,zero,-17
    addiu v0,zero,-9
    and v1,a0,v1
    .word 0x3c010030
    .word 0xac23a364
    .word 0x3c010030
    .word 0x8c23a364
    and v0,v1,v0
    .word 0x3c010030
    .word 0xac22a364
    .word 0x3c010030
    .word 0xac20a41c
    .word 0x3c010030
    jal func_00195030
    .word 0xac20a420
    .word 0xc7808014
    addiu a1,sp,60
    addiu a2,sp,48
    .word 0x3c010030
    .word 0xe4a00000
    .word 0xdf828018
    .word 0xfcc20000
    jal func_001952a0
    .word 0x8c24a360
    .word 0x3c010030
    jal func_001bade0
    .word 0xac22a424
    .word 0x3c010030
    jal func_0022d420
    .word 0xac22a444
    .word 0x3c010030
    jal func_00238010
    .word 0xac22a448
    .word 0x3c010030
    jal func_00234c40
    .word 0xac22a44c
    .word 0x3c010030
    jal func_002228c0
    .word 0xac22a450
    .word 0x3c010030
    jal func_00222e00
    .word 0xac22a454
    .word 0x3c010030
    jal func_00236a50
    .word 0xac22a458
    .word 0x3c010030
    jal func_00247420
    .word 0xac22a45c
    .word 0x3c010030
    jal func_00247a50
    .word 0xac22a460
    .word 0x3c010030
    jal func_0024a750
    .word 0xac22a464
    .word 0x3c010030
    jal func_00248930
    .word 0xac22a468
    .word 0x3c010030
    jal func_002215a0
    .word 0xac22a46c
    .word 0x3c010030
    jal func_001a6bb0
    .word 0xac22a470
    .word 0x3c010030
    addiu a0,zero,1
    jal func_002105a0
    .word 0xac22a474
    jal func_00209fd0
    .word 0x70408628
    .word 0x8e050000
    .word 0x70402628
    .word 0x70003628
    jal func_001d9af0
    .word 0x70003e28
    .word 0x70402628
    .word 0x3c020013
    jal func_00210050
    addiu a1,v0,1296
    .word 0x3c020013
    jal func_001fbdc0
    addiu a0,v0,1296
    jal func_001e9dd0
    nop
    .word 0x3c010030
    jal func_001e9de0
    .word 0xac22a434
    addiu a0,zero,256
    .word 0x3c010030
    addiu a2,zero,32
    addiu a3,zero,133
    .word 0xac22a438
    jal func_001c8760
    .word 0x70802e28
    .word 0x3c010030
    .word 0xac22a43c
    .word 0x3c010030
    .word 0x8c24a43c
    jal func_001f4330
    addiu a1,zero,1
    jal func_001c2580
    nop
    .word 0x3c010030
    jal func_001c35a0
    .word 0xac22a440
    .word 0x3c010030
    .word 0x8c24a440
    jal func_001c24e0
    .word 0x70402e28
    .word 0x3c010030
    .word 0x8c24a440
    .word 0x3c010030
    jal func_001c2190
    .word 0x8c25a43c
    .word 0x3c030033
    addiu v1,v1,-2576
    .word 0x3c04437f
    .word 0xac640000
    .word 0x3c030033
    addiu v1,v1,-2576
    .word 0xac640004
    .word 0x3c030033
    addiu v1,v1,-2576
    .word 0xac640008
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
