extern void func_00142860(void);
asm void func(void) {
    .set noreorder
.word 0x27bdffb0
.word 0x7fbf0040
.word 0x7fb30030
.word 0x7fb20020
.word 0x7fb10010
.word 0x7fb00000
.word 0x70a09628
.word 0xac9200a8
.word 0x8c9300a0
    beqz s3,L1428f0
    nop
L14288c:
.word 0xae7200a8
.word 0x8e7000a0
    beqz s0,L1428e0
    nop
    nop
L1428a0:
.word 0xae1200a8
.word 0x8e1100a0
    beqz s1,L1428d0
    nop
L1428b0:
.word 0x72202628
    jal func_00142860
.word 0x72402e28
.word 0x8e3100a4
    nop
    bnez s1,L1428b0
    nop
    nop
L1428d0:
.word 0x8e1000a4
    bnez s0,L1428a0
    nop
    nop
L1428e0:
.word 0x8e7300a4
    bnez s3,L14288c
    nop
    nop
L1428f0:
.word 0x7bbf0040
.word 0x7bb30030
.word 0x7bb20020
.word 0x7bb10010
.word 0x7bb00000
    jr ra
.word 0x27bd0050
}
