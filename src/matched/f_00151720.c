extern void func_00142a90(void);
extern void func_00156c00(void);
extern void func_001ff7d0(void);
extern void func_001ff930(void);
extern void func_001ff9e0(void);
extern void func_001ffa80(void);
extern void func_00223150(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x70808628
    jal func_00142a90
    lw a0,1028(a0)
    lw v0,1308(s0)
    bnez v0, L151770
    nop
    .word 0xc6010520
    .word 0x3c023b72
    ori v0,v0,0xb9d7
    .word 0x44821000
    .word 0x3c023faa
    mul.s $f1,$f2,$f1
    ori v0,v0,0xaaab
    .word 0x44820000
    b L151798
    sub.s $f20,$f0,$f1
L151770:
    .word 0xc6010520
    .word 0x3c023b72
    ori v0,v0,0xb9d7
    .word 0x44821000
    .word 0x3c023faa
    mul.s $f1,$f2,$f1
    ori v0,v0,0xaaab
    .word 0x44820000
    nop
    add.s $f20,$f0,$f1
L151798:
    lw a0,1172(s0)
    jal func_001ff7d0
    mov.s $f12,$f20
    lw a0,1176(s0)
    jal func_001ff7d0
    mov.s $f12,$f20
    b L151830
    .word 0x70004628
L1517b8:
    lw v0,60(a2)
    lw v1,1176(s0)
    addiu a3,a2,88
    lw t1,1172(s0)
    mult a2,t0,v0
    lw a0,60(v1)
    addiu a1,v1,88
    lw v0,60(t1)
    addu a2,a3,a2
    mult1 a0,t0,a0
    addiu v1,t1,88
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    addiu t0,t0,1
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L151830:
    lw a2,1168(s0)
    lw v0,4(a2)
    slt v0,t0,v0
    bnez v0, L1517b8
    nop
    lw a1,1136(s0)
    .word 0xc60c0524
    jal func_001ff930
    lw a0,1120(s0)
    lw v1,1344(s0)
    addiu a3,zero,2
    bne v1,a3, L151984
    addiu v0,zero,3
    .word 0xc601052c
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1tl L15188c
    neg.s $f1,$f1
    b L151890
    .word 0x3c023faa
    neg.s $f1,$f1
L15188c:
    .word 0x3c023faa
L151890:
    ori v0,v0,0xaaab
    .word 0x44821800
    lw a0,1188(s0)
    .word 0x3c023f00
    .word 0x44820000
    nop
    mul.s $f2,$f0,$f1
    .word 0x3c023f80
    .word 0x44820800
    .word 0xc6000528
    sub.s $f1,$f1,$f2
    mul.s $f0,$f0,$f1
    mul.s $f0,$f3,$f0
    add.s $f20,$f3,$f0
    jal func_001ff7d0
    mov.s $f12,$f20
    lw a0,1192(s0)
    jal func_001ff7d0
    mov.s $f12,$f20
    b L151958
    .word 0x70004628
L1518e4:
    lw v0,60(a2)
    lw v1,1192(s0)
    addiu a3,a2,88
    lw t1,1188(s0)
    mult a2,t0,v0
    lw a0,60(v1)
    addiu a1,v1,88
    lw v0,60(t1)
    addu a2,a3,a2
    mult1 a0,t0,a0
    addiu v1,t1,88
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    addiu t0,t0,1
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L151958:
    lw a2,1184(s0)
    lw v0,4(a2)
    slt v0,t0,v0
    bnez v0, L1518e4
    nop
    lw a1,1120(s0)
    jal func_001ff9e0
    lw a0,1104(s0)
    b L151d74
    .word 0x7bbf0020
    addiu v0,zero,3
L151984:
    bne v1,v0, L151a5c
    addiu a2,zero,4
    .word 0x3c027000
    ori v0,v0,0x3fa8
    lw a0,1156(s0)
    jal func_001ff7d0
    .word 0xc44c0000
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_001ff7d0
    lw a0,1160(s0)
    b L151a30
    .word 0x70004628
L1519b8:
    lw v0,60(a2)
    lw v1,1160(s0)
    addiu a3,a2,88
    lw t1,1156(s0)
    mult a2,t0,v0
    lw a0,60(v1)
    addiu a1,v1,88
    lw v0,60(t1)
    addu a2,a3,a2
    mult1 a0,t0,a0
    addiu v1,t1,88
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    addiu t0,t0,1
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L151a30:
    lw a2,1152(s0)
    lw v0,4(a2)
    slt v0,t0,v0
    bnez v0, L1519b8
    nop
    lw a1,1120(s0)
    jal func_001ff9e0
    lw a0,1104(s0)
    b L151d70
    nop
    addiu a2,zero,4
L151a5c:
    bne v1,a2, L151bac
    addiu a1,zero,5
    lw v1,1220(s0)
    .word 0x3c023f2a
    ori v0,v0,0xaaab
    .word 0x44820000
    .word 0xc461000c
    c.le.s $f1,$f0
    nop
    bc1t L151a9c
    .word 0x3c027000
    lw v1,16(s0)
    .word 0x3c020020
    or v0,v1,v0
    sw v0,16(s0)
    .word 0x3c027000
L151a9c:
    ori v0,v0,0x3fa8
    lw a0,1220(s0)
    .word 0xc44c0000
    .word 0xc480000c
    lw v0,8(a0)
    .word 0xc441000c
    sub.s $f0,$f1,$f0
    c.le.s $f0,$f12
    nop
    bc1t L151b7c
    nop
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    lw a0,1224(s0)
    b L151b60
    .word 0x70004628
L151ae8:
    lw v0,60(v1)
    addiu a3,v1,88
    lw t1,1220(s0)
    lw v1,1224(s0)
    mult a2,t0,v0
    lw v0,60(t1)
    lw a0,60(v1)
    addiu a1,v1,88
    addu a2,a3,a2
    .word 0x01021018
    addiu v1,t1,88
    mult1 a0,t0,a0
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    addiu t0,t0,1
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L151b60:
    lw v1,1216(s0)
    lw v0,4(v1)
    slt v0,t0,v0
    bnez v0, L151ae8
    nop
    b L151b94
    lw a0,1104(s0)
L151b7c:
    lw v1,16(s0)
    .word 0x3c02ffef
    ori v0,v0,0xffff
    and v0,v1,v0
    sw v0,16(s0)
    lw a0,1104(s0)
L151b94:
    lw a2,1216(s0)
    jal func_001ff9e0
    lw a1,1120(s0)
    b L151d70
    nop
    addiu a1,zero,5
L151bac:
    bne v1,a1, L151d64
    nop
    lw a0,1220(s0)
    .word 0x3c027000
    ori v0,v0,0x3fa8
    .word 0xc4410000
    .word 0xc480000c
    c.le.s $f0,$f1
    nop
    bc1t L151c8c
    nop
    jal func_00223150
    neg.s $f12,$f1
    .word 0x3c017000
    .word 0xc4203fa8
    lw a0,1224(s0)
    jal func_00223150
    neg.s $f12,$f0
    b L151c70
    .word 0x70004628
L151bfc:
    lw v0,60(v1)
    addiu a3,v1,88
    lw t1,1220(s0)
    lw v1,1224(s0)
    mult a2,t0,v0
    lw v0,60(t1)
    lw a0,60(v1)
    addiu a1,v1,88
    addu a2,a3,a2
    .word 0x01021018
    addiu v1,t1,88
    mult1 a0,t0,a0
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    addiu t0,t0,1
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L151c70:
    lw v1,1216(s0)
    lw v0,4(v1)
    slt v0,t0,v0
    bnez v0, L151bfc
    nop
    b L151d50
    lw a0,1104(s0)
L151c8c:
    beq v1,a3, L151d4c
    nop
    lw a0,8(s0)
    .word 0x3c020030
    addiu v0,v0,13520
    sll v1,a0,0x5
    addu a0,v1,a0
    sll v1,a0,0x3
    addu v1,a0,v1
    sll v1,v1,0x2
    addu v0,v0,v1
    sw v0,-32720(gp)
    sw a3,1344(s0)
    lw v0,1344(s0)
    beq v0,a1, L151d24
    nop
    beq v0,a2, L151cdc
    nop
    b L151d28
    lw a0,16(s0)
L151cdc:
    .word 0x44806000
    jal func_001ff7d0
    lw a0,1220(s0)
    .word 0x44806000
    jal func_001ff7d0
    lw a0,1224(s0)
    jal func_00156c00
    addiu a0,s0,1216
    lw a0,16(s0)
    .word 0x3c030010
    .word 0x3c02ffdf
    ori v0,v0,0xffff
    or v1,a0,v1
    sw v1,16(s0)
    lw v1,16(s0)
    and v0,v1,v0
    b L151d4c
    sw v0,16(s0)
L151d24:
    lw a0,16(s0)
L151d28:
    .word 0x3c02ffef
    ori v1,v0,0xffff
    .word 0x3c02ffdf
    ori v0,v0,0xffff
    and v1,a0,v1
    sw v1,16(s0)
    lw v1,16(s0)
    and v0,v1,v0
    sw v0,16(s0)
L151d4c:
    lw a0,1104(s0)
L151d50:
    lw a2,1216(s0)
    jal func_001ff9e0
    lw a1,1120(s0)
    b L151d70
    nop
L151d64:
    lw a1,1120(s0)
    jal func_001ffa80
    lw a0,1104(s0)
L151d70:
    .word 0x7bbf0020
L151d74:
    .word 0x7bb00010
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
