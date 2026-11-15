extern void func_001dcb40(void);
extern void func_001dcd40(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c01002e
    .word 0x8f83877c
    lw v0,20452(at)
    .word 0x70809628
    .word 0x70a08e28
    beq s2,v0, L1f3d68
    addu s0,a0,v1
    lbu v0,32(s2)
    andi v0,v0,0x80
    bnez v0, L1f3d68
    nop
    lw v0,88(s0)
    bnez v0, L1f3d68
    .word 0x3c01002e
    lw v0,20448(at)
    jalr ra,v0
    .word 0x70002e28
L1f3d68:
    lw v0,88(s0)
    beqz v0, L1f3dd0
    nop
    lw a0,8(s0)
    lw a1,4(v0)
    addiu v1,zero,-16384
    and v1,a0,v1
    sw v1,8(s0)
    lw v1,8(s0)
    srl a1,a1,0x6
    andi a0,a1,0x3fff
    .word 0x3c02fff8
    ori v0,v0,0x1f
    or v1,v1,a0
    sw v1,8(s0)
    lw a0,16(s0)
    lw v1,12(s0)
    addu a1,a1,a0
    and v0,v1,v0
    sw v0,12(s0)
    andi a1,a1,0x3fff
    andi v0,a1,0x3fff
    sll v1,v0,0x5
    lw v0,12(s0)
    or v0,v0,v1
    sw v0,12(s0)
L1f3dd0:
    lbu v1,32(s2)
    addiu v0,zero,2
    andi v1,v1,0x7
    beq v1,v0, L1f3df8
    .word 0x3c01002e
    lw v0,88(s0)
    bnez v0, L1f3df8
    .word 0x70001628
    b L1f4194
    .word 0x7bbf0030
L1f3df8:
    lw v0,20452(at)
    bne v0,s2, L1f3e14
    nop
    .word 0x3c01002e
    lw v0,20456(at)
    beq v0,s1, L1f4190
    addiu v0,zero,1
L1f3e14:
    .word 0x3c01002e
    sw s2,20452(at)
    .word 0x3c01002e
    sw s1,20456(at)
    lw a0,88(s0)
    beqz a0, L1f3ea0
    nop
    bnez s1, L1f3e70
    .word 0x3c01002e
    .word 0x3c01002e
    lw v1,20436(at)
    .word 0x3c022aaa
    ori v0,v0,0xaaab
    subu v1,a0,v1
    .word 0x00430018
    .word 0x3c01002e
    nop
    mfhi v0
    srl v1,v1,0x1f
    sra v0,v0,0x1
    addu v0,v0,v1
    b L1f3ea0
    sw v0,20460(at)
L1f3e70:
    lw v1,20436(at)
    .word 0x3c022aaa
    ori v0,v0,0xaaab
    subu v1,a0,v1
    .word 0x00430018
    .word 0x3c01002e
    nop
    mfhi v0
    srl v1,v1,0x1f
    sra v0,v0,0x1
    addu v0,v0,v1
    sw v0,20464(at)
L1f3ea0:
    lbu v0,23(s0)
    bnez v0, L1f3ec4
    addiu a0,zero,1
    .word 0x8f8287f0
    bnez v0, L1f3ec0
    nop
    jal func_001dcb40
    nop
L1f3ec0:
    addiu a0,zero,1
L1f3ec4:
    jal func_001dcd40
    .word 0x70002e28
    .word 0x8f8287f0
    beqz v0, L1f3edc
    addiu v1,zero,4
    addiu v1,zero,5
L1f3edc:
    .word 0x3c021000
    dsll32 v0,v0,0x0
    ori v0,v0,0x8000
    or a1,v1,v0
    addiu v0,zero,14
    pcpyld a1,v0,a1
    .word 0x8f828690
    .word 0x7c450000
    .word 0x8f838690
    .word 0x8f8287f0
    addiu v1,v1,16
    beqz v0, L1f3f30
    .word 0xaf838690
    addiu v0,zero,63
    .word 0x70001e28
    pcpyld a1,v0,v1
    .word 0x8f828690
    .word 0x7c450000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
L1f3f30:
    lbu v1,32(s2)
    lwu a0,12(s0)
    lwu a1,8(s0)
    addiu v0,zero,2
    andi v1,v1,0x7
    dsll32 a0,a0,0x0
    bne v1,v0, L1f3fac
    or a1,a1,a0
    .word 0x8f828748
    andi v0,v0,0x1
    beqz v0, L1f3f70
    .word 0x3c020033
    .word 0x3c020033
    addiu v0,v0,-4480
    b L1f3f7c
    .word 0xdc420000
L1f3f70:
    addiu v0,v0,-4848
    .word 0xdc420000
    nop
L1f3f7c:
    andi v0,v0,0x1ff
    lw a0,8(s0)
    dsll v1,v0,0x5
    addiu v0,zero,-1
    dsll v0,v0,0x10
    ori v0,v0,0xffff
    dsll v0,v0,0x10
    ori v0,v0,0xc000
    andi a0,a0,0x3fff
    daddu v1,a0,v1
    and v0,a1,v0
    or a1,v0,v1
L1f3fac:
    beqz s1, L1f3fb8
    addiu v0,zero,6
    addiu v0,zero,7
L1f3fb8:
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    pcpyld a1,v0,a1
    .word 0x8f838690
    addiu v0,zero,-4096
    dsll v0,v0,0x10
    ori v0,v0,0xffe7
    dsll v0,v0,0x10
    ori v0,v0,0xfde3
    .word 0x7c650000
    .word 0x8f848690
    .word 0xdf838730
    addiu a0,a0,16
    and a1,v1,v0
    .word 0xaf848690
    .word 0xff858730
    lhu a0,20(s0)
    lbu v0,22(s0)
    andi v1,a0,0xfff
    dsll32 v1,v1,0x0
    dsra32 v1,v1,0x0
    dsll32 v0,v0,0x0
    dsll32 v1,v1,0x0
    dsra32 v0,v0,0x0
    or v1,v0,v1
    sra v0,a0,0xc
    andi v0,v0,0x3
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    dsll v0,v0,0x13
    or v0,v0,v1
    or v0,a1,v0
    beqz s1, L1f4048
    .word 0xff828730
    b L1f4050
    addiu v1,zero,21
L1f4048:
    addiu v1,zero,20
    nop
L1f4050:
    .word 0xdf828730
    pcpyld a1,v1,v0
    .word 0x8f828690
    .word 0x3c01002e
    .word 0x7c450000
    .word 0x8f838690
    lw v0,20416(at)
    addiu v1,v1,16
    .word 0xaf838690
    lw v1,8(s0)
    andi a1,v1,0x3fff
    dsll v1,a1,0x14
    dsll32 a0,a1,0x8
    or v1,a1,v1
    beqz v0, L1f4114
    or a0,a0,v1
    lwu v0,28(s0)
    lwu v1,24(s0)
    dsll32 v0,v0,0x0
    or a1,v1,v0
    beqz s1, L1f40b0
    daddu a1,a1,a0
    b L1f40b8
    addiu v0,zero,53
L1f40b0:
    addiu v0,zero,52
    nop
L1f40b8:
    pcpyld a1,v0,a1
    .word 0x8f828690
    .word 0x7c450000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    lwu v0,36(s0)
    lwu v1,32(s0)
    dsll32 v0,v0,0x0
    or a1,v1,v0
    beqz s1, L1f40f0
    daddu a1,a1,a0
    b L1f40f8
    addiu v0,zero,55
L1f40f0:
    addiu v0,zero,54
    nop
L1f40f8:
    pcpyld a1,v0,a1
    .word 0x8f828690
    .word 0x7c450000
    .word 0x8f828690
    addiu v0,v0,16
    b L1f4188
    .word 0xaf828690
L1f4114:
    lwu v0,28(s0)
    lwu v1,24(s0)
    dsll32 v0,v0,0x0
    beqz s1, L1f4130
    or a1,v1,v0
    b L1f4138
    addiu v0,zero,53
L1f4130:
    addiu v0,zero,52
    nop
L1f4138:
    pcpyld a1,v0,a1
    .word 0x8f828690
    .word 0x7c450000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    lwu v0,36(s0)
    lwu v1,32(s0)
    dsll32 v0,v0,0x0
    beqz s1, L1f416c
    or a1,v1,v0
    b L1f4170
    addiu v0,zero,55
L1f416c:
    addiu v0,zero,54
L1f4170:
    pcpyld a1,v0,a1
    .word 0x8f828690
    .word 0x7c450000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
L1f4188:
    .word 0xaf8087f0
    addiu v0,zero,1
L1f4190:
    .word 0x7bbf0030
L1f4194:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
