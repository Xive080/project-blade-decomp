extern void func_0018a380(void);
extern void func_0018a150(void);
extern void func_00187d30(void);
extern void func_0018b8e0(void);
extern void func_0018b9a0(void);
extern void func_0018b710(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x3c020031
    paddub s4,a0,zero
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    addiu s1,s4,56
    .word 0x46006506
    addiu v0,v0,-24960
    ori v1,zero,0x883c
    addu v0,v0,v1
    .word 0xaf9484a4
    addiu a1,s4,16
    addiu t1,s4,12
    addiu a3,zero,40
    .word 0xac400000
    paddub a2,s1,zero
    jal func_0018a380
    paddub t0,s4,zero
    .word 0x8e900064
    beqz s0,L187a38
    nop
    addiu a0,s0,8
L187a1c:
    .word 0x8e86000c
    .word 0x8e100004
    paddub a1,s1,zero
    jal func_0018a150
    .word 0x4600a306
    bnez s0,L187a1c
    addiu a0,s0,8
L187a38:
    jal func_00187d30
    nop
    .word 0x8e84000c
    addiu v1,zero,-12
    .word 0x3c010031
    .word 0x70008e28
    .word 0x70009e28
    and v1,a0,v1
    .word 0xae83000c
    b L187c90
    .word 0xac2026bc
L187a64:
    .word 0x8e830084
    addu v1,v1,s3
    .word 0x8c700010
    beqz s0,L187bf8
    nop
    addiu s2,s0,8
L187a7c:
    .word 0x4600a306
    .word 0x8e100004
    addiu a1,s2,12
    addiu a2,s2,60
    addiu a3,zero,48
    paddub a0,s2,zero
    .word 0x72404628
    jal func_0018a380
    .word 0x70004e28
    beqz v0,L187bb4
    paddub a0,s2,zero
    .word 0x8e43006c
    beqz v1,L187bf0
    nop
    .word 0xc647003c
    .word 0xc4600040
    .word 0xc4610044
    .word 0xc4640038
    .word 0xc6460040
    .word 0xc4630048
    .word 0xc462003c
    mul.s $f5,$f7,$f0
    .word 0xc460004c
    mul.s $f1,$f7,$f1
    adda.s $f4,$f5
    madd.s $f3,$f6,$f3
    adda.s $f2,$f1
    madd.s $f0,$f6,$f0
    .word 0xe6400040
    .word 0xe643003c
    .word 0x8e43006c
    .word 0xc6450044
    .word 0xc6440048
    .word 0xc4630040
    .word 0xc4620048
    .word 0xc4610044
    .word 0xc460004c
    mula.s $f5,$f3
    madd.s $f2,$f4,$f2
    mula.s $f5,$f1
    madd.s $f0,$f4,$f0
    .word 0xe6400048
    .word 0xe6420044
    .word 0x8e43006c
    .word 0xc645004c
    .word 0xc6440050
    .word 0xc4630040
    .word 0xc4620048
    .word 0xc4610044
    .word 0xc460004c
    mula.s $f5,$f3
    madd.s $f2,$f4,$f2
    mula.s $f5,$f1
    madd.s $f0,$f4,$f0
    .word 0xe6400050
    .word 0xe642004c
    .word 0x8e43006c
    .word 0xc6410054
    .word 0xc4600050
    mul.s $f0,$f1,$f0
    .word 0xe6400054
    .word 0x8e43006c
    .word 0xc6410058
    .word 0xc4600054
    mul.s $f0,$f1,$f0
    .word 0xe6400058
    .word 0x8e43006c
    .word 0xc641005c
    .word 0xc4600058
    mul.s $f0,$f1,$f0
    .word 0xe640005c
    .word 0x8e43006c
    .word 0xc6410060
    .word 0xc460005c
    mul.s $f0,$f1,$f0
    b L187bf0
    .word 0xe6400060
    paddub a0,s2,zero
L187bb4:
    jal func_0018b8e0
    nop
    .word 0x8e420008
    addiu a1,s2,-8
    addiu v0,v0,1
    .word 0xae420008
    .word 0x8e420070
    .word 0x8e440074
    .word 0x8c420084
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v0,v0,v1
    jal func_0018b9a0
    addiu a0,v0,12
L187bf0:
    bnez s0,L187a7c
    addiu s2,s0,8
L187bf8:
    .word 0x8e830084
    addu v1,v1,s3
    .word 0x8c720008
    beqzl s2,L187c8c
    addiu s3,s3,20
    nop
    addiu s0,s2,8
L187c14:
    .word 0x4600a306
    .word 0x8e520004
    addiu a1,s0,24
    addiu a2,s0,84
    addiu a3,zero,60
    paddub a0,s0,zero
    .word 0x72004628
    jal func_0018a380
    .word 0x70004e28
    bnez v0,L187c80
    nop
    jal func_0018b8e0
    paddub a0,s0,zero
    .word 0x8e020008
    addiu a1,s0,-8
    addiu v0,v0,1
    .word 0xae020008
    .word 0x8e02000c
    .word 0x8e040010
    .word 0x8c420084
    sll v1,a0,0x2
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v0,v0,v1
    jal func_0018b9a0
    addiu a0,v0,4
    nop
L187c80:
    bnez s2,L187c14
    addiu s0,s2,8
    addiu s3,s3,20
L187c8c:
    addiu s1,s1,1
L187c90:
    .word 0x8e830080
    sltu v1,s1,v1
    bnez v1,L187a64
    nop
    .word 0x3c030031
    b L187cf0
    addiu s0,v1,9436
L187cac:
    .word 0x8e040000
    .word 0x8c830008
    bnez v1,L187cd8
    nop
    .word 0x8e050004
    .word 0x8ca30048
    bnez v1,L187cd8
    nop
    jal func_0018b710
    addiu a2,zero,1
    nop
L187cd8:
    .word 0x3c010031
    .word 0x8c2326bc
    addiu s0,s0,8
    addiu v1,v1,-1
    .word 0x3c010031
    .word 0xac2326bc
L187cf0:
    .word 0x3c010031
    .word 0x8c2326bc
    bnez v1,L187cac
    nop
    .word 0xaf8084a4
    .word 0x7bbf0060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    addiu sp,sp,112
}


