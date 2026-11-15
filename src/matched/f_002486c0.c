extern void func_0011ec80(void);
extern void func_001c35a0(void);
extern void func_001cc900(void);
extern void func_00201600(void);
extern void func_00201720(void);
extern void func_00202670(void);
extern void func_00202b60(void);
extern void func_00202b90(void);
extern void func_00202bb0(void);
extern void func_00202d10(void);
extern void func_00202e90(void);
extern void func_00203320(void);
extern void func_00204180(void);
extern void func_002042f0(void);
extern void func_002047f0(void);
extern void func_00207ef0(void);
extern void func_00209ff0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-144
    .word 0x7fbf0070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0xc7808294
    paddub s5,a0,zero
    addiu v0,sp,140
    mov.s $f20,$f12
    addiu s1,s5,-2
    paddub s0,a1,zero
    addiu a2,zero,5
    paddub a1,s1,zero
    jal func_00202e90
    .word 0xe4400000
    paddub a0,s0,zero
    jal func_001cc900
    paddub s2,v0,zero
    jal func_00204180
    paddub s0,v0,zero
    paddub s3,v0,zero
    addiu a1,sp,140
    jal func_002047f0
    paddub a0,s3,zero
    paddub a1,s0,zero
    jal func_002042f0
    paddub a0,s3,zero
    jal func_00202b60
    paddub a0,s2,zero
    slt at,zero,s1
    paddub s4,v0,zero
    beqz at,L248798
    paddub s0,zero,zero
L248754:
    addiu v0,s0,1
    andi a3,v0,0xffff
    addiu v0,s0,2
    andi a2,s0,0xffff
    andi t0,v0,0xffff
    paddub a0,s2,zero
    jal func_00202b90
    paddub a1,s4,zero
    paddub a0,s2,zero
    paddub a1,s4,zero
    jal func_00202bb0
    paddub a2,s3,zero
    addiu s0,s0,1
    slt v0,s0,s1
    bnez v0,L248754
    addiu s4,s4,8
    nop
L248798:
    .word 0x3c020025
    addiu a0,v0,-30624
    jal func_00207ef0
    paddub a1,zero,zero
    jal func_00202d10
    paddub a0,s2,zero
    jal func_00201600
    paddub s1,v0,zero
    jal func_001c35a0
    paddub s0,v0,zero
    paddub a1,v0,zero
    jal func_00202670
    paddub a0,s0,zero
    paddub a0,s0,zero
    paddub a1,s1,zero
    jal func_00201720
    paddub a2,zero,zero
    jal func_00203320
    paddub a0,s1,zero
    addiu v0,zero,4
    .word 0xa2020002
    .word 0x8f8589d0
    jal func_00209ff0
    paddub a0,s0,zero
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8c420130
    jalr ra,v0
    addiu a0,zero,156
    paddub s1,v0,zero
    addiu a2,zero,156
    paddub a0,s1,zero
    jal func_0011ec80
    paddub a1,zero,zero
    .word 0x8f838290
    paddub v0,s0,zero
    addu v1,s0,v1
    .word 0xac710000
    .word 0xa6350000
    .word 0xe6340094
    .word 0x7bbf0070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,144
}
