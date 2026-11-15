extern void fn_1332a0(void);
extern void fn_2429e0(void);
extern void fn_242a10(void);
extern void fn_16f380(void);
extern void fn_1b9f80(void);
extern void fn_1b9ce0(void);
extern void fn_13b550(void);
extern void fn_133120(void);
asm void func(void) {
    .set noreorder
    .word 0x3c020033
    addiu v1,v0,10944
    .word 0x78660000
    .word 0x78650010
    .word 0x3c020033
    addiu a3,v0,2192
    .word 0xdc640020
    .word 0x3c020022
    .word 0x3c010033
    addiu v1,v0,24704
    .word 0x7ce60000
    .word 0x7ce50010
    .word 0xfce40020
    .word 0x3c020022
    sw v1,2192(at)
    addiu v0,v0,20544
    .word 0x3c010033
    sw v0,2200(at)
    .word 0x3c020022
    addiu v0,v0,20256
    .word 0x3c010033
    sw v0,2220(at)
    .word 0x3c020023
    addiu v0,v0,8608
    .word 0x3c010033
    sw v0,2228(at)
    .word 0x3c020022
    addiu v0,v0,22528
    .word 0x3c010033
    sw v0,2196(at)
    .word 0x3c020022
    addiu v0,v0,23648
    .word 0x3c010033
    sw v0,2216(at)
    .word 0x3c020022
    addiu v0,v0,19984
    .word 0x3c010033
    sw v0,2208(at)
    .word 0x3c020022
    addiu v0,v0,19632
    .word 0x3c010033
    sw v0,2224(at)
    .word 0x3c020033
    addiu v0,v0,2192
    .word 0x3c010033
    sw v0,2240(at)
    .word 0x3c020033
    .word 0x3c010033
    addiu a1,v0,2240
    addiu a0,zero,3
    j fn_1332a0
    sw zero,2244(at)
    addiu sp,sp,-64
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    lw v0,4(a0)
    .word 0x3c017000
    lw s0,16336(at)
    andi v0,v0,0x2
    beqz v0,L224ce8
    paddub s1,a0,zero
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
    jal fn_2429e0
    paddub a0,s1,zero
    paddub a0,s1,zero
    jal fn_242a10
    sw zero,72(s1)
    .word 0x3c010033
    lwc1 $f0,-23184(at)
    addiu v0,zero,6
    swc1 $f0,8(s1)
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
    jal fn_16f380
    addiu a0,v0,3
    b L224d78
    nop
    sll v0,v1,0x2
L224d68:
    addu v0,v0,v1
    sll v0,v0,0x1
    jal fn_16f380
    addiu a0,v0,2
L224d78:
    .word 0x3c020033
    addiu a0,v0,-26768
    jal fn_1b9f80
    addiu a1,zero,7
    .word 0x3c020030
    addiu s1,v0,28544
    .word 0x3c020033
    addiu a0,v0,-26768
    addiu a1,s1,664
    jal fn_1b9ce0
    paddub a2,zero,zero
    lw v1,1436(s1)
    lw s1,92(v1)
    beqz s1,L224de8
    addiu a0,zero,2
    lw a0,-31960(gp)
    jal fn_13b550
    paddub a1,zero,zero
    beq s1,v0,L224de4
    nop
    lw a0,-31572(gp)
    beqz a0,L224de4
    nop
    lw v0,16(a0)
    addiu a1,zero,9
    jalr ra,v0
    paddub a2,s1,zero
L224de4:
    addiu a0,zero,2
L224de8:
    beq s0,a0,L224df8
    nop
    jal fn_133120
    nop
L224df8:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
