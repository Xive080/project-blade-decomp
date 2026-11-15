extern void func_001214b8(void);
extern void func_00121b70(void);
extern void func_0013b550(void);
extern void func_001955a0(void);
extern void func_001a3ac0(void);
extern void func_001b5050(void);
extern void func_001b54e0(void);
extern void func_0024b4b0(void);
extern void func_0024b540(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-352
    sq ra,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    addiu v0,zero,2
    .word 0x70a09e28
    sq s0,0(sp)
    .word 0x7080a628
    beq s3,v0,L19ad0c
    .word 0x70c09628
    beqz s3,L19acc0
    nop
    b L19adac
    .word 0x72403628
L19acc0:
    lw a0,-31960(gp)
    jal func_0013b550
    addiu a1,zero,58
    sw v0,8(s4)
    lw a0,-31960(gp)
    jal func_0013b550
    addiu a1,zero,7
    sw v0,12(s4)
    .word 0x3c020031
    addiu v0,v0,23264
    sw v0,20(s4)
    addiu v0,zero,7
    sw v0,16(s4)
    sw zero,24(s4)
    sw zero,4(s4)
    lw v0,4(s4)
    ori v0,v0,0x10
    b L19ada8
    sw v0,4(s4)
L19ad0c:
    sw zero,24(s4)
    lw s1,20(s4)
    .word 0x70008628
    sw zero,16(s4)
    addiu a1,zero,5
L19ad20:
    jal func_001b5050
    .word 0x72002628
    beqzl v0,L19ad9c
    addiu s0,s0,1
    addiu a3,zero,1
    beq v0,a3,L19ad70
    addiu a1,s0,168
    addiu v1,zero,2
    beq v0,v1,L19ad54
    addiu a1,s0,163
    b L19ad8c
    lw v0,16(s4)
    addiu a1,s0,163
L19ad54:
    .word 0x72202628
    .word 0x72003628
    jal func_001955a0
    .word 0x70003e28
    b L19ad88
    nop
    addiu a1,s0,168
L19ad70:
    .word 0x72202628
    jal func_001955a0
    .word 0x72003628
    lw v0,8(s1)
    ori v0,v0,0x1
    sw v0,8(s1)
L19ad88:
    lw v0,16(s4)
L19ad8c:
    addiu s1,s1,32
    addiu v0,v0,1
    sw v0,16(s4)
    addiu s0,s0,1
L19ad9c:
    sltiu v0,s0,7
    bnez v0,L19ad20
    addiu a1,zero,5
L19ada8:
    .word 0x72403628
L19adac:
    .word 0x72802628
    jal func_001a3ac0
    .word 0x72602e28
    bnez v0,L19adcc
    addiu v0,zero,6
    b L19af40
    .word 0x70001628
    addiu v0,zero,6
L19adcc:
    beq s3,v0,L19adf4
    nop
    addiu v0,zero,5
    beq s3,v0,L19adf4
    nop
    addiu v0,zero,3
    beq s3,v0,L19adf4
    nop
    b L19af40
    addiu v0,zero,1
L19adf4:
    lw v1,24(s4)
    .word 0x3c020031
    addiu v0,v0,23280
    sll v1,v1,0x5
    addu v0,v0,v1
    lw v0,0(v0)
    bnez v0,L19af34
    addiu a0,zero,10
    .word 0x3c020031
    addiu v0,v0,23276
    addu v0,v0,v1
    jal func_001b54e0
    lw s0,0(v0)
    sll v1,s0,0x3
    subu v1,v1,s0
    sll v1,v1,0x5
    addu v0,v0,v1
    addiu s1,v0,76
    .word 0x3c02002e
    addiu a2,v0,11728
    addiu a1,sp,96
    addiu a0,zero,7
L19ae4c:
    lq v1,0(a2)
    lq v0,16(a2)
    addiu a0,a0,-1
    sq v1,0(a1)
    sq v0,16(a1)
    addiu a2,a2,32
    bgtz a0,L19ae4c
    addiu a1,a1,32
    addiu s2,sp,96
    sw zero,-31460(gp)
    .word 0x70008628
L19ae78:
    .word 0x3c02002f
    addiu a2,s0,1
    addiu a0,sp,320
    addiu a1,v0,-328
    jal func_001214b8
    .word 0x72203e28
    lw a0,-31460(gp)
    beqz a0,L19aeb8
    nop
    jal func_00121b70
    nop
    addiu v1,v0,1
    lw v0,-31460(gp)
    addu v0,v0,v1
    b L19aec8
    sw v0,-31460(gp)
L19aeb8:
    .word 0x3c020031
    addiu v0,v0,26880
    sw v0,-31460(gp)
    nop
L19aec8:
    lw a0,-31460(gp)
    .word 0x72202e28
    .word 0x70003628
    jal func_001214b8
    .word 0x70003e28
    lw v1,-31460(gp)
    addiu v0,s1,16
    addiu s0,s0,1
    addiu s1,s1,28
    sw v1,20(s2)
    sw v0,24(s2)
    sltiu v0,s0,8
    bnez v0,L19ae78
    addiu s2,s2,28
    ld a1,-31528(gp)
    addiu a2,sp,344
    addiu v1,zero,8
    addiu v0,sp,96
    .word 0xfcc50000
    sw v1,344(sp)
    addiu a0,zero,10
    sw v0,348(sp)
    jal func_0024b540
    .word 0x70002e28
    b L19af3c
    nop
    addiu a0,zero,10
L19af34:
    jal func_0024b4b0
    .word 0x70002e28
L19af3c:
    addiu v0,zero,1
L19af40:
    lq ra,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,352
}
