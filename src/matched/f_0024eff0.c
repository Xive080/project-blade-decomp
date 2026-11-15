extern void func_00182cf0(void);
extern void func_00182e50(void);
extern void func_00189050(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-256
    .word 0x7fbf00a0
    .word 0x7fbe0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x3c024120
    .word 0x4482a800
    .word 0xc481008c
    .word 0xc4800094
    sll v0,a1,0x3
    addu v0,a0,v0
    mov.s $f22,$f12
    addiu s0,v0,176
    .word 0x3c0241d0
    .word 0x44821000
    add.s $f0,$f1,$f0
    .word 0x3c024160
    addiu s1,zero,1
    add.s $f1,$f2,$f0
    .word 0x70e0a628
    .word 0x44821000
    bltz a1,L24f07c
    .word 0x7080ae28
    .word 0x44850000
    b L24f098
    cvt.s.w $f0,$f0
L24f07c:
    srl v1,a1,0x1
    andi v0,a1,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L24f098:
    .word 0x8f8489f0
    mul.s $f20,$f2,$f0
    addiu v0,zero,2
    .word 0x3c033f80
    .word 0x70c02e28
    .word 0xc6a00088
    .word 0x8c840008
    add.s $f1,$f20,$f1
    .word 0xafa200b0
    addiu v0,sp,180
    .word 0xac400000
    addiu v0,sp,184
    .word 0xac430000
    addiu v0,sp,188
    .word 0xe4400000
    addiu v0,sp,192
    .word 0xe4410000
    addiu v0,sp,220
    .word 0xac440000
    addiu v0,sp,224
    jal func_00182e50
    .word 0xac460000
    addiu s7,sp,228
    .word 0xe6e00000
    .word 0xc6e00000
    .word 0x3c044160
    .word 0x44840800
    .word 0x3c02002e
    addiu v1,v0,1696
    mul.s $f0,$f1,$f0
    addiu v0,sp,196
    addiu s8,sp,200
    .word 0xe4400000
    .word 0xafc40000
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    addiu s2,sp,204
    addiu a0,sp,176
    addiu s3,s5,40
    .word 0xe6430000
    .word 0xe6420004
    .word 0xe6410008
    .word 0xe640000c
    .word 0x8f8389f0
    .word 0x8ea2002c
    .word 0x8ea60028
    addiu s6,s5,44
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,3
    .word 0xae020000
    .word 0x3c024120
    .word 0x44820000
    nop
    c.lt.s $f22,$f0
    nop
    bc1t L24f1a8
    nop
L24f188:
    mul.s $f21,$f21,$f0
    addiu s1,s1,1
    c.lt.s $f22,$f21
    nop
    nop
    bc1f L24f188
    nop
    nop
L24f1a8:
    .word 0x8f8489f0
    .word 0x3c0241d0
    .word 0x44821000
    .word 0xc6a4008c
    .word 0xc6a30094
    .word 0xc6a10088
    .word 0xc6a00090
    .word 0x8c84000c
    addiu v0,zero,3
    add.s $f3,$f4,$f3
    .word 0x3c033f80
    .word 0x72202e28
    .word 0xafa200b0
    addiu v0,sp,180
    add.s $f2,$f2,$f3
    .word 0xac430000
    addiu v0,sp,184
    .word 0xac430000
    add.s $f0,$f1,$f0
    addiu v0,sp,188
    .word 0x72803628
    .word 0xe4400000
    add.s $f2,$f20,$f2
    addiu v0,sp,192
    .word 0xe4420000
    addiu v0,sp,220
    .word 0xac440000
    addiu v0,sp,224
    .word 0xe4560000
    .word 0xaef10000
    jal func_00182cf0
    .word 0xafb400e8
    addiu v0,sp,236
    .word 0xe4400000
    .word 0x3c054160
    .word 0x3c02002e
    addiu v1,v0,1696
    .word 0x44850800
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    addiu v0,sp,196
    addiu a0,sp,176
    .word 0xe4400000
    .word 0xafc50000
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe6430000
    .word 0xe6420004
    .word 0xe6410008
    .word 0xe640000c
    .word 0x8f8389f0
    .word 0x8ec20000
    .word 0x8e660000
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,3
    .word 0xae020004
    .word 0x8e050000
    .word 0x8e040004
    .word 0x3c0340a0
    .word 0x44830000
    .word 0xc4a20018
    .word 0xc4810018
    .word 0xc4a40020
    sub.s $f1,$f1,$f2
    sub.s $f3,$f1,$f0
    c.le.s $f4,$f3
    nop
    bc1t L24f2f0
    neg.s $f5,$f3
    sub.s $f1,$f4,$f3
    .word 0x44800000
    nop
    mul.s $f0,$f0,$f1
    add.s $f0,$f2,$f0
    .word 0xe4a00018
    b L24f31c
    .word 0xe4a30020
    neg.s $f5,$f3
L24f2f0:
    c.lt.s $f4,$f5
    nop
    bc1f L24f31c
    nop
    add.s $f1,$f4,$f3
    .word 0x44800000
    nop
    mul.s $f0,$f0,$f1
    add.s $f0,$f2,$f0
    .word 0xe4a00018
    .word 0xe4a50020
L24f31c:
    .word 0x7bbf00a0
    .word 0x7bbe0090
    .word 0x7bb70080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,256
}
