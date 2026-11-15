asm void func(void) {
    .set noreorder
    .set noat
    andi v1,a2,0xf00
    addiu v0,zero,1536
    beq v1,v0,L1ecadc
    addiu v0,zero,1280
    beq v1,v0,L1eca90
    nop
    beqz v1,L1eca50
    addiu v0,zero,256
    beq v1,v0,L1eca50
    nop
    b L1ecb08
    .word 0x70001628
L1eca50:
    lbu v1,0(a1)
    lbu v0,3(a1)
    lbu a3,2(a1)
    lbu a2,1(a1)
    srl v1,v1,0x3
    sll v0,v0,0x8
    andi v0,v0,0x8000
    sll a1,a3,0x7
    andi a3,a1,0x7c00
    sll a1,a2,0x2
    andi a1,a1,0x3e0
    or a1,a3,a1
    or v1,v1,a1
    or v0,v0,v1
    b L1ecb10
    sw v0,0(a0)
L1eca90:
    lbu a3,2(a1)
    lbu a2,1(a1)
    lbu v1,0(a1)
    lui v0,0xff00
    sll a3,a3,0x10
    sll a2,a2,0x8
    lbu a1,3(a1)
    or a2,a3,a2
    or a2,v1,a2
    sll v1,a1,0x8
    addu v1,v1,a1
    sll v1,v1,0x8
    addu v1,v1,a1
    sll v1,v1,0x7
    addu v1,v1,a1
    and v0,v1,v0
    or v0,a2,v0
    b L1ecb10
    sw v0,0(a0)
L1ecadc:
    lbu v1,1(a1)
    lbu v0,2(a1)
    lbu a3,0(a1)
    lui a2,0x8000
    sll v1,v1,0x8
    sll v0,v0,0x10
    or a1,a3,a2
    or v1,a1,v1
    or v0,v0,v1
    b L1ecb10
    sw v0,0(a0)
L1ecb08:
    b L1ecb14
    nop
L1ecb10:
    addiu v0,zero,1
L1ecb14:
    jr ra
    nop
}
