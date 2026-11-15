extern void func_001f41b0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x90a20023
    .word 0x70c08e28
    andi v0,v0,0x60
    beqz v0,L1e72fc
    .word 0x70a08628
    andi s3,s1,0x1
    beqz s3,L1e72c0
    .word 0x70809628
    jal func_001f41b0
    .word 0x72002628
L1e72c0:
    .word 0x8e020008
    beqz s3,L1e72d8
    .word 0xae420000
    .word 0x92020022
    ori v0,v0,0x10
    .word 0xa2020022
L1e72d8:
    andi v0,s1,0x2
    beqz v0,L1e72f4
    addiu v0,zero,1
    .word 0x92020022
    ori v0,v0,0x8
    .word 0xa2020022
    addiu v0,zero,1
L1e72f4:
    b L1e7304
    .word 0x7bbf0040
L1e72fc:
    .word 0x70001628
    .word 0x7bbf0040
L1e7304:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,80
}
