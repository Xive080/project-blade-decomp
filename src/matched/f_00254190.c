
asm void func(void) {
    .set noreorder
    dsra32 t0,a1,0x0
    dsra32 t3,a0,0x0
    dsll32 t1,a1,0x0
    dsra32 t1,t1,0x0
    dsll32 t4,a0,0x0
    dsra32 t4,t4,0x0
    bnez t0,L254574
    addiu sp,sp,-16
    sltu v0,t3,t1
    beqz v0,L254304
    ori v0,zero,0xffff
    sltu v0,v0,t1
    bnez v0,L2541d8
    .word 0x3c0200ff
    sltiu v0,t1,256
    addiu a1,zero,8
    b L2541f0
    movn a1,zero,v0
L2541d8:
    addiu a1,zero,24
    ori v0,v0,0xffff
    addiu v1,zero,16
    sltu v0,v0,t1
    movz a1,v1,v0
    nop
L2541f0:
    .word 0x3c02002f
    srlv a0,t1,a1
    addiu v0,v0,4840
    addiu a3,zero,32
    addu a0,a0,v0
    .word 0x90830000
    addu v1,v1,a1
    subu a2,a3,v1
    beqz a2,L25422c
    subu v0,a3,a2
    sllv v1,t3,a2
    srlv v0,t4,v0
    sllv t1,t1,a2
    or t3,v1,v0
    sllv t4,t4,a2
L25422c:
    srl a1,t1,0x10
    andi t0,t1,0xffff
    .word 0x0165001b
    srl a0,t4,0x10
    beqzl a1,L254244
    .word 0x000001cd
L254244:
    mflo v0
    mfhi v1
    daddu a3,v0,zero
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00e83018
    or v1,v1,a0
    sltu v0,v1,a2
    beqzl v0,L25429c
    subu v1,v1,a2
    addu v1,v1,t1
    sltu v0,v1,t1
    bnez v0,L254298
    addiu a3,a3,-1
    sltu v0,v1,a2
    beqzl v0,L25429c
    subu v1,v1,a2
    addiu a3,a3,-1
    addu v1,v1,t1
    nop
L254298:
    subu v1,v1,a2
L25429c:
    beqzl a1,L2542a4
    .word 0x000001cd
L2542a4:
    .word 0x0065001b
    andi a0,t4,0xffff
    mflo v0
    mfhi v1
    daddu a1,v0,zero
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00a83018
    or v1,v1,a0
    sltu v0,v1,a2
    beqz v0,L2542f0
    addu v1,v1,t1
    sltu v0,v1,t1
    bnez v0,L2542f0
    addiu a1,a1,-1
    sltu v0,v1,a2
    bnezl v0,L2542f0
    addiu a1,a1,-1
L2542f0:
    dsll32 v0,a3,0x0
    dsll v0,v0,0x10
    dsra32 v0,v0,0x0
    b L254740
    or a1,v0,a1
L254304:
    bnez t1,L254330
    sltu v0,v0,t1
    addiu v0,zero,1
    beqzl t1,L254318
    .word 0x000001cd
L254318:
    .word 0x0048001b
    mflo v0
    daddu t1,v0,zero
    ori v0,zero,0xffff
    sltu v0,v0,t1
    nop
L254330:
    bnez v0,L254348
    .word 0x3c0200ff
    sltiu v0,t1,256
    addiu a1,zero,8
    b L254360
    movn a1,zero,v0
L254348:
    addiu a1,zero,24
    ori v0,v0,0xffff
    addiu v1,zero,16
    sltu v0,v0,t1
    movz a1,v1,v0
    nop
L254360:
    .word 0x3c02002f
    srlv a0,t1,a1
    addiu v0,v0,4840
    addiu a3,zero,32
    addu a0,a0,v0
    .word 0x90830000
    addu v1,v1,a1
    subu a2,a3,v1
    bnez a2,L25439c
    subu a3,a3,a2
    subu t3,t3,t1
    addiu t5,zero,1
    srl t0,t1,0x10
    b L2544a0
    andi t2,t1,0xffff
L25439c:
    sllv v1,t3,a2
    srlv v0,t4,a3
    sllv t1,t1,a2
    srlv a3,t3,a3
    sllv t4,t4,a2
    or t3,v1,v0
    srl t0,t1,0x10
    .word 0x00e8001b
    andi t2,t1,0xffff
    daddu a1,t0,zero
    srl a0,t3,0x10
    beqzl a1,L2543d0
    .word 0x000001cd
L2543d0:
    daddu t5,t2,zero
    mflo v0
    mfhi v1
    daddu a3,v0,zero
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00ea3018
    or v1,v1,a0
    sltu v0,v1,a2
    beqzl v0,L25442c
    subu v1,v1,a2
    addu v1,v1,t1
    sltu v0,v1,t1
    bnez v0,L254428
    addiu a3,a3,-1
    sltu v0,v1,a2
    beqzl v0,L25442c
    subu v1,v1,a2
    addiu a3,a3,-1
    addu v1,v1,t1
    nop
L254428:
    subu v1,v1,a2
L25442c:
    beqzl a1,L254434
    .word 0x000001cd
L254434:
    .word 0x0065001b
    andi a0,t3,0xffff
    mflo v0
    mfhi v1
    daddu a1,v0,zero
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00ad3018
    or v1,v1,a0
    sltu v0,v1,a2
    beqz v0,L254490
    dsll32 v0,a3,0x0
    addu v1,v1,t1
    sltu v0,v1,t1
    bnez v0,L25448c
    addiu a1,a1,-1
    sltu v0,v1,a2
    beqz v0,L254490
    dsll32 v0,a3,0x0
    addiu a1,a1,-1
    addu v1,v1,t1
L25448c:
    dsll32 v0,a3,0x0
L254490:
    subu t3,v1,a2
    dsll v0,v0,0x10
    dsra32 v0,v0,0x0
    or t5,v0,a1
L2544a0:
    daddu a1,t0,zero
    srl a0,t4,0x10
    .word 0x0165001b
    daddu t0,t2,zero
    beqzl a1,L2544b8
    .word 0x000001cd
L2544b8:
    mflo v0
    mfhi v1
    daddu a3,v0,zero
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00e83018
    or v1,v1,a0
    sltu v0,v1,a2
    beqzl v0,L25450c
    subu v1,v1,a2
    addu v1,v1,t1
    sltu v0,v1,t1
    bnez v0,L254508
    addiu a3,a3,-1
    sltu v0,v1,a2
    beqzl v0,L25450c
    subu v1,v1,a2
    addiu a3,a3,-1
    addu v1,v1,t1
L254508:
    subu v1,v1,a2
L25450c:
    beqzl a1,L254514
    .word 0x000001cd
L254514:
    .word 0x0065001b
    andi a0,t4,0xffff
    mflo v0
    mfhi v1
    daddu a1,v0,zero
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00a83018
    or v1,v1,a0
    sltu v0,v1,a2
    beqz v0,L254560
    addu v1,v1,t1
    sltu v0,v1,t1
    bnez v0,L254560
    addiu a1,a1,-1
    sltu v0,v1,a2
    bnezl v0,L254560
    addiu a1,a1,-1
L254560:
    dsll32 v0,a3,0x0
    dsll v0,v0,0x10
    dsra32 v0,v0,0x0
    b L254748
    or a1,v0,a1
L254574:
    sltu v0,t3,t0
    beqz v0,L254588
    ori v0,zero,0xffff
    b L254740
    daddu a1,zero,zero
L254588:
    sltu v0,v0,t0
    bnez v0,L2545a8
    .word 0x3c0200ff
    sltiu v0,t0,256
    addiu a1,zero,8
    b L2545c0
    movn a1,zero,v0
    nop
L2545a8:
    addiu a1,zero,24
    ori v0,v0,0xffff
    addiu v1,zero,16
    sltu v0,v0,t0
    movz a1,v1,v0
    nop
L2545c0:
    .word 0x3c02002f
    srlv a0,t0,a1
    addiu v0,v0,4840
    addiu a3,zero,32
    addu a0,a0,v0
    .word 0x90830000
    addu v1,v1,a1
    subu a2,a3,v1
    bnezl a2,L254608
    subu a3,a3,a2
    sltu v0,t0,t3
    bnez v0,L254740
    addiu a1,zero,1
    sltu v0,t4,t1
    bnez v0,L254740
    daddu a1,zero,zero
    b L254740
    addiu a1,zero,1
L254608:
    sllv a1,t0,a2
    srlv a0,t4,a3
    srlv v1,t1,a3
    srlv a3,t3,a3
    sllv v0,t3,a2
    or t3,v0,a0
    or t0,a1,v1
    sllv t4,t4,a2
    sllv t1,t1,a2
    srl a2,t0,0x10
    .word 0x00e6001b
    andi a1,t0,0xffff
    srl a0,t3,0x10
    beqzl a2,L254644
    .word 0x000001cd
L254644:
    mflo v0
    mfhi v1
    daddu t2,v0,zero
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x01453818
    or v1,v1,a0
    sltu v0,v1,a3
    beqzl v0,L25469c
    subu v1,v1,a3
    addu v1,v1,t0
    sltu v0,v1,t0
    bnez v0,L254698
    addiu t2,t2,-1
    sltu v0,v1,a3
    beqzl v0,L25469c
    subu v1,v1,a3
    addiu t2,t2,-1
    addu v1,v1,t0
    nop
L254698:
    subu v1,v1,a3
L25469c:
    beqzl a2,L2546a4
    .word 0x000001cd
L2546a4:
    .word 0x0066001b
    andi a0,t3,0xffff
    mflo v0
    mfhi v1
    daddu a2,v0,zero
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00c53818
    or v1,v1,a0
    sltu v0,v1,a3
    beqz v0,L254700
    dsll32 v0,t2,0x0
    addu v1,v1,t0
    sltu v0,v1,t0
    bnez v0,L2546fc
    addiu a2,a2,-1
    sltu v0,v1,a3
    beqz v0,L254700
    dsll32 v0,t2,0x0
    addu v1,v1,t0
    addiu a2,a2,-1
L2546fc:
    dsll32 v0,t2,0x0
L254700:
    subu v1,v1,a3
    dsll v0,v0,0x10
    dsra32 v0,v0,0x0
    or a1,v0,a2
    multu a1,t1
    mfhi a2
    mflo a0
    sltu v0,v1,a2
    bnezl v0,L254740
    addiu a1,a1,-1
    bne a2,v1,L254748
    daddu t5,zero,zero
    sltu v0,t4,a0
    beqz v0,L25474c
    dsll32 v1,a1,0x0
    addiu a1,a1,-1
L254740:
    daddu t5,zero,zero
    nop
L254748:
    dsll32 v1,a1,0x0
L25474c:
    dsll32 v0,t5,0x0
    dsrl32 t6,v1,0x0
    or v0,t6,v0
    jr ra
    addiu sp,sp,16
}


