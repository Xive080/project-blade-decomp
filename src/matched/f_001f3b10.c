asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    .word 0x3c02002e
    addiu s0,v0,20416
    .word 0x8e020000
    beqz v0,L3bf4
    addiu v0,zero,1
    lw a0,8(s0)
    b L3b80
    addiu a1,gp,-30852
L3b3c:
    addu v0,v0,a0
    sll v1,v0,2
    lw v0,20(s0)
    addu v0,v0,v1
    lw v1,0(v0)
    beqz v1,L3b68
    nop
    lw v0,0(a1)
    addu v0,v1,v0
    sw zero,88(v0)
    nop
L3b68:
    lw v0,16(s0)
    addiu v1,a0,1
    bnez v0,L3b7c
    .word 0x0062001b
    .word 0x000001cd
L3b7c:
    mfhi a0
L3b80:
    lw v0,4(s0)
    bne a0,v0,L3b3c
    sll v0,a0,1
    lw a2,16(s0)
    sll v0,a2,1
    addu v0,v0,a2
    b L3bd0
    sll v1,v0,2
L3ba0:
    lw v0,20(s0)
    addu v0,v0,v1
    lw a0,0(v0)
    beqzl a0,L3bcc
    addiu v1,v1,12
    lw v0,0(a1)
    addu v0,a0,v0
    sb zero,23(v0)
    sw zero,88(v0)
    nop
    addiu v1,v1,12
L3bcc:
    addiu a2,a2,1
L3bd0:
    lw v0,12(s0)
    sltu v0,a2,v0
    bnez v0,L3ba0
    .word 0x3c020033
    addiu v0,v0,-23008
    lw v0,308(v0)
    jalr ra,v0
    lw a0,20(s0)
    addiu v0,zero,1
L3bf4:
    sw v0,0(s0)
    sw zero,4(s0)
    sw zero,8(s0)
    sw zero,12(s0)
    sw zero,16(s0)
    sw zero,20(s0)
    addiu v1,zero,-1
    sw v1,24(s0)
    sw v1,28(s0)
    sw zero,32(s0)
    sw zero,36(s0)
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
