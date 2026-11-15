extern void func_0012e8d0(void);
extern void func_00143590(void);
extern void func_00256438(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    sq ra,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    sb zero,94(sp)
    .word 0x70e08e28
    sw a1,88(sp)
    lw a3,204(a0)
    .word 0x70c09628
    beqz a3,L179a48
    .word 0x70809e28
    .word 0x3c017000
    lw a2,16328(at)
    addiu v1,zero,4
    bne a2,v1,L179a50
    nop
L179a48:
    b L179b00
    daddiu v1,zero,255
L179a50:
    lw a3,20(a3)
    .word 0x3c03002e
    addiu a2,v1,752
    .word 0x3c037f7f
    ori v1,v1,0xffff
    andi a3,a3,0xc
    addu a2,a2,a3
    mtc1 v1,f0
    lwc1 f1,0(a2)
    c.eq.s f0,f1
    nop
    bc1fl L179a90
    .word 0x3c023f4c
    b L179b00
    daddiu v1,zero,255
    .word 0x3c023f4c
L179a90:
    ori v0,v0,0xcccd
    mtc1 v0,f0
    lwc1 f2,92(s3)
    mul.s f0,f0,f1
    c.lt.s f2,f0
    nop
    bc1f L179ab8
    nop
    b L179ad0
    mov.s f2,f0
L179ab8:
    c.le.s f2,f1
    nop
    bc1t L179ad0
    nop
    b L179ad0
    mov.s f2,f1
L179ad0:
    sub.s f2,f1,f2
    .word 0x3c02437f
    sub.s f0,f1,f0
    mtc1 v0,f1
    nop
    mul.s f1,f1,f2
    div.s f12,f1,f0
    nop
    nop
    jal func_00256438
    nop
    andi v1,v0,0xff
L179b00:
    addiu s0,sp,92
    .word 0xa2030000
    .word 0x3c010030
    lw v1,-23620(at)
    andi v1,v1,0x1
    beqz v1,L179c48
    nop
    lw a3,204(s3)
    beqz a3,L179b40
    daddiu v1,zero,255
    .word 0x3c017000
    lw a2,16328(at)
    addiu v1,zero,4
    bne a2,v1,L179b48
    nop
    daddiu v1,zero,255
L179b40:
    b L179bfc
    addiu a0,sp,93
L179b48:
    lw a3,20(a3)
    .word 0x3c03002e
    addiu a2,v1,752
    .word 0x3c037f7f
    ori v1,v1,0xffff
    andi a3,a3,0xc
    addu a2,a2,a3
    mtc1 v1,f0
    lwc1 f1,0(a2)
    c.eq.s f0,f1
    nop
    bc1fl L179b88
    .word 0x3c023f4c
    b L179bf8
    daddiu v1,zero,255
    .word 0x3c023f4c
L179b88:
    ori v0,v0,0xcccd
    mtc1 v0,f0
    lwc1 f2,96(s3)
    mul.s f0,f0,f1
    c.lt.s f2,f0
    nop
    bc1f L179bb0
    nop
    b L179bc8
    mov.s f2,f0
L179bb0:
    c.le.s f2,f1
    nop
    bc1t L179bc8
    nop
    b L179bc8
    mov.s f2,f1
L179bc8:
    sub.s f2,f1,f2
    .word 0x3c02437f
    sub.s f0,f1,f0
    mtc1 v0,f1
    nop
    mul.s f1,f1,f2
    div.s f12,f1,f0
    nop
    nop
    jal func_00256438
    nop
    andi v1,v0,0xff
L179bf8:
    addiu a0,sp,93
L179bfc:
    sb v1,0(a0)
    lbu v1,0(s0)
    bnez v1,L179c18
    nop
    lbu v1,0(a0)
    beqz v1,L179cc8
    nop
L179c18:
    lw v0,204(s3)
    beqz v0,L179c40
    addiu a0,zero,3
    lw v0,20(v0)
    andi v0,v0,0x1
    beqz v0,L179c3c
    nop
    b L179c7c
    addiu a0,zero,4
L179c3c:
    addiu a0,zero,3
L179c40:
    b L179c80
    addiu a1,sp,88
L179c48:
    lbu v1,0(s0)
    beqz v1,L179cc8
    nop
    lw v0,204(s3)
    beqz v0,L179c7c
    addiu a0,zero,3
    lw v0,20(v0)
    andi v0,v0,0x1
    beqz v0,L179c78
    nop
    b L179c7c
    addiu a0,zero,4
L179c78:
    addiu a0,zero,3
L179c7c:
    addiu a1,sp,88
L179c80:
    jal func_0012e8d0
    .word 0x70003628
    beqz s2,L179ca4
    nop
    addiu a1,sp,88
    addiu a0,zero,4
    .word 0x70003628
    jal func_0012e8d0
    sw s2,88(sp)
L179ca4:
    beqz s1,L179cc8
    nop
    .word 0x72002e28
    jal func_00143590
    .word 0x72202628
    addiu a0,zero,2
    .word 0x72202e28
    jal func_0012e8d0
    .word 0x70003628
L179cc8:
    lq ra,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,96
}
