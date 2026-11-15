extern void func_0013b550(void);
extern void func_00140a60(void);
extern void func_00140f10(void);
extern void func_00141750(void);
extern void func_00149e60(void);
extern void func_00149e70(void);
extern void func_00162c40(void);
extern void func_001747d0(void);
extern void func_00174990(void);
extern void func_001b31c0(void);
extern void func_001b32c0(void);
extern void func_001c3610(void);
extern void func_001c3b70(void);
extern void func_001c3b80(void);
extern void func_001c73c0(void);
extern void func_001c7610(void);
extern void func_001ce160(void);
extern void func_001f79f0(void);
extern void func_00202670(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-128
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c930518
    .word 0x70a09628
    .word 0x70c08628
    .word 0x70808e28
    .word 0x8e74000c
    jal func_00149e60
    .word 0xac92003c
    .word 0x8c420014
    .word 0x72402e28
    .word 0x72202628
    jalr ra,v0
    .word 0x72003628
    .word 0x8e23003c
    .word 0x3c020004
    beq v1,v0,L1400b0
    nop
    .word 0x3c020002
    beq v1,v0,L13fff8
    .word 0x3c023f00
    .word 0x3c020001
    beq v1,v0,L13ff3c
    .word 0x3c023f00
    ori v0,zero,32768
    beq v1,v0,L13fe98
    .word 0x3c023f33
    addiu v0,zero,8192
    beq v1,v0,L13fdf4
    .word 0x3c023f00
    addiu v0,zero,16384
    beq v1,v0,L13fdac
    nop
    addiu v0,zero,4096
    beq v1,v0,L13fdac
    nop
    addiu v0,zero,2048
    beq v1,v0,L13fd60
    nop
    addiu v0,zero,512
    beq v1,v0,L13fd08
    nop
    addiu v0,zero,128
    beq v1,v0,L13fca8
    nop
    addiu v0,zero,256
    beq v1,v0,L13fc88
    nop
    addiu v0,zero,32
    beq v1,v0,L13fc30
    nop
    addiu v0,zero,64
    beq v1,v0,L13fc30
    nop
    addiu v0,zero,4
    beq v1,v0,L13fbf8
    nop
    addiu v0,zero,2
    beq v1,v0,L13fbf8
    nop
    addiu v0,zero,8
    beq v1,v0,L13fbf8
    nop
    .word 0x3c020020
    beq v1,v0,L13fbf0
    .word 0x72602628
    .word 0x3c020010
    beq v1,v0,L13fbec
    nop
    beqz v1,L140684
    nop
    b L140688
    .word 0x7bbf0060
L13fbec:
    .word 0x72602628
L13fbf0:
    jal func_00140a60
    nop
L13fbf8:
    .word 0xae80000c
    .word 0xae800010
    .word 0xae800014
    .word 0xae80003c
    .word 0xae800040
    .word 0xae800044
    jal func_001b31c0
    .word 0x8e240518
    .word 0x8e640014
    addiu v0,zero,-2049
    .word 0x8c830010
    and v0,v1,v0
    b L140684
    .word 0xac820010
L13fc30:
    .word 0x8e620008
    .word 0x8c420010
    andi v0,v0,0x1000
    bnez v0,L13fc68
    addiu v0,zero,1
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    .word 0xe6600164
    addiu v0,zero,1
L13fc68:
    .word 0xae620270
    .word 0xae620274
    .word 0xae600278
    .word 0xae60026c
    .word 0xae800044
    .word 0xae800040
    b L140684
    .word 0xae80003c
L13fc88:
    .word 0x8e620004
    andi v0,v0,0x100
    bnez v0,L140684
    nop
    .word 0xae800044
    .word 0xae800040
    b L140684
    .word 0xae80003c
L13fca8:
    .word 0xae80003c
    .word 0xae800040
    .word 0xae800044
    .word 0x3c017000
    .word 0xc6610164
    .word 0xc4203fb0
    c.le.s $f1,$f0
    nop
    bc1t L13fce8
    .word 0x3c023e99
    .word 0x8e620158
    beqz v0,L13fce4
    nop
    jal func_00140a60
    .word 0x8e240518
L13fce4:
    .word 0x3c023e99
L13fce8:
    ori v0,v0,0x999a
    .word 0x44826000
    .word 0x3c023e80
    .word 0x44826800
    jal func_001747d0
    .word 0x8e640000
    b L140684
    nop
L13fd08:
    .word 0x8e620008
    .word 0x8c420010
    andi v0,v0,0x1000
    bnez v0,L13fd40
    .word 0x3c023e80
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    .word 0xe6600164
    .word 0x3c023e80
L13fd40:
    .word 0x44826800
    .word 0x3c023ecc
    ori v0,v0,0xcccd
    .word 0x44826000
    jal func_001747d0
    .word 0x8e640000
    b L140684
    nop
L13fd60:
    .word 0x8e230544
    .word 0x3c02002e
    addiu v0,v0,-8096
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c450000
    jal func_0013b550
    .word 0x8f848328
    .word 0x8e250544
    .word 0x70403628
    .word 0x3c020030
    addiu v0,v0,-5024
    sll v1,a1,0x2
    addu v0,v0,v1
    .word 0xc44c0000
    jal func_00140f10
    .word 0x72602628
    b L140684
    nop
L13fdac:
    .word 0x8e620270
    bnez v0,L140684
    nop
    .word 0x8e620008
    .word 0x8c420010
    andi v0,v0,0x1000
    bnez v0,L140684
    nop
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    b L140684
    .word 0xe6600164
    .word 0x3c023f00
L13fdf4:
    .word 0xae6200c8
    .word 0x3c024270
    .word 0xae6200cc
    addiu v0,zero,1
    .word 0xae620270
    .word 0xae620274
    .word 0xae600278
    .word 0xae60026c
    .word 0x8e830024
    .word 0x3c02002e
    addiu v0,v0,-7968
    .word 0xac60000c
    .word 0x8e230548
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c450000
    jal func_0013b550
    .word 0x8f848328
    .word 0x8e230548
    .word 0x70403628
    .word 0x3c020030
    addiu v0,v0,-5232
    addiu a1,v1,256
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0xc44c0000
    jal func_00140f10
    .word 0x72602628
    .word 0x3c017000
    .word 0x8c243fcc
    .word 0x8e230518
    addiu a2,zero,7
    .word 0x8c820000
    .word 0x8c670070
    .word 0x8c420010
    jalr ra,v0
    .word 0x72602e28
    .word 0x8e220518
    b L140684
    .word 0xac400294
    .word 0x3c023f33
L13fe98:
    ori v0,v0,0x3333
    .word 0xae6200c8
    .word 0x3c024040
    .word 0xae6200cc
    .word 0xae60005c
    .word 0xae600060
    addiu v0,zero,1
    .word 0xae600064
    .word 0xae620270
    .word 0xae620274
    .word 0xae600278
    .word 0xae60026c
    .word 0x8e820024
    .word 0xac40000c
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,425
    .word 0xc78c8330
    addiu a1,zero,512
    .word 0x70403628
    jal func_00140f10
    .word 0x72602628
    .word 0x8e220518
    .word 0x3c017000
    .word 0x8c243fcc
    addiu a2,zero,6
    .word 0x8c470070
    .word 0x8c820000
    .word 0x8c420010
    jalr ra,v0
    .word 0x72602e28
    .word 0x3c023e99
    ori v0,v0,0x999a
    .word 0x44826000
    .word 0x3c023e80
    .word 0x44826800
    jal func_001747d0
    .word 0x8e640000
    b L140684
    nop
    .word 0x3c023f00
L13ff3c:
    .word 0xae6200c8
    .word 0x3c024040
    .word 0xae6200cc
    .word 0xae60005c
    .word 0xae600060
    .word 0xae600064
    .word 0xae600270
    .word 0xae600274
    .word 0xae600278
    .word 0x3c024000
    .word 0xae62026c
    .word 0x8e820024
    .word 0xac40000c
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,423
    .word 0x8e630008
    .word 0x70403628
    .word 0x3c020030
    .word 0x8e25054c
    addiu v0,v0,-5312
    .word 0x8c63054c
    .word 0x72602628
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0xc44c0000
    jal func_00140f10
    addiu a1,a1,1024
    .word 0x8e220518
    .word 0x3c017000
    .word 0x8c243fcc
    addiu a2,zero,6
    .word 0x8c470070
    .word 0x8c820000
    .word 0x8c420010
    jalr ra,v0
    .word 0x72602e28
    .word 0x3c023e99
    ori v0,v0,0x999a
    .word 0x44826000
    .word 0x3c023e80
    .word 0x44826800
    jal func_001747d0
    .word 0x8e640000
    b L140684
    nop
    .word 0x3c023f00
L13fff8:
    .word 0xae6200c8
    .word 0x3c024040
    .word 0xae6200cc
    .word 0xae60005c
    .word 0xae600060
    .word 0xae600064
    .word 0xae600270
    .word 0xae600274
    .word 0xae600278
    .word 0x3c024000
    .word 0xae62026c
    .word 0x8e820024
    .word 0xac40000c
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,424
    .word 0x8e630008
    .word 0x70403628
    .word 0x3c020030
    .word 0x8e25054c
    addiu v0,v0,-5312
    .word 0x8c63054c
    .word 0x72602628
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0xc44c0000
    jal func_00140f10
    addiu a1,a1,2048
    .word 0x8e220518
    .word 0x3c017000
    .word 0x8c243fcc
    addiu a2,zero,6
    .word 0x8c470070
    .word 0x8c820000
    .word 0x8c420010
    jalr ra,v0
    .word 0x72602e28
    .word 0x3c023e80
    .word 0x44826800
    .word 0x3c023e99
    ori v0,v0,0x999a
    .word 0x44826000
    jal func_001747d0
    .word 0x8e640000
    b L140684
    nop
L1400b0:
    .word 0x8e220518
    addiu a1,zero,2
    .word 0x8c520014
    .word 0x8e42003c
    beq v0,a1,L140110
    .word 0x3c023f00
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L14010c
    nop
    .word 0x8e42000c
    .word 0x72402628
    .word 0x8c420010
    jalr ra,v0
    addiu s5,s2,12
    beqz v0,L14010c
    nop
    .word 0x8ea20000
    addiu a1,zero,2
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L14010c:
    .word 0x3c023f00
L140110:
    .word 0x44826000
    .word 0x3c023dcc
    ori v0,v0,0xcccd
    .word 0x44826800
    jal func_00162c40
    .word 0x72402628
    .word 0x8e62028c
    .word 0xc682000c
    .word 0xc6810010
    .word 0xc6800014
    .word 0xe4420004
    .word 0xe4410008
    jal func_001f79f0
    .word 0xe440000c
    andi v0,v0,0x7fff
    bltz v0,L140164
    srl v1,v0,0x1
    .word 0x44820000
    b L14017c
    cvt.s.w $f0,$f0
    srl v1,v0,0x1
L140164:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L14017c:
    .word 0x3c024700
    .word 0x44820800
    nop
    div.s $f0,$f0,$f1
    .word 0x8e62028c
    nop
    nop
    jal func_001f79f0
    .word 0xe4400010
    andi v0,v0,0x7fff
    bltz v0,L1401bc
    srl v1,v0,0x1
    .word 0x44820000
    b L1401d4
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L1401bc:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L1401d4:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f0,$f1,$f0
    .word 0x8e62028c
    nop
    nop
    jal func_001f79f0
    .word 0xe4400014
    andi v0,v0,0x7fff
    bltz v0,L140214
    srl v1,v0,0x1
    .word 0x44820000
    b L14022c
    cvt.s.w $f1,$f0
    srl v1,v0,0x1
L140214:
    andi v0,v0,0x1
    or v1,v1,v0
    .word 0x44830000
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L14022c:
    .word 0x3c024700
    .word 0x44820000
    nop
    div.s $f0,$f1,$f0
    .word 0x8e62028c
    .word 0xe4400018
    .word 0x8e62028c
    addiu a0,v0,16
    jal func_001ce160
    .word 0x70802e28
    .word 0xc682000c
    .word 0xc6810010
    .word 0x8e62028c
    .word 0xc6830014
    mul.s $f2,$f2,$f2
    .word 0xc4400010
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f1,$f3,$f3
    mul.s $f0,$f0,$f1
    .word 0xe4400010
    .word 0xc682000c
    .word 0xc6810010
    .word 0x8e62028c
    .word 0xc6830014
    mul.s $f2,$f2,$f2
    .word 0xc4400014
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f1,$f3,$f3
    mul.s $f0,$f0,$f1
    .word 0xe4400014
    .word 0xc682000c
    .word 0xc6810010
    .word 0x8e62028c
    .word 0xc6830014
    mul.s $f2,$f2,$f2
    .word 0xc4400018
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f1,$f3,$f3
    mul.s $f0,$f0,$f1
    .word 0xe4400018
    .word 0x8f8484ac
    beqz a0,L1402f4
    nop
    .word 0x8c820010
    addiu a1,zero,4
    jalr ra,v0
    .word 0x72603628
L1402f4:
    .word 0x8e620158
    beqz v0,L14030c
    .word 0x3c017000
    jal func_00141750
    .word 0x72602628
    .word 0x3c017000
L14030c:
    .word 0x8c243fcc
    addiu a2,zero,2
    .word 0x72602e28
    .word 0x8c820000
    .word 0x8c420010
    jalr ra,v0
    .word 0x70003e28
    .word 0x8e620240
    addiu v0,v0,1
    .word 0xae620240
    .word 0xae60005c
    .word 0xae600060
    .word 0xae600064
    jal func_001c3610
    .word 0x8e640288
    ori v0,zero,60256
    addu v0,s1,v0
    .word 0x8c420000
    jal func_001c3b80
    .word 0x8c440004
    .word 0x8e640288
    jal func_001c3b70
    .word 0x70409628
    addiu a1,zero,8
L14036c:
    .word 0x8e440000
    .word 0x8e430004
    addiu a1,a1,-1
    .word 0xac440000
    .word 0xac430004
    addiu s2,s2,8
    bgtz a1,L14036c
    addiu v0,v0,8
    .word 0x3c010001
    addu at,s1,at
    .word 0x8e720288
    .word 0x8c22eb5c
    .word 0x3c010001
    addu at,s1,at
    .word 0xac520004
    .word 0x8c24eb60
    jal func_00202670
    .word 0x72402e28
    .word 0x3c010001
    addu at,s1,at
    .word 0x8c24eb64
    jal func_00202670
    .word 0x72402e28
    .word 0x3c010001
    addu at,s1,at
    .word 0x8c24eb68
    jal func_00202670
    .word 0x72402e28
    sltiu at,s0,10
    beqz at,L140584
    nop
    .word 0x3c03002f
    addiu v1,v1,-16128
    sll v0,s0,0x2
    addu v0,v0,v1
    .word 0x8c420000
    jr v0
    nop
    .word 0xae80003c
    .word 0xae800040
    .word 0xae800044
    .word 0xae80000c
    .word 0xae800010
    .word 0x72602628
    jal func_001b31c0
    .word 0xae800014
    jal func_001c3b70
    .word 0x8e840048
    .word 0x8e840024
    .word 0x8c83000c
    beqz v1,L140524
    nop
    .word 0xc4800010
    .word 0x3c03bf80
    .word 0x44830800
    .word 0x70402e28
    mul.s $f0,$f1,$f0
    .word 0x70402628
    .word 0xe4400020
    .word 0x8e830024
    .word 0xc4600014
    mul.s $f0,$f1,$f0
    .word 0xe4400024
    .word 0x8e830024
    .word 0xc4600018
    mul.s $f0,$f1,$f0
    .word 0xe4400028
    .word 0xc4430014
    .word 0xc4420028
    .word 0xc4410018
    .word 0xc4400024
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400000
    .word 0xc4430018
    .word 0xc4420020
    .word 0xc4410010
    .word 0xc4400028
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400004
    .word 0xc4430010
    .word 0xc4420024
    .word 0xc4410014
    .word 0xc4400020
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400008
    .word 0xc4430024
    .word 0xc4420008
    .word 0xc4410028
    .word 0xc4400004
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400010
    .word 0xc4430028
    .word 0xc4420000
    .word 0xc4410020
    .word 0xc4400008
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    .word 0xe4400014
    .word 0xc4430020
    .word 0xc4420004
    .word 0xc4410024
    .word 0xc4400000
    mula.s $f3,$f2
    msub.s $f0,$f1,$f0
    jal func_001c73c0
    .word 0xe4400018
L140524:
    .word 0x8e640008
    jal func_00149e70
    addiu a1,zero,2
    b L1405cc
    .word 0x8e640288
    .word 0xae80003c
    .word 0xae800040
    .word 0xae800044
    .word 0x8e640004
    .word 0x3c02be4c
    ori v0,v0,0xcccd
    .word 0x44826000
    addiu v1,zero,-4097
    .word 0x44806800
    and v0,a0,v1
    .word 0xae620004
    mov.s $f14,$f12
    jal func_001b32c0
    .word 0x72602628
    .word 0x8e640008
    jal func_00149e70
    addiu a1,zero,1
    b L1405c8
    nop
L140584:
    .word 0xae80003c
    .word 0xae800040
    .word 0xae800044
    .word 0x8e640004
    .word 0x3c02c040
    .word 0x44826000
    addiu v1,zero,-4097
    .word 0x44806800
    .word 0x3c02bf00
    and v1,a0,v1
    .word 0x44827000
    .word 0xae630004
    jal func_001b32c0
    .word 0x72602628
    .word 0x8e640008
    jal func_00149e70
    addiu a1,zero,1
L1405c8:
    .word 0x8e640288
L1405cc:
    jal func_001c3b70
    nop
    .word 0x8e64028c
    .word 0x3c0341c8
    addiu a3,sp,112
    .word 0x44830000
    addiu a2,zero,2
    .word 0xac820038
    .word 0x8e62028c
    .word 0x8c440038
    addiu a1,v0,16
    .word 0xc4830030
    .word 0xc4820034
    .word 0xc4810038
    .word 0xe4e30000
    .word 0xe4e20004
    .word 0xe4e10008
    .word 0xc4420010
    .word 0xc4410014
    .word 0xc4430018
    mul.s $f2,$f2,$f2
    mul.s $f1,$f1,$f1
    adda.s $f2,$f1
    madd.s $f1,$f3,$f3
    jal func_001c7610
    mul.s $f12,$f0,$f1
    .word 0x8e63028c
    addiu v0,sp,112
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0x8c630038
    .word 0x3c023f80
    .word 0xe4620030
    .word 0xe4610034
    .word 0xe4600038
    .word 0x8e640000
    .word 0x44826000
    jal func_00174990
    addiu a1,zero,1
    .word 0x3c023f80
    .word 0x44826000
    .word 0x3c024000
    .word 0x44826800
    jal func_001747d0
    .word 0x8e640000
L140684:
    .word 0x7bbf0060
L140688:
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,128
}
