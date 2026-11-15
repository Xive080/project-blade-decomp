extern void func_00114200(void);
extern void func_001214b8(void);
extern void func_001217e0(void);
extern void func_00121b70(void);
extern void func_001b49e0(void);
extern void func_001b54d0(void);
extern void func_001b54e0(void);
extern void func_001b6050(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff50
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70808628
    jal func_001b54e0
    .word 0x70a08e28
    .word 0x3c010033
    .word 0x8c228514
    .word 0x2c410005
    beqz at, L1b835c
    addiu v0,zero,1668
    b L1b8588
    .word 0x70001628
    addiu v0,zero,1668
L1b835c:
    .word 0x02021818
    .word 0x3c020033
    .word 0x24428a40
    .word 0x00438021
    .word 0x8e020004
    beqz v0, L1b8380
    nop
    b L1b8588
    .word 0x70001628
L1b8380:
    .word 0x3c010033
    .word 0x8c229754
    beqz v0, L1b83a4
    nop
    .word 0x3c020033
    jal func_001b6050
    .word 0x24448440
    b L1b83d4
    nop
L1b83a4:
    jal func_001b54d0
    nop
    .word 0x3c030033
    .word 0x24658440
    addiu a0,zero,49
L1b83b8:
    .word 0x8c430000
    .word 0x2484ffff
    .word 0xaca30000
    .word 0x24420004
    .word 0x24a50004
    bgtz a0, L1b83b8
    nop
L1b83d4:
    .word 0x3c020033
    .word 0x24448440
    jal func_001b49e0
    addiu a1,zero,196
    .word 0x8e030008
    addiu v0,zero,8
    bne v1,v0, L1b847c
    nop
    .word 0x26020014
    .word 0x3c010033
    .word 0xac228668
    .word 0x3c02002f
    .word 0x24450230
    .word 0x3c020033
    .word 0x27a40030
    jal func_001214b8
    .word 0x24468648
    jal func_00121b70
    .word 0x27a40030
    .word 0x3c02002f
    .word 0x27a40030
    jal func_001217e0
    .word 0x244502c0
    .word 0x8e040000
    .word 0x8c820068
    jalr ra,v0
    .word 0x27a50030
    bnez v0, L1b8454
    addiu v0,zero,11
    b L1b8588
    .word 0x70001628
    addiu v0,zero,11
L1b8454:
    .word 0x3c010033
    .word 0xac228518
    addiu v0,zero,6
    .word 0x3c010033
    .word 0xac228520
    .word 0x3c020033
    .word 0x24428580
    .word 0x3c010033
    b L1b853c
    .word 0xac228524
L1b847c:
    .word 0x3c020033
    .word 0x24448530
    .word 0x3c02002f
    .word 0x244502c8
    .word 0x3c02002f
    .word 0x244602d0
    .word 0x3c02002f
    .word 0x26270001
    jal func_001214b8
    .word 0x244802d8
    .word 0x26020014
    .word 0x3c010033
    .word 0xac228578
    .word 0x3c02002f
    .word 0x24450230
    .word 0x3c020033
    .word 0x27a40070
    jal func_001214b8
    .word 0x24468648
    jal func_00121b70
    .word 0x27a40070
    .word 0x005d1021
    .word 0x24440070
    .word 0x3c02002f
    .word 0x24450230
    .word 0x3c020033
    jal func_001214b8
    .word 0x24468530
    .word 0x8e040000
    .word 0x27a50070
    .word 0x8c820000
    jalr ra,v0
    addiu a2,zero,22
    .word 0x3c010033
    bnez v0, L1b8514
    .word 0xac228528
    b L1b8588
    .word 0x70001628
L1b8514:
    addiu v0,zero,7
    .word 0x3c010033
    .word 0xac228518
    addiu v0,zero,2
    .word 0x3c010033
    .word 0xac228520
    .word 0x3c020033
    .word 0x24428530
    .word 0x3c010033
    .word 0xac228524
L1b853c:
    .word 0x3c010033
    .word 0xac308510
    .word 0x3c010033
    .word 0xac208514
    .word 0x3c010033
    .word 0x26040018
    jal func_00114200
    .word 0xac20851c
    .word 0x00111080
    .word 0x00511021
    .word 0x00021080
    addiu v1,zero,1
    .word 0x00501021
    .word 0xae110020
    .word 0x26040014
    addiu a1,zero,1648
    jal func_001b49e0
    .word 0xac430034
    addiu v0,zero,1
L1b8588:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd00b0
}


