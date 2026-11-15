extern void func_0017ca60(void);
extern void func_001c7710(void);
extern void func_001ce3f0(void);
extern void func_001ce410(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-240
    .word 0x7fbf0070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s4,a1,zero
    .word 0x8c850020
    paddub s5,a0,zero
    paddub s2,a2,zero
    paddub s1,a3,zero
    paddub s0,t0,zero
    paddub s3,zero,zero
    jal func_001c7710
    addiu a0,sp,128
    .word 0xc6820000
    .word 0xc6810004
    .word 0xc6800008
    addiu a0,sp,208
    addiu v0,sp,224
    addiu a2,zero,1
    .word 0xe4820000
    .word 0xe4810004
    .word 0xe4800008
    .word 0xc6420000
    .word 0xc6410004
    .word 0xc6400008
    addiu a3,sp,128
    paddub a1,a0,zero
    .word 0xe4420000
    .word 0xe4410004
    jal func_001ce3f0
    .word 0xe4400008
    addiu a0,sp,224
    addiu a2,zero,1
    addiu a3,sp,128
    jal func_001ce3f0
    paddub a1,a0,zero
    .word 0x8f8388b0
    nop
L17c94c:
    .word 0x8c620000
    andi v0,v0,0x100
    nop
    nop
    nop
    bnez v0,L17c94c
    nop
    .word 0x8eb40028
    paddub s2,zero,zero
    b L17ca20
    paddub s6,zero,zero
    andi v0,s4,0x1
L17c97c:
    beqzl v0,L17ca14
    addiu s6,s6,16
    .word 0x3c017000
    .word 0x8c22000c
    addiu a1,sp,128
    addiu a2,sp,208
    addiu a3,sp,224
    addiu t0,sp,192
    addiu t1,sp,236
    jal func_0017ca60
    addu a0,v0,s6
    beqz v0,L17ca10
    nop
    beqz s3,L17c9d0
    nop
    .word 0xc7a100ec
    .word 0xc6000000
    c.lt.s $f1,$f0
    nop
    bc1fl L17ca0c
    addiu s3,s3,1
L17c9d0:
    .word 0x8ea70020
    addiu a0,sp,192
    addiu a2,zero,1
    jal func_001ce410
    paddub a1,a0,zero
    addiu v0,sp,192
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0xe6220000
    .word 0xe6210004
    .word 0xe6200008
    .word 0xc7a000ec
    .word 0xe6000000
    addiu s3,s3,1
L17ca0c:
    nop
L17ca10:
    addiu s6,s6,16
L17ca14:
    addiu s2,s2,1
    sra s4,s4,0x1
    nop
L17ca20:
    .word 0x8ea2001c
    .word 0x8c420000
    slt v0,s2,v0
    bnez v0,L17c97c
    andi v0,s4,0x1
    sltu v0,zero,s3
    .word 0x7bbf0070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,240
}
