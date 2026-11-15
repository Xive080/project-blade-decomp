asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x8ce90030
    paddub s3,a0,zero
    paddub s2,a1,zero
    mov.s $f20,$f12
    paddub s1,a2,zero
    beqz t1,L17e868
    paddub s0,a3,zero
    .word 0x8e440000
    beqz a0,L17e868
    nop
    .word 0x8e670000
    .word 0x8e460004
    .word 0x8e430008
    .word 0x8e42000c
    paddub a1,s1,zero
    .word 0x8ce8000c
    sll a2,a2,0x4
    sll v1,v1,0x4
    sll v0,v0,0x4
    addu a2,t0,a2
    addu a3,t0,v1
    jalr ra,t1
    addu t0,t0,v0
    bnez v0,L17e868
    nop
    b L17e8a8
    paddub v0,s3,zero
L17e868:
    .word 0xc6000000
    c.lt.s $f20,$f0
    nop
    bc1f L17e8a8
    paddub v0,s3,zero
    .word 0xe6140000
    .word 0xc6220000
    .word 0xc6210004
    .word 0xc6200008
    addiu v0,zero,1
    .word 0xe6020008
    .word 0xe601000c
    .word 0xe6000010
    .word 0xae020004
    .word 0xae120014
    paddub v0,s3,zero
L17e8a8:
    .word 0x7bbf0050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,96
}
