extern void func_0010a530(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-16
    .word 0x7fbf0000
    .word 0x90860023
    addiu v1,zero,37
    andi a2,a2,0x6f
    beq a2,v1,L1edaf0
    addiu v1,zero,33
    beq a2,v1,L1eda58
    addiu v1,zero,32
    beq a2,v1,L1eda58
    addiu v1,zero,69
    beq a2,v1,L1ed9dc
    addiu v1,zero,65
    beq a2,v1,L1ed96c
    addiu v1,zero,64
    beq a2,v1,L1ed96c
    nop
    b L1edb90
    .word 0x7bbf0000
L1ed96c:
    .word 0x8c8a0008
    .word 0x70004e28
L1ed974:
    .word 0x90a80002
    .word 0x90a70001
    .word 0x90a60000
    .word 0x90a30003
    addiu t1,t1,1
    slti v0,t1,16
    sll t0,t0,0x7
    sll a3,a3,0x2
    andi t0,t0,0x7c00
    andi a3,a3,0x3e0
    sll v1,v1,0x8
    or a3,t0,a3
    srl a2,a2,0x3
    or a2,a2,a3
    andi v1,v1,0x8000
    or v1,v1,a2
    .word 0xa5430000
    addiu t2,t2,2
    bnez v0,L1ed974
    addiu a1,a1,4
    .word 0x8c840008
    addiu v0,a0,32
    jal func_0010a530
    addiu a1,v0,127
    b L1edb8c
    nop
L1ed9dc:
    .word 0x8c8a0008
    .word 0x70005e28
    .word 0x3c06ff00
L1ed9e8:
    .word 0x90a90002
    .word 0x90a80001
    .word 0x90a30000
    .word 0x90a70003
    addiu t3,t3,1
    slti v0,t3,16
    sll t1,t1,0x10
    sll t0,t0,0x8
    or t0,t1,t0
    or t0,v1,t0
    sll v1,a3,0x8
    addu v1,v1,a3
    sll v1,v1,0x8
    addu v1,v1,a3
    sll v1,v1,0x7
    addu v1,v1,a3
    and v1,v1,a2
    or v1,t0,v1
    .word 0xad430000
    addiu t2,t2,4
    bnez v0,L1ed9e8
    addiu a1,a1,4
    .word 0x8c840008
    addiu v0,a0,64
    jal func_0010a530
    addiu a1,v0,127
    b L1edb8c
    nop
L1eda58:
    .word 0x8c820008
    .word 0x3c03002f
    .word 0x70003628
    addiu v1,v1,2048
L1eda68:
    sra a3,a2,0x3
    andi a3,a3,0x3
    sll a3,a3,0x2
    addu a3,v1,a3
    .word 0x8ce80000
    andi t1,a2,0xe7
    addiu a2,a2,1
    or t0,t1,t0
    sll t0,t0,0x2
    addu t0,a1,t0
    .word 0x910b0002
    .word 0x910a0001
    .word 0x91090000
    slti a3,a2,256
    sll t3,t3,0x7
    sll t2,t2,0x2
    .word 0x91080003
    andi t3,t3,0x7c00
    andi t2,t2,0x3e0
    or t2,t3,t2
    srl t1,t1,0x3
    or t1,t1,t2
    sll t0,t0,0x8
    andi t0,t0,0x8000
    or t0,t0,t1
    .word 0xa4480000
    bnez a3,L1eda68
    addiu v0,v0,2
    .word 0x8c840008
    addiu v0,a0,512
    jal func_0010a530
    addiu a1,v0,127
    b L1edb8c
    nop
L1edaf0:
    .word 0x8c820008
    .word 0x3c03002f
    .word 0x70003628
    addiu v1,v1,2048
    .word 0x3c09ff00
L1edb04:
    sra a3,a2,0x3
    andi a3,a3,0x3
    sll a3,a3,0x2
    addu a3,v1,a3
    .word 0x8ce80000
    andi t2,a2,0xe7
    addiu a2,a2,1
    or t0,t2,t0
    sll t0,t0,0x2
    addu t2,a1,t0
    .word 0x914c0002
    .word 0x914b0001
    .word 0x91480000
    slti a3,a2,256
    sll t4,t4,0x10
    sll t3,t3,0x8
    .word 0x914a0003
    or t3,t4,t3
    or t3,t0,t3
    sll t0,t2,0x8
    addu t0,t0,t2
    sll t0,t0,0x8
    addu t0,t0,t2
    sll t0,t0,0x7
    addu t0,t0,t2
    and t0,t0,t1
    or t0,t3,t0
    .word 0xac480000
    bnez a3,L1edb04
    addiu v0,v0,4
    .word 0x8c840008
    addiu v0,a0,1024
    jal func_0010a530
    addiu a1,v0,127
L1edb8c:
    .word 0x7bbf0000
L1edb90:
    jr ra
    addiu sp,sp,16
}


