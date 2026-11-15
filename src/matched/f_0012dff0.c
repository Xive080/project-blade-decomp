extern void fcall(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-32
    sq ra,16(sp)
    sq s0,0(sp)
    lw v0,60(a0)
    beqz v0,L12e018
    paddub s0,a0,zero
    lw v0,16(s0)
    andi v0,v0,0x1
    beqz v0,L12e020
    sltiu at,a2,10
L12e018:
    b L12e204
    paddub v0,zero,zero
L12e020:
    beqz at,L12e200
    sw a1,996(s0)
    lui v1,0x2f
    addiu v1,v1,-16352
    sll v0,a2,0x2
    addu v0,v0,v1
    lw v0,0(v0)
    jr v0
    nop
    lw v0,204(s0)
    beqzl v0,L12e088
    addiu v0,zero,1
    lw v0,24(v0)
    andi v0,v0,0xa
    beqz v0,L12e084
    nop
    lw v1,60(s0)
    addiu v0,zero,1
    beq v1,v0,L12e204
    nop
    lw v1,16(s0)
    paddub v0,zero,zero
    ori v1,v1,0x20
    b L12e204
    sw v1,16(s0)
L12e084:
    addiu v0,zero,1
L12e088:
    b L12e208
    lq ra,16(sp)
    addiu a2,zero,1
    paddub a1,zero,zero
    jal fcall
    paddub a3,zero,zero
L12e0a0:
    beqz v0,L12e0cc
    addiu a2,zero,1
    lw v1,12(v0)
    andi v1,v1,0x1
    beqz v1,L12e0d0
    paddub a0,s0,zero
    lw v1,16(s0)
    addiu v0,zero,1
    ori v1,v1,0x80
    b L12e204
    sw v1,16(s0)
L12e0cc:
    paddub a0,s0,zero
L12e0d0:
    paddub a1,v0,zero
    jal fcall
    paddub a3,zero,zero
    bnez v0,L12e0a0
    nop
    b L12e204
    paddub v0,zero,zero
    addiu a2,zero,6
    paddub a1,zero,zero
    jal fcall
    paddub a3,zero,zero
L12e0fc:
    beqz v0,L12e128
    addiu a2,zero,6
    lw v1,12(v0)
    andi v1,v1,0x6
    beqz v1,L12e12c
    paddub a0,s0,zero
    lw v1,16(s0)
    addiu v0,zero,1
    ori v1,v1,0x40
    b L12e204
    sw v1,16(s0)
L12e128:
    paddub a0,s0,zero
L12e12c:
    paddub a1,v0,zero
    jal fcall
    paddub a3,zero,zero
    bnez v0,L12e0fc
    nop
    b L12e204
    paddub v0,zero,zero
    b L12e204
    addiu v0,zero,1
    lw v1,16(s0)
    addiu v0,zero,1
    ori v1,v1,0x100
    b L12e204
    sw v1,16(s0)
    lw v0,204(s0)
    beqzl v0,L12e1a0
    addiu v0,zero,1
    lw v0,24(v0)
    andi v0,v0,0x4
    beqz v0,L12e19c
    nop
    lw v1,60(s0)
    addiu v0,zero,2
    bne v1,v0,L12e19c
    nop
    lw v0,16(s0)
    ori v0,v0,0x20
    sw v0,16(s0)
L12e19c:
    addiu v0,zero,1
L12e1a0:
    b L12e204
    nop
    lw v0,204(s0)
    beqzl v0,L12e1e4
    addiu v0,zero,1
    lw v0,24(v0)
    andi v0,v0,0x1
    beqz v0,L12e1e0
    nop
    lw v1,60(s0)
    addiu v0,zero,2
    bne v1,v0,L12e1e0
    nop
    lw v0,16(s0)
    ori v0,v0,0x20
    sw v0,16(s0)
L12e1e0:
    addiu v0,zero,1
L12e1e4:
    b L12e204
    nop
    lw v1,16(s0)
    addiu v0,zero,1
    ori v1,v1,0x20
    b L12e204
    sw v1,16(s0)
L12e200:
    paddub v0,zero,zero
L12e204:
    lq ra,16(sp)
L12e208:
    lq s0,0(sp)
    jr ra
    addiu sp,sp,32
}
