extern void func_00142a90(void);
extern void func_001a8600(void);
extern void func_001a8e80(void);
extern void func_001c3b70(void);
extern void func_002282b0(void);
extern void func_00228700(void);
extern void func_00242960(void);
extern void func_002432e0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    paddub s2,a0,zero
    jal func_002432e0
    .word 0x7fb00000
    .word 0x8e43000c
    addiu v0,zero,4
    beq v1,v0,L228030
    nop
    addiu v0,zero,8
    beq v1,v0,L227fbc
    nop
    addiu a1,zero,9
    beq v1,a1,L227f80
    .word 0x3c017000
    addiu v0,zero,5
    beq v1,v0,L227f4c
    .word 0x3c017000
    b L2280e4
    nop
    .word 0x3c017000
L227f4c:
    .word 0xc4213fb0
    .word 0x3c0240a0
    mtc1 v0,$f0
    nop
    add.s $f0,$f0,$f1
    .word 0xe6400150
    .word 0x8e420000
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s2,zero
    b L2280e4
    nop
    .word 0x3c017000
L227f80:
    .word 0xc4213fb0
    .word 0xc6400150
    c.lt.s $f1,$f0
    nop
    bc1t L2280e4
    nop
    jal func_00228700
    paddub a0,s2,zero
    .word 0x8e420000
    addiu a1,zero,8
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s2,zero
    b L2280e4
    nop
L227fbc:
    .word 0x8e420144
    bnez v0,L227ff4
    paddub a0,s2,zero
    .word 0x3c017000
    .word 0xc6420150
    .word 0xc4213fb0
    mtc1 zero,$f0
    nop
    sub.s $f1,$f2,$f1
    c.le.s $f1,$f0
    nop
    bc1f L2280e4
    nop
    paddub a0,s2,zero
L227ff4:
    jal func_002282b0
    nop
    .word 0x8e420000
    addiu a1,zero,9
    .word 0x8c420018
    jalr ra,v0
    paddub a0,s2,zero
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c024040
    mtc1 v0,$f0
    nop
    add.s $f0,$f0,$f1
    b L2280e4
    .word 0xe6400150
L228030:
    .word 0x3c020030
    addiu a1,v0,28544
    .word 0x8ca20158
    bnez v0,L2280e4
    nop
    .word 0x8ca20708
    bnez v0,L2280e4
    nop
    .word 0x8ca30004
    andi v0,v1,0x6000
    bnez v0,L2280e4
    nop
    .word 0xc4a10150
    .word 0xc4a00700
    c.eq.s $f1,$f0
    nop
    bc1t L2280cc
    ori v0,v1,0x4000
    c.le.s $f1,$f0
    nop
    bc1t L228094
    addiu v0,zero,1
    b L228094
    paddub v0,zero,zero
    addiu v0,zero,1
L228094:
    addiu v1,zero,1456
    .word 0x00432018
    xori v0,v0,0x1
    mult1 v0,v0,v1
    addu v1,v0,a1
    addu a0,a0,a1
    .word 0x8c820004
    ori v0,v0,0x2000
    .word 0xac820004
    .word 0x8c620004
    ori v0,v0,0x4000
    b L2280dc
    .word 0xac620004
    ori v0,v1,0x4000
L2280cc:
    .word 0xaca20004
    .word 0x8ca205b4
    ori v0,v0,0x4000
    .word 0xaca205b4
L2280dc:
    jal func_00242960
    nop
L2280e4:
    .word 0x3c020030
    addiu s0,v0,28544
    addiu s1,zero,2
    paddub v0,s1,zero
    beqz v0,L2281a8
    addiu s1,s1,-1
L2280fc:
    .word 0x8e020000
    sll v0,v0,0x3
    addu v1,s2,v0
    .word 0x8c62017c
    beqz v0,L22819c
    paddub v0,s1,zero
    .word 0x3c017000
    .word 0xc4600178
    .word 0xc4213fb0
    c.le.s $f1,$f0
    nop
    bc1t L228198
    nop
    .word 0x8e020008
    jal func_00142a90
    .word 0x8c440404
    jal func_001c3b70
    paddub a0,v0,zero
    addiu a1,v0,48
    .word 0x8e020000
    sll v0,v0,0x3
    addu v0,s2,v0
    .word 0x8c44017c
    jal func_001a8600
    paddub a2,zero,zero
    .word 0x8e020000
    sll v0,v0,0x3
    addu v0,s2,v0
    jal func_001a8e80
    .word 0x8c44017c
    .word 0x8e020000
    sll v0,v0,0x3
    addu v0,s2,v0
    .word 0xac40017c
    .word 0x8e020000
    sll v0,v0,0x3
    addu v0,s2,v0
    .word 0xac400178
    nop
L228198:
    paddub v0,s1,zero
L22819c:
    addiu s0,s0,1456
    bnez v0,L2280fc
    addiu s1,s1,-1
L2281a8:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,64
}
