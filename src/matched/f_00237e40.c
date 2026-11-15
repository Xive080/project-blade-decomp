extern void func_00142aa0(void);
extern void func_00142ad0(void);
extern void func_00170000(void);
extern void func_001b8d30(void);
extern void func_00202b70(void);
extern void func_00202ca0(void);
extern void func_002042d0(void);
extern void func_002047f0(void);
extern void func_00209ff0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    sq ra,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lwc1 f3,0(a1)
    lwc1 f2,4(a1)
    lwc1 f1,8(a1)
    lwc1 f0,12(a1)
    swc1 f3,32(a0)
    swc1 f2,36(a0)
    swc1 f1,40(a0)
    swc1 f0,44(a0)
    lwc1 f0,16(a1)
    swc1 f0,48(a0)
    lw v0,44(a0)
    andi v0,v0,0x1
    beqz v0,L237ea0
    .word 0x70808628
    .word 0x3c020030
    addiu v0,v0,30000
    b L237eac
    sw v0,52(s0)
L237ea0:
    .word 0x3c020030
    addiu v0,v0,28544
    sw v0,52(s0)
L237eac:
    .word 0x3c02002f
    jal func_00170000
    addiu a0,v0,3568
    sw v0,56(s0)
    jal func_00142ad0
    lw a0,56(s0)
    sw v0,60(s0)
    lw a1,60(s0)
    jal func_00142aa0
    lw a0,56(s0)
    sw v0,64(s0)
    lw v0,64(s0)
    lw s2,24(v0)
    beqz s2,L237f70
    nop
    .word 0x72402628
    jal func_00202ca0
    .word 0x70008e28
    slt at,zero,v0
    beqz at,L237f70
    nop
    .word 0x72402628
L237f04:
    jal func_00202b70
    .word 0x72202e28
    .word 0x70409e28
    beqzl s3,L237f5c
    addiu s1,s1,1
    jal func_002042d0
    .word 0x72602628
    lbu t0,0(v0)
    lbu a3,1(v0)
    lbu a2,2(v0)
    lbu v1,3(v0)
    addiu a1,sp,92
    .word 0x72602628
    .word 0xa0a80000
    .word 0xa0a70001
    .word 0xa0a60002
    addiu v0,zero,64
    .word 0xa0a30003
    jal func_002047f0
    sb v0,95(sp)
    nop
    addiu s1,s1,1
L237f5c:
    jal func_00202ca0
    .word 0x72402628
    slt v0,s1,v0
    bnez v0,L237f04
    .word 0x72402628
L237f70:
    .word 0x3c010030
    lw a1,-23480(at)
    jal func_00209ff0
    lw a0,60(s0)
    jal func_001b8d30
    lw a0,56(s0)
    lq ra,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,96
}
