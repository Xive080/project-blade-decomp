asm void f(void) {
    .set noreorder
    .set noat
    addiu v0,zero,8
    .word 0x3c010030
    sw v0,-22976(at)
    .word 0x3c010030
    sw v0,-22964(at)
    .word 0x3c010030
    sw zero,-22952(at)
    addiu v0,zero,1
    .word 0x3c010030
    sw v0,-22928(at)
    .word 0x3c010030
    sw v0,-22940(at)
    addiu v1,zero,-1
    .word 0x3c010033
    jr ra
    sw v1,12380(at)
}
