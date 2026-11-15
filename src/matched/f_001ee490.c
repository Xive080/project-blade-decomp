extern void func_001dcd40(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x24c2000f
    srl v0,v0,0x4
    addiu sp,sp,-48
    .word 0x00822018
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f8287d0
    .word 0x71008628
    .word 0x70a61818
    .word 0x24840016
    .word 0x70e08e28
    bne v0,s0, L1ee4cc
    addu a1,a0,v1
    .word 0x24a5ffff
L1ee4cc:
    .word 0x3c028800
    jal func_001dcd40
    ori a0,v0,0x501
    .word 0x8f848690
    bnez a0, L1ee4ec
    .word 0x3c010033
    b L1ee678
    .word 0x70001628
L1ee4ec:
    .word 0x7823f590
    .word 0x3c020100
    ori a2,v0,0x404
    .word 0x3c051100
    .word 0x7c830000
    .word 0x8f828690
    .word 0x24420010
    sw v0,-31088(gp)
    pcpyld a2,a1,a2
    .word 0x8f838690
    .word 0x3c020033
    .word 0x2445f5b0
    .word 0x3c02fc00
    ori a0,v0,0x7fff
    .word 0x3c020033
    .word 0x7c660000
    .word 0x2443f5b0
    .word 0x8f828690
    .word 0x3c010033
    .word 0x7826f690
    .word 0x24420010
    sw v0,-31088(gp)
    .word 0x8f828690
    .word 0x3c010033
    .word 0x7c460000
    .word 0x8f828690
    .word 0x7826f6d0
    .word 0x24420010
    sw v0,-31088(gp)
    .word 0x8f828690
    .word 0x3c010033
    .word 0x7c460000
    .word 0x8f828690
    .word 0x24420010
    sw v0,-31088(gp)
    .word 0x8ca20004
    and v0,v0,a0
    sw v0,4(a1)
    .word 0x8f848138
    .word 0x8c620004
    or a0,a0,s1
    andi a0,a0,0x7ff
    sll a0,a0,0xf
    or v0,v0,a0
    sw v0,4(v1)
    .word 0x7823f5b0
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f838690
    .word 0xdf828138
    .word 0x24630010
    andi v0,v0,0x10
    beqz v0, L1ee5e4
    sw v1,-31088(gp)
    .word 0x3c010033
    .word 0x7823f680
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    b L1ee600
    sw v0,-31088(gp)
L1ee5e4:
    .word 0x3c010033
    .word 0x7823f670
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    .word 0x24420010
    sw v0,-31088(gp)
L1ee600:
    .word 0x3c010033
    .word 0x7823f590
    .word 0x8f828690
    .word 0x3c010033
    .word 0x7c430000
    .word 0x8f828690
    .word 0x7823f660
    .word 0x24420010
    sw v0,-31088(gp)
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f838690
    .word 0x8f8287d0
    .word 0x24630010
    beq v0,s0, L1ee674
    sw v1,-31088(gp)
    dsll32 v0,s0,0x0
    dsrl32 v0,v0,0x0
    dsll32 v1,v0,0x0
    .word 0x3c025000
    or a2,v1,v0
    .word 0x70001628
    pcpyld a2,v0,a2
    .word 0x8f828690
    .word 0x7c460000
    .word 0x8f828690
    sw s0,-30768(gp)
    .word 0x24420010
    sw v0,-31088(gp)
L1ee674:
    addiu v0,zero,1
L1ee678:
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}

