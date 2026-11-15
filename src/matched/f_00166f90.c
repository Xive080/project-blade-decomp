extern void func_001c3b70(void);
extern void func_001c7610(void);
extern void func_001ce240(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-304
    sq ra,64(sp)
    sq s1,48(sp)
    sq s0,32(sp)
    swc1 f24,16(sp)
    swc1 f23,12(sp)
    swc1 f22,8(sp)
    .word 0x3c02002e
    swc1 f21,4(sp)
    addiu a1,v0,-6848
    swc1 f20,0(sp)
    .word 0xdca20000
    .word 0xc4a00008
    addiu v1,sp,272
    .word 0x3c010030
    .word 0x70808628
    .word 0xfc620000
    .word 0xe4600008
    lwc1 f20,28056(at)
    lw a0,104(a0)
    .word 0x3c010030
    lwc1 f21,28060(at)
    jal func_001c3b70
    mov.s f24,f12
    lw a0,140(s0)
    .word 0x70408e28
    lw v0,12(a0)
    lw v0,24(v0)
    jalr ra,v0
    nop
    jal func_001c3b70
    .word 0x70402628
    lwc1 f0,16(v0)
    .word 0x3c033fcc
    ori v1,v1,0xcccd
    mtc1 v1,f1
    mtc1 zero,f2
    .word 0x3c03bf33
    mul.s f0,f1,f0
    ori v1,v1,0x3333
    addiu a0,sp,292
    addiu a1,sp,296
    mtc1 v1,f4
    swc1 f0,288(sp)
    lwc1 f0,20(v0)
    c.eq.s f2,f20
    addiu v1,sp,288
    mul.s f0,f1,f0
    .word 0xe4800000
    lwc1 f0,24(v0)
    mul.s f0,f1,f0
    .word 0xe4a00000
    lwc1 f3,32(v0)
    lwc1 f2,36(v0)
    lwc1 f1,40(v0)
    lwc1 f0,288(sp)
    mul.s f3,f4,f3
    add.s f0,f0,f3
    swc1 f0,288(sp)
    .word 0xc4800000
    mul.s f2,f4,f2
    add.s f0,f0,f2
    .word 0xe4800000
    .word 0xc4a00000
    mul.s f1,f4,f1
    add.s f0,f0,f1
    .word 0xe4a00000
    lwc1 f1,48(v0)
    lwc1 f0,288(sp)
    add.s f0,f0,f1
    swc1 f0,288(sp)
    .word 0xc4810000
    lwc1 f0,52(v0)
    add.s f0,f1,f0
    .word 0xe4800000
    lwc1 f0,56(v0)
    .word 0xc4a10000
    add.s f0,f1,f0
    .word 0xe4a00000
    lwc1 f2,192(s0)
    lwc1 f1,288(sp)
    lwc1 f0,48(s1)
    .word 0xc4960000
    lwc1 f4,196(s0)
    .word 0xc4b70000
    lwc1 f3,200(s0)
    sub.s f1,f1,f2
    add.s f0,f0,f1
    swc1 f0,48(s1)
    lwc1 f0,52(s1)
    sub.s f4,f22,f4
    sub.s f1,f23,f3
    add.s f0,f0,f4
    swc1 f0,52(s1)
    lwc1 f0,56(s1)
    add.s f0,f0,f1
    swc1 f0,56(s1)
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    swc1 f2,192(s0)
    swc1 f1,196(s0)
    swc1 f0,200(s0)
    lwc1 f1,48(s1)
    lwc1 f0,288(sp)
    sub.s f0,f1,f0
    swc1 f0,48(s1)
    lwc1 f0,52(s1)
    sub.s f0,f0,f22
    swc1 f0,52(s1)
    lwc1 f0,56(s1)
    sub.s f0,f0,f23
    bc1t L167208
    swc1 f0,56(s1)
    addiu a1,sp,80
    addiu a0,zero,8
    .word 0x72203628
L167164:
    lw v1,0(a2)
    lw v0,4(a2)
    addiu a0,a0,-1
    sw v1,0(a1)
    sw v0,4(a1)
    addiu a2,a2,8
    bgtz a0,L167164
    addiu a1,a1,8
    lwc1 f0,184(s0)
    neg.s f1,f20
    addiu a1,sp,272
    addiu a2,zero,2
    mul.s f0,f1,f0
    .word 0x72202628
    jal func_001c7610
    mul.s f12,f24,f0
    lwc1 f0,132(sp)
    .word 0x3c02bfcc
    ori v0,v0,0xcccd
    mtc1 v0,f1
    nop
    c.lt.s f0,f1
    nop
    bc1t L167208
    nop
    lwc1 f0,52(s1)
    c.lt.s f0,f1
    nop
    bc1f L167208
    nop
    addiu a2,sp,80
    addiu a0,zero,8
    .word 0x72202e28
L1671e8:
    lw v1,0(a2)
    lw v0,4(a2)
    addiu a0,a0,-1
    sw v1,0(a1)
    sw v0,4(a1)
    addiu a2,a2,8
    bgtz a0,L1671e8
    addiu a1,a1,8
L167208:
    mtc1 zero,f0
    nop
    c.eq.s f0,f21
    nop
    bc1t L1672d0
    addiu a1,sp,144
    addiu a1,sp,208
    addiu a0,zero,8
    .word 0x72203628
L16722c:
    lw v1,0(a2)
    lw v0,4(a2)
    addiu a0,a0,-1
    sw v1,0(a1)
    sw v0,4(a1)
    addiu a2,a2,8
    bgtz a0,L16722c
    addiu a1,a1,8
    lwc1 f0,184(s0)
    addiu a2,zero,2
    .word 0x72202628
    .word 0x72202e28
    mul.s f0,f21,f0
    jal func_001c7610
    mul.s f12,f24,f0
    lwc1 f0,260(sp)
    .word 0x3c02bfcc
    ori v0,v0,0xcccd
    mtc1 v0,f1
    nop
    c.lt.s f0,f1
    nop
    bc1t L1672cc
    nop
    lwc1 f0,52(s1)
    c.lt.s f0,f1
    nop
    bc1f L1672cc
    nop
    addiu a2,sp,208
    addiu a0,zero,8
    .word 0x72202e28
L1672ac:
    lw v1,0(a2)
    lw v0,4(a2)
    addiu a0,a0,-1
    sw v1,0(a1)
    sw v0,4(a1)
    addiu a2,a2,8
    bgtz a0,L1672ac
    addiu a1,a1,8
L1672cc:
    addiu a1,sp,144
L1672d0:
    addiu a0,zero,8
    .word 0x72203628
L1672d8:
    lw v1,0(a2)
    lw v0,4(a2)
    addiu a0,a0,-1
    sw v1,0(a1)
    sw v0,4(a1)
    addiu a2,a2,8
    bgtz a0,L1672d8
    addiu a1,a1,8
    jal func_001ce240
    addiu a0,s1,48
    lwc1 f3,188(s0)
    .word 0x3c023c23
    ori v0,v0,0xd70a
    mtc1 v0,f2
    lwc1 f1,48(s1)
    .word 0x3c02bfcc
    sub.s f3,f0,f3
    ori v0,v0,0xcccd
    mul.s f2,f2,f3
    sub.s f2,f0,f2
    div.s f2,f2,f0
    mul.s f0,f1,f2
    swc1 f0,48(s1)
    lwc1 f0,52(s1)
    mtc1 v0,f1
    nop
    mul.s f0,f0,f2
    swc1 f0,52(s1)
    lwc1 f0,56(s1)
    mul.s f0,f0,f2
    swc1 f0,56(s1)
    lwc1 f0,196(sp)
    c.lt.s f0,f1
    nop
    bc1t L1673a8
    nop
    lwc1 f0,52(s1)
    c.lt.s f0,f1
    nop
    bc1f L1673a8
    nop
    addiu a2,sp,144
    addiu a0,zero,8
    .word 0x72202e28
L167388:
    lw v1,0(a2)
    lw v0,4(a2)
    addiu a0,a0,-1
    sw v1,0(a1)
    sw v0,4(a1)
    addiu a2,a2,8
    bgtz a0,L167388
    addiu a1,a1,8
L1673a8:
    lwc1 f1,48(s1)
    lwc1 f0,288(sp)
    addiu v0,zero,1
    add.s f0,f1,f0
    swc1 f0,48(s1)
    lwc1 f0,52(s1)
    add.s f0,f0,f22
    swc1 f0,52(s1)
    lwc1 f0,56(s1)
    add.s f0,f0,f23
    swc1 f0,56(s1)
    lq ra,64(sp)
    lq s1,48(sp)
    lq s0,32(sp)
    lwc1 f24,16(sp)
    lwc1 f23,12(sp)
    lwc1 f22,8(sp)
    lwc1 f21,4(sp)
    lwc1 f20,0(sp)
    jr ra
    addiu sp,sp,304
}
