extern void func_001dee30(void);
extern void func_001eea80(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffc0
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu s2,zero,1
    .word 0x70a04e28
    .word 0x70c08e28
    beqz s2, L1eefc8
    .word 0x70e08628
    .word 0x8f8287e0
    .word 0x0052082b
    beqz at, L1eef9c
    nop
    .word 0x70409628
L1eef9c:
    .word 0x8c880004
    .word 0x8c820000
    addiu a1,zero,8
    .word 0x72403628
    addiu a3,zero,1
    jalr ra,v0
    addiu a0,zero,3
    beqzl v0, L1eefcc
    .word 0x70009628
    b L1eefcc
    nop
L1eefc8:
    .word 0x70009628
L1eefcc:
    beqz s2, L1ef128
    .word 0x3c040100
    .word 0x34840404
    .word 0x00042438
    .word 0x34840400
    .word 0x3c021000
    .word 0x00042438
    .word 0x3445000a
    .word 0x34840001
    .word 0x70851b89
    .word 0x8f828690
    .word 0x3c05c000
    .word 0x34a5c000
    .word 0x3c047c08
    .word 0x00052c38
    .word 0x34848000
    .word 0x7c430000
    .word 0x8f828690
    .word 0x34a52000
    .word 0x0004203c
    .word 0x00052c38
    .word 0x24420010
    .word 0xaf828690
    .word 0x70851b89
    .word 0x8f828690
    .word 0x3c010033
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0x7a230000
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0x7a230010
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0x7a230020
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0x7a230030
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0x7a030000
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0x7a030010
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0x7a030020
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    .word 0xaf828690
    .word 0x7a030030
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x7823f5e0
    .word 0x24420010
    .word 0xaf828690
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    jal func_001eea80
    .word 0xaf828690
    jal func_001dee30
    nop
L1ef128:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0040
}
