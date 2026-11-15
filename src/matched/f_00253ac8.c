asm void func_00253ac8(void) {
    .set noreorder
    .set noat
    .word 0x0080402d
    addiu sp,sp,-64
    .word 0xffb00030
    dsra32 t2,t0,0x0
    dsll32 a0,t2,0x0
    dsra32 a0,a0,0x0
    bgez a0,L253b3c
    .word 0x0000802d
    dsll32 v0,t0,0x0
    dsra32 v0,v0,0x0
    addiu v1,zero,-1
    dsll32 v1,v1,0x0
    negu v0,v0
    and a2,a2,v1
    dsll32 v0,v0,0x0
    negu v1,a0
    dsrl32 v0,v0,0x0
    .word 0x3c04ffff
    dsrl32 a0,a0,0x0
    or a2,a2,v0
    addiu s0,zero,-1
    dsll32 v0,a2,0x0
    dsra32 v0,v0,0x0
    sltu v0,zero,v0
    and a2,a2,a0
    subu v1,v1,v0
    dsll32 v1,v1,0x0
    or t0,a2,v1
    dsra32 t2,t0,0x0
L253b3c:
    dsra32 a0,a1,0x0
    bgez a0,L253b90
    negu a0,a0
    dsll32 v0,a1,0x0
    dsra32 v0,v0,0x0
    addiu v1,zero,-1
    dsll32 v1,v1,0x0
    negu v0,v0
    and a3,a3,v1
    dsll32 v0,v0,0x0
    dsrl32 v0,v0,0x0
    .word 0x3c05ffff
    dsrl32 a1,a1,0x0
    or a3,a3,v0
    dsll32 v1,a3,0x0
    dsra32 v1,v1,0x0
    sltu v1,zero,v1
    and a3,a3,a1
    subu a0,a0,v1
    dsll32 a0,a0,0x0
    or a1,a3,a0
L253b90:
    dsll32 t4,t0,0x0
    dsra32 t4,t4,0x0
    dsra32 t1,a1,0x0
    dsll32 t2,t2,0x0
    dsra32 t2,t2,0x0
    dsll32 t0,a1,0x0
    dsra32 t0,t0,0x0
    bnez t1,L253e7c
    .word 0x03a0c82d
    sltu v0,t2,t0
    beqz v0,L253c48
    ori v0,zero,65535
    sltu v0,v0,t0
    bnez v0,L253be0
    .word 0x3c0200ff
    sltiu v0,t0,256
    addiu a1,zero,8
    b L253bf8
    movn a1,zero,v0
    nop
L253be0:
    addiu a1,zero,24
    ori v0,v0,0xffff
    addiu v1,zero,16
    sltu v0,v0,t0
    movz a1,v1,v0
    nop
L253bf8:
    .word 0x3c02002f
    srlv a0,t0,a1
    addiu v0,v0,4584
    addiu a2,zero,32
    addu a0,a0,v0
    .word 0x90830000
    addu v1,v1,a1
    subu t5,a2,v1
    beqz t5,L253c34
    subu v0,a2,t5
    sllv v1,t2,t5
    srlv v0,t4,v0
    sllv t0,t0,t5
    or t2,v1,v0
    sllv t4,t4,t5
L253c34:
    srl a1,t0,0x10
    andi a3,t0,0xffff
    b L253dc0
    .word 0x0145001b
    nop
L253c48:
    bnez t0,L253c70
    sltu v0,v0,t0
    addiu v0,zero,1
    beqzl t0,L253c5c
    .word 0x000001cd
L253c5c:
    .word 0x0049001b
    mflo v0
    .word 0x0040402d
    ori v0,zero,65535
    sltu v0,v0,t0
L253c70:
    bnez v0,L253c88
    .word 0x3c0200ff
    sltiu v0,t0,256
    addiu a1,zero,8
    b L253ca0
    movn a1,zero,v0
L253c88:
    addiu a1,zero,24
    ori v0,v0,0xffff
    addiu v1,zero,16
    sltu v0,v0,t0
    movz a1,v1,v0
    nop
L253ca0:
    .word 0x3c02002f
    srlv a0,t0,a1
    addiu v0,v0,4584
    addiu a2,zero,32
    addu a0,a0,v0
    .word 0x90830000
    addu v1,v1,a1
    subu t5,a2,v1
    bnez t5,L253cd8
    subu t6,a2,t5
    subu t2,t2,t0
    srl a1,t0,0x10
    b L253db4
    andi t1,t0,0xffff
L253cd8:
    sllv v1,t2,t5
    srlv v0,t4,t6
    srlv a3,t2,t6
    or t2,v1,v0
    sllv t0,t0,t5
    sllv t4,t4,t5
    srl a1,t0,0x10
    .word 0x00e5001b
    andi t1,t0,0xffff
    .word 0x00a0382d
    srl a0,t2,0x10
    beqzl a3,L253d0c
    .word 0x000001cd
L253d0c:
    .word 0x0120582d
    mflo v0
    mfhi v1
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00493018
    or v1,v1,a0
    sltu v0,v1,a2
    beqzl v0,L253d5c
    subu v1,v1,a2
    addu v1,v1,t0
    sltu v0,v1,t0
    bnezl v0,L253d5c
    subu v1,v1,a2
    sltu v0,v1,a2
    bnezl v0,L253d58
    addu v1,v1,t0
    nop
L253d58:
    subu v1,v1,a2
L253d5c:
    andi a0,t2,0xffff
    .word 0x0067001b
    beqzl a3,L253d6c
    .word 0x000001cd
L253d6c:
    mflo v0
    mfhi v1
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x004b3018
    or v1,v1,a0
    sltu v0,v1,a2
    beqzl v0,L253db4
    subu t2,v1,a2
    addu v1,v1,t0
    sltu v0,v1,t0
    bnez v0,L253db4
    subu t2,v1,a2
    sltu v0,v1,a2
    bnezl v0,L253db0
    addu v1,v1,t0
L253db0:
    subu t2,v1,a2
L253db4:
    .word 0x0145001b
    .word 0x0120382d
    nop
L253dc0:
    srl a0,t4,0x10
    beqzl a1,L253dcc
    .word 0x000001cd
L253dcc:
    mflo v0
    mfhi v1
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00473018
    or v1,v1,a0
    sltu v0,v1,a2
    beqzl v0,L253e14
    subu v1,v1,a2
    addu v1,v1,t0
    sltu v0,v1,t0
    bnezl v0,L253e14
    subu v1,v1,a2
    sltu v0,v1,a2
    bnezl v0,L253e10
    addu v1,v1,t0
L253e10:
    subu v1,v1,a2
L253e14:
    andi a0,t4,0xffff
    .word 0x0065001b
    beqzl a1,L253e24
    .word 0x000001cd
L253e24:
    mflo v0
    mfhi v1
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00473018
    or v1,v1,a0
    sltu v0,v1,a2
    beqz v0,L253e64
    nop
    addu v1,v1,t0
    sltu v0,v1,t0
    bnez v0,L253e64
    sltu v0,v1,a2
    bnezl v0,L253e64
    addu v1,v1,t0
L253e64:
    beqz t9,L2540c4
    subu t4,v1,a2
    srlv v0,t4,t5
    dsll32 v0,v0,0x0
    b L2540c0
    dsrl32 t7,v0,0x0
L253e7c:
    sltu v0,t2,t1
    beqz v0,L253e9c
    dsll32 v0,t4,0x0
    dsll32 v1,t2,0x0
    dsrl32 t7,v0,0x0
    or t7,t7,v1
    b L2540c4
    .word 0xffaf0000
L253e9c:
    ori v0,zero,65535
    sltu v0,v0,t1
    bnez v0,L253ec0
    .word 0x3c0200ff
    sltiu v0,t1,256
    addiu a2,zero,8
    b L253ed8
    movn a2,zero,v0
    nop
L253ec0:
    addiu a2,zero,24
    ori v0,v0,0xffff
    addiu v1,zero,16
    sltu v0,v0,t1
    movz a2,v1,v0
    nop
L253ed8:
    .word 0x3c02002f
    srlv a0,t1,a2
    addiu v0,v0,4584
    addiu a1,zero,32
    addu a0,a0,v0
    .word 0x90830000
    addu v1,v1,a2
    subu t5,a1,v1
    bnez t5,L253f40
    subu t6,a1,t5
    sltu v0,t1,t2
    bnez v0,L253f18
    subu a0,t4,t0
    sltu v0,t4,t0
    bnez v0,L253f28
    nop
L253f18:
    subu v1,t2,t1
    sltu v0,t4,a0
    subu t2,v1,v0
    .word 0x0080602d
L253f28:
    beqz t9,L2540c4
    dsll32 v0,t4,0x0
    dsll32 v1,t2,0x0
    dsrl32 t7,v0,0x0
    b L2540c0
    or t7,t7,v1
L253f40:
    sllv v1,t2,t5
    srlv a0,t0,t6
    srlv a3,t2,t6
    srlv v0,t4,t6
    sllv a1,t1,t5
    or t2,v1,v0
    or t1,a1,a0
    sllv t0,t0,t5
    sllv t4,t4,t5
    srl a2,t1,0x10
    .word 0x00e6001b
    andi a1,t1,0xffff
    srl a0,t2,0x10
    beqzl a2,L253f7c
    .word 0x000001cd
L253f7c:
    mflo v0
    mfhi v1
    .word 0x0040582d
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x01653818
    or v1,v1,a0
    sltu v0,v1,a3
    beqzl v0,L253fd4
    subu v1,v1,a3
    addu v1,v1,t1
    sltu v0,v1,t1
    bnez v0,L253fd0
    addiu t3,t3,-1
    sltu v0,v1,a3
    beqzl v0,L253fd4
    subu v1,v1,a3
    addiu t3,t3,-1
    addu v1,v1,t1
    nop
L253fd0:
    subu v1,v1,a3
L253fd4:
    beqzl a2,L253fdc
    .word 0x000001cd
L253fdc:
    .word 0x0066001b
    andi a0,t2,0xffff
    mflo v0
    mfhi v1
    .word 0x0040302d
    dsll32 v1,v1,0x0
    dsll v1,v1,0x10
    dsra32 v1,v1,0x0
    .word 0x00c53818
    or a1,v1,a0
    sltu v0,a1,a3
    beqz v0,L254038
    dsll32 v0,t3,0x0
    addu a1,a1,t1
    sltu v0,a1,t1
    bnez v0,L254034
    addiu a2,a2,-1
    sltu v0,a1,a3
    beqz v0,L254038
    dsll32 v0,t3,0x0
    addiu a2,a2,-1
    addu a1,a1,t1
L254034:
    dsll32 v0,t3,0x0
L254038:
    subu a1,a1,a3
    dsll v0,v0,0x10
    dsra32 v0,v0,0x0
    .word 0x00a0502d
    or v0,v0,a2
    .word 0x00480019
    mfhi a3
    mflo a2
    sltu v1,t2,a3
    bnez v1,L254078
    subu a0,a2,t0
    bne a3,t2,L254088
    sltu v0,t4,a2
    beqz v0,L254088
    nop
    nop
L254078:
    subu v1,a3,t1
    sltu v0,a2,a0
    subu a3,v1,v0
    .word 0x0080302d
L254088:
    beqz t9,L2540c4
    subu a0,t4,a2
    subu v1,a1,a3
    sltu v0,t4,a0
    subu t2,v1,v0
    sllv a1,t2,t6
    srlv a0,a0,t5
    srlv v0,t2,t5
    or a1,a1,a0
    dsll32 v0,v0,0x0
    dsll32 a1,a1,0x0
    dsrl32 t7,a1,0x0
    or t7,t7,v0
    nop
L2540c0:
    .word 0xff2f0000
L2540c4:
    beqz s0,L254120
    .word 0xdfa30000
    addiu a0,zero,-1
    dsll32 a0,a0,0x0
    and t8,t8,a0
    dsll32 v0,v1,0x0
    dsra32 v0,v0,0x0
    negu v0,v0
    dsra32 v1,v1,0x0
    dsll32 v0,v0,0x0
    negu v1,v1
    dsrl32 v0,v0,0x0
    or t8,t8,v0
    dsll32 a0,t8,0x0
    dsra32 a0,a0,0x0
    .word 0x3c02ffff
    dsrl32 v0,v0,0x0
    sltu a0,zero,a0
    and t8,t8,v0
    subu v1,v1,a0
    dsll32 v1,v1,0x0
    or t8,t8,v1
    .word 0xffb80000
L254120:
    .word 0xdfa20000
    .word 0xdfb00030
    jr ra
    addiu sp,sp,64
}
