asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-4160
    b L1e5e68
    .word 0x70003e28
L1e5c5c:
    addiu t0,sp,4096
    .word 0x70003628
    .word 0x70005628
    .word 0x71c05e28
    b L1e5df0
    andi t4,a3,0x4
L1e5c74:
    .word 0x8c890018
    .word 0x8c850004
    addiu t5,a3,2
    .word 0x70001e28
    .word 0x00e94818
    addu a1,a1,t1
    addu a1,a1,t2
    .word 0x78a50000
    .word 0x7fa51000
    .word 0x8c890018
    .word 0x8c850004
    mult1 t1,a3,t1
    addu a1,a1,t1
    addu a1,a1,t2
    .word 0x78a50010
    .word 0x7fa51010
    .word 0x8c890018
    .word 0x8c850004
    .word 0x01a94818
    addu a1,a1,t1
    addu a1,a1,t2
    .word 0x78a50000
    .word 0x7fa51020
    .word 0x8c890018
    .word 0x8c850004
    .word 0x01a94818
    addu a1,a1,t1
    addu a1,a1,t2
    .word 0x78a50010
    .word 0x7fa51030
    nop
    .word 0x70002e28
L1e5cf4:
    addu t1,t0,v1
L1e5cf8:
    beqz t4,L1e5d5c
    addu t5,v1,a1
    addu t5,v1,a1
    andi t7,t5,0x2
    sll t8,t7,0x2
    andi t7,t5,0x4
    sra t7,t7,0x2
    or t8,t8,t7
    andi t7,t5,0x8
    sra t7,t7,0x2
    or t8,t7,t8
    andi t7,t5,0x10
    sra t7,t7,0x2
    or t8,t7,t8
    andi t7,t5,0x20
    sra t7,t7,0x1
    or t8,t7,t8
    andi t7,t5,0x1
    nor t5,t5,zero
    andi t5,t5,0x1
    sll t7,t7,0x5
    sll t5,t5,0x2
    or t5,t7,t5
    b L1e5da8
    xor t9,t8,t5
L1e5d5c:
    andi t7,t5,0x2
    sll t8,t7,0x2
    andi t7,t5,0x4
    sra t7,t7,0x2
    or t8,t8,t7
    andi t7,t5,0x8
    sra t7,t7,0x2
    or t8,t7,t8
    andi t7,t5,0x10
    sra t7,t7,0x2
    or t8,t7,t8
    andi t7,t5,0x20
    sra t7,t7,0x1
    or t8,t7,t8
    andi t5,t5,0x1
    sll t7,t5,0x5
    sll t5,t5,0x2
    or t5,t7,t5
    xor t9,t8,t5
L1e5da8:
    .word 0x91380000
    sra t5,t9,0x4
    sll t5,t5,0xa
    addu t7,t3,t5
    andi t5,t9,0xf
    addu t5,t7,t5
    .word 0xa1b80000
    .word 0x24a50001
    slti t5,a1,16
    bnez t5,L1e5cf8
    .word 0x25290001
    .word 0x24630010
    slti a1,v1,64
    bnez a1,L1e5cf4
    .word 0x70002e28
    .word 0x254a0020
    .word 0x256b0010
    .word 0x24c60010
L1e5df0:
    .word 0x8c83000c
    slt v1,a2,v1
    bnez v1,L1e5c74
    nop
    .word 0x70004628
    nop
L1e5e08:
    .word 0x70005e28
    .word 0x71c04e28
    b L1e5e40
    addu t2,a3,t0
L1e5e18:
    .word 0x8c850018
    .word 0x79260000
    .word 0x8c830004
    .word 0x00aa2818
    .word 0x25290010
    addu v1,v1,a1
    addu v1,v1,t3
    .word 0x7c660000
    .word 0x256b0010
    nop
L1e5e40:
    .word 0x8c83000c
    slt v1,t3,v1
    bnez v1,L1e5e18
    nop
    .word 0x25080001
    slti v1,t0,4
    bnez v1,L1e5e08
    .word 0x25ce0400
    .word 0x24e70004
    nop
L1e5e68:
    .word 0x8c830010
    slt v1,a3,v1
    bnez v1,L1e5c5c
    addiu t6,sp,0
    jr ra
    addiu sp,sp,4160
}

