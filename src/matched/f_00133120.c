asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c027000
    ori v0,v0,0x3fd0
    .word 0x8c430000
    addiu v0,zero,-1
    bne v1,v0,L13314c
    .word 0x70001628
    .word 0x3c017000
    .word 0x8c223fc8
    bne a0,v0,L133154
    nop
    .word 0x70001628
L13314c:
    b L133188
    nop
L133154:
    .word 0x3c010030
    .word 0xac24a580
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L133188
    addiu v0,zero,1
    .word 0x3c010030
    .word 0x8c22a580
    .word 0x3c017000
    .word 0xac223fd0
    addiu v0,zero,1
L133188:
    jr ra
    nop
}
