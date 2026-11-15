extern void func_001297c0(void);
extern void func_00134040(void);
extern void func_00135160(void);
extern void func_00135d00(void);
extern void func_00137570(void);
extern void func_0013bf20(void);
extern void func_0013ea80(void);
extern void func_0013ecb0(void);
extern void func_0013ef70(void);
extern void func_0013f0c0(void);
extern void func_00140a60(void);
extern void func_00140f10(void);
extern void func_00149e60(void);
extern void func_0014a7a0(void);
extern void func_0015d1c0(void);
extern void func_00173c70(void);
extern void func_001746c0(void);
extern void func_001747d0(void);
extern void func_00174990(void);
extern void func_0017bd80(void);
extern void func_001ab650(void);
extern void func_001b32c0(void);
extern void func_001c3b70(void);
extern void func_001c7710(void);
extern void func_001ce160(void);
extern void func_001ce410(void);
extern void func_001f79f0(void);
extern void func_00234ff0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-448
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8c900518
    .word 0x8e020004
    andi v0,v0,0x4
    beqz v0,L13cfb8
    .word 0x70809628
    .word 0x3c020030
    addiu v1,v0,28048
    .word 0x8e050000
    .word 0x3c020030
    addiu a0,v0,28052
    sll v0,a1,0x3
    subu v0,v0,a1
    sll v0,v0,0x6
    addu v0,v1,v0
    .word 0xac400000
    .word 0x3c020030
    addiu v1,v0,28056
    .word 0x8e050000
    .word 0x3c020030
    addiu a2,v0,28060
    sll v0,a1,0x3
    subu v0,v0,a1
    sll v0,v0,0x6
    addu v0,a0,v0
    .word 0xac400000
    .word 0x3c020030
    addiu a1,v0,27984
    .word 0x8e070000
    .word 0x3c020030
    addiu a0,v0,27988
    sll v0,a3,0x3
    subu v0,v0,a3
    sll v0,v0,0x6
    addu v0,v1,v0
    .word 0xac400000
    .word 0x3c020030
    addiu v1,v0,27992
    .word 0x8e070000
    .word 0x3c020030
    addiu t3,v0,27996
    sll v0,a3,0x3
    subu v0,v0,a3
    sll v0,v0,0x6
    addu v0,a2,v0
    .word 0xac400000
    .word 0x3c020030
    addiu t2,v0,28008
    .word 0x8e060000
    .word 0x3c020030
    addiu t1,v0,28004
    sll v0,a2,0x3
    subu v0,v0,a2
    sll v0,v0,0x6
    addu v0,a1,v0
    .word 0xac400000
    .word 0x3c020030
    addiu t0,v0,28000
    .word 0x8e050000
    .word 0x3c020030
    addiu a3,v0,28012
    sll v0,a1,0x3
    subu v0,v0,a1
    sll v0,v0,0x6
    addu v0,a0,v0
    .word 0xac400000
    .word 0x3c020030
    addiu a1,v0,28024
    .word 0x8e060000
    .word 0x3c020030
    addiu a0,v0,28036
    sll v0,a2,0x3
    subu v0,v0,a2
    sll v0,v0,0x6
    addu v0,v1,v0
    .word 0xac400000
    .word 0x8e0d0000
    .word 0x3c020030
    addiu v1,v0,28028
    .word 0x3c020030
    .word 0x3c063f80
    sll t4,t5,0x3
    subu t4,t4,t5
    sll t4,t4,0x6
    addu t3,t3,t4
    .word 0xad600000
    .word 0x8e0c0000
    addiu v0,v0,28040
    sll t3,t4,0x3
    subu t3,t3,t4
    sll t3,t3,0x6
    addu t2,t2,t3
    .word 0xad400000
    .word 0x8e0b0000
    sll t2,t3,0x3
    subu t2,t2,t3
    sll t2,t2,0x6
    addu t1,t1,t2
    .word 0xad200000
    .word 0x8e0a0000
    sll t1,t2,0x3
    subu t1,t1,t2
    sll t1,t1,0x6
    addu t0,t0,t1
    .word 0xad000000
    .word 0x8e090000
    sll t0,t1,0x3
    subu t0,t0,t1
    sll t0,t0,0x6
    addu a3,a3,t0
    .word 0xace00000
    .word 0x8e080000
    sll a3,t0,0x3
    subu a3,a3,t0
    sll a3,a3,0x6
    addu a1,a1,a3
    .word 0xaca00000
    .word 0x8e070000
    sll a1,a3,0x3
    subu a1,a1,a3
    sll a1,a1,0x6
    addu a0,a0,a1
    .word 0xac800000
    .word 0x8e050000
    sll a0,a1,0x3
    subu a0,a0,a1
    sll a0,a0,0x6
    addu v1,v1,a0
    .word 0xac660000
    .word 0x8e040000
    sll v1,a0,0x3
    subu v1,v1,a0
    sll v1,v1,0x6
    addu v0,v0,v1
    b L13d170
    .word 0xac400000
