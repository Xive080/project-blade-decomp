extern void func_00132b30(void);
extern void func_00133100(void);
extern void func_00133120(void);
extern void func_0016f380(void);
extern void func_00242e00(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,5
    paddub s0,a1,zero
    beq s0,v0,L22635c
    paddub s1,a0,zero
    addiu v0,zero,9
    beq s0,v0,L226320
    addiu a0,zero,4
    addiu v0,zero,8
    beq s0,v0,L2262f0
    nop
    b L226368
    addiu v0,zero,1
L2262f0:
    .word 0x3c010030
    .word 0x8c24a620
    .word 0x3c010030
    .word 0x9023a61f
    sll v0,v1,0x2
    addu v0,v0,v1
    sll v0,v0,0x1
    jal func_0016f380
    addu a0,a0,v0
    b L226364
    nop
    addiu a0,zero,4
L226320:
    jal func_00133100
    nop
    addiu v1,zero,1
    .word 0xac430010
    addiu v1,zero,-1
    addiu a0,zero,4
    jal func_00133120
    .word 0xac430014
    .word 0x3c010030
    .word 0x9024a61f
    .word 0x3c010030
    jal func_00132b30
    .word 0x8c25a620
    b L226364
    nop
L22635c:
    b L226368
    paddub v0,zero,zero
L226364:
    addiu v0,zero,1
L226368:
    beqz v0,L22637c
    nop
    paddub a0,s1,zero
    jal func_00242e00
    paddub a1,s0,zero
L22637c:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,48
}
