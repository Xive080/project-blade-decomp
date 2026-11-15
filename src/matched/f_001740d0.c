extern void func_00133120(void);
extern void func_00133190(void);
extern void func_0016b000(void);
extern void func_0016b090(void);
extern void func_00178480(void);
extern void func_001b4f50(void);
extern void func_00248020(void);
extern void func_00248030(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-16
    addiu v1,zero,8
    beq a0,v1,L1741a0
    .word 0x7fbf0000
    addiu v1,zero,7
    beq a0,v1,L174174
    nop
    addiu v1,zero,6
    beq a0,v1,L17415c
    nop
    beqz a0,L174108
    nop
    b L1741c8
    .word 0x7bbf0000
L174108:
    beqz a1,L174130
    nop
    jal func_0016b090
    nop
    beqz v0,L1741c4
    nop
    jal func_0016b000
    nop
    b L1741c4
    nop
L174130:
    .word 0x3c020030
    jal func_00178480
    addiu a0,v0,-23024
    .word 0x3c010030
    jal func_00133190
    lw a0,-23024(at)
    addiu v0,zero,1
    jal func_001b4f50
    sw v0,-31660(gp)
    b L1741c4
    nop
L17415c:
    bnez a1,L1741c4
    nop
    jal func_00133120
    addiu a0,zero,9
    b L1741c4
    nop
L174174:
    bnez a1,L1741c4
    nop
    jal func_00248020
    addiu a0,zero,3
    addiu a0,zero,1
    jal func_00248030
    paddub a1,a0,zero
    jal func_00133120
    addiu a0,zero,12
    b L1741c4
    nop
L1741a0:
    bnez a1,L1741c4
    nop
    jal func_00248020
    addiu a0,zero,4
    addiu a0,zero,1
    jal func_00248030
    paddub a1,a0,zero
    jal func_00133120
    addiu a0,zero,12
L1741c4:
    .word 0x7bbf0000
L1741c8:
    jr ra
    addiu sp,sp,16
}
