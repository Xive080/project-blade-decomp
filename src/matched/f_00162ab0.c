extern void func_00164e90(void);
asm void func(void) {
    .set noreorder
.word 0x27bdffc0
.word 0x7fbf0030
.word 0x7fb20020
.word 0x7fb10010
.word 0x7fb00000
.word 0xaca00074
.word 0x8ca3003c
.word 0x34028000
.word 0x70808628
    bne v1,v0,L162aec
.word 0x70a08e28
    jal func_00164e90
.word 0x72202628
    b L162b40
.word 0x72001628
L162aec:
.word 0x24050010
    beq v1,a1,L162b3c
    nop
.word 0x8e220010
.word 0x30420002
    bnez v0,L162b3c
    nop
.word 0x8e22000c
.word 0x72202628
.word 0x8c420010
    jalr ra,v0
.word 0x2632000c
    beqz v0,L162b3c
    nop
.word 0x8e420000
.word 0x24050010
.word 0x72202628
.word 0x8c420014
    jalr ra,v0
.word 0x70003628
L162b3c:
.word 0x72001628
L162b40:
.word 0x7bbf0030
.word 0x7bb20020
.word 0x7bb10010
.word 0x7bb00000
    jr ra
.word 0x27bd0040
}
