extern void fn_1332c0(void);
extern void fn_173720(void);
extern void fn_174320(void);
extern void fn_1a4b70(void);
extern void fn_1a4110(void);
extern void fn_170a90(void);
asm void func(void) {
    .set noreorder
    .word 0x3c020017
    addiu v0,v0,4832
    .word 0x3c010031
    sw v0,-32448(at)
    .word 0x3c020017
    addiu v0,v0,4768
    .word 0x3c010031
    sw v0,-32444(at)
    .word 0x3c020017
    addiu v0,v0,4336
    .word 0x3c010031
    sw v0,-32440(at)
    .word 0x3c010031
    .word 0x3c020017
    sw zero,-32436(at)
    addiu v0,v0,4304
    .word 0x3c010031
    sw v0,-32432(at)
    .word 0x3c020031
    addiu v0,v0,-32448
    addiu a1,gp,-31804
    addiu a0,zero,2
    j fn_1332c0
    sw v0,-31804(gp)
    .word 0x3c017000
    lw a0,16340(at)
    lw v0,0(a0)
    lw v0,28(v0)
    jr v0
    nop
    nop
    nop
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x3c017000
    lw s0,16340(at)
    addiu a0,zero,1
    .word 0x3c010030
    lw v1,-21888(at)
    beq v1,a0,L171120
    paddub v0,zero,zero
    b L1711cc
    nop
L171120:
    .word 0x3c010030
    lwc1 $f1,-22416(at)
    mtc1 zero,$f0
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L171154
    nop
    lw v1,-32688(gp)
    beqz v1,L17115c
    .word 0x3c017000
    b L1711cc
    addiu a0,zero,2
L171154:
    sw a0,-32688(gp)
    .word 0x3c017000
L17115c:
    lw v1,16320(at)
    andi v1,v1,0x2
    bnez v1,L171174
    nop
    b L1711cc
    paddub a0,zero,zero
L171174:
    .word 0x3c010030
    lw a0,-21884(at)
    addiu v1,zero,1
    beq a0,v1,L171190
    nop
    b L1711cc
    addiu a0,zero,3
L171190:
    .word 0x3c010030
    lwc1 $f1,-21968(at)
    mtc1 zero,$f0
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L1711c4
    nop
    lw v1,-32684(gp)
    beqz v1,L1711cc
    paddub a0,zero,zero
    b L1711cc
    addiu a0,zero,4
L1711c4:
    sw v1,-32684(gp)
    paddub a0,zero,zero
L1711cc:
    beqz a0,L171214
    nop
    .word 0x3c010030
    lwc1 $f1,-22824(at)
    .word 0x3c017000
    lwc1 $f0,16304(at)
    c.lt.s $f1,$f0
    nop
    bc1f L171214
    nop
    jal fn_173720
    nop
    lw v0,0(s0)
    addiu a1,zero,5
    paddub a0,s0,zero
    lw v0,4(v0)
    jalr ra,v0
    paddub a2,zero,zero
L171214:
    bnez v0,L171230
    nop
    lw v0,0(s0)
    addiu a1,zero,-1
    lw v0,8(v0)
    jalr ra,v0
    paddub a0,s0,zero
L171230:
    jal fn_174320
    nop
    .word 0x3c017000
    lw v0,16320(at)
    andi v0,v0,0x1
    beqz v0,L171268
    nop
    jal fn_1a4b70
    nop
    addiu v1,zero,5
    beq v0,v1,L171268
    nop
    jal fn_1a4110
    nop
L171268:
    jal fn_170a90
    nop
    lw a0,-31572(gp)
    beqz a0,L171288
    nop
    lw v0,4(a0)
    jalr ra,v0
    nop
L171288:
    .word 0x7bbf0010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,32
}
