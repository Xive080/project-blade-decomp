extern void func_001214b8(void);
extern void func_00121b70(void);
extern void func_0013b550(void);
extern void func_00195a30(void);
extern void func_001a3ac0(void);
extern void func_001b6240(void);
extern void func_0024b540(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-208
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    addiu v0,zero,3
    paddub s2,a1,zero
    .word 0x7fb00000
    paddub s3,a0,zero
    beq s2,v0,L19ce44
    paddub s1,a2,zero
    addiu v0,zero,9
    beq s2,v0,L19ce2c
    nop
    beqz s2,L19cdd8
    nop
    b L19cfe4
    paddub a0,s3,zero
L19cdd8:
    lw a0,-31960(gp)
    jal func_0013b550
    paddub a1,zero,zero
    sw v0,8(s3)
    .word 0x3c020031
    addiu v0,v0,24128
    sw zero,12(s3)
    sw v0,20(s3)
    addiu v0,zero,1
    sw v0,16(s3)
    .word 0x3c020031
    sw zero,24(s3)
    addiu a0,v0,24128
    addiu a1,zero,11
    addiu a2,zero,39
    jal func_00195a30
    sw zero,4(s3)
    lw v0,4(s3)
    ori v0,v0,0xa
    b L19cfe0
    sw v0,4(s3)
L19ce2c:
    jal func_001b6240
    nop
    bnez v0,L19cfe0
    nop
    b L19cff0
    addiu v0,zero,1
L19ce44:
    .word 0x3c02002e
    addiu a1,v0,10960
    addiu a0,sp,80
    addiu v1,zero,7
L19ce54:
    .word 0x78a20000
    addiu v1,v1,-1
    .word 0x7c820000
    addiu a1,a1,16
    addiu a0,a0,16
    bgtz v1,L19ce54
    nop
    .word 0x3c010030
    lwc1 $f1,28880(at)
    .word 0x3c010030
    lwc1 $f2,30336(at)
    c.le.s $f1,$f2
    nop
    bc1t L19cf10
    sw zero,-31460(gp)
    mtc1 zero,$f0
    nop
    c.eq.s $f0,$f2
    nop
    bc1f L19ceb4
    addiu a1,zero,311
    b L19ceb4
    addiu a1,zero,312
    addiu a1,zero,311
L19ceb4:
    jal func_0013b550
    lw a0,-31960(gp)
    lw a0,-31460(gp)
    beqz a0,L19cee4
    paddub s0,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    lw v0,-31460(gp)
    addu v0,v0,v1
    b L19cef0
    sw v0,-31460(gp)
L19cee4:
    .word 0x3c020031
    addiu v0,v0,26880
    sw v0,-31460(gp)
L19cef0:
    lw a0,-31460(gp)
    addiu a2,zero,1
    addiu a3,zero,2
    jal func_001214b8
    paddub a1,s0,zero
    lw v0,-31460(gp)
    b L19cfb0
    sw v0,100(sp)
L19cf10:
    c.le.s $f2,$f1
    nop
    bc1t L19cfa0
    nop
    mtc1 zero,$f0
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L19cf44
    addiu a1,zero,311
    b L19cf44
    addiu a1,zero,312
    addiu a1,zero,311
L19cf44:
    jal func_0013b550
    lw a0,-31960(gp)
    lw a0,-31460(gp)
    beqz a0,L19cf74
    paddub s0,v0,zero
    jal func_00121b70
    nop
    addiu v1,v0,1
    lw v0,-31460(gp)
    addu v0,v0,v1
    b L19cf80
    sw v0,-31460(gp)
L19cf74:
    .word 0x3c020031
    addiu v0,v0,26880
    sw v0,-31460(gp)
L19cf80:
    lw a0,-31460(gp)
    addiu a2,zero,2
    addiu a3,zero,1
    jal func_001214b8
    paddub a1,s0,zero
    lw v0,-31460(gp)
    b L19cfb0
    sw v0,100(sp)
L19cfa0:
    lw a0,-31960(gp)
    jal func_0013b550
    addiu a1,zero,315
    sw v0,100(sp)
L19cfb0:
    lw a0,-30524(gp)
    .word 0xdf8584d8
    addiu a2,sp,200
    addiu v1,zero,4
    sw a0,188(sp)
    .word 0xfcc50000
    addiu v0,sp,80
    sw v1,200(sp)
    addiu a0,zero,10
    sw v0,204(sp)
    jal func_0024b540
    paddub a1,zero,zero
L19cfe0:
    paddub a0,s3,zero
L19cfe4:
    paddub a1,s2,zero
    jal func_001a3ac0
    paddub a2,s1,zero
L19cff0:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,208
}
