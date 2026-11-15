extern void fn_1bf2b0(void);
extern void fn_1ca2d0(void);
extern void fn_148320(void);
extern void fn_1bf1c0(void);
extern void fn_1bf260(void);
extern void fn_200170(void);
extern void fn_178e60(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-144
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    addiu a1,sp,128
    paddub s6,a0,zero
    jal fn_1bf2b0
    .word 0x7fb00000
    bnez v0,L17b180
    nop
    b L17b3a4
    .word 0x70001628
L17b180:
    .word 0x3c020033
    addiu s4,sp,132
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    .word 0x8e840000
    bnez v0,L17b1a8
    paddub s0,v0,zero
    b L17b3a4
    .word 0x70001628
L17b1a8:
    .word 0x8e910000
    paddub a0,s6,zero
    paddub a1,s0,zero
    jal fn_1ca2d0
    paddub a2,s1,zero
    beq s1,v0,L17b1e4
    addiu a1,s0,1548
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420134
    jalr ra,v0
    paddub a0,s0,zero
    b L17b3a4
    .word 0x70001628
    addiu a1,s0,1548
L17b1e4:
    .word 0x70002628
    b L17b228
    paddub a2,s0,zero
L17b1f0:
    .word 0x8cc201e8
    beqz v0,L17b218
    nop
    .word 0xacc501ec
    .word 0x8cc301e8
    sll v0,v1,0x3
    addu v0,v0,v1
    sll v0,v0,0x2
    b L17b220
    addu a1,a1,v0
L17b218:
    .word 0xacc001ec
    nop
L17b220:
    addiu a2,a2,428
    addiu a0,a0,1
L17b228:
    .word 0x8e020010
    slt v0,a0,v0
    bnez v0,L17b1f0
    nop
    .word 0x7000ae28
    b L17b2a8
    paddub s3,s0,zero
    addiu a1,sp,128
L17b248:
    jal fn_1bf2b0
    paddub a0,s6,zero
    bnez v0,L17b264
    .word 0x70008e28
    b L17b3a4
    .word 0x70001628
    .word 0x70008e28
L17b264:
    b L17b290
    paddub s2,s3,zero
    addiu a1,s2,80
L17b270:
    jal fn_148320
    paddub a0,s6,zero
    bnezl v0,L17b28c
    addiu s2,s2,36
    b L17b3a4
    .word 0x70001628
    addiu s2,s2,36
L17b28c:
    addiu s1,s1,1
L17b290:
    .word 0x8e820000
    slt v0,s1,v0
    bnez v0,L17b270
    addiu a1,s2,80
    addiu s3,s3,428
    addiu s5,s5,1
L17b2a8:
    .word 0x8e020010
    slt v0,s5,v0
    bnez v0,L17b248
    addiu a1,sp,128
    .word 0x8e03001c
    addiu v0,zero,2
    bne v1,v0,L17b344
    nop
    addiu a1,sp,128
    jal fn_1bf2b0
    paddub a0,s6,zero
    bnez v0,L17b2e8
    addiu a1,s0,1512
    b L17b3a4
    .word 0x70001628
    addiu a1,s0,1512
L17b2e8:
    addiu a2,zero,4
    jal fn_1bf1c0
    paddub a0,s6,zero
    addiu a1,s0,1516
    addiu a2,zero,4
    jal fn_1bf1c0
    paddub a0,s6,zero
    addiu a1,s0,1520
    addiu a2,zero,4
    jal fn_1bf260
    paddub a0,s6,zero
    addiu a1,sp,128
    jal fn_1bf2b0
    paddub a0,s6,zero
    bnez v0,L17b334
    paddub a0,s6,zero
    b L17b3a4
    .word 0x70001628
    paddub a0,s6,zero
L17b334:
    jal fn_200170
    nop
    b L17b348
    .word 0xae0205f4
L17b344:
    .word 0xae0005f4
L17b348:
    .word 0x8e0205d4
    beqz v0,L17b3a4
    paddub v0,s0,zero
    .word 0x3c010030
    .word 0x8c316078
    jal fn_178e60
    addiu a0,zero,16
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8e0305d4
    .word 0x8c42013c
    addiu a0,zero,1
    jalr ra,v0
    sll a1,v1,0x4
    .word 0xae0205e4
    .word 0x8e0205d4
    .word 0x8e0505e4
    paddub a0,s6,zero
    jal fn_1ca2d0
    sll a2,v0,0x4
    jal fn_178e60
    paddub a0,s1,zero
    paddub v0,s0,zero
L17b3a4:
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,144
}


