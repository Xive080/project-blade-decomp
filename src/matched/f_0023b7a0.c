extern void func_0011ec80(void);
extern void func_001beee0(void);
extern void func_001bf050(void);
extern void func_001c0520(void);
extern void func_001ca2d0(void);
extern void func_0023c570(void);
extern void func_0023c790(void);
extern void func_0023c970(void);
extern void func_0023ca90(void);
extern void func_0023cba0(void);
extern void func_0023cc00(void);
extern void func_0023cde0(void);
extern void func_0023ceb0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-176
    sq ra,96(sp)
    sq s5,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    addiu s2,gp,-30320
    .word 0x8e420000
    .word 0x70808628
    addu v0,a2,v0
    lw s5,0(v0)
    bne zero,s5,L23b820
    .word 0x70c08e28
    .word 0x3c020033
    .word 0x3c01002e
    addiu v0,v0,-23008
    lw v0,320(v0)
    jalr ra,v0
    lw a0,31624(at)
    .word 0x7040ae28
    bne zero,s5,L23b808
    .word 0x72a02628
    b L23b820
    .word 0x7000ae28
L23b808:
    .word 0x70002e28
    jal func_0011ec80
    addiu a2,zero,144
    lw v0,0(s2)
    addu v0,s1,v0
    sw s5,0(v0)
L23b820:
    bne zero,s5,L23b830
    addiu a1,sp,116
    b L23bb7c
    .word 0x70001628
L23b830:
    .word 0x72002628
    jal func_001ca2d0
    addiu a2,zero,4
    bnez v0,L23b84c
    addiu a0,sp,116
    b L23bb7c
    .word 0x70001628
L23b84c:
    jal func_001bf050
    addiu a1,zero,4
    lw a1,116(sp)
    jal func_0023c570
    .word 0x72202628
    lw v0,128(s5)
    bnez v0,L23b874
    .word 0x70009628
    b L23bb7c
    .word 0x70001628
L23b874:
    b L23bb6c
    andi v0,s2,0xff
L23b87c:
    .word 0x72002628
    jal func_001ca2d0
    addiu a2,zero,4
    bnez v0,L23b898
    addiu a0,sp,120
    b L23bb7c
    .word 0x70001628
L23b898:
    jal func_001bf050
    addiu a1,zero,4
    lw v1,120(sp)
    addiu v0,zero,4
    beq v1,v0,L23baa4
    addiu a1,sp,136
    addiu v0,zero,2
    beq v1,v0,L23b9e0
    addiu a1,sp,128
    addiu v0,zero,1
    beq v1,v0,L23b8dc
    addiu a1,sp,124
    beqz v1,L23bb5c
    addiu v0,s2,1
    b L23bb58
    nop
    addiu a1,sp,124
L23b8dc:
    .word 0x72002628
    addiu a2,zero,4
    .word 0x70009e28
    jal func_001ca2d0
    .word 0x7000a628
    bnez v0,L23b900
    addiu a0,sp,124
    b L23bb7c
    .word 0x70001628
L23b900:
    jal func_001bf050
    addiu a1,zero,4
    addiu a1,sp,148
    .word 0x72002628
    jal func_001ca2d0
    addiu a2,zero,4
    lw v0,148(sp)
    beqz v0,L23b954
    addiu a1,sp,156
    .word 0x72002628
    addiu a1,zero,6
    addiu a2,sp,144
    jal func_001beee0
    .word 0x70003e28
    beqz v0,L23b950
    .word 0x72002628
    jal func_001c0520
    nop
    .word 0x70409e28
    nop
L23b950:
    addiu a1,sp,156
L23b954:
    .word 0x72002628
    jal func_001ca2d0
    addiu a2,zero,4
    lw v0,156(sp)
    beqz v0,L23b990
    .word 0x72002628
    addiu a1,zero,6
    addiu a2,sp,152
    jal func_001beee0
    .word 0x70003e28
    beqz v0,L23b990
    .word 0x72002628
    jal func_001c0520
    nop
    .word 0x7040a628
