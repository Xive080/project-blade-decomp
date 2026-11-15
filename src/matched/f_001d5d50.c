extern void func_001dbc80(void);
asm void func(void) {
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
    lw v0,8(a1)
    sll v1,a2,0x2
    .word 0x70808628
    addiu a0,zero,-1
    addu v0,v0,v1
    lw v0,0(v0)
    beq v0,a0, L1d5ea4
    .word 0x70009628
    sll a0,v0,0x5
    lw v0,20(s0)
    lw v1,8(s0)
    slti at,v0,2
    bnez at, L1d5ea4
    addu s2,v1,a0
    lw s1,24(s0)
    addiu v0,zero,1
    sllv s3,v0,a2
    lw v0,12(s1)
    lw v0,0(v0)
    and v0,v0,s3
    bnez v0, L1d5e78
    nop
    lhu s4,2(s1)
    addiu s7,gp,-31200
    sll v0,s4,0x3
    subu v0,v0,s4
    sll v0,v0,0x2
    sll s5,s4,0x2
    addu s6,s1,v0
L1d5dec:
    lw v0,12(s1)
    addu v0,v0,s5
    lw v0,0(v0)
    and v0,s3,v0
    bnezl v0, L1d5e6c
    addiu s4,s4,-1
    lw v0,12(s6)
    beqz v0, L1d5e68
    nop
    addiu v0,zero,-4
    addu v0,s6,v0
    lw a1,0(v0)
    beqz a1, L1d5e44
    addiu v1,s4,-1
    lhu v0,-8(s6)
    andi v0,v0,0x2
    bnez v0, L1d5e40
    nop
    jal func_001dbc80
    lw a0,0(s7)
    nop
L1d5e40:
    addiu v1,s4,-1
L1d5e44:
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s1,v0
    sw zero,20(v0)
    sw zero,-4(s6)
    sw zero,4(s6)
    sw zero,8(s6)
    sw zero,12(s6)
L1d5e68:
    addiu s4,s4,-1
L1d5e6c:
    addiu s5,s5,-4
    bnez s4, L1d5dec
    addiu s6,s6,-28
L1d5e78:
    lw v1,24(s2)
    addiu v0,zero,3
    sw v1,8(s1)
    lw v1,16(s2)
    sw v1,12(s1)
    lw v1,12(s2)
    sw v1,16(s1)
    sw v0,20(s0)
    b L1d5ea8
    .word 0x72401628
    .word 0x70009628
L1d5ea4:
    .word 0x72401628
L1d5ea8:
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
