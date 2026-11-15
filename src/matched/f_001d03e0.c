extern void func_001d5d50(void);
extern void func_001d5ee0(void);
extern void func_001d6430(void);
extern void func_001d81c0(void);
extern void func_001d8240(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-384
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    sw a0,332(sp)
    sw a1,328(sp)
    lw a0,328(sp)
    lw a2,332(sp)
    addiu v0,zero,1
    sw v0,160(sp)
    jal func_001d8240
    .word 0x70002e28
    lw a0,328(sp)
    lw a2,332(sp)
    .word 0x70408628
    jal func_001d8240
    addiu a1,zero,1
    lw a0,328(sp)
    lw a2,332(sp)
    .word 0x70408e28
    jal func_001d8240
    addiu a1,zero,2
    lw a0,328(sp)
    lw a2,332(sp)
    .word 0x70409628
    jal func_001d8240
    addiu a1,zero,3
    lw v1,328(sp)
    lw a0,8(v1)
    lw a0,16(a0)
    addiu v1,zero,-1
    bne a0,v1, L1d0488
    sll v1,a0,0x3
    b L1d04c4
    .word 0x70002628
L1d0488:
    subu v1,v1,a0
    sll a0,v1,0x2
    lw v1,328(sp)
    addu a0,a0,v1
    lw v1,24(a0)
    sw v1,28(a0)
    lw v1,328(sp)
    lw v1,8(v1)
    lw a0,16(v1)
    sll v1,a0,0x3
    subu v1,v1,a0
    sll a0,v1,0x2
    lw v1,328(sp)
    addu v1,v1,a0
    addiu a0,v1,20
L1d04c4:
    beqz a0, L1d04e4
    nop
    lw v1,4(a0)
    beqz v1, L1d04e4
    nop
    lw v1,8(a0)
    b L1d04f8
    sw v1,208(sp)
L1d04e4:
    .word 0x3c030033
    addiu a0,v1,-23008
    lw v1,-31208(gp)
    addu v1,a0,v1
    sw v1,208(sp)
L1d04f8:
    lw v0,8(v0)
    sw v0,192(sp)
    lw v0,192(sp)
    lhu a0,2(s2)
    lw v1,180(v0)
    sll v0,a0,0x1
    beqz v1, L1d0b84
    sw v0,176(sp)
    lw v0,192(sp)
    lw s7,172(v0)
    beqz s7, L1d0b68
    .word 0x70009e28
    .word 0x3c02002f
    addiu s4,v0,1008
    .word 0x3c020033
    addiu s5,v0,-6592
L1d0538:
    lw v1,8(s2)
    lhu a0,2(s0)
    lw a1,4(s0)
    lw v0,16(s0)
    sw v0,272(sp)
    sw zero,224(sp)
    lhu s6,0(v1)
    lhu v0,2(v1)
    sh v0,256(sp)
    lhu v0,256(sp)
    mult v1,a0,s6
    mult1 v0,a0,v0
    addu v0,a1,v0
    lbu a0,12(v0)
    addu v0,a1,v1
    lbu v0,12(v0)
    or v1,v0,a0
    and v0,v0,a0
    andi s8,v1,0xff
    beqz s8, L1d0ac0
    andi v0,v0,0xff
    bnez v0, L1d0ac8
    nop
    lw v0,272(sp)
    lw v1,12(s0)
    addiu v0,v0,12
    sltu at,v1,v0
    beqz at, L1d05d0
    subu v0,s7,s3
    addu v0,v1,v0
    addiu a1,v0,12
    jal func_001d81c0
    .word 0x72002628
    sltu v0,zero,v0
    sw v0,160(sp)
    lw v0,160(sp)
    beqz v0, L1d0b40
    nop
L1d05d0:
    lw v0,16(s1)
    lw v1,12(s1)
    addiu v0,v0,12
    sltu at,v1,v0
    beqz at, L1d0610
    subu v0,s7,s3
    addu v0,v1,v0
    addiu a1,v0,12
    jal func_001d81c0
    .word 0x72202628
    sltu v0,zero,v0
    sw v0,160(sp)
    lw v0,160(sp)
    beqz v0, L1d0b40
    nop
    nop
L1d0610:
    lw v0,8(s2)
    addiu a0,zero,2
    sw v0,240(sp)
    andi v0,s8,0xff
    sw v0,288(sp)
    lw v0,288(sp)
    sh s6,336(sp)
    sw a0,380(sp)
    sw zero,376(sp)
    andi v1,v0,0x30
    lhu v0,256(sp)
    beqz v1, L1d0710
    sh v0,338(sp)
    lw v0,288(sp)
    andi v0,v0,0x10
    beqz v0, L1d0680
    nop
    lw t2,0(s4)
    .word 0x72002628
    .word 0x72202e28
    addiu a2,sp,336
    addiu a3,sp,376
    addiu t0,sp,380
    jal func_001d6430
    addiu t1,zero,16
    slti v0,v0,2
    bnez v0, L1d0ac8
    nop
L1d0680:
    lw v0,288(sp)
    andi v0,v0,0x20
    beqz v0, L1d06c0
    nop
    lw t2,4(s4)
    .word 0x72002628
    .word 0x72202e28
    addiu a2,sp,336
    addiu a3,sp,376
    addiu t0,sp,380
    jal func_001d6430
    addiu t1,zero,32
    slti v0,v0,2
    bnez v0, L1d0ac8
    nop
    nop
L1d06c0:
    lw a1,376(sp)
    lhu a0,2(s0)
    lw a2,4(s0)
    addiu v0,a1,1
    andi v0,v0,0xf
    sll v0,v0,0x1
    addu v0,v0,sp
    lhu v1,336(v0)
    sll v0,a1,0x1
    addu v0,v0,sp
    lhu v0,336(v0)
    mult v1,a0,v1
    addu v1,a2,v1
    mult1 v0,a0,v0
    addu v0,a2,v0
    lbu v1,12(v1)
    lbu v0,12(v0)
    or v0,v0,v1
    andi s8,v0,0xff
    nop
L1d0710:
    andi v0,s8,0xff
    sw v0,304(sp)
    lw v0,304(sp)
    andi v0,v0,0xc
    beqzl v0, L1d07fc
    andi s8,s8,0xff
    lw v0,304(sp)
    andi v0,v0,0x4
    beqz v0, L1d0768
    nop
    lw t2,8(s4)
    .word 0x72002628
    .word 0x72202e28
    addiu a2,sp,336
    addiu a3,sp,376
    addiu t0,sp,380
    jal func_001d6430
    addiu t1,zero,4
    slti v0,v0,2
    bnez v0, L1d0ac8
    nop
    nop
L1d0768:
    lw v0,304(sp)
    andi v0,v0,0x8
    beqz v0, L1d07a8
    nop
    lw t2,12(s4)
    .word 0x72002628
    .word 0x72202e28
    addiu a2,sp,336
    addiu a3,sp,376
    addiu t0,sp,380
    jal func_001d6430
    addiu t1,zero,8
    slti v0,v0,2
    bnez v0, L1d0ac8
    nop
    nop
L1d07a8:
    lw a1,376(sp)
    lhu a0,2(s0)
    lw a2,4(s0)
    addiu v0,a1,1
    andi v0,v0,0xf
    sll v0,v0,0x1
    addu v0,v0,sp
    lhu v1,336(v0)
    sll v0,a1,0x1
    addu v0,v0,sp
    lhu v0,336(v0)
    mult v1,a0,v1
    addu v1,a2,v1
    mult1 v0,a0,v0
    addu v0,a2,v0
    lbu v1,12(v1)
    lbu v0,12(v0)
    or v0,v0,v1
    andi s8,v0,0xff
    nop
    andi s8,s8,0xff
L1d07fc:
    andi v0,s8,0x3
    beqz v0, L1d0878
    andi v0,s8,0x1
    beqz v0, L1d0844
    andi v0,s8,0x2
    lw t2,16(s4)
    .word 0x72002628
    .word 0x72202e28
    addiu a2,sp,336
    addiu a3,sp,376
    addiu t0,sp,380
    jal func_001d6430
    addiu t1,zero,1
    slti v0,v0,2
    bnez v0, L1d0ac8
    nop
    nop
    andi v0,s8,0x2
L1d0844:
    beqz v0, L1d0878
    nop
    lw t2,20(s4)
    .word 0x72002628
    .word 0x72202e28
    addiu a2,sp,336
    addiu a3,sp,376
    addiu t0,sp,380
    jal func_001d6430
    addiu t1,zero,2
    slti v0,v0,2
    bnez v0, L1d0ac8
    nop
L1d0878:
    lw v0,376(sp)
    nop
    sll v1,v0,0x1
L1d0884:
    addu v1,v1,sp
    lhu t0,336(v1)
    lhu a0,2(s0)
    lw v1,4(s0)
    mult a0,a0,t0
    addu a0,v1,a0
    lbu t2,12(a0)
    andi v1,t2,0x3f
    beqz v1, L1d09d8
    nop
    lhu a1,2(s1)
    lw t1,4(s1)
    .word 0xc4820000
    .word 0xc4830004
    .word 0xc4840008
    .word 0x3c073f80
    mult t0,a1,t0
    andi a2,t2,0x3
    addu t0,t1,t0
    .word 0xe504000c
    addiu a1,zero,1
    beq a2,a1, L1d0908
    sw a3,24(t0)
    addiu a1,zero,2
    beq a2,a1, L1d08f4
    nop
    b L1d0918
    .word 0xc6a00010
L1d08f4:
    .word 0xc6a10010
    .word 0xc6a00018
    add.s $f0,$f1,$f0
    b L1d0928
    .word 0xe5000000
L1d0908:
    .word 0xc6a00018
    b L1d0928
    .word 0xe5000000
    .word 0xc6a00010
L1d0918:
    .word 0xc6a10018
    mul.s $f0,$f0,$f2
    add.s $f0,$f1,$f0
    .word 0xe5000000
L1d0928:
    andi a2,t2,0xf
    addiu a1,zero,4
    beq a2,a1, L1d095c
    addiu a1,zero,8
    beq a2,a1, L1d0948
    nop
    b L1d096c
    .word 0xc6a00014
L1d0948:
    .word 0xc6a10014
    .word 0xc6a0001c
    add.s $f0,$f1,$f0
    b L1d0980
    .word 0xe5000004
L1d095c:
    .word 0xc6a0001c
    b L1d0980
    .word 0xe5000004
    .word 0xc6a00014
L1d096c:
    .word 0xc6a1001c
    mul.s $f0,$f0,$f3
    add.s $f0,$f1,$f0
    .word 0xe5000004
    nop
L1d0980:
    addiu a1,zero,16
    beq v1,a1, L1d09a8
    addiu a1,zero,32
    beq v1,a1, L1d099c
    nop
    b L1d09b8
    .word 0xc6a00000
L1d099c:
    .word 0xc6a00024
    b L1d09c8
    .word 0xe5000008
L1d09a8:
    .word 0xc6a00020
    b L1d09c8
    .word 0xe5000008
    .word 0xc6a00000
L1d09b8:
    .word 0xc6a10004
    mul.s $f0,$f0,$f4
    add.s $f0,$f1,$f0
    .word 0xe5000008
L1d09c8:
    .word 0xc4800020
    .word 0xe5000010
    .word 0xc4800024
    .word 0xe5000014
L1d09d8:
    lw a0,380(sp)
    addiu v0,v0,1
    andi v0,v0,0xf
    bne v0,a0, L1d0884
    sll v1,v0,0x1
    lw v0,208(sp)
    lw v0,4(v0)
    andi v0,v0,0x2
    bnez v0, L1d0a80
    nop
    b L1d0a28
    lw v1,376(sp)
    sll v0,a0,0x1
L1d0a0c:
    addu v0,v0,sp
    sh a1,336(v0)
    addiu v0,a0,1
    andi a0,v0,0xf
    addiu v0,v1,1
    andi v1,v0,0xf
    nop
L1d0a28:
    sll v0,v1,0x1
    addu v0,v0,sp
    lhu a1,336(v0)
    bne s6,a1, L1d0a0c
    sll v0,a0,0x1
    sw a0,380(sp)
    beq s6,a1, L1d0a80
    sw v1,376(sp)
    lhu v0,2(s1)
    lw a0,4(s1)
    mult v1,v0,s6
    addu v1,a0,v1
    .word 0xc4630020
    .word 0xc4620024
    .word 0xc4610028
    .word 0xc460002c
    mult1 v0,v0,a1
    addu v0,a0,v0
    .word 0xe4430020
    .word 0xe4420024
    .word 0xe4410028
    .word 0xe440002c
L1d0a80:
    lw a0,376(sp)
    addiu v0,zero,1
    sw v0,224(sp)
    addiu v0,a0,1
    andi v1,v0,0xf
    sll v0,a0,0x1
    addu v0,v0,sp
    lhu a0,336(v0)
    sll v0,v1,0x1
    addu v1,v0,sp
    lw v0,240(sp)
    sh a0,0(v0)
    lhu v1,336(v1)
    lw v0,240(sp)
    b L1d0ac8
    sh v1,2(v0)
L1d0ac0:
    addiu v0,zero,1
    sw v0,224(sp)
L1d0ac8:
    lw v0,224(sp)
    bnez v0, L1d0b2c
    nop
    lhu a1,2(s2)
    addiu v0,s7,-1
    sll a0,v0,0x1
    lw v1,4(s2)
    lw v0,8(s2)
    addiu s7,s7,-1
    mult a0,a1,a0
    addiu s3,s3,-1
    addu a0,v1,a0
    lhu v1,0(a0)
    sh v1,0(v0)
    lhu v1,2(a0)
    lw v0,8(s2)
    sh v1,2(v0)
    lw v0,16(s2)
    addiu v0,v0,-2
    sw v0,16(s2)
    lw v0,272(sp)
    sw v0,16(s0)
    lw v0,272(sp)
    b L1d0b40
    sw v0,16(s1)
L1d0b2c:
    lw v1,8(s2)
    lw v0,176(sp)
    addu v0,v1,v0
    sw v0,8(s2)
    nop
L1d0b40:
    lw v0,160(sp)
    bnezl v0, L1d0b5c
    addiu s3,s3,1
    jal func_001d5ee0
    lw a0,328(sp)
    b L1d0c68
    lw v0,160(sp)
L1d0b5c:
    sltu at,s3,s7
    bnez at, L1d0538
    nop
L1d0b68:
    lw v0,16(s2)
    srl v1,v0,0x1
    lw v0,192(sp)
    sw v1,172(v0)
    lw v1,16(s0)
    lw v0,192(sp)
    sw v1,176(v0)
L1d0b84:
    lw v0,192(sp)
    lw v0,172(v0)
    bnez v0, L1d0c00
    .word 0x3c020033
    .word 0x3c020033
    addiu s1,v0,-6624
    .word 0x8e220008
    beqz v0, L1d0bdc
    .word 0x8e300000
    lw a1,332(sp)
    .word 0x72002628
    jal func_001d5d50
    addiu a2,zero,1
    beqz v0, L1d0bdc
    .word 0x70402628
    lw v0,0(v0)
    lw v0,4(v0)
    jalr ra,v0
    addiu a1,s1,16
    bnez v0, L1d0bdc
    nop
    sw v0,8(s1)
L1d0bdc:
    lw v0,20(s0)
    slti at,v0,2
    bnez at, L1d0c60
    addiu v0,zero,2
    sw v0,20(s0)
    jal func_001d5ee0
    lw a0,24(s0)
    b L1d0c64
    lw v0,160(sp)
L1d0c00:
    addiu s1,v0,-6624
    .word 0x8e220008
    beqz v0, L1d0c44
    .word 0x8e300000
    lw a1,332(sp)
    .word 0x72002628
    jal func_001d5d50
    .word 0x70003628
    beqz v0, L1d0c44
    .word 0x70402628
    lw v0,0(v0)
    lw v0,4(v0)
    jalr ra,v0
    addiu a1,s1,16
    bnez v0, L1d0c44
    nop
    sw v0,8(s1)
L1d0c44:
    lw v0,20(s0)
    slti at,v0,2
    bnez at, L1d0c60
    addiu v0,zero,2
    sw v0,20(s0)
    jal func_001d5ee0
    lw a0,24(s0)
L1d0c60:
    lw v0,160(sp)
L1d0c64:
    nop
L1d0c68:
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,384
}
