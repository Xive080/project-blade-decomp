extern void func_001c3b80();
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    lw s0,8(a0)
    .word 0x70808e28
    jal func_001c3b80
    lw a0,4(a0)
    addiu v1,s1,8
    b L3
    addiu a1,zero,-16
L0:
    lw a2,-31368(gp)
    lw a0,-60(s0)
    addiu a3,s0,-64
    addu a2,a3,a2
    addiu a2,a2,15
    addiu a0,a0,80
    and a2,a2,a1
    lqc2 $vf1,48(a0)
    lqc2 $vf2,0(a0)
    lqc2 $vf3,16(a0)
    lqc2 $vf4,32(a0)
    vaddw.xyz $vf13xyz,$vf0xyz,$vf0w
    vsubw.xyz $vf9xyz,$vf0xyz,$vf0w
    vmul.xyz $vf5xyz,$vf1xyz,$vf2xyz
    vmul.xyz $vf6xyz,$vf1xyz,$vf3xyz
    vmul.xyz $vf7xyz,$vf1xyz,$vf4xyz
    vmulx.x $vf10x,$vf13x,$vf2x
    vmulx.y $vf10y,$vf13y,$vf3x
    vmulx.z $vf10z,$vf13z,$vf4x
    vmul.w $vf10w,$vf0w,$vf0w
    vmuly.x $vf11x,$vf13x,$vf2y
    vmuly.y $vf11y,$vf13y,$vf3y
    vmuly.z $vf11z,$vf13z,$vf4y
    vmul.w $vf11w,$vf0w,$vf0w
    vmulz.x $vf12x,$vf13x,$vf2z
    vmulz.y $vf12y,$vf13y,$vf3z
    vmulz.z $vf12z,$vf13z,$vf4z
    vmul.w $vf12w,$vf0w,$vf0w
    vmulax.x $ACCx,$vf9x,$vf5x
    vmadday.x $ACCx,$vf9x,$vf5y
    vmaddz.x $vf8x,$vf9x,$vf5z
    vmulax.y $ACCy,$vf9y,$vf6x
    vmadday.y $ACCy,$vf9y,$vf6y
    vmaddz.y $vf8y,$vf9y,$vf6z
    vmulax.z $ACCz,$vf9z,$vf7x
    vmadday.z $ACCz,$vf9z,$vf7y
    vmaddz.z $vf8z,$vf9z,$vf7z
    vmul.w $vf8w,$vf0w,$vf0w
    sqc2 $vf10,0(a2)
    sqc2 $vf11,16(a2)
    sqc2 $vf12,32(a2)
    sqc2 $vf8,48(a2)
    lw s0,0(s0)
    nop
    nop
L3:
    bne v1,s0,L0
    nop
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
