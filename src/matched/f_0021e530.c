extern void func_001c3b80(void);
extern void func_001c7710(void);
extern void func_002084c0(void);
extern void func_00208550(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff70
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c910008
    .word 0x8e230018
    .word 0x90630002
    andi v1,v1,0x20
    beqz v1,L21e630
    paddub s0,a1,zero
    .word 0x3c020033
    .word 0x2443a620
    .word 0x9462000c
    .word 0x24420001
    .word 0xa462000c
    jal func_001c3b80
    .word 0x8e240004
    .word 0xafb00084
    paddub s0,v0,zero
    .word 0x27a40040
    jal func_001c7710
    paddub a1,s0,zero
    .word 0x8e03000c
    addiu v0,zero,3
    andi v1,v1,0x3
    bne v1,v0,L21e5a4
    .word 0x3c023f80
    b L21e5d0
    .word 0xafa20080
L21e5a4:
    .word 0xc7a20060
    .word 0xc7a10064
    .word 0xc7a00068
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f0,$f0,$f0
    .word 0xe7a00080
    sqrt.s $f0,$f0
    .word 0xe7a00080
    nop
L21e5d0:
    .word 0x8e230018
    .word 0x3c020022
    .word 0x2444f180
    .word 0x27a50030
    .word 0x8c620044
    .word 0x24430010
    .word 0x8c42000c
    addu v0,v1,v0
    .word 0x8c420008
    .word 0x2442000c
    jal func_002084c0
    .word 0xafa20030
    .word 0x8e300064
    b L21e628
    .word 0x26310064
L21e60c:
    .word 0x8e040008
    .word 0x3c020022
    .word 0x27a60030
    jal func_00208550
    .word 0x2445f1d0
    .word 0x8e100000
    nop
L21e628:
    bne s0,s1,L21e60c
    nop
L21e630:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0090
}
