extern void func_0016afd0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    jal func_0016afd0
    .word 0x70808628
    beqz v0,L179274
    nop
    .word 0x3c010030
    .word 0x8c246078
    addiu a1,zero,-1
    .word 0x3c010030
    .word 0x8c22607c
    addu v1,a0,a1
    nor v1,v1,zero
    addu v0,v0,a0
    addu v0,v0,a1
    and v0,v1,v0
    addu v1,v0,s0
    .word 0x3c010030
    b L179284
    .word 0xac23607c
L179274:
    .word 0x3c010030
    .word 0x8c226084
    jalr ra,v0
    .word 0x72002628
L179284:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
