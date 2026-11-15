extern void func_001c7e20(void);
extern void func_001c7710(void);
extern void func_00203d80(void);
extern void func_0020b680(void);
extern void func_0020b880(void);
extern void func_0020bc70(void);
extern void func_0020c1e0(void);
extern void func_0020c800(void);
extern void func_001c7de0(void);
extern void func_001d5d50(void);
extern void func_001d5ee0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff70
    .word 0x7fbf0080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    paddub s6,a0,zero
    .word 0x3c010033
    .word 0x8c24e620
    addiu v0,zero,3
    .word 0x8c830014
    bne v1,v0,L20cefc
    paddub s4,zero,zero
    addiu v0,zero,2
    .word 0xac820014
    .word 0x3c010033
    .word 0x8c22e620
    .word 0x8c540018
    nop
L20cefc:
    .word 0x8e830008
    addiu v0,zero,-1
    .word 0x8c630000
    bne v1,v0,L20cf18
    sll v0,v1,0x3
    b L20cf48
    paddub v0,zero,zero
L20cf18:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s4
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e820008
    .word 0x8c430000
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s4,v0
    .word 0x24420014
L20cf48:
    .word 0x8c500008
    .word 0x8e0200b8
    bnez v0,L20d130
    nop
    .word 0x8e830008
    addiu v0,zero,-1
    .word 0x8c63000c
    bne v1,v0,L20cf74
    sll v0,v1,0x3
    b L20cfa4
    paddub s5,zero,zero
L20cf74:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s4
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e820008
    .word 0x8c43000c
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s4,v0
    .word 0x24550014
L20cfa4:
    .word 0x8eb10010
    beqz s1,L20d130
    nop
    .word 0x8e03001c
    .word 0x3c020002
    and v0,v1,v0
    beqz v0,L20cfd0
    .word 0x3c023f80
    mtc1 v0,$f20
    b L20d008
    paddub s2,zero,zero
L20cfd0:
    jal func_001c7e20
    nop
    paddub s2,v0,zero
    paddub a0,s2,zero
    jal func_001c7710
    .word 0x26050010
    .word 0xc6420020
    .word 0xc6410024
    .word 0xc6400028
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f20,$f0,$f0
    .word 0x46140504
L20d008:
    .word 0x8ea20008
    .word 0x8c530000
    jal func_00203d80
    paddub a0,s3,zero
    addiu v1,zero,130
    beq v0,v1,L20d0f0
    paddub a2,s3,zero
    addiu v1,zero,129
    beq v0,v1,L20d0cc
    paddub a2,s3,zero
    addiu v1,zero,128
    beq v0,v1,L20d0a8
    paddub a2,s3,zero
    addiu v1,zero,1
    beq v0,v1,L20d084
    paddub a2,s3,zero
    addiu v1,zero,2
    beq v0,v1,L20d060
    paddub a2,s3,zero
    b L20d10c
    .word 0x8ea30008
    paddub a2,s3,zero
L20d060:
    paddub a0,s6,zero
    paddub a1,s4,zero
    paddub a3,s2,zero
    .word 0x4600a306
    jal func_0020b680
    .word 0x26080090
    b L20d108
    nop
    paddub a2,s3,zero
L20d084:
    paddub a0,s6,zero
    paddub a1,s4,zero
    paddub a3,s2,zero
    .word 0x4600a306
    jal func_0020b880
    .word 0x26080090
    b L20d108
    nop
    paddub a2,s3,zero
L20d0a8:
    paddub a0,s6,zero
    paddub a1,s4,zero
    paddub a3,s2,zero
    .word 0x4600a306
    jal func_0020bc70
    .word 0x26080090
    b L20d108
    nop
    paddub a2,s3,zero
L20d0cc:
    paddub a0,s6,zero
    paddub a1,s4,zero
    paddub a3,s2,zero
    .word 0x4600a306
    jal func_0020c1e0
    .word 0x26080090
    b L20d108
    nop
    paddub a2,s3,zero
L20d0f0:
    paddub a0,s6,zero
    paddub a1,s4,zero
    paddub a3,s2,zero
    .word 0x4600a306
    jal func_0020c800
    .word 0x26080090
L20d108:
    .word 0x8ea30008
L20d10c:
    .word 0x96a20002
    .word 0x2631ffff
    addu v0,v1,v0
    bnez s1,L20d008
    .word 0xaea20008
    beqz s2,L20d130
    nop
    jal func_001c7de0
    paddub a0,s2,zero
L20d130:
    .word 0x3c010033
    .word 0x8c30e620
    .word 0x3c010033
    .word 0x8c22e628
    beqz v0,L20d180
    paddub a1,s6,zero
    paddub a0,s0,zero
    jal func_001d5d50
    paddub a2,zero,zero
    beqz v0,L20d180
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x3c030033
    .word 0x8c420004
    jalr ra,v0
    .word 0x2465e630
    bnez v0,L20d180
    .word 0x3c010033
    .word 0xac22e628
    nop
L20d180:
    .word 0x8e020014
    slti at,v0,2
    bnez at,L20d1a0
    addiu v0,zero,2
    .word 0xae020014
    jal func_001d5ee0
    .word 0x8e040018
    nop
L20d1a0:
    .word 0x7bbf0080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    .word 0x27bd0090
}