L13cfb8:
    .word 0x3c020030
    addiu v1,v0,27984
    .word 0x8e040000
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44820800
    sll v0,a0,0x3
    subu v0,v0,a0
    sll v0,v0,0x6
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,27988
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,27992
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,27996
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,28008
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,28004
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,28000
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,28012
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,28024
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,28036
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,28028
    addu v1,v1,v0
    .word 0xc4600000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c030030
    addiu v1,v1,28040
    addu v0,v1,v0
    .word 0xc4400000
    c.lt.s $f0,$f1
    nop
    bc1f L13d16c
    nop
    .word 0x3c017000
    .word 0xc601006c
    .word 0xc4203fa8
    add.s $f0,$f1,$f0
    b L13d170
    .word 0xe600006c
L13d16c:
    .word 0xae00006c
L13d170:
    .word 0xc601006c
    .word 0x3c024170
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L13d200
    nop
    .word 0x8e02000c
    jal func_001c3b70
    .word 0x8c440048
    .word 0xc4410014
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L13d200
    nop
    .word 0x8e020014
    .word 0x44800000
    .word 0xc4410160
    c.eq.s $f0,$f1
    nop
    bc1f L13d200
    nop
    .word 0x8e040000
    .word 0x3c020030
    addiu v0,v0,28028
    .word 0x3c053f80
    sll v1,a0,0x3
    subu v1,v1,a0
    sll v1,v1,0x6
    addu v0,v0,v1
    .word 0xac450000
L13d200:
    .word 0x8e43003c
    .word 0x3c020020
    beq v1,v0,L13e730
    nop
    .word 0x3c020010
    beq v1,v0,L13e730
    nop
    .word 0x3c020004
    beq v1,v0,L13e614
    nop
    .word 0x3c020002
    beq v1,v0,L13e53c
    nop
    .word 0x3c020001
    beq v1,v0,L13e464
    nop
    ori v0,zero,32768
    beq v1,v0,L13e3b4
    .word 0x3c017000
    addiu v0,zero,8192
    beq v1,v0,L13e08c
    nop
    addiu v0,zero,2048
    beq v1,v0,L13dbd8
    .word 0x3c023eaa
    addiu v0,zero,512
    beq v1,v0,L13db1c
    .word 0x3c017000
    addiu v0,zero,256
    beq v1,v0,L13d740
    nop
    addiu v0,zero,128
    beq v1,v0,L13d5f4
    addiu a1,zero,-587
    addiu v0,zero,16384
    beq v1,v0,L13d4d8
    nop
    addiu v0,zero,4096
    beq v1,v0,L13d4d8
    nop
    addiu v0,zero,32
    beq v1,v0,L13d384
    nop
    addiu v0,zero,64
    beq v1,v0,L13d384
    nop
    addiu v0,zero,8
    beq v1,v0,L13d2fc
    addiu a1,zero,3
    addiu v0,zero,4
    beq v1,v0,L13d2e8
    .word 0x72002628
    addiu v0,zero,2
    beq v1,v0,L13d2e4
    nop
    b L13e7ac
    .word 0xc601026c
L13d2e4:
    .word 0x72002628
L13d2e8:
    jal func_001ab650
    .word 0x70002e28
    b L13e7a8
    nop
    addiu a1,zero,3
L13d2fc:
    jal func_001ab650
    .word 0x72002628
    addiu a1,zero,1
    jal func_0013f0c0
    .word 0x72002628
    .word 0x8e040008
    addiu a1,sp,112
    jal func_0013bf20
    .word 0x70003628
    .word 0x3c027000
    ori v0,v0,0x3fb8
    .word 0x8c430000
    .word 0x3c010030
    addiu v1,v1,1
    .word 0xac23a568
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L13d364
    .word 0x3c017000
    .word 0x3c010030
    .word 0x8c22a568
    .word 0x3c017000
    .word 0xac223fb8
    .word 0x3c017000
L13d364:
    .word 0x8c243fd8
    .word 0x3c020014
    addiu a1,sp,112
    addiu a2,v0,-1632
    jal func_001297c0
    .word 0x72003e28
    b L13e7a8
    nop
L13d384:
    .word 0x8e020270
    beqz v0,L13d3d8
    nop
    .word 0x8e020004
    andi v0,v0,0x100
    bnez v0,L13d3d8
    nop
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0xc6000164
    c.le.s $f1,$f0
    nop
    bc1t L13d42c
    addiu a1,zero,-129
    .word 0x8e020158
    beqz v0,L13d428
    nop
    jal func_00140a60
    .word 0x8e440518
    b L13d428
    nop
L13d3d8:
    .word 0x8e42003c
    addiu a1,zero,256
    beq v0,a1,L13d428
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13d428
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13d428
    nop
    .word 0x8e42000c
    addiu a1,zero,256
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L13d428:
    addiu a1,zero,-129
L13d42c:
    jal func_001ab650
    .word 0x72002628
    .word 0x8e43003c
    addiu v0,zero,64
    bne v1,v0,L13d45c
    addiu a1,zero,-1
    addiu a1,zero,11
    jal func_0013f0c0
    .word 0x72002628
    b L13d468
    .word 0x8e040008
    addiu a1,zero,-1
L13d45c:
    jal func_0013f0c0
    .word 0x72002628
    .word 0x8e040008
L13d468:
    addiu a1,sp,144
    jal func_0013bf20
    .word 0x70003628
    .word 0x3c027000
    ori v0,v0,0x3fb8
    .word 0x8c430000
    .word 0x3c010030
    addiu v1,v1,1
    .word 0xac23a568
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L13d4b8
    .word 0x3c017000
    .word 0x3c010030
    .word 0x8c22a568
    .word 0x3c017000
    .word 0xac223fb8
    .word 0x3c017000
