extern void func_00133100(void);
extern void func_00133120(void);
extern void func_0016b090(void);
extern void func_00242b20(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffd0
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,1
    bne a1,v0, L225840
    .word 0x70808628
    jal func_00242b20
    nop
    .word 0x8e020000
    addiu a1,zero,16
    .word 0x8c420018
    jalr ra,v0
    .word 0x72002628
    b L225c48
    .word 0x7bbf0020
L225840:
    addiu v1,zero,5
    bne a1,v1, L22585c
    nop
    jal func_00133120
    .word 0x70602628
    b L225c44
    addiu v0,zero,1
L22585c:
    .word 0x8e09000c
    beq t1,v1, L225af4
    nop
    addiu t0,zero,10
    beql t1,t0, L225ad4
    addiu v0,zero,8
    addiu a3,zero,9
    beql t1,a3, L225ab0
    addiu v0,zero,8
    addiu v1,zero,3
    beq t1,v1, L225a8c
    nop
    addiu a3,zero,8
    beql t1,a3, L225a6c
    addiu v0,zero,7
    addiu v1,zero,13
    beq t1,v1, L225a28
    nop
    addiu v1,zero,15
    beql t1,v1, L2259ec
    addiu v0,zero,7
    addiu v1,zero,14
    beql t1,v1, L2259bc
    addiu v0,zero,7
    addiu v1,zero,16
    beql t1,v1, L22598c
    addiu v0,zero,7
    addiu v1,zero,18
    beq t1,v1, L225954
    addiu v1,zero,2
    addiu v0,zero,23
    beq t1,v0, L225930
    addiu v0,zero,7
    addiu v0,zero,19
    beq t1,v0, L22590c
    nop
    addiu v0,zero,12
    beq t1,v0, L225904
    .word 0x70001628
    b L225c38
    nop
    .word 0x70001628
L225904:
    b L225c44
    nop
L22590c:
    bne a1,a3, L225c44
    addiu v0,zero,1
    .word 0x8e020000
    .word 0x8c420018
    jalr ra,v0
    addiu a1,zero,20
    b L225c44
    nop
    addiu v0,zero,7
L225930:
    bne a1,v0, L225c40
    nop
    .word 0x8e020000
    .word 0x8c420018
    jalr ra,v0
    .word 0x71002e28
    b L225c44
    nop
    addiu v1,zero,2
L225954:
    bnel a1,v1, L225968
    addiu v0,zero,7
    b L225c44
    .word 0xae02003c
    addiu v0,zero,7
L225968:
    bne a1,v0, L225c40
    nop
    .word 0x8e020000
    .word 0x8c420018
    jalr ra,v0
    addiu a1,zero,19
    b L225c44
    nop
    addiu v0,zero,7
L22598c:
    bne a1,v0, L225c40
    nop
    jal func_00242b20
    nop
    .word 0x8e020000
    addiu a1,zero,18
    .word 0x8c420018
    jalr ra,v0
    .word 0x72002628
    b L225c44
    nop
    addiu v0,zero,7
L2259bc:
    bne a1,v0, L2259e8
    nop
    jal func_00242b20
    nop
    .word 0x8e020000
    addiu a1,zero,15
    .word 0x8c420018
    jalr ra,v0
    .word 0x72002628
    b L225c44
    nop
L2259e8:
    addiu v0,zero,7
L2259ec:
    bne a1,v0, L225a14
    addiu v0,zero,4
    .word 0x8e020000
    addiu a1,zero,17
    .word 0x8c420018
    jalr ra,v0
    .word 0x72002628
    b L225c44
    nop
    addiu v0,zero,4
L225a14:
    bne a1,v0, L225c40
    nop
    addiu v0,zero,1
    b L225c44
    .word 0xae02003c
L225a28:
    bne a1,t0, L225c40
    nop
    jal func_00133100
    addiu a0,zero,4
    addiu v1,zero,2
    .word 0xac430010
    addiu a0,zero,4
    jal func_00133120
    .word 0xac430014
    .word 0x8e020000
    addiu a1,zero,1
    .word 0x8c420018
    jalr ra,v0
    .word 0x72002628
    b L225c40
    nop
    addiu v0,zero,7
L225a6c:
    bne a1,v0, L225c40
    nop
    .word 0x8e020000
    .word 0x8c420018
    jalr ra,v0
    addiu a1,zero,13
    b L225c44
    nop
L225a8c:
    bne a1,v1, L225c40
    nop
    .word 0x8e020000
    .word 0x8c420018
    jalr ra,v0
    .word 0x70e02e28
    b L225c44
    nop
    addiu v0,zero,8
L225ab0:
    bne a1,v0, L225c40
    nop
    .word 0x8e020000
    .word 0x8c420018
    jalr ra,v0
    .word 0x70602e28
    b L225c44
    nop
    addiu v0,zero,8
L225ad4:
    bne a1,v0, L225c40
    nop
    .word 0x8e020000
    .word 0x8c420018
    jalr ra,v0
    .word 0x70602e28
    b L225c44
    nop
L225af4:
    beq a1,v0, L225c14
    nop
    beqz a1, L225c0c
    nop
    addiu v0,zero,11
    beq a1,v0, L225b4c
    nop
    addiu v0,zero,10
    beq a1,v0, L225b30
    nop
    addiu v0,zero,9
    beq a1,v0, L225b30
    nop
    b L225c40
    nop
L225b30:
    .word 0x8e020000
    addiu a1,zero,23
    .word 0x8c420018
    jalr ra,v0
    .word 0x72002628
    b L225c44
    nop
L225b4c:
    .word 0x3c010030
    .word 0x8c316f88
    beqz s1, L225b88
    nop
    .word 0x8e22000c
    .word 0x72202628
    .word 0x8c420010
    jalr ra,v0
    .word 0x3c050010
    .word 0x8e22000c
    .word 0x72202628
    .word 0x3c050010
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L225b88:
    .word 0x3c010030
    .word 0x8c317538
    beqz s1, L225bc4
    nop
    .word 0x8e22000c
    .word 0x72202628
    .word 0x8c420010
    jalr ra,v0
    .word 0x3c050010
    .word 0x8e22000c
    .word 0x72202628
    .word 0x3c050010
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L225bc4:
    jal func_0016b090
    nop
    beqz v0, L225bf0
    nop
    .word 0x8e020000
    addiu a1,zero,21
    .word 0x8c420018
    jalr ra,v0
    .word 0x72002628
    b L225c44
    nop
L225bf0:
    .word 0x8e020000
    addiu a1,zero,22
    .word 0x8c420018
    jalr ra,v0
    .word 0x72002628
    b L225c44
    nop
L225c0c:
    b L225c44
    .word 0xae020048
L225c14:
    jal func_00242b20
    nop
    .word 0x8e020000
    addiu a1,zero,16
    .word 0x8c420018
    jalr ra,v0
    .word 0x72002628
    b L225c44
    nop
L225c38:
    jal func_00242b20
    nop
L225c40:
    addiu v0,zero,1
L225c44:
    .word 0x7bbf0020
L225c48:
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0030
}
