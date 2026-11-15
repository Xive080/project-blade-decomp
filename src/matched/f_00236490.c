extern void func_001214b8(void);
extern void func_00133120(void);
extern void func_00133190(void);
extern void func_0016b090(void);
extern void func_0016f4a0(void);
extern void func_00170070(void);
extern void func_00171880(void);
extern void func_001718b0(void);
extern void func_00172270(void);
extern void func_001a4b10(void);
extern void func_001a4b30(void);
extern void func_001a51d0(void);
extern void func_0025f710(void);
extern void func_0025f720(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,0(sp)
    .word 0x3c010033
    lw v0,7756(at)
    bnez v0,L2364e8
    nop
    jal func_0016b090
    nop
    bnez v0,L2364e0
    addiu v0,zero,1
    addiu a0,zero,16
    jal func_0025f720
    .word 0x70002e28
    lw a0,-32152(gp)
    addiu v0,zero,1
    .word 0x3c010033
    sw v0,7756(at)
    jal func_00172270
    .word 0x70002e28
    addiu v0,zero,1
L2364e0:
    b L2366c4
    lq ra,0(sp)
L2364e8:
    .word 0x3c010030
    lwc1 f1,-22416(at)
    mtc1 zero,f0
    nop
    c.eq.s f1,f0
    nop
    bc1f L236524
    addiu v0,zero,1
    .word 0x3c010030
    lwc1 f2,-22424(at)
    c.eq.s f2,f0
    nop
    bc1t L23652c
    nop
    addiu v0,zero,1
L236524:
    b L236560
    sw v0,-30480(gp)
L23652c:
    lw v0,-30480(gp)
    beqz v0,L236560
    nop
    c.eq.s f1,f0
    nop
    bc1f L236560
    nop
    c.eq.s f2,f0
    nop
    bc1f L236560
    nop
    .word 0x3c010033
    sw zero,7748(at)
L236560:
    .word 0x3c010033
    lwc1 f0,7748(at)
    mtc1 zero,f1
    nop
    c.eq.s f1,f0
    nop
    bc1f L236598
    nop
    jal func_001718b0
    nop
    bnez v0,L236598
    nop
    jal func_00171880
    nop
L236598:
    jal func_001718b0
    nop
    beqz v0,L2366b4
    nop
    .word 0x3c010033
    lw v0,7756(at)
    addiu a0,zero,1
    bne v0,a0,L2365f0
    nop
    lw a0,-32148(gp)
    .word 0x3c0241a0
    .word 0x3c010033
    sw v0,7748(at)
    addiu v0,zero,2
    .word 0x3c010033
    jal func_00170070
    sw v0,7756(at)
    addiu a0,zero,4
    jal func_0025f720
    .word 0x70402e28
    b L2366b4
    sw zero,-30480(gp)
L2365f0:
    .word 0x3c010033
    lwc1 f2,7748(at)
    mtc1 zero,f0
    .word 0x3c017000
    lwc1 f1,16296(at)
    sub.s f1,f2,f1
    .word 0x3c010033
    c.lt.s f1,f0
    nop
    bc1f L2366b4
    swc1 f1,7748(at)
    lw v0,-30480(gp)
    beqz v0,L236638
    nop
    jal func_00133120
    nop
    b L2366b4
    nop
L236638:
    .word 0x3c010033
    lw v0,7752(at)
    slti v0,v0,2
    bnez v0,L236654
    nop
    .word 0x3c010033
    sw zero,7752(at)
L236654:
    .word 0x3c010033
    jal func_0016f4a0
    lw a0,7752(at)
    addiu a0,sp,16
    jal func_001214b8
    .word 0x70402e28
    jal func_001a51d0
    addiu a0,sp,16
    jal func_001a4b30
    nop
    .word 0x3c010030
    jal func_001a4b10
    sb v0,-23009(at)
    .word 0x3c010030
    sw v0,-23020(at)
    .word 0x3c010033
    lw v0,7752(at)
    addiu a0,zero,1
    .word 0x3c010030
    sw a0,-23024(at)
    addiu v0,v0,1
    .word 0x3c010033
    jal func_00133190
    sw v0,7752(at)
L2366b4:
    jal func_0025f710
    nop
    addiu v0,zero,1
    lq ra,0(sp)
L2366c4:
    jr ra
    addiu sp,sp,32
}
