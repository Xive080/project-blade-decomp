asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c030033
    addiu v1,v1,-23008
    lw v1,4(v1)
    lbu t3,2(v1)
    andi v1,t3,0x4
    beqz v1, L20dff8
    addiu sp,sp,-16
    lhu v1,94(a2)
    lw t1,16(a2)
    .word 0x70802e28
    beqz v1, L20dff8
    addiu t0,v1,-1
L20dfd0:
    .word 0xc5200000
    .word 0x71001e28
    addiu t0,t0,-1
    .word 0xe4a0001c
    .word 0xc5200004
    .word 0xe4a00020
    addu a1,a1,a3
    bnez v1, L20dfd0
    addiu t1,t1,8
    nop
L20dff8:
    andi v1,t3,0x8
    beqz v1, L20e054
    nop
    lhu v1,94(a2)
    lw t4,24(a2)
    .word 0x70807628
    beqz v1, L20e0a0
    addiu t5,v1,-1
L20e018:
    lbu t2,0(t4)
    lbu t1,1(t4)
    lbu t0,2(t4)
    lbu a1,3(t4)
    .word 0x71a01e28
    addiu t5,t5,-1
    sb t2,12(t6)
    sb t1,13(t6)
    sb t0,14(t6)
    sb a1,15(t6)
    addu t6,t6,a3
    bnez v1, L20e018
    addiu t4,t4,4
    b L20e0a4
    andi v1,t3,0x10
L20e054:
    lhu v1,94(a2)
    .word 0x70807628
    beqz v1, L20e0a0
    addiu t5,v1,-1
    .word 0x3c03002f
    addiu t4,v1,2288
L20e06c:
    lbu t2,0(t4)
    lbu t1,1(t4)
    lbu t0,2(t4)
    lbu a1,3(t4)
    .word 0x71a01e28
    addiu t5,t5,-1
    sb t2,12(t6)
    sb t1,13(t6)
    sb t0,14(t6)
    sb a1,15(t6)
    bnez v1, L20e06c
    addu t6,t6,a3
    nop
L20e0a0:
    andi v1,t3,0x10
L20e0a4:
    beqz v1, L20e140
    nop
    lhu v1,94(a2)
    lw t1,12(a2)
    .word 0x70805e28
    beqz v1, L20e140
    addiu t2,v1,-1
    .word 0x3c033c00
    .word 0x44831800
    addiu a1,sp,0
L20e0cc:
    lb t0,0(t1)
    .word 0x71401e28
    addiu t2,t2,-1
    .word 0x44880000
    nop
    .word 0x46800020
    mul.s $f0,$f3,$f0
    .word 0xe7a00000
    lb t0,1(t1)
    .word 0x44880000
    nop
    .word 0x46800020
    mul.s $f0,$f3,$f0
    .word 0xe7a00004
    lb t0,2(t1)
    .word 0x44880000
    addiu t1,t1,4
    .word 0x46800020
    mul.s $f0,$f3,$f0
    .word 0xe7a00008
    .word 0xc4a20000
    .word 0xc4a10004
    .word 0xc4a00008
    .word 0xe5620010
    .word 0xe5610014
    .word 0xe5600018
    bnez v1, L20e0cc
    addu t3,t3,a3
    nop
L20e140:
    lw a1,8(a2)
    lhu v1,94(a2)
    beqz v1, L20e180
    addiu a2,v1,-1
L20e150:
    .word 0xc4a20000
    .word 0xc4a10004
    .word 0xc4a00008
    .word 0x70c01e28
    addiu a2,a2,-1
    .word 0xe4820000
    .word 0xe4810004
    .word 0xe4800008
    addu a0,a0,a3
    bnez v1, L20e150
    addiu a1,a1,12
    nop
L20e180:
    jr ra
    addiu sp,sp,16
}
