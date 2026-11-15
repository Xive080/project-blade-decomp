extern void func_0016fdd0(void);
extern void func_00170700(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff30
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f8383bc
    beqz v1, L17077c
    .word 0x70808628
    addiu v1,zero,3
    bne s0,v1, L170770
    addiu v1,zero,4
    addiu a0,zero,4
    addiu a1,zero,9
    jal func_0016fdd0
    .word 0x70003628
    bnez v0, L17076c
    nop
    jal func_00170700
    addiu a0,zero,4
    b L170780
    addiu v1,zero,2
L17076c:
    addiu v1,zero,4
L170770:
    bne s0,v1, L17077c
    nop
    .word 0xaf8083bc
L17077c:
    addiu v1,zero,2
L170780:
    bne s0,v1, L1707c0
    .word 0x00101880
    .word 0x3c010030
    .word 0x8c23a570
    .word 0x30630001
    beqz v1, L1707bc
    nop
    addiu a0,zero,4
    addiu a1,zero,16
    jal func_0016fdd0
    .word 0x70003628
    beqz v0, L1707bc
    nop
    jal func_00170700
    addiu a0,zero,4
L1707bc:
    .word 0x00101880
L1707c0:
    .word 0x00701821
    .word 0x00031880
    .word 0xafa300c0
    .word 0x3c030030
    .word 0x24646218
    .word 0x8fa300c0
    .word 0x3c010030
    .word 0x8c256070
    addiu s1,zero,31
    .word 0x00831821
    .word 0x8c660000
    .word 0x3c030030
    .word 0x2464621c
    .word 0x8fa300c0
    .word 0x00a6b821
    .word 0x00831821
    .word 0x8c640000
    .word 0x3c030030
    .word 0x246361e4
    .word 0xafa300a0
    .word 0x3c030030
    .word 0x246360ec
    .word 0xafa300b0
    .word 0x3c030030
    .word 0x02e4f021
    .word 0x247560ae
L170828:
    .word 0x8fa300a0
    .word 0x8c730028
    .word 0x8fa300b0
    .word 0x8c74020c
    b L1708d0
    .word 0x70009628
    addiu v1,zero,10
L170844:
    bne s1,v1, L170870
    .word 0x8e960000
    addiu v1,zero,3
    bne s0,v1, L170874
    addiu v1,zero,15
    beqz s6, L170870
    nop
    .word 0xae800000
    .word 0x8e620004
    jalr ra,v0
    .word 0x72c02628
L170870:
    addiu v1,zero,15
L170874:
    bne s1,v1, L17089c
    .word 0x02d7182b
    addiu v1,zero,3
    bne s0,v1, L170898
    nop
    beqz s6, L170898
    nop
    .word 0xae800000
    nop
L170898:
    .word 0x02d7182b
L17089c:
    bnezl v1, L1708cc
    .word 0x26940004
    .word 0x02de082b
    beqz at, L1708c8
    nop
    beqz s3, L1708c8
    .word 0xae800000
    .word 0x8e620004
    jalr ra,v0
    .word 0x72c02628
    nop
L1708c8:
    .word 0x26940004
L1708cc:
    .word 0x26520001
L1708d0:
    .word 0x96a3028c
    .word 0x0243182a
    bnez v1, L170844
    addiu v1,zero,10
    .word 0x8fa300a0
    .word 0x2631ffff
    .word 0x26b5fffe
    .word 0x2463fff4
    .word 0xafa300a0
    .word 0x8fa300b0
    .word 0x2463fffc
    bgez s1, L170828
    .word 0xafa300b0
    .word 0x3c030030
    .word 0x24646228
    .word 0x8fa300c0
    .word 0x00831821
    .word 0xac600000
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd00d0
}
