asm void func(void) {
    .set noreorder
    .set noat
    .word 0x0080402d
    .word 0x00a0482d
    dsra32 t2,t0,0x0
    dsll32 a0,t2,0x0
    dsra32 a0,a0,0x0
    bgez a0,L253260
    .word 0x0000782d
    dsll32 v0,t0,0x0
    dsra32 v0,v0,0x0
    addiu v1,zero,-1
    dsll32 v1,v1,0x0
    negu v0,v0
    and a2,a2,v1
    dsll32 v0,v0,0x0
    negu v1,a0
    dsrl32 v0,v0,0x0
    .word 0x3c04ffff
    dsrl32 a0,a0,0x0
    or a2,a2,v0
    addiu t7,zero,-1
    dsll32 v0,a2,0x0
    dsra32 v0,v0,0x0
    sltu v0,zero,v0
    and a2,a2,a0
    subu v1,v1,v0
    dsll32 v1,v1,0x0
    or t0,a2,v1
    dsra32 t2,t0,0x0
L253260:
    dsra32 a0,t1,0x0
    bgez a0,L2532bc
    nop
    dsll32 v0,t1,0x0
    dsra32 v0,v0,0x0
    addiu v1,zero,-1
    dsll32 v1,v1,0x0
    negu v0,v0
    and a3,a3,v1
    dsll32 v0,v0,0x0
    negu v1,a0
    dsrl32 v0,v0,0x0
    .word 0x3c04ffff
    dsrl32 a0,a0,0x0
    or a3,a3,v0
    nor t7,zero,t7
    dsll32 v0,a3,0x0
    dsra32 v0,v0,0x0
    sltu v0,zero,v0
    and a3,a3,a0
    subu v1,v1,v0
    dsll32 v1,v1,0x0
    or t1,a3,v1
L2532bc:
    dsll32 t4,t0,0x0
    dsra32 t4,t4,0x0
    dsra32 a1,t1,0x0
    dsll32 t2,t2,0x0
    dsra32 t2,t2,0x0
    dsll32 t0,t1,0x0
    dsra32 t0,t0,0x0
    bnez a1,L2536a4
    sltu v0,t2,a1
    sltu v0,t2,t0
    beqz v0,L253434
    ori v0,zero,65535
    sltu v0,v0,t0
    bnez v0,L253308
    .word 0x3c0200ff
    sltiu v0,t0,256
    addiu a1,zero,8
    b L253320
    movn a1,zero,v0
L253308:
    addiu a1,zero,24
    ori v0,v0,0xffff
    addiu v1,zero,16
    sltu v0,v0,t0
    movz a1,v1,v0
    nop
L253320:
    .word 0x3c02002f
    srlv a0,t0,a1
    addiu v0,v0,4328
    addiu a3,zero,32
    addu a0,a0,v0
    .word 0x90830000
    addu v1,v1,a1
    subu a2,a3,v1
    beqz a2,L25335c
    subu v0,a3,a2
    sllv v1,t2,a2
    srlv v0,t4,v0
    sllv t0,t0,a2
    or t2,v1,v0
    sllv t4,t4,a2
L25335c:
    srl a1,t0,0x10
    andi t1,t0,0xffff
    .word 0x0145001b
    srl a0,t4,0x10
    beqzl a1,L253374
    .word 0x000001cd
L253374:
    mflo v0
    mfhi v1
    .word 0x0040382d
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00e93018
    or v1,v1,a0
    sltu v0,v1,a2
    beqzl v0,L2533cc
    subu v1,v1,a2
    addu v1,v1,t0
    sltu v0,v1,t0
    bnez v0,L2533c8
    addiu a3,a3,-1
    sltu v0,v1,a2
    beqzl v0,L2533cc
    subu v1,v1,a2
    addiu a3,a3,-1
    addu v1,v1,t0
    nop
L2533c8:
    subu v1,v1,a2
L2533cc:
    beqzl a1,L2533d4
    .word 0x000001cd
L2533d4:
    .word 0x0065001b
    andi a0,t4,0xffff
    mflo v0
    mfhi v1
    .word 0x0040282d
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00a93018
    or v1,v1,a0
    sltu v0,v1,a2
    beqz v0,L253420
    addu v1,v1,t0
    sltu v0,v1,t0
    bnez v0,L253420
    addiu a1,a1,-1
    sltu v0,v1,a2
    bnezl v0,L253420
    addiu a1,a1,-1
L253420:
    dsll32 v0,a3,0x0
    dsll v0,v0,0x10
    dsra32 v0,v0,0x0
    b L253868
    or a1,v0,a1
L253434:
    bnez t0,L253460
    sltu v0,v0,t0
    addiu v0,zero,1
    beqzl t0,L253448
    .word 0x000001cd
L253448:
    .word 0x0045001b
    mflo v0
    .word 0x0040402d
    ori v0,zero,65535
    sltu v0,v0,t0
    nop
L253460:
    bnez v0,L253478
    .word 0x3c0200ff
    sltiu v0,t0,256
    addiu a1,zero,8
    b L253490
    movn a1,zero,v0
L253478:
    addiu a1,zero,24
    ori v0,v0,0xffff
    addiu v1,zero,16
    sltu v0,v0,t0
    movz a1,v1,v0
    nop
L253490:
    .word 0x3c02002f
    srlv a0,t0,a1
    addiu v0,v0,4328
    addiu a3,zero,32
    addu a0,a0,v0
    .word 0x90830000
    addu v1,v1,a1
    subu a2,a3,v1
    bnez a2,L2534cc
    subu a3,a3,a2
    subu t2,t2,t0
    addiu t5,zero,1
    srl t1,t0,0x10
    b L2535d0
    andi t3,t0,0xffff
L2534cc:
    sllv v1,t2,a2
    srlv v0,t4,a3
    sllv t0,t0,a2
    srlv a3,t2,a3
    sllv t4,t4,a2
    or t2,v1,v0
    srl t1,t0,0x10
    .word 0x00e9001b
    andi t3,t0,0xffff
    .word 0x0120282d
    srl a0,t2,0x10
    beqzl a1,L253500
    .word 0x000001cd
L253500:
    .word 0x0160682d
    mflo v0
    mfhi v1
    .word 0x0040382d
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00eb3018
    or v1,v1,a0
    sltu v0,v1,a2
    beqzl v0,L25355c
    subu v1,v1,a2
    addu v1,v1,t0
    sltu v0,v1,t0
    bnez v0,L253558
    addiu a3,a3,-1
    sltu v0,v1,a2
    beqzl v0,L25355c
    subu v1,v1,a2
    addiu a3,a3,-1
    addu v1,v1,t0
    nop
L253558:
    subu v1,v1,a2
L25355c:
    beqzl a1,L253564
    .word 0x000001cd
L253564:
    .word 0x0065001b
    andi a0,t2,0xffff
    mflo v0
    mfhi v1
    .word 0x0040282d
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00ad3018
    or v1,v1,a0
    sltu v0,v1,a2
    beqz v0,L2535c0
    dsll32 v0,a3,0x0
    addu v1,v1,t0
    sltu v0,v1,t0
    bnez v0,L2535bc
    addiu a1,a1,-1
    sltu v0,v1,a2
    beqz v0,L2535c0
    dsll32 v0,a3,0x0
    addiu a1,a1,-1
    addu v1,v1,t0
L2535bc:
    dsll32 v0,a3,0x0
L2535c0:
    subu t2,v1,a2
    dsll v0,v0,0x10
    dsra32 v0,v0,0x0
    or t5,v0,a1
L2535d0:
    .word 0x0120282d
    srl a0,t4,0x10
    .word 0x0145001b
    .word 0x0160482d
    beqzl a1,L2535e8
    .word 0x000001cd
L2535e8:
    mflo v0
    mfhi v1
    .word 0x0040382d
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00e93018
    or v1,v1,a0
    sltu v0,v1,a2
    beqzl v0,L25363c
    subu v1,v1,a2
    addu v1,v1,t0
    sltu v0,v1,t0
    bnez v0,L253638
    addiu a3,a3,-1
    sltu v0,v1,a2
    beqzl v0,L25363c
    subu v1,v1,a2
    addiu a3,a3,-1
    addu v1,v1,t0
L253638:
    subu v1,v1,a2
L25363c:
    beqzl a1,L253644
    .word 0x000001cd
L253644:
    .word 0x0065001b
    andi a0,t4,0xffff
    mflo v0
    mfhi v1
    .word 0x0040282d
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00a93018
    or v1,v1,a0
    sltu v0,v1,a2
    beqz v0,L253690
    addu v1,v1,t0
    sltu v0,v1,t0
    bnez v0,L253690
    addiu a1,a1,-1
    sltu v0,v1,a2
    bnezl v0,L253690
    addiu a1,a1,-1
L253690:
    dsll32 v0,a3,0x0
    dsll v0,v0,0x10
    dsra32 v0,v0,0x0
    b L253870
    or a1,v0,a1
L2536a4:
    beqz v0,L2536b4
    ori v0,zero,65535
    b L253868
    .word 0x0000282d
L2536b4:
    sltu v0,v0,a1
    bnez v0,L2536d0
    .word 0x3c0200ff
    sltiu v0,a1,256
    addiu a2,zero,8
    b L2536e8
    movn a2,zero,v0
L2536d0:
    addiu a2,zero,24
    ori v0,v0,0xffff
    addiu v1,zero,16
    sltu v0,v0,a1
    movz a2,v1,v0
    nop
L2536e8:
    .word 0x3c02002f
    srlv a0,a1,a2
    addiu v0,v0,4328
    addiu a3,zero,32
    addu a0,a0,v0
    .word 0x90830000
    addu v1,v1,a2
    subu a2,a3,v1
    bnezl a2,L253730
    subu a3,a3,a2
    sltu v0,a1,t2
    bnez v0,L253868
    addiu a1,zero,1
    sltu v0,t4,t0
    bnez v0,L253868
    .word 0x0000282d
    b L253868
    addiu a1,zero,1
L253730:
    sllv a1,a1,a2
    srlv a0,t4,a3
    srlv v1,t0,a3
    srlv a3,t2,a3
    sllv v0,t2,a2
    or t2,v0,a0
    or a1,a1,v1
    sllv t4,t4,a2
    sllv t0,t0,a2
    srl a2,a1,0x10
    .word 0x00e6001b
    andi t3,a1,0xffff
    srl a0,t2,0x10
    beqzl a2,L25376c
    .word 0x000001cd
L25376c:
    mflo v0
    mfhi v1
    .word 0x0040482d
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x012b3818
    or v1,v1,a0
    sltu v0,v1,a3
    beqzl v0,L2537c4
    subu v1,v1,a3
    addu v1,v1,a1
    sltu v0,v1,a1
    bnez v0,L2537c0
    addiu t1,t1,-1
    sltu v0,v1,a3
    beqzl v0,L2537c4
    subu v1,v1,a3
    addiu t1,t1,-1
    addu v1,v1,a1
    nop
L2537c0:
    subu v1,v1,a3
L2537c4:
    beqzl a2,L2537cc
    .word 0x000001cd
L2537cc:
    .word 0x0066001b
    andi a0,t2,0xffff
    mflo v0
    mfhi v1
    .word 0x0040302d
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00cb3818
    or v1,v1,a0
    sltu v0,v1,a3
    beqz v0,L253828
    dsll32 v0,t1,0x0
    addu v1,v1,a1
    sltu v0,v1,a1
    bnez v0,L253824
    addiu a2,a2,-1
    sltu v0,v1,a3
    beqz v0,L253828
    dsll32 v0,t1,0x0
    addu v1,v1,a1
    addiu a2,a2,-1
L253824:
    dsll32 v0,t1,0x0
L253828:
    subu v1,v1,a3
    dsll v0,v0,0x10
    dsra32 v0,v0,0x0
    or a1,v0,a2
    .word 0x00a80019
    mfhi a2
    mflo a0
    sltu v0,v1,a2
    bnezl v0,L253868
    addiu a1,a1,-1
    bne a2,v1,L253870
    .word 0x0000682d
    sltu v0,t4,a0
    beqz v0,L253874
    dsll32 v0,a1,0x0
    addiu a1,a1,-1
L253868:
    .word 0x0000682d
    nop
L253870:
    dsll32 v0,a1,0x0
L253874:
    dsll32 v1,t5,0x0
    dsrl32 t8,v0,0x0
    .word 0x3c05ffff
    dsrl32 a1,a1,0x0
    beqz t7,L2538d4
    or a0,t8,v1
    dsll32 v0,a0,0x0
    dsra32 v0,v0,0x0
    addiu v1,zero,-1
    dsll32 v1,v1,0x0
    negu v0,v0
    and t6,t6,v1
    dsll32 v0,v0,0x0
    dsra32 a0,a0,0x0
    dsrl32 v0,v0,0x0
    negu a0,a0
    or t6,t6,v0
    dsll32 v1,t6,0x0
    dsra32 v1,v1,0x0
    sltu v1,zero,v1
    and t6,t6,a1
    subu a0,a0,v1
    dsll32 a0,a0,0x0
    or a0,t6,a0
L2538d4:
    jr ra
    .word 0x0080102d
}
