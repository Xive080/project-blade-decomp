extern void sub(void);
asm void first(void) {
    .set noreorder
    .set noat
    lui v0,0x17
    addiu v0,v0,16896
    .word 0x3C010031
    sw v0,-32192(at)
    lui v0,0x17
    addiu v0,v0,16848
    .word 0x3C010031
    sw v0,-32188(at)
    lui v0,0x17
    addiu v0,v0,16416
    .word 0x3C010031
    sw v0,-32184(at)
    .word 0x3C020031
    addiu v0,v0,-32192
    .word 0x3C010031
    addiu a1,gp,-31652
    addiu a0,zero,1
    sw v0,-31652(gp)
    j sub
    sw zero,-32180(at)
    addiu sp,sp,-48
    sq ra,0(sp)
    lw v0,-31656(gp)
    beqz v0,L1
    nop
    jal sub
    nop
    bnez v0,L2
    nop
    lui v0,0x17
    addiu a1,v0,17152
    jal sub
    paddub a0,zero,zero
    sw zero,16(sp)
    addiu v0,zero,1
    sw zero,20(sp)
    sw v0,24(sp)
    sw v0,28(sp)
    paddub a0,zero,zero
    .word 0x70002e28
    jal sub
    sw zero,-31656(gp)
    sw v0,32(sp)
    lui v0,0x41f0
    sw v0,36(sp)
    lui v0,0x17
    addiu v0,v0,16592
    addiu a0,sp,16
    jal sub
    sw v0,40(sp)
    jal sub
    nop
    b L3
    lq ra,0(sp)
L1:
    lw v0,-31660(gp)
    bnez v0,L2
    nop
    jal sub
    nop
L2:
    lq ra,0(sp)
L3:
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
