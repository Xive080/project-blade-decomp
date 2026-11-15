extern void sub1(void);
extern void sub2(void);
extern void sub3(void);
extern void sub4(void);
extern void sub5(void);
extern void sub6(void);
extern void sub7(void);
extern void sub8(void);
asm void first(void) {
    .set noreorder
    .word 0x3c020033
    addiu v1,v0,10944
    .word 0x78660000
    .word 0x78650010
    .word 0x3c020033
    addiu a3,v0,2800
    .word 0xdc640020
    .word 0x3c020023
    .word 0x3c010033
    addiu v1,v0,-32304
    .word 0x7ce60000
    .word 0x7ce50010
    .word 0xfce40020
    .word 0x3c020022
    sw v1,2800(at)
    addiu v0,v0,32496
    .word 0x3c010033
    sw v0,2808(at)
    .word 0x3c020022
    addiu v0,v0,30624
    .word 0x3c010033
    sw v0,2828(at)
    .word 0x3c020023
    addiu v0,v0,18384
    .word 0x3c010033
    sw v0,2836(at)
    .word 0x3c020022
    addiu v0,v0,30096
    .word 0x3c010033
    sw v0,2832(at)
    .word 0x3c020022
    addiu v0,v0,31984
    .word 0x3c010033
    sw v0,2804(at)
    .word 0x3c020033
    addiu v0,v0,2800
    .word 0x3c010033
    sw v0,2848(at)
    addiu v0,zero,5
    .word 0x3c010033
    sw v0,2852(at)
    .word 0x3c020033
    addiu a1,v0,2848
    j sub1
    addiu a0,zero,8
    nop
    nop
    nop
    addiu sp,sp,-64
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw v0,4(a0)
    paddub s1,a0,zero
    andi v0,v0,0x2
    beqz v0,L2275c4
    paddub s0,zero,zero
    sw zero,56(sp)
    sw zero,52(sp)
    b L2275d4
    sw zero,48(sp)
L2275c4:
    .word 0x3c02437f
    sw v0,56(sp)
    sw v0,52(sp)
    sw v0,48(sp)
L2275d4:
    addiu a1,sp,48
    jal sub2
    paddub a0,s1,zero
    jal sub3
    paddub a0,s1,zero
    .word 0x3c02002e
    addiu v0,v0,26512
    sw v0,304(s1)
    addiu v0,zero,-1
    sw zero,308(s1)
    paddub a0,zero,zero
    b L227628
    paddub a1,zero,zero
L227608:
    lw v1,308(s1)
    slt at,v1,a2
    beqzl at,L227624
    addiu a1,a1,16
    sw a2,308(s1)
    nop
    addiu a1,a1,16
L227624:
    addiu a0,a0,1
L227628:
    lw v1,304(s1)
    addu v1,v1,a1
    lw a2,0(v1)
    bne a2,v0,L227608
    nop
    lw v0,308(s1)
    paddub a2,zero,zero
    paddub a0,s1,zero
    .word 0x70002e28
    addiu v0,v0,1
    b L2276a8
    sw v0,308(s1)
L227658:
    sw zero,192(a0)
    sw s0,196(a0)
    b L227680
    paddub v1,a1,zero
L227668:
    lw v0,192(a0)
    addiu v1,v1,16
    addiu a1,a1,16
    addiu s0,s0,1
    addiu v0,v0,1
    sw v0,192(a0)
L227680:
    lw v0,304(s1)
    addu v0,v0,v1
    lw v0,0(v0)
    beq a2,v0,L227668
    nop
    sw zero,200(a0)
    sw zero,204(a0)
    addiu a0,a0,16
    addiu a2,a2,1
    nop
L2276a8:
    lw v0,308(s1)
    slt v0,a2,v0
    bnez v0,L227658
    nop
    addiu a2,zero,2
    paddub v0,a2,zero
    beqz v0,L227720
    addiu a2,a2,-1
    sll v0,a2,0x4
    addu v0,v0,a2
    sll v0,v0,0x2
    addu a0,s1,v0
    sll v0,a2,0x3
    addu a1,s1,v0
    addiu v0,gp,-30560
    sll v1,a2,0x2
    addu v1,v0,v1
L2276ec:
    sw zero,64(a0)
    sw zero,60(a0)
    sw zero,56(a0)
    sw zero,376(a1)
    sw zero,380(a1)
    sw zero,0(v1)
    paddub v0,a2,zero
    addiu a0,a0,-68
    addiu a1,a1,-8
    addiu v1,v1,-4
    bnez v0,L2276ec
    addiu a2,a2,-1
    nop
L227720:
    addiu v0,zero,-1
    sw v0,320(s1)
    sw v0,316(s1)
    sw zero,312(s1)
    .word 0x3c024080
    sw v0,20(s1)
    .word 0x3c0242f0
    sw v0,8(s1)
    sw zero,328(s1)
    sw zero,332(s1)
    .word 0x3c017000
    lw a0,16344(at)
    .word 0x3c020023
    addiu a1,v0,-32240
    jal sub4
    paddub a2,s1,zero
    jal sub5
    nop
    jal sub6
    mov.s $f12,$f0
    .word 0x3c010030
    jal sub7
    lbu a0,-23009(at)
    jal sub8
    addiu a0,zero,2
    lq ra,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
