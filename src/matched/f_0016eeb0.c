asm void f(void) {
    .set noreorder
    .set noat
    .word 0x90830007
    .word 0x90a20007
    slt at,v1,v0
    beqz at,L16eecc
    slt at,v0,v1
    b L16efa0
    .word 0x70001628
L16eecc:
    beqz at,L16eedc
    addiu v0,zero,1
    b L16efa0
    nop
L16eedc:
    .word 0x90830006
    .word 0x90a20006
    slt at,v1,v0
    beqz at,L16eef8
    slt at,v0,v1
    b L16efa0
    .word 0x70001628
L16eef8:
    beqz at,L16ef08
    addiu v0,zero,1
    b L16efa0
    nop
L16ef08:
    .word 0x90830005
    .word 0x90a20005
    slt at,v1,v0
    beqz at,L16ef24
    slt at,v0,v1
    b L16efa0
    .word 0x70001628
L16ef24:
    beqz at,L16ef34
    addiu v0,zero,1
    b L16efa0
    nop
L16ef34:
    .word 0x90830003
    .word 0x90a20003
    slt at,v1,v0
    beqz at,L16ef50
    slt at,v0,v1
    b L16efa0
    .word 0x70001628
L16ef50:
    beqz at,L16ef60
    addiu v0,zero,1
    b L16efa0
    nop
L16ef60:
    .word 0x90830002
    .word 0x90a20002
    slt at,v1,v0
    beqz at,L16ef7c
    slt at,v0,v1
    b L16efa0
    .word 0x70001628
L16ef7c:
    beqz at,L16ef8c
    addiu v0,zero,1
    b L16efa0
    nop
L16ef8c:
    .word 0x90830001
    .word 0x90a20001
    slt at,v1,v0
    slt v0,v0,v1
    movn v0,zero,at
L16efa0:
    jr ra
    nop
}
