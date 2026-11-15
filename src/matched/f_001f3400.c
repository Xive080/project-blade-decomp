extern void func_00111a70(void);
extern void func_00111ab8(void);
extern void func_001df850(void);
extern void func_001f2a70(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    sq ra,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    addiu s2,gp,-30852
    .word 0x8e430000
    paddub a2,a1,zero
    addu s4,a0,v1
    lbu v1,54(s4)
    andi v1,v1,0x1
    bnez v1,L1f3444
    paddub s3,a0,zero
    bnez a2,L1f39b8
    nop
L1f3444:
    lw a3,88(s4)
    beqz a3,L1f34e4
    nop
    .word 0x3c03002e
    addiu s0,v1,20416
    .word 0x8e050014
    .word 0x3c032aaa
    ori a0,v1,0xaaab
    .word 0x8e030004
    subu a1,a3,a1
    mult a0,a1
    nop
    nop
    mfhi a0
    srl a1,a1,0x1f
    sra a0,a0,0x1
    addu a0,a0,a1
    xor v1,v1,a0
    sltiu v1,v1,1
    beqz v1,L1f34e4
    nop
    bnez a2,L1f39b8
    nop
    jal func_00111a70
    nop
    lw v0,0(s4)
    addiu v0,v0,1
    jal func_00111ab8
    sw v0,0(s4)
    lw a0,4(s4)
    addiu v1,zero,1
    addiu a0,a0,1
    sw a0,4(s4)
    lw a0,4(s4)
    bne a0,v1,L1f34dc
    nop
    jal func_001df850
    paddub a0,s4,zero
L1f34dc:
    b L1f39b8
    .word 0xae130024
L1f34e4:
    lbu v1,23(s4)
    bnez v1,L1f39b8
    nop
    .word 0x3c03002e
    addiu s0,v1,20416
    .word 0x8e050010
    .word 0x8e03000c
    xor v1,a1,v1
    sltu v1,zero,v1
    beqz v1,L1f352c
    nop
    .word 0x8e040014
    sll v1,a1,0x1
    addu v1,v1,a1
    sll v1,v1,0x2
    addu v1,v1,a0
    b L1f3538
    lw a3,4(v1)
L1f352c:
    .word 0x8e040018
    .word 0x8e03001c
    addu a3,a0,v1
L1f3538:
    .word 0x8e080004
    addiu v1,zero,-1
    beq t0,v1,L1f3584
    nop
    .word 0x8e050014
    sll v1,t0,0x1
    addu v1,v1,t0
    sll a0,v1,0x2
    lw v1,48(s4)
    addu a0,a0,a1
    lw a1,4(a0)
    lw a0,8(a0)
    addu s1,a1,a0
    subu a0,a3,s1
    sltu v1,a0,v1
    bnez v1,L1f3584
    nop
    b L1f359c
    nop
L1f3584:
    .word 0x8e110018
    lw v1,48(s4)
    subu a0,a3,s1
    sltu v1,a0,v1
    bnez v1,L1f39b8
    nop
L1f359c:
    beqz a2,L1f3778
    nop
    addiu a3,zero,-1
    beq t0,a3,L1f3778
    nop
    .word 0x8e05002c
    beq a1,a3,L1f35e0
    .word 0x8e030008
    sll a0,a1,0x1
    addu a0,a0,a1
    sll a1,a0,0x2
    .word 0x8e040014
    addu a0,a0,a1
    lw a0,0(a0)
    bnez a0,L1f35e0
    nop
    .word 0xae07002c
L1f35e0:
    .word 0x8e050030
    addiu a3,zero,-1
    beq a1,a3,L1f3614
    nop
    sll a0,a1,0x1
    addu a0,a0,a1
    sll a1,a0,0x2
    .word 0x8e040014
    addu a0,a0,a1
    lw a0,0(a0)
    bnez a0,L1f3614
    nop
    .word 0xae070030
L1f3614:
    .word 0x8e090004
    addiu a0,zero,-1
    beq t1,a0,L1f3778
    nop
    .word 0x8e050010
    addiu a0,t1,1
    bne a0,a1,L1f3638
    nop
    paddub a0,zero,zero
L1f3638:
    bne a0,v1,L1f3674
    sll t0,t1,0x1
    .word 0x8e07002c
    beq v1,a3,L1f39b8
    nop
    .word 0x8e070030
    bnel v1,a3,L1f3664
    addiu v1,v1,1
    b L1f39bc
    lq ra,80(sp)
    addiu v1,v1,1
L1f3664:
    bne v1,a1,L1f3670
    nop
    paddub v1,zero,zero
L1f3670:
    sll t0,t1,0x1
L1f3674:
    addu t0,t0,t1
    sll t1,t0,0x2
    .word 0x8e070014
    sll t0,v1,0x1
    addu t0,t0,v1
    sll t0,t0,0x2
    lw t2,48(s4)
    .word 0x8e0d002c
    addu t1,t1,a3
    addu t4,a3,t0
    lw t3,4(t1)
    lw t0,8(t1)
    .word 0x8e0e0030
    addu t7,t3,t0
    addiu t1,zero,-2048
    addiu t0,t2,2047
    and t0,t0,t1
    b L1f3700
    addu t1,s1,t0
L1f36c0:
    beqzl t2,L1f36e4
    addiu v1,v1,1
    beq v1,t5,L1f39b8
    nop
    bne v1,t6,L1f36e0
    nop
    b L1f39b8
    nop
L1f36e0:
    addiu v1,v1,1
L1f36e4:
    bne v1,a1,L1f36f4
    sll t0,v1,0x1
    paddub v1,zero,zero
    sll t0,v1,0x1
L1f36f4:
    addu t0,t0,v1
    sll t0,t0,0x2
    addu t4,a3,t0
L1f3700:
    beq a0,v1,L1f3778
    nop
    lw t2,0(t4)
    beqz t2,L1f36c0
    nop
    lw t4,4(t4)
    sltu t0,t3,t4
    bnez t0,L1f3744
    sltu at,t3,t4
    sltu at,t4,t1
    beqz at,L1f3740
    nop
    sltu at,t4,s1
    beqz at,L1f36c0
    nop
    nop
L1f3740:
    sltu at,t3,t4
L1f3744:
    beqz at,L1f3778
    nop
    sltu at,s1,t7
    bnez at,L1f376c
    sltu at,t3,s1
    sltu at,t4,t1
    bnez at,L1f36c0
    nop
    nop
    sltu at,t3,s1
L1f376c:
    beqz at,L1f36c0
    nop
    nop
L1f3778:
    lw v0,88(s4)
    beqz v0,L1f3790
    paddub a0,s3,zero
    sw zero,0(v0)
    sw zero,88(s4)
    paddub a0,s3,zero
L1f3790:
    jal func_001f2a70
    paddub a1,s1,zero
    .word 0x8e040004
    addiu v1,zero,-1
    beq a0,v1,L1f3980
    nop
    addiu v1,a0,1
    .word 0x8e040010
    bne v1,a0,L1f37bc
    nop
    paddub v1,zero,zero
L1f37bc:
    .word 0x8e040008
    bne v1,a0,L1f3820
    sll a0,v1,0x1
    sll a0,v1,0x1
    addu a0,a0,v1
    sll a1,a0,0x2
    .word 0x8e040014
    addu a0,a0,a1
    lw a1,0(a0)
    beqz a1,L1f37fc
    nop
    .word 0x8e440000
    addu a1,a1,a0
    lw a0,88(a1)
    sw zero,0(a0)
    sw zero,88(a1)
L1f37fc:
    .word 0x8e040008
    addiu a0,a0,1
    .word 0xae040008
    .word 0x8e050008
    .word 0x8e040010
    bne a1,a0,L1f381c
    nop
    .word 0xae000008
L1f381c:
    sll a0,v1,0x1
L1f3820:
    addu a0,a0,v1
    sll a3,a0,0x2
    .word 0x8e040014
    addiu a1,zero,-2048
    addu a0,a0,a3
    sw s3,0(a0)
    .word 0x8e040014
    addu a0,a0,a3
    sw a0,88(s4)
    .word 0x8e040014
    addu a0,a3,a0
    sw s1,4(a0)
    lw a2,48(s4)
    .word 0x8e040014
    addiu a2,a2,2047
    and a1,a2,a1
    addu a0,a3,a0
    sw a1,8(a0)
    .word 0x8e060004
    .word 0x8e080008
    .word 0x8e090014
    addu a1,s1,a1
    sll a0,a2,0x1
    addu a0,a0,a2
    sll a0,a0,0x2
    addu a2,a0,t1
    lw a0,4(a2)
    sll a3,t0,0x1
    addu a3,a3,t0
    sll a3,a3,0x2
    addu a3,t1,a3
    lw a2,8(a2)
    b L1f3900
    addu t1,a0,a2
L1f38a8:
    beqz t0,L1f38c8
    nop
    .word 0x8e460000
    addu a3,t0,a2
    lw a2,88(a3)
    sw zero,0(a2)
    sw zero,88(a3)
    nop
L1f38c8:
    .word 0x8e060008
    addiu a2,a2,1
    .word 0xae060008
    .word 0x8e070008
    .word 0x8e060010
    bne a3,a2,L1f38e8
    nop
    .word 0xae000008
L1f38e8:
    .word 0x8e080008
    .word 0x8e060014
    sll a3,t0,0x1
    addu a3,a3,t0
    sll a3,a3,0x2
    addu a3,a2,a3
L1f3900:
    lw t0,0(a3)
    beqz t0,L1f38a8
    nop
    .word 0x8e060008
    beq v1,a2,L1f3978
    nop
    lw a3,4(a3)
    sltu a2,a0,a3
    bnez a2,L1f3944
    sltu at,a0,a3
    sltu at,a3,a1
    beqz at,L1f3940
    nop
    sltu at,a3,s1
    beqz at,L1f38a8
    nop
L1f3940:
    sltu at,a0,a3
L1f3944:
    beqz at,L1f3978
    nop
    sltu at,s1,t1
    bnez at,L1f396c
    sltu at,a0,s1
    sltu at,a3,a1
    bnez at,L1f38a8
    nop
    nop
    sltu at,a0,s1
L1f396c:
    beqz at,L1f38a8
    nop
    nop
L1f3978:
    b L1f39b8
    .word 0xae030004
L1f3980:
    .word 0xae000004
    .word 0xae000008
    .word 0x8e030014
    addiu a0,zero,-2048
    sw s3,0(v1)
    .word 0x8e030014
    sw v1,88(s4)
    .word 0x8e030014
    sw s1,4(v1)
    lw a1,48(s4)
    .word 0x8e030014
    addiu a1,a1,2047
    and a0,a1,a0
    sw a0,8(v1)
L1f39b8:
    lq ra,80(sp)
L1f39bc:
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,96
}
