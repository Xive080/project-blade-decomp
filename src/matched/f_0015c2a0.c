
asm void func(void) {
    .set noreorder
    .word 0x8c83001c
    addiu v0,a0,28
    bne v1,v0,L15c2c0
    addiu sp,sp,-16
    .word 0x3c023f80
    mtc1 v0,$f0
    b L15c4e4
    .word 0xacc00000
L15c2c0:
    addiu a3,sp,0
    paddub v1,zero,zero
L15c2c8:
    addiu v1,v1,2
    .word 0xace00000
    .word 0xace00004
    slti v0,v1,4
    addiu a3,a3,8
    bnez v0,L15c2c8
    nop
    .word 0x8c820014
    beqz v0,L15c2fc
    nop
    .word 0x8c820010
    b L15c304
    sra v1,v0,0x1
L15c2fc:
    .word 0x8c830010
    nop
L15c304:
    addiu v0,zero,1
    sllv v0,v0,v1
    beqz a1,L15c31c
    addiu t2,v0,-1
    b L15c324
    .word 0x8c8b0020
L15c31c:
    .word 0x8c8b001c
    nop
L15c324:
    .word 0x3c024000
    mtc1 v0,$f1
    addiu t1,zero,1
    addiu a3,a0,28
L15c334:
    .word 0x8d63fff0
    beq v1,a1,L15c48c
    addiu v0,t3,-336
    lwc1 $f0,76(v0)
    mul.s $f0,$f1,$f0
    .word 0x46000024
    mfc1 t0,$f0
    nop
    andi v1,t0,0x1
    bnez v1,L15c48c
    nop
    sra v1,t0,0x1
    sll t0,v1,0x2
    addu t0,t0,sp
    addiu t4,t0,-4
    .word 0x8d880000
    bnez t0,L15c384
    addiu t0,v1,-1
    .word 0xad820000
    addiu t0,v1,-1
L15c384:
    sllv t0,t1,t0
    nor t0,t0,zero
    and t2,t2,t0
    bnez t2,L15c48c
    nop
    beqz a1,L15c41c
    nop
    .word 0x8c490144
    .word 0x8c850008
    .word 0x8c87000c
    sll t0,t1,0x5
    addiu a1,a1,-1
    addu a0,t0,a3
    slt at,t1,a1
    beqz at,L15c480
    lwc1 $f1,24(a0)
    .word 0x3c0440c0
    mtc1 a0,$f0
    nop
    add.s $f1,$f0,$f1
L15c3d4:
    addu a0,a3,t0
    lwc1 $f0,24(a0)
    c.lt.s $f1,$f0
    nop
    bc1fl L15c408
    addiu t1,t1,1
    sll v1,v1,0x2
    addu v1,v1,sp
    .word 0x8c63fffc
    .word 0xacc30000
    b L15c4e4
    lwc1 $f0,76(v0)
    addiu t1,t1,1
L15c408:
    slt a0,t1,a1
    bnez a0,L15c3d4
    addiu t0,t0,32
    b L15c480
    nop
L15c41c:
    .word 0x8c85000c
    .word 0x8c440144
    addiu t0,a0,-1
    sll a3,t0,0x5
    addu a0,a3,a1
    blez t0,L15c480
    lwc1 $f2,24(a0)
    .word 0x3c0440c0
    mtc1 a0,$f1
L15c440:
    addu a0,a1,a3
    lwc1 $f0,24(a0)
    add.s $f0,$f1,$f0
    c.lt.s $f0,$f2
    nop
    bc1fl L15c478
    addiu t0,t0,-1
    sll v1,v1,0x2
    addu v1,v1,sp
    .word 0x8c63fffc
    .word 0xacc30000
    b L15c4e4
    lwc1 $f0,76(v0)
    addiu t0,t0,-1
L15c478:
    bgtz t0,L15c440
    addiu a3,a3,-32
L15c480:
    mtc1 zero,$f0
    b L15c4e4
    .word 0xacc00000
L15c48c:
    beqz a1,L15c49c
    nop
    b L15c4a8
    .word 0x8d6b0004
L15c49c:
    .word 0x8d6b0000
    nop
    nop
L15c4a8:
    bne t3,a3,L15c334
    nop
    .word 0x3c023f80
    mtc1 v0,$f0
    beqz t2,L15c4e0
    nop
    mov.s $f1,$f0
L15c4c4:
    andi v0,t2,0x1
    bnez v0,L15c4e0
    nop
    sra t2,t2,0x1
    bnez t2,L15c4c4
    add.s $f0,$f0,$f1
    nop
L15c4e0:
    .word 0xacc00000
L15c4e4:
    jr ra
    addiu sp,sp,16
}
