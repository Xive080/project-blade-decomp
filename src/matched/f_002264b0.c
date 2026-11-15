extern void sub1(void);
extern void sub2(void);
extern void sub3(void);
extern void sub4(void);
asm void first(void) {
    .set noreorder
    .word 0x3c020033
    addiu v1,v0,10944
    .word 0x78660000
    .word 0x78650010
    .word 0x3c020033
    addiu a3,v0,2464
    .word 0xDC640020
    .word 0x3c020022
    .word 0x3c010033
    addiu v1,v0,28944
    .word 0x7CE60000
    .word 0x7CE50010
    .word 0xFCE40020
    .word 0x3c020022
    sw v1,2464(at)
    addiu v0,v0,27296
    .word 0x3c010033
    sw v0,2472(at)
    .word 0x3c020022
    addiu v0,v0,26512
    .word 0x3c010033
    sw v0,2492(at)
    .word 0x3c020023
    addiu v0,v0,15696
    .word 0x3c010033
    sw v0,2500(at)
    .word 0x3c020022
    addiu v0,v0,26272
    .word 0x3c010033
    sw v0,2468(at)
    .word 0x3c020022
    addiu v0,v0,25968
    .word 0x3c010033
    sw v0,2496(at)
    .word 0x3c020033
    addiu v0,v0,2464
    .word 0x3c010033
    sw v0,2512(at)
    addiu v0,zero,5
    .word 0x3c010033
    sw v0,2516(at)
    .word 0x3c020033
    addiu a1,v0,2512
    j sub1
    addiu a0,zero,10
    nop
    nop
    nop
    addiu sp,sp,-48
    sq ra,16(sp)
    sq s0,0(sp)
    lw v0,4(a0)
    andi v0,v0,2
    beqz v0,L1
    paddub s0,a0,zero
    sw zero,40(sp)
    sw zero,36(sp)
    b L2
    sw zero,32(sp)
L1:
    lui v0,0x437f
    sw v0,40(sp)
    sw v0,36(sp)
    sw v0,32(sp)
L2:
    addiu a1,sp,32
    jal sub2
    paddub a0,s0,zero
    jal sub3
    paddub a0,s0,zero
    lui v0,0x4080
    sw v0,20(s0)
    paddub v1,zero,zero
    paddub a2,s0,zero
    .word 0x72003E28
L3:
    addiu a0,zero,2
    paddub v0,a0,zero
    beqz v0,L5
    addiu a0,a0,-1
    sll v0,a0,2
    addu a1,a2,v0
    nop
L4:
    sw zero,68(a1)
    sw zero,124(a1)
    paddub v0,a0,zero
    addiu a1,a1,-4
    addiu a0,a0,-1
    bnez v0,L4
    nop
    nop
L5:
    addiu v1,v1,1
    sw zero,56(a3)
    slti v0,v1,3
    addiu a2,a2,8
    bnez v0,L3
    addiu a3,a3,4
    lw a0,-30524(gp)
    lw v0,0(a0)
    jalr ra,v0
    nop
    lui at,0x33
    sw zero,2664(at)
    .word 0x3c010033
    sw zero,2668(at)
    .word 0x3c010033
    sw zero,2672(at)
    paddub a0,zero,zero
    paddub v1,s0,zero
L6:
    sw zero,92(v1)
    sw zero,100(v1)
    addiu a0,a0,1
    sw zero,108(v1)
    sw zero,116(v1)
    slti v0,a0,2
    bnez v0,L6
    addiu v1,v1,4
    lui v0,0x42f0
    addiu a0,zero,2
    jal sub4
    sw v0,8(s0)
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
