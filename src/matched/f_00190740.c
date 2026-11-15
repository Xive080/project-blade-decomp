extern void func_001ce160(void);
extern void func_001ce240(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c830424
    paddub s2,a0,zero
    paddub a1,zero,zero
    bnez v1,L1907b0
    paddub v0,zero,zero
    .word 0x8e430420
    addiu v1,v1,1
    .word 0xae430420
    .word 0x8e46041c
    .word 0x8e440420
    .word 0x8cc30008
    slt v1,a0,v1
    bnez v1,L1907ec
    nop
    .word 0x8e4303d8
    bnez v1,L1907a0
    nop
    .word 0x8cc50004
    nop
L1907a0:
    bnez a1,L1907ec
    nop
    b L1907ec
    addiu v0,zero,1
L1907b0:
    .word 0x8e430420
    addiu v1,v1,-1
    .word 0xae430420
    .word 0x8e430420
    bgez v1,L1907ec
    nop
    .word 0x8e4303d8
    bnez v1,L1907e0
    nop
    .word 0x8e43041c
    .word 0x8c650000
    nop
L1907e0:
    bnez a1,L1907ec
    nop
    addiu v0,zero,1
L1907ec:
    beqz a1,L1908dc
    nop
    .word 0x8ca90000
    addiu a2,zero,-1
    addiu a0,zero,1
    paddub a3,zero,zero
    b L190838
    paddub t0,a1,zero
L19080c:
    .word 0x8d0a0004
    .word 0x8e43041c
    beql t2,v1,L190834
    addiu t0,t0,4
    .word 0x8d430010
    bne v1,a0,L190830
    nop
    b L190848
    paddub a2,a3,zero
L190830:
    addiu t0,t0,4
L190834:
    addiu a3,a3,1
L190838:
    slt v1,a3,t1
    bnez v1,L19080c
    nop
    nop
L190848:
    bltzl a2,L1908dc
    addiu v0,zero,1
    sll v1,a2,0x2
    addu a0,v1,a1
    .word 0x8c830004
    .word 0xae43041c
    .word 0x8c830014
    .word 0xae430424
    .word 0x8e430424
    beqz v1,L190888
    paddub v1,zero,zero
    .word 0x8e43041c
    .word 0x8c630008
    b L190888
    addiu v1,v1,-1
    paddub v1,zero,zero
L190888:
    .word 0xae430420
    .word 0x8e45040c
    .word 0x8e430410
    addiu a0,s2,1036
    .word 0xac650000
    .word 0x8e450410
    .word 0x8e43040c
    .word 0xac650004
    .word 0x8e43041c
    .word 0x8c630014
    .word 0xae43040c
    .word 0x8e43041c
    addiu v1,v1,20
    .word 0xae430410
    .word 0x8e43041c
    .word 0x8c630014
    .word 0xac640004
    .word 0x8e43041c
    b L1908dc
    .word 0xac640014
    addiu v0,zero,1
L1908dc:
    beqz v0,L190914
    nop
    .word 0x8e420424
    beqz v0,L190900
    addiu v0,zero,1
    .word 0xae400424
    b L190914
    .word 0xae400420
    addiu v0,zero,1
L190900:
    .word 0xae420424
    .word 0x8e42041c
    .word 0x8c420008
    addiu v0,v0,-1
    .word 0xae420420
L190914:
    .word 0x8e430424
    .word 0x8e44041c
    .word 0x8e450420
    addiu a2,zero,1
    paddub v0,a2,zero
    movz a2,zero,v1
    subu v1,v0,a2
    sll v0,a1,0x1
    addu v0,v0,a1
    .word 0x8c84000c
    sll a1,v0,0x3
    sll v0,a2,0x1
    addu v0,v0,a2
    sll v0,v0,0x2
    addu a0,a0,a1
    addu v0,a0,v0
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    addiu s1,sp,68
    addiu s0,sp,72
    addiu a0,s2,1080
    sll v0,v1,0x1
    .word 0xe642042c
    addu v0,v0,v1
    .word 0xe6410430
    .word 0xe6400434
    .word 0x8e43041c
    .word 0x8e460420
    sll v0,v0,0x2
    .word 0xc641042c
    .word 0x8c63000c
    sll a1,a2,0x1
    addu a1,a1,a2
    sll a2,a1,0x3
    paddub a1,a0,zero
    addu v1,v1,a2
    addu v0,v1,v0
    .word 0xc4400000
    sub.s $f0,$f1,$f0
    .word 0xe7a00040
    .word 0xc6410430
    .word 0xc4400004
    sub.s $f0,$f1,$f0
    .word 0xe6200000
    .word 0xc4400008
    .word 0xc6410434
    sub.s $f0,$f1,$f0
    .word 0xe6000000
    .word 0x8e420414
    .word 0xc6230000
    .word 0xc6010000
    .word 0xc4420018
    .word 0xc4400014
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe6400438
    .word 0x8e420414
    .word 0xc6030000
    .word 0xc7a10040
    .word 0xc4420010
    .word 0xc4400018
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe640043c
    .word 0x8e420414
    .word 0xc7a30040
    .word 0xc6210000
    .word 0xc4420014
    .word 0xc4400010
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    jal func_001ce160
    .word 0xe6400440
    .word 0x8e420414
    .word 0xc640042c
    addiu a0,sp,64
    .word 0xc4410030
    sub.s $f0,$f1,$f0
    .word 0xe7a00040
    .word 0x8e420414
    .word 0xc6400430
    .word 0xc4410034
    sub.s $f0,$f1,$f0
    .word 0xe6200000
    .word 0x8e420414
    .word 0xc6400434
    .word 0xc4410038
    sub.s $f0,$f1,$f0
    jal func_001ce240
    .word 0xe6000000
    .word 0xe6400444
    .word 0x8e430414
    .word 0xc4620034
    .word 0xe6420448
    .word 0xc6410430
    .word 0xc6400444
    sub.s $f1,$f2,$f1
    div.s $f0,$f1,$f0
    .word 0xe640044c
    .word 0xc6400430
    .word 0xe6400450
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
