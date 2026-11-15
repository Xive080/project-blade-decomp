extern void func_0019f7d0(void);
extern void func_0013b550(void);
extern void func_00195820(void);
extern void func_00195a90(void);
extern void func_00174ac0(void);
extern void func_001a3ac0(void);
extern void func_0024b540(void);
extern void func_0024b4b0(void);
asm void func(void) {
    .set noreorder
    .set noat
    j func_0019f7d0
    addiu a3,zero,1
    nop
    nop
    j func_0019f7d0
    paddub a3,zero,zero
    nop
    nop
    .word 0x27bdfeb0
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v1,zero,2
    paddub s1,a1,zero
    paddub s2,a0,zero
    beq s1,v1,L19f8b4
    paddub s0,a2,zero
    beqz s1,L19f80c
    addiu v0,zero,1
    b L19f930
    paddub a2,s0,zero
    addiu v0,zero,1
L19f80c:
    beq a3,v0,L19f834
    addiu a1,zero,74
    beqz a3,L19f828
    addiu a1,zero,73
    b L19f840
    paddub v0,zero,zero
    addiu a1,zero,73
L19f828:
    b L19f84c
    .word 0x8f848328
    addiu a1,zero,74
L19f834:
    b L19f848
    nop
    paddub v0,zero,zero
L19f840:
    b L19fa64
    .word 0x7bbf0030
L19f848:
    .word 0x8f848328
L19f84c:
    jal func_0013b550
    nop
    .word 0xae420008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,72
    .word 0xae42000c
    .word 0x3c020031
    .word 0x24426160
    .word 0xae420014
    addiu v0,zero,2
    .word 0xae420010
    .word 0x3c020031
    .word 0x24446160
    .word 0xae400018
    addiu a1,zero,75
    jal func_00195820
    .word 0xae400004
    .word 0x3c020031
    .word 0x24446180
    jal func_00195a90
    addiu a1,zero,76
    .word 0x8e420004
    ori v0,v0,0x10
    b L19f92c
    .word 0xae420004
L19f8b4:
    addiu v0,zero,1
    .word 0x3c010031
    beq a3,v0,L19f8e0
    .word 0xac276170
    beqz a3,L19f8d4
    nop
    b L19f8ec
    paddub a0,a3,zero
L19f8d4:
    .word 0x3c010031
    b L19f8e8
    .word 0xac226174
L19f8e0:
    .word 0x3c010031
    .word 0xac236174
L19f8e8:
    paddub a0,a3,zero
L19f8ec:
    jal func_00174ac0
    nop
    beqz v0,L19f918
    nop
    .word 0x3c010031
    .word 0x8c226168
    dsll32 v0,v0,0x0
    dsrl32 v0,v0,0x0
    .word 0x3c010031
    b L19f92c
    .word 0xac226168
L19f918:
    .word 0x3c010031
    .word 0x8c226168
    ori v0,v0,0x1
    .word 0x3c010031
    .word 0xac226168
L19f92c:
    paddub a2,s0,zero
L19f930:
    paddub a0,s2,zero
    jal func_001a3ac0
    paddub a1,s1,zero
    bnez v0,L19f950
    addiu v0,zero,6
    b L19fa60
    paddub v0,zero,zero
    addiu v0,zero,6
L19f950:
    beq s1,v0,L19f978
    nop
    addiu v0,zero,5
    beq s1,v0,L19f978
    nop
    addiu v0,zero,3
    beq s1,v0,L19f978
    nop
    b L19fa60
    addiu v0,zero,1
L19f978:
    .word 0x8e430018
    addiu v0,zero,1
    bne v1,v0,L19fa54
    addiu a0,zero,10
    .word 0x3c02002e
    .word 0x24452120
    .word 0x27a40040
    addiu v1,zero,15
L19f998:
    .word 0x78a20000
    .word 0x2463ffff
    .word 0x7c820000
    .word 0x24a50010
    .word 0x24840010
    bgtz v1,L19f998
    nop
    .word 0xdca30000
    .word 0xc4a20008
    .word 0xfc830000
    .word 0xe4820008
    .word 0x8f848328
    addiu a1,zero,78
    jal func_0013b550
    .word 0xaf80851c
    .word 0x8f848328
    addiu a1,zero,77
    jal func_0013b550
    .word 0xafa20054
    .word 0x27b10040
    .word 0xafa20058
    paddub s0,zero,zero
L19f9f0:
    .word 0x8f848328
    jal func_0013b550
    .word 0x26050057
    .word 0xae220030
    .word 0x8f848328
    jal func_0013b550
    .word 0x2605004f
    .word 0x26100001
    .word 0xae220034
    sltiu v0,s0,8
    bnez v0,L19f9f0
    .word 0x2631001c
    .word 0xdf8584d8
    .word 0x27a60148
    addiu v1,zero,9
    .word 0x27a20040
    .word 0xfcc50000
    .word 0xafa30148
    addiu a0,zero,10
    .word 0xafa2014c
    jal func_0024b540
    paddub a1,zero,zero
    b L19fa5c
    nop
    addiu a0,zero,10
L19fa54:
    jal func_0024b4b0
    paddub a1,zero,zero
L19fa5c:
    addiu v0,zero,1
L19fa60:
    .word 0x7bbf0030
L19fa64:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0150
}
