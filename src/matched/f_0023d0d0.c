extern void fn_1c2510(void);
extern void fn_1c3b80(void);
extern void fn_1c7710(void);
extern void fn_1c7340(void);
extern void fn_1dcd40(void);
extern void fn_2103e0(void);
extern void fn_210060(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-304
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xafa500ac
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c830000
    .word 0x8c530000
    .word 0x8c900004
    .word 0x70c0b628
    .word 0x7080f628
    .word 0x70008e28
    .word 0x8c620008
    bnez v0,L23d134
    addiu s7,zero,1
    .word 0xaf97899c
    .word 0xaf9789a0
L23d134:
    .word 0x8c630000
    .word 0x8f828990
    .word 0x8c630008
    addu v0,v1,v0
    .word 0x8c520000
    beqz s2,L23d390
    nop
    .word 0x8e510080
    b L23d380
    .word 0x7000a628
L23d15c:
    addu a0,v0,s2
    .word 0x8c830030
    addiu v0,zero,1
    bne v1,v0,L23d290
    sll v0,s4,0x6
    .word 0x8f82899c
    bnez v0,L23d194
    sll v0,s4,0x6
    .word 0x8c830000
    .word 0x8f8289b0
    beq v1,v0,L23d234
    sll v0,s4,0x6
    nop
    sll v0,s4,0x6
L23d194:
    addu v0,s2,v0
    .word 0x8c420000
    bnez v0,L23d1b8
    .word 0x72602628
    jal fn_1c2510
    nop
    sll v1,s4,0x6
    addu v1,s2,v1
    .word 0xac620000
L23d1b8:
    .word 0x8e030000
    addiu v0,zero,1
    bne v1,v0,L23d210
    sll v0,s4,0x6
    sll v0,s4,0x6
    addu v0,s2,v0
    .word 0x8e150004
    jal fn_1c3b80
    .word 0x8c440000
    .word 0x70402e28
    jal fn_1c7710
    addiu a0,sp,176
    jal fn_1c3b80
    .word 0x8ea40004
    .word 0x70402e28
    .word 0x3c020033
    addiu a0,v0,10848
    jal fn_1c7340
    addiu a2,sp,176
    b L23d230
    nop
    sll v0,s4,0x6
L23d210:
    addu v0,s2,v0
    jal fn_1c3b80
    .word 0x8c440000
    .word 0x70402e28
    .word 0x3c020033
    jal fn_1c7710
    addiu a0,v0,10848
    nop
L23d230:
    sll v0,s4,0x6
L23d234:
    addu v0,s2,v0
    .word 0x8c420000
    .word 0xc7808284
    .word 0xaf8289b0
    .word 0xaf80899c
    .word 0xc6610084
    c.eq.s $f1,$f0
    nop
    bc1tl L23d37c
    addiu s4,s4,1
    .word 0xe7818284
    .word 0xc6620080
    .word 0xc7818284
    .word 0x3c023f80
    .word 0x44820000
    nop
    sub.s $f1,$f1,$f2
    div.s $f0,$f0,$f1
    nop
    nop
    b L23d378
    .word 0xe7808280
    sll v0,s4,0x6
L23d290:
    addu a0,v0,s2
    .word 0x8c830030
    addiu v0,zero,2
    bne v1,v0,L23d378
    nop
    .word 0x8f8289a0
    bnez v0,L23d2c4
    sll v0,s4,0x6
    .word 0x8c830000
    .word 0x8f8289c0
    beq v1,v0,L23d364
    sll v0,s4,0x6
    sll v0,s4,0x6
L23d2c4:
    addu v0,s2,v0
    .word 0x8c420000
    bnez v0,L23d2e8
    .word 0x72602628
    jal fn_1c2510
    nop
    sll v1,s4,0x6
    addu v1,s2,v1
    .word 0xac620000
L23d2e8:
    .word 0x8e030000
    addiu v0,zero,1
    bne v1,v0,L23d340
    sll v0,s4,0x6
    sll v0,s4,0x6
    addu v0,s2,v0
    .word 0x8e150004
    jal fn_1c3b80
    .word 0x8c440000
    .word 0x70402e28
    jal fn_1c7710
    addiu a0,sp,240
    jal fn_1c3b80
    .word 0x8ea40004
    .word 0x70402e28
    .word 0x3c020033
    addiu a0,v0,10784
    jal fn_1c7340
    addiu a2,sp,240
    b L23d360
    nop
    sll v0,s4,0x6
L23d340:
    addu v0,s2,v0
    jal fn_1c3b80
    .word 0x8c440000
    .word 0x70402e28
    .word 0x3c020033
    jal fn_1c7710
    addiu a0,v0,10784
    nop
L23d360:
    sll v0,s4,0x6
L23d364:
    addu v0,s2,v0
    .word 0x8c420000
    .word 0xaf8289c0
    .word 0xaf8089a0
    nop
L23d378:
    addiu s4,s4,1
L23d37c:
    nop
L23d380:
    sltiu v0,s4,2
    bnez v0,L23d15c
    sll v0,s4,0x6
    nop
L23d390:
    .word 0x3c010033
    .word 0x8c23e620
    .word 0x8ec20000
    beq v0,s1,L23d478
    .word 0x8c700008
    addiu a0,zero,1
    jal fn_1dcd40
    addiu a1,zero,-2
    .word 0x3c031000
    dsll32 v1,v1,0x0
    ori v1,v1,0x8003
    addiu v0,zero,14
    pcpyld a0,v0,v1
    .word 0x8f828690
    addiu v1,zero,66
    .word 0x7c440000
    .word 0x8f828690
    .word 0xdf848738
    addiu v0,v0,16
    .word 0xaf828690
    pcpyld a0,v1,a0
    .word 0x8f828690
    addiu v1,zero,71
    .word 0x7c440000
    .word 0x8f828690
    .word 0xdf848710
    addiu v0,v0,16
    .word 0xaf828690
    pcpyld a0,v1,a0
    .word 0x8f828690
    addiu v1,zero,61
    .word 0x7c440000
    .word 0x8f828690
    .word 0xdf848720
    addiu v0,v0,16
    .word 0xaf828690
    pcpyld a0,v1,a0
    .word 0x8f828690
    .word 0x7c440000
    .word 0x8f828690
    addiu v0,v0,16
    bnez s1,L23d450
    .word 0xaf828690
    .word 0x72002628
    jal fn_2103e0
    .word 0x70002e28
    b L23d468
    sll v0,s1,0x2
L23d450:
    .word 0x8ec20000
    bnez v0,L23d464
    .word 0x72002628
    jal fn_2103e0
    addiu a1,zero,1
L23d464:
    sll v0,s1,0x2
L23d468:
    addu v0,v0,s6
    .word 0x8c450018
    jal fn_210060
    .word 0x72002628
L23d478:
    sll v0,s1,0x2
    addu v0,v0,s6
    .word 0x8c420004
    beqz v0,L23d49c
    nop
    .word 0x8fa500ac
    jalr ra,v0
    .word 0x73c02628
    .word 0x7040be28
L23d49c:
    .word 0xaed10000
    .word 0x72e01628
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,304
}

