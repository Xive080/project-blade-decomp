asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70808628
    bnez s0,L137374
    nop
    b L13755c
    .word 0x70001628
L137374:
    .word 0xae050070
    .word 0xae060074
    .word 0xe60c0094
    .word 0xae070098
    .word 0x3c017000
    .word 0xc4203fb0
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820800
    .word 0x44802800
    .word 0x3c024370
    add.s $f0,$f1,$f0
    .word 0xe60000b0
    .word 0xc6040060
    .word 0x44821800
    .word 0x3c0242c8
    .word 0x44821000
    nop
    sub.s $f3,$f4,$f3
    .word 0x3c024105
    ori v1,v0,0x5555
    .word 0x3c024131
    div.s $f2,$f3,$f2
    ori v0,v0,0xc71d
    .word 0x44830800
    .word 0x44820000
    nop
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    c.lt.s $f0,$f5
    nop
    bc1f L137400
    .word 0xe6000110
    b L137424
    .word 0xae000110
L137400:
    .word 0x3c02419b
    ori v0,v0,0x8e39
    .word 0x44820800
    nop
    c.le.s $f0,$f1
    nop
    bc1tl L137428
    .word 0x3c023e4c
    .word 0xae020110
L137424:
    .word 0x3c023e4c
L137428:
    .word 0xae000114
    ori v0,v0,0xcccd
    .word 0xae020118
    .word 0xae00005c
    .word 0xae000174
    .word 0x8e050008
    .word 0x3c023e99
    ori a0,v0,0x999a
    .word 0x3c02fffe
    .word 0x3c030002
    ori v0,v0,0xfff
    .word 0xaca80548
    .word 0xae00009c
    .word 0xae0400a0
    .word 0x8e040004
    addiu a1,zero,8192
    or v1,a0,v1
    .word 0xae030004
    .word 0x8e040008
    .word 0x8c830010
    and v0,v1,v0
    .word 0xac820010
    .word 0x8e110008
    .word 0x8e22003c
    beq v0,a1,L1374d0
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L1374d0
    nop
    .word 0x8e22000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72202628
    beqz v0,L1374d0
    nop
    .word 0x8e22000c
    addiu a1,zero,8192
    .word 0x72202628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L1374d0:
    .word 0x8e060014
    .word 0x3c023e4c
    ori a0,v0,0xcccd
    .word 0x3c02bf80
    .word 0x44820800
    addiu a1,zero,2
    .word 0x8cc30010
    .word 0x3c010001
    addiu v0,zero,1
    ori v1,v1,0x110
    .word 0xacc30010
    .word 0x8e030014
    .word 0xac6500cc
    .word 0x8e030014
    .word 0xac64007c
    .word 0x8e040008
    .word 0x8e030014
    addu at,a0,at
    .word 0xc420eaf0
    mul.s $f0,$f1,$f0
    .word 0x3c010001
    .word 0xe46000d0
    .word 0x8e040008
    .word 0x8e030014
    addu at,a0,at
    .word 0xc420eaf4
    mul.s $f0,$f1,$f0
    .word 0x3c010001
    .word 0xe46000d4
    .word 0x8e040008
    .word 0x8e030014
    addu at,a0,at
    .word 0xc420eaf8
    mul.s $f0,$f1,$f0
    .word 0xe46000d8
L13755c:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
