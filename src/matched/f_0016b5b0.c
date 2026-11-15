extern void func_00121728(void);
extern void func_00142aa0(void);
extern void func_00142ad0(void);
extern void func_001cca70(void);
extern void func_00202b70(void);
extern void func_00202ca0(void);
extern void func_00204350(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    paddub s4,a1,zero
    paddub s5,a0,zero
    jal func_00142ad0
    .word 0x7fb00000
    paddub s0,v0,zero
    beqz s0,L16b694
    paddub v0,zero,zero
L16b5e8:
    .word 0x8e110018
    beqz s1,L16b67c
    paddub a1,s0,zero
    paddub a0,s1,zero
    jal func_00202ca0
    paddub s2,zero,zero
    slt at,zero,v0
    beqz at,L16b678
    nop
    nop
    paddub a0,s1,zero
L16b614:
    jal func_00202b70
    paddub a1,s2,zero
    paddub s3,v0,zero
    beqzl s3,L16b660
    addiu s2,s2,1
    jal func_00204350
    paddub a0,s3,zero
    beqz v0,L16b65c
    nop
    jal func_001cca70
    paddub a0,v0,zero
    paddub a0,v0,zero
    jal func_00121728
    paddub a1,s4,zero
    bnez v0,L16b65c
    nop
    b L16b694
    paddub v0,s3,zero
L16b65c:
    addiu s2,s2,1
L16b660:
    jal func_00202ca0
    paddub a0,s1,zero
    slt v0,s2,v0
    bnez v0,L16b614
    paddub a0,s1,zero
    nop
L16b678:
    paddub a1,s0,zero
L16b67c:
    jal func_00142aa0
    paddub a0,s5,zero
    paddub s0,v0,zero
    bnez s0,L16b5e8
    nop
    paddub v0,zero,zero
L16b694:
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}
