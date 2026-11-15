extern void func_0011ec80(void);
extern void func_00149e60(void);
extern void func_00173fb0(void);
extern void func_001aaa80(void);
asm int f(void) {
    .set noreorder
    addiu sp,sp,-16
    sq ra,0(sp)
    jal func_00149e60
    nop
    lwc1 f3,0(v0)
    lwc1 f2,4(v0)
    lwc1 f1,8(v0)
    .word 0x3c030030
    addiu a3,v1,-4896
    lwc1 f0,12(v0)
    .word 0x3c030014
    addiu a2,v1,-1360
    .word 0x3c030014
    addiu a1,v1,1712
    .word 0xe4e30000
    .word 0xe4e20004
    .word 0xe4e10008
    .word 0xe4e0000c
    lwc1 f3,16(v0)
    lwc1 f2,20(v0)
    lwc1 f1,24(v0)
    lwc1 f0,28(v0)
    .word 0x3c030014
    addiu a0,v1,-12928
    .word 0x3c030014
    .word 0x3c010030
    .word 0xe4e30010
    .word 0xe4e20014
    .word 0xe4e10018
    .word 0xe4e0001c
    lwc1 f3,32(v0)
    lwc1 f2,36(v0)
    lwc1 f1,40(v0)
    lwc1 f0,44(v0)
    addiu v1,v1,-12992
    .word 0xe4e30020
    .word 0xe4e20024
    .word 0xe4e10028
    .word 0xe4e0002c
    sw a2,-4876(at)
    .word 0x3c010030
    sw a1,-4880(at)
    .word 0x3c010030
    sw a0,-4884(at)
    .word 0x3c010030
    jal func_001aaa80
    sw v1,-4868(at)
    .word 0x3c020030
    addiu a0,v0,-5024
    addiu a2,zero,120
    jal func_0011ec80
    paddub a1,zero,zero
    .word 0x3c020030
    addiu a0,v0,-5184
    addiu a2,zero,24
    jal func_0011ec80
    paddub a1,zero,zero
    .word 0x3c020030
    addiu a0,v0,-5232
    addiu a2,zero,36
    jal func_0011ec80
    paddub a1,zero,zero
    .word 0x3c020030
    addiu a0,v0,-5280
    addiu a2,zero,36
    jal func_0011ec80
    paddub a1,zero,zero
    addiu a0,gp,-31952
    addiu a2,zero,4
    jal func_0011ec80
    paddub a1,zero,zero
    addiu a0,gp,-31956
    addiu a2,zero,4
    jal func_0011ec80
    paddub a1,zero,zero
    jal func_00173fb0
    nop
    lq ra,0(sp)
    addiu v0,zero,1
    jr ra
    addiu sp,sp,16
}
