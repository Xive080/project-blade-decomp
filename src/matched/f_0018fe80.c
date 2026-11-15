extern void func_0012b7e0(void);
extern void func_00190740(void);
extern void func_001c3b00(void);
extern void func_001c3b80(void);
extern void func_001ce160(void);
extern void func_001f79f0(void);
asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c010031
    .word 0x8c282704
    .word 0x3c027f7f
    ori v0,v0,0xffff
    mtc1 v0,$f8
    .word 0x3c010031
    .word 0x8c232700
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x2
    addu v1,t0,v0
    sltu at,t0,v1
    beqz at,L18ff78
    addiu a1,zero,-1
    .word 0x3c023f00
    mtc1 v0,$f9
    paddub a2,zero,zero
L18fec4:
    b L18ff58
    paddub a3,zero,zero
L18fecc:
    .word 0x8d02000c
    .word 0x8c890414
    addu v0,v0,a3
    .word 0xc5210030
    .word 0xc4470000
    .word 0xc442000c
    .word 0xc4460004
    .word 0xc4450010
    .word 0xc4440008
    .word 0xc4430014
    .word 0xc5200034
    add.s $f7,$f7,$f2
    add.s $f3,$f4,$f3
    .word 0xc5220038
    add.s $f5,$f6,$f5
    mul.s $f4,$f9,$f7
    mul.s $f5,$f9,$f5
    sub.s $f4,$f4,$f1
    sub.s $f5,$f5,$f0
    mul.s $f3,$f9,$f3
    mul.s $f1,$f4,$f4
    mul.s $f0,$f5,$f5
    sub.s $f3,$f3,$f2
    adda.s $f1,$f0
    madd.s $f0,$f3,$f3
    c.lt.s $f0,$f8
    nop
    bc1fl L18ff54
    addiu a3,a3,24
    .word 0xac88041c
    mov.s $f8,$f0
    paddub a1,a2,zero
    nop
    addiu a3,a3,24
L18ff54:
    addiu a2,a2,1
L18ff58:
    .word 0x8d020008
    slt v0,a2,v0
    bnez v0,L18fecc
    nop
    addiu t0,t0,28
    sltu v0,t0,v1
    bnez v0,L18fec4
    paddub a2,zero,zero
L18ff78:
    .word 0x8c8303d8
    addiu v0,zero,4
    bne v1,v0,L18ff94
    nop
    .word 0x8c82041c
    addiu v1,zero,2
    .word 0xac430010
L18ff94:
    j L18ffa0
    nop
    nop
L18ffa0:
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x8c82041c
    paddub s0,a0,zero
    addiu v1,s0,1036
    .word 0x8c420014
    .word 0xac82040c
    .word 0x8c82041c
    addiu v0,v0,20
    .word 0xac820410
    .word 0x8c82041c
    .word 0x8c420014
    .word 0xac430004
    .word 0x8c82041c
    .word 0xac430014
    jal func_001f79f0
    .word 0xac850420
    andi v0,v0,0x1
    xor v0,v0,zero
    sltiu v0,v0,1
    .word 0xae020424
    jal func_00190740
    paddub a0,s0,zero
    .word 0x8e020414
    .word 0xc602042c
    .word 0xc6010430
    .word 0xc6000434
    .word 0xe4420030
    .word 0xe4410034
    .word 0xe4400038
    .word 0x8e020414
    .word 0xc6020438
    .word 0xc601043c
    .word 0xc6000440
    .word 0xe4420020
    .word 0xe4410024
    .word 0xe4400028
    .word 0x8e020414
    .word 0xc4430014
    .word 0xc4420028
    .word 0xc4410018
    .word 0xc4400024
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0x8e020414
    .word 0xc4430018
    .word 0xc4420020
    .word 0xc4410010
    .word 0xc4400028
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400004
    .word 0x8e020414
    .word 0xc4430010
    .word 0xc4420024
    .word 0xc4410014
    .word 0xc4400020
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400008
    .word 0x8e040414
    jal func_001ce160
    paddub a1,a0,zero
    .word 0x8e020030
    jal func_001c3b80
    .word 0x8c440004
    .word 0x8e020030
    jal func_001c3b00
    .word 0x8c440004
    .word 0x3c017000
    .word 0x8c243fd8
    .word 0x8e060414
    jal func_0012b7e0
    paddub a1,s0,zero
    jal func_00190740
    paddub a0,s0,zero
    .word 0x7bbf0010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
