extern void fn_17a3c0(void);
extern void fn_2013c0(void);
extern void fn_180470(void);
extern void fn_16b5b0(void);
extern void fn_16bc20(void);
extern void fn_1214b8(void);
extern void fn_170070(void);
extern void fn_16bac0(void);
extern void fn_12dd70(void);
extern void fn_16fdd0(void);
extern void fn_177390(void);
extern void fn_201a40(void);
extern void fn_142ad0(void);
extern void fn_1f7d70(void);
extern void fn_1f7d50(void);
extern void fn_12e770(void);
extern void fn_142aa0(void);
extern void fn_143640(void);
extern void fn_1c3b70(void);
extern void fn_12e4b0(void);
extern void fn_1c3b00(void);
extern void fn_1c3b80(void);
extern void fn_17f610(void);
extern void fn_17fc00(void);
extern void fn_17f3f0(void);
extern void fn_17f790(void);
extern void fn_17f260(void);
extern void fn_17b460(void);
extern void fn_17b5f0(void);
extern void fn_179d10(void);
extern void fn_13bff0(void);
extern void fn_1804a0(void);
extern void fn_201570(void);
extern void fn_13be60(void);
extern void fn_1a85d0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-288
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s2,a0,zero
    paddub s0,a1,zero
    jal fn_17a3c0
    .word 0xafa0011c
    .word 0x8c420000
    paddub a0,s2,zero
    jalr ra,v0
    paddub a1,s0,zero
    bnez v0,L12d6b8
    nop
    b L12dd3c
    paddub v0,zero,zero
L12d6b8:
    .word 0x3c020030
    addiu v0,v0,-31024
    .word 0xae42000c
    .word 0xae4003d8
    .word 0xae4003dc
    .word 0xae4003e0
    .word 0xae4003e4
    .word 0xae40045c
    .word 0x8e4200d0
    andi v0,v0,0x10
    beqz v0,L12d72c
    nop
    .word 0x3c020030
    addiu v0,v0,-31216
    .word 0xdc430000
    .word 0xc4400008
    addiu a0,sp,272
    .word 0x3c0241a0
    .word 0xfc830000
    .word 0x44826000
    jal fn_2013c0
    .word 0xe4800008
    .word 0xae420030
    .word 0x8e420030
    .word 0xae4200b4
    .word 0x8e420030
    .word 0xae4200b8
    .word 0x8e420030
    .word 0xae4200bc
L12d72c:
    jal fn_180470
    nop
    .word 0xae420038
    .word 0x8e420038
    bnez v0,L12d74c
    nop
    b L12dd3c
    paddub v0,zero,zero
L12d74c:
    .word 0x8e4400b4
    beqz a0,L12d7f0
    nop
    .word 0x3c02002f
    jal fn_16b5b0
    addiu a1,v0,-16400
    beqz v0,L12d7f0
    nop
    addiu a2,zero,16
    paddub a0,v0,zero
    jal fn_16bc20
    paddub a1,zero,zero
    .word 0xae4203e0
    paddub s1,zero,zero
L12d784:
    .word 0x3c02002f
    addiu a1,v0,-16392
    .word 0x3c02002f
    addiu a0,sp,80
    addiu a2,v0,-16384
    jal fn_1214b8
    paddub a3,s1,zero
    jal fn_170070
    addiu a0,sp,80
    .word 0x44910000
    paddub a2,v0,zero
    cvt.s.w $f1,$f0
    .word 0x3c024170
    .word 0x8e4403e0
    paddub a1,s1,zero
    .word 0x44820000
    nop
    div.s $f12,$f1,$f0
    nop
    nop
    jal fn_16bac0
    nop
    addiu s1,s1,1
    slti v0,s1,16
    bnez v0,L12d784
    nop
    nop
L12d7f0:
    .word 0x8e450030
    .word 0x8e460008
    addiu a3,sp,284
    jal fn_12dd70
    paddub a0,s2,zero
    .word 0x8fa2011c
    bnez v0,L12d860
    nop
    .word 0x8e4500b4
    beqz a1,L12d838
    nop
    .word 0x8e420030
    beq a1,v0,L12d838
    nop
    .word 0x8e460008
    paddub a0,s2,zero
    jal fn_12dd70
    paddub a3,zero,zero
L12d838:
    .word 0x8e4500b8
    beqz a1,L12d860
    nop
    .word 0x8e420030
    beq a1,v0,L12d860
    nop
    .word 0x8e460008
    paddub a0,s2,zero
    jal fn_12dd70
    paddub a3,zero,zero
