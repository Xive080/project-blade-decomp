extern void func_001bf2b0(void);
extern void func_001ca2d0(void);
extern void func_001c07d0(void);
extern void func_001ccc10(void);
extern void func_00121b70(void);
extern void func_0016fa20(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-144
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    addiu a1,sp,80
    paddub s1,a0,zero
    jal func_001bf2b0
    .word 0x7fb00000
    .word 0x8fa30050
    addiu v0,zero,2325
    bne v1,v0,L18328c
    addiu a1,sp,96
    .word 0x3c020033
    addiu s2,sp,84
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    .word 0x8e440000
    .word 0x8e460000
    paddub s0,v0,zero
    paddub a0,s1,zero
    jal func_001ca2d0
    paddub a1,s0,zero
    addiu a1,sp,80
    jal func_001bf2b0
    paddub a0,s1,zero
    jal func_001c07d0
    paddub a0,s1,zero
    .word 0xae021c08
    addiu v0,s0,7180
    .word 0xae021c04
    .word 0x8e021c00
    .word 0x8e031c04
    .word 0x70008e28
    .word 0x70009e28
    sll v0,v0,0x2
    b L183270
    addu s2,v1,v0
L18323c:
    .word 0x8e041c08
    jal func_001ccc10
    paddub a1,s2,zero
    .word 0x8c430000
    paddub a0,s2,zero
    .word 0x8e021c04
    addu v0,v0,s3
    jal func_00121b70
    .word 0xac430000
    addiu v0,v0,1
    addu s2,s2,v0
    addiu s3,s3,4
    addiu s1,s1,1
L183270:
    .word 0x8e021c00
    slt v0,s1,v0
    bnez v0,L18323c
    nop
    b L1835fc
    paddub v0,s0,zero
    addiu a1,sp,96
L18328c:
    addiu a2,zero,36
    jal func_001ca2d0
    paddub a0,s1,zero
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    addiu a0,zero,7180
    addiu a0,sp,96
    jal func_0016fa20
    paddub s0,v0,zero
    addiu a0,zero,1795
    paddub a1,s0,zero
L1832c0:
    .word 0x8c430000
    addiu a0,a0,-1
    .word 0xaca30000
    addiu v0,v0,4
    addiu a1,a1,4
    bgtz a0,L1832c0
    nop
    .word 0xae001c08
    .word 0x8fa20080
    andi v0,v0,0x1
    beqz v0,L18347c
    daddiu a1,zero,97
    b L183360
    daddiu a1,zero,97
    addiu v0,v0,-32
L1832fc:
    andi v0,v0,0xff
    sll v0,v0,0x5
    addu a0,s0,v0
    .word 0xc483fc00
    .word 0xc482fc04
    andi v0,a1,0xff
    sll v0,v0,0x5
    addu v1,s0,v0
    .word 0xc481fc08
    .word 0xc480fc0c
    addiu v0,a1,1
    andi a1,v0,0xff
    .word 0xe463fc00
    .word 0xe462fc04
    .word 0xe461fc08
    .word 0xe460fc0c
    .word 0xc483fc10
    .word 0xc482fc14
    .word 0xc481fc18
    .word 0xc480fc1c
    .word 0xe463fc10
    .word 0xe462fc14
    .word 0xe461fc18
    .word 0xe460fc1c
    nop
L183360:
    andi v0,a1,0xff
    slti at,v0,123
    bnezl at,L1832fc
    addiu v0,v0,-32
    b L1833e0
    daddiu a1,zero,224
    addiu v0,v0,-32
L18337c:
    andi v0,v0,0xff
    sll v0,v0,0x5
    addu a0,s0,v0
    .word 0xc483fc00
    .word 0xc482fc04
    andi v0,a1,0xff
    sll v0,v0,0x5
    addu v1,s0,v0
    .word 0xc481fc08
    .word 0xc480fc0c
    addiu v0,a1,1
    andi a1,v0,0xff
    .word 0xe463fc00
    .word 0xe462fc04
    .word 0xe461fc08
    .word 0xe460fc0c
    .word 0xc483fc10
    .word 0xc482fc14
    .word 0xc481fc18
    .word 0xc480fc1c
    .word 0xe463fc10
    .word 0xe462fc14
    .word 0xe461fc18
    .word 0xe460fc1c
    nop
L1833e0:
    andi v0,a1,0xff
    slti at,v0,247
    bnezl at,L18337c
    addiu v0,v0,-32
    b L183460
    daddiu a1,zero,248
    addiu v0,v0,-32
L1833fc:
    andi v0,v0,0xff
    sll v0,v0,0x5
    addu a0,s0,v0
    .word 0xc483fc00
    .word 0xc482fc04
    andi v0,a1,0xff
    sll v0,v0,0x5
    addu v1,s0,v0
    .word 0xc481fc08
    .word 0xc480fc0c
    addiu v0,a1,1
    andi a1,v0,0xff
    .word 0xe463fc00
    .word 0xe462fc04
    .word 0xe461fc08
    .word 0xe460fc0c
    .word 0xc483fc10
    .word 0xc482fc14
    .word 0xc481fc18
    .word 0xc480fc1c
    .word 0xe463fc10
    .word 0xe462fc14
    .word 0xe461fc18
    .word 0xe460fc1c
    nop
L183460:
    andi v0,a1,0xff
    slti at,v0,255
    bnezl at,L1833fc
    addiu v0,v0,-32
    b L1835f8
    nop
    daddiu a1,zero,97
L18347c:
    b L1834ec
    andi v0,a1,0xff
    addiu v0,v0,-32
L183488:
    andi v0,v0,0xff
    sll v0,v0,0x5
    addu v1,s0,v0
    andi v0,a1,0xff
    sll v0,v0,0x5
    addu a0,s0,v0
    .word 0xc483fc00
    .word 0xc482fc04
    .word 0xc481fc08
    .word 0xc480fc0c
    addiu v0,a1,1
    andi a1,v0,0xff
    .word 0xe463fc00
    .word 0xe462fc04
    .word 0xe461fc08
    .word 0xe460fc0c
    .word 0xc483fc10
    .word 0xc482fc14
    .word 0xc481fc18
    .word 0xc480fc1c
    .word 0xe463fc10
    .word 0xe462fc14
    .word 0xe461fc18
    .word 0xe460fc1c
    andi v0,a1,0xff
L1834ec:
    slti at,v0,123
    bnezl at,L183488
    addiu v0,v0,-32
    b L183568
    daddiu a1,zero,224
    addiu v0,v0,-32
L183504:
    andi v0,v0,0xff
    sll v0,v0,0x5
    addu v1,s0,v0
    andi v0,a1,0xff
    sll v0,v0,0x5
    addu a0,s0,v0
    .word 0xc483fc00
    .word 0xc482fc04
    .word 0xc481fc08
    .word 0xc480fc0c
    addiu v0,a1,1
    andi a1,v0,0xff
    .word 0xe463fc00
    .word 0xe462fc04
    .word 0xe461fc08
    .word 0xe460fc0c
    .word 0xc483fc10
    .word 0xc482fc14
    .word 0xc481fc18
    .word 0xc480fc1c
    .word 0xe463fc10
    .word 0xe462fc14
    .word 0xe461fc18
    .word 0xe460fc1c
    nop
L183568:
    andi v0,a1,0xff
    slti at,v0,247
    bnezl at,L183504
    addiu v0,v0,-32
    b L1835e8
    daddiu a1,zero,248
    addiu v0,v0,-32
L183584:
    andi v0,v0,0xff
    sll v0,v0,0x5
    addu v1,s0,v0
    andi v0,a1,0xff
    sll v0,v0,0x5
    addu a0,s0,v0
    .word 0xc483fc00
    .word 0xc482fc04
    .word 0xc481fc08
    .word 0xc480fc0c
    addiu v0,a1,1
    andi a1,v0,0xff
    .word 0xe463fc00
    .word 0xe462fc04
    .word 0xe461fc08
    .word 0xe460fc0c
    .word 0xc483fc10
    .word 0xc482fc14
    .word 0xc481fc18
    .word 0xc480fc1c
    .word 0xe463fc10
    .word 0xe462fc14
    .word 0xe461fc18
    .word 0xe460fc1c
    nop
L1835e8:
    andi v0,a1,0xff
    slti at,v0,255
    bnezl at,L183584
    addiu v0,v0,-32
L1835f8:
    paddub v0,s0,zero
L1835fc:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,144
}