L13d4b8:
    .word 0x8c243fd8
    .word 0x3c020014
    addiu a1,sp,144
    addiu a2,v0,-1632
    jal func_001297c0
    .word 0x72003e28
    b L13e7a8
    nop
L13d4d8:
    .word 0x8e020270
    beqz v0,L13d548
    addiu a1,zero,259
    .word 0x8e020004
    andi v0,v0,0x100
    bnez v0,L13d544
    nop
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0xc6000164
    c.le.s $f1,$f0
    nop
    bc1t L13d528
    addiu a1,zero,775
    .word 0x8e020158
    beqz v0,L13d524
    nop
    jal func_00140a60
    .word 0x8e440518
L13d524:
    addiu a1,zero,775
L13d528:
    jal func_001ab650
    .word 0x72002628
    addiu a1,zero,-1
    jal func_0013f0c0
    .word 0x72002628
    b L13d580
    .word 0x8e040008
L13d544:
    addiu a1,zero,259
L13d548:
    jal func_001ab650
    .word 0x72002628
    addiu a1,zero,14
    jal func_0013f0c0
    .word 0x72002628
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    .word 0xe6000164
    .word 0x8e040008
L13d580:
    addiu a1,sp,176
    jal func_0013bf20
    .word 0x70003628
    .word 0x3c027000
    ori v0,v0,0x3fb8
    .word 0x8c430000
    .word 0x3c010030
    addiu v1,v1,1
    .word 0xac23a568
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L13d5d0
    .word 0x3c017000
    .word 0x3c010030
    .word 0x8c22a568
    .word 0x3c017000
    .word 0xac223fb8
    .word 0x3c017000
L13d5d0:
    .word 0x8c243fd8
    .word 0x3c020014
    addiu a1,sp,176
    addiu a2,v0,-1632
    jal func_001297c0
    .word 0x72003e28
    b L13e7a8
    nop
    addiu a1,zero,-587
L13d5f4:
    jal func_001ab650
    .word 0x72002628
    .word 0x72002628
    jal func_0013f0c0
    .word 0x70002e28
    .word 0x8e040008
    addiu a1,sp,208
    jal func_0013bf20
    .word 0x70003628
    .word 0x3c027000
    ori v0,v0,0x3fb8
    .word 0x8c430000
    .word 0x3c010030
    addiu v1,v1,1
    .word 0xac23a568
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L13d65c
    .word 0x3c017000
    .word 0x3c010030
    .word 0x8c22a568
    .word 0x3c017000
    .word 0xac223fb8
    .word 0x3c017000
L13d65c:
    .word 0x8c243fd8
    .word 0x3c020014
    addiu a1,sp,208
    addiu a2,v0,-1632
    jal func_001297c0
    .word 0x72003e28
    .word 0x8e43003c
    addiu v0,zero,128
    bne v1,v0,L13e7a8
    nop
    .word 0x3c017000
    .word 0xc6010144
    .word 0xc4203fa8
    add.s $f0,$f1,$f0
    .word 0xe6000144
    .word 0x8e020140
    bnez v0,L13d6c4
    nop
    .word 0xc6010144
    .word 0x3c023f00
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1f L13d6e8
    nop
L13d6c4:
    .word 0xc6010144
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L13e7a8
    nop
L13d6e8:
    .word 0x8e42003c
    addiu a1,zero,256
    beq v0,a1,L13e7a8
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13e7a8
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13e7a8
    nop
    .word 0x8e42000c
    addiu a1,zero,256
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L13e7a8
    nop
L13d740:
    .word 0x8e020004
    andi v0,v0,0x100
    beqz v0,L13d768
    addiu a1,zero,-582
    addiu a1,zero,-590
    jal func_001ab650
    .word 0x72002628
    b L13d774
    addiu a1,zero,12
    addiu a1,zero,-582
L13d768:
    jal func_001ab650
    .word 0x72002628
    addiu a1,zero,12
L13d774:
    jal func_0013f0c0
    .word 0x72002628
    .word 0x8e040008
    addiu a1,sp,240
    jal func_0013bf20
    .word 0x70003628
    .word 0x3c027000
    ori v0,v0,0x3fb8
    .word 0x8c430000
    .word 0x3c010030
    addiu v1,v1,1
    .word 0xac23a568
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L13d7d0
    .word 0x3c017000
    .word 0x3c010030
    .word 0x8c22a568
    .word 0x3c017000
    .word 0xac223fb8
    .word 0x3c017000
L13d7d0:
    .word 0x8c243fd8
    .word 0x3c020014
    addiu a1,sp,240
    addiu a2,v0,-1632
    jal func_001297c0
    .word 0x72003e28
    .word 0x8e43003c
    addiu v0,zero,256
    bne v1,v0,L13e7a8
    nop
    .word 0x8e020270
    beqz v0,L13e7a8
    nop
    .word 0x8e11000c
    .word 0x44800000
    .word 0xc6210010
    c.lt.s $f1,$f0
    nop
    bc1f L13dac8
    addiu a1,zero,32
    jal func_001c3b70
    .word 0x8e240048
    .word 0xc622000c
    .word 0xc6210010
    .word 0x3c033e80
    .word 0xc6230014
    .word 0x44830000
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f1,$f3,$f3
    c.lt.s $f1,$f0
    nop
    bc1f L13d864
    nop
    b L13d904
    addiu v1,zero,1
