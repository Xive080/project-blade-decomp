extern void fn1c3b00(void);
extern void fn1c3b70(void);
extern void fn1c3b80(void);
extern void fn1c3bc0(void);
extern void fn1c7710(void);
extern void fn1c7c70(void);
extern void fn1ce240(void);
extern void fn1ce3f0(void);
extern void fn202b10(void);
extern void fn202b40(void);
extern void fn202b50(void);
asm void func(void) {
.set noreorder
.set noat
    addiu sp,sp,-240
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x70a08e28
    .word 0x7fb00000
    .word 0x70c0a628
    bnez s1,L143294
    .word 0x70e09e28
    b L14342c
    .word 0x70001628
L143294:
    bnez s4,L143344
    nop
    addiu s0,a0,4
    jal fn1c3b80
    .word 0x8c840004
    .word 0x8e040000
    jal fn1c3b70
    .word 0x70409628
    addiu a1,zero,8
L1432b8:
    .word 0x8c440000
    .word 0x8c430004
    addiu a1,a1,-1
    .word 0xae440000
    .word 0xae430004
    addiu v0,v0,8
    bgtz a1,L1432b8
    addiu s2,s2,8
    .word 0x3c023f80
    .word 0xafa200c8
    .word 0xafa200b4
    .word 0xafa200a0
    .word 0xafa000b0
    .word 0xafa000a8
    .word 0xafa000a4
    .word 0xafa000c4
    .word 0xafa000c0
    .word 0xafa000b8
    .word 0xafa000d8
    .word 0xafa000d4
    addiu a0,sp,172
    .word 0xafa000d0
    .word 0x8c830000
    .word 0x3c020002
    ori v0,v0,0x3
    or v0,v1,v0
    .word 0xac820000
    .word 0x8e040000
    jal fn1c3bc0
    addiu s4,sp,160
    jal fn1c3b70
    .word 0x70402628
    .word 0x70402e28
    jal fn1c7710
    .word 0x72802628
L143344:
    .word 0x8e300018
    .word 0x70002e28
    jal fn202b10
    .word 0x72002628
    jal fn202b50
    .word 0x70402628
    .word 0x8e310004
    .word 0x70409628
    jal fn1c3b00
    .word 0x72202628
    jal fn1c3b80
    .word 0x72202628
    .word 0x72002628
    jal fn202b40
    .word 0x70408628
    addiu a1,sp,96
    addiu a0,zero,8
    .word 0x70408e28
L14338c:
    .word 0x8e030000
    .word 0x8e020004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu s0,s0,8
    bgtz a0,L14338c
    addiu a1,a1,8
    addiu a0,sp,96
    addiu a2,zero,2
    jal fn1c7c70
    .word 0x72802e28
    slt at,zero,s1
    beqz at,L143428
    .word 0x70008628
L1433c8:
    .word 0xc6420000
    .word 0xc6410004
    .word 0xc6400008
    addiu a0,sp,224
    addiu a2,zero,1
    addiu a3,sp,96
    .word 0xe4820000
    .word 0xe4810004
    .word 0x70802e28
    jal fn1ce3f0
    .word 0xe4800008
    jal fn1ce240
    addiu a0,sp,224
    .word 0xc6610000
    c.lt.s $f0,$f1
    nop
    bc1fl L14341c
    addiu s0,s0,1
    .word 0xe6600000
    nop
    addiu s0,s0,1
L14341c:
    slt v0,s0,s1
    bnez v0,L1433c8
    addiu s2,s2,12
L143428:
    addiu v0,zero,1
L14342c:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,240
}
