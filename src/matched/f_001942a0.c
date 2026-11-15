asm void f(void) {
    .set noreorder
    .set noat
    beqz $6,L1942b4
    .word 0x70001628
    bnez $5,L1942bc
    nop
    .word 0x70001628
L1942b4:
    b L194330
    nop
L1942bc:
    lw $2,-31560($28)
    beqz $2,L1942e4
    .word 0x70001628
    lw $2,484($4)
    beqz $2,L1942e0
    nop
    lw $2,1388($5)
    blez $2,L1942ec
    nop
L1942e0:
    .word 0x70001628
L1942e4:
    b L194330
    nop
L1942ec:
    lw $3,1032($5)
    addiu $2,$0,1
    sw $3,0($6)
    lw $3,1036($5)
    sw $3,4($6)
    lw $3,1040($5)
    sw $3,8($6)
    lw $3,1044($5)
    sw $3,12($6)
    lw $3,1048($5)
    sw $3,16($6)
    lw $3,1052($5)
    sw $3,20($6)
    lw $3,1056($5)
    sw $3,24($6)
    lw $3,1060($5)
    sw $3,28($6)
L194330:
    jr $31
    nop
}
