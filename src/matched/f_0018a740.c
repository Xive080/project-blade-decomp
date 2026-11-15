extern void func_0011a398(void);
extern void func_00119ff8(void);
asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c023c8e
    .word 0x3442fa35
    .word 0x44820800
    .word 0x3c0243b4
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f12
    j func_00119ff8
    mul.s $f12,$f1,$f0
    nop
    nop
    nop
    .word 0x3c023f00
    .word 0x44820000
    .word 0x3c034080
    sub.s $f12,$f0,$f12
    .word 0x3c023f80
    .word 0x44830800
    .word 0x44820000
    nop
    mul.s $f1,$f1,$f12
    mul.s $f1,$f1,$f12
    jr ra
    sub.s $f0,$f0,$f1
}