L13d864:
    .word 0xc622000c
    .word 0xc6210010
    .word 0xc6200014
    .word 0x70402e28
    addiu v0,sp,432
    addiu a0,sp,272
    .word 0xe4420000
    .word 0xe4410004
    jal func_001c7710
    .word 0xe4400008
    addiu a0,sp,432
    addiu a2,zero,1
    addiu a3,sp,272
    jal func_001ce410
    .word 0x70802e28
    addiu a0,sp,432
    jal func_001ce160
    .word 0x70802e28
    .word 0xc7a101b8
    .word 0x3c02bf5d
    ori v0,v0,0xb3d7
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L13d8dc
    .word 0x3c023f5d
    b L13d904
    addiu v1,zero,2
    .word 0x3c023f5d
L13d8dc:
    ori v0,v0,0xb3d7
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L13d904
    .word 0x70001e28
    b L13d904
    addiu v1,zero,1
    .word 0x70001e28
L13d904:
    addiu v0,zero,2
    bne v1,v0,L13d970
    nop
    .word 0x3c017000
    .word 0xc6010068
    .word 0xc4203fb0
    c.lt.s $f1,$f0
    nop
    bc1f L13d970
    nop
    jal func_00149e60
    .word 0x8e110008
    .word 0x8c43002c
    addiu a2,zero,6
    .word 0x72202628
    .word 0x8e22051c
    sltu v0,zero,v0
    jalr ra,v1
    xori a1,v0,0x1
    .word 0x8e040014
    .word 0x3c034407
    .word 0x8c820010
    ori v0,v0,0x20
    .word 0xac820010
    .word 0x8e020014
    b L13e7a8
    .word 0xac4300e4
L13d970:
    .word 0xc601003c
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L13d9ec
    .word 0x3c024000
    .word 0x8e42003c
    addiu a1,zero,32
    beq v0,a1,L13e7a8
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13e7a8
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13e7a8
    nop
    .word 0x8e42000c
    addiu a1,zero,32
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L13e7a8
    nop
    .word 0x3c024000
L13d9ec:
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L13da64
    nop
    .word 0x8e42003c
    addiu a1,zero,512
    beq v0,a1,L13da54
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13da54
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13da54
    nop
    .word 0x8e42000c
    addiu a1,zero,512
    addiu a2,zero,1
    .word 0x8c420014
    jalr ra,v0
    .word 0x72402628
L13da54:
    .word 0x8e020008
    addiu v1,zero,1
    b L13e7a8
    .word 0xac4316b8
L13da64:
    .word 0x8e42003c
    addiu a1,zero,512
    beq v0,a1,L13dab4
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13dab4
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13dab4
    nop
    .word 0x8e42000c
    addiu a1,zero,512
    addiu a2,zero,2
    .word 0x8c420014
    jalr ra,v0
    .word 0x72402628
L13dab4:
    .word 0x8e020008
    addiu v1,zero,2
    b L13e7a8
    .word 0xac4316b8
    addiu a1,zero,32
L13dac8:
    beq v1,a1,L13e7a8
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13e7a8
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13e7a8
    nop
    .word 0x8e42000c
    addiu a1,zero,32
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L13e7a8
    nop
    .word 0x3c017000
L13db1c:
    .word 0xc4213fb0
    .word 0xc6000164
    c.le.s $f1,$f0
    nop
    bc1t L13db4c
    addiu a1,zero,-385
    .word 0x8e020158
    beqz v0,L13db48
    nop
    jal func_00140a60
    .word 0x8e440518
L13db48:
    addiu a1,zero,-385
L13db4c:
    jal func_001ab650
    .word 0x72002628
    .word 0x72002628
    jal func_0013f0c0
    .word 0x70002e28
    .word 0x8e040008
    addiu a1,sp,336
    jal func_0013bf20
    .word 0x70003628
    .word 0x3c027000
    ori v0,v0,0x3fb8
    .word 0x8c430000
    .word 0x3c010030
    addiu v1,v1,1
    .word 0xac23a568
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L13dbb4
    .word 0x3c017000
    .word 0x3c010030
    .word 0x8c22a568
    .word 0x3c017000
    .word 0xac223fb8
    .word 0x3c017000
L13dbb4:
    .word 0x8c243fd8
    .word 0x3c020014
    addiu a1,sp,336
    addiu a2,v0,-1632
    jal func_001297c0
    .word 0x72003e28
    b L13e7a8
    nop
    .word 0x3c023eaa
L13dbd8:
    ori v0,v0,0xaaab
    .word 0x4482a000
    .word 0x8e020008
    .word 0x8c420558
    beqz v0,L13dc74
    .word 0x70008e28
    .word 0x8e430544
    .word 0x3c020030
    .word 0x3c017000
    addiu v0,v0,-5152
    .word 0xc4243fa8
    .word 0xc602017c
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0xc6010170
    .word 0xc4430000
    mul.s $f3,$f3,$f4
    .word 0x3c023a83
    ori v0,v0,0x126f
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0xe6010170
    .word 0xc602017c
    .word 0x44820000
    .word 0xc6010154
    mul.s $f0,$f0,$f3
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0xe6010154
    .word 0xc601015c
    add.s $f0,$f1,$f0
    .word 0xe600015c
    .word 0x8f8484ac
    beqz a0,L13dc74
    nop
    .word 0x8c820010
    addiu a1,zero,1
    jalr ra,v0
    .word 0x72003628
