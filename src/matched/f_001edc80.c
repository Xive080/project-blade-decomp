extern void func_0011eac8(void);
extern void func_001ed920(void);
extern void func_001edba0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff90
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8cb30014
    .word 0x90820023
    .word 0x70a08628
    .word 0x8c920004
    addiu a2,zero,32
    .word 0x70808e28
    .word 0x8ca50018
    .word 0x30430060
    beq v1,a2, L1eddec
    addiu s4,zero,1
    addiu v0,zero,64
    beq v1,v0, L1edcdc
    nop
    b L1edec0
    .word 0x7000a628
L1edcdc:
    .word 0x8e03000c
    beql v1,a2, L1eddd4
    .word 0x72202628
    addiu v0,zero,8
    beq v1,v0, L1eddd0
    addiu v0,zero,4
    beq v1,v0, L1edd04
    nop
    b L1edde4
    .word 0x7000a628
L1edd04:
    jal func_001ed920
    nop
    b L1eddb8
    .word 0x70001e28
L1edd14:
    .word 0x72602e28
    b L1edd90
    .word 0x70001628
L1edd20:
    .word 0x8626001c
    .word 0x00463021
    .word 0x30c60001
    beqz a2, L1edd64
    nop
    .word 0x90860000
    .word 0x30c6000f
    .word 0xa0860000
    .word 0x80a70000
    .word 0x90860000
    .word 0x30e7000f
    .word 0x00073900
    .word 0x30e700ff
    .word 0x00c73025
    .word 0xa0860000
    b L1edd88
    .word 0x24840001
L1edd64:
    .word 0x90860000
    .word 0x30c600f0
    .word 0xa0860000
    .word 0x80a70000
    .word 0x90860000
    .word 0x30e7000f
    .word 0x00c73025
    .word 0xa0860000
    nop
L1edd88:
    .word 0x24a50001
    .word 0x24420001
L1edd90:
    .word 0x8e060004
    .word 0x0046302a
    bnez a2, L1edd20
    nop
    .word 0x8e040010
    .word 0x8e220018
    .word 0x24630001
    .word 0x02649821
    .word 0x02429021
    nop
L1eddb8:
    .word 0x8e020008
    .word 0x0062102a
    bnez v0, L1edd14
    .word 0x72402628
    b L1edec4
    .word 0x72801628
L1eddd0:
    .word 0x72202628
L1eddd4:
    jal func_001edba0
    .word 0x72002e28
    b L1edec0
    .word 0x7040a628
L1edde4:
    b L1edec0
    nop
L1eddec:
    .word 0x8e03000c
    beql v1,a2, L1edeb0
    .word 0x72002e28
    addiu v0,zero,8
    beq v1,v0, L1ede60
    addiu v0,zero,4
    beq v1,v0, L1ede14
    nop
    b L1edec0
    .word 0x7000a628
L1ede14:
    jal func_001ed920
    nop
    b L1ede48
    .word 0x7000ae28
L1ede24:
    .word 0x8e060004
    .word 0x72402628
    jal func_0011eac8
    .word 0x72602e28
    .word 0x8e030010
    .word 0x8e220018
    .word 0x26b50001
    .word 0x02639821
    .word 0x02429021
L1ede48:
    .word 0x8e020008
    .word 0x02a2102a
    bnez v0, L1ede24
    nop
    b L1edec0
    nop
L1ede60:
    jal func_001ed920
    nop
    b L1ede98
    .word 0x7000ae28
L1ede70:
    .word 0x8e060004
    .word 0x72402628
    jal func_0011eac8
    .word 0x72602e28
    .word 0x8e030010
    .word 0x8e220018
    .word 0x26b50001
    .word 0x02639821
    .word 0x02429021
    nop
L1ede98:
    .word 0x8e020008
    .word 0x02a2102a
    bnez v0, L1ede70
    nop
    b L1edec0
    nop
L1edeb0:
    jal func_001edba0
    nop
    b L1edec0
    .word 0x7040a628
L1edec0:
    .word 0x72801628
L1edec4:
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0070
}
