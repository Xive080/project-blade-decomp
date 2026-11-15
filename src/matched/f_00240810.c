asm void f(void) {
    .set noreorder
    .set noat
    lhu v1,192(a0)
    .word 0x3c060030
    addiu t1,a2,24688
    b L240868
    .word 0x70004628
L240824:
    lw a3,1044(t1)
    beqz a3,L24085c
    addiu a2,t0,1
    lw a2,4(a3)
    bne a2,a1,L240858
    nop
    lw a2,192(a0)
    sll a2,a2,0x2
    addu a2,a0,a2
    sw a3,32(a2)
    lw a2,192(a0)
    addiu a2,a2,1
    sw a2,192(a0)
L240858:
    addiu a2,t0,1
L24085c:
    addiu t1,t1,4
    andi t0,a2,0xffff
    nop
L240868:
    .word 0x3c010030
    lhu a2,25376(at)
    andi a3,t0,0xffff
    slt a2,a3,a2
    bnez a2,L240824
    nop
    .word 0x3c060030
    addiu t0,a2,24688
    b L2408d8
    .word 0x70004e28
L240890:
    lw a3,2388(t0)
    beqz a3,L2408cc
    addiu a2,t1,1
    lw a2,4(a3)
    bne a2,a1,L2408c8
    nop
    lw a2,192(a0)
    sll a2,a2,0x2
    addu a2,a0,a2
    sw a3,32(a2)
    lw a2,192(a0)
    addiu a2,a2,1
    sw a2,192(a0)
    nop
L2408c8:
    addiu a2,t1,1
L2408cc:
    addiu t0,t0,4
    andi t1,a2,0xffff
    nop
L2408d8:
    .word 0x3c010030
    lhu a2,25382(at)
    andi a3,t1,0xffff
    slt a2,a3,a2
    bnez a2,L240890
    nop
    .word 0x3c060030
    addiu t0,a2,24688
    b L240948
    .word 0x70004e28
L240900:
    lw a3,1300(t0)
    beqz a3,L24093c
    addiu a2,t1,1
    lw a2,4(a3)
    bne a2,a1,L240938
    nop
    lw a2,192(a0)
    sll a2,a2,0x2
    addu a2,a0,a2
    sw a3,32(a2)
    lw a2,192(a0)
    addiu a2,a2,1
    sw a2,192(a0)
    nop
L240938:
    addiu a2,t1,1
L24093c:
    addiu t0,t0,4
    andi t1,a2,0xffff
    nop
L240948:
    .word 0x3c010030
    lhu a2,25378(at)
    andi a3,t1,0xffff
    slt a2,a3,a2
    bnez a2,L240900
    nop
    lhu t0,192(a0)
    andi v1,v1,0xffff
    addiu v1,v1,1
    andi a3,v1,0xffff
    sll a2,a3,0x2
L240974:
    addu t2,a0,a2
    .word 0x70004e28
    .word 0x70e07e28
    .word 0x71405e28
    b L2409c8
    andi t4,t0,0xffff
L24098c:
    lw t5,28(t3)
    lw t6,32(t2)
    lw a1,848(t5)
    lw v1,848(t6)
    slt at,v1,a1
    beqz at,L2409bc
    addiu v1,t7,1
    sw t6,28(t3)
    addiu t1,zero,1
    sw t5,32(t2)
    nop
    addiu v1,t7,1
L2409bc:
    addiu t2,t2,4
    addiu t3,t3,4
    andi t7,v1,0xffff
L2409c8:
    andi v1,t7,0xffff
    slt v1,v1,t4
    bnez v1,L24098c
    nop
    addiu v1,t0,-1
    bnez t1,L240974
    andi t0,v1,0xffff
    jr ra
    nop
}
