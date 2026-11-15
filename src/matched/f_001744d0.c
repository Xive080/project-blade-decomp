extern void func_00175390(void);
extern void func_001765e0(void);
extern void func_00256438(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x00041840
    .word 0x27bdffd0
    .word 0x00641821
    .word 0x7fbf0020
    .word 0x00031880
    .word 0x7fb10010
    .word 0x00641821
    .word 0x7fb00000
    .word 0x00038080
    .word 0x3c030031
    .word 0x2463826c
    .word 0x00701821
    .word 0xac650000
    .word 0x3c030031
    .word 0x24638268
    .word 0x00701821
    .word 0x8c630000
    beqz v1, L1746a8
    nop
    .word 0x0005102b
    .word 0x38420001
    beqzl v0, L17460c
    .word 0x70808628
    .word 0x3c020031
    .word 0x24428270
    .word 0x00501021
    .word 0x8c450000
    jal func_00175390
    .word 0x70808e28
    .word 0x3c030031
    .word 0x24638264
    .word 0x00701821
    .word 0xac620000
    .word 0x8c630000
    beqz v1, L1746a8
    nop
    .word 0x3c030031
    .word 0x24638278
    .word 0x00701821
    .word 0xc4620000
    .word 0x00111840
    .word 0x00711821
    .word 0x00031880
    .word 0x00711821
    .word 0x00038080
    .word 0x3c030031
    .word 0x24638268
    .word 0x00701821
    .word 0x8c630000
    beqz v1, L1746a8
    nop
    .word 0x3c020031
    .word 0x2442828c
    addiu v1,zero,2
    .word 0x00501021
    .word 0xac430000
    .word 0x3c020031
    .word 0x24428274
    .word 0x00501021
    .word 0xc4410000
    .word 0x3c02437f
    .word 0x46011042
    .word 0x44820000
    jal func_00256438
    .word 0x46010302
    .word 0x3c030031
    .word 0x24638290
    .word 0x00701821
    .word 0xac620000
    .word 0x3c020031
    .word 0x24428260
    .word 0x00501021
    .word 0x2446002c
    addiu a1,zero,3
    jal func_001765e0
    .word 0x72202628
    b L1746ac
    .word 0x7bbf0020
    .word 0x70808628
L17460c:
    jal func_00175390
    .word 0x70002e28
    .word 0x00101840
    .word 0x00701821
    .word 0x00031880
    .word 0x00701821
    .word 0x00038880
    .word 0x3c030031
    .word 0x24638268
    .word 0x00711821
    .word 0x8c630000
    beqz v1, L1746a8
    nop
    .word 0x3c020031
    .word 0x2442828c
    .word 0x44801000
    addiu v1,zero,2
    .word 0x00511021
    .word 0xac430000
    .word 0x3c020031
    .word 0x24428274
    .word 0x00511021
    .word 0xc4410000
    .word 0x3c02437f
    .word 0x46011042
    .word 0x44820000
    jal func_00256438
    .word 0x46010302
    .word 0x3c030031
    .word 0x24638290
    .word 0x00711821
    .word 0xac620000
    .word 0x3c020031
    .word 0x24428260
    .word 0x00511021
    .word 0x2446002c
    addiu a1,zero,3
    jal func_001765e0
    .word 0x72002628
L1746a8:
    .word 0x7bbf0020
L1746ac:
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0030
}
