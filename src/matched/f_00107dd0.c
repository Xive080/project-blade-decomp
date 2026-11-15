extern void func_001081e8(void);
extern void func_00108900(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu v1,a2,19
    addiu v0,zero,-1
    slt v0,v0,v1
    addiu a2,a2,34
    .word 0x00a0202d
    movn a2,v1,v0
    .word 0x3c05002e
    sra a2,a2,0x4
    sll a2,a2,0x4
    .word 0x3c02002e
    .word 0xaca4aa98
    .word 0xac46abc0
    j func_00108900
    .word 0x00c0282d
    addiu sp,sp,-16
    .word 0x3c020fff
    .word 0xffbf0000
    ori v0,v0,0xffff
    and a1,a1,v0
    .word 0x3c032000
    .word 0x8c870040
    or a1,a1,v1
    addiu v0,zero,1
    .word 0xace200b0
    .word 0xace500d8
    .word 0xace600e4
    .word 0xace000dc
    jal func_001081e8
    .word 0xace000e0
    .word 0xdfbf0000
    jr ra
    addiu sp,sp,16
}
