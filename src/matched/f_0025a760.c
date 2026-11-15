extern void func_0025b060(void);
extern void func_00182e50(void);
extern void func_00189050(void);
extern void func_00182cf0(void);
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
    paddub s2,v0,zero
    jal func_0025b060
    paddub a0,s5,zero
    .word 0x8ea30000
    paddub s3,v0,zero
    addiu v0,zero,6
    beq v1,v0,L25a7f8
    nop
    addiu v0,zero,5
    beq v1,v0,L25a7ec
    nop
    addiu v0,zero,4
    beq v1,v0,L25a7e0
    nop
    b L25a804
    .word 0x8f8489f0
L25a7e0:
    .word 0x3c02002e
    b L25a800
    addiu s0,v0,1696
L25a7ec:
    .word 0x3c02002e
    b L25a800
    addiu s0,v0,1744
L25a7f8:
    .word 0x3c02002e
    addiu s0,v0,1776
L25a800:
    .word 0x8f8489f0
L25a804:
    .word 0xc6a10004
    .word 0x8ea50014
    addiu v0,zero,2
    .word 0x3c033f00
    .word 0x8c84000c
    .word 0x3c010033
    .word 0xafa200a0
    addiu v0,sp,164
    .word 0xac400000
    addiu v0,sp,168
    .word 0xac430000
    .word 0xc4203264
    addiu v0,sp,172
    .word 0xe4400000
    addiu v0,sp,176
    .word 0xe4410000
    addiu v0,sp,204
    .word 0xac440000
    addiu v0,sp,208
    jal func_00182e50
    .word 0xac450000
    addiu s6,sp,212
    .word 0xe6c00000
    .word 0xc6c00000
    .word 0x3c0241c8
    .word 0x44820800
    addiu s8,sp,180
    addiu s7,sp,184
    mul.s $f0,$f1,$f0
    addiu s4,sp,188
    .word 0x3c010033
    addiu a0,sp,160
    .word 0xe7c00000
    .word 0xaee20000
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
    .word 0x3c02002e
    addiu v0,v0,1760
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0x3c010033
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8f8389f0
    .word 0x8c2234a0
    .word 0x8e260000
    .word 0x8c650000
    .word 0x8c47002c
    jal func_00189050
    addiu a0,sp,160
    .word 0xae22000c
    .word 0x3c010033
    .word 0xc421326c
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L25a940
    nop
    b L25a954
    .word 0x8f8489f0
L25a940:
    .word 0x8e220008
    .word 0xc4410018
    .word 0xc4400020
    add.s $f1,$f1,$f0
    .word 0x8f8489f0
L25a954:
    .word 0xc6a00004
    addiu v0,zero,2
    .word 0x3c033f00
    addiu a1,gp,-32100
    .word 0x8c84000c
    .word 0xafa200a0
    addiu v0,sp,164
    .word 0xac400000
    addiu v0,sp,168
    .word 0xac430000
    addiu v0,sp,172
    .word 0xe4410000
    addiu v0,sp,176
    .word 0xe4400000
    addiu v0,sp,204
    .word 0xac440000
    addiu v0,sp,208
    jal func_00182e50
    .word 0xac450000
    .word 0xe6c00000
    .word 0xc6c00000
    .word 0x3c0241c8
    .word 0x44820800
    .word 0x3c010033
    addiu a0,sp,160
    mul.s $f0,$f1,$f0
    .word 0xe7c00000
    .word 0xaee20000
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
    .word 0x3c02002e
    addiu v0,v0,1760
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0x3c010033
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8f8389f0
    .word 0x8c2234a0
    .word 0x8e460000
    .word 0x8c650000
    .word 0x8c47002c
    jal func_00189050
    addiu a0,sp,160
    .word 0xae42000c
    .word 0x3c010033
    .word 0xc421326c
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L25aa90
    nop
    .word 0x8e420008
    .word 0x3c010033
    .word 0xc4400018
    .word 0xe420326c
    .word 0x8e420008
    .word 0x3c010033
    .word 0xc4400020
    .word 0xe4203270
L25aa90:
    .word 0x8ea20018
    beqz v0,L25ab94
    nop
    .word 0x3c010033
    .word 0xc421326c
    .word 0xc4420000
    .word 0xc6a30004
    addiu a1,zero,1
    .word 0x3c010033
    .word 0xc4203270
    .word 0x3c024120
    .word 0x44822000
    nop
    c.lt.s $f2,$f4
    nop
    bc1t L25aaf8
    add.s $f1,$f1,$f0
    .word 0x46002006
L25aad8:
    mul.s $f4,$f4,$f0
    addiu a1,a1,1
    c.lt.s $f2,$f4
    nop
    nop
    bc1f L25aad8
    nop
    nop
L25aaf8:
    .word 0x8f8489f0
    addiu v0,zero,3
    .word 0x3c033f00
    .word 0x70003628
    .word 0x8c84000c
    .word 0xafa200a0
    addiu v0,sp,164
    .word 0xac400000
    addiu v0,sp,168
    .word 0xac430000
    addiu v0,sp,172
    .word 0xe4410000
    addiu v0,sp,176
    .word 0xe4430000
    addiu v0,sp,204
    .word 0xac440000
    addiu v0,sp,208
    .word 0xe4420000
    .word 0xaec50000
    jal func_00182cf0
    .word 0xafa000d8
    addiu v0,sp,220
    .word 0xe4400000
    .word 0x3c0241c8
    .word 0x44820800
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    .word 0xe7c00000
    .word 0xaee20000
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    b L25ac44
    .word 0xe680000c
L25ab94:
    .word 0x8f8489f0
    .word 0x3c02002f
    addiu v1,v0,5536
    .word 0xc6a20004
    .word 0x3c02002f
    .word 0x244515a0
    .word 0x8c84000c
    addiu a3,zero,2
    addiu v0,sp,164
    .word 0x3c063f00
    .word 0xafa700a0
    .word 0xac400000
    addiu v0,sp,168
    .word 0xac460000
    .word 0x3c010033
    .word 0xc421326c
    addiu v0,sp,172
    .word 0x3c010033
    .word 0xc4203270
    add.s $f0,$f1,$f0
    .word 0xe4400000
    addiu v0,sp,176
    .word 0xe4420000
    addiu v0,sp,204
    .word 0xac440000
    addiu v0,sp,208
    jal func_00182e50
    .word 0xac430000
    .word 0x3c0241c8
    .word 0xe6c00000
    .word 0x44820800
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    .word 0xe7c00000
    .word 0xaee20000
    .word 0xc6030000
    .word 0xc6020004
    .word 0xc6010008
    .word 0xc600000c
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
L25ac44:
    .word 0x3c010033
    .word 0x8c2234a0
    .word 0x8f8389f0
    .word 0x8e660000
    addiu a0,sp,160
    .word 0x8c42002c
    .word 0x8c650000
    jal func_00189050
    addiu a3,v0,1
    .word 0xae620008
    .word 0x3c02002e
    addiu v0,v0,1760
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0x3c010033
    .word 0xe6830000
    .word 0xe6820004
    .word 0xe6810008
    .word 0xe680000c
    .word 0x8f8389f0
    .word 0x8c2234a0
    .word 0x8e660000
    .word 0x8c650000
    .word 0x8c47002c
    jal func_00189050
    addiu a0,sp,160
    .word 0xae62000c
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


