asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-144
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu s0,zero,16
    slti at,s0,29
    .word 0x7080be28
    .word 0x70a0b628
    beqz at,L16f200
    .word 0x70c0ae28
    addiu v1,zero,1
L16f174:
    sllv v1,v1,s0
    and v1,s7,v1
    beqzl v1,L16f1f4
    addiu s0,s0,1
    .word 0x3c030030
    addiu v1,v1,24688
    sll a0,s0,0x2
    addu s3,v1,a0
    .word 0x3c030030
    addiu v1,v1,24688
    sll a0,s0,0x1
    addu s4,v1,a0
    .word 0x70008e28
    b L16f1e0
    .word 0x70009628
L16f1b0:
    .word 0x8e63020c
    addu v1,v1,s2
    .word 0x8c640000
    beqzl a0,L16f1dc
    addiu s2,s2,4
    jalr ra,s6
    .word 0x72a02e28
    beqz v0,L16f200
    nop
    nop
    addiu s2,s2,4
L16f1dc:
    addiu s1,s1,1
L16f1e0:
    .word 0x9683028c
    slt v1,s1,v1
    bnez v1,L16f1b0
    nop
    addiu s0,s0,1
L16f1f4:
    slti at,s0,29
    bnez at,L16f174
    addiu v1,zero,1
L16f200:
    .word 0x7bbf0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,144
}
