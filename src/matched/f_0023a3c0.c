extern void s1a8420(void);
extern void s1a8600(void);
extern void s1a86f0(void);
extern void s1a8850(void);
extern void s1a89b0(void);
extern void s1a8b70(void);
extern void s1a8d50(void);
extern void s1a8e80(void);
asm void first(void) {
    .set noreorder
    lwc1 $f12,0(a2)
    j s1a8420
    addiu a0,a0,56
    nop
    lw a1,0(a2)
    lw a2,4(a2)
    j s1a8600
    addiu a0,a0,56
    .word 0xC4CC0000
    j s1a86f0
    addiu a0,a0,56
    nop
    .word 0xC4CC0000
    j s1a8850
    addiu a0,a0,56
    nop
    .word 0xC4C00000
    cvt.w.s $f0,$f0
    mfc1 a1,$f0
    nop
    j s1a89b0
    addiu a0,a0,56
    nop
    nop
    .word 0xC4CC0000
    j s1a8b70
    addiu a0,a0,56
    nop
    addiu sp,sp,-16
    sq ra,0(sp)
    lw a1,0(a2)
    addiu v1,zero,1
    beql a1,v1,L3
    addiu a0,a0,56
    beqzl a1,L2
    addiu a0,a0,56
    b L4
    lq ra,0(sp)
    addiu a0,a0,56
L2:
    jal s1a8d50
    nop
    b L5
    nop
    addiu a0,a0,56
L3:
    jal s1a8e80
    nop
L5:
    lq ra,0(sp)
L4:
    jr ra
    addiu sp,sp,16
}
