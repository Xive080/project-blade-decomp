asm void f(void) {
    .set noreorder
    .set noat
    ori t1,zero,65535
    sltu v0,t1,t0
    beqz v0,L107850
    .word 0x3c07002f
    .word 0x3c021000
    .word 0x8ce62194
    ori v0,v0,0xb410
    .word 0x3c03000f
    .word 0x3c041000
    .word 0xac460000
    ori v1,v1,0xfff0
    addu a2,a2,v1
    ori a0,a0,0xb420
    .word 0x3c051000
    .word 0xac890000
    addiu v1,zero,257
    .word 0x3c020fff
    ori a1,a1,0xb400
    ori v0,v0,0xffff
    .word 0xaca30000
    and a2,a2,v0
    subu v1,t0,t1
    .word 0xace62194
    b L107884
    .word 0xad432190
L107850:
    .word 0x3c02002f
    .word 0x3c031000
    .word 0x8c452194
    ori v1,v1,0xb410
    .word 0x3c021000
    .word 0x3c041000
    .word 0xac650000
    ori v0,v0,0xb420
    .word 0xac480000
    ori a0,a0,0xb400
    addiu v0,zero,257
    .word 0xac820000
    .word 0xad402190
L107884:
    jr ra
    .word 0x0000102d
}