L12d860:
    .word 0x8e420008
    slti v0,v0,10000
    bnez v0,L12d934
    nop
    addiu a0,zero,4
    addiu a1,zero,1
    jal fn_16fdd0
    paddub a2,zero,zero
    paddub s1,v0,zero
    .word 0x3c02002f
    addiu a0,sp,208
    addiu a1,v0,-16376
    jal fn_1214b8
    addiu a2,s0,12
    addiu a1,sp,208
    jal fn_177390
    paddub a0,s1,zero
    beqz v0,L12d934
    nop
    jal fn_201a40
    paddub a0,v0,zero
    paddub s3,v0,zero
    jal fn_142ad0
    paddub a0,s3,zero
    paddub s1,v0,zero
    beqz s1,L12d924
    paddub a1,s3,zero
L12d8cc:
    .word 0x8fa2011c
    beqz v0,L12d8fc
    paddub a0,s1,zero
    jal fn_1f7d70
    paddub a0,s1,zero
    beqz v0,L12d8f8
    nop
    .word 0x8e450360
    jal fn_1f7d50
    paddub a0,v0,zero
    nop
L12d8f8:
    paddub a0,s1,zero
L12d8fc:
    jal fn_12e770
    nop
    paddub a1,s1,zero
    jal fn_142aa0
    paddub a0,s3,zero
    paddub s1,v0,zero
    bnez s1,L12d8cc
    nop
    nop
    paddub a1,s3,zero
L12d924:
    paddub a0,zero,zero
    jal fn_143640
    paddub a2,s2,zero
    .word 0xae4200b0
L12d934:
    .word 0x8e4200cc
    bnez v0,L12d988
    nop
    .word 0x3c02002f
    addiu a0,sp,240
    addiu a1,v0,-16368
    jal fn_1214b8
    addiu a2,s0,12
    .word 0x8f848318
    jal fn_177390
    addiu a1,sp,240
    .word 0xae4203d8
    .word 0x3c02002f
    addiu a0,sp,240
    addiu a1,v0,-16360
    jal fn_1214b8
    addiu a2,s0,12
    .word 0x8f848318
    jal fn_177390
    addiu a1,sp,240
    .word 0xae4203dc
L12d988:
    .word 0x8e420030
    jal fn_1c3b70
    .word 0x8c440004
    .word 0xc602001c
    .word 0xc6010020
    .word 0xc6000024
    .word 0x3c010030
    paddub s1,v0,zero
    addiu v1,zero,98
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0xc6020028
    .word 0xc601002c
    .word 0xc6000030
    .word 0xe4420010
    .word 0xe4410014
    .word 0xe4400018
    .word 0xc6020034
    .word 0xc6010038
    .word 0xc600003c
    .word 0xe4420020
    .word 0xe4410024
    .word 0xe4400028
    .word 0xc6020040
    .word 0xc6010044
    .word 0xc6000048
    .word 0xe4420030
    .word 0xe4410034
    .word 0xe4400038
    .word 0x8c24a628
    .word 0xc4410030
    .word 0xc4800000
    .word 0x3c010030
    add.s $f0,$f1,$f0
    .word 0xe4400030
    .word 0x8c24a628
    .word 0xc4410034
    .word 0xc4800004
    .word 0x3c010030
    add.s $f0,$f1,$f0
    .word 0xe4400034
    .word 0x8c24a628
    .word 0xc4410038
    .word 0xc4800008
    add.s $f0,$f1,$f0
    .word 0xe4400038
    .word 0x8202000c
    bne v0,v1,L12dad4
    nop
    .word 0x8203000d
    addiu v0,zero,111
    bne v1,v0,L12dad4
    nop
    .word 0x8203000e
    addiu v0,zero,97
    bne v1,v0,L12dad4
    nop
    .word 0x8203000f
    addiu v0,zero,114
    bne v1,v0,L12dad4
    nop
    .word 0x82030010
    addiu v0,zero,100
    bne v1,v0,L12dad4
    nop
    .word 0x82030011
    addiu v0,zero,95
    bne v1,v0,L12dad4
    nop
    .word 0x82030012
    addiu v0,zero,67
    bne v1,v0,L12dad4
    nop
    .word 0x82030013
    addiu v0,zero,83
    bne v1,v0,L12dad4
    nop
    .word 0x3c020030
    addiu v0,v0,-31072
    .word 0xae42000c
    jal fn_12e4b0
    paddub a0,s2,zero
