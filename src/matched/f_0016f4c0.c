extern void func_001b5b40(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    addiu v1,zero,4
    beq a0,v1,L16f5a8
    .word 0x7fbf0000
    addiu v1,zero,3
    beq a0,v1,L16f5a8
    nop
    addiu v1,zero,2
    beq a0,v1,L16f5a8
    nop
    beqz a0,L16f4f8
    nop
    b L16f5cc
    .word 0x7bbf0000
L16f4f8:
    beql a1,v1,L16f5a0
    .word 0x70001628
    addiu v1,zero,1
    beq a1,v1,L16f53c
    nop
    beqz a1,L16f51c
    nop
    b L16f5c8
    nop
L16f51c:
    .word 0x3c03002e
    addiu v1,v1,-5744
    sll a0,a0,0x4
    addu v1,v1,a0
    sll v0,a1,0x2
    addu v0,v0,v1
    b L16f5c8
    .word 0x8c420000
L16f53c:
    jal func_001b5b40
    nop
    addiu v1,zero,4
    beq v0,v1,L16f590
    nop
    addiu v1,zero,3
    beq v0,v1,L16f590
    nop
    addiu v1,zero,2
    beq v0,v1,L16f584
    nop
    addiu v1,zero,1
    beq v0,v1,L16f584
    nop
    beqz v0,L16f584
    nop
    b L16f590
    nop
L16f584:
    .word 0x3c01002e
    b L16f5c8
    .word 0x8c22e8a0
L16f590:
    .word 0x3c01002e
    b L16f5c8
    .word 0x8c22e910
    .word 0x70001628
L16f5a0:
    b L16f5c8
    nop
L16f5a8:
    .word 0x3c03002e
    addiu v1,v1,-5744
    sll a0,a0,0x4
    addu v1,v1,a0
    sll v0,a1,0x2
    addu v0,v0,v1
    .word 0x8c420000
    nop
L16f5c8:
    .word 0x7bbf0000
L16f5cc:
    jr ra
    addiu sp,sp,16
}
