extern void func_00131540(void);
extern void func_00170070(void);
extern void func_001b4b30(void);
extern void func_001b4fe0(void);
extern void func_00178b90(void);
extern void func_001b58c0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-464
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x3c010030
    .word 0x8c306f88
    beqz s0,L1b64cc
    nop
    .word 0x8e02003c
    beqz v0,L1b64cc
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L1b64cc
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x8c420010
    jalr ra,v0
    .word 0x70002e28
    beqz v0,L1b64cc
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1b64cc:
    .word 0x3c010030
    .word 0x8c307538
    beqz s0,L1b652c
    nop
    .word 0x8e02003c
    beqz v0,L1b652c
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L1b652c
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x8c420010
    jalr ra,v0
    .word 0x70002e28
    beqz v0,L1b652c
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1b652c:
    .word 0x3c02001b
    addiu a1,v0,27712
    jal func_00131540
    .word 0x70002628
    .word 0x3c017000
    .word 0x8c233fd4
    beqzl v1,L1b6600
    addiu v1,zero,5
    .word 0x8c630004
    andi v1,v1,0x4
    beqz v1,L1b65fc
    nop
    .word 0x3c02002f
    jal func_00170070
    addiu a0,v0,488
    addiu v1,zero,2
    .word 0x3c010030
    .word 0xac23a364
    .word 0x3c010030
    .word 0x8c24a364
    addiu v1,zero,-17
    and v1,a0,v1
    .word 0x3c010030
    beqz v0,L1b65d8
    .word 0xac23a364
    .word 0x8c450000
    beqz a1,L1b65b4
    nop
    .word 0x3c010030
    .word 0x8c23a364
    ori v1,v1,0x8
    .word 0x3c010030
    b L1b65cc
    .word 0xac23a364
L1b65b4:
    .word 0x3c010030
    .word 0x8c24a364
    addiu v1,zero,-9
    and v1,a0,v1
    .word 0x3c010030
    .word 0xac23a364
L1b65cc:
    .word 0x3c010030
    b L1b661c
    .word 0xac25a41c
L1b65d8:
    .word 0x3c010030
    .word 0x8c24a364
    addiu v1,zero,-9
    and v1,a0,v1
    .word 0x3c010030
    .word 0xac23a364
    .word 0x3c010030
    b L1b661c
    .word 0xac20a41c
L1b65fc:
    addiu v1,zero,5
L1b6600:
    .word 0x3c010030
    .word 0xac23a364
    .word 0x3c010030
    .word 0x8c23a364
    ori v1,v1,0x10
    .word 0x3c010030
    .word 0xac23a364
L1b661c:
    .word 0x3c010030
    .word 0x8c23a610
    sltiu at,v1,12
    beqz at,L1b6a24
    nop
    .word 0x3c04002f
    addiu a0,a0,496
    sll v1,v1,0x2
    addu v1,v1,a0
    .word 0x8c630000
    jr v1
    nop
    .word 0x3c020030
    addiu v1,v0,28544
    .word 0xc460023c
    .word 0x3c010030
    .word 0x9025a61f
    addiu a0,sp,32
    .word 0xe7a00020
    .word 0x8c620240
    .word 0xafa20024
    .word 0x8c620244
    .word 0xafa20028
    .word 0xc4600150
    jal func_001b4b30
    .word 0xe7a0002c
    .word 0x3c010030
    jal func_001b4fe0
    .word 0x9024a61f
    addiu v0,zero,29
    .word 0xafa20030
    addiu v0,zero,1
    .word 0xafa00034
    .word 0xafa20038
    addiu v0,zero,2
    .word 0xafa2003c
    .word 0x3c02001b
    .word 0xafa00040
    addiu v0,v0,27776
    .word 0xafa00044
    addiu a0,sp,48
    jal func_00178b90
    .word 0xafa20048
    b L1b6a28
    .word 0x7bbf0010
    addiu v0,zero,34
    .word 0xafa20050
    addiu v0,zero,1
    .word 0xafa00054
    .word 0xafa20058
    addiu v0,zero,2
    .word 0xafa2005c
    .word 0x3c02001b
    .word 0xafa00060
    addiu v0,v0,27776
    .word 0xafa00064
    addiu a0,sp,80
    jal func_00178b90
    .word 0xafa20068
    b L1b6a24
    nop
    .word 0x3c010030
    .word 0x9024a61f
    .word 0x3c010030
    jal func_001b58c0
    .word 0xc42c70d0
    sltiu at,v0,8
    beqz at,L1b6774
    addiu v0,zero,30
    addiu v0,zero,31
    .word 0xafa20070
    addiu v0,zero,1
    .word 0xafa00074
    .word 0xafa20078
    addiu v0,zero,2
    .word 0xafa2007c
    .word 0x3c02001b
    .word 0xafa00080
    addiu v0,v0,27776
    .word 0xafa00084
    addiu a0,sp,112
    jal func_00178b90
    .word 0xafa20088
    b L1b6a24
    nop
    addiu v0,zero,30
