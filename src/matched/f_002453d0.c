extern void sub1(void);
extern void sub2(void);
extern void sub3(void);
extern void sub4(void);
asm void first(void) {
    .set noreorder
    .word 0x3c020033
    addiu v1,v0,10944
    .word 0x78660000
    .word 0x78650010
    .word 0x3c020033
    addiu a3,v0,11456
    .word 0xdc640020
    .word 0x3c020024
    .word 0x3c010033
    addiu v1,v0,21936
    .word 0x7ce60000
    .word 0x7ce50010
    .word 0xfce40020
    .word 0x3c020024
    sw v1,11456(at)
    addiu v0,v0,21760
    .word 0x3c010033
    sw v0,11464(at)
    .word 0x3c020024
    addiu v0,v0,21200
    .word 0x3c010033
    sw v0,11492(at)
    .word 0x3c020024
    addiu v0,v0,21600
    .word 0x3c010033
    sw v0,11488(at)
    .word 0x3c020033
    addiu v0,v0,11456
    .word 0x3c010033
    sw v0,11504(at)
    .word 0x3c020033
    .word 0x3c010033
    addiu a1,v0,11504
    addiu a0,zero,4
    j sub1
    sw zero,11508(at)
    addiu sp,sp,-48
    sq ra,16(sp)
    sq s0,0(sp)
    lw v0,4(a0)
    andi v0,v0,2
    beqz v0,L1
    paddub s0,a0,zero
    sw zero,40(sp)
    sw zero,36(sp)
    b L2
    sw zero,32(sp)
L1:
    .word 0x3c02437f
    sw v0,40(sp)
    sw v0,36(sp)
    sw v0,32(sp)
L2:
    addiu a1,sp,32
    jal sub2
    paddub a0,s0,zero
    jal sub3
    paddub a0,s0,zero
    sw zero,8(s0)
    lw a0,-31960(gp)
    jal sub4
    addiu a1,zero,518
    lw a0,-31572(gp)
    beqzl a0,L3
    .word 0x3c0240a0
    paddub a2,v0,zero
    lw v0,16(a0)
    .word 0x0040f809
    addiu a1,zero,8
    .word 0x3c0240a0
L3:
    addiu a0,zero,2
    jal sub1
    sw v0,56(s0)
    lq ra,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
