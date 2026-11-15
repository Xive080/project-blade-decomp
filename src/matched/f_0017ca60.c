extern void func_0017cd90(void);
extern void func_001ce160(void);
asm void func(void) {
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
    .word 0xe7b40000
    .word 0xc4c00000
    addiu v0,sp,176
    addiu a1,sp,240
    paddub s6,a0,zero
    .word 0xe7a000b0
    .word 0xc4c00004
    addiu v1,sp,192
    addiu s8,v0,4
    addiu s2,a1,4
    .word 0xe7a000b4
    .word 0xc4c00008
    addiu s7,v0,8
    addiu s3,a1,8
    addiu a0,sp,208
    .word 0xe7a000b8
    .word 0xc4e00000
    paddub s5,t0,zero
    paddub s4,t1,zero
    .word 0xe7a000c0
    .word 0xc4e00004
    .word 0xe7a000c4
    .word 0xc4e00008
    .word 0xe7a000c8
    .word 0xc4610000
    .word 0xc4400000
    sub.s $f0,$f1,$f0
    .word 0xe4a00000
    .word 0xc4610004
    .word 0xc4400004
    sub.s $f0,$f1,$f0
    .word 0xe4a00004
    .word 0xc4610008
    .word 0xc4400008
    sub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe4a00008
    lw v0,4(s6)
    bnez v0,L17cb38
    .word 0x3c027f7f
    b L17cd50
    paddub v0,zero,zero
    .word 0x3c027f7f
L17cb38:
    ori v0,v0,0xffff
    sw v0,0(s4)
    paddub s0,zero,zero
    b L17cd10
    paddub s1,zero,zero
L17cb4c:
    lw v1,8(s6)
    addiu v0,sp,208
    .word 0xc4430004
    .word 0xc4420000
    .word 0xc4410008
    addu v1,v1,s1
    .word 0xc4660004
    .word 0xc4670000
    .word 0xc4680008
    .word 0x3c02bc23
    ori v0,v0,0xd70a
    .word 0x44820000
    mul.s $f3,$f3,$f6
    mul.s $f2,$f2,$f7
    adda.s $f2,$f3
    madd.s $f1,$f1,$f8
    c.lt.s $f1,$f0
    nop
    bc1fl L17cd0c
    addiu s1,s1,32
    .word 0xc462000c
    .word 0xc7c40000
    addiu v0,sp,240
    .word 0xc6410000
    .word 0xc6e30000
    .word 0xc4490000
    addiu v1,sp,176
    mul.s $f4,$f4,$f6
    .word 0xc4600000
    mul.s $f1,$f1,$f6
    mul.s $f5,$f0,$f7
    adda.s $f5,$f4
    madd.s $f3,$f3,$f8
    sub.s $f20,$f2,$f3
    .word 0xc6600000
    mul.s $f2,$f9,$f7
    adda.s $f2,$f1
    madd.s $f0,$f0,$f8
    div.s $f20,$f20,$f0
    nop
    .word 0x44800000
    nop
    c.lt.s $f20,$f0
    nop
    bc1t L17cd08
    nop
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.le.s $f20,$f0
    nop
    bc1f L17cd08
    nop
    mul.s $f0,$f9,$f20
    addiu a0,sp,224
    .word 0xe4800000
    .word 0xc6400000
    mul.s $f0,$f0,$f20
    .word 0xe4800004
    .word 0xc6600000
    mul.s $f0,$f0,$f20
    .word 0xe4800008
    .word 0xc4600000
    .word 0xc4810000
    add.s $f0,$f1,$f0
    .word 0xe4800000
    .word 0xc4810004
    .word 0xc7c00000
    add.s $f0,$f1,$f0
    .word 0xe4800004
    .word 0xc4810008
    .word 0xc6e00000
    add.s $f0,$f1,$f0
    .word 0xe4800008
    lw v0,8(s6)
    lw t1,12(s6)
    addu a1,v0,s1
    lw a2,16(a1)
    lw a3,20(a1)
    lw v1,24(a1)
    lw v0,28(a1)
    sll a2,a2,0x4
    sll a3,a3,0x4
    sll v1,v1,0x4
    addu a2,t1,a2
    addu a3,t1,a3
    addu t0,t1,v1
    sll v0,v0,0x4
    jal func_0017cd90
    addu t1,t1,v0
    beqz v0,L17cd08
    nop
    .word 0xc6800000
    c.lt.s $f20,$f0
    nop
    bc1f L17cd08
    nop
    .word 0xe6940000
    lw v0,8(s6)
    addu v0,v0,s1
    .word 0xc4400000
    .word 0xe6a00000
    lw v0,8(s6)
    addu v0,v0,s1
    .word 0xc4400004
    .word 0xe6a00004
    lw v0,8(s6)
    addu v0,v0,s1
    .word 0xc4400008
    .word 0xe6a00008
    nop
L17cd08:
    addiu s1,s1,32
L17cd0c:
    addiu s0,s0,1
L17cd10:
    lw v0,4(s6)
    slt v0,s0,v0
    bnez v0,L17cb4c
    nop
    .word 0xc6800000
    .word 0x3c027f7f
    ori v0,v0,0xffff
    .word 0x44820800
    nop
    c.eq.s $f1,$f0
    nop
    bc1f L17cd50
    addiu v0,zero,1
    b L17cd50
    paddub v0,zero,zero
    addiu v0,zero,1
L17cd50:
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
    .word 0xc7b40000
    jr ra
    addiu sp,sp,256
}
