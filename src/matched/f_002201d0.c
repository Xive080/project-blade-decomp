extern void fn_2082d0(void);
extern void fn_20eef0(void);
extern void fn_2200f0(void);
extern void fn_208760(void);
extern void fn_2084c0(void);
extern void fn_208550(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c900008
    paddub s4,a0,zero
    paddub s3,a1,zero
    paddub s2,a2,zero
    jal fn_2082d0
    paddub a0,s0,zero
    bgtz v0,L220214
    addiu v0,zero,1
    b L220448
    .word 0x7bbf0050
L220214:
    .word 0x8e020054
    .word 0xae82000c
    .word 0x8e82000c
    .word 0x8f838870
    .word 0x94450004
    jal fn_20eef0
    addu a0,s0,v1
    .word 0x8c420000
    .word 0xae820010
    .word 0x8e83000c
    .word 0x94620004
    bgtz v0,L220250
    .word 0x3c020033
    b L220444
    addiu v0,zero,1
L220250:
    addiu v0,v0,-23008
    .word 0x8c450004
    .word 0x94640006
    .word 0x90a50002
    addiu v1,zero,-2
    andi a1,a1,0x9d
    andi a1,a1,0xff
    sll a1,a1,0x10
    or a0,a0,a1
    .word 0xae840018
    .word 0x8e840014
    and v1,a0,v1
    .word 0xae830014
    .word 0x8e830010
    .word 0x8c630004
    beqz v1,L2202d8
    addiu s1,v0,4
    .word 0x8c650028
    .word 0x8e830018
    beq v1,a1,L2202d8
    nop
    srl v1,v1,0x10
    andi a0,v1,0xff
    srl v1,a1,0x10
    andi v1,v1,0xff
    beq a0,v1,L2202cc
    nop
    .word 0x8e830014
    ori v1,v1,0x8
    b L2202d8
    .word 0xae830014
L2202cc:
    .word 0x8e830014
    ori v1,v1,0x4
    .word 0xae830014
L2202d8:
    .word 0x8c420000
    paddub a0,s0,zero
    addiu a1,sp,108
    addiu v0,v0,32
    jal fn_2200f0
    .word 0xae620000
    .word 0x8e82000c
    addiu a1,zero,1
    .word 0x8c430000
    andi v0,v1,0x1
    bne v0,a1,L220338
    .word 0x8fa6006c
    addiu v0,zero,4
    .word 0xa2820029
    addiu v0,zero,2
    bne a2,v0,L220328
    nop
    .word 0x938287cc
    b L2203e4
    .word 0xa2820028
L220328:
    .word 0x838287cc
    ori v0,v0,0x2
    b L2203e4
    .word 0xa2820028
L220338:
    andi v0,v1,0x2
    addiu a0,zero,2
    beq v0,a0,L220358
    addiu v0,zero,3
    andi v0,v1,0xff
    bnezl v0,L220388
    andi v1,v1,0x10
    addiu v0,zero,3
L220358:
    .word 0xa2820029
    addiu v0,zero,2
    bne a2,v0,L220378
    nop
    .word 0x838287cc
    ori v0,v0,0x4
    b L2203e4
    .word 0xa2820028
L220378:
    .word 0x838287cc
    ori v0,v0,0x6
    b L2203e4
    .word 0xa2820028
L220388:
    addiu v0,zero,16
    bne v1,v0,L2203c0
    nop
    bne a2,a0,L2203a8
    nop
    .word 0x938287cc
    b L2203b4
    .word 0xa2820028
L2203a8:
    .word 0x838287cc
    ori v0,v0,0x2
    .word 0xa2820028
L2203b4:
    addiu v0,zero,4
    b L2203e4
    .word 0xa2820029
L2203c0:
    bne a2,a0,L2203d8
    .word 0xa2850029
    .word 0x838287cc
    ori v0,v0,0x14
    b L2203e4
    .word 0xa2820028
L2203d8:
    .word 0x838287cc
    ori v0,v0,0x16
    .word 0xa2820028
L2203e4:
    jal fn_208760
    .word 0x8e240000
    andi v0,v0,0x40
    addiu v1,zero,1
    movz v1,zero,v0
    .word 0xa283002a
    .word 0x8e230000
    .word 0x90620002
    andi v0,v0,0x20
    beqz v0,L220440
    .word 0x8e900008
    addiu v0,v1,96
    .word 0xafa20060
    .word 0x3c020022
    addiu a1,sp,96
    addiu a0,v0,1136
    jal fn_2084c0
    .word 0xafb20064
    .word 0x3c020022
    paddub a0,s0,zero
    addiu a2,sp,96
    jal fn_208550
    addiu a1,v0,1136
L220440:
    addiu v0,zero,1
L220444:
    .word 0x7bbf0050
L220448:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}
