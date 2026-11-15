extern void fn_1b4f50(void);
extern void fn_131d00(void);
extern void fn_178480(void);
extern void fn_1b6460(void);
extern void fn_133120(void);
extern void fn_244e70(void);
extern void fn_244e40(void);
extern void fn_249410(void);
extern void fn_170ba0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    bnez a1,L1b6f20
    paddub s0,a0,zero
    jal fn_1b4f50
    nop
    jal fn_131d00
    nop
    .word 0x3c017000
    .word 0x8c233fc0
    andi v1,v1,0x2
    bnez v1,L1b6cd0
    addiu a0,zero,3
    addiu v1,zero,1
    .word 0x3c010033
    .word 0xac238420
    addiu a0,zero,3
L1b6cd0:
    beq s0,a0,L1b6f08
    nop
    addiu a1,zero,1
    beq s0,a1,L1b6df0
    nop
    addiu v1,zero,2
    beq s0,v1,L1b6db4
    .word 0x3c017000
    beqz s0,L1b6d00
    nop
    b L1b6f24
    .word 0x7bbf0030
L1b6d00:
    .word 0x3c010030
    .word 0x9030a61f
    .word 0x3c020030
    .word 0x3c010030
    .word 0x8c31a614
    .word 0x3c010030
    .word 0x8c32a618
    jal fn_178480
    addiu a0,v0,-23024
    .word 0x3c010030
    .word 0x9022a61f
    bne s0,v0,L1b6d98
    addiu v0,zero,1
    .word 0x3c010030
    .word 0x8c22a614
    bne s1,v0,L1b6d94
    nop
    .word 0x3c010030
    .word 0x8c22a618
    bne s2,v0,L1b6d94
    nop
    .word 0x3c017000
    .word 0x8c243fd4
    .word 0x8c820000
    .word 0x8c420020
    jalr ra,v0
    nop
    .word 0x3c010030
    .word 0x8c24a610
    addiu v1,zero,6
    bne a0,v1,L1b6f20
    nop
    .word 0x3c020033
    jal fn_1b6460
    addiu a0,v0,-31744
    b L1b6f20
    nop
L1b6d94:
    addiu v0,zero,1
L1b6d98:
    .word 0x3c010030
    addiu a0,zero,3
    jal fn_133120
    .word 0xac22a42c
    b L1b6f20
    nop
    .word 0x3c017000
L1b6db4:
    .word 0x8c243fd4
    .word 0x8c820000
    .word 0x8c420020
    jalr ra,v0
    nop
    .word 0x3c010030
    .word 0x8c24a610
    addiu v1,zero,6
    bne a0,v1,L1b6f20
    nop
    .word 0x3c020033
    jal fn_1b6460
    addiu a0,v0,-31744
    b L1b6f20
    nop
L1b6df0:
    .word 0x3c010030
    .word 0x8c26a610
    addiu v1,zero,6
    beql a2,v1,L1b6e74
    addiu a0,zero,2
    addiu v1,zero,11
    beq a2,v1,L1b6e18
    nop
    b L1b6e8c
    nop
L1b6e18:
    .word 0x3c010033
    .word 0x8c242c4c
    addiu v1,zero,2
    beq a0,v1,L1b6e60
    nop
    beql a0,a1,L1b6e48
    addiu a0,zero,2
    beqz a0,L1b6e44
    nop
    b L1b6f20
    nop
L1b6e44:
    addiu a0,zero,2
L1b6e48:
    jal fn_133120
    nop
    jal fn_244e70
    nop
    b L1b6f20
    nop
L1b6e60:
    jal fn_244e40
    nop
    b L1b6f20
    nop
    addiu a0,zero,2
L1b6e74:
    jal fn_133120
    nop
    jal fn_249410
    nop
    b L1b6f20
    nop
L1b6e8c:
    .word 0x3c010030
    .word 0x9022a61f
    slti at,v0,6
    beqz at,L1b6edc
    nop
    .word 0x3c017000
    .word 0x8c303fd4
    addiu v0,v0,1
    .word 0x3c010030
    jal fn_170ba0
    .word 0xa022a61f
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xac22a42c
    .word 0x8e020000
    .word 0x8c420000
    jalr ra,v0
    paddub a0,s0,zero
    b L1b6f20
    nop
L1b6edc:
    .word 0x3c010030
    bne a2,a0,L1b6ef8
    .word 0xac25a42c
    jal fn_133120
    addiu a0,zero,13
    b L1b6f20
    nop
L1b6ef8:
    jal fn_133120
    addiu a0,zero,9
    b L1b6f20
    nop
L1b6f08:
    jal fn_170ba0
    nop
    addiu a0,zero,1
    .word 0x3c010030
    jal fn_133120
    .word 0xac24a42c
L1b6f20:
    .word 0x7bbf0030
L1b6f24:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}


