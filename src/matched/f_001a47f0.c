extern void func_001a50d0(void);
extern void func_001f79f0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffa0
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c01002e
    .word 0x8c323604
    .word 0x7080a628
    .word 0x3c01002e
    .word 0x8c233248
    .word 0x3c01002e
    .word 0x8c223250
    sltu at,v1,v0
    beqz at,L1a4a64
    .word 0x70a09e28
    addiu v0,zero,254
    .word 0xae820000
    .word 0xae620000
    .word 0x3c02002e
    .word 0x24513240
    b L1a4a48
    .word 0x70008628
    .word 0x26260040
L1a4854:
    addiu a0,zero,14
    .word 0x72402e28
    nop
L1a4860:
    .word 0x78c30000
    .word 0x78c20010
    .word 0x2484ffff
    .word 0x7ca30000
    .word 0x7ca20010
    .word 0x24c60020
    bgtz a0,L1a4860
    .word 0x24a50020
    .word 0x3c02437f
    .word 0x44820800
    .word 0x44802000
    b L1a49a8
    addiu v0,zero,255
L1a4894:
    .word 0x3c01002e
    .word 0x8c233248
    andi a1,a0,0xff
    .word 0x24630001
    .word 0x3c01002e
    .word 0xac233248
    .word 0x3c01002e
    .word 0x8c233248
    .word 0x90640000
    .word 0x3c01002e
    .word 0x24630001
    .word 0xac233248
    slti at,a1,16
    beqz at,L1a48fc
    .word 0x24a3fff0
    .word 0x44840000
    sll v1,a1,0x2
    cvt.s.w $f0,$f0
    addu a0,s2,v1
    addu v1,s1,v1
    div.s $f0,$f0,$f1
    nop
    .word 0xe4800150
    b L1a49a8
    .word 0xe4600190
    .word 0x24a3fff0
L1a48fc:
    sll v1,v1,0x2
    addu a1,s1,v1
    .word 0xc4a301e0
    c.le.s $f3,$f4
    nop
    bc1f L1a4920
    nop
    b L1a4998
    .word 0x46002006
L1a4920:
    .word 0x44840000
    nop
    cvt.s.w $f2,$f0
    sub.s $f0,$f3,$f2
    c.lt.s $f0,$f4
    nop
    bc1tl L1a4960
    sub.s $f0,$f1,$f3
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L1a4998
    nop
    sub.s $f0,$f1,$f3
L1a4960:
    sub.s $f0,$f0,$f2
    c.le.s $f0,$f4
    nop
    bc1fl L1a4994
    .word 0x46002006
    nop
    nop
    div.s $f0,$f0,$f3
    nop
    nop
    b L1a4998
    nop
    .word 0x46002006
L1a4994:
    nop
L1a4998:
    addu v1,s2,v1
    .word 0xe4600190
    .word 0xe4a001d0
    nop
L1a49a8:
    .word 0x3c01002e
    .word 0x8c233248
    .word 0x90640000
    bne a0,v0,L1a4894
    nop
    .word 0x24620001
    .word 0x3c01002e
    .word 0xac223248
    .word 0x3c01002e
    .word 0x8c243248
    jal func_001a50d0
    .word 0x72802e28
    .word 0x3c01002e
    .word 0xac223248
    b L1a4a00
    addiu v0,zero,255
L1a49e8:
    .word 0x3c01002e
    .word 0x8c23324c
    .word 0x24630002
    .word 0x3c01002e
    .word 0xac23324c
    nop
L1a4a00:
    .word 0x3c01002e
    .word 0x8c24324c
    .word 0x90830000
    bne v1,v0,L1a49e8
    nop
    .word 0x24820001
    .word 0x3c01002e
    .word 0xac22324c
    .word 0x3c01002e
    .word 0x8c24324c
    jal func_001a50d0
    .word 0x72602e28
    .word 0x3c01002e
    .word 0x263101c0
    .word 0x265201c0
    .word 0x26100001
    .word 0xac22324c
    nop
L1a4a48:
    .word 0x3c01002e
    .word 0x8c22326c
    slt v0,s0,v0
    bnez v0,L1a4854
    .word 0x26260040
    b L1a4ae8
    .word 0x7bbf0050
L1a4a64:
    .word 0x3c01002e
    .word 0x8c223240
    .word 0x2442fffc
    sltiu at,v0,2
    beqz at,L1a4adc
    addiu v0,zero,6
    addiu v0,zero,1
    .word 0x3c01002e
    .word 0xac22361c
    .word 0x3c01002e
    .word 0x8c233240
    .word 0x3c027000
    ori v0,v0,0x3fb0
    .word 0x3c01002e
    .word 0xac233620
    .word 0xc4400000
    .word 0x3c01002e
    .word 0xe4203624
    .word 0x3c017000
    .word 0xc4203fb4
    .word 0x3c01002e
    jal func_001f79f0
    .word 0xe4203628
    .word 0x3c01002e
    .word 0xac22362c
    .word 0x3c017000
    .word 0xc4203fb0
    .word 0x3c01002e
    .word 0xe4203264
    addiu v0,zero,6
L1a4adc:
    .word 0x3c01002e
    .word 0xac223240
    .word 0x7bbf0050
L1a4ae8:
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    .word 0x27bd0060
}
