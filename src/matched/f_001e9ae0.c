extern void func_001c8760(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    .word 0x7fbf0000
    lw v1,-30808(gp)
    .word 0x3c02002e
    addiu a0,v0,18128
    .word 0x70003628
    sll v0,v1,0x4
    addu v0,a0,v0
    lw a0,0(v0)
    lw a1,4(v0)
    jal func_001c8760
    addiu a3,zero,2
    addiu v1,zero,133
    sb v1,32(v0)
    lw a1,12(v0)
    addiu a0,zero,-1
    beqz a1, L1e9b48
    .word 0x70a01e28
L1e9b28:
    srl v1,v1,0x1
    addiu a0,a0,1
    nop
    nop
    nop
    bnez v1, L1e9b28
    nop
    nop
L1e9b48:
    addiu v1,zero,1
    sllv v1,v1,a0
    addiu v1,v1,-1
    and v1,a1,v1
    beqz v1, L1e9b6c
    nop
    subu v1,a1,v1
    sll v1,v1,0x1
    sw v1,12(v0)
L1e9b6c:
    lw a1,16(v0)
    addiu a0,zero,-1
    beqz a1, L1e9b98
    .word 0x70a01e28
L1e9b7c:
    srl v1,v1,0x1
    addiu a0,a0,1
    nop
    nop
    nop
    bnez v1, L1e9b7c
    nop
L1e9b98:
    addiu v1,zero,1
    sllv v1,v1,a0
    addiu v1,v1,-1
    and v1,a1,v1
    beqz v1, L1e9bbc
    nop
    subu v1,a1,v1
    sll v1,v1,0x1
    sw v1,16(v0)
L1e9bbc:
    lw v1,-30852(gp)
    addiu a3,gp,-30968
    addu v1,v0,v1
    sw zero,8(v1)
    .word 0xdce50000
    lw a0,8(v1)
    dsra a1,a1,0x10
    andi a1,a1,0x3f
    dsll a1,a1,0xe
    dsll32 a1,a1,0x0
    dsra32 a1,a1,0x0
    or a0,a0,a1
    sw a0,8(v1)
    .word 0xdce50000
    lw a0,8(v1)
    dsra a1,a1,0x18
    andi a1,a1,0x3f
    dsll a1,a1,0x14
    dsll32 a1,a1,0x0
    dsra32 a1,a1,0x0
    or a0,a0,a1
    sw a0,8(v1)
    lw a0,12(v0)
    beqz a0, L1e9c40
    addiu a2,zero,-1
L1e9c20:
    srl a0,a0,0x1
    addiu a2,a2,1
    nop
    nop
    nop
    bnez a0, L1e9c20
    nop
    nop
L1e9c40:
    andi a0,a2,0xf
    sll a1,a0,0x1a
    lw a0,8(v1)
    or a0,a0,a1
    sw a0,8(v1)
    sw zero,12(v1)
    lw a0,16(v0)
    beqz a0, L1e9c80
    addiu a2,zero,-1
L1e9c64:
    srl a0,a0,0x1
    addiu a2,a2,1
    nop
    nop
    nop
    bnez a0, L1e9c64
    nop
L1e9c80:
    andi a0,a2,0xf
    sll a1,a0,0x1e
    lw a0,8(v1)
    or a0,a0,a1
    sw a0,8(v1)
    lw a0,16(v0)
    beqz a0, L1e9cc0
    addiu a2,zero,-1
L1e9ca0:
    srl a0,a0,0x1
    addiu a2,a2,1
    nop
    nop
    nop
    bnez a0, L1e9ca0
    nop
    nop
L1e9cc0:
    lw a1,12(v1)
    andi a0,a2,0xf
    sra a2,a0,0x2
    addiu a0,zero,1
    or a1,a1,a2
    sw a1,12(v1)
    sb a0,23(v1)
    sb zero,22(v1)
    .word 0x7bbf0000
    jr ra
    addiu sp,sp,16
}
