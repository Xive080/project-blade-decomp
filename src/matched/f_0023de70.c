extern void f1c2a30(void);
extern void f23d540(void);
extern void f23d6c0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-48
    sq ra,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    addiu a0,zero,278
    jal f1c2a30
    .word 0x70008628
    addiu v1,zero,-1
    beq v0,v1,L23dee4
    nop
    jal f1c2a30
    addiu a0,zero,278
    lui v1,0x33
    addiu v1,v1,-23008
    addu v0,v1,v0
    lw v0,0(v0)
    lui v1,0x2e
    addiu s1,v1,31952
    jalr ra,v0
    paddub a0,s1,zero
    lw v1,16(s1)
    lui v0,0x2e
    addiu v0,v0,31632
    addiu s0,zero,1
    sw v1,228(v0)
    lw a0,20(s1)
    sw a0,248(v0)
    sw v1,276(v0)
    sw a0,296(v0)
L23dee4:
    lui v0,0x24
    addiu a0,zero,1
    .word 0x70002e28
    jal f23d6c0
    addiu a2,v0,-10976
    lui v1,0x2e
    addiu s1,v1,31632
    .word 0xae220000
    .word 0x8e220000
    bnez v0,L23df18
    lui v0,0x24
    b L23dfe4
    .word 0x70001628
L23df18:
    .word 0x70002628
    .word 0x70002e28
    jal f23d6c0
    addiu a2,v0,-11008
    .word 0xae220008
    .word 0x8e220008
    bnez v0,L23df40
    addiu a0,zero,1
    b L23dfe4
    .word 0x70001628
L23df40:
    lui v0,0x24
    paddub a1,a0,zero
    jal f23d6c0
    addiu a2,v0,-10960
    .word 0xae220004
    .word 0x8e220004
    bnez v0,L23df68
    lui v0,0x24
    b L23dfe4
    .word 0x70001628
L23df68:
    .word 0x70002628
    addiu a1,zero,1
    jal f23d6c0
    addiu a2,v0,-10992
    .word 0xae22000c
    .word 0x8e22000c
    bnez v0,L23df90
    addiu a0,zero,1
    b L23dfe4
    .word 0x70001628
L23df90:
    bne s0,a0,L23dfe4
    addiu v0,zero,1
    lui v0,0x24
    jal f23d540
    addiu a1,v0,-11040
    .word 0xae220014
    .word 0x8e220014
    bnez v0,L23dfbc
    lui v0,0x24
    b L23dfe4
    .word 0x70001628
L23dfbc:
    .word 0x70002628
    jal f23d540
    addiu a1,v0,-11024
    .word 0xae220010
    .word 0x8e220010
    bnez v0,L23dfe0
    .word 0x70001628
    b L23dfe8
    lq ra,32(sp)
L23dfe0:
    addiu v0,zero,1
L23dfe4:
    lq ra,32(sp)
L23dfe8:
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,48
}
