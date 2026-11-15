asm s64 func(s64 a, s64 b) {
    .set noreorder
    dsra32 a2,a0,0
    dsra32 v1,a1,0
    dsll32 a0,a0,0
    dsra32 a0,a0,0
    dsll32 a1,a1,0
    dsra32 a1,a1,0
    mult v1,a0,v1
    mult1 a2,a2,a1
    multu a0,a1
    mflo a0
    mfhi v0
    dsll32 a0,a0,0
    dsll32 v0,v0,0
    dsrl32 a0,a0,0
    addu v1,v1,a2
    or a0,a0,v0
    lui a1,0xffff
    dsrl32 a1,a1,0
    dsra32 v0,a0,0
    addu v0,v0,v1
    and a0,a0,a1
    dsll32 v0,v0,0
    jr ra
    or v0,a0,v0
}
