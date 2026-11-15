extern void func_001e9ae0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f8287a0
    bnez v0,L1e9d18
    .word 0x3c020033
    b L1e9db8
    paddub v0,zero,zero
L1e9d18:
    addiu a0,v0,-4944
    .word 0x8c830060
    .word 0x3c020033
    addiu s1,v0,-2960
    .word 0x3c020033
    addiu s0,v0,-2976
    andi v0,v1,0x1ff
    sll v0,v0,0xb
    .word 0xae220004
    .word 0x8c8201d0
    andi v0,v0,0x1ff
    sll v0,v0,0xb
    jal func_001e9ae0
    .word 0xae020004
    addiu s2,gp,-30912
    jal func_001e9ae0
    .word 0xae420000
    addiu a2,gp,-30908
    .word 0xacc20000
    .word 0x8f828748
    andi v0,v0,0x1
    beqz v0,L1e9d7c
    paddub a1,s1,zero
    b L1e9d80
    paddub a1,s0,zero
L1e9d7c:
    paddub s1,s0,zero
L1e9d80:
    .word 0x8e430000
    addiu a3,gp,-30852
    addiu v0,zero,1
    .word 0xaca30000
    .word 0x8e440000
    .word 0x8ce30000
    addu v1,a0,v1
    .word 0xac650058
    .word 0x8cc30000
    .word 0xae230000
    .word 0x8cc40000
    .word 0x8ce30000
    addu v1,a0,v1
    .word 0xac710058
L1e9db8:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
