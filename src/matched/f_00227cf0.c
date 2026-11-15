extern void func_0011eac8(void);
extern void func_00133120(void);
extern void func_001b4b20(void);
extern void func_00242b20(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,5
    paddub s1,a1,zero
    paddub s0,a2,zero
    beq s1,v0,L227e90
    paddub s2,a0,zero
    addiu v0,zero,4
    beq s1,v0,L227e20
    nop
    addiu v0,zero,3
    beq s1,v0,L227df0
    nop
    addiu v0,zero,2
    beq s1,v0,L227d80
    nop
    beqz s1,L227d50
    nop
    b L227ec0
    paddub a0,s2,zero
L227d50:
    .word 0x8f8484ac
    .word 0xafa00050
    .word 0xafa00054
    .word 0xafa00058
    beqz a0,L227ebc
    .word 0xafa0005c
    .word 0x8c820010
    addiu a2,sp,80
    jalr ra,v0
    addiu a1,zero,14
    b L227ebc
    nop
L227d80:
    .word 0x8e030000
    addiu a1,s0,512
    addiu a2,zero,30
    sll v0,v1,0x4
    addu v0,v0,v1
    sll v0,v0,0x2
    addu v0,s2,v0
    addiu s3,v0,56
    jal func_0011eac8
    addiu a0,s3,16
    addiu a0,s3,46
    addiu a1,s0,542
    jal func_0011eac8
    addiu a2,zero,6
    addiu a0,s3,52
    addiu a1,s0,548
    jal func_0011eac8
    addiu a2,zero,6
    addiu a0,s3,58
    addiu a1,s0,554
    jal func_0011eac8
    addiu a2,zero,9
    addiu a0,s3,67
    addiu a1,s0,568
    jal func_0011eac8
    addiu a2,zero,1
    b L227ebc
    nop
L227df0:
    .word 0x8e43000c
    addiu v0,zero,1
    beq v1,v0,L227e08
    nop
    b L227ebc
    nop
L227e08:
    .word 0x8e420000
    .word 0x8c420018
    jalr ra,v0
    addiu a1,zero,2
    b L227ed0
    .word 0x7bbf0040
L227e20:
    .word 0x3c010030
    .word 0xc42170d0
    .word 0x3c010030
    .word 0xc4207680
    c.eq.s $f1,$f0
    nop
    bc1t L227e80
    addiu a0,zero,7
    c.le.s $f1,$f0
    nop
    bc1t L227e68
    nop
    jal func_001b4b20
    nop
    .word 0x8c430000
    addiu v1,v1,1
    b L227e7c
    .word 0xac430000
L227e68:
    jal func_001b4b20
    nop
    .word 0x8c430004
    addiu v1,v1,1
    .word 0xac430004
L227e7c:
    addiu a0,zero,7
L227e80:
    jal func_00133120
    nop
    b L227ebc
    nop
L227e90:
    .word 0x8e43000c
    addiu v0,zero,8
    beq v1,v0,L227eb4
    addiu a0,zero,5
    addiu v0,v1,-9
    sltiu at,v0,2
    beqz at,L227ebc
    nop
    addiu a0,zero,5
L227eb4:
    jal func_00133120
    nop
L227ebc:
    paddub a0,s2,zero
L227ec0:
    paddub a1,s1,zero
    jal func_00242b20
    paddub a2,s0,zero
    .word 0x7bbf0040
L227ed0:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
