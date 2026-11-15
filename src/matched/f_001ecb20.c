asm void func(void) {
    .set noreorder
    .set noat
    andi v1,a2,0xf00
    addiu v0,zero,1536
    beq v1,v0,L_d8
    lw a1,0(a1)
    addiu v0,zero,1280
    beq v1,v0,L_90
    srl v0,a1,0x10
    beqz v1,L_5c
    srl v0,a1,0x7
    addiu v0,zero,256
    beq v1,v0,L_58
    nop
    b L_f8
    .word 0x70001628
L_58:
    srl v0,a1,0x7
L_5c:
    andi v0,v0,0xf8
    sb v0,2(a0)
    srl v0,a1,0x2
    andi v0,v0,0xf8
    sb v0,1(a0)
    sll v0,a1,0x3
    andi v0,v0,0xf8
    sb v0,0(a0)
    andi v1,a1,0x8000
    addiu v0,zero,255
    movz v0,zero,v1
    b L_100
    sb v0,3(a0)
L_90:
    sb v0,2(a0)
    srl v0,a1,0x8
    sb v0,1(a0)
    sb a1,0(a0)
    lui v0,0xff00
    and a1,a1,v0
    lui v0,0xfe00
    ori v0,v0,0x1ff
    .word 0x00450019
    nop
    nop
    mfhi v1
    subu v0,a1,v1
    srl v0,v0,0x1
    addu v0,v0,v1
    srl v0,v0,0x17
    b L_100
    sb v0,3(a0)
L_d8:
    sb a1,0(a0)
    srl v0,a1,0x8
    sb v0,1(a0)
    srl v0,a1,0x10
    sb v0,2(a0)
    addiu v0,zero,255
    b L_100
    sb v0,3(a0)
L_f8:
    b L_104
    nop
L_100:
    addiu v0,zero,1
L_104:
    jr ra
    nop
}
