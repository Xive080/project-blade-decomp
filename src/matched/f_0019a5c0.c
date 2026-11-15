extern void func_0013b550(void);
extern void func_00195a30(void);
extern void func_0024b540(void);
extern void func_001a3fe0(void);
extern void func_00132a00(void);
extern void func_001b5b40(void);
extern void func_001aa020(void);
extern void func_001b5c30(void);
extern void func_00132950(void);
extern void func_0024b4b0(void);
extern void func_001327d0(void);
extern void func_001a3ac0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-160
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,9
    paddub s1,a1,zero
    paddub s2,a0,zero
    beq s1,v0,L19aa28
    paddub s0,a2,zero
    addiu v0,zero,18
    beq s1,v0,L19a93c
    addiu v0,zero,11
    beq s1,v0,L19a7ac
    addiu v0,zero,10
    beq s1,v0,L19a744
    addiu v0,zero,3
    beq s1,v0,L19a6c4
    addiu v0,zero,2
    beq s1,v0,L19a6bc
    nop
    beqz s1,L19a628
    nop
    b L19aab4
    paddub a0,s2,zero
L19a628:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,245
    .word 0xae420008
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,246
    .word 0xae42000c
    .word 0x3c020031
    addiu v0,v0,23104
    .word 0xae420014
    addiu v0,zero,4
    .word 0xae420010
    .word 0x3c020031
    addiu a0,v0,23104
    .word 0xae400018
    addiu a1,zero,68
    addiu a2,zero,61
    jal func_00195a30
    .word 0xae400004
    .word 0x3c020031
    addiu a0,v0,23136
    addiu a1,zero,69
    jal func_00195a30
    addiu a2,zero,61
    .word 0x3c020031
    addiu a0,v0,23168
    addiu a1,zero,70
    jal func_00195a30
    addiu a2,zero,61
    .word 0x3c020031
    addiu a0,v0,23200
    addiu a1,zero,71
    jal func_00195a30
    addiu a2,zero,60
    b L19aab0
    nop
L19a6bc:
    b L19aab0
    .word 0xaf8084e8
L19a6c4:
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,269
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,265
    jal func_0013b550
    .word 0xa3a20070
    addiu a2,sp,112
    addiu a0,zero,7
    addiu a1,zero,1
    jal func_0024b540
    .word 0xafa20074
    .word 0x8f848328
    addiu a1,zero,249
    jal func_0013b550
    .word 0xaf80851c
    paddub a0,v0,zero
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    addiu a2,sp,128
    .word 0xafa20080
    addiu a0,zero,18
    .word 0x70002e28
    jal func_0024b540
    .word 0xafa00084
    jal func_00132a00
    nop
    .word 0x3c010031
    b L19aab0
    .word 0xac207410
L19a744:
    jal func_00132a00
    nop
    jal func_001b5b40
    nop
    jal func_001aa020
    paddub a0,v0,zero
    jal func_001b5b40
    nop
    .word 0x3c010030
    jal func_001b5c30
    .word 0xac22a6d0
    jal func_00132950
    .word 0x46000306
    addiu v0,zero,8
    .word 0x3c010030
    .word 0xac22a640
    .word 0x3c010030
    .word 0xac22a64c
    .word 0x3c010030
    .word 0xac20a658
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xac22a670
    .word 0x3c010030
    b L19aab0
    .word 0xac22a664
L19a7ac:
    .word 0x8f8284e8
    bnez v0,L19aab0
    .word 0x3c02002e
    addiu v0,v0,12240
    .word 0x78440000
    .word 0xdc430010
    addiu a1,sp,80
    .word 0xc4420018
    .word 0x7ca40000
    .word 0xfca30010
    jal func_00132a00
    .word 0xe4a20018
    .word 0x8e430018
    addiu s3,zero,3
    beql v1,s3,L19a814
    addiu s3,zero,4
    addiu v0,zero,2
    beq v1,v0,L19a818
    paddub a0,s3,zero
    addiu s3,zero,1
    beq v1,s3,L19a814
    nop
    beqz v1,L19a814
    .word 0x70009e28
    b L19a82c
    addiu a0,zero,8
L19a814:
    paddub a0,s3,zero
L19a818:
    jal func_001aa020
    nop
    .word 0x3c010030
    .word 0xac33a6d0
    addiu a0,zero,8
