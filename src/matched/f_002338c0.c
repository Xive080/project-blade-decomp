extern void func_00230d40(void);
extern void func_00230bf0(void);
extern void func_001895d0(void);
extern void func_00182e50(void);
extern void func_00189050(void);
extern void func_00230cb0(void);
extern void func_00230ce0(void);
extern void func_00230d10(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-240
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    paddub s3,a0,zero
    .word 0x46006506
    .word 0x3c023f80
    mtc1 v0,$f12
    addiu a0,s3,32
    paddub s2,a1,zero
    jal func_00230d40
    paddub s1,a2,zero
    .word 0xae620034
    paddub a0,s3,zero
    jal func_00230bf0
    paddub a1,zero,zero
    .word 0xae620040
    .word 0x3c023e19
    .word 0xae60003c
    ori v0,v0,0x999a
    .word 0xafa200d0
    addiu v0,zero,2
    .word 0xafa000d4
    .word 0xafa200d8
    .word 0xafa000dc
    addiu v0,zero,9
    .word 0xafa000e0
    .word 0xafa200b0
    .word 0x3c02c3c8
    .word 0xafa200b4
    .word 0x3c0238d1
    .word 0xafa000b8
    ori v0,v0,0xb717
    .word 0xafa200c4
    addiu v0,zero,1
    .word 0xafa200cc
    .word 0x3c020023
    .word 0x8e640034
    addiu a1,sp,176
    addiu a2,v0,15168
    jal func_001895d0
    paddub a3,s3,zero
    andi s0,s1,0x1
    beqz s0,L233a08
    .word 0xae62003c
    .word 0x8f8484b0
    addiu v1,zero,2
    .word 0x3c023f00
    paddub a1,s2,zero
    .word 0x8c840028
    .word 0xafa30060
    .word 0xafa20064
    .word 0xafa20068
    .word 0xafa0006c
    .word 0xafa00070
    .word 0xafa4008c
    jal func_00182e50
    .word 0xafb20090
    addiu v0,sp,148
    .word 0xe4400000
    .word 0x3c0441c8
    mtc1 a0,$f1
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    .word 0x3c02002e
    addiu v1,v0,1696
    addiu v0,sp,124
    .word 0xe7a00074
    .word 0xafa40078
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    b L233a8c
    .word 0xe440000c
L233a08:
    .word 0x8f8484b0
    addiu v1,zero,2
    .word 0x3c023f00
    paddub a1,s2,zero
    .word 0x8c84002c
    .word 0xafa30060
    .word 0xafa20064
    .word 0xafa20068
    .word 0xafa0006c
    .word 0xafa00070
    .word 0xafa4008c
    jal func_00182e50
    .word 0xafb20090
    addiu v0,sp,148
    .word 0xe4400000
    .word 0x3c044248
    mtc1 a0,$f1
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    .word 0x3c02002e
    addiu v1,v0,1728
    addiu v0,sp,124
    .word 0xe7a00074
    .word 0xafa40078
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
L233a8c:
    .word 0x8f8284b0
    .word 0x9667001c
    .word 0x8e660034
    .word 0x8c450014
    jal func_00189050
    addiu a0,sp,96
    andi v1,s1,0x4
    beqz v1,L233b20
    .word 0xae620038
    addiu v0,zero,1
    movz v0,zero,s0
    andi s0,v0,0xffff
    .word 0x3c023f80
    mtc1 v0,$f0
    paddub a0,s3,zero
    sub.s $f12,$f0,$f20
    jal func_00230cb0
    paddub a1,s0,zero
    andi v0,s1,0x8
    beqz v0,L233b00
    .word 0x3c023f4c
    .word 0x3c023f80
    mtc1 v0,$f12
    paddub a0,s3,zero
    jal func_00230ce0
    paddub a1,s0,zero
    b L233b18
    paddub a0,s3,zero
    .word 0x3c023f4c
L233b00:
    ori v0,v0,0xcccd
    mtc1 v0,$f12
    paddub a0,s3,zero
    jal func_00230ce0
    paddub a1,s0,zero
    paddub a0,s3,zero
L233b18:
    jal func_00230d10
    paddub a1,s0,zero
L233b20:
    .word 0x7bbf0050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,240
}
