extern void func_0017ec10(void);
asm void f(void) {
    .set noreorder
    .set noat
    .word 0x27bdff30
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xafa40090
    .word 0xafa700c0
    .word 0x8fb200c0
    .word 0x8fa20090
    .word 0x8c510000
    .word 0x96220002
    bnez v0,L12755c
    nop
    .word 0x8fa20090
    b L127714
    nop
L12755c:
    .word 0x8e23000c
    .word 0x8f8288b0
    .word 0xac430010
    .word 0x8f8288b0
    .word 0xac400080
    .word 0x96220002
    .word 0x3043ffff
    .word 0x8f8288b0
    .word 0xac430020
    .word 0x24020001
    .word 0x8f8588b0
    .word 0x90a40001
    .word 0x30430001
    .word 0x2402fffe
    .word 0x00821024
    .word 0x00431025
    .word 0xa0a20001
    .word 0x8e300004
    .word 0x3c157000
    .word 0x70009e28
    b L127640
    nop
L1275b4:
    .word 0x8e020004
    .word 0x00021900
    .word 0x8e22000c
    .word 0x00433021
    .word 0x8e020008
    .word 0x00021900
    .word 0x8e22000c
    .word 0x00433821
    .word 0x8e02000c
    .word 0x00021900
    .word 0x8e22000c
    .word 0x00434021
    .word 0x72402628
    .word 0x26450010
    .word 0x27a9008c
    .word 0x27aa0070
    jal func_0017ec10
    nop
    beqz v0,L127638
    nop
    .word 0x8fa40090
    .word 0x72002e28
    .word 0xc7ac008c
    .word 0x27a60070
    .word 0x8e470020
    .word 0x8e420024
    jalr ra,v0
    nop
    bnez v0,L127638
    nop
    .word 0x70001628
    b L127714
    nop
L127638:
    .word 0x26100010
    .word 0x26730001
L127640:
    .word 0x8f8288b0
    .word 0x90420001
    .word 0x30420001
    beqz v0,L127668
    nop
    .word 0x96220000
    .word 0x3042ffff
    .word 0x0262102a
    bnez v0,L1275b4
    nop
L127668:
    .word 0x7260a628
    b L1276f8
    nop
L127674:
    .word 0x8e020004
    .word 0x00021100
    .word 0x02a23021
    .word 0x8e020008
    .word 0x00021100
    .word 0x02a23821
    .word 0x8e02000c
    .word 0x00021100
    .word 0x02a24021
    .word 0x72402628
    .word 0x26450010
    .word 0x27a9008c
    .word 0x27aa0070
    jal func_0017ec10
    nop
    beqz v0,L1276ec
    nop
    .word 0x8fa40090
    .word 0x72002e28
    .word 0xc7ac008c
    .word 0x27a60070
    .word 0x8e470020
    .word 0x8e420024
    jalr ra,v0
    nop
    bnez v0,L1276ec
    nop
    .word 0x70001628
    b L127714
    nop
L1276ec:
    .word 0x26100010
    .word 0x26940001
    nop
L1276f8:
    .word 0x96220000
    .word 0x3042ffff
    .word 0x0282102a
    bnez v0,L127674
    nop
    .word 0x8fa20090
    nop
L127714:
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    .word 0x27bd00d0
    jr ra
    nop
}
