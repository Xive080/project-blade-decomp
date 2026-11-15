extern void func_0023ca90(void);
extern void func_0023cb40(void);
extern void func_0023cba0(void);
extern void func_0023cc00(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    sq ra,64(sp)
    sq s2,48(sp)
    sq s1,32(sp)
    sq s0,16(sp)
    swc1 f20,0(sp)
    .word 0x70c08e28
    .word 0x70e08628
    mov.s f20,f12
    jal func_0023ca90
    .word 0x70809628
    bne zero,v0,L23c72c
    .word 0x72202e28
    b L23c774
    .word 0x70001628
L23c72c:
    jal func_0023cb40
    .word 0x72402628
    bne zero,v0,L23c744
    .word 0x72002e28
    b L23c774
    .word 0x70001628
L23c744:
    jal func_0023cba0
    .word 0x72402628
    bne zero,v0,L23c75c
    mov.s f12,f20
    b L23c774
    .word 0x70001628
L23c75c:
    jal func_0023cc00
    .word 0x72402628
    bne zero,v0,L23c770
    nop
    .word 0x70009628
L23c770:
    .word 0x72401628
L23c774:
    lq ra,64(sp)
    lq s2,48(sp)
    lq s1,32(sp)
    lq s0,16(sp)
    lwc1 f20,0(sp)
    jr ra
    addiu sp,sp,80
}
