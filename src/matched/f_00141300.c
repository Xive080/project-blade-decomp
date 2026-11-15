extern void fn_11ec80(void);
extern void fn_141750(void);
extern void fn_174990(void);
extern void fn_1747d0(void);
extern void fn_1b2c90(void);
extern void fn_1ba360(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c820008
    paddub s0,a1,zero
    beqz v0,L141324
    paddub s1,a0,zero
    .word 0xae200008
L141324:
    .word 0xae200004
    .word 0xae200038
    .word 0xae20003c
    .word 0xae200040
    .word 0xae200044
    .word 0xae200048
    .word 0xae20004c
    .word 0xae200050
    .word 0x3c023f80
    .word 0xae220054
    .word 0xae220058
    .word 0xae20005c
    .word 0xae200060
    .word 0xae200064
    .word 0xae200068
    .word 0xae20006c
    .word 0xae200070
    addiu a0,s1,120
    addiu a2,zero,8
    .word 0x70002e28
    jal fn_11ec80
    .word 0xae200074
    addiu a0,s1,128
    addiu a2,zero,8
    jal fn_11ec80
    .word 0x70002e28
    addiu a0,s1,136
    addiu a2,zero,8
    jal fn_11ec80
    .word 0x70002e28
    .word 0xae200090
    .word 0xae200094
    .word 0xae200098
    .word 0xae20009c
    .word 0xae2000a0
    .word 0xae2000a4
    .word 0xae2000a8
    .word 0xae2000ac
    .word 0xae2000b0
    .word 0xae2000b4
    .word 0xae2000b8
    .word 0xae2000bc
    .word 0xae2000c0
    .word 0xae2000c4
    .word 0xae200110
    .word 0xae200114
    .word 0xae200118
    .word 0x3c023f33
    .word 0xae20011c
    ori v0,v0,0x3333
    .word 0xae2200c8
    .word 0x3c024120
    .word 0xae2200cc
    .word 0xae200134
    .word 0xae200138
    .word 0xae20013c
    .word 0xae200120
    .word 0xae200140
    .word 0xae200144
    .word 0xae200148
    .word 0xae20014c
    .word 0x3c023f80
    .word 0xae2200f8
    .word 0xae2200e4
    .word 0xae2200d0
    .word 0xae2000e0
    .word 0xae2000d8
    .word 0xae2000d4
    .word 0xae2000f4
    .word 0xae2000f0
    .word 0xae2000e8
    .word 0xae200108
    .word 0xae200104
    .word 0xae200100
    .word 0x8e2300dc
    .word 0x3c020002
    ori v0,v0,0x3
    paddub a0,s1,zero
    or v0,v1,v0
    .word 0xae2200dc
    .word 0xae20023c
    .word 0xae200150
    .word 0xae200240
    jal fn_141750
    .word 0xae200244
    addiu a0,s1,512
    addiu a2,zero,30
    jal fn_11ec80
    .word 0x70002e28
    addiu a0,s1,548
    addiu a2,zero,6
    jal fn_11ec80
    .word 0x70002e28
    addiu a0,s1,542
    addiu a2,zero,6
    jal fn_11ec80
    .word 0x70002e28
    addiu a0,s1,554
    addiu a2,zero,9
    jal fn_11ec80
    .word 0x70002e28
    addiu a0,s1,563
    addiu a2,zero,5
    jal fn_11ec80
    .word 0x70002e28
    addiu a0,s1,568
    addiu a2,zero,1
    jal fn_11ec80
    .word 0x70002e28
    .word 0x3c02bf40
    .word 0xae220018
    .word 0xae20001c
    .word 0x3c023f40
    .word 0xae220020
    .word 0x3c024100
    .word 0xae220024
    .word 0x3c024080
    .word 0xae220028
    .word 0x3c024270
    .word 0xae22002c
    .word 0xae200030
    .word 0xae200034
    .word 0x8e020050
    .word 0x44806000
    .word 0xae220008
    .word 0x8e220008
    .word 0xac510518
    .word 0x8e240000
    jal fn_174990
    .word 0x70002e28
    .word 0x8e240000
    .word 0x44806000
    jal fn_1747d0
    .word 0x46006346
    .word 0x3c020030
    addiu v1,v0,-4896
    .word 0xae200290
    .word 0x8e220008
    .word 0x3c017000
    paddub a0,s1,zero
    paddub a1,s0,zero
    .word 0xac43000c
    .word 0xc4203fb0
    jal fn_1b2c90
    .word 0xe6200264
    .word 0x8e230010
    .word 0xac60003c
    .word 0x8e030000
    beqz v1,L14163c
    nop
    .word 0x3c020033
    addiu a0,v0,-26768
    jal fn_1ba360
    addiu a1,s1,664
    .word 0x8e300008
    .word 0x8e03003c
    beqz v1,L1415e0
    nop
    .word 0x8e030010
    andi v1,v1,0x2
    bnez v1,L1415e0
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x8c420010
    jalr ra,v0
    .word 0x70002e28
    beqz v0,L1415e0
    nop
    .word 0x8e02000c
    addiu a2,zero,1
    paddub a0,s0,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70002e28
L1415e0:
    .word 0x8e300008
    addiu a1,zero,2
    .word 0x8e03003c
    beq v1,a1,L1416e4
    nop
    .word 0x8e030010
    andi v1,v1,0x2
    bnez v1,L1416e4
    nop
    .word 0x8e02000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s0,zero
    beqz v0,L1416e4
    nop
    .word 0x8e02000c
    addiu a1,zero,2
    addiu a2,zero,1
    .word 0x8c420014
    jalr ra,v0
    paddub a0,s0,zero
    b L1416e8
    .word 0x7bbf0020
L14163c:
    .word 0x8e300008
    .word 0x8e03003c
    beqz v1,L141690
    nop
    .word 0x8e030010
    andi v1,v1,0x2
    bnez v1,L141690
    nop
    .word 0x8e02000c
    paddub a0,s0,zero
    .word 0x8c420010
    jalr ra,v0
    .word 0x70002e28
    beqz v0,L141690
    nop
    .word 0x8e02000c
    addiu a2,zero,1
    paddub a0,s0,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70002e28
L141690:
    .word 0x8e300008
    addiu a1,zero,2
    .word 0x8e03003c
    beq v1,a1,L1416e4
    nop
    .word 0x8e030010
    andi v1,v1,0x2
    bnez v1,L1416e4
    nop
    .word 0x8e02000c
    .word 0x8c420010
    jalr ra,v0
    paddub a0,s0,zero
    beqz v0,L1416e4
    nop
    .word 0x8e02000c
    addiu a1,zero,2
    paddub a0,s0,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1416e4:
    .word 0x7bbf0020
L1416e8:
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}


