extern void func_001c2a00(void);
extern void func_00202590(void);
extern void func_002025f0(void);
extern void func_00204360(void);
extern void func_00204390(void);
extern void func_002082e0(void);
extern void func_00208310(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c020024
    addiu a2,v0,-20432
    addiu sp,sp,-16
    .word 0x3c020024
    .word 0x7fbf0000
    paddub a0,zero,zero
    addiu a1,zero,288
    jal func_001c2a00
    addiu a3,v0,-20544
    bgez v0,L23c374
    .word 0x3c020024
    b L23c4a4
    paddub v0,zero,zero
L23c374:
    addiu a2,v0,-20288
    .word 0x3c020024
    addiu a3,v0,-20000
    .word 0x3c020024
    addiu a0,zero,4
    addiu a1,zero,288
    jal func_00204360
    addiu t0,v0,-19872
    addiu v1,gp,-30320
    .word 0xac620000
    .word 0x8c620000
    bgez v0,L23c3b0
    .word 0x3c020024
    b L23c4a4
    paddub v0,zero,zero
L23c3b0:
    addiu a1,v0,-18528
    .word 0x3c020024
    addiu a2,v0,-19232
    .word 0x3c020024
    addiu a0,zero,288
    jal func_00204390
    addiu a3,v0,-17504
    bgez v0,L23c3dc
    .word 0x3c020024
    b L23c4a4
    paddub v0,zero,zero
L23c3dc:
    addiu a2,v0,-17136
    .word 0x3c020024
    addiu a3,v0,-17104
    .word 0x3c020024
    addiu a0,zero,4
    addiu a1,zero,288
    jal func_00202590
    addiu t0,v0,-17072
    addiu v1,gp,-30316
    .word 0xac620000
    .word 0x8c620000
    bgez v0,L23c418
    .word 0x3c020024
    b L23c4a4
    paddub v0,zero,zero
L23c418:
    addiu a1,v0,-16944
    .word 0x3c020024
    addiu a2,v0,-17008
    .word 0x3c020024
    addiu a0,zero,288
    jal func_002025f0
    addiu a3,v0,-16832
    bgez v0,L23c444
    .word 0x3c020024
    b L23c4a4
    paddub v0,zero,zero
L23c444:
    addiu a2,v0,-16816
    .word 0x3c020024
    addiu a3,v0,-16784
    .word 0x3c020024
    addiu a0,zero,4
    addiu a1,zero,288
    jal func_002082e0
    addiu t0,v0,-16752
    addiu v1,gp,-30312
    .word 0xac620000
    .word 0x8c620000
    bgez v0,L23c480
    .word 0x3c020024
    b L23c4a4
    paddub v0,zero,zero
L23c480:
    addiu a1,v0,-16624
    .word 0x3c020024
    addiu a2,v0,-16688
    .word 0x3c020024
    addiu a0,zero,288
    jal func_00208310
    addiu a3,v0,-16512
    slt v0,v0,zero
    xori v0,v0,0x1
L23c4a4:
    .word 0x7bbf0000
    jr ra
    addiu sp,sp,16
}
