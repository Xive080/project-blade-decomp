asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-4160
    b L1e6428
    .word 0x70003628
L1e621c:
    .word 0x70003e28
    .word 0x71606628
    nop
L1e6228:
    .word 0x70004628
    .word 0x71804e28
    b L1e6260
    addu t2,a2,a3
L1e6238:
    .word 0x8c850018
    .word 0x8c830004
    .word 0x00aa2818
    addu v1,v1,a1
    addu v1,v1,t0
    .word 0x78630000
    addiu t0,t0,16
    .word 0x7d230000
    addiu t1,t1,16
    nop
L1e6260:
    .word 0x8c83000c
    slt v1,t0,v1
    bnez v1,L1e6238
    nop
    addiu a3,a3,1
    slti v1,a3,4
    bnez v1,L1e6228
    addiu t4,t4,1024
    addiu a3,sp,4096
    .word 0x70006e28
    .word 0x70004e28
    b L1e6410
    andi t2,a2,0x4
    .word 0x70001e28
L1e6298:
    .word 0x70002e28
L1e629c:
    addu t0,a3,v1
L1e62a0:
    beqz t2,L1e6304
    addu t4,v1,a1
    addu t4,v1,a1
    andi t6,t4,0x2
    sll t7,t6,0x2
    andi t6,t4,0x4
    sra t6,t6,0x2
    or t7,t7,t6
    andi t6,t4,0x8
    sra t6,t6,0x2
    or t7,t6,t7
    andi t6,t4,0x10
    sra t6,t6,0x2
    or t7,t6,t7
    andi t6,t4,0x20
    sra t6,t6,0x1
    or t7,t6,t7
    andi t6,t4,0x1
    nor t4,t4,zero
    andi t4,t4,0x1
    sll t6,t6,0x5
    sll t4,t4,0x2
    or t4,t6,t4
    b L1e6350
    xor t7,t7,t4
L1e6304:
    andi t6,t4,0x2
    sll t7,t6,0x2
    andi t6,t4,0x4
    sra t6,t6,0x2
    or t7,t7,t6
    andi t6,t4,0x8
    sra t6,t6,0x2
    or t7,t6,t7
    andi t6,t4,0x10
    sra t6,t6,0x2
    or t7,t6,t7
    andi t6,t4,0x20
    sra t6,t6,0x1
    or t7,t6,t7
    andi t4,t4,0x1
    sll t6,t4,0x5
    sll t4,t4,0x2
    or t4,t6,t4
    xor t7,t7,t4
L1e6350:
    sra t4,t7,0x4
    sll t4,t4,0xa
    addu t6,t3,t4
    andi t4,t7,0xf
    addu t4,t6,t4
    .word 0x918e0000
    addiu a1,a1,1
    .word 0xa10e0000
    slti t4,a1,16
    bnez t4,L1e62a0
    addiu t0,t0,1
    addiu v1,v1,16
    slti a1,v1,64
    bnez a1,L1e629c
    .word 0x70002e28
    .word 0x8c850018
    .word 0x8c830004
    .word 0x7ba81000
    addiu t4,a2,2
    addiu t3,t3,16
    addiu t5,t5,16
    .word 0x00c52818
    addu v1,v1,a1
    addu v1,v1,t1
    .word 0x7c680000
    .word 0x8c850018
    .word 0x8c830004
    .word 0x7ba81010
    mult1 a1,a2,a1
    addu v1,v1,a1
    addu v1,v1,t1
    .word 0x7c680010
    .word 0x8c850018
    .word 0x8c830004
    .word 0x7ba81020
    .word 0x01852818
    addu v1,v1,a1
    addu v1,v1,t1
    .word 0x7c680000
    .word 0x8c850018
    .word 0x8c830004
    .word 0x7ba81030
    .word 0x01852818
    addu v1,v1,a1
    addu v1,v1,t1
    .word 0x7c680010
    addiu t1,t1,32
    nop
L1e6410:
    .word 0x8c83000c
    slt v1,t5,v1
    bnez v1,L1e6298
    .word 0x70001e28
    addiu a2,a2,4
    nop
L1e6428:
    .word 0x8c830010
    slt v1,a2,v1
    bnez v1,L1e621c
    addiu t3,sp,0
    jr ra
    addiu sp,sp,4160
}
