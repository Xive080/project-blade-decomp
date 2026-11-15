extern void func_0017d5a0(void);
extern void func_001ce160(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-224
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xc4a20000
    .word 0xc4a10004
    .word 0xc4a00008
    addiu v0,sp,208
    addiu s7,sp,200
    addiu s8,sp,196
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0xaee00000
    .word 0xafc00000
    addiu v0,sp,184
    .word 0xafa000c0
    .word 0xac400000
    addiu v0,sp,180
    .word 0xac400000
    paddub s4,t0,zero
    addiu s0,zero,1
    paddub s6,a0,zero
    paddub s5,a2,zero
    .word 0xafa700a8
    paddub s3,t1,zero
    paddub s2,t2,zero
    .word 0xafa500ac
    paddub s1,zero,zero
    beqz s4,L17d468
    .word 0xafa000b0
    .word 0xae800008
    .word 0xae800004
    b L17d468
    .word 0xae800000
    addiu a1,sp,208
L17d3bc:
    addiu a3,sp,176
    addiu t0,sp,192
    paddub a0,s6,zero
    paddub a2,s5,zero
    paddub t1,s3,zero
    jal func_0017d5a0
    paddub t2,s2,zero
    beqz v0,L17d45c
    slti at,v0,2
    .word 0xc7a100d0
    .word 0xc7a000b0
    addiu a0,sp,212
    addiu v1,sp,180
    addiu a1,sp,216
    add.s $f0,$f1,$f0
    addiu s1,s1,1
    .word 0xe7a000d0
    .word 0xc4600000
    .word 0xc4810000
    addiu v1,sp,184
    add.s $f0,$f1,$f0
    .word 0xe4800000
    .word 0xc4a10000
    .word 0xc4600000
    add.s $f0,$f1,$f0
    beqz s4,L17d458
    .word 0xe4a00000
    .word 0xc6810000
    .word 0xc7a000c0
    add.s $f0,$f1,$f0
    .word 0xe6800000
    .word 0xc6810004
    .word 0xc7c00000
    add.s $f0,$f1,$f0
    .word 0xe6800004
    .word 0xc6810008
    .word 0xc6e00000
    add.s $f0,$f1,$f0
    .word 0xe6800008
L17d458:
    slti at,v0,2
L17d45c:
    beqz at,L17d468
    nop
    paddub s0,zero,zero
L17d468:
    beqz s0,L17d480
    nop
    slti v0,s1,10
    bnez v0,L17d3bc
    addiu a1,sp,208
    nop
L17d480:
    beqz s1,L17d568
    paddub v0,s1,zero
    .word 0x8fa200ac
    .word 0xc7a100d0
    .word 0xc4400000
    .word 0x8fa200a8
    sub.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0x8fa200ac
    .word 0xc7a000d4
    .word 0xc4410004
    .word 0x8fa200a8
    sub.s $f0,$f0,$f1
    .word 0xe4400004
    .word 0x8fa200ac
    .word 0xc7a000d8
    .word 0xc4410008
    .word 0x8fa200a8
    sub.s $f0,$f0,$f1
    beqz s4,L17d564
    .word 0xe4400008
    .word 0xc6820000
    mtc1 zero,$f1
    nop
    c.eq.s $f2,$f1
    nop
    bc1f L17d520
    nop
    .word 0xc6800004
    c.eq.s $f0,$f1
    nop
    bc1f L17d520
    nop
    .word 0xc6800008
    c.eq.s $f0,$f1
    nop
    bc1f L17d520
    nop
    b L17d568
    paddub v0,zero,zero
L17d520:
    .word 0x44910000
    .word 0x3c023f80
    cvt.s.w $f0,$f0
    paddub a0,s4,zero
    .word 0x72802e28
    .word 0x44820800
    nop
    div.s $f1,$f1,$f0
    mul.s $f0,$f2,$f1
    .word 0xe6800000
    .word 0xc6800004
    mul.s $f0,$f0,$f1
    .word 0xe6800004
    .word 0xc6800008
    mul.s $f0,$f0,$f1
    jal func_001ce160
    .word 0xe6800008
L17d564:
    paddub v0,s1,zero
L17d568:
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,224
}
