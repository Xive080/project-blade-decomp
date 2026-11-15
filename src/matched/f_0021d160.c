extern void func_00204160(void);
extern void func_002042f0(void);
extern void func_002047f0(void);
extern void func_002055b0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,gp,-30592
    .word 0xaca20010
    .word 0x3c020033
    addiu v0,v0,1728
    .word 0xaca2000c
    .word 0x8ca2000c
    addiu v1,zero,1
    paddub s0,a0,zero
    paddub s2,a1,zero
    .word 0xa4430004
    .word 0x8ca2000c
    .word 0xa4400006
    .word 0x8c83002c
    .word 0x8ca2000c
    .word 0xac430008
    .word 0x8ca2000c
    .word 0xac40000c
    .word 0x8ca2000c
    .word 0xac400000
    .word 0x8ca4000c
    jal func_002055b0
    .word 0x8e050024
    .word 0x8e030028
    bnez v1,L21d1e8
    nop
    .word 0x8e44000c
    .word 0x8c830000
    ori v1,v1,0x100
    .word 0xac830000
L21d1e8:
    .word 0x8e430010
    addiu a2,zero,1
    addiu s1,gp,-30596
    .word 0xac660000
    .word 0x8e430010
    .word 0xac600004
    .word 0x8e230000
    bnez v1,L21d26c
    nop
    .word 0xc7808258
    .word 0x3c02002e
    addiu a0,v0,26352
    addiu a1,sp,76
    .word 0x3c020033
    addiu s0,v0,1600
    .word 0xe4a00000
    .word 0xdc820000
    .word 0xc4800008
    addiu v1,sp,64
    paddub a1,zero,zero
    .word 0xfc620000
    .word 0xe4600008
    paddub a0,s0,zero
    jal func_002042f0
    .word 0xa6060018
    paddub a0,s0,zero
    jal func_002047f0
    addiu a1,sp,76
    paddub a0,s0,zero
    jal func_00204160
    addiu a1,sp,64
    addiu v1,zero,1
    .word 0xae230000
L21d26c:
    .word 0x8e440000
    .word 0x3c030033
    addiu a1,v1,1600
    .word 0x8c830018
    .word 0xaca30008
    .word 0x8e43000c
    .word 0xac650018
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
