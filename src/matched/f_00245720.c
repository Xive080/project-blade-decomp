extern void sub1(void);
extern void sub2(void);
extern void sub3(void);
asm void first(void) {
    .set noreorder
    lui v0,0x33
    addiu v1,v0,10944
    .word 0x78660000
    .word 0x78650010
    .word 0x3c020033
    addiu a3,v0,11600
    .word 0xdc640020
    .word 0x3c020024
    .word 0x3c010033
    addiu v1,v0,22784
    .word 0x7ce60000
    .word 0x7ce50010
    .word 0xfce40020
    .word 0x3c020024
    sw v1,11600(at)
    addiu v0,v0,22000
    .word 0x3c010033
    sw v0,11636(at)
    .word 0x3c020024
    addiu v0,v0,22544
    .word 0x3c010033
    sw v0,11632(at)
    .word 0x3c020024
    addiu v0,v0,22448
    .word 0x3c010033
    sw v0,11604(at)
    .word 0x3c020033
    addiu v0,v0,11600
    .word 0x3c010033
    sw v0,11648(at)
    .word 0x3c020033
    .word 0x3c010033
    addiu a1,v0,11648
    addiu a0,zero,5
    j sub1
    sw zero,11652(at)
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    addiu v0,zero,4
    paddub s1,a1,zero
    paddub s2,a0,zero
    beq s1,v0,L1
    paddub s0,a2,zero
    b L2
    paddub a0,s2,zero
L1:
    jal sub2
    addiu a0,zero,7
    paddub a0,s2,zero
L2:
    paddub a1,s1,zero
    jal sub3
    paddub a2,s0,zero
    lq ra,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
