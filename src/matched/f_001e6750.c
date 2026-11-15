extern void func_001c30e0(void);
extern void func_001c3070(void);
extern void func_001dee30(void);
extern void func_00100a70(void);
extern void func_0010a530(void);
extern void func_00100d88(void);
extern void func_00101bc8(void);
extern void func_00100ec8(void);
extern void func_001f41b0(void);
extern void func_001e3a50(void);
extern void func_001e5c50(void);
extern void func_001e5e80(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-224
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    andi v0,a2,0xff00
    .word 0x7fb10010
    sra v0,v0,0x8
    .word 0x7fb00000
    andi s2,v0,0xff
    .word 0x90a20020
    .word 0x7080f628
    addiu a0,zero,1
    .word 0x70c0a628
    andi v1,v0,0x7
    beq v1,a0,L1e6d80
    .word 0x70a08628
    addiu v0,zero,5
    beq v1,v0,L1e6a90
    nop
    addiu v0,zero,2
    beq v1,v0,L1e67c8
    andi v0,s4,0xf9
    b L1e6da8
    .word 0x8f82877c
    andi v0,s4,0xf9
L1e67c8:
    beqz v0,L1e67f8
    andi v0,s2,0xff
    .word 0xafa400a0
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xe
    .word 0xafa200a4
    jal func_001c3070
    addiu a0,sp,160
    b L1e7040
    .word 0x70001628
    andi v0,s2,0xff
L1e67f8:
    beqz v0,L1e6824
    nop
    .word 0xafa400a8
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xf
    .word 0xafa200ac
    jal func_001c3070
    addiu a0,sp,168
    b L1e7040
    .word 0x70001628
L1e6824:
    .word 0x8e020004
    beqzl v0,L1e6840
    .word 0x70001628
    andi v0,v0,0xf
    beqz v0,L1e684c
    addiu s1,gp,-31060
    .word 0x70001628
L1e6840:
    b L1e7044
    .word 0x7bbf0090
    addiu s1,gp,-31060
L1e684c:
    b L1e6860
    addiu s2,gp,-31056
L1e6854:
    jal func_001dee30
    nop
    nop
L1e6860:
    .word 0x8e430000
    .word 0x8e220000
    bne v1,v0,L1e6854
    nop
    .word 0x8f828630
    bnez v0,L1e6854
    nop
    .word 0x70002628
    jal func_00100a70
    .word 0x70002e28
    .word 0x8e05000c
    .word 0x8e030014
    .word 0x3c02000f
    .word 0x8e040004
    ori v0,v0,0xfff0
    .word 0x8e160010
    .word 0x8612001e
    .word 0x00a31818
    .word 0x70809e28
    sra a1,v1,0x3
    bnez a1,L1e68bc
    .word 0x0045001a
    .word 0x1cd
L1e68bc:
    mflo s1
    slt at,s1,s6
    beqzl at,L1e6908
    .word 0x72c08e28
    b L1e68e0
    .word 0x02251818
L1e68d4:
    subu v1,v1,a1
    addiu s1,s1,-1
    nop
L1e68e0:
    andi v0,v1,0xf
    nop
    nop
    bnez v0,L1e68d4
    nop
    bnez s1,L1e690c
    .word 0x02c51018
    b L1e7040
    .word 0x70001628
    .word 0x72c08e28
L1e6908:
    .word 0x02c51018
L1e690c:
    jal func_0010a530
    addu a1,a0,v0
    beqz s6,L1e6a60
    nop
    .word 0x3c020033
    addiu s7,v0,-5056
    addiu s4,gp,-30968
    addiu s5,s7,112
L1e692c:
    .word 0xde870000
    andi v0,s2,0x7ff
    dsll32 t1,v0,0x10
    .word 0x3c05003f
    dsll32 t3,s1,0x10
    .word 0x8603001c
    and v0,a3,a1
    dsra v0,v0,0x10
    dsll32 a2,v0,0x10
    .word 0x3c043f00
    and v0,a3,a0
    andi a0,a3,0x1ff
    dsra v0,v0,0x18
    dsll32 a3,v0,0x10
    dsll a0,a0,0x5
    dsll32 a1,a0,0x10
    andi v0,v1,0x7ff
    dsll32 t0,v0,0x10
    .word 0x860a000c
    dsra32 t1,t1,0x10
    dsra32 a2,a2,0x10
    dsra32 a1,a1,0x10
    dsra32 a3,a3,0x10
    dsra32 t0,t0,0x10
    dsra32 t3,t3,0x10
    jal func_00100d88
    .word 0x72e02628
    .word 0x72e02628
    jal func_0010a530
    .word 0x72a02e28
    nop
L1e69a8:
    jal func_00101bc8
    addiu a0,zero,1
    .word 0x8c420000
    andi v0,v0,0x100
    nop
    bnez v0,L1e69a8
    nop
    nop
L1e69c8:
    jal func_00101bc8
    addiu a0,zero,2
    .word 0x8c420000
    andi v0,v0,0x100
    nop
    bnez v0,L1e69c8
    nop
    .word 0x70002628
    jal func_00100a70
    .word 0x70002e28
    .word 0x72e02628
    jal func_00100ec8
    .word 0x72602e28
    addiu v1,zero,-1
    bne v0,v1,L1e6a28
    nop
    .word 0x72e02628
    jal func_00100ec8
    .word 0x72602e28
    addiu v1,zero,-1
    bne v0,v1,L1e6a28
    nop
    b L1e7040
    .word 0x70001628
L1e6a28:
    .word 0x8e03000c
    .word 0x8e020014
    subu s6,s6,s1
    slt at,s6,s1
    addu s2,s2,s1
    .word 0x00621018
    sra v0,v0,0x3
    .word 0x02221018
    beqz at,L1e6a58
    addu s3,s3,v0
    .word 0x72c08e28
    nop
L1e6a58:
    bnez s6,L1e692c
    nop
L1e6a60:
    .word 0x8e04000c
    .word 0x8e030014
    addiu v0,zero,1
    .word 0x00831818
    sra v1,v1,0x3
    .word 0xae030018
    .word 0x8e030004
    .word 0xafc30000
    .word 0x92030022
    ori v1,v1,0x2
    b L1e7040
    .word 0xa2030022
L1e6a90:
    .word 0x8f83877c
    andi v0,s4,0xf9
    beqz v0,L1e6ac4
    addu s1,s0,v1
    .word 0xafa400b0
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xe
    .word 0xafa200b4
    jal func_001c3070
    addiu a0,sp,176
    b L1e7040
    .word 0x70001628
L1e6ac4:
    .word 0x8e220058
    bnez v0,L1e6af8
    andi v0,s2,0xff
    .word 0xafa400b8
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xe
    .word 0xafa200bc
    jal func_001c3070
    addiu a0,sp,184
    b L1e7040
    .word 0x70001628
    andi v0,s2,0xff
L1e6af8:
    beqz v0,L1e6b24
    nop
    .word 0xafa400c0
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xf
    .word 0xafa200c4
    jal func_001c3070
    addiu a0,sp,192
    b L1e7040
    .word 0x70001628
L1e6b24:
    .word 0x8e020004
    beqzl v0,L1e6b40
    .word 0x70001628
    andi v0,v0,0xf
    beqz v0,L1e6b4c
    addiu s2,gp,-31060
    .word 0x70001628
L1e6b40:
    b L1e7040
    nop
    addiu s2,gp,-31060
L1e6b4c:
    b L1e6b60
    addiu s3,gp,-31056
L1e6b54:
    jal func_001dee30
    nop
    nop
L1e6b60:
    .word 0x8e630000
    .word 0x8e420000
    bne v1,v0,L1e6b54
    nop
    .word 0x8f828630
    bnez v0,L1e6b54
    nop
    .word 0x70002628
    jal func_00100a70
    .word 0x70002e28
    .word 0x8e05000c
    .word 0x8e030014
    .word 0x3c02000f
    .word 0x8e040004
    ori v0,v0,0xfff0
    .word 0x8e160010
    .word 0x8613001e
    .word 0x00a31818
    .word 0x7080a628
    sra a1,v1,0x3
    bnez a1,L1e6bbc
    .word 0x0045001a
    .word 0x1cd
L1e6bbc:
    mflo s2
    slt at,s2,s6
    beqzl at,L1e6c08
    .word 0x72c09628
    b L1e6be0
    .word 0x02451818
L1e6bd4:
    subu v1,v1,a1
    addiu s2,s2,-1
    nop
L1e6be0:
    andi v0,v1,0xf
    nop
    nop
    bnez v0,L1e6bd4
    nop
    bnez s2,L1e6c0c
    .word 0x02c51018
    b L1e7040
    .word 0x70001628
    .word 0x72c09628
L1e6c08:
    .word 0x02c51018
L1e6c0c:
    jal func_0010a530
    addu a1,a0,v0
    beqz s6,L1e6d50
    nop
    .word 0x3c020033
    addiu s7,v0,-5056
    addiu s5,s7,112
L1e6c28:
    .word 0x8e240008
    andi v0,s3,0x7ff
    .word 0x8603001c
    dsll32 t1,v0,0x10
    dsll32 t3,s2,0x10
    .word 0x860a000c
    andi v0,a0,0x3fff
    dsll32 a1,v0,0x10
    andi v0,v1,0x7ff
    dsll32 t0,v0,0x10
    srl v0,a0,0xe
    andi v0,v0,0x3f
    dsll32 a2,v0,0x10
    srl v0,a0,0x14
    andi v0,v0,0x3f
    dsll32 a3,v0,0x10
    dsra32 t1,t1,0x10
    dsra32 t3,t3,0x10
    dsra32 a1,a1,0x10
    dsra32 t0,t0,0x10
    dsra32 a2,a2,0x10
    dsra32 a3,a3,0x10
    jal func_00100d88
    .word 0x72e02628
    .word 0x72e02628
    jal func_0010a530
    .word 0x72a02e28
    nop
L1e6c98:
    jal func_00101bc8
    addiu a0,zero,1
    .word 0x8c420000
    andi v0,v0,0x100
    nop
    bnez v0,L1e6c98
    nop
    nop
L1e6cb8:
    jal func_00101bc8
    addiu a0,zero,2
    .word 0x8c420000
    andi v0,v0,0x100
    nop
    bnez v0,L1e6cb8
    nop
    .word 0x70002628
    jal func_00100a70
    .word 0x70002e28
    .word 0x72e02628
    jal func_00100ec8
    .word 0x72802e28
    addiu v1,zero,-1
    bne v0,v1,L1e6d18
    nop
    .word 0x72e02628
    jal func_00100ec8
    .word 0x72802e28
    addiu v1,zero,-1
    bne v0,v1,L1e6d18
    nop
    b L1e7040
    .word 0x70001628
L1e6d18:
    .word 0x8e03000c
    .word 0x8e020014
    subu s6,s6,s2
    slt at,s6,s2
    addu s3,s3,s2
    .word 0x00621018
    sra v0,v0,0x3
    .word 0x02421018
    beqz at,L1e6d48
    addu s4,s4,v0
    .word 0x72c09628
    nop
L1e6d48:
    bnez s6,L1e6c28
    nop
L1e6d50:
    .word 0x8e04000c
    .word 0x8e030014
    addiu v0,zero,1
    .word 0x00831818
    sra v1,v1,0x3
    .word 0xae030018
    .word 0x8e030004
    .word 0xafc30000
    .word 0x92030022
    ori v1,v1,0x2
    b L1e7040
    .word 0xa2030022
L1e6d80:
    .word 0xafa400c8
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xe
    .word 0xafa200cc
    jal func_001c3070
    addiu a0,sp,200
    b L1e7040
    .word 0x70001628
    .word 0x8f82877c
L1e6da8:
    andi s1,s2,0xff
    addu s5,s0,v0
    .word 0x92a20016
    sra v0,v0,0x2
    slt at,v0,s1
    beqz at,L1e6dec
    andi s3,s4,0x1
    .word 0xafa400d0
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xf
    .word 0xafa200d4
    jal func_001c3070
    addiu a0,sp,208
    b L1e7040
    .word 0x70001628
    andi s3,s4,0x1
L1e6dec:
    beqz s3,L1e6dfc
    nop
    jal func_001f41b0
    .word 0x72002628
L1e6dfc:
    .word 0x92a50036
    andi v0,a1,0x1
    bnez v0,L1e6eb4
    nop
    .word 0x70001628
    b L1e6e78
    addiu a2,zero,-16
L1e6e18:
    .word 0x8e040014
    .word 0x8e03000c
    addiu v0,v0,1
    andi v0,v0,0xff
    .word 0x00831818
    sra v1,v1,0x3
    .word 0xae030018
    .word 0x8e030004
    addiu v1,v1,15
    and v1,v1,a2
    .word 0xae030004
    .word 0x8e050018
    .word 0x8e040010
    .word 0x8e030004
    mult1 a0,a1,a0
    addu v1,v1,a0
    .word 0xae030004
    .word 0x8e03000c
    sra v1,v1,0x1
    .word 0xae03000c
    .word 0x8e030010
    sra v1,v1,0x1
    .word 0xae030010
    nop
L1e6e78:
    andi v1,v0,0xff
    slt v1,v1,s1
    bnez v1,L1e6e18
    nop
    .word 0x8e030004
    addiu v0,zero,-16
    addiu v1,v1,15
    and v0,v1,v0
    .word 0xae020004
    .word 0x8e030014
    .word 0x8e02000c
    .word 0x00621018
    sra v0,v0,0x3
    b L1e6f7c
    .word 0xae020018
L1e6eb4:
    .word 0x8ea20008
    addiu a2,sp,216
    addiu a3,sp,220
    srl v0,v0,0x14
    jal func_001e3a50
    andi a0,v0,0x3f
    .word 0x8e02000c
    .word 0x8e030010
    .word 0x70002628
    b L1e6f48
    addiu a3,zero,-16
L1e6ee0:
    .word 0x8fa800d8
    slt at,v0,t0
    beqz at,L1e6efc
    .word 0x70403628
    b L1e6efc
    .word 0x71003628
    .word 0x70403628
L1e6efc:
    .word 0x8fa500dc
    slt at,v1,a1
    movz t0,v1,at
    .word 0x00c84018
    addiu a0,a0,1
    .word 0x8e050004
    sra v0,v0,0x1
    .word 0x8e060014
    sra v1,v1,0x1
    andi a0,a0,0xff
    .word 0x00c83018
    sra a2,a2,0x3
    addiu a2,a2,15
    and a2,a2,a3
    addu a1,a1,a2
    .word 0xae050004
    .word 0x8e050004
    addiu a1,a1,80
    .word 0xae050004
L1e6f48:
    andi a1,a0,0xff
    slt a1,a1,s1
    bnez a1,L1e6ee0
    nop
    .word 0x8fa500d8
    slt at,v0,a1
    movz a1,v0,at
    .word 0x8e040014
    .word 0x00852018
    sra a0,a0,0x3
    .word 0xae040018
    .word 0xae02000c
    .word 0xae030010
L1e6f7c:
    andi v0,s4,0x2
    beqz v0,L1e700c
    nop
    .word 0x92a50036
    andi v1,a1,0x2
    beqz v1,L1e6fd4
    andi v1,a1,0x4
    .word 0x8ea40008
    addiu v1,zero,19
    srl a0,a0,0x14
    andi a0,a0,0x3f
    bne a0,v1,L1e6fd0
    nop
    .word 0x8e030018
    slti v1,v1,16
    bnez v1,L1e6fd0
    nop
    jal func_001e5c50
    .word 0x72002628
    b L1e7010
    .word 0x8e030004
L1e6fd0:
    andi v1,a1,0x4
L1e6fd4:
    beqz v1,L1e700c
    nop
    .word 0x8ea40008
    addiu v1,zero,20
    srl a0,a0,0x14
    andi a0,a0,0x3f
    bne a0,v1,L1e700c
    nop
    .word 0x8e030018
    slti v1,v1,16
    bnez v1,L1e700c
    nop
    jal func_001e5e80
    .word 0x72002628
L1e700c:
    .word 0x8e030004
L1e7010:
    .word 0xafc30000
    beqz v0,L1e7028
    .word 0xa2b20035
    .word 0x92020022
    ori v0,v0,0x2
    .word 0xa2020022
L1e7028:
    beqz s3,L1e7040
    addiu v0,zero,1
    .word 0x92020022
    ori v0,v0,0x4
    .word 0xa2020022
    addiu v0,zero,1
L1e7040:
    .word 0x7bbf0090
L1e7044:
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,224
}



