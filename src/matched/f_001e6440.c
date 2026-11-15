asm void func(void) {
.set noreorder
.set noat
    addiu sp,sp,-2112
    b L1e6730
    .word 0x70003628
L1e644c:
    addiu t3,sp,0
L1e6450:
    .word 0x70004628
    .word 0x71604e28
    b L1e6488
    addu t2,a2,a3
L1e6460:
    .word 0x8c850018
    .word 0x8c830004
    .word 0x00aa2818
    addu v1,v1,a1
    addu v1,v1,t0
    .word 0x78630000
    addiu t0,t0,16
    .word 0x7d230000
    addiu t1,t1,16
    nop
L1e6488:
    .word 0x8c83000c
    sra v1,v1,0x1
    slt v1,t0,v1
    bnez v1,L1e6460
    nop
    addiu a3,a3,1
    slti v1,a3,4
    bnez v1,L1e6450
    addiu t3,t3,512
    addiu a3,sp,2048
    .word 0x70005628
    b L1e6718
    andi t0,a2,0x4
    .word 0x70001e28
L1e64c0:
    .word 0x70002e28
L1e64c4:
    nop
L1e64c8:
    beqz t0,L1e6538
    addu t1,v1,a1
    addu t1,v1,a1
    andi t3,t1,0x2
    sll t4,t3,0x2
    andi t3,t1,0x20
    sra t3,t3,0x1
    or t4,t4,t3
    andi t3,t1,0x4
    sra t3,t3,0x2
    or t4,t3,t4
    andi t3,t1,0x8
    sra t3,t3,0x2
    or t4,t3,t4
    andi t3,t1,0x10
    sra t3,t3,0x2
    or t4,t3,t4
    andi t3,t1,0x40
    sra t3,t3,0x1
    or t4,t3,t4
    andi t3,t1,0x1
    nor t1,t1,zero
    andi t1,t1,0x1
    sll t3,t3,0x6
    sll t1,t1,0x2
    or t1,t3,t1
    b L1e6590
    xor t4,t4,t1
L1e6538:
    andi t3,t1,0x2
    sll t4,t3,0x2
    andi t3,t1,0x20
    sra t3,t3,0x1
    or t4,t4,t3
    andi t3,t1,0x4
    sra t3,t3,0x2
    or t4,t3,t4
    andi t3,t1,0x8
    sra t3,t3,0x2
    or t4,t3,t4
    andi t3,t1,0x10
    sra t3,t3,0x2
    or t4,t3,t4
    andi t3,t1,0x40
    sra t3,t3,0x1
    or t4,t3,t4
    andi t1,t1,0x1
    sll t3,t1,0x6
    sll t1,t1,0x2
    or t1,t3,t1
    xor t4,t4,t1
L1e6590:
    andi t1,a1,0x1
    beqz t1,L1e6618
    andi t1,t4,0x1
    andi t1,t4,0x1
    beqz t1,L1e65d0
    sra t1,t4,0x5
    sra t1,t4,0x5
    sll t3,t1,0xa
    andi t1,t4,0x1f
    addu t1,t2,t1
    addu t1,t3,t1
    sra t1,t1,0x1
    addu t1,t1,sp
    lbu t1,0(t1)
    b L1e65f4
    andi t1,t1,0xf0
L1e65d0:
    sll t3,t1,0xa
    andi t1,t4,0x1f
    addu t1,t2,t1
    addu t1,t3,t1
    sra t1,t1,0x1
    addu t1,t1,sp
    lbu t1,0(t1)
    andi t1,t1,0xf
    sll t1,t1,0x4
L1e65f4:
    andi t4,t1,0xff
    addu t1,v1,a1
    sra t1,t1,0x1
    addu t3,a3,t1
    lbu t1,0(t3)
    or t1,t1,t4
    b L1e6680
    sb t1,0(t3)
    andi t1,t4,0x1
L1e6618:
    beqz t1,L1e664c
    sra t1,t4,0x5
    sra t1,t4,0x5
    sll t3,t1,0xa
    andi t1,t4,0x1f
    addu t1,t2,t1
    addu t1,t3,t1
    sra t1,t1,0x1
    addu t1,t1,sp
    lbu t1,0(t1)
    sra t1,t1,0x4
    b L1e666c
    andi t3,t1,0xf
L1e664c:
    sll t3,t1,0xa
    andi t1,t4,0x1f
    addu t1,t2,t1
    addu t1,t3,t1
    sra t1,t1,0x1
    addu t1,t1,sp
    lbu t1,0(t1)
    andi t3,t1,0xf
L1e666c:
    addu t1,v1,a1
    sra t1,t1,0x1
    addu t1,a3,t1
    sb t3,0(t1)
    nop
L1e6680:
    addiu a1,a1,1
    slti t1,a1,32
    bnez t1,L1e64c8
    nop
    addiu v1,v1,32
    slti a1,v1,128
    bnez a1,L1e64c4
    .word 0x70002e28
    .word 0x8c850018
    .word 0x8c830004
    .word 0x7ba90800
    addiu t3,a2,2
    .word 0x00c52818
    addu v1,v1,a1
    addu v1,v1,t2
    .word 0x7c690000
    .word 0x8c850018
    .word 0x8c830004
    .word 0x7ba90810
    .word 0x70c52818
    addu v1,v1,a1
    addu v1,v1,t2
    .word 0x7c690010
    .word 0x8c850018
    .word 0x8c830004
    .word 0x7ba90820
    .word 0x01652818
    addu v1,v1,a1
    addu v1,v1,t2
    .word 0x7c690000
    .word 0x8c850018
    .word 0x8c830004
    .word 0x7ba90830
    .word 0x01652818
    addu v1,v1,a1
    addu v1,v1,t2
    .word 0x7c690010
    addiu t2,t2,32
L1e6718:
    .word 0x8c83000c
    slt v1,t2,v1
    bnez v1,L1e64c0
    .word 0x70001e28
    addiu a2,a2,4
    nop
L1e6730:
    .word 0x8c830010
    slt v1,a2,v1
    bnez v1,L1e644c
    .word 0x70003e28
    jr ra
    addiu sp,sp,2112
}