L13dc74:
    .word 0x8e020270
    beqzl v0,L13dc9c
    ori s1,s1,0x100
    .word 0x8e020004
    andi v0,v0,0x100
    bnez v0,L13dc98
    nop
    b L13dc9c
    ori s1,s1,0x1
L13dc98:
    ori s1,s1,0x100
L13dc9c:
    .word 0x72202e28
    jal func_001ab650
    .word 0x72002628
    .word 0x72002628
    jal func_0013f0c0
    .word 0x70002e28
    .word 0x8e040008
    addiu a1,sp,368
    jal func_0013bf20
    .word 0x70003628
    .word 0x3c027000
    ori v0,v0,0x3fb8
    .word 0x8c430000
    .word 0x3c010030
    addiu v1,v1,1
    .word 0xac23a568
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L13dd08
    .word 0x3c017000
    .word 0x3c010030
    .word 0x8c22a568
    .word 0x3c017000
    .word 0xac223fb8
    .word 0x3c017000
L13dd08:
    .word 0x8c243fd8
    .word 0x3c020014
    addiu a1,sp,368
    addiu a2,v0,-1632
    jal func_001297c0
    .word 0x72003e28
    .word 0x8e040008
    .word 0x8c820544
    slti at,v0,30
    beqz at,L13dd50
    nop
    .word 0x8c8303fc
    beqz v1,L13dd50
    nop
    sll v0,v0,0x3
    addu v0,v0,v1
    .word 0xc4540004
    nop
L13dd50:
    .word 0x8e020270
    beqz v0,L13e7a8
    nop
    jal func_0014a7a0
    nop
    c.le.s $f0,$f20
    nop
    bc1t L13e7a8
    nop
    .word 0x8e020004
    andi v0,v0,0x800
    beqz v0,L13ddf8
    nop
    .word 0x8e030008
    .word 0x3c020001
    ori v0,v0,0x3000
    .word 0x8c630010
    and v0,v1,v0
    bnez v0,L13ddf8
    nop
    .word 0x8e42003c
    .word 0x3c050004
    beq v0,a1,L13e7a8
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13e7a8
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13e7a8
    nop
    .word 0x8e42000c
    addiu a2,zero,5
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x3c050004
    b L13e7a8
    nop
L13ddf8:
    .word 0x8e030008
    .word 0x3c020001
    ori v0,v0,0x3000
    .word 0x8c640010
    and v0,a0,v0
    beqz v0,L13de20
    andi v0,a0,0x8000
    b L13e7a8
    .word 0xac600558
    andi v0,a0,0x8000
L13de20:
    beqz v0,L13de8c
    nop
    addiu a1,zero,1
    jal func_0013ecb0
    .word 0x72002628
    .word 0x8e42003c
    .word 0x3c050004
    beq v0,a1,L13e7a8
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13e7a8
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13e7a8
    nop
    .word 0x8e42000c
    addiu a2,zero,7
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x3c050004
    b L13e7a8
    nop
L13de8c:
    jal func_001f79f0
    nop
    andi v0,v0,0x7fff
    bltz v0,L13deb0
    srl v1,v0,0x1
    .word 0x44820000
    b L13dec8
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L13deb0:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L13dec8:
    .word 0x3c024700
    .word 0x44820000
    .word 0x72002628
    div.s $f20,$f1,$f0
    nop
    nop
    jal func_0013ecb0
    addiu a1,zero,1
    .word 0x3c023e99
    ori v0,v0,0x999a
    .word 0x44820000
    nop
    c.lt.s $f20,$f0
    nop
    bc1f L13dfc0
    .word 0x3c023f19
    .word 0x8e03000c
    addiu v0,sp,400
    .word 0x3c050004
    .word 0xc462000c
    .word 0xc4610010
    .word 0xc4600014
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0x8e42003c
    beq v0,a1,L13df7c
    .word 0x3c02bf00
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13df78
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13df78
    nop
    .word 0x8e42000c
    addiu a2,zero,4
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x3c050004
L13df78:
    .word 0x3c02bf00
L13df7c:
    .word 0x44827000
    .word 0x3c02c040
    .word 0x44826000
    .word 0x3c028000
    .word 0x44826800
    jal func_001b32c0
    .word 0x72002628
    addiu v0,sp,400
    .word 0x8e03000c
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe462000c
    .word 0xe4610010
    b L13e7a8
    .word 0xe4600014
    .word 0x3c023f19
L13dfc0:
    ori v0,v0,0x999a
    .word 0x44820000
    nop
    c.lt.s $f20,$f0
    nop
    bc1f L13e034
    nop
    .word 0x8e42003c
    .word 0x3c050004
    beq v0,a1,L13e7a8
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13e7a8
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13e7a8
    nop
    .word 0x8e42000c
    addiu a2,zero,6
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x3c050004
    b L13e7a8
    nop
L13e034:
    .word 0x8e42003c
    .word 0x3c050004
    beq v0,a1,L13e7a8
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L13e7a8
    nop
    .word 0x8e42000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72402628
    beqz v0,L13e7a8
    nop
    .word 0x8e42000c
    addiu a2,zero,7
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x3c050004
    b L13e7a8
    nop
