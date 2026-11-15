extern void func_0010a530(void);
extern void func_001ed920(void);
extern void func_001f4d30(void);
extern void func_001f6140(void);
extern void func_001f66a0(void);
extern void func_001f6d80(void);
extern void func_001f6fa0(void);
asm void f(void) {
    .set noreorder
    .word 0x27bdfba0
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c820014
    .word 0x70808628
    .word 0x24030001
    .word 0x70a09e28
    .word 0x70009628
    .word 0x00438804
    jal func_001f6d80
    .word 0x27a40050
    beq v0,zero,L47
    .word 0x72401628
    .word 0x3c023f80
    .word 0x44826000
    .word 0x27a40050
    jal func_001f4d30
    .word 0x72602e28
    .word 0x72202e28
    .word 0x27a40060
    jal func_001f6140
    .word 0x27a60050
    .word 0x8e110004
    .word 0x8e050018
    .word 0x8e060014
    .word 0x72604e28
    .word 0x24070001
    .word 0x27a80050
    jal func_001f66a0
    .word 0x72202628
    .word 0x8e030018
    .word 0x8e020010
    .word 0x72202628
    .word 0x00621018
    .word 0x02221021
    jal func_0010a530
    .word 0x2445007f
    .word 0x72002628
    jal func_001ed920
    .word 0x27a50060
    jal func_001f6fa0
    .word 0x27a40050
    .word 0x24120001
    .word 0x72401628
L47:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    .word 0x03e00008
    .word 0x27bd0460
}
