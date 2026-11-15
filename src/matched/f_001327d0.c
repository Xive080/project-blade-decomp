extern void func_001a7540(void);
extern void func_001a76f0(void);
extern void func_001b5c80(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    .word 0x3c03bf80
    .word 0x7fbf0020
    .word 0x7fb00010
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0x44830000
    .word 0xe7b40000
    c.eq.s $f0,$f12
    .word 0x70808628
    mov.s $f22,$f13
    bc1t L13288c
    mov.s $f21,$f14
    .word 0x3c010030
    lw a0,-22988(at)
    addiu v1,zero,-1
    beq a0,v1, L132884
    mov.s $f20,$f12
    .word 0x3c010030
    lw v1,-22832(at)
    addiu v0,zero,2
    beq v1,v0, L132848
    nop
    addiu v0,zero,1
    beq v1,v0, L132848
    nop
    beqz v1, L132848
    nop
    b L13285c
    .word 0x3c023f80
L132848:
    jal func_001b5c80
    nop
    b L132860
    nop
    .word 0x3c023f80
L13285c:
    .word 0x44820000
L132860:
    .word 0x3c010030
    mul.s $f20,$f20,$f0
    lw a0,-22988(at)
    jal func_001a76f0
    mov.s $f12,$f20
    .word 0x3c03bf80
    .word 0x3c010030
    b L13288c
    sw v1,-22868(at)
L132884:
    .word 0x3c010030
    .word 0xe42ca6ac
L13288c:
    .word 0x3c010030
    lw a0,-22988(at)
    addiu v1,zero,-1
    beq a0,v1, L132924
    nop
    .word 0x3c010030
    lw v1,-22832(at)
    addiu v0,zero,2
    beq v1,v0, L1328d0
    nop
    addiu v0,zero,1
    beq v1,v0, L1328d0
    nop
    beqz v1, L1328d0
    nop
    b L1328e4
    .word 0x3c023f80
L1328d0:
    jal func_001b5c80
    nop
    b L1328e8
    nop
    .word 0x3c023f80
L1328e4:
    .word 0x44820000
L1328e8:
    .word 0x3c010030
    mul.s $f22,$f22,$f0
    lw a0,-22988(at)
    mov.s $f13,$f21
    jal func_001a7540
    mov.s $f12,$f22
    .word 0x3c010030
    beqz s0, L13292c
    sw s0,-22904(at)
    .word 0x3c017000
    .word 0xc4203fb0
    add.s $f0,$f21,$f0
    .word 0x3c010030
    b L13292c
    .word 0xe420a6a0
L132924:
    .word 0x3c010030
    .word 0xe436a6ac
L13292c:
    .word 0x7bbf0020
    .word 0x7bb00010
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    addiu sp,sp,48
}
