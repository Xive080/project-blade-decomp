extern void func_001a8600(void);
extern void func_001a8e80(void);
extern void func_001c3b70(void);
extern void func_00234ff0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    addiu v0,zero,3
    .word 0xe7b40000
    beq a1,v0, L179f70
    .word 0x70809e28
    addiu v0,zero,2
    beql a1,v0, L179f48
    addiu s1,s3,220
    addiu v0,zero,1
    beql a1,v0, L179f3c
    addiu s1,s3,336
    b L179f7c
    lw v0,12(s3)
    addiu s1,s3,336
L179f3c:
    b L179f78
    addiu s2,s3,452
    addiu s1,s3,220
L179f48:
    beqz s1, L179f68
    .word 0x70009628
    lw v0,20(s1)
    andi v0,v0,0x1
    beqz v0, L179f64
    nop
    .word 0x70008e28
L179f64:
    .word 0x70009628
L179f68:
    b L179f78
    nop
L179f70:
    addiu s1,s3,568
    addiu s2,s3,684
L179f78:
    lw v0,12(s3)
L179f7c:
    lw v0,24(v0)
    jalr ra,v0
    .word 0x72602628
    jal func_001c3b70
    .word 0x70402628
    beqz s1, L179fb4
    .word 0x70408628
    lw v0,16(s1)
    beqz v0, L179fb4
    nop
    addiu a1,s0,48
    .word 0x72202628
    jal func_001a8600
    .word 0x70003628
L179fb4:
    beqz s2, L17a044
    nop
    lw v0,16(s2)
    beqz v0, L17a044
    nop
    .word 0x3c017000
    .word 0xc4343fb0
    .word 0xc6600320
    c.lt.s $f20,$f0
    nop
    bc1t L17a044
    nop
    jal func_00234ff0
    nop
    andi v0,v0,0x7fff
    .word 0x44820000
    .word 0x3c054700
    cvt.s.w $f2,$f0
    .word 0x3c0340a0
    .word 0x3c024120
    .word 0x72402628
    .word 0x44850800
    .word 0x44830000
    nop
    div.s $f1,$f2,$f1
    mul.s $f1,$f1,$f0
    add.s $f1,$f20,$f1
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    jal func_001a8e80
    .word 0xe6600320
    addiu a1,s0,48
    .word 0x72402628
    jal func_001a8600
    .word 0x70003628
L17a044:
    .word 0x7bbf0050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,96
}
