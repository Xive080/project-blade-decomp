extern void func_00223150(void);
extern void func_00222f80(void);
extern void func_001ffac0(void);
extern void func_001c7320(void);
extern void func_001c7c70(void);
extern void func_001c3b70(void);
extern void func_001c42c0(void);
extern void func_0012b7e0(void);
extern void func_0012b630(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-192
    .word 0x44800000
    .word 0x7fbf0070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x46006506
    c.le.s $f20,$f0
    nop
    bc1t L16d92c
    paddub s0,a0,zero
    .word 0x8e02033c
    .word 0xc4410010
    .word 0xc4400014
    sub.s $f0,$f1,$f0
    c.lt.s $f0,$f20
    nop
    bc1f L16d94c
    nop
    .word 0x3c02bf80
    .word 0x44820000
    b L16dd0c
    .word 0x7bbf0070
L16d92c:
    .word 0x8e02033c
    neg.s $f0,$f20
    .word 0xc4410014
    c.lt.s $f1,$f0
    nop
    bc1f L16d94c
    nop
    neg.s $f20,$f1
L16d94c:
    .word 0x8e03033c
    .word 0x8c640000
    .word 0x8c820008
    beqz v0,L16d970
    nop
    jal func_00223150
    .word 0x4600a306
    b L16d9c0
    .word 0x8e02033c
L16d970:
    .word 0x8c640004
    .word 0x8c820008
    beqz v0,L16d9bc
    nop
    .word 0x8c620008
    .word 0x8c420008
    beqz v0,L16d9bc
    nop
    jal func_00223150
    .word 0x4600a306
    .word 0x8e02033c
    .word 0x8c440008
    jal func_00223150
    .word 0x4600a306
    .word 0x8e02033c
    .word 0x8c450004
    .word 0x8c460008
    jal func_00222f80
    .word 0x8c440000
L16d9bc:
    .word 0x8e02033c
L16d9c0:
    .word 0xc4400014
    add.s $f0,$f0,$f20
    .word 0xe4400014
    .word 0x8e02033c
    jal func_001ffac0
    .word 0x8c440000
    .word 0x70008e28
    b L16daf8
    paddub s4,s0,zero
L16d9e4:
    .word 0x8e92061c
    beqz s2,L16daf0
    .word 0x8e930620
    beqzl s3,L16daf4
    addiu s4,s4,64
    .word 0x3c023f80
    .word 0xafa200a8
    .word 0xafa20094
    .word 0xafa20080
    addiu a3,sp,144
    .word 0xace00000
    .word 0xafa00088
    .word 0xafa00084
    addiu t0,sp,160
    .word 0xafa000a4
    .word 0xad000000
    .word 0xafa00098
    .word 0xafa000b8
    addiu a2,sp,176
    .word 0xafa000b4
    .word 0x3c020002
    addiu a1,sp,140
    .word 0xacc00000
    .word 0x8ca30000
    ori v0,v0,0x3
    addiu a0,sp,128
    or v0,v1,v0
    .word 0xaca20000
    .word 0xc6820648
    .word 0xc681064c
    .word 0xc6800650
    .word 0xe4c20000
    .word 0xe4c10004
    .word 0xe4c00008
    .word 0xc6820630
    .word 0xc6810634
    .word 0xc6800638
    .word 0xe4e20000
    .word 0xe4e10004
    .word 0xe4e00008
    .word 0xc6820624
    .word 0xc6810628
    .word 0xc680062c
    .word 0xe4820000
    .word 0xe4810004
    .word 0xe4800008
    .word 0xc682063c
    .word 0xc6810640
    .word 0xc6800644
    .word 0xe5020000
    .word 0xe5010004
    jal func_001c7320
    .word 0xe5000008
    addiu a0,zero,8
    paddub a1,s2,zero
L16dac0:
    .word 0x8e630000
    .word 0x8e620004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu s3,s3,8
    bgtz a0,L16dac0
    addiu a1,a1,8
    addiu a1,sp,128
    addiu a2,zero,1
    jal func_001c7c70
    paddub a0,s2,zero
L16daf0:
    addiu s4,s4,64
L16daf4:
    addiu s1,s1,1
L16daf8:
    .word 0x8e020610
    slt v0,s1,v0
    bnez v0,L16d9e4
    nop
    .word 0x70008e28
    .word 0x7000a628
    b L16dce8
    .word 0x7000ae28
L16db18:
    .word 0x8c620030
    addu v0,v0,s4
    .word 0x8c52000c
    beqzl s2,L16dcdc
    addiu s4,s4,16
    jal func_001c3b70
    paddub a0,s2,zero
    .word 0x3c037000
    ori v1,v1,0x3fd8
    .word 0x8c630000
    .word 0xc4410030
    .word 0x3c017000
    paddub a0,v0,zero
    .word 0xc4600000
    add.s $f0,$f1,$f0
    .word 0xe4400030
    .word 0x8c233fd8
    .word 0xc4410034
    .word 0xc4600004
    .word 0x3c017000
    add.s $f0,$f1,$f0
    .word 0xe4400034
    .word 0x8c233fd8
    .word 0xc4410038
    .word 0xc4600008
    add.s $f0,$f1,$f0
    jal func_001c7320
    .word 0xe4400038
    addiu a2,s2,16
    addiu a1,s2,80
    addiu a0,zero,8
    nop
L16db98:
    .word 0x8cc30000
    .word 0x8cc20004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu a2,a2,8
    bgtz a0,L16db98
    addiu a1,a1,8
    .word 0x3c020017
    addiu a1,v0,-8912
    paddub a0,s2,zero
    jal func_001c42c0
    .word 0x70003628
    .word 0x8e030340
    .word 0x3c020008
    addu v1,v1,s5
    .word 0x8c730000
    .word 0x8e630000
    bne v1,v0,L16dcc0
    .word 0x3c020010
    .word 0x8e620010
    andi v0,v0,0x1
    bnez v0,L16dcbc
    nop
    .word 0x3c017000
    .word 0x8c243fd8
    paddub a1,s3,zero
    jal func_0012b7e0
    .word 0x70003628
    .word 0x8e6200b0
    beqz v0,L16dcd8
    nop
    .word 0x8c420014
    beqz v0,L16dcd8
    nop
    .word 0x8c520004
    jal func_001c3b70
    paddub a0,s2,zero
    .word 0x8e630030
    .word 0x8c640004
    jal func_001c3b70
    paddub s3,v0,zero
    addiu a1,zero,8
    paddub a2,s3,zero
L16dc48:
    .word 0x8c440000
    .word 0x8c430004
    addiu a1,a1,-1
    .word 0xacc40000
    .word 0xacc30004
    addiu v0,v0,8
    bgtz a1,L16dc48
    addiu a2,a2,8
    jal func_001c7320
    paddub a0,s3,zero
    addiu a2,s2,16
    addiu a1,s2,80
    addiu a0,zero,8
    nop
L16dc80:
    .word 0x8cc30000
    .word 0x8cc20004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu a2,a2,8
    bgtz a0,L16dc80
    addiu a1,a1,8
    .word 0x3c020017
    addiu a1,v0,-8912
    paddub a0,s2,zero
    jal func_001c42c0
    .word 0x70003628
    b L16dcd8
    nop
L16dcbc:
    .word 0x3c020010
L16dcc0:
    bne v1,v0,L16dcd8
    nop
    .word 0x3c017000
    .word 0x8c243fd8
    jal func_0012b630
    paddub a1,s3,zero
L16dcd8:
    addiu s4,s4,16
L16dcdc:
    addiu s5,s5,4
    addiu s1,s1,1
    nop
L16dce8:
    .word 0x8e04033c
    .word 0x8c830000
    .word 0x8c620004
    slt v0,s1,v0
    bnez v0,L16db18
    nop
    .word 0xc4800014
    nop
    .word 0x7bbf0070
L16dd0c:
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,192
}


