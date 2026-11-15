extern void fn_243150(void);
extern void fn_121a58(void);
extern void fn_16f910(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-208
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x3c020031
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,v0,10144
    .word 0xac82000c
    ori v0,zero,0x8000
    .word 0xac820000
    .word 0x3c020031
    .word 0xac800004
    addiu v0,v0,9952
    .word 0xac800008
    .word 0x3c010031
    .word 0xac2226e0
    .word 0x3c020031
    addiu v0,v0,9952
    .word 0x3c010031
    .word 0xac2226e4
    .word 0x3c024561
    .word 0xac820018
    .word 0xac8000b8
    paddub s0,a0,zero
    .word 0xac8000bc
    .word 0x3c020030
    addiu a0,v0,24688
    b L18bfd8
    paddub v1,zero,zero
    addiu a0,a0,4
L18bfd4:
    addiu v1,v1,1
L18bfd8:
    slti at,v1,2
    beqz at,L18c004
    slti at,v1,2
    .word 0x8c8203ac
    beqz v0,L18c000
    nop
    .word 0x8c420344
    bnezl v0,L18bfd4
    addiu a0,a0,4
    nop
L18c000:
    slti at,v1,2
L18c004:
    beqz at,L18c02c
    paddub v0,zero,zero
    .word 0x3c020030
    addiu v0,v0,25628
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c420000
    b L18c034
    addiu s2,v0,1228
    paddub v0,zero,zero
L18c02c:
    b L18c188
    .word 0x7bbf0060
L18c034:
    paddub v1,zero,zero
    b L18c078
    paddub a0,zero,zero
L18c040:
    .word 0x8e020034
    addiu v1,v1,1
    addu a1,v0,a0
    addiu v0,a1,20
    .word 0xaca20014
    .word 0x8e020034
    addu a1,v0,a0
    addiu v0,a1,20
    .word 0xaca20018
    .word 0x8e020034
    addu v0,v0,a0
    addiu a0,a0,28
    .word 0xac400010
    nop
L18c078:
    .word 0x8e020030
    slt v0,v1,v0
    bnez v0,L18c040
    nop
    .word 0x8e420000
    bgtz v0,L18c09c
    nop
    b L18c184
    paddub v0,zero,zero
L18c09c:
    .word 0x3c010030
    .word 0x9022a61f
    bltz v0,L18c0d8
    addiu s3,zero,30
    slti at,v0,7
    beqz at,L18c0d4
    nop
    andi v0,v0,0xff
    sll v1,v0,0x2
    .word 0x3c02002e
    addiu v0,v0,1840
    addu v0,v0,v1
    b L18c0d8
    .word 0x8c530000
L18c0d4:
    addiu s3,zero,30
L18c0d8:
    slt at,zero,s3
    beqz at,L18c180
    paddub s1,zero,zero
    addiu s4,sp,124
L18c0e8:
    .word 0x8e0400bc
    addiu v0,a0,1
    .word 0xae0200bc
    .word 0x8e0300bc
    .word 0x8e420000
    slt v0,v1,v0
    bnez v0,L18c114
    sll v0,a0,0x5
    .word 0xae0000bc
    nop
    sll v0,a0,0x5
L18c114:
    addu s5,s2,v0
    .word 0x3c020020
    .word 0xafa20070
    addiu v0,zero,-1
    .word 0xafa000c8
    .word 0xafa20074
    subu v0,v0,s1
    .word 0xafa20078
    .word 0x8ea20020
    addiu a1,sp,112
    addiu a0,zero,21
    .word 0xafa200bc
    jal fn_243150
    .word 0xafa000c0
    beqzl v0,L18c174
    addiu s1,s1,1
    addiu a1,s5,4
    jal fn_121a58
    paddub a0,s4,zero
    addiu a1,sp,112
    addiu a0,zero,21
    jal fn_16f910
    .word 0xafa000c4
    addiu s1,s1,1
L18c174:
    slt v0,s1,s3
    bnez v0,L18c0e8
    nop
L18c180:
    addiu v0,zero,1
L18c184:
    .word 0x7bbf0060
L18c188:
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,208
}

