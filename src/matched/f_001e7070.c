extern void func_0010a530(void);
extern void func_001ccf50(void);
extern void func_001e6210(void);
extern void func_001e6440(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffd0
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x90a20022
    .word 0x30420006
    bnez v0, L1e7098
    .word 0x70a08628
    b L1e7264
    .word 0x70001628
L1e7098:
    .word 0x92030020
    addiu v0,zero,1
    .word 0x30630007
    beq v1,v0, L1e70c4
    addiu v0,zero,5
    beq v1,v0, L1e70c4
    addiu v0,zero,2
    beq v1,v0, L1e70c4
    nop
    b L1e7108
    .word 0x8f83877c
L1e70c4:
    .word 0x8e040004
    beqz a0, L1e720c
    nop
    .word 0x8e05000c
    .word 0x8e030010
    .word 0x8e020014
    .word 0x00a31818
    .word 0x00431818
    bgez v1, L1e70f4
    .word 0x000310c3
    .word 0x24620007
    .word 0x000210c3
L1e70f4:
    .word 0x00821021
    jal func_0010a530
    .word 0x2445007f
    b L1e7210
    .word 0x92030023
L1e7108:
    .word 0x8e020004
    beqz v0, L1e71cc
    .word 0x02038821
    .word 0x92240036
    .word 0x30820002
    beqz v0, L1e7160
    .word 0x30820004
    .word 0x8e230008
    addiu v0,zero,19
    .word 0x00031d02
    .word 0x3063003f
    bne v1,v0, L1e715c
    nop
    .word 0x8e020018
    .word 0x28420010
    bnez v0, L1e715c
    nop
    jal func_001e6210
    .word 0x72002628
    b L1e719c
    .word 0x8e05000c
L1e715c:
    .word 0x30820004
L1e7160:
    beqz v0, L1e7198
    nop
    .word 0x8e230008
    addiu v0,zero,20
    .word 0x00031d02
    .word 0x3063003f
    bne v1,v0, L1e7198
    nop
    .word 0x8e020018
    .word 0x28420010
    bnez v0, L1e7198
    .word 0x72002628
    jal func_001e6440
    nop
L1e7198:
    .word 0x8e05000c
L1e719c:
    .word 0x8e030010
    .word 0x8e020014
    .word 0x8e040004
    .word 0x00a31818
    .word 0x00431818
    bgez v1, L1e71c0
    .word 0x000310c3
    .word 0x24620007
    .word 0x000210c3
L1e71c0:
    .word 0x00821021
    jal func_0010a530
    .word 0x2445007f
L1e71cc:
    .word 0x8e020028
    .word 0xae02000c
    .word 0x8e02002c
    .word 0xae020010
    .word 0x8e020030
    .word 0xae020018
    .word 0x8e020024
    .word 0xae020004
    .word 0x92220036
    .word 0x30420001
    beqz v0, L1e720c
    nop
    .word 0x8e020004
    .word 0x8c420004
    .word 0x24420050
    .word 0xae020004
L1e720c:
    .word 0x92030023
L1e7210:
    .word 0x30620080
    beqz v0, L1e7250
    .word 0x30620010
    beqz v0, L1e7250
    nop
    .word 0x92030022
    .word 0x30620004
    beqz v0, L1e7250
    addiu v0,zero,-7
    .word 0x00621024
    .word 0xa2020022
    .word 0x72002628
    jal func_001ccf50
    .word 0x70002e28
    b L1e7264
    addiu v0,zero,1
L1e7250:
    .word 0x82030022
    addiu v0,zero,-7
    .word 0x00621024
    .word 0xa2020022
    addiu v0,zero,1
L1e7264:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0030
}
