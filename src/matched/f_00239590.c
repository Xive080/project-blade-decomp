extern void fa(void);
extern void fb(void);
asm void f(int d, void *s) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    sq ra,96(sp)
    sq s5,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    paddub s0,a1,zero
    paddub s1,a0,zero
    .word 0x70009628
    beqz s0,L23991c
    .word 0x70009e28
    lw v1,20(s0)
    srl v1,v1,0x1
    sw v1,4(s1)
    lw v1,24(s0)
    sw v1,8(s1)
    lw a0,24(s0)
    lw v1,4(s1)
    addu v1,a0,v1
    sw v1,12(s1)
    lw v1,28(s0)
    sw v1,20(s1)
    lw v1,16(s0)
    sw v1,0(s1)
    sw zero,16(s1)
    lw v1,32(s0)
    sw v1,24(s1)
    lw a0,0(s1)
    beqz a0,L23991c
    nop
    lw v0,4(s0)
    .word 0x70002e28
    lw v0,0(v0)
    jal fa
    sll a2,v0,0x3
    .word 0x7000a628
    b L239650
    .word 0x7000ae28
L239630:
    lw v1,20(s1)
    .word 0x3c02002e
    addiu a1,v0,31152
    addiu a2,zero,24
    jal fb
    addu a0,v1,s5
    addiu s5,s5,24
    addiu s4,s4,1
L239650:
    lw v1,8(s0)
    sltu v1,s4,v1
    bnez v1,L239630
    nop
    lw a1,12(s0)
    .word 0x3c04002e
    .word 0x3c03002e
    addiu t0,a0,31120
    addiu v1,v1,31120
    .word 0x70003628
    b L239738
    paddub a0,a1,zero
L239680:
    lw t3,0(a0)
    lw a3,0(s1)
    sll t1,t3,0x3
    addu t4,a3,t1
    lw a3,4(t4)
    bnez a3,L2396d8
    nop
    sw s2,0(t4)
    lw t2,4(s0)
    sll a3,t3,0x2
    addu a3,a3,t3
    sll t1,a3,0x2
    lw a3,4(t2)
    addu a3,a3,t1
    lw a3,16(a3)
    sll a3,a3,0x2
    addu a3,v1,a3
    lw a3,0(a3)
    sw a3,4(t4)
    lw a3,4(t4)
    addu s2,s2,a3
    nop
L2396d8:
    lw t3,4(a0)
    lw a3,0(s1)
    sll t1,t3,0x3
    addu t4,a3,t1
    lw a3,4(t4)
    bnezl a3,L239734
    addiu a0,a0,8
    sw s2,0(t4)
    lw t2,4(s0)
    sll a3,t3,0x2
    addu a3,a3,t3
    sll t1,a3,0x2
    lw a3,4(t2)
    addu a3,a3,t1
    lw a3,16(a3)
    sll a3,a3,0x2
    addu a3,t0,a3
    lw a3,0(a3)
    sw a3,4(t4)
    lw a3,4(t4)
    addu s2,s2,a3
    nop
    addiu a0,a0,8
L239734:
    addiu a2,a2,1
L239738:
    lw a3,8(s0)
    sltu a3,a2,a3
    bnez a3,L239680
    nop
    b L239908
    .word 0x70003628
L239750:
    lw t1,0(a1)
    lw a3,0(s0)
    .word 0x3c030024
    addiu a0,v1,-25984
    lw t0,0(s1)
    sll v1,t1,0x3
    addu a3,a3,v1
    lw a3,0(a3)
    beq a3,a0,L239828
    addu t2,t0,v1
    .word 0x3c040024
    addiu a0,a0,-25744
    beq a3,a0,L239800
    nop
    lw a3,20(s1)
    sll a0,s3,0x1
    addu a0,a0,s3
    sll a0,a0,0x3
    addiu t0,zero,1
    addu a3,a3,a0
    sw t0,0(a3)
    lw a3,20(s1)
    addiu s3,s3,1
    addu a3,a3,a0
    sw t1,8(a3)
    lw a3,20(s1)
    lw t0,0(t2)
    lw t1,12(s1)
    addu a3,a3,a0
    addu t0,t1,t0
    sw t0,12(a3)
    lw t0,0(s0)
    lw a3,20(s1)
    addu t0,t0,v1
    lw t0,0(t0)
    addu a3,a3,a0
    sw t0,16(a3)
    lw t0,0(s0)
    lw a3,20(s1)
    addu t0,t0,v1
    addu a0,a3,a0
    lw a3,4(t0)
    sw a3,20(a0)
    nop
L239800:
    .word 0x3c040024
    addiu t1,a0,-25984
    lw t0,0(s0)
    .word 0x3c040024
    addiu a3,a0,-26080
    addu a0,t0,v1
    sw t1,0(a0)
    lw a0,0(s0)
    addu v1,a0,v1
    sw a3,4(v1)
L239828:
    lw t1,4(a1)
    lw a3,0(s0)
    .word 0x3c030024
    addiu a0,v1,-25984
    lw t0,0(s1)
    sll v1,t1,0x3
    addu a3,a3,v1
    lw a3,0(a3)
    beq a3,a0,L239900
    addu t2,t0,v1
    .word 0x3c040024
    addiu a0,a0,-25744
    beq a3,a0,L2398d8
    nop
    lw a3,20(s1)
    sll a0,s3,0x1
    addu a0,a0,s3
    sll a0,a0,0x3
    addiu t0,zero,1
    addu a3,a3,a0
    sw t0,0(a3)
    lw a3,20(s1)
    addiu s3,s3,1
    addu a3,a3,a0
    sw t1,8(a3)
    lw a3,20(s1)
    lw t0,0(t2)
    lw t1,12(s1)
    addu a3,a3,a0
    addu t0,t1,t0
    sw t0,12(a3)
    lw t0,0(s0)
    lw a3,20(s1)
    addu t0,t0,v1
    lw t0,0(t0)
    addu a3,a3,a0
    sw t0,16(a3)
    lw t0,0(s0)
    lw a3,20(s1)
    addu t0,t0,v1
    addu a0,a3,a0
    lw a3,4(t0)
    sw a3,20(a0)
    nop
L2398d8:
    .word 0x3c040024
    addiu t1,a0,-25984
    lw t0,0(s0)
    .word 0x3c040024
    addiu a3,a0,-26080
    addu a0,t0,v1
    sw t1,0(a0)
    lw a0,0(s0)
    addu v1,a0,v1
    sw a3,4(v1)
L239900:
    addiu a1,a1,8
    addiu a2,a2,1
L239908:
    lw v1,8(s0)
    sltu v1,a2,v1
    bnez v1,L239750
    nop
    sw s3,16(s1)
L23991c:
    lq ra,96(sp)
    lq s5,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,112
}
