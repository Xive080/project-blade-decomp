asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c020033
    addiu v0,v0,-23152
    .word 0xac82000c
    .word 0x3c010030
    .word 0x8c236094
    beqz v1,L1ba968
    addiu v0,zero,-1
    addiu v0,zero,4
    beq v1,v0,L1ba95c
    addiu v0,zero,3
    addiu v0,zero,3
    beq v1,v0,L1ba950
    addiu v0,zero,2
    addiu v0,zero,2
    beq v1,v0,L1ba944
    addiu v0,zero,1
    addiu v0,zero,1
    beq v1,v0,L1ba938
    paddub v0,zero,zero
    b L1ba964
    nop
    paddub v0,zero,zero
L1ba938:
    b L1ba96c
    .word 0xac820008
    addiu v0,zero,1
L1ba944:
    b L1ba968
    nop
    addiu v0,zero,2
L1ba950:
    b L1ba968
    nop
    addiu v0,zero,3
L1ba95c:
    b L1ba968
    nop
L1ba964:
    addiu v0,zero,-1
L1ba968:
    .word 0xac820008
L1ba96c:
    .word 0xac800004
    .word 0x3c010030
    .word 0x8c236094
    beqz v1,L1ba9ec
    addiu v0,zero,-1
    addiu v0,zero,4
    beq v1,v0,L1ba9e0
    addiu v0,zero,3
    addiu v0,zero,3
    beq v1,v0,L1ba9d4
    addiu v0,zero,2
    addiu v0,zero,2
    beq v1,v0,L1ba9c8
    addiu v0,zero,1
    addiu v0,zero,1
    beq v1,v0,L1ba9bc
    paddub v0,zero,zero
    b L1ba9e8
    nop
    paddub v0,zero,zero
L1ba9bc:
    b L1ba9f0
    addiu v1,zero,1
    addiu v0,zero,1
L1ba9c8:
    b L1ba9ec
    nop
    addiu v0,zero,2
L1ba9d4:
    b L1ba9ec
    nop
    addiu v0,zero,3
L1ba9e0:
    b L1ba9ec
    nop
L1ba9e8:
    addiu v0,zero,-1
L1ba9ec:
    addiu v1,zero,1
L1ba9f0:
    bne v0,v1,L1baa14
    addiu v0,zero,1
    .word 0x3c010030
    .word 0x8c22a570
    andi v0,v0,0x1
    beqz v0,L1baa10
    nop
    .word 0xac830004
L1baa10:
    addiu v0,zero,1
L1baa14:
    jr ra
    nop
}
