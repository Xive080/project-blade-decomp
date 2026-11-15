asm void f(void) {
    .set noreorder
    .set noat
    .word 0x8c820030
    bnez v0,L15bc3c
    .word 0xc4a1004c
    .word 0x46000824
    cvt.s.w $f0,$f0
    c.eq.s $f1,$f0
    nop
    bc1t L15bc3c
    nop
    b L15bcc0
    addiu v0,zero,1
L15bc3c:
    .word 0x8c820034
    bnez v0,L15bcc0
    .word 0x70001628
    .word 0x8ca30000
    addiu v0,zero,1
    bne v1,v0,L15bc60
    nop
    b L15bc78
    .word 0x8ca300e4
L15bc60:
    .word 0x8ca20138
    .word 0x8ca300e8
    sll v0,v0,0x2
    addu v0,v0,v1
    .word 0x8c430004
    nop
L15bc78:
    .word 0x8c620014
    beqz v0,L15bc90
    nop
    .word 0x8c620010
    b L15bc98
    sra v0,v0,0x1
L15bc90:
    .word 0x8c620010
    nop
L15bc98:
    .word 0x44820000
    nop
    cvt.s.w $f0,$f0
    c.le.s $f1,$f0
    nop
    bc1t L15bcbc
    nop
    b L15bcc0
    addiu v0,zero,1
L15bcbc:
    .word 0x70001628
L15bcc0:
    jr ra
    nop
}
