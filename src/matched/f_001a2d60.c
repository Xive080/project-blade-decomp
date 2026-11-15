extern void fn_1a2dc0(void);
extern void fn_13b550(void);
extern void fn_1b5050(void);
extern void fn_1958e0(void);
extern void fn_1a3ac0(void);
asm void f(void) {
    .set noreorder
    .word 0x3c02002e
    j fn_1a2dc0
    addiu a3,v0,8128
    nop
    .word 0x3c02002e
    j fn_1a2dc0
    addiu a3,v0,7888
    nop
    .word 0x3c02002e
    j fn_1a2dc0
    addiu a3,v0,7648
    nop
    .word 0x3c02002e
    j fn_1a2dc0
    addiu a3,v0,7408
    nop
    .word 0x3c02002e
    j fn_1a2dc0
    addiu a3,v0,7168
    nop
    .word 0x3c02002e
    j fn_1a2dc0
    addiu a3,v0,6928
    nop
    addiu sp,sp,-128
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    addiu v0,zero,12
    paddub s5,a1,zero
    .word 0x7fb00000
    paddub s6,a0,zero
    paddub s4,a2,zero
    beq s5,v0,L1a2f58
    paddub s3,a3,zero
    addiu v0,zero,2
    beq s5,v0,L1a2e50
    nop
    beqz s5,L1a2e18
    nop
    b L1a2f74
    paddub a0,s6,zero
L1a2e18:
    .word 0x8e650000
    jal fn_13b550
    .word 0x8f848328
    .word 0xaec20008
    .word 0x8f848328
    jal fn_13b550
    addiu a1,zero,162
    .word 0xaec2000c
    addiu v0,s3,12
    .word 0xaec20014
    addiu v0,zero,7
    .word 0xaec20010
    .word 0xaec00018
    .word 0xaec00004
L1a2e50:
    .word 0x8e630008
    addiu v0,zero,5
    beq v1,v0,L1a2e9c
    addiu s2,zero,1
    addiu v0,zero,6
    beq v1,v0,L1a2e90
    addiu s2,zero,3
    addiu v0,zero,3
    beq v1,v0,L1a2e84
    addiu s2,zero,2
    b L1a2ea8
    paddub s2,zero,zero
    addiu s2,zero,2
L1a2e84:
    b L1a2eac
    .word 0xaec00018
    addiu s2,zero,3
L1a2e90:
    b L1a2ea8
    nop
    addiu s2,zero,1
L1a2e9c:
    b L1a2ea8
    nop
    paddub s2,zero,zero
L1a2ea8:
    .word 0xaec00018
L1a2eac:
    .word 0x8ed10014
    addiu s0,zero,1
    .word 0xaec00010
L1a2eb8:
    .word 0x8e650008
    jal fn_1b5050
    paddub a0,s0,zero
    beqzl v0,L1a2f44
    addiu s0,s0,1
    addiu v1,zero,1
    beq v0,v1,L1a2f0c
    nop
    addiu v1,zero,2
    beq v0,v1,L1a2eec
    nop
    b L1a2f34
    .word 0x8ec20010
L1a2eec:
    .word 0x8e680004
    addiu a1,s0,163
    paddub a0,s1,zero
    paddub a2,s0,zero
    jal fn_1958e0
    paddub a3,s2,zero
    b L1a2f30
    nop
L1a2f0c:
    .word 0x8e680004
    addiu a1,s0,168
    paddub a0,s1,zero
    paddub a2,s0,zero
    jal fn_1958e0
    paddub a3,s2,zero
    .word 0x8e220008
    ori v0,v0,0x1
    .word 0xae220008
L1a2f30:
    .word 0x8ec20010
L1a2f34:
    addiu s1,s1,32
    addiu v0,v0,1
    .word 0xaec20010
    addiu s0,s0,1
L1a2f44:
    sltiu v0,s0,7
    bnez v0,L1a2eb8
    nop
    b L1a2f70
    nop
L1a2f58:
    .word 0x8ec30018
    .word 0x8ec20014
    sll v1,v1,0x5
    addu v0,v0,v1
    .word 0x9042000c
    .word 0xa282000f
L1a2f70:
    paddub a0,s6,zero
L1a2f74:
    paddub a1,s5,zero
    jal fn_1a3ac0
    paddub a2,s4,zero
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,128
}
