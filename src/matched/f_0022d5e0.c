extern void func_00188f80(void);
extern void func_001891c0(void);
extern void func_001892c0(void);
extern void func_00189520(void);
extern void func_001895d0(void);
extern void func_00189650(void);
extern void func_0022dde0(void);
extern void func_0022e030(void);
extern void func_0022e6b0(void);
extern void func_0022e730(void);
extern void func_0022e990(void);
extern void func_0022edb0(void);
extern void func_0022ef00(void);
extern void func_0022f370(void);
extern void func_00230d10(void);
extern void func_00230d40(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-304
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c830034
    .word 0x70c09628
    bne v1,s2,L22dbd8
    .word 0x70809e28
    addiu v1,zero,3
    beq a1,v1,L22db68
    nop
    addiu v1,zero,4
    beq a1,v1,L22da0c
    nop
    addiu v1,zero,2
    beql a1,v1,L22d9ac
    addiu v0,zero,1
    addiu v1,zero,1
    beq a1,v1,L22d968
    nop
    beqz a1,L22d648
    nop
    b L22dbdc
    .word 0x7bbf0040
L22d648:
    .word 0x8e620160
    beqz v0,L22d6b0
    nop
    .word 0x70008628
    .word 0x72608e28
L22d65c:
    jal func_0022edb0
    addiu a0,s1,84
    addiu s0,s0,1
    addiu s1,s1,40
    sltiu v0,s0,4
    bnez v0,L22d65c
    nop
    jal func_0022e6b0
    .word 0x72602628
    .word 0x8e64004c
    beqz a0,L22d69c
    nop
    jal func_001892c0
    nop
    .word 0xae60004c
    .word 0xae600048
L22d69c:
    jal func_00189650
    .word 0x8e640040
    .word 0xae600040
    .word 0xae600044
    .word 0xae600160
L22d6b0:
    .word 0x8e620040
    bnez v0,L22d704
    .word 0x70008628
    .word 0xc6600020
    .word 0x3c0241c8
    .word 0x44820800
    nop
    .word 0xe7a00128
    .word 0xc6600028
    .word 0xc6620024
    mul.s $f0,$f1,$f0
    add.s $f0,$f2,$f0
    .word 0xe7a0012c
    .word 0xc66c0028
    jal func_00230d40
    addiu a0,sp,296
    .word 0xae620040
    .word 0x8e620018
    ori v0,v0,0x16
    .word 0xae620018
    .word 0x70008628
L22d704:
    .word 0x8e6300f4
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s3,v0
    .word 0x8c450070
    beqz a1,L22d730
    addiu s1,v0,84
    .word 0x8e240000
    jal func_00189520
    addiu a2,zero,1
L22d730:
    .word 0x8e240024
    beqz a0,L22d748
    nop
    .word 0x8e250020
    jal func_001891c0
    addiu a2,zero,1
L22d748:
    .word 0x8e220000
    beqz v0,L22d7a8
    nop
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0xafa200c0
    addiu v0,zero,2
    .word 0xafa000c4
    .word 0xafa200c8
    .word 0xafa000cc
    .word 0xafa000d0
    .word 0xafa000a0
    .word 0xafa000a4
    .word 0x3c02c180
    .word 0xafa200a8
    .word 0xafa000bc
    .word 0x8e240000
    .word 0x3c020019
    addiu a3,s1,28
    addiu a1,sp,160
    jal func_001895d0
    addiu a2,v0,-18544
    .word 0xae22001c
    nop
L22d7a8:
    .word 0x8e6300f4
    .word 0x3c020033
    addiu v0,v0,6608
    addiu s0,s0,1
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c430000
    sltiu v0,s0,2
    bnez v0,L22d704
    .word 0xae6300f4
    .word 0x8e6300f4
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s3,v0
    .word 0x8c450070
    beqz a1,L22d7fc
    addiu s0,v0,84
    .word 0x8e040000
    jal func_00189520
    addiu a2,zero,1
L22d7fc:
    .word 0x8e040024
    beqz a0,L22d814
    nop
    .word 0x8e050020
    jal func_001891c0
    addiu a2,zero,1
L22d814:
    .word 0x8e020000
    beqz v0,L22d880
    nop
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0xafa20100
    addiu v0,zero,2
    .word 0xafa00104
    .word 0xafa20108
    .word 0xafa0010c
    addiu v0,zero,9
    .word 0xafa00110
    .word 0xafa200e0
    .word 0xafa000e4
    .word 0x3c02c180
    .word 0xafa200e8
    .word 0x3c0238d1
    ori v0,v0,0xb717
    .word 0xafa200f4
    .word 0xafa000fc
    .word 0x3c020023
    .word 0x8e040000
    addiu a1,sp,224
    addiu a2,v0,-4512
    jal func_001895d0
    .word 0x72003e28
    .word 0xae02001c
L22d880:
    .word 0x8e6300f4
    .word 0x3c020033
    addiu v0,v0,6608
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c420000
    .word 0xae6200f4
    .word 0x8e6300f4
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s3,v0
    jal func_0022edb0
    addiu a0,v0,84
    .word 0x8e6300f4
    .word 0x72602e28
    .word 0x72403628
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s3,v0
    jal func_0022f370
    addiu a0,v0,84
    .word 0x8e440158
    sltiu at,a0,3
    bnez at,L22d900
    addiu s0,s2,344
    .word 0x72402e28
    jal func_0022e730
    .word 0x72602628
    b L22d91c
    .word 0x8e050000
L22d900:
    addiu v1,zero,2
    bne a0,v1,L22d918
    nop
    .word 0x72402e28
    jal func_0022e990
    .word 0x72602628
L22d918:
    .word 0x8e050000
L22d91c:
    .word 0x3c03cccc
    ori v1,v1,0xcccd
    .word 0x00650019
    nop
    nop
    mfhi v1
    srl a0,v1,0x3
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x1
    xor v1,a1,v1
    sltiu v1,v1,1
    beqz v1,L22dbd8
    nop
    .word 0x72602628
    jal func_00230d10
    .word 0x70002e28
    b L22dbd8
    nop
L22d968:
    .word 0x8e6300f4
    .word 0x72402e28
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s3,v0
    jal func_0022ef00
    addiu a0,v0,84
    .word 0x8e6300f8
    beqz v1,L22dbd8
    nop
    .word 0x72602628
    jal func_0022e730
    .word 0x72402e28
    b L22dbd8
    nop
    addiu v0,zero,1
L22d9ac:
    .word 0xae620160
    .word 0x8e630018
    addiu v0,zero,-23
    and v0,v1,v0
    .word 0xae620018
    .word 0x8e420158
    sltiu at,v0,2
    bnez at,L22d9fc
    addiu s0,s2,344
    jal func_0022e030
    nop
    .word 0x8e030000
    sltiu v1,v1,10
    bnez v1,L22dbd8
    nop
    addiu a1,zero,1
    jal func_00230d10
    .word 0x72602628
    b L22dbd8
    nop
L22d9fc:
    jal func_0022dde0
    nop
    b L22dbd8
    nop
L22da0c:
    .word 0x3c02002e
    addiu v0,v0,27168
    .word 0x78430000
    addiu a0,sp,80
    addiu a2,zero,1
    .word 0x7c830000
    .word 0xae660160
    .word 0x8e630018
    addiu v0,zero,-23
    and v0,v1,v0
    .word 0xae620018
    .word 0x8e6300f4
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s3,v0
    .word 0x8c440078
    beqz a0,L22da60
    addiu v1,v0,84
    jal func_001891c0
    .word 0x8c650020
L22da60:
    addiu v0,sp,80
    .word 0x8e630040
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0xe4630028
    .word 0xe462002c
    .word 0xe4610030
    .word 0xe4600034
    .word 0x8c62000c
    ori v0,v0,0x8
    .word 0xac62000c
    .word 0x9662001c
    .word 0x8e6400fc
    beqz a0,L22daac
    addiu s0,v0,2
    jal func_00188f80
    .word 0x72002e28
L22daac:
    .word 0x8e640100
    beqz a0,L22dac0
    nop
    jal func_00188f80
    .word 0x72002e28
L22dac0:
    .word 0x8e640104
    beqz a0,L22dad8
    .word 0x3c023f00
    jal func_00188f80
    .word 0x72002e28
    .word 0x3c023f00
L22dad8:
    .word 0xafa20080
    addiu v0,zero,2
    .word 0xafa00084
    .word 0xafa20088
    .word 0x3c023df5
    .word 0xafa0008c
    ori v0,v0,0xc28f
    .word 0xafa20090
    addiu v0,zero,8
    .word 0xafa00094
    .word 0xafa20098
    addiu v1,zero,1
    addiu v0,zero,7
    .word 0xafa3009c
    .word 0xafa20060
    .word 0x3c02c355
    ori v0,v0,0x5555
    .word 0xafa20064
    .word 0x3c02c288
    .word 0xafa20068
    .word 0x3c024040
    .word 0xafa2006c
    .word 0xafa20070
    .word 0xafa3007c
    .word 0x3c020023
    .word 0x8e640040
    addiu a1,sp,96
    addiu a2,v0,-9216
    jal func_001895d0
    .word 0x72603e28
    addiu a1,zero,2
    .word 0xae620044
    jal func_00230d10
    .word 0x72602628
    b L22dbd8
    nop
L22db68:
    .word 0x8e630040
    beqz v1,L22dbd8
    nop
    .word 0x8e630160
    bnez v1,L22dbd8
    nop
    .word 0x70008628
    .word 0x72608e28
L22db88:
    jal func_0022edb0
    addiu a0,s1,84
    addiu s0,s0,1
    addiu s1,s1,40
    sltiu v0,s0,4
    bnez v0,L22db88
    nop
    jal func_0022e6b0
    .word 0x72602628
    .word 0x8e64004c
    beqz a0,L22dbc8
    nop
    jal func_001892c0
    nop
    .word 0xae60004c
    .word 0xae600048
L22dbc8:
    jal func_00189650
    .word 0x8e640040
    .word 0xae600040
    .word 0xae600044
L22dbd8:
    .word 0x7bbf0040
L22dbdc:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,304
}
