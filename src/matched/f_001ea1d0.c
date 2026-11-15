extern void func_0010a530(void);
extern void func_0011eac8(void);
extern void func_001ea070(void);
extern void func_001ea2c0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s0,a2,zero
    .word 0x8c860000
    addiu v1,s0,15
    addiu v0,zero,-16
    and s0,v1,v0
    paddub s1,a1,zero
    sltu at,a2,s0
    bnez at,L1ea2a0
    paddub s2,a0,zero
    .word 0x8e420010
    bne v0,s1,L1ea24c
    .word 0x8e440008
    .word 0x8e430014
    .word 0x8c820004
    subu a1,s0,v1
    addu v0,v0,a1
    sltu at,v0,a2
    beqz at,L1ea24c
    nop
    .word 0xac820004
    .word 0x8e430014
    paddub v0,s1,zero
    addu v1,v1,a1
    b L1ea2a4
    .word 0xae430014
L1ea24c:
    .word 0x8e420018
    paddub a0,s2,zero
    paddub a1,s0,zero
    jal func_001ea070
    nor a2,v0,zero
    paddub s3,v0,zero
    beqz s3,L1ea2a4
    paddub v0,zero,zero
    paddub a0,s3,zero
    paddub a1,s1,zero
    jal func_0011eac8
    paddub a2,s0,zero
    paddub a0,s2,zero
    jal func_001ea2c0
    paddub a1,s1,zero
    addu v0,s3,s0
    addiu a1,v0,127
    jal func_0010a530
    paddub a0,s3,zero
    b L1ea2a4
    paddub v0,s3,zero
L1ea2a0:
    paddub v0,zero,zero
L1ea2a4:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
