extern void func_0018e800(void);
extern void func_001f7d90(void);
extern void func_001f97f0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    .word 0x3c037000
    ori v1,v1,0x3fa8
    lwc1 f1,0(v1)
    lwc1 f0,1472(a0)
    .word 0x70808628
    add.s f0,f0,f1
    swc1 f0,1472(a0)
    lwc1 f1,1476(a0)
    c.le.s f0,f1
    nop
    bc1t L18e560
    .word 0x70002e28
    lwc1 f0,1472(s0)
    addiu a1,zero,1
    sub.s f0,f0,f1
    swc1 f0,1472(s0)
L18e560:
    lw a0,60(s0)
    addiu v1,zero,16384
    beq a0,v1,L18e57c
    nop
    ori v1,zero,32768
    bne a0,v1,L18e660
    nop
L18e57c:
    lw v1,1536(s0)
    beqz v1,L18e590
    nop
    b L18e660
    .word 0x70002e28
L18e590:
    beqz a1,L18e600
    nop
    sw zero,812(s0)
    lw v1,812(s0)
    sll v1,v1,0x2
    addu v1,v1,s0
    lw a1,816(v1)
    sw zero,1472(s0)
    beqz a1,L18e5e4
    sw zero,1476(s0)
    jal func_001f7d90
    lw a0,1480(s0)
    mtc1 zero,f12
    jal func_001f97f0
    lw a0,1480(s0)
    lw v1,1480(s0)
    lw v1,20(v1)
    lw v1,4(v1)
    lwc1 f0,8(v1)
    b L18e5f0
    swc1 f0,1476(s0)
L18e5e4:
    lw v1,1480(s0)
    lw v1,20(v1)
    sw zero,4(v1)
L18e5f0:
    addiu v1,zero,1
    sw zero,1532(s0)
    sw v1,1536(s0)
    .word 0x70002e28
L18e600:
    lwc1 f1,1476(s0)
    .word 0x3c033f00
    mtc1 v1,f3
    lwc1 f0,1472(s0)
    mul.s f1,f3,f1
    c.lt.s f0,f1
    nop
    bc1t L18e660
    nop
    .word 0x3c017000
    lwc1 f2,1532(s0)
    lwc1 f1,16296(at)
    .word 0x3c033e99
    ori v1,v1,0x999a
    mtc1 v1,f0
    nop
    add.s f1,f2,f1
    c.lt.s f1,f0
    nop
    bc1f L18e660
    swc1 f1,1532(s0)
    lwc1 f0,1476(s0)
    mul.s f0,f3,f0
    swc1 f0,1472(s0)
L18e660:
    beqz a1,L18e7e4
    nop
    lw a2,60(s0)
    addiu v1,zero,32
    beq a2,v1,L18e7d0
    nop
    addiu v1,zero,1024
    beq a2,v1,L18e7d0
    nop
    addiu v1,zero,8
    beq a2,v1,L18e7d0
    nop
    addiu v1,zero,4096
    beq a2,v1,L18e7c4
    .word 0x3c033f4c
    addiu v1,zero,2048
    beq a2,v1,L18e7c0
    nop
    addiu v1,zero,64
    beq a2,v1,L18e7e4
    nop
    addiu v1,zero,128
    beq a2,v1,L18e7e4
    nop
    addiu v1,zero,512
    beq a2,v1,L18e744
    nop
    addiu v1,zero,2
    beq a2,v1,L18e6e0
    nop
    b L18e7dc
    lw a1,1460(s0)
L18e6e0:
    lw a0,16(s0)
    andi v1,a0,0x20
    beqz v1,L18e7e4
    nop
    addiu a1,zero,4
    beq a2,a1,L18e7e4
    nop
    andi v1,a0,0x2
    bnez v1,L18e7e4
    nop
    lw v0,12(s0)
    .word 0x72002628
    lw v0,16(v0)
    jalr ra,v0
    addiu s1,s0,12
    beqz v0,L18e7e4
    nop
    lw v0,0(s1)
    addiu a1,zero,4
    .word 0x72002628
    lw v0,20(v0)
    jalr ra,v0
    .word 0x70003628
    b L18e7e8
    lq ra,32(sp)
L18e744:
    lw a0,984(s0)
    addiu v1,zero,4
    bne a0,v1,L18e7ac
    nop
    addiu a1,zero,8192
    beq a2,a1,L18e7e4
    nop
    lw v1,16(s0)
    andi v1,v1,0x2
    bnez v1,L18e7e4
    nop
    lw v0,12(s0)
    .word 0x72002628
    lw v0,16(v0)
    jalr ra,v0
    addiu s1,s0,12
    beqz v0,L18e7e4
    nop
    lw v0,0(s1)
    addiu a1,zero,8192
    .word 0x72002628
    lw v0,20(v0)
    jalr ra,v0
    .word 0x70003628
    b L18e7e4
    nop
L18e7ac:
    lw a1,1460(s0)
    jal func_0018e800
    .word 0x72002628
    b L18e7e4
    nop
L18e7c0:
    .word 0x3c033f4c
L18e7c4:
    ori v1,v1,0xcccd
    b L18e7e4
    sw v1,1472(s0)
L18e7d0:
    lwc1 f0,1476(s0)
    swc1 f0,1472(s0)
    lw a1,1460(s0)
L18e7dc:
    jal func_0018e800
    .word 0x72002628
L18e7e4:
    lq ra,32(sp)
L18e7e8:
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
