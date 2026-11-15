extern void fn_188ff0(void);
extern void fn_182e50(void);
extern void fn_189050(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-224
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s5,a0,zero
    .word 0x8c840084
    beqz a0,L252c54
    paddub s2,a1,zero
    jal fn_188ff0
    nop
    .word 0xaea00084
L252c54:
    .word 0x8ea40088
    beqz a0,L252c6c
    nop
    jal fn_188ff0
    nop
    .word 0xaea00088
L252c6c:
    beqz s2,L252e38
    nop
    .word 0x8f8489f0
    addiu v1,zero,2
    addiu s7,sp,148
    addiu s6,sp,152
    .word 0x8c840008
    addiu s0,sp,156
    .word 0x3c02c0c0
    addiu s1,sp,160
    .word 0xafa30090
    .word 0xaee00000
    .word 0xaec00000
    .word 0xae020000
    .word 0xae200000
    .word 0xafa400bc
    paddub a1,s2,zero
    jal fn_182e50
    .word 0xafb200c0
    addiu v0,sp,196
    .word 0xe4400000
    .word 0x3c034160
    .word 0x44830800
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    addiu s2,sp,164
    .word 0x3c02002e
    addiu s3,sp,168
    .word 0xe6400000
    addiu v0,v0,1696
    .word 0xae630000
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    addiu s4,sp,172
    addiu a0,sp,144
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8f8389f0
    .word 0x8ea2002c
    .word 0x8ea60028
    .word 0x8c650000
    jal fn_189050
    addiu a3,v0,1
    .word 0xaea20088
    addiu v0,zero,7
    .word 0xafa20090
    .word 0xaee00000
    .word 0xaec00000
    .word 0xae000000
    .word 0xae200000
    .word 0x3c023f80
    .word 0xae420000
    .word 0xae620000
    .word 0x3c02002e
    addiu v0,v0,1712
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8f8289f0
    .word 0x8ea60028
    .word 0x8ea7002c
    .word 0x8c450000
    jal fn_189050
    addiu a0,sp,144
    .word 0xaea20084
    .word 0x8ea50088
    .word 0x3c034000
    .word 0x44831800
    .word 0x3c034080
    .word 0x44800000
    .word 0xc4a10020
    .word 0x44831000
    c.lt.s $f1,$f0
    nop
    bc1f L252dd4
    .word 0x8ea40084
    .word 0x3c03bf80
    .word 0x44830000
    nop
    mul.s $f2,$f2,$f0
L252dd4:
    .word 0xc4a10024
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L252e00
    nop
    .word 0x3c03bf80
    .word 0x44830000
    nop
    mul.s $f3,$f3,$f0
L252e00:
    .word 0xc4a00018
    sub.s $f0,$f0,$f2
    .word 0xe4800018
    .word 0xc4a0001c
    sub.s $f0,$f0,$f3
    .word 0xe480001c
    .word 0xc4a00020
    add.s $f0,$f0,$f2
    add.s $f0,$f2,$f0
    .word 0xe4800020
    .word 0xc4a00024
    add.s $f0,$f0,$f3
    add.s $f0,$f3,$f0
    .word 0xe4800024
L252e38:
    .word 0x7bbf0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,224
}

