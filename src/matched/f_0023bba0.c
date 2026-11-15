extern void func_001c0180(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f828990
    addu v0,a0,v0
    .word 0x8c510000
    beq zero,s1,L23bbd8
    paddub s0,zero,zero
    .word 0x8e220080
    bnezl v0,L23bbe0
    addiu s0,s0,4
L23bbd8:
    b L23bcf0
    paddub v0,zero,zero
L23bbe0:
    b L23bce0
    paddub s2,zero,zero
L23bbe8:
    .word 0x8e230030
    addiu v0,zero,4
    beq v1,v0,L23bca0
    addiu s0,s0,4
    addiu v0,zero,2
    beq v1,v0,L23bc70
    addiu v0,zero,1
    beq v1,v0,L23bc1c
    nop
    beqz v1,L23bcd4
    addiu v0,s2,1
    b L23bcd0
    nop
L23bc1c:
    .word 0x8e240004
    paddub s3,zero,zero
    addiu s0,s0,4
    beq zero,a0,L23bc40
    addiu s3,s3,4
    jal func_001c0180
    nop
    addiu v0,v0,12
    addu s3,s3,v0
L23bc40:
    .word 0x8e240008
    addu s0,s0,s3
    paddub s3,zero,zero
    beq zero,a0,L23bc68
    addiu s3,s3,4
    jal func_001c0180
    nop
    addiu v0,v0,12
    addu s3,s3,v0
    nop
L23bc68:
    b L23bcd0
    addu s0,s0,s3
L23bc70:
    .word 0x8e240004
    paddub s3,zero,zero
    addiu s0,s0,8
    beq zero,a0,L23bc98
    addiu s3,s3,4
    jal func_001c0180
    nop
    addiu v0,v0,12
    addu s3,s3,v0
    nop
L23bc98:
    b L23bcd0
    addu s0,s0,s3
L23bca0:
    .word 0x8e240000
    paddub s3,zero,zero
    addiu s0,s0,8
    beq zero,a0,L23bcc8
    addiu s3,s3,4
    jal func_001c0180
    nop
    addiu v0,v0,12
    addu s3,s3,v0
    nop
L23bcc8:
    addu s0,s0,s3
    nop
L23bcd0:
    addiu v0,s2,1
L23bcd4:
    addiu s1,s1,64
    andi s2,v0,0xff
    nop
L23bce0:
    andi v0,s2,0xff
    slti v0,v0,2
    bnez v0,L23bbe8
    paddub v0,s0,zero
L23bcf0:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
