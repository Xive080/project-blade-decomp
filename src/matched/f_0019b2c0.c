extern void fn_13b550(void);
extern void fn_195a90(void);
extern void fn_16ea40(void);
extern void fn_1a3fe0(void);
extern void fn_24b540(void);
extern void fn_1b6f70(void);
extern void fn_1b85a0(void);
extern void fn_1784a0(void);
extern void fn_1a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-96
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,18
    paddub s1,a1,zero
    paddub s2,a0,zero
    beq s1,v0,L19b3a8
    paddub s0,a2,zero
    addiu v0,zero,3
    beq s1,v0,L19b358
    nop
    beqz s1,L19b308
    nop
    b L19b4e8
    paddub a0,s2,zero
L19b308:
    .word 0x8f848328
    jal fn_13b550
    addiu a1,zero,132
    .word 0xae420008
    .word 0x3c020031
    addiu v0,v0,23680
    .word 0xae40000c
    .word 0xae420014
    addiu v0,zero,1
    .word 0xae420010
    .word 0x3c020031
    .word 0xae400018
    addiu a0,v0,23680
    addiu a1,zero,132
    jal fn_195a90
    .word 0xae400004
    .word 0x8e420004
    ori v0,v0,0x19
    b L19b4e4
    .word 0xae420004
L19b358:
    jal fn_16ea40
    nop
    .word 0x8f848328
    addiu s3,v0,1
    addiu a1,zero,133
    jal fn_13b550
    .word 0xaf80851c
    paddub a1,s3,zero
    paddub a0,v0,zero
    jal fn_1a3fe0
    paddub a2,zero,zero
    .word 0xafa20050
    addiu v0,zero,1
    addiu a2,sp,80
    addiu a0,zero,18
    .word 0xafa20054
    jal fn_24b540
    paddub a1,zero,zero
    b L19b4e4
    nop
L19b3a8:
    .word 0x8f838514
    addiu v0,zero,2
    beq v1,v0,L19b4b8
    addiu v0,zero,1
    beq v1,v0,L19b408
    nop
    beqz v1,L19b3d0
    nop
    b L19b4e4
    nop
L19b3d0:
    jal fn_16ea40
    nop
    jal fn_1b6f70
    paddub s3,v0,zero
    jal fn_1b85a0
    paddub a0,s3,zero
    addiu v1,zero,4
    beq v0,v1,L19b4e4
    addiu v1,zero,7
    beq v0,v1,L19b4e4
    nop
    addiu v0,zero,1
    b L19b4e4
    .word 0xaf828514
L19b408:
    .word 0xc7818518
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L19b4e4
    nop
    jal fn_16ea40
    nop
    jal fn_1b85a0
    paddub a0,v0,zero
    addiu v1,zero,2
    bne v0,v1,L19b494
    addiu v0,zero,1
    .word 0x8f848328
    addiu a1,zero,135
    jal fn_13b550
    .word 0xaf80851c
    paddub a0,v0,zero
    paddub a1,zero,zero
    jal fn_1a3fe0
    paddub a2,zero,zero
    .word 0xafa20058
    addiu v0,zero,1
    addiu a2,sp,88
    addiu a0,zero,18
    .word 0xafa2005c
    jal fn_24b540
    paddub a1,zero,zero
    addiu v0,zero,2
    .word 0xaf808518
    b L19b4e4
    .word 0xaf828514
L19b494:
    .word 0x3c010031
    .word 0xac227404
    .word 0x3c020031
    addiu v0,v0,29184
    .word 0x3c010031
    .word 0xac227408
    .word 0x3c010031
    b L19b4e4
    .word 0xac20740c
L19b4b8:
    .word 0xc7818518
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L19b4e4
    addiu a0,zero,1
    jal fn_1784a0
    nop
L19b4e4:
    paddub a0,s2,zero
L19b4e8:
    paddub a1,s1,zero
    jal fn_1a3ac0
    paddub a2,s0,zero
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}

