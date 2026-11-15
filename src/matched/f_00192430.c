extern void func_00114cf8(void);
extern void func_00114fb8(void);
extern void func_00121728(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-464
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu s4,zero,-1
    sw s4,456(sp)
    sw s4,460(sp)
    lw s7,160(a0)
    .word 0x70a08e28
    .word 0x70c08628
    .word 0x70009e28
    b L1925a8
    .word 0x7000ae28
    addiu t0,zero,4
L192480:
    addiu t1,sp,144
    .word 0x72e02628
    .word 0x70002e28
    .word 0x72203628
    jal func_00114fb8
    .word 0x72a03e28
    bnezl v0, L19259c
    addiu s4,zero,1
    addiu a1,sp,456
    addiu a2,sp,460
    jal func_00114cf8
    .word 0x70002628
    blezl v0, L192590
    addiu s4,zero,1
    lw v1,456(sp)
    addiu v0,zero,13
    bnel v1,v0, L192584
    addiu s4,zero,1
    lw v0,460(sp)
    bltz v0, L192580
    nop
    slti v0,v0,4
    bnez v0, L192528
    addiu s2,sp,144
    addiu s6,sp,144
    .word 0x70009628
L1924e8:
    addiu a1,s6,32
    jal func_00121728
    .word 0x72002628
    bnezl v0, L192510
    addiu s2,s2,1
    sll v0,s2,0x6
    addu v0,v0,sp
    b L1925a0
    addiu s3,v0,144
    addiu s2,s2,1
L192510:
    slti v0,s2,4
    bnez v0, L1924e8
    addiu s6,s6,64
    b L1925a4
    addiu s5,s5,1
    addiu s2,sp,144
L192528:
    b L192560
    .word 0x7000b628
    addiu a1,s2,32
L192534:
    jal func_00121728
    .word 0x72002628
    bnezl v0, L192558
    addiu s2,s2,64
    sll v0,s6,0x6
    addu v0,v0,sp
    b L192570
    addiu s3,v0,144
    addiu s2,s2,64
L192558:
    addiu s6,s6,1
    nop
L192560:
    lw v0,460(sp)
    slt v0,s6,v0
    bnez v0, L192534
    addiu a1,s2,32
L192570:
    bnez s3, L1925a0
    nop
    b L1925a0
    addiu s4,zero,1
L192580:
    addiu s4,zero,1
L192584:
    b L1925a0
    nop
    addiu s4,zero,1
L192590:
    b L1925a0
    nop
    addiu s4,zero,1
L19259c:
    nop
L1925a0:
    addiu s5,s5,1
L1925a4:
    nop
L1925a8:
    bnez s3, L1925bc
    .word 0x72601628
    bltz s4, L192480
    addiu t0,zero,4
    .word 0x72601628
L1925bc:
    .word 0x7bbf0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,464
}
