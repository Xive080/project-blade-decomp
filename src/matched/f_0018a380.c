extern void func_0011eac8(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-144
    .word 0x7fbf0080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b50004
    .word 0x70c0b628
    .word 0x70808628
    mov.s $f21,$f12
    .word 0x7100ae28
    .word 0x7120a628
    .word 0x70e03628
    .word 0x72c02628
    jal func_0011eac8
    .word 0xe7b40000
    lw s0,4(s0)
    beqz s0, L18a558
    nop
    addiu s1,s0,8
L18a3dc:
    lw s0,4(s0)
    .word 0x3c023f80
    .word 0x4482a000
    .word 0x70009628
    b L18a528
    .word 0x72209e28
L18a3f4:
    .word 0xc6620020
    .word 0x3c023f80
    .word 0xc661001c
    .word 0x44820000
    addiu v1,s3,28
    mul.s $f2,$f21,$f2
    add.s $f12,$f1,$f2
    c.lt.s $f12,$f0
    nop
    bc1t L18a4dc
    .word 0xe66c001c
    lw v0,12(v1)
    beqz v0, L18a454
    nop
    .word 0x46006024
    .word 0xc4610000
    .word 0x46800020
    sub.s $f12,$f1,$f0
    .word 0xe46c0000
    lw v0,8(v1)
    jalr ra,v0
    nop
    b L18a51c
    mul.s $f20,$f20,$f0
L18a454:
    lw v0,64(s1)
    beqz v0, L18a4d0
    nop
    .word 0x3c020031
    addiu v0,v0,-24960
    ori v1,zero,0x883c
    sw zero,8(s5)
    addu v0,v0,v1
    sw zero,72(s1)
    lw a0,0(v0)
    .word 0x3c010001
    .word 0x3c020031
    addiu v1,v0,-24960
    sll a0,a0,0x3
    addu v1,v1,a0
    addu at,v1,at
    sw s5,-31140(at)
    .word 0x3c010031
    lw v1,9916(at)
    .word 0x3c020031
    addiu v0,v0,-24960
    sll v1,v1,0x3
    addu v0,v0,v1
    .word 0x3c010001
    addu at,v0,at
    sw s1,-31136(at)
    .word 0x3c010031
    lw v0,9916(at)
    addiu v0,v0,1
    .word 0x3c010031
    sw v0,9916(at)
L18a4d0:
    .word 0x4480a000
    b L18a53c
    lw v0,60(s1)
L18a4dc:
    .word 0x44800000
    nop
    c.le.s $f12,$f0
    nop
    bc1t L18a508
    nop
    lw v0,8(v1)
    jalr ra,v0
    nop
    b L18a518
    nop
L18a508:
    lw v0,8(v1)
    jalr ra,v0
    mov.s $f12,$f0
    nop
L18a518:
    mul.s $f20,$f20,$f0
L18a51c:
    addiu s3,s3,16
    addiu s2,s2,1
    nop
L18a528:
    lw v0,24(s1)
    slt v0,s2,v0
    bnez v0, L18a3f4
    nop
    lw v0,60(s1)
L18a53c:
    mov.s $f12,$f20
    .word 0x72202628
    .word 0x72c02e28
    jalr ra,v0
    .word 0x72803628
    bnez s0, L18a3dc
    addiu s1,s0,8
L18a558:
    .word 0x7bbf0080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b50004
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,144
}
