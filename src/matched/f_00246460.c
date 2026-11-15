extern void func_00131d00(void);
extern void func_001320e0(void);
extern void func_00133120(void);
extern void func_00170ce0(void);
extern void func_001a4c60(void);
extern void func_001b9ce0(void);
extern void func_001b9df0(void);
extern void func_001ba140(void);
extern void func_002429e0(void);
extern void func_00242a10(void);
extern void func_00247280(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v0,4(a0)
    .word 0x70808e28
    jal func_00242a10
    andi s0,v0,0x2
    .word 0x3c024000
    jal func_00131d00
    sw v0,20(s1)
    jal func_00170ce0
    addiu a0,zero,-17
    .word 0x3c020033
    addiu a0,v0,-26768
    jal func_001ba140
    addiu a1,zero,7
    jal func_00133120
    addiu a0,zero,2
    addiu v0,zero,9
    .word 0x3c010030
    addiu a0,zero,1
    jal func_001a4c60
    sw v0,29208(at)
    jal func_001320e0
    nop
    .word 0x3c020033
    addiu a0,v0,-26768
    jal func_001b9df0
    addiu a1,zero,8
    .word 0x3c020033
    addiu a0,v0,-26768
    .word 0x3c020030
    addiu a1,v0,29208
    jal func_001b9ce0
    .word 0x70003628
    addiu a1,zero,-1
    sw zero,8(s1)
    sw a1,60(s1)
    sw zero,56(s1)
    .word 0x72202628
    jal func_00247280
    sw zero,64(s1)
    .word 0x3c023f80
    sw v0,72(s1)
    .word 0x3c024080
    sw v0,76(s1)
    addiu v0,zero,1
    beqz s0,L246538
    sw v0,68(s1)
    sw zero,56(sp)
    sw zero,52(sp)
    b L246548
    sw zero,48(sp)
L246538:
    .word 0x3c02437f
    sw v0,56(sp)
    sw v0,52(sp)
    sw v0,48(sp)
L246548:
    addiu a1,sp,48
    jal func_002429e0
    .word 0x72202628
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
