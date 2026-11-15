extern void fn12f0c0(void);
extern void fn12f2d0(void);
extern void fn12f560(void);
extern void fn16b090(void);
extern void fn1c2170(void);
extern void fn1c2180(void);
extern void fn1c2320(void);
extern void fn1c2360(void);
extern void fn1c5e90(void);
extern void fn1c5eb0(void);
extern void fn1c9e00(void);
extern void fn1cafe0(void);
extern void fn1e9a70(void);
extern void fn1f4630(void);
extern void fn1fa780(void);
extern void fn25d370(void);
asm void func(void) {
.set noreorder
.set noat
    .word 0x27bdff60
    .word 0x7fbf0070
    .word 0x7fb30060
    .word 0x7fb20050
    .word 0x7fb10040
    jal fn1f4630
    .word 0x7fb00030
    .word 0x3c010030
    .word 0x8c22a42c
    beqz v0,L37
    .word 0x00000000
    .word 0xc7808020
    .word 0x27a5009c
    .word 0x3c010030
    .word 0xe4a00000
    .word 0x8c24a360
    jal fn1c2320
    .word 0x24060003
    .word 0x3c010030
    jal fn1c2180
    .word 0x8c24a360
    .word 0x3c010030
    jal fn1c2170
    .word 0x8c24a360
    .word 0x3c010030
    .word 0x8c24a360
    .word 0x70002e28
    jal fn1c2360
    .word 0x70003628
    jal fn1c9e00
    .word 0x00000000
    .word 0x3c010030
    .word 0x70002628
    jal fn25d370
    .word 0xac20a42c
    b L266
    .word 0x7bbf0070
L37:
    .word 0x3c010030
    .word 0x8c23a364
    .word 0x30620002
    beqz v0,L43
    .word 0x70003628
    .word 0x34c60001
L43:
    .word 0x30620001
    bnezl v0,L54
    .word 0x34c60002
    .word 0x30620004
    beqz v0,L54
    .word 0x00000000
    .word 0x3c010030
    .word 0x8c22a420
    bnez v0,L54
    .word 0x00000000
    .word 0x34c60002
L54:
    beqz a2,L61
    .word 0x00000000
    .word 0x3c010030
    .word 0x8c24a360
    .word 0x3c020030
    jal fn1c2320
    .word 0x2445a418
L61:
    .word 0x3c010030
    .word 0x8c22a364
    .word 0x30420008
    beqz v0,L146
    .word 0x00000000
    .word 0x3c02002e
    .word 0x2442dfc0
    .word 0x78430000
    .word 0x27a40080
    .word 0x3c010030
    .word 0x7c830000
    .word 0x8c30a360
    .word 0x3c020033
    .word 0x2442a620
    jal fn16b090
    .word 0xac500000
    bnez v0,L81
    .word 0x00000000
    jal fn1cafe0
    .word 0x00000000
L81:
    .word 0x3c020033
    .word 0x2442a620
    .word 0x8c42004c
    .word 0x72002e28
    .word 0x70002628
    .word 0x0040f809
    .word 0x70003628
    jal fn1c5e90
    .word 0x00000000
    .word 0x3c010030
    .word 0x8c31a41c
    .word 0x46000024
    .word 0x3c010030
    .word 0x8c33a360
    .word 0x44120000
    .word 0x8e620060
    .word 0x8c42000c
    bgez v0,L102
    .word 0x00028143
    .word 0x2442001f
    .word 0x00028143
L102:
    .word 0x24040001
    jal fn1c5eb0
    .word 0x72202e28
    .word 0x8e630060
    .word 0xc7a30080
    .word 0xc7a20084
    .word 0xc7a10088
    .word 0xc7a0008c
    .word 0x8e220010
    .word 0x8467001e
    .word 0x460018e4
    .word 0x24060020
    .word 0x72002628
    .word 0x70004e28
    .word 0xffa20000
    .word 0x44021800
    .word 0x460010a4
    .word 0xffb20008
    .word 0x304200ff
    .word 0xffa20010
    .word 0x70005e28
    .word 0x44021000
    .word 0x46000864
    .word 0x304200ff
    .word 0xffa20018
    .word 0x44020800
    .word 0x46000024
    .word 0x304200ff
    .word 0xffa20020
    .word 0x44020000
    .word 0x00000000
    .word 0x304200ff
    .word 0xffa20028
    .word 0x8e22000c
    .word 0x8465001c
    .word 0x0050001a
    .word 0x8c630010
    .word 0x00000000
    .word 0x00005012
    jal fn12f2d0
    .word 0x00e34021
    .word 0x3c010030
    jal fn1c2170
    .word 0x8c24a360
L146:
    .word 0x3c010030
    .word 0x8c22a364
    .word 0x30420010
    beqz v0,L177
    .word 0x24020001
    .word 0x3c010030
    .word 0x8c23a428
    .word 0x24020001
    bne v1,v0,L158
    .word 0x00000000
    .word 0x3c010030
    .word 0xac20a428
L158:
    jal fn1e9a70
    .word 0x00000000
    .word 0x3c020030
    .word 0x2451a370
    .word 0x70008628
L163:
    .word 0x8e220000
    .word 0x30420001
    beqzl v0,L171
    .word 0x26100001
    .word 0x72202628
    jal fn12f560
    .word 0x72002e28
    .word 0x26100001
L171:
    .word 0x2a020002
    bnez v0,L163
    .word 0x2631004c
    b L179
    .word 0x00000000
    .word 0x24020001
L177:
    .word 0x3c010030
    .word 0xac22a428
L179:
    .word 0x3c010030
    .word 0x8c22a36c
    beqz v0,L258
    .word 0x00000000
    .word 0x3c010030
    .word 0x8c30a360
    .word 0x3c020033
    .word 0x2442a620
    jal fn16b090
    .word 0xac500000
    bnez v0,L193
    .word 0x00000000
    jal fn1cafe0
    .word 0x00000000
L193:
    .word 0x3c020033
    .word 0x2442a620
    .word 0x8c42004c
    .word 0x72002e28
    .word 0x70002628
    .word 0x0040f809
    .word 0x70003628
    .word 0x3c010030
    .word 0x8c24a360
    .word 0x3c010030
    .word 0x8c22a36c
    .word 0x0040f809
    .word 0x00000000
    .word 0x3c010030
    .word 0xc421a414
    .word 0x44800000
    .word 0x00000000
    .word 0x46000836
    .word 0x00000000
    bc1t L255
    .word 0x00000000
    jal fn1c5e90
    .word 0x00000000
    .word 0x3c010030
    .word 0x8c22a360
    .word 0x46000124
    .word 0x3c010030
    .word 0xc423a408
    .word 0x8c430060
    .word 0x44092000
    .word 0x3c010030
    .word 0xc422a40c
    .word 0x460018e4
    .word 0x8467001e
    .word 0x3c010030
    .word 0xc421a410
    .word 0x44021800
    .word 0x460010a4
    .word 0x304a00ff
    .word 0x3c010030
    .word 0xc420a414
    .word 0x44021000
    .word 0x46000864
    .word 0x304b00ff
    .word 0x44020800
    .word 0x46000024
    .word 0x304200ff
    .word 0xffa20000
    .word 0x44020000
    .word 0x00000000
    .word 0x304200ff
    .word 0xffa20008
    .word 0x8c62000c
    bgez v0,L250
    .word 0x00022143
    .word 0x2442001f
    .word 0x00022143
L250:
    .word 0x8c620010
    .word 0x8465001c
    .word 0x24060020
    jal fn12f0c0
    .word 0x00e24021
L255:
    .word 0x3c010030
    jal fn1c2170
    .word 0x8c24a360
L258:
    jal fn1fa780
    .word 0x00000000
    .word 0x3c010030
    .word 0x8c24a360
    .word 0x70002e28
    jal fn1c2360
    .word 0x70003628
    .word 0x7bbf0070
L266:
    .word 0x7bb30060
    .word 0x7bb20050
    .word 0x7bb10040
    .word 0x7bb00030
    .word 0x03e00008
    .word 0x27bd00a0
}
