extern void fn_238320(void);
extern void fn_142a90(void);
extern void fn_1c3b70(void);
extern void fn_142950(void);
extern void fn_1c7c70(void);
extern void fn_238290(void);
extern void fn_238260(void);
extern void fn_238230(void);
extern void fn_238200(void);
extern void fn_11a620(void);
extern void fn_2382f0(void);
extern void fn_2382c0(void);
extern void fn_2381d0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-224
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c900008
    paddub s6,a0,zero
    .word 0x8c92000c
    .word 0xc6cc026c
    addiu s1,s0,7704
    jal fn_238320
    paddub a0,s1,zero
    .word 0x8e02044c
    jal fn_142a90
    .word 0x8c440000
    paddub s3,v0,zero
    jal fn_1c3b70
    paddub a0,s3,zero
    paddub a0,s3,zero
    jal fn_142950
    paddub s3,v0,zero
    jal fn_1c3b70
    paddub a0,v0,zero
    addiu a2,sp,160
    addiu a1,zero,8
L173d2c:
    .word 0x8c440000
    .word 0x8c430004
    addiu a1,a1,-1
    .word 0xacc40000
    .word 0xacc30004
    addiu v0,v0,8
    bgtz a1,L173d2c
    addiu a2,a2,8
    addiu a0,sp,160
    addiu a2,zero,2
    jal fn_1c7c70
    paddub a1,s3,zero
    .word 0xc644000c
    .word 0xc7a000a0
    addiu s8,sp,164
    .word 0xc6430010
    .word 0xc7c20000
    addiu s7,sp,168
    .word 0xc6410014
    mul.s $f4,$f4,$f0
    paddub a0,s1,zero
    mul.s $f2,$f3,$f2
    .word 0xc6e00000
    adda.s $f4,$f2
    jal fn_238290
    madd.s $f12,$f1,$f0
    .word 0xc645000c
    .word 0xc7a400b0
    .word 0xc6430010
    .word 0xc7a200b4
    .word 0xc6410014
    .word 0xc7a000b8
    paddub a0,s1,zero
    mul.s $f4,$f5,$f4
    mul.s $f2,$f3,$f2
    adda.s $f4,$f2
    jal fn_238260
    madd.s $f12,$f1,$f0
    addiu s4,sp,192
    .word 0xc644000c
    .word 0xc6800000
    addiu s3,sp,196
    .word 0xc6430010
    .word 0xc6620000
    addiu s5,sp,200
    .word 0xc6410014
    mul.s $f4,$f4,$f0
    paddub a0,s1,zero
    mul.s $f2,$f3,$f2
    .word 0xc6a00000
    adda.s $f4,$f2
    jal fn_238230
    madd.s $f12,$f1,$f0
    .word 0xc641000c
    .word 0xc6400010
    .word 0xc6420014
    paddub a0,s1,zero
    mul.s $f1,$f1,$f1
    mul.s $f0,$f0,$f0
    adda.s $f1,$f0
    jal fn_238200
    madd.s $f12,$f2,$f2
    ori v0,zero,0xeaa4
    addu v0,s0,v0
    .word 0xc7a100a0
    .word 0xc4440000
    .word 0xc7c20000
    .word 0xc6e00000
    ori v0,zero,0xeaa8
    addu v0,s0,v0
    mul.s $f4,$f4,$f1
    .word 0xc4430000
    ori v0,zero,0xeaac
    addu v0,s0,v0
    mul.s $f2,$f3,$f2
    .word 0xc4410000
    adda.s $f4,$f2
    jal fn_11a620
    madd.s $f12,$f1,$f0
    .word 0x3c024265
    ori v0,v0,0x2ee0
    .word 0x44820800
    paddub a0,s1,zero
    jal fn_2382f0
    mul.s $f12,$f1,$f0
    .word 0x3c010001
    addu at,s0,at
    .word 0xc6840000
    .word 0xc425eaa4
    .word 0xc6620000
    .word 0xc6a00000
    .word 0x3c010001
    addu at,s0,at
    mul.s $f4,$f5,$f4
    .word 0xc423eaa8
    .word 0x3c010001
    addu at,s0,at
    mul.s $f2,$f3,$f2
    .word 0xc421eaac
    adda.s $f4,$f2
    jal fn_11a620
    madd.s $f12,$f1,$f0
    .word 0x3c024265
    ori v0,v0,0x2ee0
    .word 0x44820800
    paddub a0,s1,zero
    jal fn_2382c0
    mul.s $f12,$f1,$f0
    .word 0x8ec20008
    .word 0x8c42003c
    xori v0,v0,0x8000
    sltiu v0,v0,1
    beqz v0,L173f08
    nop
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44826000
    b L173f60
    paddub a0,s1,zero
L173f08:
    .word 0xc6c2027c
    .word 0xc6c10280
    .word 0x44800000
    nop
    add.s $f1,$f2,$f1
    c.lt.s $f1,$f0
    nop
    bc1tl L173f38
    neg.s $f1,$f1
    b L173f3c
    .word 0x3c024040
    neg.s $f1,$f1
L173f38:
    .word 0x3c024040
L173f3c:
    .word 0x44820000
    nop
    div.s $f1,$f1,$f0
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    mul.s $f12,$f0,$f1
    paddub a0,s1,zero
L173f60:
    jal fn_2381d0
    nop
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
    addiu v0,zero,1
    jr ra
    addiu sp,sp,224
}


