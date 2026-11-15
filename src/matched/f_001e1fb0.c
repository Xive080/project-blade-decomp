extern void func_001c30e0(void);
extern void func_001c3070(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-144
    .word 0x7fbf0000
    andi a0,a2,0x7
    .word 0xa0a40020
    addiu a0,zero,-8
    and a0,a2,a0
    .word 0xa0a40021
    .word 0x90a70020
    andi v0,a2,0xf00
    andi t0,a2,0x9000
    andi v1,a2,0x6000
    addiu a2,zero,1
    beq a3,a2,L1e246c
    nop
    addiu a0,zero,2
    beq a3,a0,L1e2380
    nop
    addiu a0,zero,4
    beq a3,a0,L1e2054
    nop
    addiu a0,zero,5
    beq a3,a0,L1e201c
    nop
    beqz a3,L1e201c
    nop
    b L1e2568
    .word 0x70001628
L1e201c:
    bnezl v1,L1e2030
    addiu v0,zero,1
    beqz t0,L1e2054
    nop
    addiu v0,zero,1
L1e2030:
    .word 0xafa20010
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa20014
    jal func_001c3070
    addiu a0,sp,16
    b L1e2574
    .word 0x70001628
L1e2054:
    bnez v0,L1e20dc
    or a0,v0,t0
    .word 0x8ca40014
    addiu v0,zero,16
    beq a0,v0,L1e20d8
    addiu v0,zero,256
    addiu v0,zero,32
    beq a0,v0,L1e20cc
    addiu v0,zero,1280
    addiu v0,zero,24
    beq a0,v0,L1e20c0
    addiu v0,zero,1536
    addiu v0,zero,8
    beq a0,v0,L1e20b4
    addiu v0,zero,8448
    addiu v0,zero,4
    beq a0,v0,L1e20a8
    addiu v0,zero,16640
    b L1e20d4
    nop
    addiu v0,zero,16640
L1e20a8:
    b L1e20d8
    nop
    addiu v0,zero,8448
L1e20b4:
    b L1e20d8
    nop
    addiu v0,zero,1536
L1e20c0:
    b L1e20d8
    nop
    addiu v0,zero,1280
L1e20cc:
    b L1e20d8
    nop
L1e20d4:
    addiu v0,zero,256
L1e20d8:
    or a0,v0,t0
L1e20dc:
    or a0,v1,a0
    sra a0,a0,0x8
    .word 0xa0a40023
    addiu a0,zero,8192
    beq v1,a0,L1e22d0
    nop
    addiu a0,zero,16384
    beq v1,a0,L1e2248
    nop
    beqz v1,L1e2114
    addiu v1,zero,1280
    b L1e235c
    addiu v0,zero,1
    addiu v1,zero,1280
L1e2114:
    beq v0,v1,L1e21d4
    nop
    addiu v1,zero,1536
    beq v0,v1,L1e2188
    nop
    addiu v1,zero,256
    beq v0,v1,L1e213c
    nop
    b L1e2224
    addiu v0,zero,1
L1e213c:
    .word 0x8ca30014
    beqz v1,L1e2180
    addiu v0,zero,16
    addiu v0,zero,16
    beq v1,v0,L1e217c
    nop
    addiu v0,zero,1
    .word 0xafa20018
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xc
    .word 0xafa2001c
    jal func_001c3070
    addiu a0,sp,24
    b L1e2574
    .word 0x70001628
L1e217c:
    addiu v0,zero,16
L1e2180:
    b L1e2570
    .word 0xaca20014
L1e2188:
    .word 0x8ca30014
    beqz v1,L1e21cc
    addiu v0,zero,24
    addiu v0,zero,24
    beq v1,v0,L1e21c8
    nop
    addiu v0,zero,1
    .word 0xafa20020
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xc
    .word 0xafa20024
    jal func_001c3070
    addiu a0,sp,32
    b L1e2574
    .word 0x70001628
L1e21c8:
    addiu v0,zero,24
L1e21cc:
    b L1e2570
    .word 0xaca20014
L1e21d4:
    .word 0x8ca30014
    beqz v1,L1e2218
    addiu v0,zero,32
    addiu v0,zero,32
    beq v1,v0,L1e2214
    nop
    addiu v0,zero,1
    .word 0xafa20028
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xc
    .word 0xafa2002c
    jal func_001c3070
    addiu a0,sp,40
    b L1e2574
    .word 0x70001628
L1e2214:
    addiu v0,zero,32
L1e2218:
    b L1e2570
    .word 0xaca20014
    addiu v0,zero,1
L1e2224:
    .word 0xafa20030
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa20034
    jal func_001c3070
    addiu a0,sp,48
    b L1e2574
    .word 0x70001628
L1e2248:
    .word 0x8ca40014
    beqz a0,L1e228c
    addiu v1,zero,4
    addiu v1,zero,4
    beq a0,v1,L1e2288
    nop
    addiu v0,zero,1
    .word 0xafa20038
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xc
    .word 0xafa2003c
    jal func_001c3070
    addiu a0,sp,56
    b L1e2574
    .word 0x70001628
L1e2288:
    addiu v1,zero,4
L1e228c:
    .word 0xaca30014
    addiu v1,zero,1280
    beql v0,v1,L1e2574
    addiu v0,zero,1
    addiu v1,zero,256
    beq v0,v1,L1e2570
    nop
    addiu v0,zero,1
    .word 0xafa20040
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa20044
    jal func_001c3070
    addiu a0,sp,64
    b L1e2574
    .word 0x70001628
L1e22d0:
    .word 0x8ca40014
    beqz a0,L1e2314
    addiu v1,zero,8
    addiu v1,zero,8
    beq a0,v1,L1e2310
    nop
    addiu v0,zero,1
    .word 0xafa20048
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xc
    .word 0xafa2004c
    jal func_001c3070
    addiu a0,sp,72
    b L1e2574
    .word 0x70001628
L1e2310:
    addiu v1,zero,8
L1e2314:
    .word 0xaca30014
    addiu v1,zero,1280
    beq v0,v1,L1e2570
    nop
    addiu v1,zero,256
    beq v0,v1,L1e2570
    nop
    addiu v0,zero,1
    .word 0xafa20050
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa20054
    jal func_001c3070
    addiu a0,sp,80
    b L1e2574
    .word 0x70001628
    addiu v0,zero,1
L1e235c:
    .word 0xafa20058
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa2005c
    jal func_001c3070
    addiu a0,sp,88
    b L1e2574
    .word 0x70001628
L1e2380:
    bnezl t0,L1e2394
    addiu v0,zero,1
    beqz v1,L1e23b8
    nop
    addiu v0,zero,1
L1e2394:
    .word 0xafa20060
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa20064
    jal func_001c3070
    addiu a0,sp,96
    b L1e2574
    .word 0x70001628
L1e23b8:
    .word 0x8ca70014
    beqz a3,L1e2408
    nop
    .word 0x8f8487a8
    .word 0x3c03002e
    addiu v1,v1,18136
    sll a0,a0,0x4
    addu v1,v1,a0
    .word 0x8c630000
    beq a3,v1,L1e2408
    nop
    .word 0x3c028000
    .word 0xafa60068
    jal func_001c30e0
    ori a0,v0,0xc
    .word 0xafa2006c
    jal func_001c3070
    addiu a0,sp,104
    b L1e2574
    .word 0x70001628
L1e2408:
    .word 0x8f8487a8
    .word 0x3c03002e
    addiu v1,v1,18136
    sll a0,a0,0x4
    addu v1,v1,a0
    .word 0x8c630000
    beqz v0,L1e245c
    .word 0xaca30014
    .word 0x8f8387a4
    beq v0,v1,L1e245c
    nop
    addiu v0,zero,1
    .word 0xafa20070
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa20074
    jal func_001c3070
    addiu a0,sp,112
    b L1e2574
    .word 0x70001628
L1e245c:
    .word 0x8f8287a4
    sra v0,v0,0x8
    b L1e2570
    .word 0xa0a20023
L1e246c:
    bnezl t0,L1e2480
    addiu v0,zero,1
    beqz v1,L1e24a4
    nop
    addiu v0,zero,1
L1e2480:
    .word 0xafa20078
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa2007c
    jal func_001c3070
    addiu a0,sp,120
    b L1e2574
    .word 0x70001628
L1e24a4:
    .word 0x8ca40014
    beqzl a0,L1e24e4
    addiu a2,gp,-32432
    .word 0x8f838150
    beq a0,v1,L1e24e0
    nop
    .word 0x3c028000
    .word 0xafa60080
    jal func_001c30e0
    ori a0,v0,0xc
    .word 0xafa20084
    jal func_001c3070
    addiu a0,sp,128
    b L1e2574
    .word 0x70001628
L1e24e0:
    addiu a2,gp,-32432
L1e24e4:
    .word 0x8cc30000
    beqz v0,L1e253c
    .word 0xaca30014
    .word 0x8cc40000
    addiu v1,zero,16
    bne a0,v1,L1e250c
    addiu v1,zero,2304
    b L1e250c
    addiu v1,zero,1792
    addiu v1,zero,2304
L1e250c:
    beq v0,v1,L1e253c
    nop
    addiu v0,zero,1
    .word 0xafa20088
    .word 0x3c028000
    jal func_001c30e0
    ori a0,v0,0xd
    .word 0xafa2008c
    jal func_001c3070
    addiu a0,sp,136
    b L1e2574
    .word 0x70001628
L1e253c:
    .word 0x8cc30000
    addiu v0,zero,16
    bne v1,v0,L1e2558
    addiu v0,zero,2304
    b L1e2558
    addiu v0,zero,1792
    addiu v0,zero,2304
L1e2558:
    sra v0,v0,0x8
    b L1e2570
    .word 0xa0a20023
    .word 0x70001628
L1e2568:
    b L1e2578
    .word 0x7bbf0000
L1e2570:
    addiu v0,zero,1
L1e2574:
    .word 0x7bbf0000
L1e2578:
    jr ra
    addiu sp,sp,144
}


