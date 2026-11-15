extern void sub1(void);
asm void first(void) {
    .set noreorder
    lui v0,0x4040
    sw v0,20(a0)
    addiu a3,zero,2
    sw zero,16(a0)
    paddub v0,a3,zero
    sw zero,8(a0)
    addiu a3,a3,-1
    beqz v0,L2
    sw zero,24(a0)
    sll v0,a3,2
    addu t0,a0,v0
    lui v0,0x30
    addiu a2,v0,-23712
    lui v0,0x33
    addiu v1,v0,10912
L1:
    sll v0,a3,3
    addu v0,v0,a3
    lwc1 $f3,0(v1)
    sll v0,v0,1
    addu v0,v0,a3
    lwc1 $f2,4(v1)
    sll v0,v0,2
    addu a1,a2,v0
    lwc1 $f1,8(v1)
    lwc1 $f0,12(v1)
    paddub v0,a3,zero
    addiu a3,a3,-1
    swc1 $f3,44(a1)
    swc1 $f2,48(a1)
    swc1 $f1,52(a1)
    swc1 $f0,56(a1)
    sw zero,44(t0)
    bnez v0,L1
    addiu t0,t0,-4
L2:
    lw v0,4(a0)
    ori v0,v0,2
    sw v0,4(a0)
    sw zero,12(a0)
    j sub1
    addiu a0,zero,3
    lwc1 $f0,20(a0)
    paddub v0,zero,zero
    jr ra
    swc1 $f0,16(a0)
}
