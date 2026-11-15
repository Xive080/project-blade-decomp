extern void func_001f3d10(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c820000
    .word 0x3c030005
    paddub s0,a0,zero
    addiu s1,zero,1
    .word 0x8c530000
    beqz s3,L23da9c
    ori s2,v1,0x2
    paddub a0,s3,zero
    jal func_001f3d10
    .word 0x70002e28
    beqz v0,L23da94
    .word 0x70001628
    .word 0x92630023
    addiu v0,zero,6
    andi v1,v1,0xf
    beq v1,v0,L23da84
    .word 0x70001628
    b L23da8c
    paddub v0,s1,zero
L23da84:
    b L23daa0
    nop
L23da8c:
    b L23daa0
    nop
L23da94:
    b L23daa0
    .word 0x70008e28
L23da9c:
    .word 0x70001628
L23daa0:
    beqz v0,L23daac
    nop
    ori s2,s2,0x1
L23daac:
    .word 0xfe120020
    paddub v0,s1,zero
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}


