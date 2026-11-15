extern void func_001c7340(void);
extern void func_0021d160(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c900008
    paddub s2,a0,zero
    paddub s1,a1,zero
    paddub a1,s2,zero
    jal func_0021d160
    paddub a0,s0,zero
    addiu v0,zero,8184
    .word 0xae420014
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420000
    .word 0x8e050004
    beqz a1,L21d2fc
    addiu a2,v0,32
    jal func_001c7340
    .word 0x8e240000
    b L21d304
    addiu v0,zero,1
L21d2fc:
    .word 0xae260000
    addiu v0,zero,1
L21d304:
    .word 0xafa2004c
    .word 0x8e020000
    andi v0,v0,0x4
    beqz v0,L21d320
    addiu v1,sp,76
    addiu v0,zero,2
    .word 0xac620000
L21d320:
    .word 0x8e42000c
    addiu a1,zero,1
    .word 0x8c430000
    andi v0,v1,0x1
    bne v0,a1,L21d368
    .word 0x8fa6004c
    addiu v0,zero,4
    .word 0xa2420029
    addiu v0,zero,2
    bne a2,v0,L21d358
    nop
    .word 0x938287cc
    b L21d414
    .word 0xa2420028
L21d358:
    .word 0x838287cc
    ori v0,v0,0x2
    b L21d414
    .word 0xa2420028
L21d368:
    andi v0,v1,0x2
    addiu a0,zero,2
    beq v0,a0,L21d388
    addiu v0,zero,3
    andi v0,v1,0xff
    bnezl v0,L21d3b8
    andi v1,v1,0x10
    addiu v0,zero,3
L21d388:
    .word 0xa2420029
    addiu v0,zero,2
    bne a2,v0,L21d3a8
    nop
    .word 0x838287cc
    ori v0,v0,0x4
    b L21d414
    .word 0xa2420028
L21d3a8:
    .word 0x838287cc
    ori v0,v0,0x6
    b L21d414
    .word 0xa2420028
L21d3b8:
    addiu v0,zero,16
    bne v1,v0,L21d3f0
    nop
    bne a2,a0,L21d3d8
    nop
    .word 0x938287cc
    b L21d3e4
    .word 0xa2420028
L21d3d8:
    .word 0x838287cc
    ori v0,v0,0x2
    .word 0xa2420028
L21d3e4:
    addiu v0,zero,4
    b L21d414
    .word 0xa2420029
L21d3f0:
    bne a2,a0,L21d408
    .word 0xa2450029
    .word 0x838287cc
    ori v0,v0,0x14
    b L21d414
    .word 0xa2420028
L21d408:
    .word 0x838287cc
    ori v0,v0,0x16
    .word 0xa2420028
L21d414:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,80
}
