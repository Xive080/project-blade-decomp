extern void func_001f3c40(void);
extern void func_002018b0(void);
extern void func_00202b00(void);
extern void func_0020eef0(void);
extern void func_002107d0(void);
extern void func_00213ce0(void);
extern void func_00216770(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-752
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
    .word 0x8c900014
    .word 0x8ca20000
    paddub s5,a0,zero
    addiu a0,sp,192
    .word 0xafa200a0
    addiu v0,zero,1
    .word 0xafa200c0
    .word 0x8fa200a0
    paddub a1,s0,zero
    jal func_00216770
    .word 0xafa200c4
    paddub s1,v0,zero
    .word 0x8fa200a0
    addiu v0,v0,24
    .word 0xafa200b0
    .word 0x8fa200a0
    .word 0x8c560018
    .word 0x8ed70044
    jal func_00202b00
    paddub a0,s6,zero
    addiu v1,zero,1
    beq v0,v1,L20fcf4
    nop
    .word 0x8f838874
    .word 0x8fa200a0
    .word 0x96e50004
    jal func_0020eef0
    addu a0,v0,v1
    b L20fd0c
    .word 0x8c540000
L20fcf4:
    .word 0x8f828878
    .word 0x96e50004
    jal func_0020eef0
    addu a0,s6,v0
    .word 0x8c540000
    nop
L20fd0c:
    addiu s2,s7,16
    paddub s3,zero,zero
    b L20fed0
    addiu s8,gp,-30832
L20fd1c:
    .word 0xafb200e0
    addiu v1,s4,4
    addiu v0,sp,228
    .word 0xac430000
    .word 0xafb300e8
    .word 0x8e430008
    .word 0x8e020314
    bnez v0,L20fd60
    .word 0x8c630000
    beqz v1,L20fd60
    nop
    .word 0x8c640000
    .word 0x8fc20000
    beq a0,v0,L20fd60
    nop
    jal func_001f3c40
    nop
L20fd60:
    .word 0x8ec2004c
    andi v0,v0,0x1
    bnez v0,L20fe70
    addiu a2,s0,12
    paddub v0,zero,zero
    b L20fde0
    paddub v1,a2,zero
L20fd7c:
    .word 0x8c67005c
    .word 0x8ea50018
    .word 0x8ea4000c
    addiu v0,v0,1
    sll a3,a3,0x2
    addu a1,a1,a3
    .word 0x8ca70000
    sll a1,a3,0x3
    subu a1,a1,a3
    sll a1,a1,0x2
    addu a1,a1,sp
    addiu t0,a1,240
    sll a1,a3,0x2
    addu a0,a0,a1
    .word 0x8c840000
    .word 0xad040014
    .word 0x8c840004
    .word 0xad040018
    .word 0x8d040004
    .word 0xad040008
    .word 0xad000004
    .word 0xa5000000
    .word 0xac680088
    addiu v1,v1,4
    nop
L20fde0:
    .word 0x8cc40000
    sltu a0,v0,a0
    bnez a0,L20fd7c
    addiu a0,sp,192
    jal func_00213ce0
    addiu a1,sp,224
    paddub s1,v0,zero
    .word 0x8e020318
    beqz v0,L20fea0
    addiu v0,sp,228
    .word 0x8c440000
    .word 0x8e05000c
    addiu v1,sp,224
    paddub a3,zero,zero
    .word 0x8c840000
    addiu v0,sp,192
    sltu at,zero,a1
    .word 0xafa302b0
    .word 0xafa202b4
    beqz at,L20fe58
    addiu a0,a0,24
    addiu a2,sp,688
L20fe38:
    .word 0x8c830034
    addiu a3,a3,1
    sltu v0,a3,a1
    .word 0xacc30008
    addiu a0,a0,8
    bnez v0,L20fe38
    addiu a2,a2,4
    nop
L20fe58:
    .word 0x8e020318
    addiu a1,a1,2
    jalr ra,v0
    addiu a0,sp,688
    b L20fea0
    paddub s1,v0,zero
L20fe70:
    .word 0x8e020318
    beqz v0,L20fea0
    addiu v0,sp,224
    .word 0xafa202e8
    addiu v0,sp,192
    .word 0xafa202ec
    .word 0x8e020318
    addiu a0,sp,744
    jalr ra,v0
    addiu a1,zero,2
    paddub s1,v0,zero
    nop
L20fea0:
    beqzl s1,L20fec4
    addiu s2,s2,12
    addiu a0,sp,192
    addiu a1,sp,224
    jal func_002107d0
    addiu a2,s0,780
    paddub s1,v0,zero
    nop
    addiu s2,s2,12
L20fec4:
    addiu s4,s4,4
    addiu s3,s3,1
    nop
L20fed0:
    .word 0x96e20004
    sltu v0,s3,v0
    bnez v0,L20fd1c
    nop
    .word 0x8fa200b0
    .word 0x8c510000
    jal func_002018b0
    .word 0x8fa400a0
    .word 0xa620000c
    .word 0x8c440000
    addiu v1,zero,-2
    and v1,a0,v1
    .word 0xac430000
    .word 0x8e02031c
    beqz v0,L20ff18
    addiu a0,sp,192
    jalr ra,v0
    nop
L20ff18:
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
    addiu sp,sp,752
}
