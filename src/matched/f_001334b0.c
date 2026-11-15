extern void func_0010a530(void);
extern void func_0012b9d0(void);
extern void func_0012ba80(void);
extern void func_00131670(void);
extern void func_00133a60(void);
extern void func_0013b3f0(void);
extern void func_0013b890(void);
extern void func_0013c320(void);
extern void func_0013cbf0(void);
extern void func_00143c00(void);
extern void func_00148ac0(void);
extern void func_0014c190(void);
extern void func_00159ed0(void);
extern void func_0015c730(void);
extern void func_0015ddd0(void);
extern void func_00162b70(void);
extern void func_0016b2f0(void);
extern void func_0016e8d0(void);
extern void func_0016e9d0(void);
extern void func_001700f0(void);
extern void func_00171010(void);
extern void func_00171070(void);
extern void func_001715a0(void);
extern void func_001722f0(void);
extern void func_00172b60(void);
extern void func_00173740(void);
extern void func_00173fd0(void);
extern void func_001752b0(void);
extern void func_00177980(void);
extern void func_00178c80(void);
extern void func_0017a3e0(void);
extern void func_0017b3e0(void);
extern void func_00180530(void);
extern void func_0018b7f0(void);
extern void func_0018bca0(void);
extern void func_001919e0(void);
extern void func_001a7e80(void);
extern void func_001a81b0(void);
extern void func_001a85c0(void);
extern void func_001aa250(void);
extern void func_001b42c0(void);
extern void func_001b5d50(void);
extern void func_001b6270(void);
extern void func_001b8890(void);
extern void func_001b8c70(void);
extern void func_001ba3d0(void);
extern void func_001ba7d0(void);
extern void func_001cc680(void);
extern void func_00222890(void);
extern void func_00224be0(void);
extern void func_00226140(void);
extern void func_002264b0(void);
extern void func_00227150(void);
extern void func_002274d0(void);
extern void func_00229190(void);
extern void func_0022b560(void);
extern void func_0022b5f0(void);
extern void func_0022b7a0(void);
extern void func_0022b950(void);
extern void func_002332e0(void);
extern void func_00234f30(void);
extern void func_00236410(void);
extern void func_002394e0(void);
extern void func_002428b0(void);
extern void func_002438d0(void);
extern void func_002448b0(void);
extern void func_002453d0(void);
extern void func_00245720(void);
extern void func_002461b0(void);
extern void func_00246390(void);
extern void func_00248050(void);
extern void func_00249350(void);
extern void func_0024a0f0(void);
extern void func_0025e500(void);
extern void func_0025f6e0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    .word 0x7fbf0000
    jal func_0022b5f0
    nop
    jal func_00133a60
    nop
    jal func_001752b0
    .word 0x70002628
    jal func_001b8890
    nop
    jal func_001700f0
    nop
    jal func_001cc680
    .word 0x70002628
    jal func_0022b7a0
    nop
    .word 0x3c027000
    ori v0,v0,0x3ffc
    .word 0xac400000
    .word 0x3c020030
    addiu a0,v0,-23424
    .word 0x70001e28
L133508:
    addiu v1,v1,2
    .word 0xac800120
    .word 0xac800124
    slti v0,v1,14
    addiu a0,a0,8
    bnez v0,L133508
    nop
    .word 0x3c020030
    addiu v1,v0,-23424
    .word 0x70002628
L133530:
    addiu a0,a0,2
    .word 0xac600158
    .word 0xac60015c
    slti v0,a0,14
    addiu v1,v1,8
    bnez v0,L133530
    nop
    .word 0x3c02002e
    addiu a0,v0,-8240
    .word 0xc4830000
    .word 0xc4820004
    .word 0xc4810008
    .word 0x3c020030
    addiu v1,v0,-23024
    .word 0xc480000c
    .word 0x3c020030
    addiu a2,zero,-1
    .word 0x3c010030
    addiu t0,v0,-23424
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0xc4800010
    .word 0x70003e28
    .word 0xe4600010
    .word 0xac26a62c
    .word 0x3c010030
    .word 0xac20a630
    .word 0x3c053f80
