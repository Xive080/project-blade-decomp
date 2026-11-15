extern void fn_1b5c30(void);
extern void fn_1b5c10(void);
extern void fn_197540(void);
extern void fn_1785a0(void);
extern void fn_24b470(void);
extern void fn_1b5c40(void);
extern void fn_197e40(void);
extern void fn_1327d0(void);
extern void fn_1a9a40(void);
extern void fn_24b540(void);
extern void fn_197de0(void);
extern void fn_24b4b0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb10020
    .word 0x7fb00010
    addiu v0,zero,1
    paddub s1,a1,zero
    .word 0xe7b40000
    beq s1,v0,L197150
    paddub s0,a2,zero
    beqz s1,L197048
    nop
    addiu v0,zero,5
    beq s1,v0,L196f5c
    nop
    addiu v0,zero,4
    beq s1,v0,L196f5c
    nop
    b L1971ac
    .word 0x7bbf0030
L196f5c:
    jal fn_1b5c30
    nop
    jal fn_1b5c10
    .word 0xe7a0004c
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44821000
    .word 0xc7a1004c
    div.s $f20,$f0,$f2
    addiu v0,zero,4
    div.s $f0,$f1,$f20
    nop
    nop
    bne s1,v0,L196fe0
    .word 0xe7a0004c
    .word 0xc7a1004c
    .word 0x3c023c23
    ori v0,v0,0xd70a
    .word 0x44820000
    .word 0x44801000
    sub.s $f0,$f1,$f0
    c.lt.s $f0,$f2
    nop
    bc1f L197028
    .word 0xe7a0004c
    addiu a1,zero,2
    paddub a0,s0,zero
    jal fn_197540
    .word 0xafa0004c
    jal fn_1785a0
    addiu a0,zero,8
    b L19702c
    addiu a1,sp,76
L196fe0:
    .word 0xc7a1004c
    .word 0x3c023c23
    ori v0,v0,0xd70a
    .word 0x44820000
    .word 0x3c023f80
    add.s $f0,$f1,$f0
    .word 0x44821000
    nop
    c.le.s $f0,$f2
    nop
    bc1t L197028
    .word 0xe7a0004c
    addiu a1,zero,3
    .word 0xafa2004c
    jal fn_197540
    paddub a0,s0,zero
    jal fn_1785a0
    addiu a0,zero,8
L197028:
    addiu a1,sp,76
L19702c:
    jal fn_24b470
    addiu a0,zero,12
    .word 0xc7a0004c
    jal fn_1b5c40
    mul.s $f12,$f0,$f20
    b L1971a8
    nop
L197048:
    jal fn_1b5c30
    .word 0xafa00040
    jal fn_1b5c10
    .word 0x46000506
    nop
    nop
    div.s $f1,$f20,$f0
    .word 0x3c023f4c
    ori a2,v0,0xcccd
    .word 0x3c023ccc
    .word 0x3443cccd
    .word 0x3c023e80
    addiu a1,zero,2
    .word 0x70002628
    .word 0x44860000
    .word 0x44836800
    mul.s $f0,$f0,$f1
    .word 0x44826000
    jal fn_197e40
    .word 0xe7a00044
    .word 0x3c023ccc
    ori v0,v0,0xcccd
    .word 0x44826800
    addiu a1,zero,3
    .word 0x3c023e80
    .word 0x44826000
    jal fn_197e40
    .word 0x70002628
    .word 0x3c023ccc
    ori v0,v0,0xcccd
    .word 0x44826800
    addiu a0,zero,1
    .word 0x3c023e80
    .word 0x44826000
    jal fn_197e40
    addiu a1,zero,2
    .word 0x3c023ccc
    ori v0,v0,0xcccd
    .word 0x44826800
    addiu a0,zero,1
    .word 0x3c023e80
    .word 0x44826000
    jal fn_197e40
    addiu a1,zero,3
    .word 0x3c017000
    .word 0x8c233fc8
    addiu v0,zero,1
    beq v1,v0,L19713c
    addiu a2,sp,64
    jal fn_1b5c30
    nop
    .word 0x3c023f00
    .word 0x44827000
    .word 0x44806000
    .word 0x46000346
    jal fn_1327d0
    .word 0x70002628
    .word 0x70002628
    jal fn_1a9a40
    .word 0x70002e28
    addiu a2,sp,64
L19713c:
    addiu a0,zero,12
    jal fn_24b540
    .word 0x70002e28
    b L1971a8
    nop
L197150:
    addiu a1,zero,2
    jal fn_197de0
    .word 0x70002628
    addiu a1,zero,3
    jal fn_197de0
    .word 0x70002628
    addiu a0,zero,1
    jal fn_197de0
    addiu a1,zero,2
    addiu a0,zero,1
    jal fn_197de0
    addiu a1,zero,3
    .word 0x3c017000
    .word 0x8c223fc8
    addiu a1,zero,1
    beq v0,a1,L1971a0
    addiu a0,zero,12
    jal fn_1a9a40
    .word 0x70002628
    addiu a0,zero,12
L1971a0:
    jal fn_24b4b0
    .word 0x70002e28
L1971a8:
    .word 0x7bbf0030
L1971ac:
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,80
}


