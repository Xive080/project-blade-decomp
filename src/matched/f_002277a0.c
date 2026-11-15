extern void func_0011eac8(void);
extern void func_00228b10(void);
extern void func_00243290(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,1
    .word 0x70c08e28
    .word 0x70809e28
    .word 0x70a09628
    bne s1,v0,L2277e4
    .word 0x70e08628
    .word 0xc6010004
    .word 0xc6400150
    sub.s $f0,$f0,$f1
    .word 0xe6400150
L2277e4:
    sltiu at,s1,8
    beqz at,L227cb4
    .word 0x72602628
    .word 0x3c02002f
    addiu v1,v0,2784
    sll v0,s1,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0x8e630154
    addiu a0,zero,1
    xor v0,v1,zero
    sltiu v0,v0,1
    bnez v0,L22782c
    .word 0x70802e28
    xori v0,v1,0x3
    sltiu v0,v0,1
L22782c:
    bnez v0,L227844
    nop
    addiu v0,zero,1
    beq v1,v0,L227844
    nop
    .word 0x70002e28
L227844:
    bnez a1,L22785c
    nop
    addiu v0,zero,4
    beq v1,v0,L22785c
    nop
    .word 0x70002628
L22785c:
    beqz a0,L227cb0
    nop
    .word 0x8e63000c
    addiu v0,zero,8
    bne v1,v0,L227cb0
    nop
    .word 0x3c024170
    .word 0x44821800
    .word 0x8e63013c
    .word 0x3c023f80
    .word 0x44820800
    .word 0x8e640130
    .word 0x3c017000
    .word 0xc6620150
    sll v0,v1,0x4
    .word 0xc4203fb0
    addu v0,v0,a0
    .word 0xc444000c
    add.s $f3,$f3,$f4
    sub.s $f2,$f2,$f3
    add.s $f1,$f1,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L227cb0
    nop
    .word 0x8c460004
    .word 0x72602628
    jal func_00228b10
    .word 0x72402e28
    beqz v0,L227cb0
    nop
    .word 0x8e430000
    addiu a0,zero,1
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s3
    .word 0xac440038
    b L227cb0
    .word 0xae640144
    .word 0x8e440000
    addiu v0,zero,1
    sll v1,a0,0x4
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v1,s3
    addiu a0,v1,68
    .word 0x8c630044
    bne v1,v0,L22792c
    nop
    b L227cb0
    .word 0xac800000
L22792c:
    .word 0x8e630154
    addiu v0,zero,2
    bne v1,v0,L2279d0
    nop
    .word 0x8e63000c
    addiu v0,zero,8
    bne v1,v0,L2279d0
    nop
    .word 0x3c024170
    .word 0x44821800
    .word 0x8e63013c
    .word 0x3c023f80
    .word 0x44820800
    .word 0x8e640130
    .word 0x3c017000
    .word 0xc6620150
    sll v0,v1,0x4
    .word 0xc4203fb0
    addu v0,v0,a0
    .word 0xc444000c
    add.s $f3,$f3,$f4
    sub.s $f2,$f2,$f3
    add.s $f1,$f1,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L2279d0
    nop
    .word 0x8c460004
    .word 0x72602628
    jal func_00228b10
    .word 0x72402e28
    beqz v0,L2279d0
    nop
    .word 0x8e430000
    addiu a0,zero,1
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s3
    .word 0xac440038
    .word 0xae640144
L2279d0:
    .word 0x8e430000
    addiu a1,s2,512
    addiu a2,zero,30
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s3,v0
    addiu s4,v0,56
    jal func_0011eac8
    addiu a0,s4,16
    addiu a0,s4,46
    addiu a1,s2,542
    jal func_0011eac8
    addiu a2,zero,6
    addiu a0,s4,52
    addiu a1,s2,548
    jal func_0011eac8
    addiu a2,zero,6
    addiu a0,s4,58
    addiu a1,s2,554
    jal func_0011eac8
    addiu a2,zero,9
    addiu a0,s4,67
    addiu a1,s2,568
    jal func_0011eac8
    addiu a2,zero,1
    b L227cb0
    nop
    .word 0x8e63000c
    addiu v0,zero,8
    bne v1,v0,L227a90
    nop
    .word 0x8e63013c
    .word 0x8e640130
    addiu v0,zero,6
    sll v1,v1,0x4
    addu v1,v1,a0
    .word 0x8c630004
    bne v1,v0,L227a90
    nop
    .word 0x8e430000
    addiu a0,zero,1
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s3
    .word 0xac440038
    .word 0xae640144
L227a90:
    .word 0x8e430000
    addiu a1,s2,512
    addiu a2,zero,30
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s3,v0
    addiu s4,v0,56
    jal func_0011eac8
    addiu a0,s4,16
    addiu a0,s4,46
    addiu a1,s2,542
    jal func_0011eac8
    addiu a2,zero,6
    addiu a0,s4,52
    addiu a1,s2,548
    jal func_0011eac8
    addiu a2,zero,6
    addiu a0,s4,58
    addiu a1,s2,554
    jal func_0011eac8
    addiu a2,zero,9
    addiu a0,s4,67
    addiu a1,s2,568
    jal func_0011eac8
    addiu a2,zero,1
    b L227cb0
    nop
    .word 0x8e63000c
    addiu v0,zero,8
    bne v1,v0,L227cb0
    nop
    .word 0x8e020008
    beqz v0,L227b44
    nop
    .word 0x8e430000
    .word 0xc6000000
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s3
    .word 0xc441003c
    add.s $f0,$f1,$f0
    b L227b5c
    .word 0xe440003c
L227b44:
    .word 0x8e430000
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s3
    .word 0xac40003c
L227b5c:
    .word 0x8e020004
    beqz v0,L227b90
    nop
    .word 0x8e430000
    .word 0xc6000000
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s3
    .word 0xc4410040
    add.s $f0,$f1,$f0
    b L227ba8
    .word 0xe4400040
L227b90:
    .word 0x8e430000
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s3
    .word 0xac400040
L227ba8:
    .word 0x8e650154
    addiu v1,zero,1
    xor v0,a1,zero
    sltiu v0,v0,1
    bnez v0,L227bc8
    .word 0x70602628
    xori v0,a1,0x3
    sltiu v0,v0,1
L227bc8:
    bnez v0,L227be0
    nop
    addiu v0,zero,1
    beq a1,v0,L227be0
    nop
    .word 0x70002628
L227be0:
    bnez a0,L227bf8
    nop
    addiu v0,zero,4
    beq a1,v0,L227bf8
    nop
    .word 0x70001e28
L227bf8:
    bnez v1,L227c1c
    nop
    addiu v0,a1,-5
    sltiu at,v0,2
    bnez at,L227c14
    addiu v1,zero,1
    .word 0x70001e28
L227c14:
    beqz v1,L227cb0
    nop
L227c1c:
    .word 0x8e63000c
    addiu v0,zero,8
    bne v1,v0,L227cb0
    nop
    .word 0x3c024170
    .word 0x44821800
    .word 0x8e63013c
    .word 0x3c023f80
    .word 0x44820800
    .word 0x8e640130
    .word 0x3c017000
    .word 0xc6620150
    sll v0,v1,0x4
    .word 0xc4203fb0
    addu v0,v0,a0
    .word 0xc444000c
    add.s $f3,$f3,$f4
    sub.s $f2,$f2,$f3
    add.s $f1,$f1,$f2
    c.lt.s $f0,$f1
    nop
    bc1t L227cb0
    nop
    .word 0x8c460004
    .word 0x72602628
    jal func_00228b10
    .word 0x72402e28
    beqz v0,L227cb0
    nop
    .word 0x8e430000
    addiu a0,zero,1
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,s3
    .word 0xac440038
    .word 0xae640144
L227cb0:
    .word 0x72602628
L227cb4:
    .word 0x72402e28
    .word 0x72203628
    jal func_00243290
    .word 0x72003e28
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
