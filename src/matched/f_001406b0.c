extern void func_00149e60(void);
extern void func_001b3240(void);
extern void func_001c3b70(void);
extern void func_00202670(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c900518
    .word 0x70a08e28
    jal func_00149e60
    .word 0x70809628
    .word 0x8c420010
    .word 0x72202e28
    jalr ra,v0
    .word 0x72402628
    .word 0x8e43003c
    .word 0x3c020004
    beq v1,v0,L14097c
    nop
    addiu v0,zero,128
    beq v1,v0,L140a44
    nop
    addiu v0,zero,256
    beq v1,v0,L140a44
    nop
    .word 0x3c020002
    beq v1,v0,L1408f4
    nop
    .word 0x3c020001
    beq v1,v0,L1408f4
    nop
    ori v0,zero,0x8000
    beq v1,v0,L1408c4
    nop
    addiu v0,zero,8192
    beq v1,v0,L140884
    nop
    addiu v0,zero,2048
    beq v1,v0,L140854
    nop
    .word 0x3c020020
    beq v1,v0,L140818
    .word 0x72002628
    .word 0x3c020010
    beq v1,v0,L140814
    nop
    addiu v0,zero,8
    beq v1,v0,L140814
    nop
    addiu v0,zero,4
    beq v1,v0,L140794
    nop
    addiu v0,zero,2
    beq v1,v0,L140794
    nop
    beqz v1,L140a44
    nop
    b L140a48
    .word 0x7bbf0030
L140794:
    .word 0x8e11000c
    jal func_001b3240
    .word 0x72002628
    .word 0x8e030014
    .word 0x8c620010
    .word 0x34420800
    .word 0xac620010
    jal func_001c3b70
    .word 0x8e240048
    .word 0xc4400020
    .word 0x3c034080
    .word 0x44830800
    nop
    mul.s $f0,$f1,$f0
    .word 0xe620000c
    jal func_001c3b70
    .word 0x8e240048
    .word 0xc4400024
    .word 0x3c034080
    .word 0x44830800
    nop
    mul.s $f0,$f1,$f0
    .word 0xe6200010
    jal func_001c3b70
    .word 0x8e240048
    .word 0xc4400028
    .word 0x3c024080
    .word 0x44820800
    nop
    mul.s $f0,$f1,$f0
    b L140a44
    .word 0xe6200014
L140814:
    .word 0x72002628
L140818:
    jal func_001b3240
    nop
    .word 0x3c017000
    .word 0xc4203fb0
    .word 0x3c02ffef
    .word 0x3442ffff
    .word 0xe6000264
    .word 0x8e030004
    and v0,v1,v0
    .word 0xae020004
    .word 0x8e030014
    .word 0x8c620010
    .word 0x34420800
    b L140a44
    .word 0xac620010
L140854:
    .word 0x8e030168
    addiu v0,zero,-256
    and v0,v1,v0
    beqz v0,L140874
    nop
    addiu v0,zero,4096
    .word 0xae020168
    .word 0xae00016c
L140874:
    .word 0xae000270
    .word 0xae000274
    b L140a44
    .word 0xae000278
L140884:
    .word 0x8e030168
    addiu v0,zero,-256
    and v0,v1,v0
    beqz v0,L1408a4
    nop
    addiu v0,zero,4096
    .word 0xae020168
    .word 0xae00016c
L1408a4:
    .word 0xae000270
    .word 0xae000274
    .word 0xae000278
    .word 0x8e020014
    .word 0xac400084
    .word 0x8e020014
    b L140a44
    .word 0xac400088
L1408c4:
    .word 0x8e030168
    addiu v0,zero,-256
    and v0,v1,v0
    beqz v0,L1408e4
    nop
    addiu v0,zero,4096
    .word 0xae020168
    .word 0xae00016c
L1408e4:
    .word 0xae000270
    .word 0xae000274
    b L140a44
    .word 0xae000278
L1408f4:
    .word 0x8e030168
    addiu v0,zero,-256
    and v0,v1,v0
    beqz v0,L140914
    nop
    addiu v0,zero,4096
    .word 0xae020168
    .word 0xae00016c
L140914:
    .word 0xae000270
    .word 0xae000274
    .word 0xae000278
    .word 0x8e100014
    addiu a1,zero,16
    .word 0x8e02003c
    beq v0,a1,L140a44
    nop
    .word 0x8e020010
    andi v0,v0,0x2
    bnez v0,L140a44
    nop
    .word 0x8e02000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72002628
    beqz v0,L140a44
    nop
    .word 0x8e02000c
    addiu a1,zero,16
    .word 0x72002628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L140a44
    nop
L14097c:
    .word 0x8e110014
    addiu a1,zero,16
    .word 0x8e22003c
    beq v0,a1,L1409d0
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L1409d0
    nop
    .word 0x8e22000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72202628
    beqz v0,L1409d0
    nop
    .word 0x8e22000c
    addiu a1,zero,16
    .word 0x72202628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1409d0:
    .word 0x8e020014
    .word 0x3c010001
    .word 0xac40007c
    .word 0x8e120008
    .word 0x8e43044c
    addu at,s2,at
    .word 0x8c22eb5c
    .word 0x8c710018
    .word 0x3c010001
    addu at,s2,at
    .word 0xac510004
    .word 0x8c24eb60
    jal func_00202670
    .word 0x72202e28
    .word 0x3c010001
    addu at,s2,at
    .word 0x8c24eb64
    jal func_00202670
    .word 0x72202e28
    .word 0x3c010001
    addu at,s2,at
    .word 0x8c24eb68
    jal func_00202670
    .word 0x72202e28
    jal func_001b3240
    .word 0x72002628
    .word 0xae00005c
    .word 0xae000060
    .word 0xae000064
L140a44:
    .word 0x7bbf0030
L140a48:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,64
}


