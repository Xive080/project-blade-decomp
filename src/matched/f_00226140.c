extern void f1332a0(void);
extern void f243230(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c020033
    addiu v1,v0,10944
    .word 0x78660000
    .word 0x78650010
    .word 0x3c020033
    addiu a3,v0,2352
    .word 0xdc640020
    .word 0x3c020022
    .word 0x3c010033
    addiu v1,v0,25664
    .word 0x7ce60000
    .word 0x7ce50010
    .word 0xfce40020
    .word 0x3c020022
    sw v1,2352(at)
    addiu v0,v0,25136
    .word 0x3c010033
    sw v0,2360(at)
    .word 0x3c020022
    addiu v0,v0,25072
    .word 0x3c010033
    sw v0,2368(at)
    .word 0x3c010033
    sw zero,2380(at)
    .word 0x3c010033
    .word 0x3c020022
    sw zero,2388(at)
    addiu v0,v0,25504
    .word 0x3c010033
    sw v0,2356(at)
    .word 0x3c020022
    addiu v0,v0,25264
    .word 0x3c010033
    sw v0,2376(at)
    .word 0x3c020033
    addiu v0,v0,2352
    .word 0x3c010033
    sw v0,2400(at)
    .word 0x3c020033
    .word 0x3c010033
    addiu a1,v0,2400
    paddub a0,zero,zero
    j f1332a0
    sw zero,2404(at)
    addiu sp,sp,-16
    addiu v0,zero,3
    beq a1,v0,L226208
    sq ra,0(sp)
    b L226214
    nop
L226208:
    addiu v0,zero,1
    b L22621c
    sw v0,0(a2)
L226214:
    jal f243230
    nop
L22621c:
    lq ra,0(sp)
    jr ra
    addiu sp,sp,16
}
