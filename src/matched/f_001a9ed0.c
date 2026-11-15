extern void c0_109d00(void);
extern void c1_109d20(void);
extern void c2_11eac8(void);
extern void c3_11fe10(void);
extern void c4_1214b8(void);
extern void c5_1aa740(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-192
    sq ra,48(sp)
    sq s2,32(sp)
    lui v0,0x31
    sq s1,16(sp)
    sq s0,0(sp)
    addiu v0,v0,29920
    sll v1,a0,0x2
    addu s1,v0,v1
    lw v0,0(s1)
    paddub s0,a1,zero
    beqz v0,L1a9f0c
    paddub s2,a0,zero
    b L1aa008
    paddub v0,zero,zero
L1a9f0c:
    lw a0,-32660(gp)
    addiu v0,zero,1
    jal c1_109d20
    sw v0,-31448(gp)
    .word 0x3c010032
    sw s2,30528(at)
    .word 0x3c010032
    sw s0,30532(at)
    .word 0x3c010031
    lw t1,30384(at)
    lw v0,-31444(gp)
    addiu v1,t1,1
    beqz v0,L1a9f88
    sll s0,v1,0x3
    lui v0,0x32
    addiu v0,v0,30528
    lw a3,0(v0)
    addiu a0,sp,64
    addiu t3,zero,8
    ori a2,zero,32819
    lui v0,0x32
    addiu v0,v0,30528
    lw t0,4(v0)
    paddub t2,s0,zero
    lui v0,0x2f
    jal c4_1214b8
    addiu a1,v0,176
    lui v0,0x2f
    addiu a0,v0,272
    jal c3_11fe10
    addiu a1,sp,64
L1a9f88:
    .word 0x3c010031
    addiu v0,s0,1
    lw a0,30388(at)
    sll v1,v0,0x2
    lui v0,0x32
    addiu a1,v0,30528
    sll a3,s0,0x2
    addu v0,a0,a3
    ori t0,zero,32819
    sw t0,0(v0)
    .word 0x3c010031
    lw v0,30388(at)
    addiu a2,zero,8
    jal c2_11eac8
    addu a0,v0,v1
    .word 0x3c010031
    lw v0,30384(at)
    addiu v0,v0,1
    .word 0x3c010031
    sw v0,30384(at)
    .word 0x3c010031
    lw v0,30384(at)
    slti v0,v0,1023
    bnez v0,L1a9ff8
    addiu v0,zero,1
    jal c5_1aa740
    paddub a0,zero,zero
    addiu v0,zero,1
L1a9ff8:
    sw v0,0(s1)
    jal c0_109d00
    lw a0,-32660(gp)
    addiu v0,zero,1
L1aa008:
    lq ra,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,192
}
