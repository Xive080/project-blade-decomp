extern void func_001f79f0(void);
extern void func_00234ff0(void);
extern void func_00142a90(void);
extern void func_001c3b70(void);
extern void func_001a8600(void);
extern void func_001a8e80(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c017000
    .word 0xc4213fb0
    sltiu at,a1,7
    beqz at,L14a490
    paddub s0,a0,zero
    .word 0x3c03002f
    addiu v1,v1,-15824
    sll v0,a1,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0xc6001e14
    c.lt.s $f1,$f0
    nop
    bc1f L149ed0
    .word 0x3c024080
    b L14a4bc
    .word 0x70001628
    .word 0x3c024080
L149ed0:
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    jal func_001f79f0
    .word 0xe6001e14
    andi v0,v0,0x7fff
    bltz v0,L149f00
    srl v1,v0,0x1
    .word 0x44820000
    b L149f18
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L149f00:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L149f18:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f1,$f1,$f0
    .word 0x3c023f19
    ori v0,v0,0x999a
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L149f50
    nop
    b L14a4bc
    .word 0x70001628
L149f50:
    jal func_00234ff0
    nop
    bgez v0,L149f6c
    andi v1,v0,0x1
    beqz v1,L149f70
    sll v0,v1,0x3
    addiu v1,v1,-2
L149f6c:
    sll v0,v1,0x3
L149f70:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s0,v0
    b L14a490
    addiu s1,v0,5844
    .word 0x3c024080
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    jal func_001f79f0
    .word 0xe6001e14
    andi v0,v0,0x7fff
    bltz v0,L149fc0
    srl v1,v0,0x1
    .word 0x44820000
    b L149fd8
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L149fc0:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L149fd8:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f1,$f1,$f0
    .word 0x3c023f80
    nop
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L14a010
    nop
    b L14a4bc
    .word 0x70001628
L14a010:
    jal func_00234ff0
    nop
    addiu v1,zero,3
    .word 0x0043001a
    nop
    nop
    mfhi v0
    addiu v1,v0,2
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s0,v0
    b L14a490
    addiu s1,v0,5844
    .word 0x3c024080
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    jal func_001f79f0
    .word 0xe6001e14
    andi v0,v0,0x7fff
    bltz v0,L14a084
    srl v1,v0,0x1
    .word 0x44820000
    b L14a09c
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L14a084:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L14a09c:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f1,$f1,$f0
    .word 0x3c023f80
    nop
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L14a0d4
    nop
    b L14a4bc
    .word 0x70001628
L14a0d4:
    jal func_00234ff0
    nop
    addiu v1,zero,3
    .word 0x0043001a
    nop
    nop
    mfhi v0
    addiu v1,v0,5
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s0,v0
    b L14a490
    addiu s1,v0,5844
    .word 0xc6001e14
    c.lt.s $f1,$f0
    nop
    bc1f L14a134
    .word 0x3c024040
    b L14a4bc
    .word 0x70001628
    .word 0x3c024040
L14a134:
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    jal func_001f79f0
    .word 0xe6001e14
    andi v0,v0,0x7fff
    bltz v0,L14a164
    srl v1,v0,0x1
    .word 0x44820000
    b L14a17c
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L14a164:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L14a17c:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f1,$f1,$f0
    .word 0x3c023f80
    nop
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L14a1b4
    nop
    b L14a4bc
    .word 0x70001628
L14a1b4:
    jal func_00234ff0
    nop
    bgez v0,L14a1d0
    andi v1,v0,0x1
    beqzl v1,L14a1d4
    addiu v1,v1,8
    addiu v1,v1,-2
L14a1d0:
    addiu v1,v1,8
L14a1d4:
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s0,v0
    b L14a490
    addiu s1,v0,5844
    .word 0xc6001e14
    c.lt.s $f1,$f0
    nop
    bc1f L14a214
    .word 0x3c024040
    b L14a4bc
    .word 0x70001628
    .word 0x3c024040
L14a214:
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    jal func_001f79f0
    .word 0xe6001e14
    andi v0,v0,0x7fff
    bltz v0,L14a244
    srl v1,v0,0x1
    .word 0x44820000
    b L14a25c
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L14a244:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L14a25c:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f1,$f1,$f0
    .word 0x3c023f80
    nop
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L14a294
    nop
    b L14a4bc
    .word 0x70001628
L14a294:
    jal func_00234ff0
    nop
    bgez v0,L14a2b0
    andi v1,v0,0x1
    beqzl v1,L14a2b4
    addiu v1,v1,10
    addiu v1,v1,-2
L14a2b0:
    addiu v1,v1,10
L14a2b4:
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s0,v0
    b L14a490
    addiu s1,v0,5844
    .word 0xc6001e14
    c.lt.s $f1,$f0
    nop
    bc1f L14a2f4
    .word 0x3c024040
    b L14a4bc
    .word 0x70001628
    .word 0x3c024040
L14a2f4:
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    jal func_001f79f0
    .word 0xe6001e14
    andi v0,v0,0x7fff
    bltz v0,L14a324
    srl v1,v0,0x1
    .word 0x44820000
    b L14a33c
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L14a324:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L14a33c:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f1,$f1,$f0
    .word 0x3c023f80
    nop
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L14a374
    nop
    b L14a4bc
    .word 0x70001628
L14a374:
    jal func_00234ff0
    nop
    bgez v0,L14a390
    andi v1,v0,0x1
    beqzl v1,L14a394
    addiu v1,v1,12
    addiu v1,v1,-2
L14a390:
    addiu v1,v1,12
L14a394:
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s0,v0
    b L14a490
    addiu s1,v0,5844
    .word 0xc6001e14
    c.lt.s $f1,$f0
    nop
    bc1f L14a3d4
    .word 0x3c024040
    b L14a4bc
    .word 0x70001628
    .word 0x3c024040
L14a3d4:
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    jal func_001f79f0
    .word 0xe6001e14
    andi v0,v0,0x7fff
    bltz v0,L14a404
    srl v1,v0,0x1
    .word 0x44820000
    b L14a41c
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L14a404:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L14a41c:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f1,$f1,$f0
    .word 0x3c023f80
    nop
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L14a454
    nop
    b L14a4bc
    .word 0x70001628
L14a454:
    jal func_00234ff0
    nop
    bgez v0,L14a470
    andi v1,v0,0x1
    beqzl v1,L14a474
    addiu v1,v1,14
    addiu v1,v1,-2
L14a470:
    addiu v1,v1,14
L14a474:
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s0,v0
    addiu s1,v0,5844
L14a490:
    jal func_00142a90
    .word 0x8e040404
    jal func_001c3b70
    paddub a0,v0,zero
    addiu a1,v0,48
    paddub a0,s1,zero
    jal func_001a8600
    .word 0x70003628
    jal func_001a8e80
    paddub a0,s1,zero
    addiu v0,zero,1
L14a4bc:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}


