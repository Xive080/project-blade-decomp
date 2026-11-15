asm void func(void) {
    .set noreorder
    .set noat
    bnez a0,L1b5064
    sltiu at,a1,14
    b L1b5204
    .word 0x70001628
    sltiu at,a1,14
L1b5064:
    beqz at,L1b5204
    .word 0x70001628
    .word 0x3c03002f
    addiu v1,v1,432
    sll v0,a1,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    sltiu at,a0,7
    beqz at,L1b50a0
    .word 0x70001628
    bnez a0,L1b50ac
    addiu a1,zero,1
    .word 0x70001628
L1b50a0:
    b L1b5204
    nop
    addiu a1,zero,1
L1b50ac:
    beq a0,a1,L1b50e0
    addiu v0,zero,2
    sll v0,a0,0x1
    addu v0,v0,a0
    sll v1,v0,0x3
    .word 0x3c020032
    addiu v0,v0,31880
    addu v0,v0,v1
    .word 0x8c420000
    andi v0,v0,0x1
    beqz v0,L1b50e8
    nop
    addiu v0,zero,2
L1b50e0:
    b L1b5204
    nop
L1b50e8:
    .word 0x8f838574
    addiu v0,zero,2
    andi v1,v1,0x1
    b L1b5204
    movz v0,a1,v1
    sltiu at,a0,3
    beqz at,L1b5114
    addiu v0,zero,6
    b L1b5204
    addiu v0,zero,2
    addiu v0,zero,6
L1b5114:
    bne a0,v0,L1b5128
    sltiu at,a0,2
    b L1b5204
    .word 0x70001628
    sltiu at,a0,2
L1b5128:
    bnez at,L1b515c
    addiu v0,zero,2
    sll v0,a0,0x1
    addu v0,v0,a0
    sll v1,v0,0x3
    .word 0x3c020032
    addiu v0,v0,31880
    addu v0,v0,v1
    .word 0x8c420000
    andi v0,v0,0x1
    beqz v0,L1b5164
    nop
    addiu v0,zero,2
L1b515c:
    b L1b5204
    nop
L1b5164:
    .word 0x8f848574
    addiu v0,zero,2
    addiu v1,zero,1
    andi a0,a0,0x1
    b L1b5204
    movz v0,v1,a0
    sltiu v0,a0,6
    bnez v0,L1b5194
    addiu v0,zero,6
    b L1b5204
    .word 0x70001628
    addiu v0,zero,6
L1b5194:
    bne a0,v0,L1b51a8
    addiu a1,zero,1
    b L1b5204
    .word 0x70001628
    addiu a1,zero,1
L1b51a8:
    beq a0,a1,L1b51dc
    addiu v0,zero,2
    sll v0,a0,0x1
    addu v0,v0,a0
    sll v1,v0,0x3
    .word 0x3c020032
    addiu v0,v0,31880
    addu v0,v0,v1
    .word 0x8c420000
    andi v0,v0,0x1
    beqz v0,L1b51e4
    nop
    addiu v0,zero,2
L1b51dc:
    b L1b5204
    nop
L1b51e4:
    .word 0x8f838574
    addiu v0,zero,2
    andi v1,v1,0x1
    b L1b5204
    movz v0,a1,v1
    b L1b5204
    addiu v0,zero,2
    .word 0x70001628
L1b5204:
    jr ra
    nop
}
