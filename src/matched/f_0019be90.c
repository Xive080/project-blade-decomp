extern void sub1(void);
extern void sub2(void);
extern void sub3(void);
extern void sub4(void);
extern void sub5(void);
asm void f(void) {
    .set noreorder
    addiu sp,sp,-64
    sq ra,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    addiu v0,zero,9
    paddub s1,a1,zero
    paddub s2,a0,zero
    beq s1,v0,L19c120
    paddub s0,a2,zero
    beqz s1,L19bec8
    nop
    b L19c13c
    paddub a0,s2,zero
L19bec8:
    .word 0x3c020031
    addiu a0,v0,23904
    addiu a1,zero,328
    jal sub1
    addiu a2,zero,2
    .word 0x3c020031
    addiu a0,v0,23936
    addiu a1,zero,330
    jal sub2
    addiu a2,zero,66
    .word 0x3c010030
    lw v0,-23024(at)
    addi v0,v0,-3
    sltiu at,v0,8
    beqz at,L19c0cc
    nop
    .word 0x3c03002f
    addiu v1,v1,-320
    sll v0,v0,0x2
    addu v0,v0,v1
    lw v0,0(v0)
    jr v0
    nop
    .word 0x3c020031
    addiu a0,v0,23904
    addiu a1,zero,327
    jal sub1
    addiu a2,zero,1
    .word 0x3c020031
    addiu a0,v0,23936
    addiu a1,zero,328
    jal sub2
    addiu a2,zero,65
    .word 0x3c020031
    addiu a0,v0,23968
    addiu a1,zero,330
    jal sub2
    addiu a2,zero,66
    lw a0,-31960(gp)
    jal sub3
    addiu a1,zero,3
    sw v0,8(s2)
    .word 0x3c020031
    addiu v0,v0,23904
    sw zero,12(s2)
    sw v0,20(s2)
    addiu v0,zero,3
    sw v0,16(s2)
    sw zero,24(s2)
    b L19c110
    sw zero,4(s2)
    lw a0,-31960(gp)
    jal sub3
    addiu a1,zero,7
    sw v0,8(s2)
    .word 0x3c020031
    addiu v0,v0,23904
    sw zero,12(s2)
    sw v0,20(s2)
    addiu v0,zero,2
    sw v0,16(s2)
    sw zero,24(s2)
    b L19c110
    sw zero,4(s2)
    lw a0,-31960(gp)
    jal sub3
    addiu a1,zero,4
    sw v0,8(s2)
    .word 0x3c020031
    addiu v0,v0,23904
    sw zero,12(s2)
    sw v0,20(s2)
    addiu v0,zero,2
    sw v0,16(s2)
    sw zero,24(s2)
    b L19c110
    sw zero,4(s2)
    lw a0,-31960(gp)
    jal sub3
    addiu a1,zero,9
    sw v0,8(s2)
    .word 0x3c020031
    addiu v0,v0,23904
    sw zero,12(s2)
    sw v0,20(s2)
    addiu v0,zero,2
    sw v0,16(s2)
    sw zero,24(s2)
    b L19c110
    sw zero,4(s2)
    lw a0,-31960(gp)
    jal sub3
    addiu a1,zero,10
    sw v0,8(s2)
    .word 0x3c020031
    addiu v0,v0,23904
    sw zero,12(s2)
    sw v0,20(s2)
    addiu v0,zero,2
    sw v0,16(s2)
    sw zero,24(s2)
    b L19c110
    sw zero,4(s2)
    lw a0,-31960(gp)
    jal sub3
    addiu a1,zero,12
    sw v0,8(s2)
    .word 0x3c020031
    addiu v0,v0,23904
    sw zero,12(s2)
    sw v0,20(s2)
    addiu v0,zero,2
    sw v0,16(s2)
    sw zero,24(s2)
    b L19c110
    sw zero,4(s2)
    lw a0,-31960(gp)
    jal sub3
    addiu a1,zero,11
    sw v0,8(s2)
    .word 0x3c020031
    addiu v0,v0,23904
    sw zero,12(s2)
    sw v0,20(s2)
    addiu v0,zero,2
    sw v0,16(s2)
    sw zero,24(s2)
    b L19c110
    sw zero,4(s2)
L19c0cc:
    .word 0x3c020031
    addiu a0,v0,23904
    addiu a1,zero,330
    jal sub1
    addiu a2,zero,3
    lw a0,-31960(gp)
    jal sub3
    paddub a1,zero,zero
    sw v0,8(s2)
    .word 0x3c020031
    addiu v0,v0,23904
    sw zero,12(s2)
    sw v0,20(s2)
    addiu v0,zero,1
    sw v0,16(s2)
    sw zero,24(s2)
    sw zero,4(s2)
L19c110:
    lw v0,4(s2)
    ori v0,v0,0x8
    b L19c138
    sw v0,4(s2)
L19c120:
    jal sub4
    nop
    bnez v0,L19c138
    nop
    b L19c148
    addiu v0,zero,1
L19c138:
    paddub a0,s2,zero
L19c13c:
    paddub a1,s1,zero
    jal sub5
    paddub a2,s0,zero
L19c148:
    lq ra,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,64
}
