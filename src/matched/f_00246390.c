extern void F131d00(void);
extern void F1320e0(void);
extern void F133120(void);
extern void F1332a0(void);
extern void F170ce0(void);
extern void F1a4c60(void);
extern void F1b9ce0(void);
extern void F1b9df0(void);
extern void F1ba140(void);
extern void F2429e0(void);
extern void F242a10(void);
extern void F247280(void);
asm void func(void) {
    .set noreorder
    .word 0x3C020033
    addiu v1,v0,10944
    .word 0x78660000
    .word 0x78650010
    .word 0x3C020033
    addiu a3,v0,11840
    .word 0xDC640020
    .word 0x3C020024
    .word 0x3C010033
    addiu v1,v0,29664
    .word 0x7CE60000
    .word 0x7CE50010
    .word 0xFCE40020
    .word 0x3C020024
    sw v1,11840(at)
    addiu v0,v0,25968
    .word 0x3C010033
    sw v0,11868(at)
    .word 0x3C020024
    addiu v0,v0,26240
    .word 0x3C010033
    sw v0,11848(at)
    .word 0x3C020024
    addiu v0,v0,27392
    .word 0x3C010033
    sw v0,11844(at)
    .word 0x3C020024
    addiu v0,v0,28112
    .word 0x3C010033
    sw v0,11864(at)
    .word 0x3C020024
    addiu v0,v0,30656
    .word 0x3C010033
    sw v0,11876(at)
    .word 0x3C020024
    addiu v0,v0,25696
    .word 0x3C010033
    sw v0,11872(at)
    .word 0x3C020033
    addiu v0,v0,11840
    .word 0x3C010033
    sw v0,11888(at)
    addiu v0,zero,16
    .word 0x3C010033
    sw v0,11892(at)
    .word 0x3C020033
    addiu a1,v0,11888
    j F1332a0
    addiu a0,zero,2
    nop
    nop
    nop
    addiu sp,sp,-64
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v0,4(a0)
    .word 0x70808E28
    jal F242a10
    andi s0,v0,0x2
    .word 0x3C024000
    jal F131d00
    sw v0,20(s1)
    jal F170ce0
    addiu a0,zero,-17
    .word 0x3C020033
    addiu a0,v0,-26768
    jal F1ba140
    addiu a1,zero,7
    jal F133120
    addiu a0,zero,2
    addiu v0,zero,9
    .word 0x3C010030
    addiu a0,zero,1
    jal F1a4c60
    sw v0,29208(at)
    jal F1320e0
    nop
    .word 0x3C020033
    addiu a0,v0,-26768
    jal F1b9df0
    addiu a1,zero,8
    .word 0x3C020033
    addiu a0,v0,-26768
    .word 0x3C020030
    addiu a1,v0,29208
    jal F1b9ce0
    .word 0x70003628
    addiu a1,zero,-1
    sw zero,8(s1)
    sw a1,60(s1)
    sw zero,56(s1)
    .word 0x72202628
    jal F247280
    sw zero,64(s1)
    .word 0x3C023F80
    sw v0,72(s1)
    .word 0x3C024080
    sw v0,76(s1)
    addiu v0,zero,1
    beqz s0,L246538
    sw v0,68(s1)
    sw zero,56(sp)
    sw zero,52(sp)
    b L246548
    sw zero,48(sp)
L246538:
    .word 0x3C02437F
    sw v0,56(sp)
    sw v0,52(sp)
    sw v0,48(sp)
L246548:
    addiu a1,sp,48
    jal F2429e0
    .word 0x72202628
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