L13e08c:
    .word 0x8e430548
    .word 0x3c020030
    .word 0x3c017000
    addiu v0,v0,-5280
    .word 0xc4233fa8
    .word 0xc601017c
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0xc6000170
    .word 0xc4420000
    mul.s $f3,$f2,$f3
    .word 0x3c023a83
    ori v0,v0,0x126f
    mul.s $f1,$f3,$f1
    add.s $f0,$f0,$f1
    .word 0xe6000170
    .word 0xc602017c
    .word 0x44822000
    .word 0xc6000154
    mul.s $f1,$f4,$f3
    mul.s $f2,$f3,$f2
    add.s $f0,$f0,$f2
    .word 0xe6000154
    .word 0xc600015c
    add.s $f0,$f0,$f1
    .word 0xe600015c
    .word 0x8f8484ac
    beqz a0,L13e110
    nop
    .word 0x8c820010
    addiu a1,zero,1
    jalr ra,v0
    .word 0x72003628
L13e110:
    .word 0x8e06000c
    .word 0x8cc50024
    jal func_0017bd80
    .word 0x72402628
    jal func_00137570
    .word 0x72002628
    jal func_0013ef70
    .word 0x72002628
    .word 0x3c023e80
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L13e160
    nop
    .word 0x3c023f33
    ori v0,v0,0x3333
    .word 0xae0200c8
    .word 0x3c024120
    .word 0xae0200cc
L13e160:
    .word 0xc6000060
    .word 0x44800800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L13e1d4
    nop
    .word 0xc6010174
    .word 0x3c0242b4
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L13e1ac
    .word 0x3c02c2b4
    .word 0x3c024334
    b L13e1d4
    .word 0xae020174
    .word 0x3c02c2b4
L13e1ac:
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L13e1d0
    nop
    .word 0x3c02c334
    b L13e1d4
    .word 0xae020174
L13e1d0:
    .word 0xae000174
L13e1d4:
    .word 0xc6010174
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1tl L13e1fc
    neg.s $f1,$f1
    b L13e200
    .word 0x3c024334
    neg.s $f1,$f1
L13e1fc:
    .word 0x3c024334
L13e200:
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L13e338
    .word 0x3c017000
    .word 0x8e030168
    addiu v0,zero,4096
    bne v1,v0,L13e240
    nop
    .word 0x3c02002f
    .word 0x44806000
    addiu a1,zero,8192
    addiu a2,v0,-16136
    jal func_00140f10
    .word 0x72002628
L13e240:
    .word 0x8e020178
    addiu v0,v0,1
    .word 0xae020178
    .word 0x8e020178
    slti at,v0,6
    beqzl at,L13e268
    addiu v0,zero,6
    b L13e26c
    sll v1,v0,0x2
    addiu v0,zero,6
L13e268:
    sll v1,v0,0x2
L13e26c:
    .word 0x3c020030
    addiu v0,v0,-5188
    .word 0xc602017c
    addu v0,v0,v1
    .word 0xc6010170
    .word 0xc4430000
    mul.s $f2,$f3,$f2
    .word 0x3c023a83
    ori v0,v0,0x126f
    add.s $f1,$f1,$f2
    .word 0xe6010170
    .word 0xc602017c
    .word 0x44820000
    .word 0xc6010154
    mul.s $f0,$f0,$f3
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0xe6010154
    .word 0xc601015c
    add.s $f0,$f1,$f0
    .word 0xe600015c
    .word 0x8f8484ac
    beqz a0,L13e2dc
    nop
    .word 0x8c820010
    addiu a1,zero,1
    jalr ra,v0
    .word 0x72003628
L13e2dc:
    .word 0xc6010174
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L13e310
    nop
    .word 0x3c024334
    .word 0x44820000
    nop
    sub.s $f0,$f1,$f0
    b L13e334
    .word 0xe6000174
L13e310:
    c.lt.s $f1,$f0
    nop
    bc1f L13e334
    nop
    .word 0x3c024334
    .word 0x44820000
    nop
    add.s $f0,$f1,$f0
    .word 0xe6000174
L13e334:
    .word 0x3c017000
L13e338:
    .word 0xc4343fb0
    .word 0xc6000294
    c.lt.s $f20,$f0
    nop
    bc1t L13e7a8
    nop
    .word 0x8e040000
    .word 0x3c023d4c
    ori v0,v0,0xcccd
    .word 0x44826000
    jal func_00174990
    addiu a1,zero,1
    jal func_00234ff0
    nop
    andi v0,v0,0x1000
    .word 0x44820000
    nop
    cvt.s.w $f2,$f0
    .word 0x3c0246ff
    ori v1,v0,0xfe00
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44830800
    .word 0x44820000
    nop
    div.s $f1,$f2,$f1
    add.s $f1,$f20,$f1
    add.s $f0,$f0,$f1
    b L13e7a8
    .word 0xe6000294
    .word 0x3c017000
L13e3b4:
    .word 0xc4243fa8
    .word 0xc783832c
    .word 0x3c023a83
    ori v0,v0,0x126f
    .word 0xc602017c
    .word 0xc6010170
    .word 0x44820000
    mul.s $f3,$f3,$f4
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0xe6010170
    .word 0xc602017c
    .word 0xc6010154
    mul.s $f0,$f0,$f3
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0xe6010154
    .word 0xc601015c
    add.s $f0,$f1,$f0
    .word 0xe600015c
    .word 0x8f8484ac
    beqzl a0,L13e424
    .word 0x72002628
    .word 0x8c820010
    addiu a1,zero,1
    jalr ra,v0
    .word 0x72003628
    .word 0x72002628
