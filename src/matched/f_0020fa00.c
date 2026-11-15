extern void func_001f3c40(void);
extern void func_0020eef0(void);
extern void func_002107d0(void);
extern void func_00213ce0(void);
extern void func_00216770(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdfd50
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8cb30000
    .word 0x8c910014
    .word 0x27a20094
    .word 0xafa00090
    .word 0xac530000
    .word 0x8c420000
    .word 0x9442005e
    bgtz v0, L20fa54
    .word 0x70808628
    b L20fc18
    addiu v0,zero,1
L20fa54:
    .word 0x27a40090
    jal func_00216770
    .word 0x72202e28
    .word 0x8e720054
    .word 0x8f828870
    .word 0x96450004
    jal func_0020eef0
    .word 0x02622021
    .word 0x8c550000
    .word 0x26530010
    .word 0x7000a628
    b L20fbf0
    .word 0x27968790
L20fa88:
    .word 0xafb300b0
    .word 0x26a20004
    .word 0x27b700b4
    .word 0xaee20000
    .word 0xafb400b8
    .word 0x8e630008
    .word 0x8e220314
    bnez v0, L20fad0
    .word 0x8c630000
    beqz v1, L20fad4
    .word 0x2626000c
    .word 0x8c640000
    .word 0x8ec20000
    beq a0,v0, L20fad0
    nop
    jal func_001f3c40
    nop
    nop
L20fad0:
    .word 0x2626000c
L20fad4:
    .word 0x70001628
    b L20fb40
    .word 0x70c01e28
L20fae0:
    .word 0x8c67005c
    .word 0x8e050018
    .word 0x8e04000c
    .word 0x24420001
    .word 0x00073880
    .word 0x00a72821
    .word 0x8ca70000
    .word 0x000728c0
    .word 0x00a72823
    .word 0x00052880
    .word 0x00bd2821
    .word 0x24a800c0
    .word 0x00072880
    .word 0x00852021
    .word 0x8c840000
    .word 0xad040014
    .word 0x8c840004
    .word 0xad040018
    .word 0x8d040004
    .word 0xad040008
    .word 0xad000004
    .word 0xa5000000
    .word 0xac680088
    .word 0x24630004
L20fb40:
    .word 0x8cc40000
    .word 0x0044202b
    bnez a0, L20fae0
    .word 0x27a40090
    jal func_00213ce0
    .word 0x27a500b0
    .word 0x8e230318
    beqz v1, L20fbc8
    nop
    .word 0x8ee40000
    .word 0x8e25000c
    .word 0x27a300b0
    .word 0x27a20090
    .word 0x70003e28
    .word 0x8c840000
    .word 0x0005082b
    .word 0xafa30280
    .word 0xafa20284
    beqz at, L20fbb8
    .word 0x24840018
    .word 0x27a60280
    nop
L20fb98:
    .word 0x8c830034
    .word 0x24e70001
    .word 0x00e5102b
    .word 0xacc30008
    .word 0x24840008
    bnez v0, L20fb98
    .word 0x24c60004
    nop
L20fbb8:
    .word 0x8e220318
    .word 0x24a50002
    jalr ra,v0
    .word 0x27a40280
L20fbc8:
    beqzl v0, L20fbe4
    .word 0x2673000c
    .word 0x27a40090
    .word 0x27a500b0
    jal func_002107d0
    .word 0x2626030c
    .word 0x2673000c
L20fbe4:
    .word 0x26b50004
    .word 0x26940001
    nop
L20fbf0:
    .word 0x96420004
    .word 0x0282102b
    bnez v0, L20fa88
    nop
    .word 0x8e22031c
    beqzl v0, L20fc18
    addiu v0,zero,1
    jalr ra,v0
    .word 0x27a40090
    addiu v0,zero,1
L20fc18:
    .word 0x7bbf0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd02b0
}
