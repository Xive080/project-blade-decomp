extern void func_00247ee0(void);
extern void func_0013c300(void);
extern void func_0011ec80(void);
extern void func_0016fa90(void);
extern void func_001214b8(void);
extern void func_00170000(void);
extern void func_00201a40(void);
extern void func_0024a130(void);
extern void func_00121a58(void);
extern void func_0017b020(void);
extern void func_001a98c0(void);
extern void func_001a7230(void);
extern void func_00221e90(void);
extern void func_00142960(void);
extern void func_0016ff20(void);
extern void func_00142950(void);
extern void func_001fee50(void);
extern void func_001fefa0(void);
extern void func_001fed50(void);
extern void func_0017ae70(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-848
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xac800030
    .word 0xac8000b4
    .word 0xac8000b8
    .word 0xac8000bc
    .word 0xac800360
    .word 0xac800364
    .word 0xac800368
    .word 0xac8000c0
    .word 0xac8000c4
    .word 0xac8000c8
    paddub s0,a0,zero
    addiu a0,s0,220
    jal func_00247ee0
    .word 0xafa500ac
    jal func_00247ee0
    addiu a0,s0,336
    jal func_00247ee0
    addiu a0,s0,452
    jal func_00247ee0
    addiu a0,s0,568
    jal func_00247ee0
    addiu a0,s0,684
    jal func_0013c300
    nop
    .word 0x8c420000
    .word 0x8fa500ac
    jalr ra,v0
    paddub a0,s0,zero
    addiu a0,s0,100
    addiu a2,zero,892
    .word 0x70002e28
    jal func_0011ec80
    .word 0xae0000b0
    .word 0x3c020031
    addiu v0,v0,-25056
    .word 0xae02000c
    .word 0x8fa200ac
    .word 0x8c420050
    .word 0xae0200d0
    .word 0x8fa200ac
    .word 0x8042000c
    bnez v0,L17a720
    nop
    b L17ae40
    addiu v0,zero,1
L17a720:
    .word 0x8fa200ac
    jal func_0016fa90
    addiu a0,v0,12
    .word 0xae0200cc
    .word 0x8e0300cc
    beqz v1,L17ab70
    nop
    .word 0x8e0200d0
    andi v0,v0,0x10
    beqz v0,L17a75c
    nop
    .word 0xae000030
    .word 0xae0000b4
    b L17a810
    .word 0xae0000b8
L17a75c:
    .word 0x3c02002f
    addiu a1,v0,-848
    .word 0x8c720010
    .word 0x8fa200ac
    addiu a0,sp,464
    addiu a3,zero,1
    jal func_001214b8
    addiu a2,v0,12
    jal func_00170000
    addiu a0,sp,464
    jal func_00201a40
    paddub a0,v0,zero
    .word 0xae020030
    addiu v0,zero,3
    bne s2,v0,L17a800
    nop
    .word 0x3c02002f
    addiu a1,v0,-848
    .word 0x8fa200ac
    addiu a0,sp,592
    addiu a3,zero,2
    jal func_001214b8
    addiu a2,v0,12
    jal func_00170000
    addiu a0,sp,592
    jal func_00201a40
    paddub a0,v0,zero
    .word 0xae0200b4
    .word 0x3c02002f
    addiu a1,v0,-848
    .word 0x8fa200ac
    addiu a0,sp,720
    addiu a3,zero,3
    jal func_001214b8
    addiu a2,v0,12
    jal func_00170000
    addiu a0,sp,720
    jal func_00201a40
    paddub a0,v0,zero
    b L17a810
    .word 0xae0200b8
L17a800:
    .word 0x8e020030
    .word 0xae0200b4
    .word 0x8e020030
    .word 0xae0200b8
L17a810:
    .word 0x8e0400b4
    beqz a0,L17a838
    nop
    jal func_0024a130
    nop
    beqz v0,L17a838
    nop
    .word 0x8e020010
    ori v0,v0,0x10
    .word 0xae020010
L17a838:
    .word 0x8e0200cc
    .word 0x8c4205f4
    bnez v0,L17a85c
    addiu s2,zero,105
    .word 0x8e020010
    andi v0,v0,0x10
    beqz v0,L17a868
    addiu s2,zero,106
    addiu s2,zero,105
L17a85c:
    b L17a86c
    .word 0x8fa200ac
    addiu s2,zero,106
L17a868:
    .word 0x8fa200ac
L17a86c:
    addiu a0,sp,368
    jal func_00121a58
    addiu a1,v0,12
    addiu a0,sp,368
    addiu a1,zero,3
    jal func_0017b020
    addiu a2,zero,1
    beqz v0,L17a8a4
    nop
    addiu a0,s0,220
    addiu a1,sp,368
    .word 0x70003628
    jal func_001a98c0
    paddub a3,s2,zero
L17a8a4:
    .word 0x8e0200ec
    bnez v0,L17a8c8
    nop
    .word 0x8fa200ac
    addiu a0,s0,220
    paddub a3,s2,zero
    .word 0x70003628
    jal func_001a98c0
    addiu a1,v0,12
L17a8c8:
    .word 0x3c02002f
    addiu a1,v0,-840
    .word 0x8fa200ac
    addiu a0,sp,176
    addiu a2,v0,12
    .word 0x3c02002f
    jal func_001214b8
    addiu a3,v0,-832
    addiu a1,sp,176
    jal func_00121a58
    addiu a0,sp,400
    addiu a0,sp,400
    addiu a1,zero,3
    jal func_0017b020
    addiu a2,zero,1
    beqz v0,L17a920
    nop
    addiu a0,s0,452
    addiu a1,sp,400
    addiu a3,zero,106
    jal func_001a98c0
    .word 0x70003628
L17a920:
    .word 0x8e0201d4
    bnez v0,L17a940
    nop
    addiu a0,s0,452
    addiu a1,sp,176
    addiu a3,zero,106
    jal func_001a98c0
    .word 0x70003628
L17a940:
    .word 0x3c02002f
    addiu a1,v0,-840
    .word 0x8fa200ac
    addiu a0,sp,176
    addiu a2,v0,12
    .word 0x3c02002f
    jal func_001214b8
    addiu a3,v0,-824
    addiu a1,sp,176
    jal func_00121a58
    addiu a0,sp,432
    addiu a0,sp,432
    addiu a1,zero,3
    jal func_0017b020
    addiu a2,zero,1
    beqz v0,L17a998
    nop
    addiu a0,s0,684
    addiu a1,sp,432
    addiu a3,zero,106
    jal func_001a98c0
    .word 0x70003628
L17a998:
    .word 0x8e0202bc
    bnez v0,L17a9b8
    nop
    addiu a0,s0,684
    addiu a1,sp,176
    addiu a3,zero,106
    jal func_001a98c0
    .word 0x70003628
L17a9b8:
    .word 0x8f828490
    addiu v0,v0,1
    .word 0xaf828490
    .word 0x8f828490
    slti at,v0,4
    bnez at,L17a9dc
    nop
    addiu v0,zero,1
    .word 0xaf828490
L17a9dc:
    .word 0x3c02002f
    addiu a1,v0,-840
    .word 0x8fa200ac
    addiu a0,sp,176
    addiu a2,v0,12
    .word 0x3c02002f
    jal func_001214b8
    addiu a3,v0,-816
    addiu a0,s0,336
    addiu a1,sp,176
    addiu a2,zero,1
    jal func_001a98c0
    addiu a3,zero,106
    .word 0x3c02002f
    addiu a1,v0,-840
    .word 0x8fa200ac
    addiu a0,sp,176
    addiu a2,v0,12
    .word 0x3c02002f
    jal func_001214b8
    addiu a3,v0,-808
    addiu a0,s0,568
    addiu a1,sp,176
    addiu a2,zero,1
    jal func_001a98c0
    addiu a3,zero,106
    .word 0x3c024974
    ori v0,v0,0x2400
    .word 0xae02005c
    addiu a0,s0,220
    addiu a1,s0,92
    jal func_001a7230
    .word 0xae020060
    addiu a0,s0,452
    jal func_001a7230
    addiu a1,s0,92
    addiu a0,s0,684
    jal func_001a7230
    addiu a1,s0,92
    addiu a0,s0,336
    jal func_001a7230
    addiu a1,s0,92
    addiu a0,s0,568
    jal func_001a7230
    addiu a1,s0,92
    .word 0x8e0200cc
    .word 0x8c4205f8
    beqz v0,L17aaac
    .word 0x70009628
    jal func_00221e90
    paddub a0,s0,zero
    .word 0x70009628
L17aaac:
    .word 0x7000f628
    paddub s7,s0,zero
L17aab4:
    .word 0x8e0300cc
    addiu v0,zero,2
    addu v1,v1,s8
    beq s2,v0,L17aaf4
    addiu s5,v1,76
    addiu v0,zero,1
    beq s2,v0,L17aaec
    nop
    beqz s2,L17aae4
    nop
    b L17ab04
    .word 0x7000a628
L17aae4:
    b L17ab00
    .word 0x8e110030
L17aaec:
    b L17ab00
    .word 0x8e1100b4
L17aaf4:
    .word 0x8e1100b8
    nop
    nop
L17ab00:
    .word 0x7000a628
L17ab04:
    .word 0x70009e28
    paddub s6,s7,zero
    nop
L17ab10:
    .word 0x8ea20010
    andi v0,v0,0x20
    beqz v0,L17ab3c
    nop
    addiu v0,s4,32767
    addiu a1,v0,17233
    jal func_00142960
    paddub a0,s1,zero
    addiu s4,s4,1
    b L17ab40
    .word 0xaec20378
L17ab3c:
    .word 0xaec00378
L17ab40:
    addiu s3,s3,1
    addiu s5,s5,36
    sltiu v0,s3,8
    bnez v0,L17ab10
    addiu s6,s6,4
    addiu s2,s2,1
    addiu s8,s8,428
    sltiu v0,s2,3
    bnez v0,L17aab4
    addiu s7,s7,32
    b L17ac18
    .word 0x8e020030
L17ab70:
    .word 0x3c02002f
    addiu a1,v0,-800
    .word 0x8fa200ac
    addiu a0,sp,304
    jal func_001214b8
    addiu a2,v0,12
    jal func_00170000
    addiu a0,sp,304
    jal func_00201a40
    paddub a0,v0,zero
    .word 0xae020030
    .word 0x3c02002f
    addiu a1,v0,-792
    .word 0x8fa200ac
    addiu a0,sp,304
    jal func_001214b8
    addiu a2,v0,12
    jal func_00170000
    addiu a0,sp,304
    beqz v0,L17abd4
    nop
    jal func_00201a40
    paddub a0,v0,zero
    b L17abd8
    .word 0xae0200b4
L17abd4:
    .word 0xae0000b4
L17abd8:
    .word 0x3c02002f
    addiu a1,v0,-784
    .word 0x8fa200ac
    addiu a0,sp,304
    jal func_001214b8
    addiu a2,v0,12
    jal func_00170000
    addiu a0,sp,304
    beqz v0,L17ac10
    nop
    jal func_00201a40
    paddub a0,v0,zero
    b L17ac14
    .word 0xae0200b8
L17ac10:
    .word 0xae0000b8
L17ac14:
    .word 0x8e020030
L17ac18:
    .word 0xae0200bc
    .word 0x8e0200d0
    andi v0,v0,0x10
    bnez v0,L17ae34
    nop
    .word 0x3c02002f
    addiu a1,v0,-776
    .word 0x8fa200ac
    addiu a0,sp,336
    jal func_001214b8
    addiu a2,v0,12
    jal func_0016ff20
    addiu a0,sp,336
    .word 0xae020354
    .word 0x3c02002f
    addiu a1,v0,-768
    .word 0x8fa200ac
    addiu a0,sp,336
    jal func_001214b8
    addiu a2,v0,12
    jal func_0016ff20
    addiu a0,sp,336
    .word 0xae020358
    .word 0x8fa200ac
    addiu a0,sp,336
    addiu a2,v0,12
    .word 0x3c02002f
    jal func_001214b8
    addiu a1,v0,-760
    jal func_0016ff20
    addiu a0,sp,336
    .word 0xae02035c
    .word 0x8e020030
    beqz v0,L17acb8
    nop
    jal func_00142950
    .word 0x8c440004
    jal func_001fee50
    paddub a0,v0,zero
    .word 0xae020360
L17acb8:
    .word 0x8e0200b4
    beqz v0,L17acd8
    nop
    jal func_00142950
    .word 0x8c440004
    jal func_001fee50
    paddub a0,v0,zero
    .word 0xae020364
L17acd8:
    .word 0x8e0200b8
    beqz v0,L17acf8
    nop
    jal func_00142950
    .word 0x8c440004
    jal func_001fee50
    paddub a0,v0,zero
    .word 0xae020368
L17acf8:
    .word 0x8e040360
    beqz a0,L17ad38
    nop
    .word 0x8e020354
    beqz v0,L17ad38
    nop
    .word 0x8c830000
    addiu v0,zero,-4097
    ori v1,v1,0x2000
    and v0,v1,v0
    .word 0xac820000
    .word 0x8e050354
    jal func_001fefa0
    .word 0x8e040360
    jal func_001fed50
    .word 0x8e040360
L17ad38:
    .word 0x8e040364
    beqz a0,L17ad78
    nop
    .word 0x8e020358
    beqz v0,L17ad78
    nop
    .word 0x8c830000
    addiu v0,zero,-4097
    ori v1,v1,0x2000
    and v0,v1,v0
    .word 0xac820000
    .word 0x8e050358
    jal func_001fefa0
    .word 0x8e040364
    jal func_001fed50
    .word 0x8e040364
L17ad78:
    .word 0x8e040368
    beqz a0,L17adb8
    nop
    .word 0x8e02035c
    beqz v0,L17adb8
    nop
    .word 0x8c830000
    addiu v0,zero,-4097
    ori v1,v1,0x2000
    and v0,v1,v0
    .word 0xac820000
    .word 0x8e05035c
    jal func_001fefa0
    .word 0x8e040368
    jal func_001fed50
    .word 0x8e040368
L17adb8:
    .word 0x8e040030
    jal func_0017ae70
    addiu a1,s0,192
    .word 0x8e0400b4
    beqz a0,L17adf8
    nop
    .word 0x8e020030
    beq a0,v0,L17adec
    nop
    jal func_0017ae70
    addiu a1,s0,196
    b L17ae00
    .word 0x8e0400b8
L17adec:
    .word 0x8e0200c0
    b L17adfc
    .word 0xae0200c4
L17adf8:
    .word 0xae0000c4
L17adfc:
    .word 0x8e0400b8
L17ae00:
    beqz a0,L17ae30
    nop
    .word 0x8e020030
    beq a0,v0,L17ae24
    nop
    jal func_0017ae70
    addiu a1,s0,200
    b L17ae38
    .word 0xae000324
L17ae24:
    .word 0x8e0200c0
    b L17ae34
    .word 0xae0200c8
L17ae30:
    .word 0xae0000c8
L17ae34:
    .word 0xae000324
L17ae38:
    addiu v0,zero,1
    .word 0xae000320
L17ae40:
    .word 0x7bbf0090
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
    addiu sp,sp,848
}


