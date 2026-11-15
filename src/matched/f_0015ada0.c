extern void func_00243150(void);
extern void func_00121a58(void);
extern void func_0016f910(void);
extern void func_0016aed0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-448
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x3c02002e
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,v0,-7024
    .word 0x78460000
    .word 0x78450010
    .word 0x78430020
    addiu a3,sp,192
    paddub s0,a0,zero
    .word 0xafa000a0
    .word 0x3c020030
    .word 0x7ce60000
    .word 0x7ce50010
    .word 0x7ce30020
    addiu v0,v0,23872
    .word 0xac82000c
    addiu v0,zero,1024
    .word 0xac820000
    .word 0x3c020030
    addiu a0,v0,24688
    b L15ae20
    .word 0x70001e28
L15ae1c:
    addiu v1,v1,1
L15ae20:
    slti at,v1,2
    beqz at,L15ae4c
    slti at,v1,2
    .word 0x8c8203ac
    beqz v0,L15ae48
    nop
    .word 0x8c420344
    bnezl v0,L15ae1c
    addiu a0,a0,4
    nop
L15ae48:
    slti at,v1,2
L15ae4c:
    beqz at,L15ae6c
    .word 0x3c020030
    addiu v0,v0,25628
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c420000
    addiu v0,v0,852
    .word 0xafa200a0
L15ae6c:
    .word 0x8fa200a0
    beqz v0,L15aee0
    .word 0xae000010
    .word 0x8c420000
    beqz v0,L15aee0
    nop
    .word 0x8fb100a0
    b L15aec8
    .word 0x70009628
L15ae90:
    .word 0x8e220030
    addiu a1,sp,240
    addiu a0,zero,18
    jal func_00243150
    .word 0xafa2013c
    beqzl v0,L15aec4
    addiu s1,s1,36
    .word 0x8e030010
    .word 0x8e220024
    addu v0,v1,v0
    .word 0xae020010
    nop
    addiu s1,s1,36
L15aec4:
    addiu s2,s2,1
L15aec8:
    .word 0x8fa200a0
    .word 0x8c42000c
    slt v0,s2,v0
    bnez v0,L15ae90
    nop
    nop
L15aee0:
    .word 0x8e020010
    bnez v0,L15aef4
    nop
    .word 0x8fa200a0
    .word 0xac400000
L15aef4:
    .word 0x8fa200a0
    .word 0x8c430028
    addiu v0,zero,2
    beq v1,v0,L15afd0
    .word 0x3c044120
    addiu v0,zero,1
    beq v1,v0,L15af78
    .word 0x3c044100
    beqz v1,L15af24
    .word 0x3c044100
    b L15b028
    addiu v1,zero,1
L15af24:
    .word 0xae041dc4
    .word 0x3c0240c0
    .word 0xae021dc8
    .word 0x3c03c120
    .word 0xae031dcc
    .word 0xae001dd4
    .word 0xae041e00
    .word 0x3c024120
    .word 0xae021e04
    .word 0xae031e08
    .word 0xae001e10
    .word 0xae041e3c
    .word 0xae021e40
    .word 0xae031e44
    .word 0xae001e4c
    .word 0xae041e78
    .word 0xae021e7c
    .word 0xae031e80
    .word 0x3c024000
    b L15b024
    .word 0xae021e88
L15af78:
    .word 0xae041dc4
    .word 0x3c024120
    .word 0xae021dc8
    .word 0x3c02c120
    .word 0xae021dcc
    .word 0xae001dd4
    .word 0xae041e00
    .word 0x3c034190
    .word 0xae031e04
    .word 0x3c02c1f0
    .word 0xae021e08
    .word 0xae001e10
    .word 0xae041e3c
    .word 0xae031e40
    .word 0xae021e44
    .word 0xae001e4c
    .word 0xae041e78
    .word 0xae031e7c
    .word 0xae021e80
    .word 0x3c024000
    b L15b024
    .word 0xae021e88
L15afd0:
    .word 0xae041dc4
    .word 0x3c024170
    .word 0xae021dc8
    .word 0x3c02c170
    .word 0xae021dcc
    .word 0xae001dd4
    .word 0xae041e00
    .word 0x3c0341b0
    .word 0xae031e04
    .word 0x3c02c1b0
    .word 0xae021e08
    .word 0xae001e10
    .word 0xae041e3c
    .word 0xae031e40
    .word 0xae021e44
    .word 0xae001e4c
    .word 0xae041e78
    .word 0xae031e7c
    .word 0xae021e80
    .word 0x3c024000
    .word 0xae021e88
L15b024:
    addiu v1,zero,1
