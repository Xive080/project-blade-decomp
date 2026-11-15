extern void func_0025b060(void);
extern void func_00182e50(void);
extern void func_00189050(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-240
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    paddub s5,a0,zero
    jal func_0025b060
    .word 0x7fb00000
    paddub s1,v0,zero
    jal func_0025b060
    paddub a0,s5,zero
    .word 0x8ea30000
    paddub s2,v0,zero
    addiu v0,zero,28
    bne v1,v0,L25a330
    nop
    .word 0x3c02002e
    b L25a338
    addiu s0,v0,1728
L25a330:
    .word 0x3c02002e
    addiu s0,v0,1696
L25a338:
    .word 0x8f8389f0
    .word 0x3c024420
    .word 0x44821000
    .word 0xc6a10004
    .word 0x8ea50014
    addiu v0,zero,2
    .word 0xc46000ac
    .word 0x8c640008
    addiu s8,sp,176
    sub.s $f0,$f2,$f0
    .word 0xafa200a0
    addiu v0,sp,164
    .word 0xac400000
    addiu v0,sp,168
    .word 0x3c033f00
    .word 0xac430000
    addiu v0,sp,172
    .word 0xe4400000
    addiu v0,sp,204
    .word 0xe7c10000
    .word 0xac440000
    addiu v0,sp,208
    jal func_00182e50
    .word 0xac450000
    addiu s3,sp,212
    .word 0xe6600000
    .word 0xc6600000
    .word 0x3c024160
    .word 0x44820800
    addiu s7,sp,180
    addiu s6,sp,184
    mul.s $f0,$f1,$f0
    addiu s4,sp,188
    .word 0x3c010033
    addiu a0,sp,160
    .word 0xe6e00000
    .word 0xaec20000
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8c2234a0
    .word 0x8f8389f0
    .word 0x8e260000
    .word 0x8c42002c
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae220008
    .word 0x8f8389f0
    .word 0x3c024420
    .word 0x44820000
    .word 0xc6a20004
    .word 0x8ea50018
    addiu v0,zero,2
    .word 0xc4610098
    .word 0x8c640008
    .word 0x3c063f80
    sub.s $f0,$f0,$f1
    .word 0xafa200a0
    addiu v0,sp,164
    .word 0xac460000
    addiu v0,sp,168
    .word 0x3c033f00
    .word 0xac430000
    addiu v0,sp,172
    .word 0xe4400000
    addiu v0,sp,204
    .word 0xe7c20000
    .word 0xac440000
    addiu v0,sp,208
    jal func_00182e50
    .word 0xac450000
    .word 0x3c024160
    .word 0xe6600000
    .word 0x44820800
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    .word 0x3c010033
    addiu a0,sp,160
    .word 0xe6e00000
    .word 0xaec20000
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8c2234a0
    .word 0x8f8389f0
    .word 0x8e460000
    .word 0x8c42002c
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae420008
    .word 0x8e240008
    .word 0x8e430008
    .word 0x3c024120
    .word 0x44820000
    .word 0xc4820018
    .word 0xc4610018
    .word 0xc4840020
    sub.s $f1,$f1,$f2
    sub.s $f3,$f1,$f0
    c.le.s $f4,$f3
    nop
    bc1t L25a52c
    neg.s $f5,$f3
    sub.s $f1,$f4,$f3
    .word 0x44800000
    nop
    mul.s $f0,$f0,$f1
    add.s $f0,$f2,$f0
    .word 0xe4800018
    b L25a558
    .word 0xe4830020
    neg.s $f5,$f3
L25a52c:
    c.lt.s $f4,$f5
    nop
    bc1f L25a55c
    addiu v0,zero,7
    add.s $f1,$f4,$f3
    .word 0x44800000
    nop
    mul.s $f0,$f0,$f1
    add.s $f0,$f2,$f0
    .word 0xe4800018
    .word 0xe4850020
L25a558:
    addiu v0,zero,7
L25a55c:
    .word 0xafa200a0
    addiu v0,sp,164
    .word 0xac400000
    addiu v0,sp,168
    .word 0xac400000
    addiu v0,sp,172
    .word 0xac400000
    .word 0xafc00000
    .word 0x3c023f80
    .word 0xaee20000
    .word 0xaec20000
    .word 0x3c02002e
    addiu v0,v0,1712
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0x3c010033
    addiu a0,sp,160
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8c2234a0
    .word 0x8f8389f0
    .word 0x8e260000
    .word 0x8c42002c
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae22000c
    .word 0x8e250008
    .word 0x3c024080
    .word 0x44801000
    .word 0x44821800
    .word 0xc4a00020
    c.lt.s $f0,$f2
    nop
    bc1f L25a60c
    .word 0x8e23000c
    .word 0x3c02bf80
    .word 0x44820000
    nop
    mul.s $f3,$f3,$f0
L25a60c:
    .word 0xc4a10024
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L25a638
    nop
    .word 0x3c02bf80
    .word 0x44820000
    nop
    mul.s $f2,$f2,$f0
L25a638:
    .word 0xc4a00018
    .word 0x3c010033
    addiu a0,sp,160
    sub.s $f0,$f0,$f3
    .word 0xe4600018
    .word 0xc4a0001c
    sub.s $f0,$f0,$f2
    .word 0xe460001c
    .word 0xc4a00020
    add.s $f0,$f0,$f3
    add.s $f0,$f3,$f0
    .word 0xe4600020
    .word 0xc4a00024
    add.s $f0,$f0,$f2
    add.s $f0,$f2,$f0
    .word 0xe4600024
    .word 0x8c2234a0
    .word 0x8f8389f0
    .word 0x8e460000
    .word 0x8c42002c
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae42000c
    .word 0x8e450008
    .word 0x3c034080
    .word 0x44801800
    .word 0x44831000
    .word 0xc4a00020
    c.lt.s $f0,$f3
    nop
    bc1f L25a6cc
    .word 0x8e44000c
    .word 0x3c03bf80
    .word 0x44830000
    nop
    mul.s $f2,$f2,$f0
L25a6cc:
    .word 0xc4a10024
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L25a6f8
    nop
    .word 0x3c03bf80
    .word 0x44830000
    nop
    mul.s $f3,$f3,$f0
L25a6f8:
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
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
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


