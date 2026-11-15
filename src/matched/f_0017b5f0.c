extern void func_00142aa0(void);
extern void func_00142ad0(void);
extern void func_0016bd40(void);
extern void func_001c3b70(void);
extern void func_001c3b80(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff50
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
    .word 0x8cc2000c
    .word 0x7080b628
    .word 0x70c0a628
    .word 0x70a0ae28
    .word 0x8c420018
    jalr ra,v0
    .word 0x72802628
    .word 0x8ea30018
    .word 0x7040f628
    addiu v0,zero,2
    .word 0xaec30004
    .word 0x8ea3001c
    .word 0xaec30008
    .word 0xaec00010
    .word 0xaec00014
    .word 0xaec00018
    .word 0x8ec30000
    beq v1,v0, L17b690
    nop
    addiu v0,zero,1
    beq v1,v0, L17b680
    .word 0x73c02628
    b L17b840
    .word 0x72c01628
    .word 0x73c02628
L17b680:
    jal func_001c3b80
    nop
    b L17b83c
    .word 0xaec20020
L17b690:
    .word 0x8ea20000
    .word 0xafa000a0
    .word 0x7000be28
    .word 0x70009628
    b L17b808
    .word 0xaec20038
L17b6a8:
    .word 0x8ea30004
    .word 0x8ec2001c
    .word 0x00771821
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    .word 0x00571021
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0x8ea3000c
    .word 0x8ec2002c
    .word 0x00771821
    .word 0xc4620000
    .word 0xc4610004
    .word 0xc4600008
    .word 0x00571021
    .word 0xe4420000
    .word 0xe4410004
    .word 0xe4400008
    .word 0x8ea30010
    .word 0x8ec20034
    .word 0x00721821
    .word 0x8c630000
    .word 0x00521021
    .word 0xac430000
    .word 0x8ec20030
    .word 0x00521021
    .word 0xac400000
    .word 0x8ea20008
    .word 0x00521021
    .word 0x8c500000
    jal func_0016bd40
    .word 0x73c02628
    bne s0,v0, L17b750
    nop
    jal func_001c3b70
    .word 0x73c02628
    .word 0x8ec30030
    .word 0x00721821
    b L17b7c8
    .word 0xac620000
L17b750:
    .word 0x8e840030
    beqz a0, L17b7c8
    nop
    jal func_00142ad0
    nop
    .word 0x70408e28
    beqz s1, L17b7c8
    nop
L17b770:
    .word 0x8ea20008
    .word 0x8e240004
    .word 0x02421021
    .word 0x8c500000
    jal func_0016bd40
    .word 0x26330004
    bne s0,v0, L17b7ac
    nop
    jal func_001c3b80
    .word 0x8e640000
    .word 0x8ec30030
    .word 0x70008e28
    .word 0x02431821
    b L17b7c0
    .word 0xac620000
L17b7ac:
    .word 0x8e840030
    jal func_00142aa0
    .word 0x72202e28
    .word 0x70408e28
    nop
L17b7c0:
    bnez s1, L17b770
    nop
L17b7c8:
    .word 0x8ec20030
    .word 0x00521021
    .word 0x8c420000
    bnez v0, L17b7f0
    nop
    jal func_001c3b70
    .word 0x73c02628
    .word 0x8ec30030
    .word 0x00721821
    .word 0xac620000
L17b7f0:
    .word 0x8fa200a0
    .word 0x26f7000c
    .word 0x26520004
    .word 0x24420001
    .word 0xafa200a0
    nop
L17b808:
    .word 0x8ec30038
    .word 0x8fa200a0
    .word 0x0043102a
    bnez v0, L17b6a8
    nop
    jal func_001c3b80
    .word 0x73c02628
    .word 0xc4420030
    .word 0xc4410034
    .word 0xc4400038
    .word 0xe6c20020
    .word 0xe6c10024
    .word 0xe6c00028
L17b83c:
    .word 0x72c01628
L17b840:
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
    .word 0x27bd00b0
}


