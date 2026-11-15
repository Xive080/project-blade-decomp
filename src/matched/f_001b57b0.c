extern void func_00121a58(void);
extern void func_00114200(void);
extern void func_00114200(void);
extern void func_00121a58(void);
asm void f(void) {
    .set noreorder
    .set noat
    sll v0,a0,0x3
    subu v0,v0,a0
    sll a2,v0,0x5
    .word 0x3c020032
    addiu sp,sp,-48
    addiu v0,v0,32112
    .word 0x7fbf0020
    addu a0,v0,a2
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x00801821
    paddub s0,zero,zero
L1b57e0:
    .word 0xc460005c
    c.le.s $f12,$f0
    nop
    bc1tl L1b5890
    addiu s0,s0,1
    sltiu at,s0,7
    beqz at,L1b5850
    addiu v0,zero,7
    addiu v1,a0,196
L1b5804:
    .word 0xc4630030
    .word 0xc4620034
    .word 0xc4610038
    .word 0xc460003c
    addiu v0,v0,-1
    sltu at,s0,v0
    .word 0xe463004c
    .word 0xe4620050
    .word 0xe4610054
    .word 0xe4600058
    .word 0xc4620040
    .word 0xc4610044
    .word 0xc4600048
    .word 0xe462005c
    .word 0xe4610060
    .word 0xe4600064
    bnez at,L1b5804
    addiu v1,v1,-28
    nop
L1b5850:
    .word 0x3c020032
    addiu v0,v0,32204
    addu v1,v0,a2
    sll v0,s0,0x3
    subu v0,v0,s0
    sll a2,v0,0x2
    addu s1,a0,a2
    addu v0,a2,v1
    addiu a0,s1,76
    jal func_00121a58
    .word 0xe44c0000
    jal func_00114200
    addiu a0,s1,96
    b L1b58a4
    paddub v0,s0,zero
    addiu s0,s0,1
L1b5890:
    sltiu v0,s0,8
    bnez v0,L1b57e0
    addiu v1,v1,28
    nop
    paddub v0,s0,zero
L1b58a4:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
