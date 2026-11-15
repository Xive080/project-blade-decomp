extern void func_001dee30(void);
extern void func_001eea80(void);
asm void f(void) {
    .set noreorder
    .set noat
    .word 0x27bdffa0
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x7080a628
    .word 0x70a09e28
    .word 0x70c09628
    b L1ef8c8
    .word 0x24f0ffff
L1ef700:
    .word 0x7822f5e0
    b L1ef8b0
    .word 0x02118023
    .word 0x2e210011
L1ef710:
    bnez at,L1ef720
    .word 0x72201e28
    .word 0x24030010
    nop
L1ef720:
    .word 0x000320c0
    .word 0x0004203c
    .word 0x0004203e
    .word 0x64850002
    .word 0x3c041000
    .word 0x00a43025
    .word 0x3c040100
    .word 0x34840404
    .word 0x00042438
    .word 0x0003283c
    .word 0x34840400
    .word 0x0005283e
    .word 0x00042438
    .word 0x00a42825
    .word 0x02238823
    .word 0x70a63b89
    .word 0x8f868690
    .word 0x000324c0
    .word 0x0004283c
    .word 0x3c047c00
    .word 0x0005283e
    .word 0x34848000
    .word 0x00a42025
    .word 0x7cc70000
    .word 0x0004283c
    .word 0x8f848690
    .word 0x3c06c000
    .word 0x34c6c000
    .word 0x00063438
    .word 0x34c62000
    .word 0x00063438
    .word 0x24840010
    .word 0xaf848690
    .word 0x70a63b89
    .word 0x8f848690
    .word 0x7c870000
    .word 0x8f848690
    .word 0x24840010
    b L1ef888
    .word 0xaf848690
L1ef7c0:
    .word 0x7a450000
    .word 0x8f848690
    .word 0x7c850000
    .word 0x8f848690
    .word 0x24840010
    .word 0xaf848690
    .word 0x7a450010
    .word 0x8f848690
    .word 0x7c850000
    .word 0x8f848690
    .word 0x24840010
    .word 0xaf848690
    .word 0x7a450020
    .word 0x8f848690
    .word 0x7c850000
    .word 0x8f848690
    .word 0x24840010
    .word 0xaf848690
    .word 0x7a450030
    .word 0x8f848690
    .word 0x7c850000
    .word 0x8f848690
    .word 0x24840010
    .word 0xaf848690
    .word 0x7a450040
    .word 0x8f848690
    .word 0x7c850000
    .word 0x8f848690
    .word 0x24840010
    .word 0xaf848690
    .word 0x7a450050
    .word 0x8f848690
    .word 0x7c850000
    .word 0x8f848690
    .word 0x24840010
    .word 0xaf848690
    .word 0x7a450060
    .word 0x8f848690
    .word 0x7c850000
    .word 0x8f848690
    .word 0x24840010
    .word 0xaf848690
    .word 0x7a450070
    .word 0x8f848690
    .word 0x26520040
    .word 0x7c850000
    .word 0x8f848690
    .word 0x24840010
    .word 0xaf848690
    nop
L1ef888:
    .word 0x70602628
    bnez a0,L1ef7c0
    .word 0x2463ffff
    .word 0x8f838690
    .word 0x3c010033
    .word 0x7c620000
    .word 0x8f838690
    .word 0x7822f560
    .word 0x24630010
    .word 0xaf838690
L1ef8b0:
    bnez s1,L1ef710
    .word 0x2e210011
    jal func_001eea80
    nop
    jal func_001dee30
    nop
L1ef8c8:
    beqz s0,L1ef918
    .word 0x72008e28
    .word 0x8f8287e0
    .word 0x0050082b
    beqz at,L1ef8e8
    nop
    .word 0x70408e28
    nop
L1ef8e8:
    .word 0x8e880004
    .word 0x8e820000
    .word 0x24040003
    .word 0x24050008
    .word 0x72203628
    .word 0x24070001
    .word 0x0040f809
    .word 0x72604e28
    beqzl v0,L1ef91c
    .word 0x70008e28
    b L1ef920
    nop
L1ef918:
    .word 0x70008e28
L1ef91c:
    nop
L1ef920:
    bnez s1,L1ef700
    .word 0x3c010033
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0060
}
