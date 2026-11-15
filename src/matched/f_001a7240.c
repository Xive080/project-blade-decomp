extern void f109d20(void);
extern void f1214b8(void);
extern void f11fe10(void);
extern void f11eac8(void);
extern void f1aa740(void);
extern void f109d00(void);
asm int f(int a, float b) {
    .set noreorder
    .set noat
    addiu sp,sp,-176
    sq ra,32(sp)
    sq s0,16(sp)
    swc1 $f20,0(sp)
    paddub s0,a0,zero
    lw a0,-32660(gp)
    jal f109d20
    mov.s $f20,$f12
    lui v0,0x467f
    ori v0,v0,0xfc00
    mtc1 v0,$f0
    .word 0x3c010032
    sw s0,30528(at)
    mul.s $f0,$f0,$f20
    .word 0x3c010031
    lw t1,30384(at)
    lw v0,-31444(gp)
    cvt.w.s $f0,$f0
    addiu v1,t1,1
    sll s0,v1,0x3
    mfc1 v1,$f0
    .word 0x3c010032
    beqz v0,L1
    sw v1,30532(at)
    .word 0x3c020032
    addiu v0,v0,30528
    lw a3,0(v0)
    addiu a0,sp,48
    addiu t3,zero,8
    ori a2,zero,0x8023
    .word 0x3c020032
    addiu v0,v0,30528
    lw t0,4(v0)
    paddub t2,s0,zero
    .word 0x3c02002f
    jal f1214b8
    addiu a1,v0,176
    .word 0x3c02002f
    addiu a0,v0,272
    jal f11fe10
    addiu a1,sp,48
L1:
    .word 0x3c010031
    addiu v0,s0,1
    lw a0,30388(at)
    sll v1,v0,0x2
    .word 0x3c020032
    addiu a1,v0,30528
    sll a3,s0,0x2
    addu v0,a0,a3
    ori t0,zero,0x8023
    sw t0,0(v0)
    .word 0x3c010031
    lw v0,30388(at)
    addiu a2,zero,8
    jal f11eac8
    addu a0,v0,v1
    .word 0x3c010031
    lw v0,30384(at)
    addiu v0,v0,1
    .word 0x3c010031
    sw v0,30384(at)
    .word 0x3c010031
    lw v0,30384(at)
    slti v0,v0,1023
    bnez v0,L2
    nop
    jal f1aa740
    paddub a0,zero,zero
L2:
    jal f109d00
    lw a0,-32660(gp)
    lq ra,32(sp)
    lq s0,16(sp)
    lwc1 $f20,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,176
}
