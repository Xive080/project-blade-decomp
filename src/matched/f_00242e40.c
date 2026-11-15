extern void fn_16f240(void);
extern void fn_16f380(void);
asm void f(void) {
    .set noreorder
    addiu sp,sp,-16
    addiu v0,zero,5
    beq a1,v0,L243068
    .word 0x7fbf0000
    addiu v0,zero,3
    beq a1,v0,L243048
    nop
    addiu v0,zero,2
    beq a1,v0,L242f98
    nop
    addiu v0,zero,1
    beq a1,v0,L242e7c
    nop
    b L24307c
    addiu v0,zero,1
L242e7c:
    .word 0x3c010030
    .word 0x8c25a614
    addiu a0,zero,16
    jal fn_16f240
    paddub a2,zero,zero
    beqz v0,L242f28
    nop
    .word 0x8c430004
    .word 0x3c010030
    .word 0x9024a61c
    andi v1,v1,0xff00
    sra v1,v1,0x8
    bne a0,v1,L242f28
    nop
    .word 0x3c010030
    .word 0x8c25a570
    andi v1,a1,0x1
    beqz v1,L242ee8
    andi v1,a1,0x2
    .word 0x8c440010
    .word 0x3c030080
    and v1,a0,v1
    beqz v1,L242ee4
    nop
    b L24307c
    addiu v0,zero,1
L242ee4:
    andi v1,a1,0x2
L242ee8:
    beqz v1,L242f28
    nop
    .word 0x8c450010
    .word 0x3c040100
    and v1,a1,a0
    beqz v1,L242f28
    nop
    or v1,a1,a0
    .word 0xac430010
    .word 0x8c440010
    .word 0x3c03ff7f
    ori v1,v1,0xffff
    and v1,a0,v1
    .word 0xac430010
    b L24307c
    addiu v0,zero,1
L242f28:
    .word 0x3c010030
    .word 0x9023a61c
    bnez v1,L242f54
    addiu v0,zero,1
    .word 0x3c010030
    .word 0x8c22a614
    jal fn_16f380
    addiu a0,v0,90
    b L243078
    nop
    addiu v0,zero,1
L242f54:
    bne v1,v0,L242f78
    addiu v0,zero,2
    .word 0x3c010030
    .word 0x8c22a614
    jal fn_16f380
    addiu a0,v0,100
    b L243078
    nop
    addiu v0,zero,2
L242f78:
    bne v1,v0,L243078
    nop
    .word 0x3c010030
    .word 0x8c22a614
    jal fn_16f380
    addiu a0,v0,110
    b L243078
    nop
L242f98:
    .word 0x3c010030
    .word 0x8c25a618
    addiu a0,zero,16
    jal fn_16f240
    addiu a2,zero,1
    beqz v0,L242fd8
    nop
    .word 0x8c420004
    .word 0x3c010030
    .word 0x9023a61d
    andi v0,v0,0xff00
    sra v0,v0,0x8
    bne v1,v0,L242fd8
    nop
    b L24307c
    addiu v0,zero,1
L242fd8:
    .word 0x3c010030
    .word 0x9023a61d
    bnez v1,L243004
    addiu v0,zero,1
    .word 0x3c010030
    .word 0x8c22a618
    jal fn_16f380
    addiu a0,v0,120
    b L243078
    nop
    addiu v0,zero,1
L243004:
    bne v1,v0,L243028
    addiu v0,zero,2
    .word 0x3c010030
    .word 0x8c22a618
    jal fn_16f380
    addiu a0,v0,130
    b L243078
    nop
    addiu v0,zero,2
L243028:
    bne v1,v0,L243078
    nop
    .word 0x3c010030
    .word 0x8c22a618
    jal fn_16f380
    addiu a0,v0,140
    b L243078
    nop
L243048:
    .word 0x3c010030
    .word 0x9023a61f
    sll v0,v1,0x2
    addu v0,v0,v1
    jal fn_16f380
    sll a0,v0,0x1
    b L243078
    nop
L243068:
    .word 0x8c820000
    .word 0x8c420020
    jalr ra,v0
    nop
L243078:
    addiu v0,zero,1
L24307c:
    .word 0x7bbf0000
    jr ra
    addiu sp,sp,16
}
