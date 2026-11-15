extern void func_0013b550(void);
extern void func_0016f130(void);
extern void func_00170ce0(void);
extern void func_001b4ab0(void);
extern void func_001ba140(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x3c020033
    addiu s1,v0,-26768
    .word 0x3c020030
    .word 0x7fb00000
    .word 0x3c017000
    .word 0x8c303fd4
    addiu s2,v0,29208
    jal func_00170ce0
    addiu a0,zero,-17
    .word 0x3c020033
    addiu a0,v0,-26768
    jal func_001ba140
    addiu a1,zero,7
    addiu v0,zero,8
    .word 0xae420000
    .word 0x3c010033
    .word 0x9024a578
    paddub s3,zero,zero
    .word 0x3c010033
    .word 0x9023a579
    .word 0x3c010033
    .word 0x9022a57a
    addu v1,a0,v1
    addu v1,v0,v1
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s2,v0
    b L249518
    addiu s2,v0,4
L2494a0:
    .word 0x92260e08
    .word 0x92230e09
    .word 0x92220e0a
    .word 0x3c010030
    .word 0x9024a61f
    paddub a1,s3,zero
    addu v1,a2,v1
    addu v0,v0,v1
    addu v1,s3,v0
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x4
    jal func_001b4ab0
    addu s4,s1,v0
    beqzl v0,L249514
    addiu s2,s2,24
    .word 0x8e420000
    ori v0,v0,0x2
    .word 0xae420000
    .word 0x8e820004
    bnez v0,L249510
    nop
    .word 0x3c020025
    addiu a1,v0,-25616
    paddub a2,s4,zero
    jal func_0016f130
    .word 0x3c0400ac
    nop
L249510:
    addiu s2,s2,24
L249514:
    addiu s3,s3,1
L249518:
    .word 0x92220e0b
    slt v0,s3,v0
    bnez v0,L2494a0
    nop
    addiu v0,zero,5
    .word 0xae02000c
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,521
    .word 0x8f8484ac
    beqz a0,L249554
    paddub a2,v0,zero
    .word 0x8c820010
    jalr ra,v0
    addiu a1,zero,8
L249554:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