L23b990:
    beqz s3,L23b9a4
    nop
    sw s3,4(s5)
    b L23b9c8
    sw s4,8(s5)
L23b9a4:
    beqz s4,L23b9bc
    .word 0x72802e28
    jal func_0023c790
    .word 0x72202628
    b L23b9cc
    lwc1 f12,124(sp)
L23b9bc:
    sw zero,4(s5)
    sw zero,8(s5)
    nop
L23b9c8:
    lwc1 f12,124(sp)
L23b9cc:
    jal func_0023c970
    .word 0x72202628
    b L23bb58
    nop
    addiu a1,sp,128
L23b9e0:
    .word 0x72002628
    addiu a2,zero,4
    jal func_001ca2d0
    .word 0x70009e28
    bnez v0,L23ba00
    addiu a0,sp,128
    b L23bb7c
    .word 0x70001628
L23ba00:
    jal func_001bf050
    addiu a1,zero,4
    addiu a1,sp,132
    .word 0x72002628
    jal func_001ca2d0
    addiu a2,zero,4
    bnez v0,L23ba28
    addiu a0,sp,132
    b L23bb7c
    .word 0x70001628
L23ba28:
    jal func_001bf050
    addiu a1,zero,4
    addiu a1,sp,164
    .word 0x72002628
    jal func_001ca2d0
    addiu a2,zero,4
    lw v0,164(sp)
    beqz v0,L23ba70
    .word 0x72002628
    addiu a1,zero,6
    addiu a2,sp,160
    jal func_001beee0
    .word 0x70003e28
    beqz v0,L23ba70
    .word 0x72002628
    jal func_001c0520
    nop
    .word 0x70409e28
L23ba70:
    beqz s3,L23ba80
    .word 0x72602e28
    jal func_0023ca90
    .word 0x72202628
L23ba80:
    lwc1 f12,128(sp)
    jal func_0023cc00
    .word 0x72202628
    lw a1,132(sp)
    jal func_0023cba0
    .word 0x72202628
    b L23bb58
    nop
    addiu a1,sp,136
L23baa4:
    .word 0x72002628
    addiu a2,zero,4
    jal func_001ca2d0
    .word 0x70009e28
    bnez v0,L23bac4
    addiu a0,sp,136
    b L23bb7c
    .word 0x70001628
L23bac4:
    jal func_001bf050
    addiu a1,zero,4
    addiu a1,sp,140
    .word 0x72002628
    jal func_001ca2d0
    addiu a2,zero,4
    bnez v0,L23baec
    addiu a0,sp,140
    b L23bb7c
    .word 0x70001628
L23baec:
    jal func_001bf050
    addiu a1,zero,4
    addiu a1,sp,172
    .word 0x72002628
    jal func_001ca2d0
    addiu a2,zero,4
    lw v0,172(sp)
    beqz v0,L23bb38
    .word 0x72002628
    addiu a1,zero,6
    addiu a2,sp,168
    jal func_001beee0
    .word 0x70003e28
    beqz v0,L23bb38
    .word 0x72002628
    jal func_001c0520
    nop
    .word 0x70409e28
    nop
L23bb38:
    beqz s3,L23bb48
    .word 0x72602e28
    jal func_0023cde0
    .word 0x72202628
L23bb48:
    lw a1,136(sp)
    lw a2,140(sp)
    jal func_0023ceb0
    .word 0x72202628
L23bb58:
    addiu v0,s2,1
L23bb5c:
    addiu s5,s5,64
    andi s2,v0,0xff
    nop
    andi v0,s2,0xff
L23bb6c:
    slti v0,v0,2
    bnez v0,L23b87c
    addiu a1,sp,120
    .word 0x72001628
L23bb7c:
    lq ra,96(sp)
    lq s5,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,176
}
