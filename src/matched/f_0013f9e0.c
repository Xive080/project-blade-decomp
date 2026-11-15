extern void func_00136490(void);
extern void func_00139960(void);
extern void func_00149e60(void);
extern void func_001c3b70(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x70808628
    jal func_00149e60
    .word 0x70a08e28
    .word 0x8c420018
    jalr ra,v0
    .word 0x8e240008
    jal func_001c3b70
    .word 0x70402628
    .word 0x3c017000
    .word 0x8e020008
    .word 0x8c233fb8
    beq v0,v1,L13fa9c
    .word 0x72001628
    .word 0xae030008
    .word 0x8e240008
    addiu v0,zero,4096
    .word 0x8c83003c
    bne v1,v0,L13fa5c
    addiu v0,zero,16384
    .word 0x72202628
    jal func_00139960
    .word 0x72002e28
    beqz v0,L13fa98
    nop
    b L13fa9c
    .word 0x70001628
    addiu v0,zero,16384
L13fa5c:
    beql v1,v0,L13fa80
    .word 0x72202628
    addiu v0,zero,2048
    bne v1,v0,L13fa98
    nop
    .word 0x8c820558
    beqz v0,L13fa98
    nop
    .word 0x72202628
L13fa80:
    jal func_00136490
    .word 0x72002e28
    beqz v0,L13fa98
    nop
    b L13fa9c
    .word 0x70001628
L13fa98:
    .word 0x72001628
L13fa9c:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