L13e424:
    jal func_00135d00
    nop
    jal func_0013ef70
    .word 0x72002628
    .word 0x3c023e80
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L13e45c
    .word 0x3c02bf00
    .word 0x3c023f80
    .word 0xae0200c8
    .word 0x3c02bf00
L13e45c:
    b L13e7a8
    .word 0xae420528
L13e464:
    .word 0x8e43054c
    .word 0x3c020030
    .word 0x3c017000
    addiu v0,v0,-5344
    .word 0xc4243fa8
    .word 0xc602017c
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0xc6010170
    .word 0xc4430000
    mul.s $f3,$f3,$f4
    .word 0x3c023a83
    ori v0,v0,0x126f
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0xe6010170
    .word 0xc602017c
    .word 0x44820000
    .word 0xc6010154
    mul.s $f0,$f0,$f3
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0xe6010154
    .word 0xc601015c
    add.s $f0,$f1,$f0
    .word 0xe600015c
    .word 0x8f8484ac
    beqz a0,L13e4e8
    nop
    .word 0x8c820010
    addiu a1,zero,1
    jalr ra,v0
    .word 0x72003628
L13e4e8:
    .word 0x8e06000c
    .word 0x8cc50024
    jal func_0017bd80
    .word 0x72402628
    jal func_00135160
    .word 0x72002628
    jal func_0013ef70
    .word 0x72002628
    .word 0x3c023e80
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L13e7a8
    nop
    .word 0x3c023f33
    ori v0,v0,0x3333
    .word 0xae0200c8
    .word 0x3c024120
    b L13e7a8
    .word 0xae0200cc
L13e53c:
    .word 0x8e43054c
    .word 0x3c020030
    .word 0x3c017000
    addiu v0,v0,-5344
    .word 0xc4243fa8
    .word 0xc602017c
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0xc6010170
    .word 0xc4430000
    mul.s $f3,$f3,$f4
    .word 0x3c023a83
    ori v0,v0,0x126f
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0xe6010170
    .word 0xc602017c
    .word 0x44820000
    .word 0xc6010154
    mul.s $f0,$f0,$f3
    mul.s $f2,$f3,$f2
    add.s $f1,$f1,$f2
    .word 0xe6010154
    .word 0xc601015c
    add.s $f0,$f1,$f0
    .word 0xe600015c
    .word 0x8f8484ac
    beqz a0,L13e5c0
    nop
    .word 0x8c820010
    addiu a1,zero,1
    jalr ra,v0
    .word 0x72003628
L13e5c0:
    .word 0x8e06000c
    .word 0x8cc50024
    jal func_0017bd80
    .word 0x72402628
    jal func_00134040
    .word 0x72002628
    jal func_0013ef70
    .word 0x72002628
    .word 0x3c023e80
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L13e7a8
    nop
    .word 0x3c023f33
    ori v0,v0,0x3333
    .word 0xae0200c8
    .word 0x3c024120
    b L13e7a8
    .word 0xae0200cc
L13e614:
    .word 0x8e11000c
    jal func_001c3b70
    .word 0x8e240048
    .word 0xc621000c
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L13e644
    .word 0x70409e28
    b L13e648
    mov.s $f0,$f1
L13e644:
    neg.s $f0,$f1
L13e648:
    .word 0x3c023f80
    .word 0x44821000
    nop
    c.le.s $f0,$f2
    nop
    bc1f L13e6a8
    nop
    .word 0xc6220014
    .word 0x44800000
    nop
    c.lt.s $f2,$f0
    nop
    bc1tl L13e68c
    neg.s $f2,$f2
    b L13e690
    .word 0x3c023f80
    neg.s $f2,$f2
L13e68c:
    .word 0x3c023f80
L13e690:
    .word 0x44820000
    nop
    c.le.s $f2,$f0
    nop
    bc1t L13e6e4
    nop
L13e6a8:
    .word 0xe7a101a0
    .word 0xafa001a4
    .word 0xc6200014
    addiu a0,sp,416
    .word 0x70802e28
    jal func_001ce160
    .word 0xe7a001a8
    .word 0x3c017000
    .word 0xc42c3fa8
    addiu a1,sp,416
    addiu a3,zero,1
    .word 0x72602628
    .word 0x70003628
    jal func_0015d1c0
    .word 0x70004628
L13e6e4:
    .word 0xc6610014
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L13e720
    .word 0x72002628
    .word 0x8e040008
    .word 0x3c020040
    .word 0x8c830010
    or v0,v1,v0
    .word 0xac820010
    .word 0x72002628
L13e720:
    jal func_001ab650
    .word 0x70002e28
    b L13e7a8
    nop
L13e730:
    .word 0x8e11000c
    jal func_001c3b70
    .word 0x8e240048
    .word 0xc4430014
    .word 0xc6210010
    .word 0xc626000c
    .word 0xc4450010
    .word 0xc4440018
    .word 0xc6200014
    .word 0x72002628
    mul.s $f1,$f1,$f3
    .word 0x70002e28
    mul.s $f2,$f6,$f5
    adda.s $f2,$f1
    madd.s $f1,$f0,$f4
    mul.s $f0,$f5,$f1
    sub.s $f0,$f6,$f0
    .word 0xe620000c
    mul.s $f2,$f3,$f1
    mul.s $f0,$f4,$f1
    .word 0xc6210010
    sub.s $f1,$f1,$f2
    .word 0xe6210010
    .word 0xc6210014
    sub.s $f0,$f1,$f0
    jal func_001ab650
    .word 0xe6200014
    .word 0x72002628
    jal func_0013f0c0
    .word 0x70002e28
