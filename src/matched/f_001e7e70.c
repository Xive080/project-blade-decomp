asm void func(void) {
    .set noreorder
    .set noat
    slt at,zero,a1
    beqz at,L7ef0
    .word 0x70005628
    slti at,a1,3
    bnez at,L7eb8
    addiu t3,a1,-2
    .word 0x70806628
    .word 0x3c03001e
    .word 0x24697e60
    .word 0x3c03001e
    .word 0x24687e60
L7e9c:
    sw t1,0(t4)
    addiu t2,t2,2
    sw t0,4(t4)
    slt v1,t2,t3
    addiu t4,t4,8
    bnez v1,L7e9c
    nop
L7eb8:
    slt at,t2,a1
    beqz at,L7ef4
    .word 0x70e01e28
    sll v1,t2,2
    addu t1,a0,v1
    .word 0x3c03001e
    .word 0x24687e60
L7ed4:
    addiu t2,t2,1
    sw t0,0(t1)
    slt v1,t2,a1
    addiu t1,t1,4
    nop
    bnez v1,L7ed4
    nop
L7ef0:
    .word 0x70e01e28
L7ef4:
    beqz v1,L7f38
    addiu a3,v1,-1
L7efc:
    lw v1,0(a2)
    slt at,v1,a1
    beqzl at,L7f2c
    .word 0x70e01e28
    bltz v1,L7f28
    nop
    lw t0,4(a2)
    sll v1,v1,2
    addu v1,a0,v1
    sw t0,0(v1)
    nop
L7f28:
    .word 0x70e01e28
L7f2c:
    addiu a2,a2,8
    bnez v1,L7efc
    addiu a3,v1,-1
L7f38:
    jr ra
    nop
}
