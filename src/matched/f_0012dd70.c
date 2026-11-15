extern void func_0012e7d0(void);
extern void func_00142a90(void);
extern void func_00142aa0(void);
extern void func_00142ad0(void);
extern void func_001c35a0(void);
extern void func_001f7d50(void);
extern void func_001f7d70(void);
extern void func_001feb10(void);
extern void func_001fee10(void);
extern void func_001feee0(void);
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
    .word 0x70809e28
    .word 0x70a09628
    .word 0x70c08e28
    beqz s3, L12ddac
    .word 0x70e08628
    bnez s2, L12ddb4
    nop
L12ddac:
    b L12dfcc
    .word 0x70001628
L12ddb4:
    beqz s0, L12ddc4
    .word 0x72402628
    .word 0xae000000
    .word 0x72402628
L12ddc4:
    jal func_00142ad0
    nop
    .word 0x7040a628
    beqz s4, L12dfcc
    addiu v0,zero,1
L12ddd8:
    jal func_001f7d70
    .word 0x72802628
    .word 0x7040ae28
    beqz s5, L12df9c
    .word 0x2a212710
    .word 0x8e620360
    bnez v0, L12dee8
    nop
    .word 0x8ea40000
    addiu a3,zero,16384
    addiu t0,zero,36
    .word 0x70002e28
    jal func_001feb10
    .word 0x70003628
    .word 0xae620360
    jal func_00142a90
    .word 0x72402628
    .word 0x8e650360
    jal func_001fee10
    .word 0x70402628
    .word 0x70001628
    .word 0x70001e28
    b L12ded8
    .word 0x70002628
L12de38:
    .word 0x8ea60004
    .word 0x8e650360
    .word 0x00c33021
    .word 0x8ca50030
    .word 0x8cc60040
    .word 0x00a42821
    .word 0xaca60000
    .word 0x8e650360
    .word 0x8ca50030
    .word 0x00a42821
    .word 0xaca00008
    .word 0x8ea50004
    .word 0x00a32821
    .word 0x8ca50048
    .word 0x30a50001
    beqz a1, L12de98
    nop
    .word 0x8e650360
    .word 0x8ca50030
    .word 0x00a43021
    .word 0x8cc50008
    .word 0x34a50001
    .word 0xacc50008
    nop
L12de98:
    .word 0x8ea50004
    .word 0x00a32821
    .word 0x8ca50048
    .word 0x30a50002
    beqzl a1, L12decc
    .word 0x24630050
    .word 0x8e650360
    .word 0x8ca50030
    .word 0x00a43021
    .word 0x8cc50008
    .word 0x34a50002
    .word 0xacc50008
    .word 0x24630050
L12decc:
    .word 0x24840010
    .word 0x24420001
    nop
L12ded8:
    .word 0x8ea50000
    .word 0x0045282a
    bnez a1, L12de38
    nop
L12dee8:
    .word 0x8e620360
    addiu v1,zero,16384
    .word 0xac430000
    .word 0x8e640360
    jal func_001feee0
    addiu a1,zero,1
    jal func_001c35a0
    nop
    .word 0xae62045c
    .word 0x8e620360
    .word 0x8e63045c
    .word 0x8c420030
    .word 0xac43000c
    .word 0x8e630360
    .word 0x8c620000
    .word 0x34427000
    .word 0xac620000
    .word 0x8e620364
    bnez v0, L12df58
    nop
    .word 0x8ea40000
    addiu t0,zero,24
    .word 0x70002e28
    .word 0x70003628
    jal func_001feb10
    .word 0x70003e28
    .word 0xae620364
    nop
L12df58:
    .word 0x8e620368
    bnez v0, L12df80
    nop
    .word 0x8ea40000
    addiu t0,zero,20
    .word 0x70002e28
    .word 0x70003628
    jal func_001feb10
    .word 0x70003e28
    .word 0xae620368
L12df80:
    .word 0x8e650360
    jal func_001f7d50
    .word 0x72a02628
    addiu v0,zero,1
    b L12dfb0
    .word 0xae020000
    .word 0x2a212710
L12df9c:
    beqz at, L12dfb4
    .word 0x72802e28
    jal func_0012e7d0
    .word 0x72802628
    nop
L12dfb0:
    .word 0x72802e28
L12dfb4:
    jal func_00142aa0
    .word 0x72402628
    .word 0x7040a628
    bnez s4, L12ddd8
    nop
    addiu v0,zero,1
L12dfcc:
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


