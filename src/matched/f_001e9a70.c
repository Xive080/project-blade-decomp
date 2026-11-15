asm void f(void) {
    .set noreorder
    .set noat
    lw v1,-30904(gp)
    andi v1,v1,0x1
    beqz v1,L1
    .word 0x3c030033
    .word 0x3c030033
    addiu a1,v1,-2976
    .word 0x3c030033
    b L2
    addiu a2,v1,-2960
L1:
    addiu a1,v1,-2960
    .word 0x3c030033
    addiu a2,v1,-2976
L2:
    addiu a0,gp,-30912
    .word 0x8c830000
    addiu a3,gp,-30852
    addiu t0,gp,-30908
    sw v1,0(a1)
    .word 0x8c840000
    .word 0x8ce30000
    addu v1,a0,v1
    sw a1,88(v1)
    .word 0x8d030000
    sw v1,0(a2)
    .word 0x8d040000
    .word 0x8ce30000
    addu v1,a0,v1
    jr ra
    sw a2,88(v1)
}
