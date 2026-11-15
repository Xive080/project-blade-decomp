asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c19ffff
    ori t9,t9,0xffc0
    blez a1,L10c57c
    addu t2,a0,a1
    and t0,a0,t9
    addiu t2,t2,-1
    and t1,t2,t9
    subu t2,t1,t0
    srl t3,t2,0x6
    addiu t3,t3,1
    andi t1,t3,0x7
    beqz t1,L10c528
    srl t2,t3,0x3
L10c50c:
    sync
    cache 0x18,0(t0)
    sync
    addiu t1,t1,-1
    nop
    bgtz t1,L10c50c
    addiu t0,t0,64
L10c528:
    beqz t2,L10c57c
L10c52c:
    .word 0x254affff
    sync
    cache 0x18,0(t0)
    sync
    cache 0x18,64(t0)
    sync
    cache 0x18,128(t0)
    sync
    cache 0x18,192(t0)
    sync
    cache 0x18,256(t0)
    sync
    cache 0x18,320(t0)
    sync
    cache 0x18,384(t0)
    sync
    cache 0x18,448(t0)
    sync
    .word 0x1d40ffed
    addiu t0,t0,512
L10c57c:
    jr ra
    nop
}
