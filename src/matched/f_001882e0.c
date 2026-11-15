extern void func_001718d0(void);
extern void func_00185f50(void);
extern void func_001860d0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff80
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x70a0a628
    jal func_001718d0
    .word 0x7fb00000
    .word 0x70408628
    beqz s0, L188328
    nop
    .word 0x8e0300a0
    beqz v1, L188328
    nop
    .word 0x8e0300a4
    bnez v1, L188344
    nop
L188328:
    .word 0xae800018
    .word 0xae80001c
    .word 0x72802628
    jal func_00185f50
    .word 0xae800020
    b L1884b4
    .word 0x7bbf0050
L188344:
    .word 0xafa00060
    .word 0xafa00064
    .word 0x3c033f80
    .word 0xafa30068
    .word 0xafa3006c
    .word 0x8e0300a0
    bltz v1, L188374
    .word 0x00032042
    .word 0x44830000
    b L18838c
    .word 0x468000a0
    .word 0x00032042
L188374:
    .word 0x30630001
    .word 0x00832025
    .word 0x44840000
    nop
    .word 0x468000a0
    .word 0x46021080
L18838c:
    .word 0x3c033f80
    .word 0x44830800
    .word 0xc6800008
    .word 0x46020843
    .word 0x46010002
    .word 0xe6800008
    .word 0xc680000c
    .word 0x46010002
    .word 0xe680000c
    .word 0x8e0300a4
    bltz v1, L1883cc
    .word 0x00032042
    .word 0x44830000
    b L1883e4
    .word 0x468000a0
    .word 0x00032042
L1883cc:
    .word 0x30630001
    .word 0x00832025
    .word 0x44840000
    nop
    .word 0x468000a0
    .word 0x46021080
L1883e4:
    .word 0x3c033f80
    .word 0x44830800
    .word 0xc6800010
    .word 0x46020843
    .word 0x72008e28
    .word 0x70009e28
    .word 0x46010002
    .word 0xe6800010
    .word 0xc6800014
    .word 0x46010002
    b L1884a0
    .word 0xe6800014
L188414:
    .word 0xc6810000
    .word 0xc6800004
    .word 0x27a30078
    .word 0x70009628
    .word 0xe4610000
    b L188468
    .word 0xe4600004
L188430:
    .word 0x8e240000
    .word 0x27a60060
    jal func_001860d0
    .word 0x72802e28
    .word 0xc6810000
    .word 0xc6800008
    .word 0x26310004
    .word 0x26520001
    .word 0x46000800
    .word 0xe6800000
    .word 0xc6810004
    .word 0xc680000c
    .word 0x46000800
    .word 0xe6800004
L188468:
    .word 0x8e0300a0
    .word 0x0243182b
    bnez v1, L188430
    nop
    .word 0xc6810010
    .word 0xc7a00078
    .word 0x26730001
    .word 0x46010000
    .word 0xe6800000
    .word 0xc6810014
    .word 0xc7a0007c
    .word 0x46010000
    .word 0xe6800004
    nop
L1884a0:
    .word 0x8e0300a4
    .word 0x0263182b
    bnez v1, L188414
    nop
    .word 0x7bbf0050
L1884b4:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0080
}