L19a82c:
    .word 0x3c010030
    .word 0xac24a640
    .word 0x8e430018
    addiu v0,zero,3
    bne v1,v0,L19a868
    .word 0x3c010030
    addiu v0,zero,96
    .word 0x3c010030
    .word 0xac22a64c
    .word 0x3c010030
    .word 0xac20a658
    addiu v0,zero,1
    .word 0x3c010031
    b L19a880
    .word 0xac227410
L19a868:
    .word 0xac24a64c
    .word 0x3c010031
    .word 0xac207410
    addiu v0,zero,2
    .word 0x3c010030
    .word 0xac22a658
L19a880:
    addiu v0,zero,7
    .word 0x3c010030
    .word 0xac22a640
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xac22a670
    .word 0x3c010030
    jal func_001b5c30
    .word 0xac22a664
    jal func_00132950
    .word 0x46000306
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,250
    .word 0xdf8584d8
    .word 0xafa20064
    addiu a2,sp,136
    addiu v1,zero,1
    .word 0xfcc50000
    addiu v0,sp,80
    .word 0xafa30088
    addiu a0,zero,10
    .word 0xafa2008c
    jal func_0024b540
    .word 0x70002e28
    .word 0x8f848328
    addiu a1,zero,251
    jal func_0013b550
    .word 0xaf80851c
    paddub a0,v0,zero
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    addiu a2,sp,144
    .word 0xafa20090
    addiu a0,zero,18
    .word 0x70002e28
    jal func_0024b540
    .word 0xafa00094
    .word 0x3c02c080
    addiu a0,zero,7
    addiu a1,zero,1
    jal func_0024b4b0
    .word 0xaf828518
    addiu v0,zero,1
    b L19aab0
    .word 0xaf8284e8
L19a93c:
    .word 0x8f8284e8
    beqz v0,L19aab0
    nop
    .word 0xc7818518
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L19aab0
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,269
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,265
    jal func_0013b550
    .word 0xa3a20078
    addiu a2,sp,120
    addiu a0,zero,7
    addiu a1,zero,1
    jal func_0024b540
    .word 0xafa2007c
    addiu a0,zero,10
    jal func_0024b4b0
    .word 0x70002e28
    .word 0x8f848328
    addiu a1,zero,249
    jal func_0013b550
    .word 0xaf80851c
    paddub a0,v0,zero
    .word 0x70002e28
    jal func_001a3fe0
    .word 0x70003628
    addiu a2,sp,152
    .word 0xafa20098
    addiu a0,zero,18
    .word 0x70002e28
    jal func_0024b540
    .word 0xafa0009c
    .word 0x3c010031
    .word 0x8c227410
    beqz v0,L19aa04
    .word 0x3c02bf80
    jal func_00132a00
    nop
    b L19aa20
    .word 0xaf8084e8
L19aa04:
    .word 0x44826000
    .word 0x44806800
    .word 0x3c023f00
    .word 0x44827000
    jal func_001327d0
    addiu a0,zero,1
    .word 0xaf8084e8
L19aa20:
    b L19aab0
    nop
L19aa28:
    jal func_00132a00
    nop
    .word 0x8e430018
    addiu s3,zero,3
    beql v1,s3,L19aa68
    addiu s3,zero,4
    addiu v0,zero,2
    beq v1,v0,L19aa6c
    paddub a0,s3,zero
    addiu s3,zero,1
    beq v1,s3,L19aa68
    nop
    beqz v1,L19aa68
    .word 0x70009e28
    b L19aa7c
    nop
L19aa68:
    paddub a0,s3,zero
L19aa6c:
    jal func_001aa020
    nop
    .word 0x3c010030
    .word 0xac33a6d0
L19aa7c:
    jal func_001b5c30
    nop
    jal func_00132950
    .word 0x46000306
    .word 0x8e430018
    addiu v0,zero,3
    bne v1,v0,L19aaac
    .word 0x3c010031
    addiu v0,zero,1
    .word 0x3c010031
    b L19aab0
    .word 0xac227410
L19aaac:
    .word 0xac207410
L19aab0:
    paddub a0,s2,zero
L19aab4:
    paddub a1,s1,zero
    jal func_001a3ac0
    paddub a2,s0,zero
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,160
}


