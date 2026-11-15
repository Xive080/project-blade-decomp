extern void func_00170a90(void);
extern void func_00173720(void);
extern void func_00174320(void);
extern void func_001a4110(void);
extern void func_001a4b70(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x3c017000
    .word 0x8c303fd4
    addiu a0,zero,1
    .word 0x3c010030
    .word 0x8c23aa80
    beq v1,a0,L171120
    .word 0x70001628
    b L1711cc
    nop
L171120:
    .word 0x3c010030
    .word 0xc421a870
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L171154
    nop
    .word 0x8f838050
    beqz v1,L17115c
    .word 0x3c017000
    b L1711cc
    addiu a0,zero,2
L171154:
    .word 0xaf848050
    .word 0x3c017000
L17115c:
    .word 0x8c233fc0
    andi v1,v1,0x2
    bnez v1,L171174
    nop
    b L1711cc
    .word 0x70002628
L171174:
    .word 0x3c010030
    .word 0x8c24aa84
    addiu v1,zero,1
    beq a0,v1,L171190
    nop
    b L1711cc
    addiu a0,zero,3
L171190:
    .word 0x3c010030
    .word 0xc421aa30
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L1711c4
    nop
    .word 0x8f838054
    beqz v1,L1711cc
    .word 0x70002628
    b L1711cc
    addiu a0,zero,4
L1711c4:
    .word 0xaf838054
    .word 0x70002628
L1711cc:
    beqz a0,L171214
    nop
    .word 0x3c010030
    .word 0xc421a6d8
    .word 0x3c017000
    .word 0xc4203fb0
    c.lt.s $f1,$f0
    nop
    bc1f L171214
    nop
    jal func_00173720
    nop
    .word 0x8e020000
    addiu a1,zero,5
    .word 0x72002628
    .word 0x8c420004
    jalr ra,v0
    .word 0x70003628
L171214:
    bnez v0,L171230
    nop
    .word 0x8e020000
    addiu a1,zero,-1
    .word 0x8c420008
    jalr ra,v0
    .word 0x72002628
L171230:
    jal func_00174320
    nop
    .word 0x3c017000
    .word 0x8c223fc0
    andi v0,v0,0x1
    beqz v0,L171268
    nop
    jal func_001a4b70
    nop
    addiu v1,zero,5
    beq v0,v1,L171268
    nop
    jal func_001a4110
    nop
L171268:
    jal func_00170a90
    nop
    .word 0x8f8484ac
    beqz a0,L171288
    nop
    .word 0x8c820004
    jalr ra,v0
    nop
L171288:
    .word 0x7bbf0010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,32
}
