extern void func_00109d00(void);
extern void func_00109d20(void);
extern void func_0011eac8(void);
extern void func_0011fe10(void);
extern void func_001214b8(void);
extern void func_001aa740(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-176
    .word 0x7fbf0020
    .word 0x7fb00010
    .word 0xe7b40000
    paddub s0,a0,zero
    .word 0x8f84806c
    jal func_00109d20
    mov.s $f20,$f12
    .word 0x3c02467f
    ori v0,v0,0xfc00
    mtc1 v0,$f0
    .word 0x3c010032
    .word 0xac307740
    mul.s $f0,$f0,$f20
    .word 0x3c010031
    .word 0x8c2976b0
    .word 0x8f82852c
    .word 0x46000024
    addiu v1,t1,1
    sll s0,v1,0x3
    mfc1 v1,$f0
    .word 0x3c010032
    beqz v0,L1a7794
    .word 0xac237744
    .word 0x3c020032
    addiu v0,v0,30528
    .word 0x8c470000
    addiu a0,sp,48
    addiu t3,zero,8
    ori a2,zero,32816
    .word 0x3c020032
    addiu v0,v0,30528
    .word 0x8c480004
    paddub t2,s0,zero
    .word 0x3c02002f
    jal func_001214b8
    addiu a1,v0,176
    .word 0x3c02002f
    addiu a0,v0,272
    jal func_0011fe10
    addiu a1,sp,48
L1a7794:
    .word 0x3c010031
    addiu v0,s0,1
    .word 0x8c2476b4
    sll v1,v0,0x2
    .word 0x3c020032
    addiu a1,v0,30528
    sll a3,s0,0x2
    addu v0,a0,a3
    ori t0,zero,32816
    .word 0xac480000
    .word 0x3c010031
    .word 0x8c2276b4
    addiu a2,zero,8
    jal func_0011eac8
    addu a0,v0,v1
    .word 0x3c010031
    .word 0x8c2276b0
    addiu v0,v0,1
    .word 0x3c010031
    .word 0xac2276b0
    .word 0x3c010031
    .word 0x8c2276b0
    slti v0,v0,1023
    bnez v0,L1a7800
    nop
    jal func_001aa740
    paddub a0,zero,zero
L1a7800:
    jal func_00109d00
    .word 0x8f84806c
    .word 0x7bbf0020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,176
}
