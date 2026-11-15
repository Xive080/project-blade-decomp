extern void func_001c8470(void);
extern void func_001c84b0(void);
extern void func_001c85a0(void);
extern void func_001c8860(void);
extern void func_001edc80(void);
extern void func_001edef0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x90820022
    paddub s3,a1,zero
    paddub s0,a0,zero
    paddub s1,zero,zero
    andi v0,v0,0x4
    beqz v0,L1ee388
    paddub s2,zero,zero
    addiu s1,zero,1
L1ee388:
    bnez s1,L1ee3ac
    paddub a0,s0,zero
    paddub a1,zero,zero
    jal func_001c8860
    addiu a2,zero,1
    bnez v0,L1ee3ac
    paddub v0,zero,zero
    b L1ee474
    .word 0x7bbf0040
L1ee3ac:
    .word 0x92020023
    andi v0,v0,0x60
    beqz v0,L1ee3f0
    nop
    .word 0x92020022
    andi v0,v0,0x10
    beqz v0,L1ee3d0
    nop
    addiu s2,zero,1
L1ee3d0:
    bnez s2,L1ee3f0
    paddub a0,s0,zero
    jal func_001c85a0
    addiu a1,zero,1
    bnez v0,L1ee3f0
    paddub v0,zero,zero
    b L1ee470
    nop
L1ee3f0:
    .word 0x92030023
    addiu v0,zero,32
    andi v1,v1,0x60
    andi v1,v1,0xff
    beq v1,v0,L1ee41c
    paddub a1,s3,zero
    addiu v0,zero,64
    beq v1,v0,L1ee420
    paddub a0,s0,zero
    b L1ee430
    paddub a1,s3,zero
L1ee41c:
    paddub a0,s0,zero
L1ee420:
    jal func_001edc80
    nop
    b L1ee43c
    paddub s3,v0,zero
L1ee430:
    jal func_001edef0
    paddub a0,s0,zero
    paddub s3,v0,zero
L1ee43c:
    .word 0x92020023
    andi v0,v0,0x60
    beqz v0,L1ee45c
    nop
    bnez s2,L1ee45c
    paddub a0,s0,zero
    jal func_001c84b0
    nop
L1ee45c:
    bnez s1,L1ee470
    paddub v0,s3,zero
    jal func_001c8470
    paddub a0,s0,zero
    paddub v0,s3,zero
L1ee470:
    .word 0x7bbf0040
L1ee474:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