L1b6774:
    .word 0xafa20090
    addiu v0,zero,1
    .word 0xafa00094
    .word 0xafa20098
    addiu v0,zero,2
    .word 0xafa2009c
    .word 0x3c02001b
    .word 0xafa000a0
    addiu v0,v0,27776
    .word 0xafa000a4
    addiu a0,sp,144
    jal func_00178b90
    .word 0xafa200a8
    b L1b6a24
    nop
    .word 0x3c010033
    .word 0x8c223198
    beqz v0,L1b6804
    addiu v0,zero,32
    addiu v0,zero,33
    .word 0xafa200b0
    addiu v0,zero,1
    .word 0xafa000b4
    .word 0xafa200b8
    addiu v0,zero,2
    .word 0xafa200bc
    .word 0x3c02001b
    .word 0xafa000c0
    addiu v0,v0,27776
    .word 0xafa000c4
    addiu a0,sp,176
    jal func_00178b90
    .word 0xafa200c8
    b L1b6a24
    nop
    addiu v0,zero,32
L1b6804:
    .word 0xafa200d0
    addiu v0,zero,1
    .word 0xafa000d4
    .word 0xafa200d8
    addiu v0,zero,2
    .word 0xafa200dc
    .word 0x3c02001b
    .word 0xafa000e0
    addiu v0,v0,27776
    .word 0xafa000e4
    addiu a0,sp,208
    jal func_00178b90
    .word 0xafa200e8
    b L1b6a24
    nop
    addiu v0,zero,35
    .word 0xafa200f0
    addiu v0,zero,1
    .word 0xafa000f4
    .word 0xafa200f8
    addiu v0,zero,2
    .word 0xafa200fc
    .word 0x3c02001b
    .word 0xafa00100
    addiu v0,v0,27776
    .word 0xafa00104
    addiu a0,sp,240
    jal func_00178b90
    .word 0xafa20108
    b L1b6a24
    nop
    addiu v0,zero,36
    .word 0xafa20110
    addiu v0,zero,1
    .word 0xafa00114
    .word 0xafa20118
    addiu v0,zero,2
    .word 0xafa2011c
    .word 0x3c02001b
    .word 0xafa00120
    addiu v0,v0,27776
    .word 0xafa00124
    addiu a0,sp,272
    jal func_00178b90
    .word 0xafa20128
    b L1b6a24
    nop
    addiu v0,zero,37
    .word 0xafa20130
    addiu v0,zero,1
    .word 0xafa00134
    .word 0xafa20138
    addiu v0,zero,2
    .word 0xafa2013c
    .word 0x3c02001b
    .word 0xafa00140
    addiu v0,v0,27776
    .word 0xafa00144
    addiu a0,sp,304
    jal func_00178b90
    .word 0xafa20148
    b L1b6a24
    nop
    addiu v0,zero,38
    .word 0xafa20150
    addiu v0,zero,1
    .word 0xafa00154
    .word 0xafa20158
    addiu v0,zero,2
    .word 0xafa2015c
    .word 0x3c02001b
    .word 0xafa00160
    addiu v0,v0,27776
    .word 0xafa00164
    addiu a0,sp,336
    jal func_00178b90
    .word 0xafa20168
    b L1b6a24
    nop
    .word 0x3c010033
    .word 0x8c252c4c
    addiu a0,zero,2
    beql a1,a0,L1b69f0
    addiu v0,zero,42
    addiu v1,zero,3
    beq a1,v1,L1b69ec
    nop
    addiu v1,zero,1
    beql a1,v1,L1b69b8
    addiu v0,zero,41
    beqzl a1,L1b6980
    addiu v0,zero,40
    b L1b6a24
    nop
    addiu v0,zero,40
L1b6980:
    .word 0xafa20170
    .word 0xafa00174
    .word 0xafa30178
    .word 0xafa4017c
    .word 0x3c02001b
    .word 0xafa00180
    addiu v0,v0,27776
    .word 0xafa00184
    addiu a0,sp,368
    jal func_00178b90
    .word 0xafa20188
    b L1b6a24
    nop
    addiu v0,zero,41
L1b69b8:
    .word 0xafa20190
    .word 0xafa00194
    .word 0xafa30198
    .word 0xafa4019c
    .word 0x3c02001b
    .word 0xafa001a0
    addiu v0,v0,27776
    .word 0xafa001a4
    addiu a0,sp,400
    jal func_00178b90
    .word 0xafa201a8
    b L1b6a24
    nop
L1b69ec:
    addiu v0,zero,42
L1b69f0:
    .word 0xafa201b0
    addiu v0,zero,1
    .word 0xafa001b4
    .word 0xafa201b8
    addiu v0,zero,2
    .word 0xafa201bc
    .word 0x3c02001b
    .word 0xafa001c0
    addiu v0,v0,27776
    .word 0xafa001c4
    addiu a0,sp,432
    jal func_00178b90
    .word 0xafa201c8
L1b6a24:
    .word 0x7bbf0010
L1b6a28:
    .word 0x7bb00000
    jr ra
    addiu sp,sp,464
}


