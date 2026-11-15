asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c03002e
    .word 0x0080602d
    .word 0x8c64aa94
    .word 0x3c020fff
    .word 0x3c03002e
    .word 0x8d850000
    .word 0x8c980040
    ori v0,v0,0xffff
    .word 0x8c66ac6c
    and t1,a1,v0
    .word 0x8f0300d8
    addiu a0,zero,3
    beq a2,a0,L106d7c
    and t7,v1,v0
    .word 0x8f0400e0
    bnez a0,L106dac
    .word 0x0080182d
    b L106d84
    .word 0x8d820010
L106d7c:
    .word 0x8f0300e0
    .word 0x8d820010
L106d84:
    addiu a0,zero,384
    .word 0x00445818
    beqz v1,L106da0
    sra t2,t3,0x4
    sra v0,v1,0x4
    b L106da4
    .word 0x00447018
L106da0:
    .word 0x0160702d
L106da4:
    b L106dd0
    addiu t9,zero,1
L106dac:
    .word 0x8d820010
    addiu a1,zero,384
    sra a0,a0,0x4
    addiu v1,zero,192
    sra v0,v0,0x1
    .word 0x00837018
    mult1 t3,v0,a1
    addiu t9,zero,2
    sra t2,t3,0x4
L106dd0:
    beqz t9,L106f14
    .word 0x0000282d
    .word 0x8d87000c
    nop
L106de0:
    .word 0x01e0402d
    blez a3,L106ef4
    .word 0x0000302d
    addiu t5,a1,1
L106df0:
    .word 0x3c021000
    .word 0x3c041000
    ori v0,v0,0xd480
    ori a0,a0,0xd410
    .word 0xac400000
    .word 0x3c031000
    .word 0xac890000
    ori v1,v1,0xd420
    .word 0x3c041000
    .word 0xac6a0000
    ori a0,a0,0xd400
    addiu v0,zero,257
    .word 0x3c031000
    addu a1,t1,t3
    .word 0xac820000
    addiu a2,a2,1
    addu t1,t0,t6
    ori v1,v1,0xd400
L106e38:
    .word 0x8c620000
    andi v0,v0,0x100
    nop
    nop
    nop
    bnez v0,L106e38
    nop
    .word 0x3c021000
    .word 0x3c041000
    ori v0,v0,0xd080
    ori a0,a0,0xd010
    .word 0xac400000
    .word 0x3c031000
    .word 0xac880000
    ori v1,v1,0xd020
    .word 0x3c041000
    .word 0xac6a0000
    ori a0,a0,0xd000
    addiu v0,zero,256
    .word 0xac820000
    .word 0x3c031000
    ori v1,v1,0xd000
    .word 0x8d87000c
    nop
L106e98:
    .word 0x8c620000
    andi v0,v0,0x100
    nop
    nop
    nop
    bnez v0,L106e98
    nop
    .word 0x3c031000
    ori v1,v1,0xd020
    nop
L106ec0:
    .word 0x8c620000
    nop
    nop
    nop
    nop
    bnez v0,L106ec0
    nop
    .word 0x0120402d
    slt v0,a2,a3
    bnez v0,L106df0
    .word 0x00a0482d
    b L106efc
    .word 0x8f0200e4
L106ef4:
    addiu t5,a1,1
    .word 0x8f0200e4
L106efc:
    addiu v1,zero,192
    .word 0x01a0282d
    .word 0x00433018
    slt a0,a1,t9
    bnez a0,L106de0
    addu t7,a2,t7
L106f14:
    jr ra
    nop
}
