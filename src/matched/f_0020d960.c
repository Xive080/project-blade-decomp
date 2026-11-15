extern void func_001d8240(void);
extern void func_001d5d50(void);
extern void func_001d5ee0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c020033
    addiu s0,v0,-6624
    .word 0x8e030000
    paddub s1,a0,zero
    addiu v0,zero,3
    addiu a0,v1,20
    .word 0x8c630014
    bne v1,v0,L20d9b4
    .word 0x70009e28
    addiu v0,zero,2
    .word 0xac820000
    .word 0x8e020000
    .word 0x8c530018
    nop
L20d9b4:
    .word 0x8e630008
    addiu v0,zero,-1
    .word 0x8c630000
    bne v1,v0,L20d9d0
    sll v0,v1,0x3
    b L20da00
    .word 0x70001628
L20d9d0:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s3
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e620008
    .word 0x8c430000
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s3,v0
    addiu v0,v0,20
L20da00:
    .word 0x8c520008
    .word 0x8e4200b8
    bnez v0,L20dd48
    nop
    .word 0x8e630008
    addiu v0,zero,-1
    .word 0x8c630004
    bne v1,v0,L20da2c
    sll v0,v1,0x3
    b L20da5c
    .word 0x7000a628
L20da2c:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s3
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e620008
    .word 0x8c430004
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s3,v0
    addiu s4,v0,20
L20da5c:
    paddub a0,s3,zero
    addiu a1,zero,2
    jal func_001d8240
    paddub a2,s1,zero
    .word 0x8e640008
    addiu v1,zero,-1
    .word 0x8c84000c
    bne a0,v1,L20da88
    sll v1,a0,0x3
    b L20dab8
    .word 0x70003e28
L20da88:
    subu v1,v1,a0
    sll v1,v1,0x2
    addu a0,v1,s3
    .word 0x8c830018
    .word 0xac83001c
    .word 0x8e630008
    .word 0x8c64000c
    sll v1,a0,0x3
    subu v1,v1,a0
    sll v1,v1,0x2
    addu v1,s3,v1
    addiu a3,v1,20
L20dab8:
    .word 0x96830002
    .word 0x8e840008
    beqz a3,L20dc30
    .word 0x8c450008
    .word 0x8ce60010
    beqz a2,L20dc30
    nop
    .word 0x8ce70004
    paddub v0,a2,zero
    addiu a2,a2,-1
    .word 0x90ea0000
    mult t1,t2,v1
    sll t0,t2,0x2
    addu t0,t0,t2
    sll t0,t0,0x3
    addu a0,a0,t1
    addu a1,a1,t0
    beqz v0,L20dd48
    addiu a3,a3,1
    addiu v0,sp,104
L20db08:
    .word 0x908b000c
    .word 0x908a000d
    .word 0x9089000e
    .word 0x9088000f
    .word 0xa04b0000
    .word 0xa04a0001
    .word 0xa0490002
    .word 0xa0480003
    .word 0x93a80068
    bltz t0,L20db40
    srl t1,t0,0x1
    .word 0x44880000
    b L20db58
    cvt.s.w $f0,$f0
L20db40:
    andi t0,t0,0x1
    or t1,t1,t0
    .word 0x44890000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20db58:
    .word 0xe4a00010
    .word 0x93a80069
    bltz t0,L20db74
    srl t1,t0,0x1
    .word 0x44880000
    b L20db8c
    cvt.s.w $f0,$f0
L20db74:
    andi t0,t0,0x1
    or t1,t1,t0
    .word 0x44890000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20db8c:
    .word 0xe4a00014
    .word 0x93a8006a
    bltz t0,L20dba8
    srl t1,t0,0x1
    .word 0x44880000
    b L20dbc0
    cvt.s.w $f0,$f0
L20dba8:
    andi t0,t0,0x1
    or t1,t1,t0
    .word 0x44890000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20dbc0:
    .word 0xe4a00018
    .word 0x93a8006b
    bltz t0,L20dbdc
    srl t1,t0,0x1
    .word 0x44880000
    b L20dbf4
    cvt.s.w $f0,$f0
L20dbdc:
    andi t0,t0,0x1
    or t1,t1,t0
    .word 0x44890000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20dbf4:
    .word 0xe4a0001c
    .word 0x90e80000
    addiu a3,a3,1
L20dc00:
    addiu t0,t0,-1
    addu a0,a0,v1
    addiu a1,a1,40
    nop
    nop
    bnez t0,L20dc00
    nop
    paddub t0,a2,zero
    bnez t0,L20db08
    addiu a2,a2,-1
    b L20dd4c
    .word 0x8e020008
L20dc30:
    .word 0x8e4200b0
    paddub a2,v0,zero
    beqz a2,L20dd48
    addiu v0,v0,-1
    addiu t2,sp,108
L20dc44:
    .word 0x9089000c
    .word 0x9088000d
    .word 0x9087000e
    .word 0x9086000f
    .word 0xa1490000
    .word 0xa1480001
    .word 0xa1470002
    .word 0xa1460003
    .word 0x93a6006c
    bltz a2,L20dc7c
    srl a3,a2,0x1
    .word 0x44860000
    b L20dc94
    cvt.s.w $f0,$f0
L20dc7c:
    andi a2,a2,0x1
    or a3,a3,a2
    .word 0x44870000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20dc94:
    .word 0xe4a00010
    .word 0x93a6006d
    bltz a2,L20dcb0
    srl a3,a2,0x1
    .word 0x44860000
    b L20dcc8
    cvt.s.w $f0,$f0
L20dcb0:
    andi a2,a2,0x1
    or a3,a3,a2
    .word 0x44870000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20dcc8:
    .word 0xe4a00014
    .word 0x93a6006e
    bltz a2,L20dce4
    srl a3,a2,0x1
    .word 0x44860000
    b L20dcfc
    cvt.s.w $f0,$f0
L20dce4:
    andi a2,a2,0x1
    or a3,a3,a2
    .word 0x44870000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20dcfc:
    .word 0xe4a00018
    .word 0x93a6006f
    bltz a2,L20dd18
    srl a3,a2,0x1
    .word 0x44860000
    b L20dd30
    cvt.s.w $f0,$f0
L20dd18:
    andi a2,a2,0x1
    or a3,a3,a2
    .word 0x44870000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20dd30:
    .word 0xe4a0001c
    paddub a2,v0,zero
    addu a0,a0,v1
    addiu a1,a1,40
    bnez a2,L20dc44
    addiu v0,v0,-1
L20dd48:
    .word 0x8e020008
L20dd4c:
    beqz v0,L20dd88
    .word 0x8e120000
    paddub a1,s1,zero
    paddub a0,s2,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L20dd88
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s0,16
    bnez v0,L20dd88
    nop
    .word 0xae020008
L20dd88:
    .word 0x8e420014
    slti at,v0,2
    bnez at,L20dda4
    addiu v0,zero,2
    .word 0xae420014
    jal func_001d5ee0
    .word 0x8e440018
L20dda4:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,112
}


