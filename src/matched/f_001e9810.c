extern void func_001c7080(void);
extern void func_001ce090(void);
extern void func_001dece0(void);
extern void func_001e7e70(void);
extern void func_001e80e0(void);
extern void func_001e8200(void);
extern void func_001e8650(void);
extern void func_001e9cf0(void);
extern void func_001ea760(void);
extern void func_001ea7f0(void);
extern void func_001f1210(void);
extern void func_001f1250(void);
extern void func_001f3b10(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    sltiu at,a0,20
    beqz at, L1e9a4c
    .word 0x70008628
    .word 0x3c03002f
    sll v0,a0,0x2
    addiu v1,v1,1968
    addu v0,v0,v1
    lw v0,0(v0)
    jr v0
    nop
    .word 0x8f8287a0
    sltu v0,zero,v0
    xori s0,v0,0x1
    beqz s0, L1e985c
    nop
    slti s0,a3,88
L1e985c:
    beqz s0, L1e9a50
    .word 0x72001628
    .word 0x3c02002e
    sll v1,a3,0x4
    addiu v0,v0,18136
    .word 0xaf8787a8
    addu v0,v0,v1
    lw v1,0(v0)
    addiu v0,zero,32
    bne v1,v0, L1e9898
    addiu v0,zero,256
    addiu v0,zero,1280
    b L1e989c
    .word 0xaf8287a4
    addiu v0,zero,256
L1e9898:
    .word 0xaf8287a4
L1e989c:
    b L1e9a4c
    nop
    addiu v0,zero,88
    sw v0,0(a1)
    b L1e9a4c
    addiu s0,zero,1
    slti s0,a3,88
    beqz s0, L1e9a4c
    nop
    .word 0x3c02002e
    sll v1,a3,0x4
    addiu v0,v0,18128
    addu v0,v0,v1
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0xe4a30000
    .word 0xe4a20004
    .word 0xe4a10008
    .word 0xe4a0000c
    b L1e9a4c
    nop
    .word 0x8f8287a8
    addiu s0,zero,1
    b L1e9a4c
    sw v0,0(a1)
    b L1e9a4c
    addiu s0,zero,1
    .word 0x70a02628
    jal func_001e80e0
    .word 0x70c02e28
    b L1e9a4c
    .word 0x70408628
    jal func_001e8200
    nop
    b L1e9a4c
    .word 0x70408628
    b L1e9a4c
    addiu s0,zero,1
    jal func_001e8650
    nop
    b L1e9a4c
    .word 0x70408628
    jal func_001dece0
    nop
    jal func_001f3b10
    nop
    addiu s0,zero,1
    .word 0xaf8087a0
    .word 0xaf8086e8
    b L1e9a4c
    .word 0xaf908130
    jal func_001f1210
    nop
    jal func_001ea760
    nop
    sltu s0,zero,v0
    beqz s0, L1e9998
    nop
    jal func_001e9cf0
    nop
    sltu s0,zero,v0
L1e9998:
    bnez s0, L1e99b0
    nop
    jal func_001f1250
    nop
    b L1e99d0
    nop
L1e99b0:
    .word 0x3c02001f
    jal func_001c7080
    addiu a0,v0,-25104
    .word 0x3c02001f
    addiu a0,v0,-24976
    .word 0x3c02001f
    jal func_001ce090
    addiu a1,v0,-24832
L1e99d0:
    b L1e9a4c
    nop
    jal func_001ea7f0
    nop
    jal func_001f1250
    nop
    b L1e9a4c
    addiu s0,zero,1
    addiu v0,zero,1024
    sw v0,0(a1)
    b L1e9a4c
    addiu s0,zero,1
    .word 0x8f9087a0
    beqz s0, L1e9a4c
    nop
    .word 0x8f828770
    .word 0x3c030010
    subu v0,v1,v0
    sll v0,v0,0x2
    sw v0,0(a1)
    b L1e9a4c
    nop
    b L1e9a4c
    addiu s0,zero,1
    .word 0x70a02628
    .word 0x70e02e28
    .word 0x3c02002e
    addiu a2,v0,19680
    jal func_001e7e70
    addiu a3,zero,28
    addiu s0,zero,1
L1e9a4c:
    .word 0x72001628
L1e9a50:
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
