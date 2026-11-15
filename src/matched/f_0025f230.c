extern void func_00189710(void);
extern void func_0016fa20(void);
extern void func_00182e50(void);
extern void func_00189050(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-208
    .word 0x7fbf0070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x3c010033
    .word 0x8c255f28
    addiu v0,zero,-1
    .word 0x3c010033
    .word 0x8c235f24
    sll a0,a1,0x1
    addu a0,a0,a1
    sll a0,a0,0x2
    addu s0,v1,a0
    .word 0x86030008
    bne v1,v0,L25f294
    addiu v0,a1,1
    b L25f6a4
    .word 0x70001628
    addiu v0,a1,1
L25f294:
    .word 0x3c010033
    .word 0xac225f28
    .word 0x3c010033
    .word 0x8c256240
    .word 0x3c020033
    addiu v1,v0,24352
    .word 0x86020008
    .word 0x3c010033
    sll a1,a1,0x4
    addu v1,v1,a1
    .word 0x8c245f2c
    addiu s2,v1,24
    jal func_00189710
    andi s1,v0,0x7
    .word 0xae420000
    .word 0x86020008
    andi v0,v0,0x8
    beqz v0,L25f580
    nop
    .word 0x8e440000
    .word 0x3c034240
    .word 0x3c0243e0
    .word 0xac830010
    .word 0xac820014
    .word 0x8c82000c
    ori v0,v0,0x1
    .word 0xac82000c
    .word 0x8e140000
    beqz s4,L25f3f0
    nop
    .word 0x82820000
    beqz v0,L25f3f0
    nop
    .word 0x3c02002f
    addiu v0,v0,-26440
    sll s5,s1,0x4
    addu v0,v0,s5
    .word 0x8c530000
    .word 0x3c02002f
    addiu v0,v0,-26444
    addu v0,v0,s5
    .word 0xc4540000
    .word 0x3c02002f
    addiu v0,v0,-26448
    addu v0,v0,s5
    jal func_0016fa20
    .word 0x8c440000
    addiu v1,zero,2
    .word 0xafa30080
    .word 0xafa00084
    .word 0xafa00088
    .word 0xafa0008c
    .word 0xafa00090
    .word 0xafa200ac
    paddub a0,v0,zero
    paddub a1,s4,zero
    jal func_00182e50
    .word 0xafb400b0
    addiu v0,sp,180
    .word 0xe4400000
    mul.s $f0,$f20,$f0
    addiu a1,sp,148
    .word 0x3c02002f
    addiu v0,v0,-26436
    .word 0xe4a00000
    .word 0xe7b40098
    .word 0xc6630000
    .word 0xc6620004
    .word 0xc6610008
    .word 0xc660000c
    addiu v1,sp,156
    addu v0,v0,s5
    .word 0x3c010033
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0xc4400000
    .word 0xc4a10000
    addiu a0,sp,128
    mul.s $f0,$f1,$f0
    .word 0xe4a00000
    .word 0x8c255f2c
    .word 0x8e460000
    jal func_00189050
    addiu a3,zero,1
    .word 0xae420004
L25f3f0:
    .word 0x8e130004
    beqz s3,L25f504
    nop
    .word 0x82620000
    beqz v0,L25f504
    nop
    .word 0x3c02002f
    addiu v0,v0,-26440
    sll a0,s1,0x4
    addu v0,v0,a0
    .word 0x8c510000
    .word 0x3c033f40
    .word 0x3c02002f
    addiu v0,v0,-26436
    addu s4,v0,a0
    .word 0xc6800000
    .word 0x3c024420
    .word 0x44820800
    .word 0x3c02002f
    addiu v0,v0,-26444
    mul.s $f21,$f1,$f0
    addu v0,v0,a0
    .word 0xc4400000
    .word 0x44830800
    .word 0x3c02002f
    addiu v0,v0,-26448
    addu v0,v0,a0
    .word 0x8c440000
    jal func_0016fa20
    mul.s $f20,$f1,$f0
    addiu v1,zero,2
    .word 0xafa30080
    .word 0x3c033f80
    .word 0xafa30084
    .word 0xafa00088
    .word 0xe7b5008c
    .word 0x3c0340a0
    .word 0xafa30090
    .word 0xafa200ac
    paddub a0,v0,zero
    paddub a1,s3,zero
    jal func_00182e50
    .word 0xafb300b0
    addiu v0,sp,180
    .word 0xe4400000
    mul.s $f0,$f20,$f0
    addiu v1,sp,148
    addiu v0,sp,156
    .word 0xe4600000
    .word 0xe7b40098
    .word 0xc6230000
    .word 0xc6220004
    .word 0xc6210008
    .word 0xc620000c
    .word 0x3c010033
    addiu a0,sp,128
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0xc6800000
    .word 0xc4610000
    mul.s $f0,$f1,$f0
    .word 0xe4600000
    .word 0x8c255f2c
    .word 0x8e460000
    jal func_00189050
    addiu a3,zero,1
    .word 0xae420008
L25f504:
    .word 0x8e020000
    bnez v0,L25f528
    nop
    .word 0x8e020004
    beqz v0,L25f528
    nop
    .word 0x8e420008
    .word 0xae420004
    .word 0xae400008
L25f528:
    .word 0x8e420004
    beqz v0,L25f53c
    nop
    b L25f540
    .word 0xc4400024
L25f53c:
    .word 0x44800000
L25f540:
    .word 0x8e420008
    beqz v0,L25f554
    nop
    b L25f558
    .word 0xc4410024
L25f554:
    .word 0x44800800
L25f558:
    c.le.s $f0,$f1
    nop
    bc1tl L25f574
    .word 0x46000806
    b L25f578
    .word 0xe640000c
    .word 0x46000806
L25f574:
    .word 0xe640000c
L25f578:
    b L25f668
    nop
L25f580:
    .word 0x8e450000
    .word 0x3c0443a0
    .word 0x3c02002f
    .word 0x3c0343e0
    addiu v0,v0,-26440
    .word 0xaca40010
    .word 0xaca30014
    sll a2,s1,0x4
    .word 0x8ca4000c
    addu v1,v0,a2
    .word 0x3c02002f
    addiu v0,v0,-26444
    ori a0,a0,0x1
    .word 0xaca4000c
    addu v0,v0,a2
    .word 0xc4540000
    .word 0x8e100000
    .word 0x3c02002f
    addiu v0,v0,-26448
    addu v0,v0,a2
    .word 0x8c440000
    jal func_0016fa20
    .word 0x8c710000
    addiu v1,zero,2
    .word 0xafa30080
    .word 0x3c033f00
    .word 0xafa30084
    .word 0xafa00088
    .word 0xafa0008c
    .word 0xafa00090
    .word 0xafa200ac
    paddub a0,v0,zero
    paddub a1,s0,zero
    jal func_00182e50
    .word 0xafb000b0
    addiu v0,sp,180
    .word 0xe4400000
    mul.s $f0,$f20,$f0
    addiu v0,sp,156
    .word 0x3c010033
    addiu a0,sp,128
    .word 0xe7a00094
    .word 0xe7b40098
    .word 0xc6230000
    .word 0xc6220004
    .word 0xc6210008
    .word 0xc620000c
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0x8c255f2c
    .word 0x8e460000
    jal func_00189050
    addiu a3,zero,1
    .word 0xae420004
    .word 0xc4400024
    .word 0xe640000c
L25f668:
    .word 0x3c010033
    .word 0x8c246240
    addiu v1,zero,48
    addiu v0,zero,1
    addiu a0,a0,1
    .word 0x0083001a
    .word 0x3c010033
    nop
    mfhi v1
    .word 0xac236240
    .word 0x3c010033
    .word 0x8c236244
    addiu v1,v1,1
    .word 0x3c010033
    .word 0xac236244
L25f6a4:
    .word 0x7bbf0070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,208
}


