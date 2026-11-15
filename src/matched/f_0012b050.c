extern void func_001bf2b0(void);
extern void func_001ca2d0(void);
extern void func_0012b360(void);
extern void func_00148900(void);
extern void func_00148000(void);
extern void func_00145450(void);
extern void func_00147e20(void);
extern void func_00147d50(void);
extern void func_00147490(void);
extern void func_00128fa0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-224
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    paddub s7,a1,zero
    .word 0x7fb20020
    .word 0x7fb10010
    addiu a1,sp,144
    paddub s6,a0,zero
    jal func_001bf2b0
    .word 0x7fb00000
    addiu a1,sp,216
    addiu a2,zero,2
    jal func_001ca2d0
    paddub a0,s6,zero
    .word 0x93a200d9
    .word 0x93a300d8
    sll v0,v0,0x8
    addu s2,v1,v0
    slt at,zero,s2
    beqz at,L12b330
    .word 0x70008628
    addiu a1,sp,208
L12b0b8:
    addiu a2,zero,4
    jal func_001ca2d0
    paddub a0,s6,zero
    .word 0x8fa500d0
    andi v0,a1,0x1
    beqz v0,L12b0e0
    .word 0xafa000d4
    .word 0x8fa200d4
    ori v0,v0,0x4
    .word 0xafa200d4
L12b0e0:
    andi v0,a1,0x2
    beqz v0,L12b0fc
    andi v0,a1,0x4
    .word 0x8fa200d4
    ori v0,v0,0x2
    .word 0xafa200d4
    andi v0,a1,0x4
L12b0fc:
    beqz v0,L12b138
    nop
    .word 0x8fa300d4
    andi v0,a1,0x80
    ori v1,v1,0x1
    beqz v0,L12b128
    .word 0xafa300d4
    jal func_0012b360
    addiu a0,sp,212
    b L12b13c
    .word 0x8fa200d0
L12b128:
    .word 0x8fa200d4
    ori v0,v0,0x400
    .word 0xafa200d4
    nop
L12b138:
    .word 0x8fa200d0
L12b13c:
    andi v0,v0,0x8
    beqz v0,L12b15c
    addiu a1,sp,220
    .word 0x8fa300d4
    .word 0x3c028000
    or v0,v1,v0
    .word 0xafa200d4
    addiu a1,sp,220
L12b15c:
    addiu a2,zero,2
    jal func_001ca2d0
    paddub a0,s6,zero
    .word 0x93a200dd
    .word 0x93a300dc
    .word 0x8fa400d0
    sll v0,v0,0x8
    addu s3,v1,v0
    andi v0,a0,0x10
    beqz v0,L12b1ac
    nop
    andi v0,a0,0x27
    bnez v0,L12b1ac
    nop
    .word 0x8fa500d4
    addiu a0,zero,2
    jal func_00148900
    paddub a2,s3,zero
    b L12b1c0
    paddub s4,v0,zero
L12b1ac:
    .word 0x8fa500d4
    addiu a0,zero,1
    jal func_00148900
    paddub a2,s3,zero
    paddub s4,v0,zero
L12b1c0:
    bnez s4,L12b1d4
    slt at,zero,s3
    b L12b334
    .word 0x70001628
    slt at,zero,s3
L12b1d4:
    beqz at,L12b278
    .word 0x70008e28
    nop
    addiu a1,sp,160
L12b1e4:
    addiu a2,zero,12
    jal func_001ca2d0
    paddub a0,s6,zero
    .word 0x44910000
    addiu a1,sp,160
    cvt.s.w $f12,$f0
    addiu a3,zero,4
    paddub a0,s4,zero
    jal func_00148000
    .word 0x70003628
    paddub s5,v0,zero
    .word 0x8fa200d0
    andi v0,v0,0x10
    beqzl v0,L12b26c
    addiu s1,s1,1
    addiu a1,sp,176
    addiu a2,zero,12
    jal func_001ca2d0
    paddub a0,s6,zero
    addiu a1,sp,192
    addiu a2,zero,12
    jal func_001ca2d0
    paddub a0,s6,zero
    .word 0x8e820000
    andi v0,v0,0x2
    beqz v0,L12b268
    nop
    addiu a2,sp,176
    addiu a3,sp,192
    paddub a1,s5,zero
    jal func_00145450
    paddub a0,s4,zero
    nop
L12b268:
    addiu s1,s1,1
L12b26c:
    slt v0,s1,s3
    bnez v0,L12b1e4
    addiu a1,sp,160
L12b278:
    .word 0x8e82000c
    .word 0x3c038000
    and v0,v0,v1
    bnez v0,L12b30c
    paddub a0,s4,zero
    jal func_00147e20
    paddub a0,s4,zero
    paddub s1,v0,zero
    jal func_00147d50
    paddub a0,s4,zero
    beqz s1,L12b308
    nop
    beqz v0,L12b308
    nop
    .word 0xc6210000
    .word 0xc4400000
    c.eq.s $f1,$f0
    nop
    bc1f L12b308
    nop
    .word 0xc6210004
    .word 0xc4400004
    c.eq.s $f1,$f0
    nop
    bc1f L12b308
    nop
    .word 0xc6210008
    .word 0xc4400008
    c.eq.s $f1,$f0
    nop
    bc1f L12b308
    nop
    .word 0x8e83000c
    .word 0x3c028000
    or v0,v1,v0
    .word 0xae82000c
L12b308:
    paddub a0,s4,zero
L12b30c:
    jal func_00147490
    nop
    paddub a1,s4,zero
    jal func_00128fa0
    paddub a0,s7,zero
    addiu s0,s0,1
    slt v0,s0,s2
    bnez v0,L12b0b8
    addiu a1,sp,208
L12b330:
    addiu v0,zero,1
L12b334:
    .word 0x7bbf0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,224
}


