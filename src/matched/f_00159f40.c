extern void func_0015a240(void);
extern void func_0015c4f0(void);
extern void func_001b8fc0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-480
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s0,a0,zero
    paddub s3,a1,zero
    paddub s1,zero,zero
    b L15a060
    paddub s2,s0,zero
L159f70:
    .word 0x8e540018
    addiu a1,s2,20
    addiu a2,zero,1
    jal func_0015c4f0
    paddub a0,s0,zero
    .word 0x8e82000c
    paddub a0,s4,zero
    .word 0x8c420008
    jalr ra,v0
    paddub a1,zero,zero
    .word 0xae40001c
    .word 0xae400028
    .word 0xae40002c
    .word 0xae400030
    .word 0xae400034
    .word 0xae400038
    .word 0xae40003c
    .word 0xae400040
    .word 0xae400044
    .word 0xae400048
    .word 0xae40004c
    .word 0xae400050
    .word 0xae400054
    .word 0xae400058
    .word 0xae40005c
    .word 0xae400060
    .word 0xae400064
    .word 0xae400068
    .word 0xae40006c
    .word 0xae400070
    .word 0xae4000f8
    .word 0xae40014c
    .word 0xae400150
    .word 0xae400154
    .word 0xae400158
    .word 0xae40015c
    .word 0xae400160
    .word 0xae40016c
    .word 0xae400170
    .word 0xae400174
    .word 0xae400178
    .word 0xae400188
    .word 0xae4000b0
    .word 0xae4000b4
    .word 0xae4000b8
    .word 0xae4000bc
    .word 0xae4000c0
    .word 0xae400020
    .word 0xae400024
    .word 0xae400134
    .word 0x3c023f80
    .word 0xae420138
    .word 0xae40013c
    .word 0xae400140
    .word 0xae420144
    .word 0xae400148
    .word 0xae400100
    addiu s2,s2,380
    addiu s1,s1,1
    nop
L15a060:
    .word 0x8e020010
    slt v0,s1,v0
    bnez v0,L159f70
    nop
    paddub a1,zero,zero
    b L15a098
    paddub a0,zero,zero
L15a07c:
    .word 0x8e021edc
    addiu a1,a1,1
    addu v1,v0,a0
    addiu v0,v1,28
    .word 0xac62001c
    addiu a0,a0,68
    .word 0xac620020
L15a098:
    .word 0x8e021ed4
    slt v0,a1,v0
    bnez v0,L15a07c
    nop
    paddub s2,zero,zero
    b L15a0d0
    paddub s1,s0,zero
L15a0b4:
    .word 0x8e250018
    .word 0x3c020033
    jal func_001b8fc0
    addiu a0,v0,-26768
    .word 0xae22018c
    addiu s1,s1,380
    addiu s2,s2,1
L15a0d0:
    .word 0x8e020010
    slt v0,s2,v0
    bnez v0,L15a0b4
    nop
    paddub t1,zero,zero
    paddub a3,s0,zero
    b L15a1a0
    paddub t0,s0,zero
L15a0f0:
    .word 0x8ce2018c
    beqzl v0,L15a19c
    addiu a3,a3,380
    addiu a1,a3,20
    addiu a0,sp,96
    addiu v1,zero,95
L15a108:
    .word 0x8ca20000
    addiu v1,v1,-1
    .word 0xac820000
    addiu a1,a1,4
    addiu a0,a0,4
    bgtz v1,L15a108
    nop
    addiu a1,t0,20
    addiu a0,a3,20
    addiu v1,zero,95
L15a130:
    .word 0x8ca20000
    addiu v1,v1,-1
    .word 0xac820000
    addiu a1,a1,4
    addiu a0,a0,4
    bgtz v1,L15a130
    nop
    .word 0x8ce20018
    addiu a2,a3,20
    addiu a1,sp,96
    addiu a0,t0,20
    addiu v1,zero,95
    .word 0xac4603dc
    nop
L15a168:
    .word 0x8ca20000
    addiu v1,v1,-1
    .word 0xac820000
    addiu a1,a1,4
    addiu a0,a0,4
    bgtz v1,L15a168
    nop
    .word 0x8d020018
    addiu v1,t0,20
    addiu t0,t0,380
    .word 0xac4303dc
    nop
    addiu a3,a3,380
L15a19c:
    addiu t1,t1,1
L15a1a0:
    .word 0x8e020010
    slt v0,t1,v0
    bnez v0,L15a0f0
    nop
    addiu v1,zero,1
    paddub a1,zero,zero
    b L15a1d0
    paddub a0,s0,zero
L15a1c0:
    .word 0xac83018c
    addiu a0,a0,380
    addiu a1,a1,1
    nop
L15a1d0:
    .word 0x8e020010
    slt v0,a1,v0
    bnez v0,L15a1c0
    nop
    .word 0xc6620000
    .word 0xc6610004
    .word 0xc6600008
    paddub a0,s0,zero
    .word 0xe6021eb4
    .word 0xe6011eb8
    jal func_0015a240
    .word 0xe6001ebc
    .word 0x3c03461c
    ori v1,v1,0x4000
    .word 0xae031ec0
    addiu v1,zero,-1
    .word 0xae031ec8
    .word 0xae001ecc
    .word 0xae001ed0
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,480
}
