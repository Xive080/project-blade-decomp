extern void func_001b9c00();

asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    addiu v0,zero,7
    beq a2,v0,L4c
    .word 0x70008628
    addiu v0,zero,6
    beq a2,v0,L4c
    nop
    beqz a2,Ld4
    nop
    b Le0
    nop
Ld4:
    lw t2,32(a0)
    .word 0x70004628
    b L38
    .word 0x70804e28
Le4:
    lw v1,12(t1)
    lw v0,4(a3)
    bnel v1,v0,L34
    addiu t1,t1,4
    lw v0,0(a1)
    ori v0,v0,1
    sw v0,0(a1)
    lwc1 $f0,44(a0)
    swc1 $f0,20(a1)
    lw v0,12(a1)
    addiu v0,v0,1
    sw v0,12(a1)
    lw v1,12(a1)
    lw v0,36(a0)
    sltu v0,v1,v0
    bnez v0,Le0
    nop
    b Le0
    addiu s0,zero,1
    addiu t1,t1,4
L34:
    addiu t0,t0,1
L38:
    sltu v0,t0,t2
    bnez v0,Le4
    nop
    b Le0
    nop
L4c:
    beqz a3,Le0
    nop
    lw t3,204(a3)
    beqz t3,Le0
    nop
    lw v0,0(a1)
    andi v0,v0,1
    bnez v0,Le0
    nop
    lw t2,32(a0)
    .word 0x70004628
    b Ld0
    .word 0x70804e28
L80:
    lw v1,12(t1)
    lw v0,4(a3)
    bnel v1,v0,Lcc
    addiu t1,t1,4
    addiu v0,zero,6
    bne a2,v0,La8
    addiu v1,zero,1
    b La8
    addiu v1,zero,4
    addiu v1,zero,1
La8:
    lw v0,24(t3)
    and v0,v0,v1
    beqz v0,Le0
    nop
    lw v0,0(a1)
    ori v0,v0,1
    b Le0
    sw v0,0(a1)
    addiu t1,t1,4
Lcc:
    addiu t0,t0,1
Ld0:
    sltu v0,t0,t2
    bnez v0,L80
    nop
    nop
Le0:
    jal func_001b9c00
    nop
    .word 0x72001628
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
