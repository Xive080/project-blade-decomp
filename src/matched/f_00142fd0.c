extern void func_001c3b80(void);
extern void func_001c3b70(void);
extern void func_001c3bc0(void);
extern void func_001c7710(void);
extern void func_00202b10(void);
extern void func_00202b50(void);
extern void func_001c3b00(void);
extern void func_00202b40(void);
extern void func_001c7c70(void);
extern void func_001ce3f0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-240
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    paddub s1,a1,zero
    .word 0x7fb00000
    paddub s4,a2,zero
    bnez s1,L143004
    paddub s3,a3,zero
    b L143234
    paddub v0,zero,zero
L143004:
    bnez s4,L1430b4
    nop
    addiu s0,a0,4
    jal func_001c3b80
    .word 0x8c840004
    .word 0x8e040000
    jal func_001c3b70
    paddub s2,v0,zero
    addiu a1,zero,8
L143028:
    .word 0x8c440000
    .word 0x8c430004
    addiu a1,a1,-1
    .word 0xae440000
    .word 0xae430004
    addiu v0,v0,8
    bgtz a1,L143028
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
    jal func_001c3bc0
    addiu s4,sp,160
    jal func_001c3b70
    paddub a0,v0,zero
    paddub a1,v0,zero
    jal func_001c7710
    paddub a0,s4,zero
L1430b4:
    .word 0x8e300018
    paddub a1,zero,zero
    jal func_00202b10
    paddub a0,s0,zero
    jal func_00202b50
    paddub a0,v0,zero
    .word 0x8e310004
    paddub s2,v0,zero
    jal func_001c3b00
    paddub a0,s1,zero
    jal func_001c3b80
    paddub a0,s1,zero
    paddub a0,s0,zero
    jal func_00202b40
    paddub s0,v0,zero
    addiu a1,sp,96
    addiu a0,zero,8
    paddub s1,v0,zero
L1430fc:
    .word 0x8e030000
    .word 0x8e020004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu s0,s0,8
    bgtz a0,L1430fc
    addiu a1,a1,8
    addiu a0,sp,96
    addiu a2,zero,2
    jal func_001c7c70
    paddub a1,s4,zero
    slt at,zero,s1
    beqz at,L143230
    paddub s0,zero,zero
L143138:
    .word 0xc6420000
    .word 0xc6410004
    .word 0xc6400008
    addiu a0,sp,224
    addiu a2,zero,1
    addiu a3,sp,96
    .word 0xe4820000
    .word 0xe4810004
    paddub a1,a0,zero
    jal func_001ce3f0
    .word 0xe4800008
    .word 0xc7a100e0
    .word 0xc6600000
    c.le.s $f1,$f0
    nop
    bc1t L143180
    nop
    .word 0xe6610000
L143180:
    .word 0xc7a100e0
    .word 0xc660000c
    c.lt.s $f1,$f0
    nop
    bc1f L1431a4
    addiu v0,sp,228
    .word 0xe661000c
    nop
    addiu v0,sp,228
L1431a4:
    .word 0xc6600004
    .word 0xc4410000
    c.le.s $f1,$f0
    nop
    bc1t L1431c0
    nop
    .word 0xe6610004
L1431c0:
    .word 0xc4410000
    .word 0xc6600010
    c.lt.s $f1,$f0
    nop
    bc1f L1431e4
    addiu v0,sp,232
    .word 0xe6610010
    nop
    addiu v0,sp,232
L1431e4:
    .word 0xc6600008
    .word 0xc4410000
    c.le.s $f1,$f0
    nop
    bc1t L143200
    nop
    .word 0xe6610008
L143200:
    .word 0xc4410000
    .word 0xc6600014
    c.lt.s $f1,$f0
    nop
    bc1fl L143224
    addiu s0,s0,1
    .word 0xe6610014
    nop
    addiu s0,s0,1
L143224:
    slt v0,s0,s1
    bnez v0,L143138
    addiu s2,s2,12
L143230:
    addiu v0,zero,1
L143234:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,240
}
