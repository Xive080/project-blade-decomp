extern void func_00121a58(void);
extern void func_00121b70(void);
extern void func_0016fdd0(void);
asm void func_001566d0(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    paddub s5,a0,zero
    paddub a0,a1,zero
    .word 0x7fb10010
    addiu a1,zero,1
    addiu s2,zero,128
    addiu s3,zero,-1
    paddub a2,zero,zero
    jal func_0016fdd0
    .word 0x7fb00000
    paddub s0,v0,zero
    paddub s1,zero,zero
    b L156748
    paddub s4,zero,zero
L15671c:
    .word 0x8e020004
    jal func_00121b70
    addu a0,v0,s4
    slt at,v0,s2
    beqzl at,L156744
    addiu s4,s4,20
    paddub s2,v0,zero
    paddub s3,s1,zero
    nop
    addiu s4,s4,20
L156744:
    addiu s1,s1,1
L156748:
    .word 0x8e020000
    sltu v0,s1,v0
    bnez v0,L15671c
    nop
    .word 0x8e020004
    sll v1,s3,0x2
    addu v1,v1,s3
    sll v1,v1,0x2
    addiu a0,s5,984
    jal func_00121a58
    addu a1,v0,v1
    jal func_00121b70
    addiu a0,s5,984
    addiu v1,zero,983
    addu v1,s5,v1
    addu v0,v1,v0
    .word 0x80420000
    slti v0,v0,49
    bnez v0,L1567c8
    addiu v0,s5,984
    jal func_00121b70
    addiu a0,s5,984
    addu v0,v0,s5
    .word 0x804203d7
    slti at,v0,58
    beqz at,L1567c4
    nop
    jal func_00121b70
    addiu a0,s5,984
    addu v0,v0,s5
    .word 0xa04003d7
L1567c4:
    addiu v0,s5,984
L1567c8:
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
