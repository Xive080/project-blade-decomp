extern void func_001709e0(void);
extern void func_0016f910(void);
extern void func_0012a3b0(void);
extern void func_001704f0(void);
extern void func_001c07d0(void);
extern void func_001ccc70(void);
extern void func_00177480(void);
extern void func_001ba520(void);
extern void func_0015c6d0(void);
extern void func_00170560(void);
extern void func_0016e710(void);
extern void func_0016e6a0(void);
extern void func_0025c910(void);
extern void func_0013b570(void);
extern void func_001ca6a0(void);
extern void func_0016efb0(void);
extern void func_00170950(void);
extern void func_001beee0(void);
extern void func_00156cc0(void);
extern void func_0018bc90(void);
extern void func_001b86e0(void);
extern void func_00247a20(void);
extern void func_0013c640(void);
extern void func_0014a540(void);
extern void func_0025e560(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-160
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s0,a0,zero
    bnez s0,L1792f0
    nop
    beqz a2,L1799e8
    addiu v0,zero,1
    addiu a1,zero,1
    jal func_001709e0
    paddub a0,a2,zero
    .word 0x3c010030
    .word 0xac20a624
    .word 0x3c010030
    .word 0x8c22a588
    .word 0x3c010030
    b L1799e4
    .word 0xac22a628
L1792f0:
    beqz a1,L1799c8
    nop
    .word 0x8ca20000
    addiu v1,zero,2359
    beq v0,v1,L1799ac
    nop
    addiu v1,zero,2358
    beq v0,v1,L17999c
    nop
    addiu v1,zero,2357
    beq v0,v1,L17998c
    nop
    addiu v1,zero,2352
    beq v0,v1,L17997c
    nop
    addiu v1,zero,2350
    beq v0,v1,L17996c
    nop
    addiu v1,zero,2349
    beq v0,v1,L1799e4
    nop
    addiu v1,zero,2348
    beql v0,v1,L17995c
    addiu a0,zero,6
    addiu v1,zero,2347
    beq v0,v1,L179928
    nop
    addiu v1,zero,2340
    beql v0,v1,L1798f4
    addiu a0,zero,15
    addiu v1,zero,2339
    beql v0,v1,L1798bc
    addiu a0,zero,10
    addiu v1,zero,2338
    beql v0,v1,L1797c8
    .word 0x3c020001
    addiu v1,zero,2327
    beq v0,v1,L179724
    nop
    addiu v1,zero,2337
    beql v0,v1,L179714
    addiu a0,zero,12
    addiu v1,zero,2324
    beql v0,v1,L1796e0
    addiu a0,zero,13
    addiu v1,zero,2312
    beq v0,v1,L1796ac
    nop
    addiu v1,zero,2310
    beql v0,v1,L179680
    addiu a0,zero,4
    addiu v1,zero,2356
    beq v0,v1,L179664
    nop
    addiu v1,zero,2368
    beq v0,v1,L17964c
    nop
    addiu v1,zero,2336
    beq v0,v1,L179634
    nop
    addiu v1,zero,2318
    beq v0,v1,L179624
    nop
    addiu v1,zero,2341
    beql v0,v1,L179614
    addiu a0,zero,14
    addiu v1,zero,2317
    beql v0,v1,L1795fc
    addiu a0,zero,8
    addiu v1,zero,2309
    beq v0,v1,L1795e8
    nop
    addiu v1,zero,2311
    beq v0,v1,L1795c4
    nop
    addiu v1,zero,2320
    beq v0,v1,L1795a0
    nop
    addiu v1,zero,2322
    beq v0,v1,L179574
    addiu a0,zero,5
    addiu v1,zero,2351
    beq v0,v1,L179544
    addiu a0,zero,24
    addiu v1,zero,2319
    beq v0,v1,L179514
    addiu a0,zero,2
    addiu v1,zero,2308
    beq v0,v1,L1794e4
    addiu a0,zero,1
    addiu v1,zero,22
    beq v0,v1,L1794b8
    .word 0x70002628
    addiu v1,zero,2306
    beq v0,v1,L17949c
    nop
    addiu v1,zero,2305
    beq v0,v1,L179488
    addiu a0,zero,9
    b L1799c0
    .word 0x70001628
    addiu a0,zero,9
L179488:
    jal func_0016f910
    paddub a1,s0,zero
    .word 0x3c010030
    b L1799e4
    .word 0xac22a628
L17949c:
    .word 0x3c010030
    .word 0x8c24a628
    jal func_0012a3b0
    paddub a1,s0,zero
    b L1799e4
    nop
    .word 0x70002628
L1794b8:
    jal func_001704f0
    nop
    paddub a0,s0,zero
    jal func_001c07d0
    paddub s0,v0,zero
    .word 0xae020000
    jal func_001ccc70
    .word 0x70002628
    b L1799e4
    nop
    addiu a0,zero,1
L1794e4:
    jal func_001704f0
    nop
    paddub a0,v0,zero
    .word 0x3c020020
    addiu a3,v0,7168
    .word 0x3c020017
    addiu a2,v0,30672
    jal func_00177480
    paddub a1,s0,zero
    b L1799e4
    nop
    addiu a0,zero,2
L179514:
    jal func_001704f0
    nop
    paddub a0,v0,zero
    .word 0x3c020020
    addiu a2,v0,-25184
    .word 0x3c020020
    addiu a3,v0,-25248
    jal func_00177480
    paddub a1,s0,zero
    b L1799e4
    nop
    addiu a0,zero,24
L179544:
    jal func_001704f0
    nop
    paddub a0,v0,zero
    .word 0x3c020020
    addiu a2,v0,368
    .word 0x3c020020
    addiu a3,v0,256
    jal func_00177480
    paddub a1,s0,zero
    b L1799e4
    nop
    addiu a0,zero,5
L179574:
    jal func_001704f0
    nop
    paddub a0,v0,zero
    .word 0x3c020018
    addiu a2,v0,-20160
    .word 0x3c020018
    addiu a3,v0,-20304
    jal func_00177480
    paddub a1,s0,zero
    b L1799e4
    nop
L1795a0:
    .word 0x3c020015
    addiu a2,v0,-30848
    .word 0x3c020015
    addiu a0,gp,-31976
    addiu a3,v0,-30672
    jal func_00177480
    paddub a1,s0,zero
    b L1799e4
    nop
L1795c4:
    jal func_001ba520
    nop
    beqz v0,L1799e4
    nop
    addiu a0,zero,7
    jal func_0016f910
    .word 0x70002e28
    b L1799e4
    nop
L1795e8:
    jal func_0015c6d0
    nop
    b L1799e4
    nop
    addiu a0,zero,8
L1795fc:
    jal func_0016f910
    paddub a1,s0,zero
    .word 0x3c010030
    b L1799e4
    .word 0xac22a624
    addiu a0,zero,14
L179614:
    jal func_0016f910
    paddub a1,s0,zero
    b L1799e4
    nop
L179624:
    jal func_00170560
    .word 0x8ca50004
    b L1799e4
    nop
L179634:
    .word 0x3c010030
    .word 0x8c26a624
    jal func_0016e710
    .word 0x8ca50004
    b L1799e4
    nop
L17964c:
    .word 0x3c010030
    .word 0x8c26a624
    jal func_0016e6a0
    .word 0x8ca50004
    b L1799e4
    nop
L179664:
    .word 0x3c010030
    .word 0x8c30a624
    jal func_0025c910
    .word 0x8ca50004
    b L1799e4
    .word 0xae020000
    addiu a0,zero,4
L179680:
    jal func_001704f0
    nop
    paddub a0,v0,zero
    .word 0x3c020018
    addiu a2,v0,12704
    .word 0x3c020018
    addiu a3,v0,12624
    jal func_00177480
    paddub a1,s0,zero
    b L1799e4
    nop
L1796ac:
    .word 0x8f828328
    bnez v0,L1796cc
    nop
    addiu a0,gp,-31960
    jal func_0013b570
    paddub a1,s0,zero
    b L1799e4
    nop
L1796cc:
    jal func_001ca6a0
    .word 0x8ca50004
    b L1799e4
    nop
    addiu a0,zero,13
L1796e0:
    jal func_0016f910
    .word 0x70002e28
    .word 0x3c010030
    .word 0x8c22a578
    bnez v0,L1799e4
    nop
    .word 0x3c010030
    .word 0x8c24a57c
    jal func_0016efb0
    addiu a1,zero,2
    b L1799e4
    nop
    addiu a0,zero,12
L179714:
    jal func_0016f910
    .word 0x70002e28
    b L1799e4
    nop
L179724:
    .word 0x3c010030
    .word 0x8c326094
    .word 0x3c010030
    .word 0x8c22a570
    andi v0,v0,0x2
    beqz v0,L17975c
    nop
    jal func_00170950
    nop
    addiu a0,zero,3
    jal func_001709e0
    addiu a1,zero,1
    b L179774
    .word 0x70002628
L17975c:
    jal func_00170950
    nop
    addiu a0,zero,4
    jal func_001709e0
    addiu a1,zero,1
    .word 0x70002628
L179774:
    jal func_001704f0
    nop
    addiu a1,zero,22
    paddub s1,v0,zero
    paddub a0,s0,zero
    .word 0x70003628
    jal func_001beee0
    .word 0x70003e28
    jal func_001c07d0
    paddub a0,s0,zero
    .word 0xae220000
    jal func_001ccc70
    .word 0x70002628
    jal func_00170950
    nop
    paddub a0,s2,zero
    jal func_001709e0
    .word 0x70002e28
    b L1799e4
    nop
    .word 0x3c020001
L1797c8:
    .word 0xafa20040
    .word 0x3c02002e
    .word 0xa3a0004c
    addiu a0,v0,704
    .word 0xafa00090
    .word 0xc4830000
    .word 0xc4820004
    .word 0xc4810008
    .word 0xc480000c
    addiu v1,sp,92
    .word 0x3c010030
    addiu v0,zero,2
    .word 0xe4630000
    .word 0xe4620004
    .word 0xe4610008
    .word 0xe460000c
    .word 0xc4830010
    .word 0xc4820014
    .word 0xc4810018
    .word 0xc480001c
    .word 0xe4630010
    .word 0xe4620014
    .word 0xe4610018
    .word 0xe460001c
    .word 0xc4830020
    .word 0xc4820024
    .word 0xc4810028
    .word 0xc480002c
    .word 0xe4630020
    .word 0xe4620024
    .word 0xe4610028
    .word 0xe460002c
    .word 0xafb00094
    .word 0x8ca40004
    .word 0x8c236094
    bne v1,v0,L179880
    .word 0xafa40098
    .word 0x3c010030
    .word 0x8c23a614
    .word 0x3c010030
    .word 0x9022a61c
    sll v0,v0,0x8
    or v0,v1,v0
    .word 0xafa20044
    b L1798a4
    .word 0xafa00048
L179880:
    .word 0x3c010030
    .word 0x8c24a618
    addiu v0,zero,1
    .word 0x3c010030
    .word 0x9023a61d
    sll v1,v1,0x8
    or v1,a0,v1
    .word 0xafa30044
    .word 0xafa20048
L1798a4:
    addiu a1,sp,64
    jal func_0016f910
    addiu a0,zero,16
    b L1799e4
    nop
    addiu a0,zero,10
L1798bc:
    jal func_001704f0
    nop
    .word 0x3c030030
    addiu v1,v1,15952
    jal func_00156cc0
    .word 0xac430000
    .word 0x8c430000
    .word 0x70002e28
    .word 0x3c020030
    jalr ra,v1
    addiu a0,v0,15952
    b L1799e4
    nop
    addiu a0,zero,15
L1798f4:
    jal func_001704f0
    nop
    .word 0x3c030031
    addiu v1,v1,9936
    jal func_0018bc90
    .word 0xac430000
    .word 0x8c430000
    .word 0x70002e28
    .word 0x3c020031
    jalr ra,v1
    addiu a0,v0,9936
    b L1799e4
    nop
L179928:
    jal func_001b86e0
    nop
    .word 0x3c010030
    .word 0x8c22a578
    bnez v0,L1799e4
    nop
    .word 0x3c010030
    .word 0x8c24a57c
    jal func_0016efb0
    addiu a1,zero,1
    b L1799e4
    nop
    addiu a0,zero,6
L17995c:
    jal func_0016f910
    .word 0x70002e28
    b L1799e4
    nop
L17996c:
    jal func_001ca6a0
    .word 0x8ca50004
    b L1799e4
    nop
L17997c:
    jal func_00247a20
    .word 0x8ca50004
    b L1799e4
    nop
L17998c:
    jal func_0013c640
    .word 0x8ca50004
    b L1799e4
    nop
L17999c:
    jal func_0014a540
    .word 0x8ca50004
    b L1799e4
    nop
L1799ac:
    jal func_0025e560
    .word 0x8ca50004
    b L1799e4
    nop
    .word 0x70001628
L1799c0:
    b L1799ec
    .word 0x7bbf0030
L1799c8:
    beqz a2,L1799e4
    nop
    .word 0x3c010030
    .word 0xac20a624
    .word 0x3c010030
    jal func_00170950
    .word 0xac20a628
L1799e4:
    addiu v0,zero,1
L1799e8:
    .word 0x7bbf0030
L1799ec:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,160
}


