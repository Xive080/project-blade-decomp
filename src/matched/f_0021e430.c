asm void f(void) {
    .set noreorder
    .set noat
    lw v1,12(a0)
    addiu t0,zero,1
    lw a2,0(v1)
    andi v1,a2,0x1
    bne v1,t0,L21e478
    andi v1,a2,0x2
    addiu v1,zero,4
    sb v1,41(a0)
    addiu v1,zero,2
    bne a1,v1,L21e468
    nop
    lbu v1,-30772(gp)
    b L21e520
    sb v1,40(a0)
L21e468:
    lb v1,-30772(gp)
    ori v1,v1,0x2
    b L21e520
    sb v1,40(a0)
L21e478:
    addiu a3,zero,2
    beq v1,a3,L21e494
    addiu v1,zero,3
    andi v1,a2,0xff
    bnezl v1,L21e4c4
    andi a2,a2,0x10
    addiu v1,zero,3
L21e494:
    sb v1,41(a0)
    addiu v1,zero,2
    bne a1,v1,L21e4b4
    nop
    lb v1,-30772(gp)
    ori v1,v1,0x4
    b L21e520
    sb v1,40(a0)
L21e4b4:
    lb v1,-30772(gp)
    ori v1,v1,0x6
    b L21e520
    sb v1,40(a0)
L21e4c4:
    addiu v1,zero,16
    bne a2,v1,L21e4fc
    nop
    bne a1,a3,L21e4e4
    nop
    lbu v1,-30772(gp)
    b L21e4f0
    sb v1,40(a0)
L21e4e4:
    lb v1,-30772(gp)
    ori v1,v1,0x2
    sb v1,40(a0)
L21e4f0:
    addiu v1,zero,4
    b L21e520
    sb v1,41(a0)
L21e4fc:
    bne a1,a3,L21e514
    sb t0,41(a0)
    lb v1,-30772(gp)
    ori v1,v1,0x14
    b L21e520
    sb v1,40(a0)
L21e514:
    lb v1,-30772(gp)
    ori v1,v1,0x16
    sb v1,40(a0)
L21e520:
    jr ra
    nop
}
