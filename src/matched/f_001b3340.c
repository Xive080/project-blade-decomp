extern void func_001c3b70(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffb0
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8cf3000c
    .word 0x70808e28
    .word 0x70c08628
    .word 0x8e640048
    jal func_001c3b70
    .word 0x70e09628
    .word 0x3c0a3f00
    .word 0x448a1800
    addiu v1,zero,-3
    .word 0x3c0abf00
    .word 0x448a1000
    addiu t3,zero,1
    .word 0x3c0abdcc
    ori t2,t2,0xcccd
    .word 0x448a0800
    .word 0x70002e28
    .word 0x3c0a3dcc
    ori t2,t2,0xcccd
    .word 0x448a0000
    .word 0x70003628
    .word 0x70003e28
    .word 0x70004628
    ori t1,zero,0xea94
    b L1b35c8
    .word 0x3c040004
L1b33bc:
    .word 0x8e6a004c
    addu t2,t2,a2
    bnel s1,t2,L1b35bc
    .word 0x24c60040
    .word 0x8e4a0008
    .word 0xc6060000
    .word 0xc6050004
    .word 0xc6040008
    ori at,zero,0xea04
    addu t2,t2,a3
    addu t2,t2,at
    .word 0xe5460000
    .word 0xe5450004
    .word 0xe5440008
    .word 0x8e4a0008
    .word 0xc606000c
    .word 0xc6050010
    .word 0xc6040014
    ori at,zero,0xea34
    addu t2,t2,a3
    addu t2,t2,at
    .word 0xe5460000
    .word 0xe5450004
    .word 0xe5440008
    .word 0x8e4a0008
    .word 0x8e0c0018
    addu t2,t2,t0
    addu t2,t2,t1
    .word 0xad4c0000
    .word 0x8e4c0008
    .word 0xc4490010
    .word 0xc608000c
    .word 0xc4470014
    .word 0xc6060010
    .word 0xc4450018
    .word 0xc6040014
    .word 0x8d8a003c
    mul.s $f8,$f9,$f8
    mul.s $f6,$f7,$f6
    adda.s $f8,$f6
    bne t2,a0,L1b3488
    madd.s $f4,$f5,$f4
    addu t4,t4,t0
    .word 0x3c010001
    addu at,t4,at
    .word 0x8c2aea94
    .word 0x3c010001
    addu at,t4,at
    and t2,t2,v1
    .word 0xac2aea94
    nop
L1b3488:
    c.le.s $f4,$f3
    nop
    bc1f L1b34a8
    nop
    c.lt.s $f4,$f2
    nop
    bc1f L1b3518
    nop
L1b34a8:
    .word 0x8e0c0018
    andi t2,t4,0x2
    beqz t2,L1b3518
    nop
    .word 0x8e4d0008
    .word 0x8daa003c
    beq t2,a0,L1b3518
    nop
    .word 0x8e420004
    andi v0,v0,0x200
    beqz v0,L1b34fc
    sll v0,a1,0x2
    andi v0,t4,0x200
    bnez v0,L1b34f8
    sll v0,a1,0x2
    addu v0,v0,t5
    .word 0x3c010001
    addu at,v0,at
    b L1b3510
    .word 0xac20ea74
L1b34f8:
    sll v0,a1,0x2
L1b34fc:
    addu v0,v0,t5
    .word 0x3c010001
    addiu v1,zero,1
    addu at,v0,at
    .word 0xac23ea74
L1b3510:
    b L1b35e8
    .word 0x70001628
L1b3518:
    .word 0xc6040010
    c.le.s $f4,$f1
    nop
    bc1t L1b3574
    nop
    c.lt.s $f4,$f0
    nop
    bc1f L1b3574
    nop
    .word 0x8e430008
    sll a1,a1,0x2
    .word 0x3c010001
    addiu a0,zero,1
    .word 0x70001628
    addu v1,a1,v1
    addu at,v1,at
    .word 0xac20ea74
    .word 0x8e430008
    .word 0x3c010001
    addu v1,a1,v1
    addu at,v1,at
    b L1b35e8
    .word 0xac24ea84
L1b3574:
    .word 0x8e0a0018
    andi t2,t2,0x4
    beqz t2,L1b35a4
    nop
    .word 0x8e440008
    sll v1,a1,0x2
    .word 0x3c010001
    .word 0x70001628
    addu v1,v1,a0
    addu at,v1,at
    b L1b35e8
    .word 0xac20ea74
L1b35a4:
    .word 0x8e4a0008
    .word 0x3c010001
    addu t2,t2,t0
    addu at,t2,at
    .word 0xac2bea74
    .word 0x24c60040
L1b35bc:
    .word 0x24e7000c
    .word 0x25080004
    .word 0x24a50001
L1b35c8:
    .word 0x8e6a0050
    slt t2,a1,t2
    bnez t2,L1b33bc
    nop
    .word 0x8e420004
    andi v0,v0,0x1000
    movz s0,zero,v0
    .word 0x72001628
L1b35e8:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    .word 0x27bd0050
}
