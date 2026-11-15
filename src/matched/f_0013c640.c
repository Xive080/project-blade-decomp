extern void func_001ca2d0(void);
extern void func_00121530(void);
asm void func_0013c640(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x3c020030
    addiu s0,v0,-21880
    paddub a2,a1,zero
    jal func_001ca2d0
    paddub a1,s0,zero
    .word 0x3c020030
    addiu s2,v0,-5024
    b L13c680
    .word 0x70008e28
    addiu s0,s0,1
L13c67c:
    nop
L13c680:
    .word 0x82020000
    addiu v1,zero,32
    bnel v0,v1,L13c67c
    addiu s0,s0,1
    b L13c6a4
    .word 0x82020000
L13c698:
    addiu s0,s0,1
    nop
    .word 0x82020000
L13c6a4:
    nop
    nop
    nop
    beq v0,v1,L13c698
    nop
    .word 0x3c02002f
    addiu a1,v0,-16144
    paddub a0,s0,zero
    jal func_00121530
    paddub a2,s2,zero
    addiu s1,s1,1
    sltiu v0,s1,30
    bnez v0,L13c680
    addiu s2,s2,4
    b L13c6e8
    addiu v0,zero,10
L13c6e4:
    addiu s0,s0,1
L13c6e8:
    .word 0x82030000
    nop
    nop
    nop
    bne v1,v0,L13c6e4
    nop
    .word 0x3c020030
    addiu s0,s0,1
    addiu s1,v0,-5152
    b L13c718
    .word 0x70009628
    addiu s0,s0,1
L13c718:
    .word 0x82020000
    addiu v1,zero,32
    bnel v0,v1,L13c718
    addiu s0,s0,1
    b L13c73c
    .word 0x82020000
L13c730:
    addiu s0,s0,1
    nop
    .word 0x82020000
L13c73c:
    nop
    nop
    nop
    beq v0,v1,L13c730
    nop
    .word 0x3c02002f
    addiu a1,v0,-16144
    paddub a0,s0,zero
    jal func_00121530
    paddub a2,s1,zero
    addiu s2,s2,1
    sltiu v0,s2,30
    bnez v0,L13c718
    addiu s1,s1,4
    b L13c780
    addiu v0,zero,10
L13c77c:
    addiu s0,s0,1
L13c780:
    .word 0x82030000
    nop
    nop
    nop
    bne v1,v0,L13c77c
    nop
    .word 0x3c020030
    addiu s0,s0,1
    addiu s1,v0,-5184
    b L13c7b0
    .word 0x70009628
    addiu s0,s0,1
L13c7b0:
    .word 0x82020000
    addiu v1,zero,32
    bnel v0,v1,L13c7b0
    addiu s0,s0,1
    b L13c7d4
    .word 0x82020000
L13c7c8:
    addiu s0,s0,1
    nop
    .word 0x82020000
L13c7d4:
    nop
    nop
    nop
    beq v0,v1,L13c7c8
    nop
    .word 0x3c02002f
    addiu a1,v0,-16144
    paddub a0,s0,zero
    jal func_00121530
    paddub a2,s1,zero
    addiu s2,s2,1
    sltiu v0,s2,6
    bnez v0,L13c7b0
    addiu s1,s1,4
    b L13c818
    addiu v0,zero,10
L13c814:
    addiu s0,s0,1
L13c818:
    .word 0x82030000
    nop
    nop
    nop
    bne v1,v0,L13c814
    nop
    .word 0x3c020030
    addiu s0,s0,1
    addiu s1,v0,-5232
    b L13c848
    .word 0x70009628
    addiu s0,s0,1
L13c848:
    .word 0x82020000
    addiu v1,zero,32
    bnel v0,v1,L13c848
    addiu s0,s0,1
    b L13c86c
    .word 0x82020000
L13c860:
    addiu s0,s0,1
    nop
    .word 0x82020000
L13c86c:
    nop
    nop
    nop
    beq v0,v1,L13c860
    nop
    .word 0x3c02002f
    addiu a1,v0,-16144
    paddub a0,s0,zero
    jal func_00121530
    paddub a2,s1,zero
    addiu s2,s2,1
    sltiu v0,s2,9
    bnez v0,L13c848
    addiu s1,s1,4
    b L13c8b0
    addiu v0,zero,10
L13c8ac:
    addiu s0,s0,1
L13c8b0:
    .word 0x82030000
    nop
    nop
    nop
    bne v1,v0,L13c8ac
    nop
    .word 0x3c020030
    addiu s0,s0,1
    addiu s1,v0,-5280
    b L13c8e0
    .word 0x70009628
    addiu s0,s0,1
L13c8e0:
    .word 0x82020000
    addiu v1,zero,32
    bnel v0,v1,L13c8e0
    addiu s0,s0,1
    b L13c904
    .word 0x82020000
L13c8f8:
    addiu s0,s0,1
    nop
    .word 0x82020000
L13c904:
    nop
    nop
    nop
    beq v0,v1,L13c8f8
    nop
    .word 0x3c02002f
    addiu a1,v0,-16144
    paddub a0,s0,zero
    jal func_00121530
    paddub a2,s1,zero
    addiu s2,s2,1
    sltiu v0,s2,9
    bnez v0,L13c8e0
    addiu s1,s1,4
    b L13c948
    addiu v0,zero,10
L13c944:
    addiu s0,s0,1
L13c948:
    .word 0x82030000
    nop
    nop
    nop
    bne v1,v0,L13c944
    nop
    .word 0x3c020030
    addiu s0,s0,1
    addiu s1,v0,-5312
    b L13c978
    .word 0x70009628
    addiu s0,s0,1
L13c978:
    .word 0x82020000
    addiu v1,zero,32
    bnel v0,v1,L13c978
    addiu s0,s0,1
    b L13c99c
    .word 0x82020000
L13c990:
    addiu s0,s0,1
    nop
    .word 0x82020000
L13c99c:
    nop
    nop
    nop
    beq v0,v1,L13c990
    nop
    .word 0x3c02002f
    addiu a1,v0,-16144
    paddub a0,s0,zero
    jal func_00121530
    paddub a2,s1,zero
    addiu s2,s2,1
    sltiu v0,s2,5
    bnez v0,L13c978
    addiu s1,s1,4
    b L13c9e0
    addiu v0,zero,10
L13c9dc:
    addiu s0,s0,1
L13c9e0:
    .word 0x82030000
    nop
    nop
    nop
    bne v1,v0,L13c9dc
    nop
    .word 0x3c020030
    addiu s0,s0,1
    addiu s1,v0,-5344
    b L13ca10
    .word 0x70009628
    addiu s0,s0,1
L13ca10:
    .word 0x82020000
    addiu v1,zero,32
    bnel v0,v1,L13ca10
    addiu s0,s0,1
    b L13ca34
    .word 0x82020000
L13ca28:
    addiu s0,s0,1
    nop
    .word 0x82020000
L13ca34:
    nop
    nop
    nop
    beq v0,v1,L13ca28
    nop
    .word 0x3c02002f
    addiu a1,v0,-16144
    paddub a0,s0,zero
    jal func_00121530
    paddub a2,s1,zero
    addiu s2,s2,1
    sltiu v0,s2,5
    bnez v0,L13ca10
    addiu s1,s1,4
    b L13ca78
    addiu v0,zero,10
L13ca74:
    addiu s0,s0,1
L13ca78:
    .word 0x82030000
    nop
    nop
    nop
    bne v1,v0,L13ca74
    nop
    addiu s0,s0,1
    addiu s1,gp,-31952
    b L13caa8
    .word 0x70009628
    addiu s0,s0,1
L13caa4:
    nop
L13caa8:
    .word 0x82020000
    addiu v1,zero,32
    bnel v0,v1,L13caa4
    addiu s0,s0,1
    b L13cacc
    .word 0x82020000
L13cac0:
    addiu s0,s0,1
    nop
    .word 0x82020000
L13cacc:
    nop
    nop
    nop
    beq v0,v1,L13cac0
    nop
    .word 0x3c02002f
    addiu a1,v0,-16144
    paddub a0,s0,zero
    jal func_00121530
    paddub a2,s1,zero
    addiu s2,s2,1
    beqz s2,L13caa8
    addiu s1,s1,4
    b L13cb10
    addiu v0,zero,10
L13cb08:
    addiu s0,s0,1
    nop
L13cb10:
    .word 0x82030000
    nop
    nop
    nop
    bne v1,v0,L13cb08
    nop
    addiu s0,s0,1
    addiu s1,gp,-31956
    b L13cb40
    .word 0x70009628
    addiu s0,s0,1
L13cb3c:
    nop
L13cb40:
    .word 0x82020000
    addiu v1,zero,32
    bnel v0,v1,L13cb3c
    addiu s0,s0,1
    b L13cb64
    .word 0x82020000
L13cb58:
    addiu s0,s0,1
    nop
    .word 0x82020000
L13cb64:
    nop
    nop
    nop
    beq v0,v1,L13cb58
    nop
    .word 0x3c02002f
    addiu a1,v0,-16144
    paddub a0,s0,zero
    jal func_00121530
    paddub a2,s1,zero
    addiu s2,s2,1
    beqz s2,L13cb40
    addiu s1,s1,4
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,64
}


