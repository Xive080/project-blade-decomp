extern void func_00107e08(void);
extern void func_00107f20(void);
extern void func_00107f40(void);
extern void func_00172890(void);
extern void func_001b3610(void);
extern void func_001b3f30(void);
extern void func_001b3f90(void);
extern void func_001b4090(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    sq ra,0(sp)
    lw a0,-31728(gp)
    bnez a0,L171940
    .word 0x3c03003a
    b L17225c
    .word 0x70001628
    .word 0x3c03003a
L171940:
    ori v0,v1,0x8c38
    addu v0,a0,v0
    lw v0,0(v0)
    bnez v0,L171ba8
    ori v0,v1,0x8adc
    ori v0,v1,0x8abc
    addu a1,a0,v0
    lb v0,0(a1)
    beqz v0,L17225c
    addiu v0,zero,1
    .word 0x3c010030
    lw a0,-22816(at)
    lw v0,0(a0)
    jalr ra,v0
    addiu a2,zero,1
    lw v1,-31728(gp)
    .word 0x3c05003a
    ori a3,a1,0x8ab8
    .word 0x3c01003b
    addiu a0,zero,1
    addu v1,v1,a3
    sw v0,0(v1)
    lw v0,-31728(gp)
    ori t0,a1,0x8c48
    ori a2,a1,0x8adc
    .word 0x3c03bf80
    ori a1,a1,0x8a58
    addu at,v0,at
    sw a0,-29640(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    sb zero,-30020(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu v0,v0,t0
    sw zero,0(v0)
    lw v0,-31728(gp)
    addu at,v0,at
    sw zero,-29620(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu v0,v0,a2
    sw zero,0(v0)
    lw v0,-31728(gp)
    addu at,v0,at
    sw a0,-29644(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    sw zero,-29616(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    sw v1,-29612(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    sw zero,-29608(at)
    lw v0,-31728(gp)
    jal func_001b4090
    addu a0,v0,a1
    lw v0,-31728(gp)
    .word 0x3c01003a
    ori at,at,0x8a10
    jal func_00107f40
    addu a0,v0,at
    lw v1,-31728(gp)
    .word 0x3c01003b
    addu at,v1,at
    lw v0,-29988(at)
    bnez v0,L172258
    nop
    .word 0x3c01003b
    addu at,v1,at
    lw a1,-30024(at)
    .word 0x3c010030
    lw a0,-22816(at)
    lw v0,44(a0)
    jalr ra,v0
    nop
    addiu v1,zero,1
    bne v0,v1,L172258
    nop
    lw a0,-31728(gp)
    .word 0x3c01003b
    addu at,a0,at
    lw v0,-29624(at)
    beq v0,v1,L172258
    nop
    .word 0x3c01003a
    ori at,at,0x8a58
    addu a0,a0,at
    addiu a1,sp,28
    addiu a2,sp,24
    addiu a3,sp,20
    jal func_001b3f90
    addiu t0,sp,16
    .word 0x3c020fff
    lw v1,20(sp)
    ori a2,v0,0xffff
    lw a1,28(sp)
    lw v0,24(sp)
    .word 0x3c080008
    .word 0x3c042000
    dsll32 v1,v1,0x4
    dsrl32 v1,v1,0x4
    and a1,a1,a2
    or a1,a1,a0
    or v1,v1,a0
    slt v0,v0,t0
    sw a1,28(sp)
    bnez v0,L172258
    sw v1,20(sp)
    .word 0x3c010030
    lw a0,-22816(at)
    lw v1,-31728(gp)
    lw a2,28(sp)
    addiu a3,zero,1
    .word 0x3c01003b
    addu at,v1,at
    lw v0,8(a0)
    lw a1,-30024(at)
    jalr ra,v0
    .word 0x70004e28
    bgtz v0,L171b8c
    nop
    lw v0,-31728(gp)
    .word 0x3c01003b
    addiu a3,zero,1
    addu at,v0,at
    sw a3,-29624(at)
    lw v1,-31728(gp)
    .word 0x3c01003b
    addu at,v1,at
    lw v0,-29628(at)
    beqz v0,L171b8c
    nop
    .word 0x3c01003b
    addu at,v1,at
    lw a1,-30024(at)
    .word 0x70003628
    .word 0x3c010030
    lw a0,-22816(at)
    lw v0,24(a0)
    jalr ra,v0
    .word 0x70004628
L171b8c:
    lw v0,-31728(gp)
    .word 0x3c01003b
    .word 0x3c030008
    addu at,v0,at
    b L172258
    sw v1,-29988(at)
    ori v0,v1,0x8adc
L171ba8:
    addu v0,a0,v0
    lw v0,0(v0)
    blez v0,L171c14
    nop
    .word 0x3c01003b
    addu at,a0,at
    lw a1,-30024(at)
    .word 0x3c010030
    lw a0,-22816(at)
    lw v0,44(a0)
    jalr ra,v0
    nop
    addiu v1,zero,1
    bne v0,v1,L171c14
    nop
    lw v0,-31728(gp)
    .word 0x3c01003a
    ori at,at,0x8a58
    addu a0,v0,at
    .word 0x3c01003b
    addu at,v0,at
    jal func_001b3f30
    lw a1,-29988(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    sw zero,-29988(at)
L171c14:
    lw a0,-31728(gp)
    .word 0x3c03003a
    ori v0,v1,0x8c40
    addu v0,a0,v0
    lw v0,0(v0)
    beqz v0,L171cd8
    .word 0x3c01003b
    ori v0,v1,0x8ab8
    addu v0,a0,v0
    .word 0x3c010030
    lw a0,-22816(at)
    lw a1,0(v0)
    lw v0,44(a0)
    jalr ra,v0
    nop
    addiu v1,zero,1
    bne v0,v1,L172258
    nop
    .word 0x3c010030
    lw a0,-22816(at)
    lw v1,-31728(gp)
    .word 0x3c01003b
    addu at,v1,at
    lw v0,4(a0)
    jalr ra,v0
    lw a1,-30024(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addiu v1,zero,1
    addu at,v0,at
    sw zero,-30024(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    sw zero,-29640(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    sw v1,-29636(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    sw zero,-29628(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    b L172258
    sw zero,-29632(at)
    .word 0x3c01003b
L171cd8:
    addu at,a0,at
    lw v0,-29988(at)
    bnez v0,L171e2c
    .word 0x3c02003a
    ori v0,v1,0x8ab8
    addu v0,a0,v0
    .word 0x3c010030
    lw a0,-22816(at)
    lw a1,0(v0)
    lw v0,44(a0)
    jalr ra,v0
    nop
    addiu v1,zero,1
    bne v0,v1,L171e28
    nop
    lw a0,-31728(gp)
    .word 0x3c02003a
    ori v0,v0,0x8c48
    addu v0,a0,v0
    lw v0,0(v0)
    beq v0,v1,L171e28
    nop
    .word 0x3c01003a
    ori at,at,0x8a58
    addu a0,a0,at
    addiu a1,sp,44
    addiu a2,sp,40
    addiu a3,sp,36
    jal func_001b3f90
    addiu t0,sp,32
    .word 0x3c020fff
    lw v1,36(sp)
    ori a2,v0,0xffff
    lw a1,44(sp)
    lw v0,40(sp)
    ori t0,zero,32768
    .word 0x3c042000
    dsll32 v1,v1,0x4
    dsrl32 v1,v1,0x4
    and a1,a1,a2
    or a1,a1,a0
    or v1,v1,a0
    slt v0,v0,t0
    sw a1,44(sp)
    bnez v0,L171e28
    sw v1,36(sp)
    .word 0x3c010030
    lw a0,-22816(at)
    lw v1,-31728(gp)
    lw a2,44(sp)
    addiu a3,zero,1
    .word 0x3c01003b
    addu at,v1,at
    lw v0,8(a0)
    lw a1,-30024(at)
    jalr ra,v0
    .word 0x70004e28
    bgtz v0,L171e14
    nop
    lw v0,-31728(gp)
    .word 0x3c01003b
    addiu a3,zero,1
    addu at,v0,at
    sw a3,-29624(at)
    lw v1,-31728(gp)
    .word 0x3c01003b
    addu at,v1,at
    lw v0,-29628(at)
    beqz v0,L171e14
    nop
    .word 0x3c01003b
    addu at,v1,at
    lw a1,-30024(at)
    .word 0x70003628
    .word 0x3c010030
    lw a0,-22816(at)
    lw v0,24(a0)
    jalr ra,v0
    .word 0x70004628
L171e14:
    lw v0,-31728(gp)
    .word 0x3c01003b
    ori v1,zero,32768
    addu at,v0,at
    sw v1,-29988(at)
L171e28:
    .word 0x3c02003a
L171e2c:
    ori v1,v0,0x8a58
    lw v0,-31728(gp)
    jal func_001b3610
    addu a0,v0,v1
    .word 0x3c010002
    ori at,at,0x1
    slt at,v0,at
    beqz at,L171e6c
    nop
    lw v1,-31728(gp)
    .word 0x3c01003b
    addiu v0,zero,1
    addu at,v1,at
    lw v1,-29624(at)
    bne v1,v0,L172258
    nop
L171e6c:
    lw a1,-31728(gp)
    .word 0x3c02003a
    ori v0,v0,0x8c34
    addu v0,a1,v0
    lw v0,0(v0)
    beqz v0,L171ec0
    nop
    .word 0x3c01003a
    ori at,at,0x8a10
    addu a0,a1,at
    jal func_00107e08
    addiu a2,zero,1280
    lw v1,-31728(gp)
    .word 0x3c01003b
    addu at,v1,at
    lw v0,-29616(at)
    .word 0x3c01003b
    addiu v0,v0,1
    addu at,v1,at
    b L172150
    sw v0,-29616(at)
L171ec0:
    jal func_00172890
    nop
    .word 0x3c02003a
    ori v1,v0,0x8a10
    lw v0,-31728(gp)
    jal func_00107f20
    addu a0,v0,v1
    bnez v0,L171efc
    nop
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    lw v0,-29620(at)
    beqz v0,L172150
    nop
L171efc:
    lw v0,-31728(gp)
    .word 0x3c01003a
    ori at,at,0x8a58
    jal func_001b4090
    addu a0,v0,at
    lw v0,-31728(gp)
    .word 0x3c01003a
    ori at,at,0x8a10
    jal func_00107f40
    addu a0,v0,at
    lw a0,-31728(gp)
    .word 0x3c03003a
    ori v0,v1,0x8c44
    addu v0,a0,v0
    lw v0,0(v0)
    bnez v0,L171f58
    .word 0x3c01003b
    .word 0x3c01003b
    addiu v0,zero,1
    addu at,a0,at
    b L172150
    sw v0,-29632(at)
    .word 0x3c01003b
L171f58:
    addu at,a0,at
    sw zero,-29620(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    ori v1,v1,0x8c48
    addu at,v0,at
    sw zero,-29616(at)
    lw v0,-31728(gp)
    .word 0x3c01003b
    addu at,v0,at
    sw zero,-29608(at)
    lw v0,-31728(gp)
    addu v1,v0,v1
    lw v0,0(v1)
    beqz v0,L171fa0
    nop
    b L171ff8
    sw zero,0(v1)
L171fa0:
    lw v1,-31728(gp)
    .word 0x3c010030
    lw a0,-22816(at)
    .word 0x3c02003a
    ori a1,v0,0x8ab8
    addu v1,v1,a1
    lw v0,44(a0)
    jalr ra,v0
    lw a1,0(v1)
    addiu a3,zero,1
    bne v0,a3,L171fa0
    nop
    .word 0x3c010030
    lw a0,-22816(at)
    lw v1,-31728(gp)
    .word 0x70003628
    .word 0x3c01003b
    addu at,v1,at
    lw v0,24(a0)
    lw a1,-30024(at)
    jalr ra,v0
    .word 0x70004628
L171ff8:
    lw v1,-31728(gp)
    .word 0x3c01003b
    addu at,v1,at
    lw v0,-29988(at)
    bnez v0,L172150
    nop
    .word 0x3c02003a
    ori v0,v0,0x8ab8
    addu v0,v1,v0
    .word 0x3c010030
    lw a0,-22816(at)
    lw a1,0(v0)
    lw v0,44(a0)
    jalr ra,v0
    nop
    addiu v1,zero,1
    bne v0,v1,L172150
    nop
    lw a0,-31728(gp)
    .word 0x3c01003b
    addu at,a0,at
    lw v0,-29624(at)
    beq v0,v1,L172150
    nop
    .word 0x3c01003a
    ori at,at,0x8a58
    addu a0,a0,at
    addiu a1,sp,60
    addiu a2,sp,56
    addiu a3,sp,52
    jal func_001b3f90
    addiu t0,sp,48
    .word 0x3c020fff
    lw v1,52(sp)
    ori a2,v0,0xffff
    lw a1,60(sp)
    lw v0,56(sp)
    .word 0x3c080008
    .word 0x3c042000
    dsll32 v1,v1,0x4
    dsrl32 v1,v1,0x4
    and a1,a1,a2
    or a1,a1,a0
    or v1,v1,a0
    slt v0,v0,t0
    sw a1,60(sp)
    bnez v0,L172150
    sw v1,52(sp)
    .word 0x3c010030
    lw a0,-22816(at)
    lw v1,-31728(gp)
    lw a2,60(sp)
    addiu a3,zero,1
    .word 0x3c01003b
    addu at,v1,at
    lw v0,8(a0)
    lw a1,-30024(at)
    jalr ra,v0
    .word 0x70004e28
    bgtz v0,L17213c
    nop
    lw v0,-31728(gp)
    .word 0x3c01003b
    addiu a3,zero,1
    addu at,v0,at
    sw a3,-29624(at)
    lw v1,-31728(gp)
    .word 0x3c01003b
    addu at,v1,at
    lw v0,-29628(at)
    beqz v0,L17213c
    nop
    .word 0x3c01003b
    addu at,v1,at
    lw a1,-30024(at)
    .word 0x70003628
    .word 0x3c010030
    lw a0,-22816(at)
    lw v0,24(a0)
    jalr ra,v0
    .word 0x70004628
L17213c:
    lw v0,-31728(gp)
    .word 0x3c01003b
    .word 0x3c030008
    addu at,v0,at
    sw v1,-29988(at)
L172150:
    lw v1,-31728(gp)
    .word 0x3c01003b
    addu at,v1,at
    lw v0,-29644(at)
    beqz v0,L172208
    nop
    .word 0x3c01003b
    addu at,v1,at
    mtc1 zero,f0
    lwc1 f3,-29612(at)
    c.lt.s f3,f0
    nop
    bc1t L172208
    nop
    .word 0x3c01003a
    ori at,at,0x8c58
    addu a0,v1,at
    lw v0,0(a0)
    blez v0,L1721b0
    .word 0x3c01003b
    addiu v0,v0,-1
    b L172208
    sw v0,0(a0)
    .word 0x3c01003b
L1721b0:
    addu at,v1,at
    lwc1 f2,-29616(at)
    .word 0x3c023ca3
    ori v0,v0,0xd70a
    mtc1 v0,f1
    .word 0x3c024000
    cvt.s.w f2,f2
    mul.s f1,f1,f2
    mtc1 v0,f0
    nop
    mul.s f0,f0,f1
    .word 0x3c023e23
    ori v0,v0,0xd70a
    sub.s f1,f3,f0
    mtc1 v0,f0
    nop
    c.le.s f1,f0
    nop
    bc1t L172208
    nop
    addiu v0,zero,6
    sw v0,0(a0)
L172208:
    lw v1,-31728(gp)
    .word 0x3c01003b
    addu at,v1,at
    lw v0,-29608(at)
    beqz v0,L172238
    nop
    .word 0x3c01003a
    ori at,at,0x8a10
    jal func_00107f20
    addu a0,v1,at
    beqz v0,L172258
    nop
L172238:
    lw v0,-31728(gp)
    .word 0x3c01003a
    ori at,at,0x8c34
    addu v1,v0,at
    lw v0,0(v1)
    sltu v0,zero,v0
    xori v0,v0,0x1
    sw v0,0(v1)
L172258:
    addiu v0,zero,1
L17225c:
    lq ra,0(sp)
    jr ra
    addiu sp,sp,64
}
