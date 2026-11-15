extern void func_001bf050(void);
extern void func_001ca2d0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-448
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0xafa600ac
    .word 0x7fb20020
    .word 0x7fb10010
    addiu a1,sp,176
    addiu a2,zero,4
    paddub s5,a0,zero
    jal func_001ca2d0
    .word 0x7fb00000
    bnez v0,L16be64
    addiu s8,sp,180
    b L16c05c
    paddub v0,zero,zero
    addiu s8,sp,180
L16be64:
    addiu a0,sp,176
    addiu a1,zero,16
    jal func_001bf050
    .word 0xafc00000
    .word 0x8fc20000
    blez v0,L16c02c
    addiu v1,sp,176
    sll a0,v0,0x2
    .word 0x3c020033
    addiu v0,v0,-23008
    addiu s3,v0,304
    .word 0x8c420130
    jalr ra,v0
    nop
    addiu s7,sp,184
    .word 0xaee20000
    .word 0x8fc30000
    .word 0x8e620000
    jalr ra,v0
    sll a0,v1,0x2
    addiu s6,sp,188
    .word 0xaec20000
    paddub s0,zero,zero
    b L16c018
    paddub s2,zero,zero
    addiu s4,sp,192
L16becc:
    paddub s1,s4,zero
    addiu a2,zero,1
L16bed4:
    paddub a0,s5,zero
    jal func_001ca2d0
    paddub a1,s1,zero
    bnezl v0,L16bef4
    addiu s1,s1,1
    b L16c05c
    paddub v0,zero,zero
    addiu s1,s1,1
L16bef4:
    .word 0x8222ffff
    bnez v0,L16bed4
    addiu a2,zero,1
    .word 0x8ee20000
    addiu a0,sp,192
    addu v0,v0,s2
    beq zero,a0,L16bf70
    .word 0xac400000
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c42011c
    jalr ra,v0
    nop
    addiu a0,v0,1
    .word 0x8e620000
    jalr ra,v0
    nop
    .word 0x8ee30000
    addu v1,v1,s2
    .word 0xac620000
    .word 0x8ee20000
    addu v0,v0,s2
    .word 0x8c440000
    beq zero,a0,L16bf70
    nop
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c4200f8
    jalr ra,v0
    addiu a1,sp,192
    nop
L16bf70:
    addiu a2,zero,1
L16bf74:
    paddub a0,s5,zero
    jal func_001ca2d0
    paddub a1,s4,zero
    bnezl v0,L16bf94
    addiu s4,s4,1
    b L16c05c
    paddub v0,zero,zero
    addiu s4,s4,1
L16bf94:
    .word 0x8282ffff
    bnez v0,L16bf74
    addiu a2,zero,1
    .word 0x8ec20000
    addiu a0,sp,192
    addu v0,v0,s2
    beq zero,a0,L16c010
    .word 0xac400000
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c42011c
    jalr ra,v0
    nop
    addiu a0,v0,1
    .word 0x8e620000
    jalr ra,v0
    nop
    .word 0x8ec30000
    addu v1,v1,s2
    .word 0xac620000
    .word 0x8ec20000
    addu v0,v0,s2
    .word 0x8c440000
    beql zero,a0,L16c014
    addiu s2,s2,4
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c4200f8
    jalr ra,v0
    addiu a1,sp,192
    nop
L16c010:
    addiu s2,s2,4
L16c014:
    addiu s0,s0,1
L16c018:
    .word 0x8fc20000
    slt v0,s0,v0
    bnez v0,L16becc
    addiu s4,sp,192
    addiu v1,sp,176
L16c02c:
    .word 0x8f8483a0
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    paddub v0,s5,zero
    .word 0x8fa300ac
    addu v1,v1,a0
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
L16c05c:
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,448
}
