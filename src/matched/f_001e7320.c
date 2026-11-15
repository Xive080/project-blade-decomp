extern void func_001c30e0();
extern void func_001c3070();
extern void func_0010a530();
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0010
    .word 0x7fb00000
    lbu v0,35(a1)
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    andi v0,v0,0xff
    dsll v0,v0,0x8
    dsll32 v1,v0,0x0
    dsra32 v1,v1,0x0
    andi v0,v1,0x6000
    beqz v0,L6c
    .word 0x70a08628
    lw a0,8(s0)
    beqz a0,L64
    addiu v0,zero,1
    andi v0,v1,0x4000
    addiu a2,zero,16
    addiu a1,zero,256
    movz a2,a1,v0
    andi v1,v1,0xf00
    addiu v0,zero,1280
    beq v1,v0,L78
    sll v0,a2,0x2
    beq v1,a1,L70
    sll v0,a2,0x1
    b L20
    addiu v0,zero,1
L70:
    b L48
    addu v0,a0,v0
L78:
    b L44
    nop
L20:
    sw v0,40(sp)
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    sw v0,44(sp)
    jal func_001c3070
    addiu a0,sp,40
    b L70e
    .word 0x70001628
L44:
    addu v0,a0,v0
L48:
    jal func_0010a530
    addiu a1,v0,127
    lb v1,34(s0)
    addiu v0,zero,-25
    and v0,v1,v0
    sb v0,34(s0)
    addiu v0,zero,1
L64:
    b L74
    .word 0x7bbf0010
L6c:
    .word 0x70001628
L70e:
    .word 0x7bbf0010
L74:
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