L13e7a8:
    .word 0xc601026c
L13e7ac:
    .word 0x3c023f99
    ori v0,v0,0x999a
    .word 0x44820000
    .word 0x44801800
    sub.s $f2,$f0,$f1
    c.le.s $f2,$f3
    nop
    bc1tl L13e7dc
    mov.s $f2,$f3
    b L13e7e0
    .word 0x3c027000
    mov.s $f2,$f3
L13e7dc:
    .word 0x3c027000
L13e7e0:
    ori v0,v0,0x3fa8
    .word 0xc4430000
    .word 0xc6410504
    .word 0x3c02bf80
    .word 0x44820000
    nop
    sub.s $f1,$f2,$f1
    mul.s $f0,$f0,$f3
    c.lt.s $f1,$f0
    nop
    bc1f L13e818
    nop
    b L13e82c
    mov.s $f1,$f0
L13e818:
    c.le.s $f1,$f3
    nop
    bc1t L13e82c
    nop
    mov.s $f1,$f3
L13e82c:
    .word 0xc6400504
    addiu v0,zero,64
    add.s $f0,$f0,$f1
    .word 0xe6400504
    .word 0x8e43003c
    bne v1,v0,L13e890
    nop
    .word 0x8e020290
    bnez v0,L13e8b0
    nop
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44826000
    .word 0x44806800
    jal func_001747d0
    .word 0x8e040000
    .word 0x3c02bdcc
    ori v0,v0,0xcccd
    .word 0x44826000
    .word 0x44806800
    jal func_001746c0
    .word 0x8e040000
    addiu v0,zero,1
    b L13e8b0
    .word 0xae020290
L13e890:
    .word 0x8e020290
    beqz v0,L13e8b0
    nop
    .word 0x8e040000
    .word 0x44806000
    jal func_001747d0
    mov.s $f13,$f12
    .word 0xae000290
L13e8b0:
    .word 0x8e020270
    beqz v0,L13e908
    .word 0x3c017000
    .word 0xae00003c
    .word 0x8e040014
    .word 0x3c02fffd
    ori v1,v0,0xffff
    .word 0x3c023e80
    .word 0x44820000
    .word 0x3c017000
    .word 0x8c820010
    ori v0,v0,0x40
    .word 0xac820010
    .word 0x8e040008
    .word 0x8c820010
    and v0,v0,v1
    .word 0xac820010
    .word 0xc4213fb0
    add.s $f0,$f0,$f1
    b L13e940
    .word 0xe600004c
    .word 0x3c017000
L13e908:
    .word 0xc601003c
    .word 0xc4203fa8
    addiu v1,zero,-65
    .word 0x3c020002
    add.s $f0,$f1,$f0
    .word 0xe600003c
    .word 0x8e050014
    .word 0x8ca40010
    and v1,a0,v1
    .word 0xaca30010
    .word 0x8e040008
    .word 0x8c830010
    or v0,v1,v0
    .word 0xac820010
L13e940:
    .word 0x3c017000
    .word 0x8c243fcc
    .word 0x3c017000
    .word 0xc4203fa8
    .word 0xe7a00060
    .word 0x8e020270
    sltu v0,zero,v0
    xori v0,v0,0x1
    beqz v0,L13e97c
    nop
    .word 0x8e43003c
    .word 0x3c020003
    and v0,v1,v0
    sltu v0,zero,v0
    xori v0,v0,0x1
L13e97c:
    .word 0xafa20064
    .word 0x8e42003c
    addiu a3,sp,96
    addiu a2,zero,4
    xori v0,v0,0x2000
    sltiu v0,v0,1
    .word 0xafa20068
    .word 0x8e020270
    .word 0xafa2006c
    .word 0x8c820000
    .word 0x8c420010
    jalr ra,v0
    .word 0x72002e28
    jal func_00173c70
    .word 0x72002628
    .word 0x8e020008
    .word 0x44800000
    .word 0xc44216c8
    c.le.s $f2,$f0
    nop
    bc1t L13ea14
    nop
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820800
    .word 0x8e040000
    .word 0x3c023f19
    ori v0,v0,0x999a
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f2
    .word 0x3c023e19
    ori v0,v0,0x999a
    .word 0x44826800
    jal func_001747d0
    add.s $f12,$f1,$f0
    .word 0x8e020008
    .word 0xac4016c8
L13ea14:
    jal func_00149e60
    nop
    .word 0x8c42000c
    jalr ra,v0
    .word 0x72402628
    .word 0x3c017000
    .word 0x8c233fc0
    andi v1,v1,0x2
    beqz v1,L13ea5c
    nop
    .word 0x3c010030
    .word 0x8c256470
    .word 0x8e030008
    beq a1,v1,L13ea5c
    nop
    .word 0x8ca50518
    jal func_0013ea80
    .word 0x72002628
L13ea5c:
    .word 0x7bbf0050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,448
}
