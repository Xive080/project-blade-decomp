extern void func_001c9840(void);
extern void func_001c9990(void);
extern void func_0020dfa0(void);
extern void func_0020e190(void);
extern void func_0020e460(void);
extern void func_001c9c70(void);
extern void func_001d7fa0(void);
extern void func_001d8240(void);
extern void func_001d8120(void);
extern void func_001d7fe0(void);
extern void func_002042e0(void);
extern void func_00204350(void);
extern void func_002042d0(void);
extern void func_001d5d50(void);
extern void func_001d5ee0(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-288
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
    .word 0x3c020033
    .word 0xafa5011c
    addiu s8,v0,-23008
    .word 0x8cb10000
    .word 0x8fc20004
    .word 0xafa200b0
    .word 0x9636005e
    bnez s6,L20e898
    paddub s0,a0,zero
    b L20ede4
    addiu v0,zero,1
L20e898:
    .word 0x8e330054
    .word 0x96770004
    bnez s7,L20e8b0
    addiu v0,zero,1
    b L20ede8
    .word 0x7bbf0090
L20e8b0:
    .word 0x8fa200b0
    .word 0x90420002
    .word 0xafa200d0
    .word 0x8fa200d0
    .word 0x8e24001c
    andi v0,v0,0x10
    beqz v0,L20e8d4
    addiu s4,zero,16
    addiu s4,zero,28
L20e8d4:
    .word 0x8fa200d0
    andi v0,v0,0x4
    .word 0xafa20100
    .word 0x8fa20100
    beqz v0,L20e8f0
    nop
    addiu s4,zero,36
L20e8f0:
    .word 0x8e620000
    andi v0,v0,0x1
    beqz v0,L20e910
    nop
    .word 0x8e630008
    sll v0,s7,0x1
    b L20e930
    subu s5,v1,v0
L20e910:
    .word 0x8e630008
    .word 0x3c02aaaa
    ori v0,v0,0xaaab
    multu v0,v1
    nop
    nop
    mfhi v0
    srl s5,v0,0x1
L20e930:
    beqz a0,L20e954
    nop
    .word 0x8c830018
    .word 0x96620006
    beq v1,v0,L20e954
    addiu s2,a0,24
    jal func_001c9840
    nop
    .word 0x70002628
L20e954:
    bnez a0,L20ea2c
    mult v0,s6,s4
    paddub a0,s1,zero
    addiu a1,s1,28
    addiu a3,zero,1
    .word 0xafa200f0
    addiu v0,s7,-1
    sll v0,v0,0x5
    addiu v1,v0,36
    sll v0,s5,0x1
    addu v0,v0,s5
    sll v0,v0,0x1
    addu v0,v1,v0
    sll s6,s5,0x3
    addu v1,s6,v0
    .word 0x8fa200f0
    .word 0x70004628
    jal func_001c9990
    addu a2,v1,v0
    addiu s2,v0,24
    sll v1,s7,0x5
    addu v1,s2,v1
    addiu t7,v1,4
    .word 0x8fa300f0
    .word 0x8fa500b0
    .word 0x96640006
    paddub a2,s1,zero
    paddub a3,s4,zero
    addu s5,t7,v1
    addu s6,s5,s6
    .word 0xac440018
    jal func_0020dfa0
    paddub a0,t7,zero
    paddub a1,s3,zero
    paddub t0,t7,zero
    paddub t1,s4,zero
    addiu a0,s2,4
    paddub a2,s6,zero
    jal func_0020e190
    paddub a3,s5,zero
    .word 0x8e43000c
    .word 0x3c02aaaa
    ori v0,v0,0xaaab
    .word 0x8e270008
    paddub a1,s6,zero
    paddub a2,s5,zero
    multu v0,v1
    nop
    nop
    mfhi v0
    jal func_0020e460
    srl a0,v0,0x1
    b L20ea38
    paddub v0,s7,zero
L20ea2c:
    jal func_001c9c70
    nop
    paddub v0,s7,zero
L20ea38:
    addiu s1,s2,4
    beqz v0,L20ede0
    addiu s7,s7,-1
    addiu v0,gp,-31208
    .word 0xafa200e0
    .word 0x3c020033
    addiu s4,v0,-6624
L20ea54:
    .word 0x8e220010
    beqz v0,L20edd4
    paddub v0,s7,zero
    .word 0x8e220008
    beqz v0,L20edd0
    paddub a0,s0,zero
    jal func_001d7fa0
    nop
    paddub s3,v0,zero
    paddub a0,s3,zero
    .word 0x70002e28
    jal func_001d8240
    paddub a2,s0,zero
    .word 0xafa200cc
    paddub a0,s3,zero
    addiu a1,zero,1
    jal func_001d8240
    paddub a2,s0,zero
    .word 0xafa200ac
    paddub a0,s3,zero
    addiu a1,zero,2
    jal func_001d8240
    paddub a2,s0,zero
    paddub s2,v0,zero
    paddub a0,s3,zero
    addiu a1,zero,3
    jal func_001d8240
    paddub a2,s0,zero
    paddub a0,s3,zero
    paddub s3,v0,zero
    addiu a1,zero,4
    jal func_001d8240
    paddub a2,s0,zero
    paddub a0,s2,zero
    paddub s2,v0,zero
    addiu a1,zero,1
    jal func_001d8120
    addiu a2,zero,208
    paddub a0,s3,zero
    paddub s5,v0,zero
    addiu a1,zero,1
    jal func_001d8120
    addiu a2,zero,48
    .word 0x8fa400cc
    .word 0x8e25000c
    .word 0x8e260014
    .word 0x8e270010
    jal func_001d7fe0
    paddub s6,v0,zero
    .word 0x8fa400ac
    .word 0x8e250000
    .word 0x8e270008
    jal func_001d7fe0
    addiu a2,zero,2
    .word 0x8e230008
    .word 0x3c02aaaa
    ori v0,v0,0xaaab
    .word 0x8e250004
    paddub a0,s2,zero
    addiu a2,zero,8
    multu v0,v1
    nop
    nop
    mfhi v0
    jal func_001d7fe0
    srl a3,v0,0x1
    .word 0x8eb20008
    .word 0x8e330018
    .word 0x3c02aaaa
    ori v1,v0,0xaaab
    addiu a2,zero,3
    addiu a0,zero,8
    addiu a1,s2,80
    .word 0xae530004
    .word 0x8fa2011c
    .word 0x8c420000
    .word 0xae4200c0
    .word 0xae4600a8
    .word 0x8e220010
    .word 0xae4200b0
    .word 0x8e220008
    multu v1,v0
    nop
    nop
    mfhi v0
    srl v0,v0,0x1
    .word 0xae4200ac
    .word 0x8fc20000
    addiu a2,v0,32
L20ebb8:
    .word 0x8cc30000
    .word 0x8cc20004
    addiu a0,a0,-1
    .word 0xaca30000
    .word 0xaca20004
    addiu a2,a2,8
    bgtz a0,L20ebb8
    addiu a1,a1,8
    .word 0x3c023f80
    .word 0xae420038
    .word 0xae420024
    .word 0xae420010
    .word 0xae400020
    .word 0xae400018
    .word 0xae400014
    .word 0xae400034
    .word 0xae400030
    .word 0xae400028
    .word 0xae400048
    .word 0xae400044
    .word 0xae400040
    .word 0x8e43001c
    .word 0x3c020002
    ori v0,v0,0x3
    paddub a0,s3,zero
    or v0,v1,v0
    jal func_002042e0
    .word 0xae42001c
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    paddub a0,s3,zero
    .word 0xe6420090
    .word 0xe6410094
    .word 0xe6400098
    .word 0x8fa200d0
    jal func_00204350
    .word 0xae420000
    .word 0xae42009c
    jal func_002042d0
    paddub a0,s3,zero
    .word 0x90450000
    .word 0x90440001
    .word 0x90430002
    .word 0x90420003
    .word 0xa24500a0
    .word 0xa24400a1
    .word 0xa24300a2
    .word 0xa24200a3
    .word 0x8e620008
    .word 0xae4200a4
    .word 0xae4000b8
    .word 0xae4000b4
    .word 0x8e22001c
    .word 0xae4200bc
    .word 0x8ea20010
    addiu v0,v0,1
    .word 0xaea20010
    .word 0x8fa200e0
    .word 0x8ec40008
    .word 0x8c420000
    addu v0,s8,v0
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    .word 0xe4830000
    .word 0xe4820004
    .word 0xe4810008
    .word 0xe480000c
    .word 0xc4430010
    .word 0xc4420014
    .word 0xc4410018
    .word 0xc440001c
    .word 0xe4830010
    .word 0xe4820014
    .word 0xe4810018
    .word 0xe480001c
    .word 0xc4430020
    .word 0xc4420024
    .word 0xc4410028
    .word 0xc440002c
    .word 0xe4830020
    .word 0xe4820024
    .word 0xe4810028
    .word 0xe480002c
    .word 0x8fa20100
    beqz v0,L20ed48
    nop
    .word 0x8e43009c
    beqz v1,L20ed48
    nop
    .word 0x8c620000
    .word 0xac820010
    .word 0x8c620058
    .word 0xac820014
    .word 0x8c62005c
    .word 0xac820018
    .word 0x8c620054
    .word 0xac82001c
L20ed48:
    .word 0x8ec30010
    addiu v0,zero,255
    addiu v1,v1,1
    .word 0xaec30010
    .word 0x924300a3
    beq v1,v0,L20ed70
    nop
    .word 0x8c820000
    ori v0,v0,0x8
    .word 0xac820000
L20ed70:
    .word 0x8e820008
    beqz v0,L20edb0
    .word 0x8e920000
    paddub a0,s2,zero
    paddub a1,s0,zero
    jal func_001d5d50
    .word 0x70003628
    beqz v0,L20edb0
    paddub a0,v0,zero
    .word 0x8c420000
    .word 0x8c420004
    jalr ra,v0
    addiu a1,s4,16
    bnez v0,L20edb0
    nop
    .word 0xae820008
L20edb0:
    .word 0x8e420014
    slti at,v0,2
    bnez at,L20edd0
    addiu v0,zero,2
    .word 0xae420014
    jal func_001d5ee0
    .word 0x8e440018
    nop
L20edd0:
    paddub v0,s7,zero
L20edd4:
    addiu s1,s1,32
    bnez v0,L20ea54
    addiu s7,s7,-1
L20ede0:
    addiu v0,zero,1
L20ede4:
    .word 0x7bbf0090
L20ede8:
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
    addiu sp,sp,288
}


