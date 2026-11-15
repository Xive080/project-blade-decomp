asm void f(void) {
    .set noreorder
    .set noat
    paddub t0,a0,zero
    lqc2 $vf1,0(a3)
    lqc2 $vf2,16(a3)
    lqc2 $vf3,32(a3)
    lqc2 $vf4,48(a3)
    lwu t5,0(a1)
    lwu t3,4(a1)
    lwu t4,8(a1)
    dsll32 t3,t3,0
    or t3,t3,t5
    pcpyld t4,t4,t3
    qmtc2 t4,$vf5
L0:
    blez a2,L2
    addi a1,a1,12
    vmulax.xyz $ACC,$vf1,$vf5x
    vmadday.xyz $ACC,$vf2,$vf5y
    vmaddaz.xyz $ACC,$vf3,$vf5z
    vmaddw.xyz $vf6,$vf4,$vf0w
    lwu t5,0(a1)
    lwu t3,4(a1)
    lwu t4,8(a1)
    addi a2,a2,-1
    dsll32 t3,t3,0
    or t3,t3,t5
    pcpyld t4,t4,t3
    qmtc2 t4,$vf5
    qmfc2 t9,$vf6
    dsrl32 v0,t9,0
    pcpyud v1,t9,t9
    sw t9,0(t0)
    sw v0,4(t0)
    sw v1,8(t0)
    b L0
    addi t0,t0,12
L2:
    jr ra
    paddub v0,a0,zero
}