L15b028:
    .word 0xae031dd8
    .word 0xae001dd0
    .word 0xae001ddc
    .word 0xae001de0
    .word 0xae001de4
    .word 0xae001de8
    .word 0xae031dec
    .word 0xae031df0
    .word 0xae001df4
    .word 0xae001df8
    addiu v0,zero,2
    .word 0xae001dfc
    .word 0xae021e14
    .word 0xae001e0c
    .word 0xae001e18
    .word 0xae001e1c
    .word 0xae001e20
    .word 0xae001e24
    .word 0xae031e28
    .word 0xae031e2c
    .word 0xae001e30
    .word 0xae001e34
    .word 0xae001e38
    .word 0xae001e50
    .word 0xae001e48
    .word 0xae001e54
    .word 0xae001e58
    .word 0xae001e5c
    .word 0xae001e60
    .word 0xae031e64
    .word 0xae031e68
    .word 0xae001e6c
    .word 0xae001e70
    .word 0xae001e74
    .word 0xae001e8c
    .word 0xae001e84
    .word 0xae001e90
    .word 0xae001e94
    .word 0xae001e98
    .word 0xae001e9c
    .word 0xae031ea0
    .word 0xae031ea4
    .word 0xae001ea8
    .word 0xae001eac
    .word 0xae001eb0
    .word 0x8e040010
    slt at,zero,a0
    beqz at,L15b140
    .word 0x70002e28
    slti at,a0,3
    bnez at,L15b128
    addiu v1,a0,-2
L15b0f8:
    addiu a1,a1,2
    slt v0,a1,v1
    nop
    nop
    nop
    bnez v0,L15b0f8
    nop
    nop
    b L15b12c
    slt v0,a1,a0
L15b120:
    addiu a1,a1,1
    nop
L15b128:
    slt v0,a1,a0
L15b12c:
    nop
    nop
    nop
    bnez v0,L15b120
    nop
L15b140:
    .word 0x8f828344
    .word 0xae021ed4
    .word 0x8f828340
    .word 0xae021ed8
    .word 0x8f828338
    .word 0xae021edc
    .word 0x8f82833c
    .word 0xae021ee0
    .word 0x8fa200a0
    beqz v0,L15b174
    .word 0xae001ec4
    .word 0x8c420004
    .word 0xae021ec4
L15b174:
    .word 0x3c010030
    .word 0x8c226170
    .word 0x8c420028
    beqz v0,L15b190
    nop
    jalr ra,v0
    nop
L15b190:
    .word 0x8fb500a0
    addiu s8,sp,348
    .word 0x70008e28
    .word 0xafa000b0
    b L15b2e8
    paddub s4,s0,zero
L15b1a8:
    .word 0x70009628
    b L15b2c8
    paddub s3,s4,zero
L15b1b4:
    .word 0xafa20150
    addiu s6,sp,428
    .word 0xafb101a8
    .word 0xaed70000
    .word 0x8ec50000
    jal func_00121a58
    paddub a0,s8,zero
    .word 0x8ec40000
    addiu v0,zero,-1
    subu a2,v0,s1
    addiu v1,sp,192
    .word 0x8c870010
    addiu v0,sp,364
    addiu a1,sp,336
    .word 0xafa70154
    .word 0xafa60158
    .word 0xafa001a0
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    addiu a0,zero,18
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0xc4630010
    .word 0xc4620014
    .word 0xc4610018
    .word 0xc460001c
    .word 0xe4430010
    .word 0xe4420014
    .word 0xe4410018
    .word 0xe440001c
    .word 0xc4630020
    .word 0xc4620024
    .word 0xc4610028
    .word 0xc460002c
    .word 0xe4430020
    .word 0xe4420024
    .word 0xe4410028
    .word 0xe440002c
    .word 0x8ec20000
    .word 0x8c420020
    jal func_00243150
    .word 0xafa2019c
    beqzl v0,L15b2c4
    addiu s2,s2,1
    addiu a1,sp,336
    addiu a0,zero,18
    jal func_0016f910
    .word 0xafb001a4
    .word 0xae620018
    .word 0x8e620018
    addiu a0,s3,116
    .word 0xc44203ec
    .word 0xc44103f0
    .word 0xc44003f4
    .word 0xe662017c
    .word 0xe6610180
    .word 0xe6600184
    jal func_0016aed0
    .word 0xae600188
    addiu s3,s3,380
    addiu s4,s4,380
    addiu s1,s1,1
    nop
    addiu s2,s2,1
L15b2c4:
    nop
L15b2c8:
    .word 0x8ea20024
    slt v0,s2,v0
    bnez v0,L15b1b4
    .word 0x3c020004
    .word 0x8fa200b0
    addiu s5,s5,36
    addiu v0,v0,1
    .word 0xafa200b0
L15b2e8:
    .word 0x8fa200a0
    .word 0x8c43000c
    .word 0x8fa200b0
    slt v0,v0,v1
    bnez v0,L15b1a8
    addiu s7,s5,16
    .word 0x70002628
    b L15b318
    paddub v1,s0,zero
L15b30c:
    .word 0xac600014
    addiu v1,v1,380
    addiu a0,a0,1
L15b318:
    .word 0x8e020010
    slt v0,a0,v0
    bnez v0,L15b30c
    nop
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
    addiu v0,zero,1
    jr ra
    addiu sp,sp,448
}