L1335a8:
    .word 0xad0601b4
    .word 0xad0601c0
    .word 0xad0601cc
    .word 0xad0001d8
    .word 0xad0001e4
    .word 0xad0001f0
    .word 0xad0001fc
    .word 0xad000208
    .word 0xad000214
    .word 0xad000220
    .word 0xad05022c
    addiu a3,a3,1
    .word 0xad000238
    .word 0xad060244
    slti v0,a3,3
    bnez v0,L1335a8
    addiu t0,t0,4
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xac22a6d0
    .word 0x3c010030
    .word 0xac25a4a8
    .word 0x3c010030
    .word 0xac25a494
    .word 0x3c010030
    .word 0xac25a480
    .word 0x3c010030
    .word 0xac20a490
    .word 0x3c010030
    .word 0xac20a488
    .word 0x3c010030
    .word 0xac20a484
    .word 0x3c010030
    .word 0xac20a4a4
    .word 0x3c010030
    .word 0xac20a4a0
    .word 0x3c010030
    .word 0xac20a498
    .word 0x3c010030
    .word 0xac20a4b8
    .word 0x3c010030
    .word 0xac20a4b4
    .word 0x3c010030
    .word 0xac20a4b0
    .word 0x3c010030
    .word 0x3c020033
    .word 0x8c23a48c
    addiu v0,v0,-23008
    .word 0xaf82831c
    .word 0x3c020002
    ori v0,v0,0x3
    or v0,v1,v0
    .word 0x3c010030
    .word 0xac22a48c
    .word 0x3c010030
    .word 0xac25a55c
    .word 0x3c010030
    .word 0xac20a568
    .word 0x3c010030
    .word 0xac20a570
    .word 0x3c010030
    .word 0xac26a578
    .word 0x3c010030
    .word 0xac20a57c
    .word 0x3c010030
    .word 0xac26a580
    .word 0x3c010030
    .word 0xac20a560
    .word 0x3c010030
    .word 0xac20a564
    .word 0x3c010030
    .word 0xac20a588
    .word 0x3c020033
    .word 0x3c010030
    addiu v0,v0,-23008
    .word 0xac20a58c
    .word 0x8c42013c
    addiu a0,zero,4
    jalr ra,v0
    addiu a1,zero,448
    .word 0x3c010030
    .word 0xac22a590
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    .word 0x3c010030
    .word 0xac22a59c
    .word 0x3c017000
    .word 0xac223ffc
    .word 0x3c020030
    addiu a0,v0,-23424
    .word 0x3c020030
    addiu v0,v0,-23424
    jal func_0010a530
    addiu a1,v0,288
    .word 0x3c027000
    ori v0,v0,0x3fec
    .word 0x3c017000
    .word 0xac223ffc
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c020030
    addiu a3,v0,-23424
    addiu a2,zero,16080
    .word 0xac600000
    .word 0x8f8488b0
    addiu a1,zero,18
    addiu v0,zero,-2
    daddiu v1,zero,1
    .word 0xac870010
    .word 0x8f8488b0
    .word 0xac860080
    .word 0x8f8488b0
    .word 0xac850020
    .word 0x8f8588b0
    .word 0x90a40001
    and v0,a0,v0
    or v0,v0,v1
    .word 0xa0a20001
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    .word 0x3c017000
L13378c:
    .word 0x8c233ffc
    .word 0x8c630000
    bne v1,v0,L1337b0
    .word 0x70001e28
    .word 0x3c017000
    addiu v1,zero,1
    b L1337b0
    .word 0xac223ffc
    .word 0x70001e28
L1337b0:
    beqz v1,L13378c
    .word 0x3c017000
    jal func_00131670
    nop
    jal func_0016b2f0
    nop
    jal func_00234f30
    nop
    jal func_002428b0
    nop
    jal func_0016e9d0
    nop
    jal func_00172b60
    nop
    jal func_00171070
    nop
    jal func_001715a0
    nop
    jal func_00173fd0
    nop
    jal func_00173740
    nop
    jal func_002461b0
    nop
    jal func_001b42c0
    nop
    jal func_001b6270
    nop
    jal func_00236410
    nop
    jal func_00248050
    nop
    jal func_0025e500
    nop
    jal func_00224be0
    nop
    jal func_00245720
    nop
    jal func_002453d0
    nop
    jal func_00246390
    nop
    jal func_00249350
    nop
    jal func_00229190
    nop
    jal func_00227150
    nop
    jal func_002264b0
    nop
    jal func_002274d0
    nop
    jal func_002448b0
    nop
    jal func_00226140
    nop
    jal func_002332e0
    nop
    jal func_0013b3f0
    nop
    jal func_00177980
    nop
    jal func_0013c320
    nop
    jal func_0017a3e0
    nop
    jal func_00162b70
    nop
    jal func_0014c190
    nop
    jal func_0013cbf0
    nop
    jal func_00159ed0
    nop
    jal func_0015ddd0
    nop
    jal func_0018bca0
    nop
    jal func_0013b890
    nop
    jal func_0012ba80
    nop
    jal func_002438d0
    nop
    jal func_0017b3e0
    nop
    jal func_00148ac0
    nop
    jal func_0015c730
    nop
    jal func_0018b7f0
    nop
    jal func_0025f6e0
    nop
    jal func_001919e0
    nop
    jal func_00180530
    nop
    jal func_0016e8d0
    nop
    jal func_001ba3d0
    nop
    jal func_00222890
    nop
    jal func_0022b560
    nop
    jal func_0022b950
    nop
    jal func_00171010
    nop
    jal func_0012b9d0
    nop
    jal func_001722f0
    nop
    jal func_001b8c70
    nop
    jal func_00178c80
    nop
    jal func_00143c00
    nop
    jal func_001aa250
    nop
    beqz v0,L1339d0
    nop
    .word 0x3c023f80
    .word 0x44826000
    jal func_001a7e80
    addiu a0,zero,8
    .word 0x3c023f80
    .word 0x44826000
    jal func_001a81b0
    nop
    .word 0x3c024248
    .word 0x44826000
    jal func_001a85c0
    nop
L1339d0:
    jal func_001ba7d0
    nop
    jal func_0024a0f0
    nop
    jal func_002394e0
    nop
    jal func_001b5d50
    nop
    .word 0x3c037000
    ori v1,v1,0x3fd0
    .word 0x8c640000
    addiu v1,zero,-1
    bne a0,v1,L133a4c
    .word 0x3c017000
    .word 0x3c017000
    .word 0x8c233fc8
    beqz v1,L133a48
    nop
    .word 0x3c010030
    .word 0xac20a580
    .word 0x3c017000
    .word 0x8c243ffc
    .word 0x3c03afbf
    ori v1,v1,0xcfdf
    bne a0,v1,L133a48
    nop
    .word 0x3c010030
    .word 0x8c23a580
    .word 0x3c017000
    .word 0xac233fd0
L133a48:
    .word 0x3c017000
L133a4c:
    .word 0xac203ffc
    .word 0x7bbf0000
    jr ra
    addiu sp,sp,16
}
