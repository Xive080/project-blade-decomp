asm void f(void) {
    .set noreorder
    .set noat
    beqz a0,L15ca60
    .word 0x70001628
    mtc1 zero,f3
    nop
    c.eq.s f3,f12
    nop
    bc1f L15ca68
    nop
L15ca60:
    b L15cd0c
    .word 0x70001628
L15ca68:
    lwc1 f0,28(a0)
    lwc1 f1,24(a0)
    mul.s f0,f0,f12
    add.s f0,f1,f0
    swc1 f0,24(a0)
    lwc1 f2,4(a0)
    sub.s f0,f1,f2
    c.le.s f0,f3
    nop
    bc1t L15ca9c
    nop
    b L15cab8
    addiu a1,zero,1
L15ca9c:
    c.lt.s f0,f3
    nop
    bc1f L15cab8
    .word 0x70002e28
    b L15cab8
    addiu a1,zero,-1
    .word 0x70002e28
L15cab8:
    lwc1 f3,24(a0)
    mtc1 zero,f0
    sub.s f1,f3,f2
    c.le.s f1,f0
    nop
    bc1t L15cadc
    nop
    b L15caf8
    addiu v1,zero,1
L15cadc:
    c.lt.s f1,f0
    nop
    bc1f L15caf8
    .word 0x70001e28
    b L15caf8
    addiu v1,zero,-1
    .word 0x70001e28
L15caf8:
    beq v1,a1,L15cb04
    nop
    addiu v0,zero,2
L15cb04:
    lwc1 f1,0(a0)
    c.lt.s f3,f1
    nop
    bc1f L15cb44
    nop
    mtc1 zero,f0
    nop
    c.eq.s f1,f0
    nop
    bc1t L15cb38
    swc1 f1,24(a0)
    b L15cb3c
    addiu a1,zero,-1
L15cb38:
    .word 0x70002e28
L15cb3c:
    b L15cb8c
    addiu v1,zero,-1
L15cb44:
    lwc1 f1,8(a0)
    c.le.s f3,f1
    nop
    bc1t L15cb88
    .word 0x70002e28
    mtc1 zero,f0
    nop
    c.eq.s f1,f0
    nop
    bc1t L15cb78
    swc1 f1,24(a0)
    b L15cb7c
    addiu a1,zero,1
L15cb78:
    .word 0x70002e28
L15cb7c:
    b L15cb88
    nop
    .word 0x70002e28
L15cb88:
    addiu v1,zero,-1
L15cb8c:
    bne a1,v1,L15cba0
    addiu v1,zero,1
    b L15cbac
    addiu v0,zero,1
    addiu v1,zero,1
L15cba0:
    bne a1,v1,L15cbac
    nop
    addiu v0,zero,3
L15cbac:
    lwc1 f3,28(a0)
    mtc1 zero,f0
    nop
    c.le.s f3,f0
    nop
    bc1t L15cbd0
    nop
    b L15cbec
    addiu v1,zero,1
L15cbd0:
    c.lt.s f3,f0
    nop
    bc1f L15cbec
    .word 0x70001e28
    b L15cbec
    addiu v1,zero,-1
    .word 0x70001e28
L15cbec:
    mtc1 v1,f1
    lwc1 f0,16(a0)
    cvt.s.w f1,f1
    mul.s f2,f0,f1
    mtc1 zero,f0
    nop
    c.lt.s f3,f0
    nop
    bc1t L15cc1c
    mul.s f2,f2,f12
    b L15cc20
    mov.s f1,f3
L15cc1c:
    neg.s f1,f3
L15cc20:
    mtc1 zero,f0
    nop
    c.lt.s f2,f0
    nop
    bc1t L15cc44
    neg.s f0,f2
    b L15cc44
    mov.s f0,f2
    neg.s f0,f2
L15cc44:
    c.le.s f0,f1
    nop
    bc1t L15cc58
    nop
    mov.s f2,f3
L15cc58:
    lwc1 f1,28(a0)
    mtc1 zero,f0
    nop
    sub.s f1,f1,f2
    swc1 f1,28(a0)
    lwc1 f1,24(a0)
    lwc1 f3,4(a0)
    sub.s f2,f1,f3
    c.le.s f2,f0
    nop
    bc1t L15cca4
    nop
    lwc1 f0,8(a0)
    sub.s f0,f0,f3
    div.s f2,f2,f0
    nop
    nop
    b L15ccc0
    nop
L15cca4:
    c.lt.s f2,f0
    nop
    bc1f L15ccc0
    nop
    lwc1 f0,0(a0)
    sub.s f0,f3,f0
    div.s f2,f2,f0
L15ccc0:
    lwc1 f1,20(a0)
    lwc1 f0,28(a0)
    mul.s f1,f2,f1
    mul.s f1,f12,f1
    sub.s f0,f0,f1
    swc1 f0,28(a0)
    lwc1 f2,12(a0)
    neg.s f1,f2
    c.lt.s f0,f1
    nop
    bc1f L15ccf8
    nop
    b L15cd0c
    swc1 f1,28(a0)
L15ccf8:
    c.le.s f0,f2
    nop
    bc1t L15cd0c
    nop
    swc1 f2,28(a0)
L15cd0c:
    jr ra
    nop
}
