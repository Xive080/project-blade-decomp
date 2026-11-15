extern void func_00182e50(void);
extern void func_00189050(void);
extern void func_0024b3a0(void);
extern void func_0024b3c0(void);
extern void func_0024b400(void);
extern void func_0024b410(void);
extern void func_0024bc20(void);
extern void func_0024bc40(void);
asm void f(void) {
    .set noreorder
    .set noat
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
    .word 0x8f8289f0
    paddub s2,a1,zero
    addiu a1,zero,1
    .word 0xc44c0098
    .word 0xc44d00b0
    jal func_0024b410
    paddub s5,a0,zero
    .word 0x8f8389f0
    .word 0x8c6200c0
    beqz v0,L252f44
    nop
    .word 0x8c620000
    .word 0x8ea3002c
    .word 0x8c420084
    addiu a0,v1,1
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v0,v1
    .word 0x8c620000
    ori v0,v0,0xa0
    b L252f70
    .word 0xac620000
L252f44:
    .word 0x8c620000
    .word 0x8ea3002c
    .word 0x8c420084
    addiu a0,v1,1
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v1,v0,v1
    .word 0x8c620000
    ori v0,v0,0x80
    .word 0xac620000
L252f70:
    .word 0x8ea2002c
    paddub a0,s5,zero
    addiu a1,v0,1
    jal func_0024b400
    paddub a2,a1,zero
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 1149394944
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 1149396992
    .word 0x3c02c3d6
    ori v0,v0,0x6667
    .word 1149399040
    .word 0x3c024000
    .word 1149401088
    .word 0x3c023f80
    .word 1149403136
    jal func_0024b3c0
    paddub a0,s5,zero
    .word 0x3c023f66
    ori v0,v0,0x6666
    .word 1149394944
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 1149396992
    jal func_0024b3a0
    paddub a0,s5,zero
    jal func_0024bc40
    paddub a0,s5,zero
    jal func_0024bc20
    paddub a0,s5,zero
    .word 0x8f8489f0
    addiu v1,zero,2
    addiu s7,sp,148
    addiu s6,sp,152
    .word 0x8c84000c
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
    jal func_00182e50
    .word 0xafb200c0
    addiu v0,sp,196
    .word 0xe4400000
    .word 0x3c034160
    .word 1149437952
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
    jal func_00189050
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
    jal func_00189050
    addiu a0,sp,144
    .word 0xaea20084
    .word 0x8ea50088
    .word 0x3c034000
    .word 1149442048
    .word 0x3c034080
    .word 1149239296
    .word 0xc4a10020
    .word 1149440000
    c.lt.s $f1,$f0
    nop
    bc1f L253150
    .word 0x8ea40084
    .word 0x3c03bf80
    .word 1149435904
    nop
    mul.s $f2,$f2,$f0
L253150:
    .word 0xc4a10024
    .word 1149239296
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L25317c
    nop
    .word 0x3c03bf80
    .word 1149435904
    nop
    mul.s $f3,$f3,$f0
L25317c:
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
