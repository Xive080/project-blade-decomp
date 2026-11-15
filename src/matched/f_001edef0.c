extern void func_0010a530(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-112
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8ca3000c
    .word 0x8c930004
    .word 0x8cb40014
    addiu v0,zero,32
    paddub s1,a0,zero
    beq v1,v0,L1ee158
    paddub s0,a1,zero
    addiu v0,zero,8
    beq v1,v0,L1edf48
    addiu v0,zero,4
    beq v1,v0,L1edf48
    nop
    b L1ee320
    paddub v0,zero,zero
L1edf48:
    .word 0x8e150018
    b L1ee140
    paddub s2,zero,zero
L1edf54:
    .word 0x92230023
    addiu v0,zero,5
    andi v1,v1,0x6f
    beq v1,v0,L1ee084
    paddub v0,s3,zero
    addiu v0,zero,6
    beq v1,v0,L1ee00c
    paddub a2,s3,zero
    addiu v0,zero,1
    beql v1,v0,L1edf94
    paddub v1,s3,zero
    beqz v1,L1edf90
    nop
    b L1ee10c
    paddub v0,zero,zero
L1edf90:
    paddub v1,s3,zero
L1edf94:
    b L1edff0
    paddub v0,zero,zero
    addu a0,s4,v0
L1edfa0:
    .word 0x90840000
    addiu v0,v0,1
    sll a0,a0,0x2
    addu a0,s5,a0
    .word 0x90870002
    .word 0x90860001
    .word 0x90850000
    sll a3,a3,0x7
    sll a2,a2,0x2
    .word 0x90840003
    andi a3,a3,0x7c00
    andi a2,a2,0x3e0
    or a2,a3,a2
    srl a1,a1,0x3
    or a1,a1,a2
    sll a0,a0,0x8
    andi a0,a0,0x8000
    or a0,a0,a1
    .word 0xa4640000
    addiu v1,v1,2
L1edff0:
    .word 0x8e24000c
    slt a0,v0,a0
    bnez a0,L1edfa0
    addu a0,s4,v0
    b L1ee118
    .word 0x8e220018
    paddub a2,s3,zero
L1ee00c:
    b L1ee068
    paddub a3,zero,zero
    addu v0,s4,a3
L1ee018:
    .word 0x90420000
    .word 0x3c048000
    addiu a3,a3,1
    sll v0,v0,0x2
    addu v0,s5,v0
    .word 0x90450000
    .word 0x90430001
    or a0,a1,a0
    .word 0x90420002
    sll v1,v1,0x8
    or v1,a0,v1
    sll v0,v0,0x10
    or v1,v0,v1
    .word 0xa0c30000
    srl v0,v1,0x8
    .word 0xa0c20001
    srl v0,v1,0x10
    .word 0xa0c20002
    addiu a2,a2,3
    nop
L1ee068:
    .word 0x8e22000c
    slt v0,a3,v0
    bnez v0,L1ee018
    addu v0,s4,a3
    b L1ee114
    nop
    paddub v0,s3,zero
L1ee084:
    b L1ee0f0
    paddub v1,zero,zero
    addu a0,s4,v1
L1ee090:
    .word 0x90850000
    addiu v1,v1,1
    sll a1,a1,0x2
    addu a2,s5,a1
    .word 0x90c80002
    .word 0x90c70001
    .word 0x90c50000
    .word 0x3c04ff00
    sll t0,t0,0x10
    sll a3,a3,0x8
    .word 0x90c60003
    or a3,t0,a3
    or a3,a1,a3
    sll a1,a2,0x8
    addu a1,a1,a2
    sll a1,a1,0x8
    addu a1,a1,a2
    sll a1,a1,0x7
    addu a1,a1,a2
    and a0,a1,a0
    or a0,a3,a0
    .word 0xac440000
    addiu v0,v0,4
    nop
L1ee0f0:
    .word 0x8e24000c
    slt a0,v1,a0
    bnez a0,L1ee090
    addu a0,s4,v1
    b L1ee114
    nop
    paddub v0,zero,zero
L1ee10c:
    b L1ee330
    .word 0x7bbf0060
L1ee114:
    .word 0x8e220018
L1ee118:
    paddub a0,s3,zero
    addu v0,s3,v0
    jal func_0010a530
    addiu a1,v0,127
    .word 0x8e230018
    .word 0x8e020010
    addiu s2,s2,1
    addu s3,s3,v1
    addu s4,s4,v0
    nop
L1ee140:
    .word 0x8e220010
    slt v0,s2,v0
    bnez v0,L1edf54
    nop
    b L1ee32c
    addiu v0,zero,1
L1ee158:
    b L1ee308
    paddub a0,zero,zero
L1ee160:
    .word 0x92250023
    addiu v1,zero,5
    andi a1,a1,0x6f
    beq a1,v1,L1ee270
    paddub v0,s4,zero
    addiu v1,zero,6
    beq a1,v1,L1ee20c
    paddub t0,s3,zero
    addiu v1,zero,1
    beq a1,v1,L1ee1a0
    paddub t0,s3,zero
    beqz a1,L1ee19c
    nop
    b L1ee2ec
    paddub v0,zero,zero
L1ee19c:
    paddub t0,s3,zero
L1ee1a0:
    b L1ee1f0
    paddub t1,zero,zero
L1ee1a8:
    .word 0x90470002
    .word 0x90460001
    .word 0x90450000
    .word 0x90430003
    addiu t1,t1,1
    sll a3,a3,0x7
    sll a2,a2,0x2
    andi a3,a3,0x7c00
    andi a2,a2,0x3e0
    sll v1,v1,0x8
    or a2,a3,a2
    srl a1,a1,0x3
    or a1,a1,a2
    andi v1,v1,0x8000
    or v1,v1,a1
    .word 0xa5030000
    addiu t0,t0,2
    addiu v0,v0,4
L1ee1f0:
    .word 0x8e23000c
    slt v1,t1,v1
    bnez v1,L1ee1a8
    nop
    b L1ee2f8
    .word 0x8e230018
    paddub t0,s3,zero
L1ee20c:
    b L1ee258
    paddub t1,zero,zero
L1ee214:
    .word 0x90450001
    .word 0x90430002
    .word 0x90470000
    .word 0x3c068000
    addiu t1,t1,1
    sll a1,a1,0x8
    sll v1,v1,0x10
    or a2,a3,a2
    or a1,a2,a1
    or a1,v1,a1
    .word 0xa1050000
    srl v1,a1,0x8
    .word 0xa1030001
    srl v1,a1,0x10
    .word 0xa1030002
    addiu t0,t0,3
    addiu v0,v0,4
L1ee258:
    .word 0x8e23000c
    slt v1,t1,v1
    bnez v1,L1ee214
    nop
    b L1ee2f4
    nop
L1ee270:
    paddub v1,s3,zero
    b L1ee2d0
    paddub a1,zero,zero
L1ee27c:
    .word 0x904a0002
    .word 0x90490001
    .word 0x90470000
    .word 0x90480003
    .word 0x3c06ff00
    addiu a1,a1,1
    sll t2,t2,0x10
    sll t1,t1,0x8
    or t1,t2,t1
    or t1,a3,t1
    sll a3,t0,0x8
    addu a3,a3,t0
    sll a3,a3,0x8
    addu a3,a3,t0
    sll a3,a3,0x7
    addu a3,a3,t0
    and a2,a3,a2
    or a2,t1,a2
    .word 0xac660000
    addiu v1,v1,4
    addiu v0,v0,4
L1ee2d0:
    .word 0x8e26000c
    slt a2,a1,a2
    bnez a2,L1ee27c
    nop
    b L1ee2f4
    nop
    paddub v0,zero,zero
L1ee2ec:
    b L1ee32c
    nop
L1ee2f4:
    .word 0x8e230018
L1ee2f8:
    .word 0x8e020010
    addiu a0,a0,1
    addu s3,s3,v1
    addu s4,s4,v0
L1ee308:
    .word 0x8e220010
    slt v0,a0,v0
    bnez v0,L1ee160
    nop
    b L1ee328
    nop
L1ee320:
    b L1ee32c
    nop
L1ee328:
    addiu v0,zero,1
L1ee32c:
    .word 0x7bbf0060
L1ee330:
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}
