extern void func_001cc990(void);
extern void func_001cc9b0(void);
extern void func_0023dad0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f828990
    paddub s0,a1,zero
    paddub s1,a0,zero
    paddub a1,zero,zero
    addiu v1,zero,4
    addu v0,a0,v0
    .word 0x8c440000
    b L23ce40
    paddub a2,a0,zero
L23ce18:
    .word 0x8cc20030
    bne v0,v1,L23ce34
    addiu v0,a1,1
    andi v0,a1,0xff
    sll v0,v0,0x6
    b L23ce50
    addu s2,a0,v0
L23ce34:
    addiu a2,a2,64
    andi a1,v0,0xff
    nop
L23ce40:
    andi v0,a1,0xff
    slti v0,v0,2
    bnez v0,L23ce18
    paddub s2,zero,zero
L23ce50:
    jal func_001cc990
    paddub a0,s0,zero
    .word 0x8e440000
    beql zero,a0,L23ce74
    paddub a0,s2,zero
    jal func_001cc9b0
    nop
    .word 0xae400000
    paddub a0,s2,zero
L23ce74:
    addiu a1,zero,2
    jal func_0023dad0
    .word 0xae500000
    paddub a0,s2,zero
    jal func_0023dad0
    addiu a1,zero,1
    paddub v0,s1,zero
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
