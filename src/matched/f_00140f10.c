extern void func_00140a60(void);
extern void func_00149e70(void);
extern void func_00256438(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0xc4810154
    .word 0x3c023f00
    mtc1 v0,$f0
    mov.s $f20,$f12
    paddub s2,a1,zero
    paddub s1,a2,zero
    add.s $f12,$f0,$f1
    jal func_00256438
    paddub s3,a0,zero
    bltz v0,L140f68
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L140f80
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L140f68:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L140f80:
    .word 0xe6600154
    .word 0x8e620074
    beqz v0,L1410a0
    addiu v0,zero,-256
    sltiu v0,s2,1024
    bnez v0,L14109c
    nop
    sltiu at,s2,4096
    beqz at,L14109c
    nop
    paddub a0,zero,zero
    paddub a1,s3,zero
    .word 0x3c027000
    ori a2,v0,0x3fb0
L140fb8:
    .word 0xc4a10088
    .word 0xc4c00000
    c.lt.s $f1,$f0
    nop
    bc1f L140fd8
    nop
    .word 0xaca00078
    .word 0xaca00080
L140fd8:
    .word 0x8e630070
    beqz v1,L140ff0
    nop
    .word 0x8ca20078
    beql v0,v1,L14100c
    paddub a0,s3,zero
L140ff0:
    bnezl v1,L141020
    addiu a0,a0,1
    .word 0x8ca30080
    .word 0x8e620074
    bne v1,v0,L14101c
    nop
    paddub a0,s3,zero
L14100c:
    jal func_00140a60
    nop
    b L141034
    .word 0x8e630090
L14101c:
    addiu a0,a0,1
L141020:
    slti v0,a0,2
    bnez v0,L140fb8
    addiu a1,a1,4
    nop
    .word 0x8e630090
L141034:
    .word 0x3c0241c8
    mtc1 v0,$f0
    .word 0x8e640070
    .word 0x3c017000
    addiu v0,zero,2
    sll v1,v1,0x2
    addu v1,v1,s3
    .word 0xac640078
    .word 0x8e630090
    .word 0x8e640074
    sll v1,v1,0x2
    addu v1,v1,s3
    .word 0xac640080
    .word 0xc4213fb0
    .word 0x8e630090
    add.s $f0,$f0,$f1
    sll v1,v1,0x2
    addu v1,v1,s3
    .word 0xe4600088
    .word 0x8e630090
    addiu v1,v1,1
    .word 0xae630090
    .word 0x8e630090
    bne v1,v0,L14109c
    nop
    .word 0xae600090
L14109c:
    addiu v0,zero,-256
L1410a0:
    and v1,s2,v0
    addiu v0,zero,8192
    beq v1,v0,L141144
    andi v0,s2,0xff
    addiu v0,zero,1024
    beq v1,v0,L141134
    andi v0,s2,0xff
    addiu v0,zero,2048
    beq v1,v0,L141124
    andi v0,s2,0xff
    addiu v0,zero,512
    beq v1,v0,L141114
    andi v0,s2,0xff
    addiu v0,zero,256
    beq v1,v0,L141104
    andi v0,s2,0xff
    beqz v1,L1410f4
    andi v0,s2,0xff
    b L141150
    .word 0x92030000
    andi v0,s2,0xff
L1410f4:
    addu v0,s3,v0
    b L14114c
    addiu s0,v0,512
    andi v0,s2,0xff
L141104:
    addu v0,s3,v0
    b L14114c
    addiu s0,v0,554
    andi v0,s2,0xff
L141114:
    addu v0,s3,v0
    b L14114c
    addiu s0,v0,568
    andi v0,s2,0xff
L141124:
    addu v0,s3,v0
    b L14114c
    addiu s0,v0,548
    andi v0,s2,0xff
L141134:
    addu v0,s3,v0
    b L14114c
    addiu s0,v0,542
    andi v0,s2,0xff
L141144:
    addu v0,s3,v0
    addiu s0,v0,569
L14114c:
    .word 0x92030000
L141150:
    slti v0,v1,10
    bnez v0,L141170
    andi v0,v1,0xff
    .word 0x3c01002e
    .word 0xc420e054
    b L141188
    .word 0xe660017c
    andi v0,v1,0xff
L141170:
    sll v1,v0,0x2
    .word 0x3c02002e
    addiu v0,v0,-8144
    addu v0,v0,v1
    .word 0xc4400000
    .word 0xe660017c
L141188:
    .word 0x92020000
    slti at,v0,255
    beqz at,L1411a0
    nop
    addiu v0,v0,1
    .word 0xa2020000
L1411a0:
    .word 0xae600174
    .word 0xae720168
    .word 0xc660017c
    mul.s $f0,$f20,$f0
    .word 0xe6600170
    .word 0xae71016c
    .word 0xae600178
    .word 0x8e620158
    sltiu at,v0,32
    beqz at,L1411dc
    nop
    .word 0x8e630168
    sll v0,v0,0x2
    addu v0,v0,s3
    .word 0xac430180
L1411dc:
    .word 0x8e630158
    .word 0x3c023a83
    ori v0,v0,0x126f
    mtc1 v0,$f0
    nop
    mul.s $f0,$f0,$f20
    addiu v0,v1,1
    .word 0xae620158
    .word 0xc6620170
    .word 0xc6610154
    add.s $f1,$f1,$f2
    .word 0xe6610154
    .word 0xc661015c
    add.s $f0,$f1,$f0
    .word 0xe660015c
    .word 0x8f8484ac
    beqz a0,L141234
    nop
    .word 0x8c820010
    paddub a1,zero,zero
    jalr ra,v0
    paddub a2,s3,zero
L141234:
    .word 0x8e630158
    addiu v0,zero,30
    bne v1,v0,L14125c
    addiu v0,zero,20
    .word 0x8e640008
    jal func_00149e70
    addiu a1,zero,5
    b L141294
    .word 0x7bbf0050
    addiu v0,zero,20
L14125c:
    bne v1,v0,L14127c
    addiu v0,zero,10
    .word 0x8e640008
    jal func_00149e70
    addiu a1,zero,4
    b L141290
    nop
    addiu v0,zero,10
L14127c:
    bne v1,v0,L141290
    nop
    .word 0x8e640008
    jal func_00149e70
    addiu a1,zero,3
L141290:
    .word 0x7bbf0050
L141294:
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,96
}
