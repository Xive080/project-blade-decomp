extern void func_00174380(void);
extern void func_00174ac0(void);
extern void func_00174b00(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c010032
    lw v0,32080(at)
    paddub s1,a0,zero
    xor s0,v0,s1
    andi v0,s0,0x1
    beqz v0,L1b59c0
    andi v0,s0,0x2
    andi v0,s1,0x1
    beqz v0,L1b5990
    paddub a0,zero,zero
    jal func_00174ac0
    paddub a0,zero,zero
    beqz v0,L1b598c
    nop
    addiu a1,zero,1
    jal func_00174b00
    paddub a0,zero,zero
    .word 0x3c010032
    lw v0,32080(at)
    ori v0,v0,0x1
    .word 0x3c010032
    b L1b59bc
    sw v0,32080(at)
L1b598c:
    paddub a0,zero,zero
L1b5990:
    jal func_00174380
    nop
    paddub a0,zero,zero
    jal func_00174b00
    paddub a1,zero,zero
    .word 0x3c010032
    lw v1,32080(at)
    addiu v0,zero,-2
    and v0,v1,v0
    .word 0x3c010032
    sw v0,32080(at)
L1b59bc:
    andi v0,s0,0x2
L1b59c0:
    beqz v0,L1b5a3c
    andi v0,s0,0x4
    andi v0,s1,0x2
    beqz v0,L1b5a0c
    addiu a0,zero,1
    jal func_00174ac0
    addiu a0,zero,1
    beqz v0,L1b5a08
    nop
    addiu a0,zero,1
    jal func_00174b00
    paddub a1,a0,zero
    .word 0x3c010032
    lw v0,32080(at)
    ori v0,v0,0x2
    .word 0x3c010032
    b L1b5a38
    sw v0,32080(at)
L1b5a08:
    addiu a0,zero,1
L1b5a0c:
    jal func_00174380
    nop
    addiu a0,zero,1
    jal func_00174b00
    paddub a1,zero,zero
    .word 0x3c010032
    lw v1,32080(at)
    addiu v0,zero,-3
    and v0,v1,v0
    .word 0x3c010032
    sw v0,32080(at)
L1b5a38:
    andi v0,s0,0x4
L1b5a3c:
    beqz v0,L1b5ab0
    andi v0,s0,0x8
    andi v0,s1,0x4
    beqz v0,L1b5a7c
    nop
    .word 0x3c010030
    lw v1,-22992(at)
    .word 0x3c010032
    lw v0,32080(at)
    ori v1,v1,0x1
    .word 0x3c010030
    sw v1,-22992(at)
    ori v0,v0,0x4
    .word 0x3c010032
    b L1b5aac
    sw v0,32080(at)
L1b5a7c:
    .word 0x3c010030
    lw a1,-22992(at)
    addiu a0,zero,-2
    addiu v0,zero,-5
    .word 0x3c010032
    lw v1,32080(at)
    and a0,a1,a0
    .word 0x3c010030
    sw a0,-22992(at)
    and v0,v1,v0
    .word 0x3c010032
    sw v0,32080(at)
L1b5aac:
    andi v0,s0,0x8
L1b5ab0:
    beqz v0,L1b5b20
    nop
    andi v0,s1,0x8
    beqz v0,L1b5af0
    nop
    .word 0x3c010030
    lw v1,-22992(at)
    .word 0x3c010032
    lw v0,32080(at)
    ori v1,v1,0x2
    .word 0x3c010030
    sw v1,-22992(at)
    ori v0,v0,0x8
    .word 0x3c010032
    b L1b5b20
    sw v0,32080(at)
L1b5af0:
    .word 0x3c010030
    lw a1,-22992(at)
    addiu a0,zero,-3
    addiu v0,zero,-9
    .word 0x3c010032
    lw v1,32080(at)
    and a0,a1,a0
    .word 0x3c010030
    sw a0,-22992(at)
    and v0,v1,v0
    .word 0x3c010032
    sw v0,32080(at)
L1b5b20:
    .word 0x7bbf0020
    .word 0x3c010032
    .word 0x7bb10010
    .word 0x7bb00000
    lw v0,32080(at)
    jr ra
    addiu sp,sp,48
}
