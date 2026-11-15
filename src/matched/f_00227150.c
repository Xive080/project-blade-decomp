extern void func_001332a0(void);
extern void func_00133120(void);
extern void func_001b4b20(void);
extern void func_00242b20(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c020033
    addiu v1,v0,10944
    .word 0x78660000
    .word 0x78650010
    .word 0x3c020033
    addiu a3,v0,2688
    .word 0xdc640020
    .word 0x3c020022
    .word 0x3c010033
    addiu v1,v0,29840
    .word 0x7ce60000
    .word 0x7ce50010
    .word 0xfce40020
    .word 0x3c020022
    sw v1,2688(at)
    addiu v0,v0,29584
    .word 0x3c010033
    sw v0,2696(at)
    .word 0x3c020023
    addiu v0,v0,17552
    .word 0x3c010033
    sw v0,2724(at)
    .word 0x3c020022
    addiu v0,v0,29440
    .word 0x3c010033
    sw v0,2720(at)
    .word 0x3c020022
    addiu v0,v0,29184
    .word 0x3c010033
    sw v0,2692(at)
    .word 0x3c020033
    addiu v0,v0,2688
    .word 0x3c010033
    sw v0,2736(at)
    addiu v0,zero,5
    .word 0x3c010033
    sw v0,2740(at)
    .word 0x3c020033
    addiu a1,v0,2736
    j func_001332a0
    addiu a0,zero,7
    nop
    nop
    nop
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,4
    .word 0x70a08e28
    .word 0x70c08628
    beq s1,v0, L22726c
    .word 0x70809628
    addiu v0,zero,3
    beq s1,v0, L22723c
    nop
    b L2272d8
    .word 0x72402628
L22723c:
    lw v1,12(s2)
    addiu v0,zero,1
    beq v1,v0, L227254
    nop
    b L2272d4
    nop
L227254:
    lw v0,0(s2)
    lw v0,24(v0)
    jalr ra,v0
    addiu a1,zero,2
    b L2272e8
    .word 0x7bbf0030
L22726c:
    .word 0x3c010030
    .word 0xc42170d0
    .word 0x3c010030
    .word 0xc4207680
    c.eq.s $f1,$f0
    nop
    bc1t L2272cc
    addiu a0,zero,7
    c.le.s $f1,$f0
    nop
    bc1t L2272b4
    nop
    jal func_001b4b20
    nop
    lw v1,0(v0)
    addiu v1,v1,1
    b L2272c8
    sw v1,0(v0)
L2272b4:
    jal func_001b4b20
    nop
    lw v1,4(v0)
    addiu v1,v1,1
    sw v1,4(v0)
L2272c8:
    addiu a0,zero,7
L2272cc:
    jal func_00133120
    nop
L2272d4:
    .word 0x72402628
L2272d8:
    .word 0x72202e28
    jal func_00242b20
    .word 0x72003628
    .word 0x7bbf0030
L2272e8:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
