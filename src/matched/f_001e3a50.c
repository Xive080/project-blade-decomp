asm void f(void) {
    .set noreorder
    .set noat
    addiu v1,zero,44
    paddub t1,zero,zero
    beq a0,v1,L1e3b40
    addiu t2,zero,1
    addiu v1,zero,36
    beql a0,v1,L1e3b38
    addiu t1,zero,8
    addiu v1,zero,20
    beql a0,v1,L1e3b30
    addiu t1,zero,8
    addiu v1,zero,27
    beql a0,v1,L1e3b28
    addiu t1,zero,8
    addiu v1,zero,19
    beql a0,v1,L1e3b20
    addiu t1,zero,8
    addiu v1,zero,58
    beql a0,v1,L1e3b18
    addiu t1,zero,4
    addiu v1,zero,50
    beql a0,v1,L1e3b10
    addiu t1,zero,4
    addiu v1,zero,10
    beql a0,v1,L1e3b08
    addiu t1,zero,4
    addiu t0,zero,2
    beql a0,t0,L1e3b00
    addiu t1,zero,4
    addiu v1,zero,49
    beql a0,v1,L1e3af8
    addiu t1,zero,8
    beql a0,t2,L1e3af0
    addiu t1,zero,8
    addiu v1,zero,48
    beql a0,v1,L1e3ae8
    paddub t1,t0,zero
    b L1e3b44
    movz t1,t0,a0
L1e3ae8:
    b L1e3b44
    andi a1,a1,0xff
L1e3af0:
    b L1e3b44
    andi v1,a1,0x2
L1e3af8:
    b L1e3b44
    nop
L1e3b00:
    b L1e3b44
    nop
L1e3b08:
    b L1e3b44
    nop
L1e3b10:
    b L1e3b44
    nop
L1e3b18:
    b L1e3b44
    nop
L1e3b20:
    b L1e3b44
    nop
L1e3b28:
    b L1e3b44
    nop
L1e3b30:
    b L1e3b44
    nop
L1e3b38:
    b L1e3b44
    nop
L1e3b40:
    addiu t1,zero,8
L1e3b44:
    beqz v1,L1e3b64
    andi v1,a1,0x4
    addiu v1,zero,19
    bne a0,v1,L1e3b60
    nop
    addiu t1,zero,16
    addiu t2,zero,4
L1e3b60:
    andi v1,a1,0x4
L1e3b64:
    beqz v1,L1e3b7c
    addiu v1,zero,20
    bne a0,v1,L1e3b7c
    nop
    addiu t1,zero,32
    addiu t2,zero,4
L1e3b7c:
    .word 0xacc90000
    jr ra
    .word 0xacea0000
}
