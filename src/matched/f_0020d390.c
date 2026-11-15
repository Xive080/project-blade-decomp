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
    bne v1,v0,L20d3e4
    .word 0x7000a628
    addiu v0,zero,2
    .word 0xac820000
    .word 0x8e020000
    .word 0x8c540018
    nop
L20d3e4:
    .word 0x8e830008
    addiu v0,zero,-1
    .word 0x8c630000
    bne v1,v0,L20d400
    sll v0,v1,0x3
    b L20d430
    .word 0x70001628
L20d400:
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,v0,s4
    .word 0x8c620018
    .word 0xac62001c
    .word 0x8e820008
    .word 0x8c430000
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s4,v0
    addiu v0,v0,20
L20d430:
    .word 0x8c520008
    .word 0x8e4200b8
    bnez v0,L20d8c8
    addiu a1,zero,1
    .word 0xa3a5006f
    .word 0x924800a0
    .word 0x924700a1
    .word 0x924300a2
    .word 0x924200a3
    addiu t1,sp,104
    paddub a0,s4,zero
    paddub a2,s1,zero
    .word 0xa1280000
    .word 0xa1270001
    .word 0xa1230002
    jal func_001d8240
    .word 0xa1220003
    paddub s3,v0,zero
    paddub a0,s4,zero
    addiu a1,zero,2
    jal func_001d8240
    paddub a2,s1,zero
    .word 0x8e840008
    addiu v1,zero,-1
    .word 0x8c84000c
    bne a0,v1,L20d4a4
    sll v1,a0,0x3
    b L20d4d4
    .word 0x70001e28
L20d4a4:
    subu v1,v1,a0
    sll v1,v1,0x2
    addu a0,v1,s4
    .word 0x8c830018
    .word 0xac83001c
    .word 0x8e830008
    .word 0x8c64000c
    sll v1,a0,0x3
    subu v1,v1,a0
    sll v1,v1,0x2
    addu v1,s4,v1
    addiu v1,v1,20
L20d4d4:
    beqz v1,L20d530
    nop
    .word 0x8c650010
    beqz a1,L20d530
    nop
    .word 0x8c660004
    .word 0x90c40000
    addiu v1,zero,1
    beqz a0,L20d528
    addiu t1,a0,-1
L20d4fc:
    .word 0x8e680008
    .word 0x96670002
    paddub a0,t1,zero
    addiu t1,t1,-1
    addu a3,t0,a3
    .word 0xae670008
    .word 0x8c480008
    .word 0x94470002
    addu a3,t0,a3
    bnez a0,L20d4fc
    .word 0xac470008
L20d528:
    b L20d53c
    addiu a2,a2,1
L20d530:
    .word 0x8e4500b0
    addiu a2,sp,111
    .word 0x70001e28
L20d53c:
    .word 0x8e440000
    andi a0,a0,0x40
    beqz a0,L20d564
    paddub a0,a1,zero
    addiu a0,sp,104
    .word 0x8c870000
    addiu a0,zero,-1
    bne a3,a0,L20d66c
    .word 0x3c043b80
    paddub a0,a1,zero
L20d564:
    beqz a0,L20d8c8
    addiu a1,a1,-1
    .word 0x3c04002f
    addiu a0,a0,2280
L20d574:
    .word 0x8e670008
    .word 0x8c8a0000
    addiu t1,a3,16
    .word 0x8ce70010
    sltu at,t2,a3
    beqz at,L20d5a8
    .word 0x8c480008
    .word 0x8d270000
    bgez a3,L20d5a0
    nop
    .word 0x70005628
L20d5a0:
    .word 0xad2a0000
    nop
L20d5a8:
    .word 0x8d270004
    .word 0x8c8a0000
    sltu at,t2,a3
    beqz at,L20d5d0
    nop
    .word 0x8d270004
    bgez a3,L20d5cc
    nop
    .word 0x70005628
L20d5cc:
    .word 0xad2a0004
L20d5d0:
    .word 0x8d270008
    .word 0x8c8a0000
    sltu at,t2,a3
    beqz at,L20d5f8
    nop
    .word 0x8d270008
    bgez a3,L20d5f4
    nop
    .word 0x70005628
L20d5f4:
    .word 0xad2a0008
L20d5f8:
    .word 0xc5200000
    .word 0xe5000020
    .word 0xc5200004
    .word 0xe5000024
    .word 0xc5200008
    .word 0xe5000028
    .word 0xc520000c
    .word 0xe500002c
    .word 0x90c70000
    addu a2,a2,v1
    beqz a3,L20d658
    addiu t2,a3,-1
L20d628:
    .word 0x8e690008
    .word 0x96680002
    paddub a3,t2,zero
    addiu t2,t2,-1
    addu t0,t1,t0
    .word 0xae680008
    .word 0x8c490008
    .word 0x94480002
    addu t0,t1,t0
    bnez a3,L20d628
    .word 0xac480008
    nop
