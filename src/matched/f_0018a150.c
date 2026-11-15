extern void func_0018a050(void);
extern void func_0018a150(void);
extern void func_0018a380(void);
extern void func_0018b8e0(void);
extern void func_0018b9a0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-144
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x70809e28
    .word 0x7fb00010
    .word 0x70a09628
    .word 0x70c08e28
    .word 0xe7b40000
    addiu a1,s3,16
    mov.s $f20,$f12
    addiu a2,sp,96
    addiu t1,s3,12
    addiu a3,zero,40
    jal func_0018a380
    .word 0x72604628
    bnez v0, L18a204
    andi v1,s1,0x2
    lw s0,100(s3)
    beqz s0, L18a1cc
    addiu a0,s3,96
L18a1a8:
    jal func_0018a050
    addiu a0,s0,8
    lw s0,4(s0)
    nop
    nop
    bnez s0, L18a1a8
    nop
    nop
    addiu a0,s3,96
L18a1cc:
    jal func_0018b8e0
    nop
    jal func_0018b8e0
    .word 0x72602628
    lw v0,8(s3)
    addiu a1,s3,-8
    addiu v0,v0,1
    sw v0,8(s3)
    lw v0,104(s3)
    jal func_0018b9a0
    addiu a0,v0,96
    b L18a35c
    .word 0x7bbf0050
    andi v1,s1,0x2
L18a204:
    beqz v1, L18a210
    nop
    ori s1,s1,0x1
L18a210:
    lw v1,12(s3)
    or s1,s1,v1
    andi v1,s1,0x1
    beqz v1, L18a264
    addiu s0,s3,56
    .word 0xc7a70060
    .word 0xc6400008
    .word 0xc641000c
    .word 0xc6440000
    .word 0xc7a60064
    .word 0xc6430010
    .word 0xc6420004
    mul.s $f5,$f7,$f0
    .word 0xc6400014
    mul.s $f1,$f7,$f1
    adda.s $f4,$f5
    madd.s $f3,$f6,$f3
    adda.s $f2,$f1
    madd.s $f0,$f6,$f0
    .word 0xe6000004
    .word 0xe6030000
L18a264:
    andi v1,s1,0x2
    beqz v1, L18a2d4
    andi v1,s1,0x8
    .word 0xc7a50068
    .word 0xc6430008
    .word 0xc7a4006c
    .word 0xc6420010
    .word 0xc641000c
    .word 0xc6400014
    mula.s $f5,$f3
    madd.s $f2,$f4,$f2
    mula.s $f5,$f1
    madd.s $f0,$f4,$f0
    .word 0xe600000c
    .word 0xe6020008
    .word 0xc7a50070
    .word 0xc6430008
    .word 0xc7a40074
    .word 0xc6420010
    .word 0xc641000c
    .word 0xc6400014
    mula.s $f5,$f3
    madd.s $f2,$f4,$f2
    mula.s $f5,$f1
    madd.s $f0,$f4,$f0
    .word 0xe6000014
    .word 0xe6020010
    andi v1,s1,0x8
L18a2d4:
    beqz v1, L18a31c
    nop
    .word 0xc7a10078
    .word 0xc6400018
    mul.s $f0,$f1,$f0
    .word 0xe6000018
    .word 0xc7a1007c
    .word 0xc640001c
    mul.s $f0,$f1,$f0
    .word 0xe600001c
    .word 0xc7a10080
    .word 0xc6400020
    mul.s $f0,$f1,$f0
    .word 0xe6000020
    .word 0xc6400024
    .word 0xc7a10084
    mul.s $f0,$f1,$f0
    .word 0xe6000024
L18a31c:
    lw s2,100(s3)
    beqz s2, L18a348
    nop
    addiu a0,s2,8
L18a32c:
    mov.s $f12,$f20
    lw s2,4(s2)
    .word 0x72002e28
    jal func_0018a150
    .word 0x72203628
    bnez s2, L18a32c
    addiu a0,s2,8
L18a348:
    lw a0,12(s3)
    addiu v1,zero,-12
    and v1,a0,v1
    sw v1,12(s3)
    .word 0x7bbf0050
L18a35c:
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,144
}
