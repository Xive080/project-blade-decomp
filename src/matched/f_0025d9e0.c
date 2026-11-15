extern void func_00109d00(void);
extern void func_00109d20(void);
extern void func_0010cdc8(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    .word 0x7fbf0040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0x8cb00000
    .word 0x70c09628
    addiu a1,zero,1
    beq a3,a1,L25dc00
    .word 0x71008e28
    addiu v0,zero,3
    beq a3,v0,L25db48
    nop
    addiu v0,zero,2
    beq a3,v0,L25da28
    nop
    b L25dcac
    addiu v0,zero,-1
L25da28:
    .word 0x8e06000c
    .word 0x8e070004
    .word 0x70001628
    slti at,a2,2048
    beqz at,L25da48
    addu a0,a3,s2
    .word 0x70a01628
    subu v1,a3,a2
L25da48:
    beqzl v0,L25da80
    sra v1,a0,0xb
    slt v0,a0,v1
    bnez v0,L25da7c
    nop
    addiu v0,v1,2048
    slt at,a0,v0
    beqz at,L25da7c
    nop
    subu v0,a0,v1
    .word 0xae02000c
    b L25dcb4
    .word 0xae040004
L25da7c:
    sra v1,a0,0xb
L25da80:
    bgez a0,L25da94
    sra v0,a3,0xb
    addiu v0,a0,2047
    sra v1,v0,0xb
    sra v0,a3,0xb
L25da94:
    bgez a3,L25daa8
    subu a1,v1,v0
    addiu v0,a3,2047
    sra v0,v0,0xb
    subu a1,v1,v0
L25daa8:
    addiu v0,zero,2048
    .word 0xae040004
    .word 0xae02000c
    addiu v0,zero,4
    beqz s1,L25dacc
    .word 0xae020014
    addiu v0,zero,1
    b L25dad0
    .word 0xae020018
L25dacc:
    .word 0xae000018
L25dad0:
    .word 0x8e030000
    .word 0x3c010033
    .word 0x8f848a18
    addiu v0,zero,1
    .word 0xac2335c0
    .word 0x3c010033
    .word 0xac2535c4
    .word 0x3c010033
    jal func_00109d20
    .word 0xac2235c8
    .word 0x3c020033
    addiu a3,v0,13760
    .word 0x3c020033
    addiu a0,v0,13648
    addiu a1,zero,6
    addiu t0,zero,16
    .word 0x70003628
    .word 0x70004e28
    .word 0x70005628
    .word 0x70005e28
    jal func_0010cdc8
    .word 0xffa00000
    jal func_00109d00
    .word 0x8f848a18
    beqz s1,L25dcb4
    nop
    jal func_00109d20
    .word 0x8f848a1c
    b L25dcb8
    .word 0x8e020004
L25db48:
    .word 0x8e040008
    addiu v1,zero,2048
    addiu v0,zero,4
    subu a0,a0,s2
    .word 0xae040004
    .word 0xae03000c
    beqz s1,L25db70
    .word 0xae020014
    b L25db74
    .word 0xae050018
L25db70:
    .word 0xae000018
L25db74:
    .word 0x8e020000
    .word 0x3c010033
    .word 0xac2235c0
    .word 0x8e030004
    bgez v1,L25db94
    sra v0,v1,0xb
    addiu v0,v1,2047
    sra v0,v0,0xb
L25db94:
    .word 0x8f848a18
    .word 0x3c010033
    .word 0xac2235c4
    addiu v0,zero,2
    .word 0x3c010033
    jal func_00109d20
    .word 0xac2235c8
    .word 0x3c020033
    addiu a3,v0,13760
    .word 0x3c020033
    addiu a0,v0,13648
    addiu a1,zero,6
    addiu t0,zero,16
    .word 0x70003628
    .word 0x70004e28
    .word 0x70005628
    .word 0x70005e28
    jal func_0010cdc8
    .word 0xffa00000
    jal func_00109d00
    .word 0x8f848a18
    beqz s1,L25dcb4
    nop
    jal func_00109d20
    .word 0x8f848a1c
    b L25dcb4
    nop
L25dc00:
    addiu v0,zero,2048
    .word 0xae120004
    .word 0xae02000c
    addiu v0,zero,4
    beqz s1,L25dc20
    .word 0xae020014
    b L25dc24
    .word 0xae050018
L25dc20:
    .word 0xae000018
L25dc24:
    .word 0x8e030000
    .word 0x3c010033
    sra v0,s2,0xb
    bgez s2,L25dc40
    .word 0xac2335c0
    addiu v0,s2,2047
    sra v0,v0,0xb
L25dc40:
    .word 0x8f848a18
    .word 0x3c010033
    .word 0xac2235c4
    .word 0x3c010033
    jal func_00109d20
    .word 0xac2035c8
    .word 0x3c020033
    addiu a3,v0,13760
    .word 0x3c020033
    addiu a0,v0,13648
    addiu a1,zero,6
    addiu t0,zero,16
    .word 0x70003628
    .word 0x70004e28
    .word 0x70005628
    .word 0x70005e28
    jal func_0010cdc8
    .word 0xffa00000
    jal func_00109d00
    .word 0x8f848a18
    beqz s1,L25dcb4
    nop
    jal func_00109d20
    .word 0x8f848a1c
    b L25dcb4
    nop
    addiu v0,zero,-1
L25dcac:
    b L25dccc
    .word 0x7bbf0040
L25dcb4:
    .word 0x8e020004
L25dcb8:
    bgez v0,L25dcc4
    nop
    addiu s2,zero,-1
L25dcc4:
    .word 0x72401628
    .word 0x7bbf0040
L25dccc:
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    jr ra
    addiu sp,sp,80
}