L20d658:
    paddub a3,a1,zero
    bnez a3,L20d574
    addiu a1,a1,-1
    b L20d8cc
    .word 0x8e020008
L20d66c:
    ori a0,a0,0x8081
    .word 0x44840800
    .word 0x93a40068
    bltz a0,L20d68c
    srl a3,a0,0x1
    .word 0x44840000
    b L20d6a4
    cvt.s.w $f0,$f0
L20d68c:
    andi a0,a0,0x1
    or a3,a3,a0
    .word 0x44870000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20d6a4:
    .word 0x3c043b80
    ori a3,a0,0x8081
    mul.s $f2,$f1,$f0
    .word 0x93a40069
    .word 0x44870800
    bltz a0,L20d6cc
    srl a3,a0,0x1
    .word 0x44840000
    b L20d6e4
    cvt.s.w $f0,$f0
L20d6cc:
    andi a0,a0,0x1
    or a3,a3,a0
    .word 0x44870000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20d6e4:
    .word 0x3c043b80
    ori a3,a0,0x8081
    mul.s $f3,$f1,$f0
    .word 0x93a4006a
    .word 0x44870800
    bltz a0,L20d70c
    srl a3,a0,0x1
    .word 0x44840000
    b L20d724
    cvt.s.w $f0,$f0
L20d70c:
    andi a0,a0,0x1
    or a3,a3,a0
    .word 0x44870000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20d724:
    .word 0x3c043b80
    ori a3,a0,0x8081
    mul.s $f4,$f1,$f0
    .word 0x93a4006b
    .word 0x44870800
    bltz a0,L20d74c
    srl a3,a0,0x1
    .word 0x44840000
    b L20d764
    cvt.s.w $f0,$f0
L20d74c:
    andi a0,a0,0x1
    or a3,a3,a0
    .word 0x44870000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L20d764:
    mul.s $f1,$f1,$f0
    paddub a0,a1,zero
    beqz a0,L20d8c8
    addiu a1,a1,-1
    .word 0x3c04002f
    addiu a0,a0,2280
L20d77c:
    .word 0x8e670008
    .word 0x8c490008
    .word 0xc4e00010
    addiu t2,a3,16
    mul.s $f0,$f0,$f2
    .word 0xe4e00010
    .word 0xc4e00014
    mul.s $f0,$f0,$f3
    .word 0xe4e00014
    .word 0xc4e00018
    mul.s $f0,$f0,$f4
    .word 0xe4e00018
    .word 0xc4e0001c
    mul.s $f0,$f0,$f1
    .word 0xe4e0001c
    .word 0x8ce70010
    .word 0x8c880000
    sltu at,t0,a3
    beqz at,L20d7e0
    nop
    .word 0x8d470000
    bgez a3,L20d7dc
    nop
    .word 0x70004628
L20d7dc:
    .word 0xad480000
L20d7e0:
    .word 0x8d470004
    .word 0x8c880000
    sltu at,t0,a3
    beqz at,L20d808
    nop
    .word 0x8d470004
    bgez a3,L20d804
    nop
    .word 0x70004628
L20d804:
    .word 0xad480004
L20d808:
    .word 0x8d470008
    .word 0x8c880000
    sltu at,t0,a3
    beqz at,L20d830
    nop
    .word 0x8d470008
    bgez a3,L20d82c
    nop
    .word 0x70004628
L20d82c:
    .word 0xad480008
L20d830:
    .word 0x8d47000c
    .word 0x8c880000
    sltu at,t0,a3
    beqz at,L20d858
    nop
    .word 0x8d47000c
    bgez a3,L20d854
    nop
    .word 0x70004628
L20d854:
    .word 0xad48000c
L20d858:
    .word 0xc5400000
    .word 0xe5200020
    .word 0xc5400004
    .word 0xe5200024
    .word 0xc5400008
    .word 0xe5200028
    .word 0xc540000c
    .word 0xe520002c
    .word 0x90c70000
    addu a2,a2,v1
    beqz a3,L20d8b8
    addiu t2,a3,-1
L20d888:
    .word 0x8e690008
    .word 0x96680002
    paddub a3,t2,zero
    addiu t2,t2,-1
    addu t0,t1,t0
    .word 0xae680008
    .word 0x8c490008
    .word 0x94480002
    addu t0,t1,t0
    bnez a3,L20d888
    .word 0xac480008
    nop
L20d8b8:
    paddub a3,a1,zero
    bnez a3,L20d77c
    addiu a1,a1,-1
    nop
L20d8c8:
    .word 0x8e020008
L20d8cc:
    beqz v0,L20d908
    .word 0x8e120000
    paddub a1,s1,zero
    paddub a0,s2,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L20d908
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s0,16
    bnez v0,L20d908
    nop
    .word 0xae020008
L20d908:
    .word 0x8e420014
    slti at,v0,2
    bnez at,L20d924
    addiu v0,zero,2
    .word 0xae420014
    jal func_001d5ee0
    .word 0x8e440018
L20d924:
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


