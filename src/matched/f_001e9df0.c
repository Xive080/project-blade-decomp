asm void f(void) {
    .set noreorder
    lqc2 $vf1,0(a1)
    lqc2 $vf2,16(a1)
    lqc2 $vf3,32(a1)
    lqc2 $vf4,48(a1)
    lqc2 $vf5,0(a2)
    lqc2 $vf6,16(a2)
    lqc2 $vf7,32(a2)
    lqc2 $vf8,48(a2)
    lqc2 $vf13,0(a0)
    vmulax.xyz $ACCxyz,$vf5xyz,$vf1x
    vmadday.xyz $ACCxyz,$vf6xyz,$vf1y
    vmaddz.xyz $vf9xyz,$vf7xyz,$vf1z
    vmulax.xyz $ACCxyz,$vf5xyz,$vf2x
    vmadday.xyz $ACCxyz,$vf6xyz,$vf2y
    vmaddz.xyz $vf10xyz,$vf7xyz,$vf2z
    vmove.w $vf9w,$vf13w
    vmulax.xyz $ACCxyz,$vf5xyz,$vf3x
    vmadday.xyz $ACCxyz,$vf6xyz,$vf3y
    vmaddz.xyz $vf11xyz,$vf7xyz,$vf3z
    vmulax.xyz $ACCxyz,$vf5xyz,$vf4x
    vmadday.xyz $ACCxyz,$vf6xyz,$vf4y
    vmaddaz.xyz $ACCxyz,$vf7xyz,$vf4z
    vmaddw.xyz $vf12xyz,$vf8xyz,$vf0w
    sqc2 $vf9,0(a0)
    sqc2 $vf10,16(a0)
    sqc2 $vf11,32(a0)
    sqc2 $vf12,48(a0)
    jr ra
    nop
}
