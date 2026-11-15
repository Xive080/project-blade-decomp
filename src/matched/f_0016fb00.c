asm void f(void) {
    .set noreorder
    .set noat
    addiu v0,zero,1
    slti at,v0,5
    beqzl at,L16fb7c
    .word 0x70001628
    .word 0x3c010030
    .word 0x8c286070
    nop
    .word 0x3c030030
    addiu a2,v1,24688
    sll v1,v0,0x2
L16fb28:
    addu v1,v1,v0
    sll v1,v1,0x2
    addu v1,a2,v1
    .word 0x8c6501a8
    .word 0x8c6301ac
    addu a1,t0,a1
    addu a3,a1,v1
    sltu v1,a0,a1
    bnezl v1,L16fb68
    addiu v0,v0,1
    sltu at,a0,a3
    beqz at,L16fb64
    nop
    b L16fb7c
    nop
L16fb64:
    addiu v0,v0,1
L16fb68:
    slti v1,v0,5
    bnez v1,L16fb28
    sll v1,v0,0x2
    nop
    .word 0x70001628
L16fb7c:
    jr ra
    nop
}
