extern void func_00109d00(void);
extern void func_00109d20(void);
extern void func_0010cdc8(void);
extern void func_0011fe10(void);
extern void func_001217e0(void);
extern void func_00121a58(void);
extern void func_00121b70(void);
extern void func_00121f90(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-368
    .word 0x7fbf0060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    addiu s2,sp,112
    .word 0x70808628
    .word 0x70a0a628
    .word 0x70c09e28
    b L25e160
    .word 0x70008e28
    addu v0,s4,s1
L25e138:
    .word 0x80430000
    addiu v0,zero,47
    bne v1,v0,L25e154
    nop
    addiu v0,zero,92
    b L25e158
    .word 0xa2420000
L25e154:
    .word 0xa2430000
L25e158:
    addiu s2,s2,1
    addiu s1,s1,1
L25e160:
    jal func_00121b70
    .word 0x72802628
    sltu at,v0,s1
    beqz at,L25e138
    addu v0,s4,s1
    .word 0x83a30070
    addiu v0,zero,92
    bne v1,v0,L25e190
    nop
    addiu a0,sp,112
    jal func_00121a58
    addiu a1,sp,113
L25e190:
    .word 0x3c020033
    addiu a0,v0,20064
    .word 0x70008e28
    addiu v1,zero,-1
L25e1a0:
    .word 0x8c820000
    .word 0x8c420000
    beq v0,v1,L25e1c4
    addiu v0,zero,3
    addiu s1,s1,1
    slti v0,s1,3
    bnez v0,L25e1a0
    addiu a0,a0,1412
    addiu v0,zero,3
L25e1c4:
    bne s1,v0,L25e1e4
    dsll32 v1,s3,0x18
    .word 0x3c02002f
    jal func_0011fe10
    addiu a0,v0,5552
    b L25e300
    .word 0x70001628
    dsll32 v1,s3,0x18
L25e1e4:
    addiu v0,zero,-50
    dsra32 v1,v1,0x18
    and v0,v1,v0
    beqz v0,L25e200
    nop
    b L25e300
    .word 0x70001628
L25e200:
    .word 0x3c020033
    addiu a0,v0,13760
    addiu a1,sp,112
    jal func_00121f90
    addiu a2,zero,64
    jal func_00109d20
    .word 0x8f848a18
    .word 0x3c020033
    addiu a3,v0,13760
    .word 0x3c020033
    addiu t1,v0,13696
    .word 0x3c020033
    addiu a0,v0,13648
    addiu a1,zero,3
    addiu t0,zero,64
    addiu t2,zero,16
    .word 0x70003628
    .word 0x70005e28
    jal func_0010cdc8
    .word 0xffa00000
    jal func_00109d00
    .word 0x8f848a18
    .word 0x3c020033
    addiu a2,v0,13696
    .word 0x8cc70000
    bltz a3,L25e300
    .word 0x70001628
    addiu v0,zero,1412
    .word 0x02221818
    addiu a1,sp,112
    .word 0x3c020033
    addiu v0,v0,20064
    addu s3,v0,v1
    .word 0x8e720000
    addiu a0,s3,1064
    .word 0xae470000
    .word 0xae400004
    .word 0x8cc20004
    jal func_00121a58
    .word 0xae420008
    addiu a0,s3,1096
    jal func_00121a58
    addiu a1,sp,112
    addiu a1,s0,164
    addiu s0,s3,1352
    jal func_00121a58
    .word 0x72002628
    .word 0x3c02002f
    addiu a1,v0,5568
    jal func_001217e0
    .word 0x72002628
    .word 0x3c030033
    addiu v1,v1,13824
    sll a0,s1,0xb
    addu v1,v1,a0
    .word 0xae430010
    addiu v1,zero,2048
    .word 0xae43000c
    addiu v1,zero,1
    .word 0xae430014
    .word 0x72601628
    b L25e300
    .word 0xae400018
    .word 0x70001628
L25e300:
    .word 0x7bbf0060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    jr ra
    addiu sp,sp,368
}
