extern void func_001df650(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x3c020033
    addiu v0,v0,1632
    lw v1,0(v0)
    lw a2,12(a0)
    lw a3,44(a0)
    lw s0,16(a0)
    beqz v1, L21dc80
    lw t0,8(a0)
    lw a1,0(a3)
    beqz a1, L21dc34
    nop
    lhu v1,12(v0)
    b L21dc80
    sh v1,0(a1)
L21dc34:
    lw v1,12(t0)
    .word 0xc4430010
    .word 0xc4420014
    .word 0xc4410018
    .word 0xc440001c
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0xc4430020
    .word 0xc4420024
    .word 0xc4410028
    .word 0xc440002c
    .word 0xe4630010
    .word 0xe4620014
    .word 0xe4610018
    .word 0xe460001c
    .word 0xc4400030
    .word 0xe4600020
L21dc80:
    lw t1,4(v0)
    lw a1,8(a2)
    sltu v1,t1,a1
    bnez v1, L21dc9c
    subu v1,a1,t1
    b L21ddbc
    sw zero,8(a2)
L21dc9c:
    sw v1,8(a2)
    lw a1,8(a2)
    lw v1,8(v0)
    sltu at,v1,a1
    bnez at, L21dcb8
    nop
    sw a1,4(a3)
L21dcb8:
    lw a1,0(a3)
    beqz a1, L21dcfc
    nop
    lw v1,4(v0)
    sll v1,v1,0x1
    addu v1,a1,v1
    sw v1,0(a3)
    lw v1,0(v0)
    beqz v1, L21ddbc
    nop
    lw v1,0(a3)
    lhu v1,0(v1)
    sh v1,12(v0)
    lhu v1,14(v0)
    lw v0,0(a3)
    b L21ddbc
    sh v1,0(v0)
L21dcfc:
    lw a2,4(v0)
    lw v1,12(t0)
    sll a1,a2,0x3
    addu a1,a1,a2
    sll a1,a1,0x2
    addu v1,v1,a1
    sw v1,12(t0)
    lw v1,0(v0)
    beqz v1, L21ddbc
    nop
    .word 0x8d03000c
    .word 0xc4630000
    .word 0xc4620004
    .word 0xc4610008
    .word 0xc460000c
    .word 0xe4430010
    .word 0xe4420014
    .word 0xe4410018
    .word 0xe440001c
    .word 0xc4630010
    .word 0xc4620014
    .word 0xc4610018
    .word 0xc460001c
    .word 0xe4430020
    .word 0xe4420024
    .word 0xe4410028
    .word 0xe440002c
    .word 0xc4600020
    .word 0xe4400030
    .word 0x8d03000c
    .word 0xc4430034
    .word 0xc4420038
    .word 0xc441003c
    .word 0xc4400040
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0xc4430044
    .word 0xc4420048
    .word 0xc441004c
    .word 0xc4400050
    .word 0xe4630010
    .word 0xe4620014
    .word 0xe4610018
    .word 0xe460001c
    .word 0xc4400054
    .word 0xe4600020
L21ddbc:
    lw v1,48(a0)
    .word 0x3c028800
    lw a0,0(v1)
    jal func_001df650
    ori a1,v0,0x83
    sw zero,4(s0)
    .word 0x7bbf0010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,32
}
