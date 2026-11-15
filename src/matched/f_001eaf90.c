extern void func_001ea840(void);
extern void func_001eaae0(void);
extern void func_001eae20(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    sq ra,64(sp)
    sq s2,48(sp)
    sq s1,32(sp)
    sq s0,16(sp)
    .word 0x70a08628
    addiu s2,gp,-30776
    .word 0x8e450000
    addiu v0,zero,4
    lbu a0,32(a1)
    beq a0,v0,L1eb0a4
    .word 0x70c08e28
    beqz a0,L1eb0a4
    addiu v0,zero,1
    beq a0,v0,L1eafe0
    addiu v0,zero,2
    beq a0,v0,L1eafe0
    nop
    b L1eb1fc
    .word 0x70001628
L1eafe0:
    jal func_001ea840
    nop
    lw v1,0(s2)
    addiu v0,zero,256
    lbu v1,35(v1)
    sll v1,v1,0x8
    andi v1,v1,0xf00
    bne v1,v0,L1eb04c
    andi v0,s1,0x1f
    sll t0,v0,0x3
    andi v0,s1,0x3e0
    sra t1,v0,0x2
    andi v0,s1,0x7c00
    sra t2,v0,0x7
    andi v0,s1,0x8000
    lw a1,4(s0)
    lw a0,0(s0)
    sra t3,v0,0x8
    sd s1,0(sp)
    sd zero,8(sp)
    lw v1,8(s0)
    lw v0,12(s0)
    addu a2,a0,v1
    jal func_001eaae0
    addu a3,a1,v0
    b L1eb094
    nop
L1eb04c:
    lw a1,4(s0)
    lw a0,0(s0)
    andi v0,s1,0xff00
    sra t1,v0,0x8
    .word 0x3c0200ff
    and v0,s1,v0
    sra t2,v0,0x10
    sd s1,0(sp)
    sd zero,8(sp)
    lw a2,8(s0)
    lw v1,12(s0)
    .word 0x3c02ff00
    and v0,s1,v0
    andi t0,s1,0xff
    srl t3,v0,0x18
    addu a2,a0,a2
    jal func_001eaae0
    addu a3,a1,v1
L1eb094:
    jal func_001eae20
    nop
    b L1eb1fc
    addiu v0,zero,1
L1eb0a4:
    lw t0,4(a1)
    bnez t0,L1eb0b8
    .word 0x70001628
    b L1eb200
    lq ra,64(sp)
L1eb0b8:
    lw v1,20(a1)
    addiu v0,zero,2
    addiu v1,v1,7
    sra v1,v1,0x3
    beq v1,v0,L1eb168
    addiu v0,zero,4
    beq v1,v0,L1eb0e0
    nop
    b L1eb1f0
    .word 0x70001628
L1eb0e0:
    lw a2,24(a1)
    lw a0,0(s0)
    lw v0,8(s0)
    lw a3,12(s0)
    lw a1,4(s0)
    srl v1,a2,0x2
    sll a0,a0,0x1
    mult a1,a2,a1
    subu a2,v1,v0
    .word 0x70e01628
    addu v1,t0,a1
    addu a0,v1,a0
    beqz v0,L1eb1f8
    addiu a3,a3,-1
    sll a1,a2,0x2
L1eb11c:
    lw v1,8(s0)
    .word 0x70601628
    beqz v0,L1eb150
    addiu v1,v1,-1
    nop
L1eb130:
    sw s1,0(a0)
    .word 0x70601628
    addiu a0,a0,4
    addiu v1,v1,-1
    nop
    bnez v0,L1eb130
    nop
    nop
L1eb150:
    .word 0x70e01628
    addu a0,a0,a1
    bnez v0,L1eb11c
    addiu a3,a3,-1
    b L1eb1f8
    nop
L1eb168:
    lw a2,24(a1)
    lw a0,0(s0)
    lw v0,8(s0)
    lw a3,12(s0)
    lw a1,4(s0)
    srl v1,a2,0x1
    sll a0,a0,0x1
    mult a1,a2,a1
    subu a2,v1,v0
    .word 0x70e01628
    addu v1,t0,a1
    addu v1,v1,a0
    beqz v0,L1eb1f8
    addiu a3,a3,-1
    sll a0,a2,0x1
L1eb1a4:
    lw a1,8(s0)
    .word 0x70a01628
    beqz v0,L1eb1d8
    addiu a1,a1,-1
    nop
L1eb1b8:
    sh s1,0(v1)
    .word 0x70a01628
    addiu v1,v1,2
    addiu a1,a1,-1
    nop
    bnez v0,L1eb1b8
    nop
    nop
L1eb1d8:
    .word 0x70e01628
    addu v1,v1,a0
    bnez v0,L1eb1a4
    addiu a3,a3,-1
    b L1eb1f8
    nop
L1eb1f0:
    b L1eb1fc
    nop
L1eb1f8:
    .word 0x70001628
L1eb1fc:
    lq ra,64(sp)
L1eb200:
    lq s2,48(sp)
    lq s1,32(sp)
    lq s0,16(sp)
    jr ra
    addiu sp,sp,80
}
