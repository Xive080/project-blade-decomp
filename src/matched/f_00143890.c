extern void func_00142680(void);
extern void func_001c3b80(void);
extern void func_00202b10(void);
extern void func_00202b40(void);
extern void func_00202b50(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-128
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    lw s1,24(a0)
    .word 0x70808628
    .word 0x70a09e28
    .word 0x70002e28
    jal func_00202b10
    .word 0x72202628
    jal func_00202b50
    .word 0x70402628
    .word 0x72202628
    jal func_00202b40
    .word 0x7040ae28
    lw a0,4(s0)
    jal func_001c3b80
    .word 0x70409628
    slt at,zero,s2
    .word 0x7040a628
    beqz at, L1439e8
    .word 0x70008e28
L1438f8:
    .word 0xc6a20000
    .word 0xc6a10004
    .word 0xc6a00008
    addiu a0,sp,112
    .word 0x72802e28
    .word 0xe4820000
    .word 0xe4810004
    jal func_00142680
    .word 0xe4800008
    .word 0xc7a10070
    .word 0xc6600000
    c.le.s $f1,$f0
    nop
    bc1t L14393c
    addiu v0,sp,116
    .word 0xe6610000
    addiu v0,sp,116
L14393c:
    .word 0xc6600004
    .word 0xc4410000
    c.le.s $f1,$f0
    nop
    bc1t L14395c
    addiu v1,sp,120
    .word 0xe6610004
    addiu v1,sp,120
L14395c:
    .word 0xc6600008
    .word 0xc4610000
    c.le.s $f1,$f0
    nop
    bc1t L143978
    nop
    .word 0xe6610008
L143978:
    .word 0xc7a10070
    .word 0xc660000c
    c.lt.s $f1,$f0
    nop
    bc1f L143998
    nop
    .word 0xe661000c
    nop
L143998:
    .word 0xc4410000
    .word 0xc6600010
    c.lt.s $f1,$f0
    nop
    bc1f L1439b8
    nop
    .word 0xe6610010
    nop
L1439b8:
    .word 0xc4610000
    .word 0xc6600014
    c.lt.s $f1,$f0
    nop
    bc1fl L1439dc
    addiu s1,s1,1
    .word 0xe6610014
    nop
    addiu s1,s1,1
L1439dc:
    slt v0,s1,s2
    bnez v0, L1438f8
    addiu s5,s5,12
L1439e8:
    .word 0x72001628
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,128
}
