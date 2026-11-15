extern void func_00133120(void);
extern void func_001b4b20(void);
extern void func_00242b20(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    addiu v0,zero,4
    .word 0x70a08e28
    .word 0x70c08628
    beq s1,v0,L22726c
    .word 0x70809628
    addiu v0,zero,3
    beq s1,v0,L22723c
    nop
    b L2272d8
    .word 0x72402628
L22723c:
    lw v1,12(s2)
    addiu v0,zero,1
    beq v1,v0,L227254
    nop
    b L2272d4
    nop
L227254:
    lw v0,0(s2)
    lw v0,24(v0)
    jalr ra,v0
    addiu a1,zero,2
    b L2272e8
    lq ra,48(sp)
L22726c:
    .word 0x3c010030
    lwc1 f1,28880(at)
    .word 0x3c010030
    lwc1 f0,30336(at)
    c.eq.s f1,f0
    nop
    bc1t L2272cc
    addiu a0,zero,7
    c.le.s f1,f0
    nop
    bc1t L2272b4
    nop
    jal func_001b4b20
    nop
    lw v1,0(v0)
    addiu v1,v1,1
    b L2272c8
    sw v1,0(v0)
L2272b4:
    jal func_001b4b20
    nop
    lw v1,4(v0)
    addiu v1,v1,1
    sw v1,4(v0)
L2272c8:
    addiu a0,zero,7
L2272cc:
    jal func_00133120
    nop
L2272d4:
    .word 0x72402628
L2272d8:
    .word 0x72202e28
    jal func_00242b20
    .word 0x72003628
    lq ra,48(sp)
L2272e8:
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
