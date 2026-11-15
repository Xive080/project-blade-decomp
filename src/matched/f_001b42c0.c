extern void sub1(void);
extern void sub2(void);
asm void first(void) {
    .set noreorder
    lui v0,0x1b
    addiu v0,v0,18496
    lui at,0x32
    sw v0,31712(at)
    .word 0x3c02001b
    addiu v0,v0,18368
    .word 0x3c010032
    sw v0,31716(at)
    .word 0x3c02001b
    addiu v0,v0,17280
    .word 0x3c010032
    sw v0,31720(at)
    .word 0x3c010032
    .word 0x3c02001b
    sw zero,31724(at)
    addiu v0,v0,17200
    .word 0x3c010032
    sw v0,31728(at)
    .word 0x3c020032
    addiu v0,v0,31712
    .word 0x3c010032
    sw v0,31744(at)
    .word 0x3c020032
    addiu a1,v0,31744
    j sub1
    addiu a0,zero,6
    nop
    nop
    addiu sp,sp,-16
    bnez a2,L1
    sq ra,0(sp)
    .word 0x3c027000
    ori v0,v0,0x3fe0
    lw a0,0(v0)
    addiu a2,zero,16384
    .word 0x3c020032
    jal sub2
    addiu a1,v0,31840
    .word 0x3c017000
    lw v1,16352(at)
    .word 0x3c020032
    addiu a1,v0,31840
    ori a2,zero,0x8000
    jal sub2
    addiu a0,v1,896
L1:
    lq ra,0(sp)
    jr ra
    addiu sp,sp,16
}
