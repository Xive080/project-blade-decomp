extern void func_001768e0(void);
extern void func_001765e0(void);
extern void func_001b5910(void);
extern void func_00175390(void);
extern void func_00256438(void);
extern void func_001a5530(void);
extern void func_001a5500(void);
extern void func_0011ec80(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-128
    .word 0x7fbf0060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x3c017000
    .word 0x3c020030
    addiu s1,v0,-23424
    .word 0xc4343fb0
    .word 0x3c020031
    addiu s2,v0,-32160
    .word 0x70008628
    .word 0x70009e28
L174d10:
    addiu a1,sp,124
    jal func_001768e0
    paddub a0,s3,zero
    .word 0xae220600
    .word 0x8e220600
    addiu v1,zero,1
    bne v0,v1,L1751ac
    nop
    .word 0x8e420000
    bnez v0,L174d60
    nop
    addiu v0,zero,3
    .word 0xafa30070
    addiu a2,sp,112
    paddub a1,v1,zero
    .word 0xafa20074
    jal func_001765e0
    paddub a0,s3,zero
    .word 0xae420000
    nop
L174d60:
    .word 0x8e420004
    bnez v0,L174e58
    nop
    addiu s4,zero,2
    addiu v0,zero,1
    jal func_001b5910
    movz s4,v0,s3
    and v0,s4,v0
    beqz v0,L174e54
    addiu v0,zero,1
    .word 0x3c017000
    .word 0x8c233fc8
    addiu v0,zero,6
    beq v1,v0,L174e58
    nop
    sll v0,s3,0x1
    addu v0,v0,s3
    sll v0,v0,0x2
    addu v0,v0,s3
    sll v1,v0,0x2
    .word 0x3c020031
    addiu v0,v0,-32160
    addiu a0,zero,1
    addu s4,v0,v1
    .word 0xae840008
    .word 0x8e850010
    jal func_00175390
    paddub a0,s3,zero
    .word 0xae820004
    .word 0x8e820004
    beqz v0,L174e58
    nop
    sll v0,s3,0x1
    addu v0,v0,s3
    .word 0xc6820018
    sll v0,v0,0x2
    addu v0,v0,s3
    sll v1,v0,0x2
    .word 0x3c020031
    addiu v0,v0,-32160
    addu s4,v0,v1
    .word 0x8e820008
    beqz v0,L174e58
    nop
    addiu v0,zero,2
    .word 0xae82002c
    .word 0xc6810014
    .word 0x3c02437f
    .word 0x44820000
    nop
    mul.s $f1,$f2,$f1
    jal func_00256438
    mul.s $f12,$f0,$f1
    addiu a2,s4,44
    addiu a1,zero,3
    .word 0xae820030
    jal func_001765e0
    paddub a0,s3,zero
    b L174e5c
    .word 0x8fa2007c
    addiu v0,zero,1
L174e54:
    .word 0xae420004
L174e58:
    .word 0x8fa2007c
L174e5c:
    .word 0x44800800
    .word 0xc4400150
    c.eq.s $f1,$f0
    nop
    bc1f L174ee0
    nop
    .word 0xc4400154
    c.eq.s $f1,$f0
    nop
    bc1f L174ee0
    nop
    .word 0xc44c0190
    c.le.s $f12,$f1
    nop
    bc1t L174eb8
    nop
    jal func_001a5530
    nop
    jal func_001a5500
    paddub a0,v0,zero
    .word 0x8fa2007c
    b L174ee0
    .word 0xe4400150
L174eb8:
    c.lt.s $f12,$f1
    nop
    bc1f L174ee0
    nop
    jal func_001a5530
    neg.s $f12,$f12
    jal func_001a5500
    paddub a0,v0,zero
    .word 0x8fa2007c
    .word 0xe4400154
L174ee0:
    .word 0x8fa2007c
    .word 0x44800800
    .word 0xc4400158
    c.eq.s $f1,$f0
    nop
    bc1f L174f68
    nop
    .word 0xc440015c
    c.eq.s $f1,$f0
    nop
    bc1f L174f68
    nop
    .word 0xc44c0194
    c.le.s $f12,$f1
    nop
    bc1t L174f40
    nop
    jal func_001a5530
    nop
    jal func_001a5500
    paddub a0,v0,zero
    .word 0x8fa2007c
    b L174f68
    .word 0xe4400158
L174f40:
    c.lt.s $f12,$f1
    nop
    bc1f L174f68
    nop
    jal func_001a5530
    neg.s $f12,$f12
    jal func_001a5500
    paddub a0,v0,zero
    .word 0x8fa2007c
    .word 0xe440015c
L174f68:
    bnez s0,L174fd8
    nop
    .word 0x8fa6007c
    .word 0x70001e28
    .word 0x3c02be4c
    ori v0,v0,0xcccd
    .word 0x44820000
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820800
L174f90:
    .word 0xc4c20150
    c.le.s $f2,$f1
    nop
    bc1fl L174fbc
    addiu s0,zero,1
    c.lt.s $f2,$f0
    nop
    bc1fl L174fc8
    addiu v1,v1,1
    nop
    addiu s0,zero,1
L174fbc:
    b L174fdc
    .word 0xc641001c
    addiu v1,v1,1
L174fc8:
    slti v0,v1,16
    bnez v0,L174f90
    addiu a2,a2,4
    nop
L174fd8:
    .word 0xc641001c
L174fdc:
    c.lt.s $f20,$f1
    nop
    bc1t L175038
    nop
    .word 0x44800000
    nop
    c.eq.s $f0,$f1
    nop
    bc1t L175038
    nop
    .word 0x8e420008
    beqz v0,L175030
    nop
    addiu v0,zero,1
    .word 0xae42002c
    addiu a2,s2,44
    addiu a1,zero,3
    paddub a0,s3,zero
    jal func_001765e0
    .word 0xae400030
    nop
L175030:
    .word 0xae40001c
    .word 0xae400010
L175038:
    .word 0xc6400020
    c.lt.s $f20,$f0
    nop
    bc1t L1750b8
    nop
    .word 0x44801000
    nop
    c.eq.s $f2,$f0
    nop
    bc1t L1750b8
    nop
    .word 0x8e420008
    beqz v0,L1750a8
    nop
    addiu v0,zero,2
    .word 0xae42002c
    .word 0xc6410014
    .word 0x3c02437f
    .word 0x44820000
    nop
    mul.s $f1,$f2,$f1
    jal func_00256438
    mul.s $f12,$f0,$f1
    addiu a2,s2,44
    addiu a1,zero,3
    .word 0xae420030
    jal func_001765e0
    paddub a0,s3,zero
L1750a8:
    .word 0xae400020
    .word 0xae400018
    .word 0xae400024
    nop
L1750b8:
    .word 0xc6430024
    .word 0x44801000
    nop
    c.eq.s $f2,$f3
    nop
    bc1tl L17520c
    addiu s3,s3,1
    .word 0x8e42000c
    bnez v0,L175208
    nop
    .word 0x3c017000
    .word 0xc4213fa8
    .word 0xc6400018
    mul.s $f1,$f3,$f1
    add.s $f0,$f0,$f1
    .word 0xe6400018
    .word 0xc6400024
    c.le.s $f0,$f2
    nop
    bc1t L17512c
    .word 0x70001628
    .word 0xc6410018
    .word 0xc6400028
    c.lt.s $f1,$f0
    nop
    bc1t L175148
    nop
    b L175148
    addiu v0,zero,1
L17512c:
    .word 0xc6410018
    .word 0xc6400028
    c.le.s $f1,$f0
    nop
    bc1f L175148
    nop
    addiu v0,zero,1
L175148:
    beqz v0,L175160
    nop
    .word 0xc6400028
    .word 0xe6400018
    .word 0xae400024
    nop
L175160:
    .word 0x8e420008
    beqz v0,L175208
    .word 0xc6420018
    addiu v0,zero,2
    .word 0xae42002c
    .word 0xc6410014
    .word 0x3c02437f
    .word 0x44820000
    nop
    mul.s $f1,$f2,$f1
    jal func_00256438
    mul.s $f12,$f0,$f1
    addiu a2,s2,44
    addiu a1,zero,3
    .word 0xae420030
    jal func_001765e0
    paddub a0,s3,zero
    b L175208
    nop
L1751ac:
    bnez v0,L175208
    nop
    sll v0,s3,0x1
    addu v0,v0,s3
    sll v0,v0,0x2
    addu v0,v0,s3
    sll v1,v0,0x2
    .word 0x3c020031
    addiu v0,v0,-32160
    addu s4,v0,v1
    .word 0xae800000
    .word 0xae800008
    .word 0xae80000c
    addiu a0,s4,16
    addiu a2,zero,28
    .word 0x70002e28
    jal func_0011ec80
    .word 0xae800004
    .word 0x3c023f80
    .word 0xae820014
    .word 0xae80002c
    .word 0xae800030
    nop
L175208:
    addiu s3,s3,1
L17520c:
    slti v0,s3,2
    addiu s1,s1,4
    bnez v0,L174d10
    addiu s2,s2,52
    addiu v0,zero,1
    bne s0,v0,L175234
    nop
    .word 0x3c010030
    b L175258
    .word 0xac20a6dc
L175234:
    .word 0x3c010030
    .word 0xc421a6dc
    .word 0x3c023ca3
    ori v0,v0,0xd70a
    .word 0x44820000
    nop
    add.s $f0,$f1,$f0
    .word 0x3c010030
    .word 0xe420a6dc
L175258:
    .word 0x7bbf0060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,128
}


