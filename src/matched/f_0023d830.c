asm void f(void) {
    .set noreorder
    .set noat
    lw v0,4(a0)
    sltiu at,v0,9
    beqzl at,L890
    .word 0x70001628
    lui v1,0x2f
    sll v0,v0,0x2
    addiu v1,v1,3712
    addu v0,v0,v1
    lw v0,0(v0)
    jr v0
    nop
    b L898
    .word 0x70002e28
    b L898
    addiu a1,zero,1
    b L898
    addiu a1,zero,2
    b L898
    addiu a1,zero,3
    b L898
    addiu a1,zero,4
    b L898
    addiu a1,zero,5
    .word 0x70001628
L890:
    b L954
    nop
L898:
    lw v0,8(a0)
    sltiu at,v0,9
    beqzl at,L8f8
    .word 0x70001628
    lui v1,0x2f
    sll v0,v0,0x2
    addiu v1,v1,3664
    addu v0,v0,v1
    lw v0,0(v0)
    jr v0
    nop
    b L900
    .word 0x70003628
    b L900
    addiu a2,zero,1
    b L900
    addiu a2,zero,2
    b L900
    addiu a2,zero,3
    b L900
    addiu a2,zero,4
    b L900
    addiu a2,zero,5
    .word 0x70001628
L8f8:
    b L954
    nop
L900:
    sll v0,a2,0x1
    addu v0,v0,a2
    sll v1,v0,0x3
    lui v0,0x2e
    addiu v0,v0,32000
    addu v1,v0,v1
    sll v0,a1,0x2
    addu v0,v0,v1
    lw v1,0(v0)
    bgez v1,L934
    addiu v0,zero,1
    b L954
    .word 0x70001628
L934:
    bne a1,v0,L94c
    nop
    bne a2,v0,L94c
    addiu v0,zero,128
    dsll32 v0,v0,0x0
    or v1,v1,v0
L94c:
    sd v1,16(a0)
    addiu v0,zero,1
L954:
    jr ra
    nop
}
