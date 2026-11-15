extern void fn_111c70(void);
extern void fn_111ed0(void);
extern void fn_112440(void);
extern void fn_112928(void);
extern void fn_1123b8(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s3,a2,zero
    paddub s4,a0,zero
    bnez s3,L177184
    paddub s0,a1,zero
    b L177370
    paddub v0,zero,zero
L177184:
    bgtz s4,L177194
    andi v0,s0,0x8
    b L177370
    paddub v0,zero,zero
L177194:
    beqz v0,L1771a8
    .word 0xaf808468
    addiu v0,zero,448
    b L1771b0
    .word 0xaf828468
L1771a8:
    b L177370
    paddub v0,zero,zero
L1771b0:
    sll v0,s4,0x3
    subu v0,v0,s4
    sll v0,v0,0x6
    slt at,a3,v0
    beqz at,L1771d0
    addiu v0,zero,1
    b L177370
    paddub v0,zero,zero
L1771d0:
    .word 0xaf828478
    .word 0xaf82847c
    .word 0x3c020031
    addiu t0,v0,-32056
    paddub a1,zero,zero
    addiu v1,zero,255
L1771e8:
    addiu a2,gp,-31632
    paddub a0,zero,zero
    paddub a3,t0,zero
    nop
L1771f8:
    slti at,a0,2
    beqz at,L17720c
    nop
    b L177210
    .word 0xa0c40000
L17720c:
    .word 0xa0c30000
L177210:
    addiu a0,a0,1
    .word 0xa0e00000
    slti v0,a0,6
    addiu a2,a2,1
    bnez v0,L1771f8
    addiu a3,a3,1
    addiu a1,a1,1
    slti v0,a1,2
    bnez v0,L1771e8
    addiu t0,t0,6
    jal fn_111c70
    paddub a0,zero,zero
    addiu v1,zero,1
    beq v0,v1,L177254
    paddub v0,zero,zero
    b L177374
    .word 0x7bbf0050
L177254:
    .word 0xaf908464
    .word 0xaf948460
    .word 0xaf93846c
    b L177358
    paddub s0,zero,zero
L177268:
    bgez s0,L17727c
    andi s1,s0,0x1
    beqz s1,L177280
    sra s2,s0,0x1
    addiu s1,s1,-2
L17727c:
    sra s2,s0,0x1
L177280:
    bgez s0,L177294
    addiu v0,zero,448
    addiu v0,s0,1
    sra s2,v0,0x1
    addiu v0,zero,448
L177294:
    .word 0xae600000
    .word 0xae620004
    .word 0xae710140
    addiu v0,zero,2
    .word 0xae720144
    .word 0xae62014c
    .word 0x8e630140
    addiu v0,gp,-31624
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c420000
    slt at,s2,v0
    beqz at,L177344
    addiu a2,s3,64
    paddub a0,s1,zero
    jal fn_111ed0
    paddub a1,s2,zero
    addiu v1,zero,1
    bne v0,v1,L17733c
    addiu a2,zero,-1
    .word 0xae630148
    paddub a0,s1,zero
    paddub a1,s2,zero
    jal fn_112440
    paddub a3,zero,zero
    slti v0,v0,2
    bnez v0,L17731c
    paddub a0,s1,zero
    addiu a2,gp,-31632
    paddub a0,s1,zero
    jal fn_112928
    paddub a1,s2,zero
    nop
L177318:
    paddub a0,s1,zero
L17731c:
    jal fn_1123b8
    paddub a1,s2,zero
    addiu v1,zero,2
    nop
    bne v0,v1,L177318
    nop
    b L17734c
    .word 0x8f828468
L17733c:
    b L177348
    .word 0xae600148
L177344:
    .word 0xae600148
L177348:
    .word 0x8f828468
L17734c:
    addiu s0,s0,1
    addu s3,s3,v0
    nop
L177358:
    slti at,s4,3
    addiu v0,zero,2
    movn v0,s4,at
    slt v0,s0,v0
    bnez v0,L177268
    addiu v0,zero,1
L177370:
    .word 0x7bbf0050
L177374:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
