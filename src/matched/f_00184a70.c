extern void func_0011eac8(void);
extern void func_00184c90(void);
extern void func_00186570(void);
extern void func_00186970(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-560
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8ca20000
    .word 0x70a0a628
    .word 0x70c09e28
    addiu a2,s4,4
    addiu a3,zero,4
    addiu t1,sp,96
    addiu a1,a0,8
    jal func_00184c90
    sltu t0,zero,v0
    .word 0x8fa40124
    bnez a0,L184af8
    addiu v1,zero,1
    .word 0x8e630000
    bnez v1,L184ad8
    nop
    jal func_00186970
    .word 0x72802628
    b L184c6c
    .word 0x7bbf0050
L184ad8:
    .word 0x8c620080
    addiu a2,s3,4
    addiu a0,v1,60
    jalr ra,v0
    .word 0x72802e28
    b L184c68
    nop
    addiu v1,zero,1
L184af8:
    bne a0,v1,L184c68
    nop
    addiu s0,sp,128
    addiu s1,sp,340
L184b08:
    addiu s2,sp,288
    .word 0x8e430000
    addiu v0,zero,3
    bne v1,v0,L184bb4
    nop
    .word 0x8e870000
    addiu v1,sp,96
    addiu v0,sp,452
    addiu a0,sp,484
    .word 0xafa701c0
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    addiu a2,zero,64
    .word 0x72002e28
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0xc4630010
    .word 0xc4620014
    .word 0xc4610018
    .word 0xc460001c
    .word 0xe4430010
    .word 0xe4420014
    .word 0xe4410018
    jal func_0011eac8
    .word 0xe440001c
    .word 0x8e630000
    bnez v1,L184b98
    nop
    jal func_00186570
    addiu a0,sp,448
    b L184c68
    nop
L184b98:
    .word 0x8c620084
    addiu a2,s3,4
    addiu a0,v1,60
    jalr ra,v0
    addiu a1,sp,448
    b L184c68
    nop
L184bb4:
    .word 0x8e870000
    addiu v1,sp,96
    addiu v0,sp,308
    addiu a2,zero,96
    .word 0xafa70130
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0x72202628
    .word 0x72002e28
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0xc4630010
    .word 0xc4620014
    .word 0xc4610018
    .word 0xc460001c
    .word 0xe4430010
    .word 0xe4420014
    .word 0xe4410018
    jal func_0011eac8
    .word 0xe440001c
    .word 0x8e620000
    bnez v0,L184c34
    addiu a0,v0,60
    jal func_00186970
    addiu a0,sp,304
    b L184c4c
    .word 0x8e430000
    addiu a0,v0,60
L184c34:
    .word 0x8c420080
    addiu a1,sp,304
    jalr ra,v0
    addiu a2,s3,4
    nop
    .word 0x8e430000
L184c4c:
    addiu v1,v1,-2
    .word 0xae430000
    .word 0x8e430000
    slti at,v1,3
    beqz at,L184b08
    addiu s0,s0,64
    nop
L184c68:
    .word 0x7bbf0050
L184c6c:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,560
}