L12dad4:
    .word 0x8e420030
    jal fn_1c3b00
    .word 0x8c440004
    .word 0x8e420030
    jal fn_1c3b80
    .word 0x8c440004
    addiu a1,s2,1008
    addiu a0,zero,8
    paddub a2,s1,zero
L12daf8:
    .word 0x8cc30000
    .word 0x8cc20004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu a2,a2,8
    bgtz a0,L12daf8
    addiu a1,a1,8
    .word 0x8e4200cc
    beqz v0,L12dbc8
    nop
    .word 0x8c4205e4
    beqz v0,L12dbc8
    nop
    jal fn_17f610
    addiu a0,zero,2
    .word 0xae420034
    .word 0x8e440034
    jal fn_17fc00
    addiu a1,zero,1
    .word 0x8e420030
    .word 0x8c450004
    jal fn_17f3f0
    .word 0x8e440034
    .word 0x3c020030
    addiu a2,v0,-31092
    .word 0x8e440034
    .word 0x3c020030
    addiu a3,zero,2
    addiu t0,v0,-31168
    jal fn_17f790
    paddub a1,zero,zero
    .word 0x8e440034
    jal fn_17f260
    addiu a1,zero,1
    .word 0x3c020030
    addiu a0,zero,1
    jal fn_17b460
    addiu a1,v0,-31200
    .word 0x8e440034
    .word 0x3c030030
    addiu a1,v1,-31200
    .word 0xac820024
    .word 0x8e420034
    .word 0x8c440024
    jal fn_17b5f0
    paddub a2,s2,zero
    paddub a0,s2,zero
    jal fn_179d10
    paddub a1,zero,zero
    b L12dbd0
    .word 0x3c023f80
L12dbc8:
    .word 0xae400034
    .word 0x3c023f80
L12dbd0:
    .word 0x44826000
    jal fn_13bff0
    paddub a0,s2,zero
    .word 0x8e4300cc
    beqz v1,L12dc48
    nop
    .word 0x8c62002c
    beqz v0,L12dc48
    nop
    .word 0x8c620034
    beqz v0,L12dc14
    .word 0xc64d0020
    .word 0x3c023f19
    ori v0,v0,0x999a
    .word 0x44820000
    nop
    mul.s $f13,$f13,$f0
L12dc14:
    .word 0xc46c0038
    .word 0x3c023f59
    ori v0,v0,0x999a
    .word 0x44827000
    .word 0x8e440038
    paddub a1,s1,zero
    jal fn_1804a0
    mov.s $f15,$f14
    .word 0x8e440030
    .word 0x3c020013
    addiu a1,v0,-8864
    jal fn_201570
    addiu a2,zero,5
L12dc48:
    .word 0x8fa2011c
    beqz v0,L12dc64
    nop
    .word 0x8e420010
    ori v0,v0,0x1000
    b L12dc74
    .word 0xae420010
L12dc64:
    .word 0x8e430010
    addiu v0,zero,-4097
    and v0,v1,v0
    .word 0xae420010
L12dc74:
    jal fn_13be60
    paddub a0,s2,zero
    .word 0x3c0242a0
    .word 0x44826800
    .word 0x8e030058
    .word 0x3c024120
    .word 0x44826000
    .word 0x44807800
    .word 0x3c023f80
    .word 0x44827000
    addiu a0,s2,220
    jal fn_1a85d0
    .word 0xae430350
    .word 0x3c0242a0
    .word 0x44826800
    .word 0x44807800
    .word 0x3c024120
    .word 0x44826000
    .word 0x3c023f80
    .word 0x44827000
    jal fn_1a85d0
    addiu a0,s2,452
    .word 0x3c0242a0
    .word 0x44826800
    .word 0x44807800
    .word 0x3c024120
    .word 0x44826000
    .word 0x3c023f80
    .word 0x44827000
    jal fn_1a85d0
    addiu a0,s2,684
    .word 0x3c0242a0
    .word 0x44826800
    .word 0x44807800
    .word 0x3c024120
    .word 0x44826000
    .word 0x3c023f80
    .word 0x44827000
    jal fn_1a85d0
    addiu a0,s2,336
    .word 0x3c0242a0
    .word 0x44826800
    .word 0x44807800
    .word 0x3c024120
    .word 0x44826000
    .word 0x3c023f80
    .word 0x44827000
    jal fn_1a85d0
    addiu a0,s2,568
    addiu v0,zero,1
L12dd3c:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,288
}

