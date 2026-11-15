extern void fn_13b550(void);
extern void fn_121b70(void);
extern void fn_1214b8(void);
extern void fn_24b540(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-448
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x3c020033
    .word 0x7fb40040
    addiu v0,v0,-26768
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0xafa200a0
    .word 0x7fb10010
    .word 0x3c020030
    addiu s1,v0,29208
    .word 0x3c02002e
    addiu s6,zero,4
    addiu s8,zero,1
    addiu a1,v0,10112
    addiu a0,sp,176
    addiu v1,zero,15
    .word 0x7fb00000
L19df88:
    .word 0x78a20000
    addiu v1,v1,-1
    .word 0x7c820000
    addiu a1,a1,16
    addiu a0,a0,16
    bgtz v1,L19df88
    nop
    .word 0xdca30000
    .word 0xc4a20008
    .word 0x3c010033
    .word 0xfc830000
    .word 0xe4820008
    .word 0x9023a578
    .word 0x8f848328
    addiu a1,zero,3
    .word 0xaf80851c
    .word 0x3c010033
    .word 0x9022a579
    jal fn_13b550
    addu s7,v1,v0
    addiu v1,sp,196
    .word 0xac620000
    .word 0x3c010030
    .word 0x9022a61f
    .word 0x8f848328
    jal fn_13b550
    addiu a1,v0,22
    addiu s0,zero,1
    bne s7,s0,L19e010
    .word 0xafa200e0
    .word 0x3c024352
    ori v0,v0,0x8f5c
    b L19e014
    .word 0xafa20124
L19e010:
    .word 0x70008628
L19e014:
    sltu at,s0,s7
    beqz at,L19e16c
    sll v0,s6,0x3
    sll v0,s0,0x1
    addu v0,v0,s0
    sll v0,v0,0x3
    addu s3,s1,v0
    sll v0,s0,0x3
    subu v0,v0,s0
    sll v1,v0,0x4
    .word 0x8fa200a0
    addiu s5,sp,288
    addu s4,v0,v1
L19e048:
    .word 0x8e710008
    beqz s1,L19e0dc
    .word 0x96920002
    .word 0x8e820058
    sltu at,s1,s2
    beqz at,L19e074
    .word 0xaea20014
    addiu v0,zero,19
    .word 0xaea20000
    b L19e080
    .word 0x7000f628
L19e074:
    addiu v0,zero,20
    .word 0xaea20000
    nop
L19e080:
    .word 0x8f84851c
    beqz a0,L19e0a8
    nop
    jal fn_121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19e0b8
    .word 0xaf82851c
L19e0a8:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
    nop
L19e0b8:
    .word 0x8f84851c
    .word 0x3c02002f
    addiu a1,v0,-288
    paddub a2,s1,zero
    jal fn_1214b8
    paddub a3,s2,zero
    .word 0x8f82851c
    b L19e148
    .word 0xaea20018
L19e0dc:
    .word 0x3c02002f
    addiu v0,v0,-280
    .word 0xaea20014
    .word 0x8f84851c
    beqz a0,L19e110
    nop
    jal fn_121b70
    nop
    addiu v1,v0,1
    .word 0x8f82851c
    addu v0,v0,v1
    b L19e120
    .word 0xaf82851c
L19e110:
    .word 0x3c020031
    addiu v0,v0,26880
    .word 0xaf82851c
    nop
L19e120:
    .word 0x8f84851c
    .word 0x3c02002f
    addiu a1,v0,-264
    .word 0x70003628
    jal fn_1214b8
    .word 0x70003e28
    .word 0x8f82851c
    .word 0x7000f628
    .word 0xaea20018
    nop
L19e148:
    addiu s0,s0,1
    addiu s5,s5,28
    addiu s6,s6,1
    addiu s3,s3,24
    sltu v0,s0,s7
    bnez v0,L19e048
    addiu s4,s4,112
    nop
    sll v0,s6,0x3
L19e16c:
    subu v0,v0,s6
    sll a0,v0,0x2
    addiu v1,zero,21
    addu a1,a0,sp
    beqz s8,L19e1b4
    .word 0xaca300b0
    addiu v0,sp,196
    addu v1,v0,a0
    sll v0,s0,0x3
    subu v0,v0,s0
    sll a0,v0,0x4
    .word 0x8fa200a0
    addu v0,a0,v0
    .word 0x8c440058
    addiu v0,zero,1
    .word 0xac640000
    b L19e1c8
    .word 0xaca200c8
L19e1b4:
    addiu v0,sp,196
    .word 0x3c03002f
    addu v0,v0,a0
    addiu v1,v1,-256
    .word 0xac430000
L19e1c8:
    .word 0xdf8784d8
    addiu a2,sp,440
    addiu v1,s6,1
    addiu v0,sp,176
    .word 0xfcc70000
    .word 0xafa301b8
    addiu a0,zero,10
    .word 0x70002e28
    jal fn_24b540
    .word 0xafa201bc
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
    addiu sp,sp,448
}


