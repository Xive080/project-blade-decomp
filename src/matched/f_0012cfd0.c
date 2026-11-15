extern void func_0012cfd0(void);
extern void func_0012d390(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff60
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x7080f628
    .word 0x70008628
    b L12d140
    .word 0x73c0be28
L12d00c:
    .word 0x8ef20430
    .word 0x70008e28
    b L12d0c0
    .word 0x7240b628
L12d01c:
    .word 0x8ed40430
    .word 0x70009e28
    b L12d040
    .word 0x7280ae28
L12d02c:
    jal func_0012cfd0
    .word 0x8ea40430
    .word 0x26b50004
    .word 0x26730001
    nop
L12d040:
    .word 0x8e820458
    .word 0x0262102a
    bnez v0, L12d02c
    nop
    .word 0x8e82003c
    beqz v0, L12d0ac
    .word 0x72802628
    .word 0x8e820010
    .word 0x30420002
    bnez v0, L12d0a8
    nop
    .word 0x8e82000c
    .word 0x72802628
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    .word 0x2693000c
    beqz v0, L12d0a8
    nop
    .word 0x8e620000
    .word 0x72802628
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    nop
L12d0a8:
    .word 0x72802628
L12d0ac:
    jal func_0012d390
    .word 0x70002e28
    .word 0x26d60004
    .word 0x26310001
    nop
L12d0c0:
    .word 0x8e420458
    .word 0x0222102a
    bnez v0, L12d01c
    nop
    .word 0x8e42003c
    beqz v0, L12d12c
    .word 0x72402628
    .word 0x8e420010
    .word 0x30420002
    bnez v0, L12d128
    nop
    .word 0x8e42000c
    .word 0x72402628
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    .word 0x2651000c
    beqz v0, L12d128
    nop
    .word 0x8e220000
    .word 0x72402628
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    nop
L12d128:
    .word 0x72402628
L12d12c:
    jal func_0012d390
    .word 0x70002e28
    .word 0x26f70004
    .word 0x26100001
    nop
L12d140:
    .word 0x8fc20458
    .word 0x0202102a
    bnez v0, L12d00c
    nop
    .word 0x8fc2003c
    beqz v0, L12d1a8
    .word 0x73c02628
    .word 0x8fc20010
    .word 0x30420002
    bnez v0, L12d1a4
    nop
    .word 0x8fc2000c
    .word 0x73c02628
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    .word 0x27d0000c
    beqz v0, L12d1a4
    nop
    .word 0x8e020000
    .word 0x73c02628
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L12d1a4:
    .word 0x73c02628
L12d1a8:
    jal func_0012d390
    .word 0x70002e28
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
    .word 0x27bd00a0
}
