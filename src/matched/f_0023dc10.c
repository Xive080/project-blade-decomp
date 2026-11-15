extern void sub1dcd40(void);
extern void sub1df9d0(void);
extern void sub1f3d10(void);
asm int f(void *a, int *b, void **c) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v0,0(a2)
    paddub s1,a0,zero
    paddub s0,a1,zero
    lw v0,8(v0)
    lbu v0,7(v0)
    xori v0,v0,0xff
    sltu v0,zero,v0
    beqz s1,L23de4c
    sw v0,-30840(gp)
    lw v1,0(s1)
    lw v0,-30832(gp)
    beq v1,v0,L23dd1c
    nop
    sw v1,-30832(gp)
    lw a0,-30832(gp)
    beqz a0,L23dca8
    sw zero,-30836(gp)
    lbu a2,35(a0)
    ld v0,-32456(gp)
    lw v1,-30836(gp)
    paddub a1,zero,zero
    andi t0,a2,0xf
    xori a2,t0,0x1
    sltiu a3,a2,1
    xori a2,t0,0x5
    sltiu a2,a2,1
    or a2,a3,a2
    or v1,v1,a2
    ori v0,v0,0x10
    sw v1,-30836(gp)
    jal sub1f3d10
    sd v0,-32456(gp)
    b L23dcbc
    lw v0,-30840(gp)
L23dca8:
    ld v1,-32456(gp)
    addiu v0,zero,-17
    and v0,v1,v0
    sd v0,-32456(gp)
    lw v0,-30840(gp)
L23dcbc:
    bnez v0,L23dcd0
    nop
    lw v0,-30836(gp)
    beqz v0,L23dce0
    nop
L23dcd0:
    ld v0,-32456(gp)
    ori v0,v0,0x40
    b L23dcf0
    sd v0,-32456(gp)
L23dce0:
    ld v1,-32456(gp)
    addiu v0,zero,-65
    and v0,v1,v0
    sd v0,-32456(gp)
L23dcf0:
    lw v0,-30836(gp)
    beqz v0,L23dd0c
    nop
    ld v0,-30960(gp)
    ori v0,v0,0x1
    b L23dd1c
    sd v0,-30960(gp)
L23dd0c:
    ld v1,-30960(gp)
    addiu v0,zero,-2
    and v0,v1,v0
    sd v0,-30960(gp)
L23dd1c:
    lw v1,0(s0)
    addiu v0,zero,2
    beq v1,v0,L23ddb8
    addiu a0,zero,1
    ld v1,-30928(gp)
    lw a0,84(s1)
    addiu v0,zero,-481
    and v1,v1,v0
    ori at,zero,0x6
    beql at,a0,L23dd78
    ori v0,v1,0x160
    ori at,zero,0x5
    beql at,a0,L23dd78
    ori v0,v1,0xc0
    ori at,zero,0x4
    beql at,a0,L23dd78
    ori v0,v1,0x120
    ori at,zero,0x3
    beql at,a0,L23dd78
    ori v0,v1,0x80
    ori at,zero,0x2
    beql at,a0,L23dd78
    ori v0,v1,0x60
L23dd78:
    sd v0,-30928(gp)
    lw v1,88(s1)
    lw a0,92(s1)
    addiu v0,zero,3
    bne v1,v0,L23dd9c
    sd zero,-30936(gp)
    paddub v0,zero,zero
    ori v0,v0,0x1
    sd v0,-30936(gp)
L23dd9c:
    addiu v0,zero,3
    bne a0,v0,L23ddb4
    nop
    ld v0,-30936(gp)
    ori v0,v0,0x4
    sd v0,-30936(gp)
L23ddb4:
    addiu a0,zero,1
L23ddb8:
    jal sub1dcd40
    addiu a1,zero,-4
    lui v1,0x1000
    dsll32 v1,v1,0x0
    ori v1,v1,0x8003
    addiu a0,zero,14
    pcpyld v1,a0,v1
    lw v0,-31088(gp)
    addiu a0,zero,71
    sq v1,0(v0)
    lw v0,-31088(gp)
    ld v1,-30960(gp)
    addiu v0,v0,16
    sw v0,-31088(gp)
    pcpyld v1,a0,v1
    lw v0,-31088(gp)
    addiu a0,zero,20
    sq v1,0(v0)
    lw v0,-31088(gp)
    ld v1,-30928(gp)
    addiu v0,v0,16
    sw v0,-31088(gp)
    pcpyld v1,a0,v1
    lw v0,-31088(gp)
    addiu a0,zero,8
    sq v1,0(v0)
    lw v0,-31088(gp)
    ld v1,-30936(gp)
    addiu v0,v0,16
    sw v0,-31088(gp)
    pcpyld v1,a0,v1
    lw v0,-31088(gp)
    sq v1,0(v0)
    lw v0,-31088(gp)
    addiu v0,v0,16
    b L23de58
    sw v0,-31088(gp)
L23de4c:
    addiu a0,zero,1
    jal sub1df9d0
    paddub a1,zero,zero
L23de58:
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
