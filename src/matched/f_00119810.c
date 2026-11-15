asm unsigned f(long long a) {
    .set noreorder
    dsll32 v0,a0,0
    dsra32 v0,v0,0
    dsra32 a0,a0,0
    lui v1,0x7fff
    negu a1,v0
    ori v1,v1,0xffff
    or v0,v0,a1
    and a0,a0,v1
    srl v0,v0,0x1f
    lui v1,0x7ff0
    or a0,a0,v0
    subu a0,v1,a0
    jr ra
    srl v0,a0,0x1f
}
