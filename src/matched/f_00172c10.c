extern void func_0025f710(void);
extern void func_00132280(void);
extern void func_00132b20(void);
extern void func_001321a0(void);
extern void func_00170a90(void);
extern void func_0025f720(void);
extern void func_00133120(void);
extern void func_0016dd60(void);
extern void func_00132b30(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x3c027000
    .word 0x7fb00000
    ori v0,v0,0x3fdc
    .word 0x8c510000
    .word 0x70808628
    .word 0x70009628
    jal func_0025f710
    .word 0x70009e28
    .word 0x3c027000
    ori v0,v0,0x3fa8
    .word 0xc4410000
    .word 0xc7808424
    add.s $f0,$f0,$f1
    .word 0xe7808424
    .word 0x8e020004
    andi v0,v0,0x1
    bnez v0,L172ca4
    .word 0x3c017000
    .word 0x8e020018
    bnez v0,L172ca0
    nop
    jal func_00132280
    addiu a0,zero,1
    bnez v0,L172c98
    addiu v0,zero,1
    b L1730e8
    .word 0x70001628
    addiu v0,zero,1
L172c98:
    jal func_00132b20
    .word 0xae020018
L172ca0:
    .word 0x3c017000
L172ca4:
    .word 0x8c343fd4
    beqz s4,L172ce8
    addiu v0,zero,1
    .word 0x8e820000
    addiu a1,zero,-1
    .word 0x8c420008
    jalr ra,v0
    .word 0x72802628
    .word 0x8e820000
    addiu a2,sp,108
    addiu a1,zero,3
    .word 0x8c420010
    jalr ra,v0
    .word 0x72802628
    b L172cf0
    .word 0x8e22033c
    addiu v0,zero,1
L172ce8:
    .word 0xafa2006c
    .word 0x8e22033c
L172cf0:
    beqz v0,L172e20
    addiu v0,zero,1
    .word 0x8e020004
    andi v0,v0,0x1
    bnez v0,L172e1c
    nop
    .word 0x3c017000
    .word 0xc4213fa8
    .word 0xc7808420
    c.le.s $f0,$f1
    nop
    bc1t L172d34
    addiu a0,zero,1
    sub.s $f0,$f0,$f1
    b L172e24
    .word 0xe7808420
    addiu a0,zero,1
L172d34:
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0xaf848058
    jal func_001321a0
    .word 0xaf828420
    .word 0x8e22033c
    .word 0x44801000
    nop
    c.lt.s $f0,$f2
    nop
    bc1t L172e24
    .word 0xc4430014
    .word 0xc601001c
    c.le.s $f0,$f1
    nop
    bc1t L172e24
    nop
    .word 0xe600001c
    .word 0xc7818414
    c.lt.s $f1,$f2
    nop
    bc1f L172dd8
    .word 0x3c023e4c
    .word 0xc7818418
    c.le.s $f1,$f3
    nop
    bc1f L172dd4
    nop
    .word 0xc781841c
    c.le.s $f1,$f0
    nop
    bc1f L172dd4
    nop
    sub.s $f1,$f0,$f3
    .word 0x3c017000
    .word 0xc4203fa8
    add.s $f0,$f1,$f0
    .word 0xaf808058
    b L172e24
    .word 0xe7808414
L172dd4:
    .word 0x3c023e4c
L172dd8:
    ori v0,v0,0xcccd
    .word 0x44820800
    nop
    add.s $f1,$f1,$f0
    c.lt.s $f1,$f3
    nop
    bc1f L172e24
    nop
    .word 0x3c017000
    .word 0xc4213fa8
    sub.s $f2,$f0,$f3
    add.s $f1,$f2,$f1
    .word 0xe7838418
    .word 0xe780841c
    .word 0xaf808058
    b L172e24
    .word 0xe7818414
L172e1c:
    addiu v0,zero,1
L172e20:
    .word 0xaf828058
L172e24:
    .word 0x8f828058
    beqz v0,L172f18
    nop
    .word 0x3c027000
    ori v0,v0,0x3fb0
    .word 0xc4400000
    .word 0x3c034040
    .word 0x3c010031
    .word 0x44831000
    .word 0x3c023f99
    ori v0,v0,0x999a
    .word 0x44820800
    nop
    mul.s $f4,$f1,$f0
    .word 0x3c023c23
    ori a0,v0,0xd70a
    .word 0x3c024080
    .word 0x46002024
    .word 0xe4248210
    .word 0x3c010031
    cvt.s.w $f0,$f0
    sub.s $f0,$f4,$f0
    .word 0xe4208210
    .word 0x3c017000
    .word 0xc4203fb0
    .word 0x44841800
    .word 0x44820800
    nop
    mul.s $f3,$f3,$f0
    .word 0x3c010031
    .word 0x46001824
    .word 0xe4238214
    .word 0x3c010031
    cvt.s.w $f0,$f0
    sub.s $f0,$f3,$f0
    .word 0xe4208214
    .word 0x3c017000
    .word 0xc4203fb0
    mul.s $f2,$f2,$f0
    .word 0x3c010031
    .word 0x46001024
    .word 0xe42281f0
    .word 0x3c010031
    cvt.s.w $f0,$f0
    sub.s $f0,$f2,$f0
    .word 0xe42081f0
    .word 0x3c017000
    .word 0xc4203fb0
    mul.s $f1,$f1,$f0
    .word 0x3c010031
    .word 0x46000824
    .word 0xe42181f4
    .word 0x3c010031
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    jal func_00170a90
    .word 0xe42081f4
    bnez v0,L172f18
    nop
    addiu s2,zero,1
    .word 0x70009e28
L172f18:
    .word 0x8e020004
    andi v0,v0,0x2
    bnez v0,L173010
    nop
    .word 0x8fa2006c
    beqz v0,L173010
    nop
    .word 0x8f828428
    beqz v0,L172f70
    nop
    .word 0xc7818424
    .word 0x3c024000
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L172f70
    nop
    addiu a0,zero,8
    jal func_0025f720
    .word 0x70002e28
    .word 0xaf808428
L172f70:
    .word 0x3c010030
    .word 0xc420a870
    .word 0x44800800
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L172fa8
    nop
    .word 0x3c010030
    .word 0xc420a868
    c.eq.s $f0,$f1
    nop
    bc1t L172fd4
    nop
L172fa8:
    .word 0xc7818424
    .word 0x3c024000
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L173010
    nop
    addiu v0,zero,1
    b L173010
    .word 0xaf82842c
L172fd4:
    .word 0x8f82842c
    addiu v1,zero,1
    bne v0,v1,L173010
    nop
    .word 0xc7818424
    .word 0x3c024000
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L173010
    nop
    .word 0xaf80842c
    .word 0x70609628
    .word 0x70609e28
L173010:
    beqz s2,L1730e8
    addiu v0,zero,1
    .word 0x8fa2006c
    beqz v0,L1730e4
    nop
    .word 0x3c017000
    .word 0x8c313fe0
    addiu a1,zero,16
    .word 0x8e22003c
    beq v0,a1,L17307c
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L17307c
    nop
    .word 0x8e22000c
    .word 0x8c420010
    jalr ra,v0
    .word 0x72202628
    beqz v0,L17307c
    nop
    .word 0x8e22000c
    addiu a1,zero,16
    .word 0x72202628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L17307c:
    beqz s3,L173094
    nop
    jal func_00133120
    .word 0x8e040010
    b L1730e4
    nop
L173094:
    .word 0x8e040014
    addiu v0,zero,-1
    beq a0,v0,L1730b8
    .word 0x3c017000
    jal func_00133120
    nop
    b L1730e4
    nop
    .word 0x3c017000
L1730b8:
    jal func_0016dd60
    .word 0x8c243fdc
    .word 0x8e020004
    andi v0,v0,0x1
    bnez v0,L1730e4
    nop
    .word 0x3c010030
    .word 0x9024a61f
    .word 0x3c010030
    jal func_00132b30
    .word 0x8c25a620
L1730e4:
    addiu v0,zero,1
L1730e8:
    .word 0x7bbf0050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}


