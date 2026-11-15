extern void func_00181ff0(void);
extern void func_00182660(void);
extern void func_00256438(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu a0,a0,116
    .word 0xc4a00008
    .word 0xc481000c
    .word 0x3c023f80
    .word 0x44821000
    nop
    div.s $f1,$f2,$f1
    mul.s $f0,$f0,$f1
    .word 0xe4a00008
    .word 0xc4a0000c
    mul.s $f0,$f0,$f1
    j func_00181ff0
    .word 0xe4a0000c
    nop
    nop
    nop
    addiu sp,sp,-48
    .word 0x7fbf0020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xc4820084
    .word 0x3c023f80
    .word 0x44821800
    .word 0xc4a10008
    .word 0x3c023f00
    .word 0x44820000
    div.s $f2,$f3,$f2
    addiu s0,a0,116
    .word 0x70a08e28
    mul.s $f1,$f1,$f2
    .word 0xe4a10008
    .word 0xc4a1000c
    mul.s $f1,$f1,$f2
    .word 0xe4a1000c
    .word 0xc4810078
    jal func_00256438
    add.s $f12,$f0,$f1
    .word 0x8e040000
    .word 0x8e060008
    .word 0x8e07000c
    .word 0x72204628
    jal func_00182660
    .word 0x70402e28
    .word 0x7bbf0020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,48
}
