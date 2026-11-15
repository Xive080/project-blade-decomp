extern void sub1(void);
extern void sub2(s32, s32);
extern s32 sub3(void);
asm s32 func(void) {
    .set noreorder
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    jal sub1
    paddub s0,a1,zero
    lw v1,96(s0)
    addiu v0,zero,5
    lbu v1,32(v1)
    andi v1,v1,7
    bne v1,v0,L1
    addiu a0,zero,1
    jal sub2
    addiu a1,zero,-2
    lui a1,0x1000
    dsll32 a1,a1,0
    ori a1,a1,0x8001
    addiu a0,zero,14
    pcpyld v1,a0,a1
    lw v0,-31088(gp)
    paddub a1,zero,zero
    addiu a0,zero,63
    sq v1,0(v0)
    lw v0,-31088(gp)
    addiu v0,v0,16
    sw v0,-31088(gp)
    pcpyld v1,a0,a1
    lw v0,-31088(gp)
    sq v1,0(v0)
    lw v0,-31088(gp)
    addiu v0,v0,16
    sw v0,-31088(gp)
L1:
    lw v0,-30984(gp)
    beqz v0,L2
    nop
    jal sub3
    nop
    ld v1,-30992(gp)
    sw zero,-30984(gp)
    daddu v0,v1,v0
    sd v0,-30992(gp)
L2:
    lq ra,16(sp)
    lq s0,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,32
}
