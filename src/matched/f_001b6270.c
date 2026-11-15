extern void F1312f0(void);
extern void F131540(void);
extern void F133100(void);
extern void F1332c0(void);
extern void F16b090(void);
extern void F178800(void);
extern void F25f710(void);
asm void func(void) {
    .set noreorder
    .word 0x3C02001B
    addiu v0,v0,27344
    .word 0x3C010033
    sw v0,-31776(at)
    .word 0x3C02001B
    addiu v0,v0,27200
    .word 0x3C010033
    sw v0,-31772(at)
    .word 0x3C02001B
    addiu v0,v0,25328
    .word 0x3C010033
    sw v0,-31768(at)
    .word 0x3C010033
    .word 0x3C020033
    sw zero,-31764(at)
    addiu v0,v0,-31776
    .word 0x3C010033
    sw v0,-31744(at)
    .word 0x3C010033
    sw zero,-31708(at)
    .word 0x3C010033
    sw zero,-31704(at)
    .word 0x3C010033
    .word 0x3C020033
    sw zero,-31700(at)
    .word 0x3C010033
    addiu a1,v0,-31744
    addiu a0,zero,7
    j F1332c0
    sw zero,-31696(at)
    nop
    nop
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    lw v1,32(a0)
    addiu v0,zero,2
    beq v1,v0,L1b63ac
    .word 0x70808628
    addiu v0,zero,1
    beq v1,v0,L1b6320
    nop
    b L1b643c
    nop
L1b6320:
    jal F16b090
    nop
    bnez v0,L1b643c
    nop
    jal F133100
    addiu a0,zero,4
    addiu v1,zero,7
    sw v1,16(s0)
    addiu v1,zero,-1
    sw v1,20(s0)
    addiu v1,zero,3
    sw v1,4(s0)
    lw v0,0(v0)
    lw v0,0(v0)
    jalr ra,v0
    .word 0x72002628
    jal F1312f0
    .word 0x70002628
    .word 0x3C02001B
    addiu a1,v0,27712
    jal F131540
    .word 0x70002628
    .word 0xC6030024
    .word 0xC6020028
    .word 0xC601002C
    .word 0x3C020030
    addiu v1,v0,-23668
    .word 0xC6000030
    addiu v0,zero,2
    .word 0xE4630000
    .word 0xE4620004
    .word 0xE4610008
    .word 0xE460000C
    b L1b643c
    sw v0,32(s0)
L1b63ac:
    jal F133100
    addiu a0,zero,4
    .word 0x3C017000
    .word 0xC4213FA8
    .word 0x3C03437F
    mtc1 v1,$f3
    .word 0xC6000030
    mtc1 zero,$f2
    nop
    mul.s $f1,$f3,$f1
    sub.s $f0,$f0,$f1
    c.lt.s $f0,$f2
    nop
    bc1f L1b63f0
    .word 0xE6000030
    b L1b6404
    sw zero,48(s0)
L1b63f0:
    c.le.s $f0,$f3
    nop
    bc1t L1b6404
    nop
    sw v1,48(s0)
L1b6404:
    .word 0xC6030024
    .word 0xC6020028
    .word 0xC601002C
    .word 0x3C030030
    .word 0xC6000030
    addiu v1,v1,-23668
    .word 0xE4630000
    .word 0xE4620004
    .word 0xE4610008
    .word 0xE460000C
    lw v0,0(v0)
    lw v0,8(v0)
    jalr ra,v0
    .word 0x72002628
L1b643c:
    jal F25f710
    nop
    jal F178800
    nop
    lq ra,16(sp)
    lq s0,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,32
}
