extern void func_00256438(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-144
    .word 0x7fbf0080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    lw t0,0(a0)
    .word 0x70c08e28
    lw a2,4(a0)
    .word 0x70808628
    .word 0x70001e28
    .word 0x70002e28
    lhu a3,0(t0)
    b L1bac30
    .word 0x70e09628
    addu v0,t0,a1
L1bac00:
    lhu v0,0(v0)
    slt at,a3,v0
    beqz at, L1bac1c
    slt at,v0,s2
    .word 0x70403e28
    nop
    slt at,v0,s2
L1bac1c:
    beqzl at, L1bac2c
    addiu a1,a1,2
    .word 0x70409628
    addiu a1,a1,2
L1bac2c:
    addiu v1,v1,1
L1bac30:
    sltu v0,v1,a2
    bnez v0, L1bac00
    addu v0,t0,a1
    subu v0,a3,s2
    addiu s3,v0,1
    lw v0,8(s0)
    lw v0,0(v0)
    beqz v0, L1bac6c
    .word 0x3c023f80
    .word 0x3c023f00
    ori v0,v0,0x9a34
    .word 0x4482a000
    b L1bac74
    slt at,zero,s3
    .word 0x3c023f80
L1bac6c:
    .word 0x4482a000
    slt at,zero,s3
L1bac74:
    beqz at, L1bada8
    .word 0x7000b628
    addu v0,s6,s2
L1bac80:
    sll v0,v0,0x2
    addu s4,s1,v0
    lbu v0,0(s4)
    bltz v0, L1baca4
    srl v1,v0,0x1
    .word 0x44820000
    b L1bacbc
    .word 0x46800020
    srl v1,v0,0x1
L1baca4:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    .word 0x46800020
    add.s $f0,$f0,$f0
L1bacbc:
    jal func_00256438
    mul.s $f12,$f20,$f0
    sb v0,0(s4)
    lbu v0,1(s4)
    bltz v0, L1bace0
    addiu s5,s4,1
    .word 0x44820000
    b L1bacfc
    .word 0x46800020
L1bace0:
    srl v1,v0,0x1
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    .word 0x46800020
    add.s $f0,$f0,$f0
L1bacfc:
    jal func_00256438
    mul.s $f12,$f20,$f0
    sb v0,0(s5)
    lbu v0,2(s4)
    bltz v0, L1bad20
    addiu s5,s4,2
    .word 0x44820000
    b L1bad3c
    .word 0x46800020
L1bad20:
    srl v1,v0,0x1
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    .word 0x46800020
    add.s $f0,$f0,$f0
L1bad3c:
    jal func_00256438
    mul.s $f12,$f20,$f0
    sb v0,0(s5)
    lbu v0,3(s4)
    bltz v0, L1bad60
    addiu s5,s4,3
    .word 0x44820000
    b L1bad7c
    .word 0x46800060
L1bad60:
    srl v1,v0,0x1
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    .word 0x46800060
    add.s $f1,$f1,$f1
L1bad7c:
    .word 0x3c023f00
    ori v0,v0,0x9a34
    .word 0x44820000
    jal func_00256438
    mul.s $f12,$f0,$f1
    addiu s6,s6,1
    sb v0,0(s5)
    slt v0,s6,s3
    bnez v0, L1bac80
    addu v0,s6,s2
    nop
L1bada8:
    .word 0x72001628
    .word 0x7bbf0080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,144
}
