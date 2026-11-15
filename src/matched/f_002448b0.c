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
    addiu a3,v0,11200
    .word 0xdc640020
    .word 0x3c020024
    .word 0x3c010033
    addiu v1,v0,20720
    .word 0x7ce60000
    .word 0x7ce50010
    .word 0xfce40020
    .word 0x3c020024
    sw v1,11200(at)
    addiu v0,v0,20880
    .word 0x3c010033
    sw v0,11236(at)
    .word 0x3c020024
    addiu v0,v0,19552
    .word 0x3c010033
    sw v0,11224(at)
    .word 0x3c020024
    addiu v0,v0,18880
    .word 0x3c010033
    sw v0,11204(at)
    .word 0x3c020024
    addiu v0,v0,18784
    .word 0x3c010033
    sw v0,11208(at)
    .word 0x3c020033
    addiu v0,v0,11200
    .word 0x3c010033
    sw v0,11248(at)
    addiu v0,zero,4
    .word 0x3c010033
    sw v0,11252(at)
    .word 0x3c020033
    addiu a1,v0,11248
    j sub1
    addiu a0,zero,11
    nop
    nop
    nop
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v1,12(a0)
    addiu v0,zero,8
    paddub s0,a1,zero
    bne v1,v0,L1
    paddub s1,a0,zero
    lui at,0x7000
    lw v1,16328(at)
    addiu v0,zero,7
    beql v1,v0,L2
    paddub a0,s1,zero
    jal sub2
    nop
L1:
    paddub a0,s1,zero
L2:
    jal sub3
    paddub a1,s0,zero
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
