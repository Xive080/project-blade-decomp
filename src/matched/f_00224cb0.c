extern void func_00133120(void);
extern void func_0013b550(void);
extern void func_0016f380(void);
extern void func_001b9ce0(void);
extern void func_001b9f80(void);
extern void func_002429e0(void);
extern void func_00242a10(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v0,4(a0)
    .word 0x3c017000
    lw s0,16336(at)
    andi v0,v0,0x2
    beqz v0,L224ce8
    .word 0x70808e28
    sw zero,56(sp)
    sw zero,52(sp)
    b L224cf8
    sw zero,48(sp)
L224ce8:
    .word 0x3c02437f
    sw v0,56(sp)
    sw v0,52(sp)
    sw v0,48(sp)
L224cf8:
    addiu a1,sp,48
    jal func_002429e0
    .word 0x72202628
    .word 0x72202628
    jal func_00242a10
    sw zero,72(s1)
    .word 0x3c010033
    lwc1 f0,-23184(at)
    addiu v0,zero,6
    swc1 f0,8(s1)
    sw zero,92(s1)
    sw zero,4(s1)
    sw zero,64(s1)
    sw zero,68(s1)
    sw zero,80(s1)
    sw zero,84(s1)
    .word 0x3c010030
    lbu v1,-23009(at)
    bne v1,v0,L224d68
    sll v0,v1,0x2
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x1
    jal func_0016f380
    addiu a0,v0,3
    b L224d78
    nop
    sll v0,v1,0x2
L224d68:
    addu v0,v0,v1
    sll v0,v0,0x1
    jal func_0016f380
    addiu a0,v0,2
L224d78:
    .word 0x3c020033
    addiu a0,v0,-26768
    jal func_001b9f80
    addiu a1,zero,7
    .word 0x3c020030
    addiu s1,v0,28544
    .word 0x3c020033
    addiu a0,v0,-26768
    addiu a1,s1,664
    jal func_001b9ce0
    .word 0x70003628
    lw v1,1436(s1)
    lw s1,92(v1)
    beqz s1,L224de8
    addiu a0,zero,2
    lw a0,-31960(gp)
    jal func_0013b550
    .word 0x70002e28
    beq s1,v0,L224de4
    nop
    lw a0,-31572(gp)
    beqz a0,L224de4
    nop
    lw v0,16(a0)
    addiu a1,zero,9
    jalr ra,v0
    .word 0x72203628
L224de4:
    addiu a0,zero,2
L224de8:
    beq s0,a0,L224df8
    nop
    jal func_00133120
    nop
L224df8:
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
