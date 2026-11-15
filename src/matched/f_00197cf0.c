extern void func_0011ec80(void);
extern void func_00197580(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    paddub s2,a0,zero
    .word 0x3c020031
    .word 0x7fb10010
    addiu a0,v0,21584
    addiu a2,zero,304
    paddub a1,zero,zero
    jal func_0011ec80
    .word 0x7fb00000
    .word 0x3c020031
    addiu s1,v0,21584
    paddub s0,zero,zero
L197d28:
    mtc1 zero,$f12
    paddub a0,s0,zero
    paddub a1,zero,zero
    jal func_00197580
    paddub a2,zero,zero
    paddub a2,zero,zero
    .word 0x3c033e19
    .word 0x3c053f00
    ori a0,v1,0x999a
    sll v1,a2,0x2
L197d50:
    addu v1,v1,a2
    sll v1,v1,0x2
    addu v1,s1,v1
    .word 0xac650014
    addiu a3,v1,8
    .word 0xac640018
    .word 0x8c63000c
    beqzl v1,L197d7c
    addiu a2,a2,1
    .word 0xace40008
    addiu a2,a2,1
L197d7c:
    sltiu v1,a2,7
    bnez v1,L197d50
    sll v1,a2,0x2
    addiu s0,s0,1
    sltiu v1,s0,2
    bnez v1,L197d28
    addiu s1,s1,148
    beqz s2,L197db0
    nop
    .word 0xc6400000
    .word 0x3c010031
    b L197db8
    .word 0xe4205578
L197db0:
    .word 0x3c010031
    .word 0xac205578
L197db8:
    .word 0x3c010031
    .word 0xc4205578
    .word 0x3c010031
    .word 0xe420557c
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
