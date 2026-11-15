extern void func_001eb220(void);
extern void func_001ea840(void);
extern void func_001f41b0(void);
extern void func_001c86c0(void);
extern void func_001eb5d0(void);
extern void func_001f3d10(void);
extern void func_001eac60(void);
extern void func_001eae20(void);
extern void func_00111a70(void);
extern void func_00111ab8(void);
extern void func_001df850(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-224
    .word 0x7fbf00a0
    .word 0x7fbe0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0x8f82877c
    .word 0xafa000d0
    addiu s7,sp,220
    addiu t4,gp,-30776
    addiu t5,sp,196
    addiu s1,sp,200
    addu v0,a0,v0
    .word 0xafa200b0
    addiu v0,sp,212
    .word 0xac400000
    .word 0x8c83000c
    addiu v0,sp,216
    paddub s2,a0,zero
    addiu t3,sp,204
    .word 0xac430000
    .word 0x8c820010
    .word 0xaee20000
    .word 0x8d860000
    .word 0x8ca20000
    .word 0x84c3001c
    addu v0,v0,v1
    .word 0xafa200c0
    .word 0x8ca20004
    .word 0x84c3001e
    addiu a1,sp,192
    addu v0,v0,v1
    .word 0xada20000
    .word 0x8c82000c
    .word 0xae220000
    .word 0x8c820010
    .word 0xad620000
    jal func_001eb220
    addiu a0,sp,208
    bnez v0,L1ebae0
    addiu v0,zero,1
    b L1ebf74
    .word 0x7bbf00a0
L1ebae0:
    .word 0x92420020
    addiu v1,zero,1
    beql v0,v1,L1ebb00
    .word 0x70001628
    addiu a1,zero,2
    bne v0,a1,L1ebb08
    nop
    .word 0x70001628
L1ebb00:
    b L1ebf70
    nop
L1ebb08:
    .word 0x8d820000
    .word 0x90440020
    beql a0,v1,L1ebf64
    .word 0x70001628
    addiu v1,zero,4
    beq a0,v1,L1ebca4
    nop
    beqz a0,L1ebca4
    nop
    beq a0,a1,L1ebb3c
    addiu v0,sp,212
    b L1ebf60
    nop
L1ebb3c:
    .word 0x8c500000
    .word 0x8db30000
    .word 0x8ee20000
    jal func_001ea840
    addu s8,s0,v0
    addiu s5,gp,-30784
    b L1ebc38
    addiu s6,gp,-30792
L1ebb5c:
    bnez at,L1ebb68
    paddub s4,v1,zero
    addiu s4,zero,64
L1ebb68:
    addiu v0,sp,212
    .word 0xac500000
    sltiu at,v1,65
    bnez at,L1ebb80
    .word 0xaef40000
    addiu s4,s4,-1
L1ebb80:
    .word 0x8ec20000
    sll v0,v0,0x2
    addu v0,s5,v0
    jal func_001f41b0
    .word 0x8c440000
    .word 0x8ec20000
    paddub a1,s2,zero
    sll v0,v0,0x2
    addu v0,s5,v0
    .word 0x8c440000
    jal func_001c86c0
    addiu a2,sp,208
    .word 0x8ec20000
    sll v0,v0,0x2
    addu v0,s5,v0
    jal func_001eb5d0
    .word 0x8c440000
    .word 0x8ec20000
    sll v0,v0,0x2
    addu v0,s5,v0
    .word 0x8c440000
    jal func_001f3d10
    .word 0x70002e28
    .word 0x8fa400c0
    addiu v0,zero,1
    addiu t0,zero,8
    addu a3,s3,s4
    paddub a1,s3,zero
    paddub t1,t0,zero
    .word 0xffa20000
    addiu v0,sp,216
    .word 0x8c430000
    .word 0x8e260000
    .word 0x8ee20000
    sll v1,v1,0x4
    addu a2,a0,a2
    addiu t2,v1,-8
    sll v0,v0,0x4
    jal func_001eac60
    addiu t3,v0,-8
    .word 0x8ec20000
    addu s0,s0,s4
    addu s3,s3,s4
    xori v0,v0,0x1
    .word 0xaec20000
    nop
L1ebc38:
    subu v1,s8,s0
    bnez v1,L1ebb5c
    sltiu at,v1,65
    jal func_001eae20
    nop
    jal func_00111a70
    nop
    .word 0x8fa200b0
    .word 0x8c420000
    addiu v1,v0,1
    .word 0x8fa200b0
    jal func_00111ab8
    .word 0xac430000
    .word 0x8fa200b0
    addiu v1,zero,1
    .word 0x8c420004
    addiu a0,v0,1
    .word 0x8fa200b0
    .word 0xac440004
    .word 0x8fa200b0
    .word 0x8c420004
    bne v0,v1,L1ebf70
    addiu v0,zero,1
    jal func_001df850
    .word 0x8fa400b0
    b L1ebf6c
    nop
L1ebca4:
    .word 0x8c430004
    beqz v1,L1ebcbc
    addiu a3,v0,4
    .word 0x8e430004
    bnez v1,L1ebcc4
    nop
L1ebcbc:
    b L1ebf70
    .word 0x70001628
L1ebcc4:
    .word 0x8c460014
    .word 0x8e440014
    .word 0x8445001c
    .word 0x8fa300c0
    addiu a2,a2,7
    addiu a0,a0,7
    sra a0,a0,0x3
    subu v1,v1,a1
    .word 0xafa300c0
    sra a1,a2,0x3
    .word 0x8446001e
    .word 0x8da30000
    subu v1,v1,a2
    .word 0xada30000
    .word 0x8e4a0018
    bnez a0,L1ebd0c
    .word 0x0144001b
    .word 0x000001cd
L1ebd0c:
    .word 0x8c460018
    .word 0x8e2c0000
    mflo v0
    .word 0x00c5001b
    bnez a1,L1ebd28
    subu v0,v0,t4
    .word 0x000001cd
L1ebd28:
    mflo t1
    sll v1,a1,0x2
    addu t0,v1,a1
    subu v1,t1,t4
    sll t0,t0,0x1
    addu t1,a0,t0
    addiu t0,zero,22
    beq t1,t0,L1ebeb8
    addiu t0,zero,44
    beq t1,t0,L1ebd5c
    nop
    b L1ebf58
    .word 0x70001628
L1ebd5c:
    .word 0x8dae0000
    sll t1,v1,0x2
    sll t0,v0,0x2
    .word 0x8fa200d0
    .word 0x8ced0000
    mult v1,a2,t6
    .word 0x8fa600c0
    addiu a3,sp,212
    .word 0x8cec0000
    addu t5,t5,v1
    mult1 a1,a1,a2
    addu a1,t5,a1
    .word 0x014c1818
    .word 0x8e470004
    .word 0x00821018
    addu v1,a3,v1
    b L1ebea0
    addu v1,v1,v0
L1ebda4:
    .word 0x8e220000
    paddub a0,v0,zero
    beqz a0,L1ebe98
    addiu v0,v0,-1
    nop
L1ebdb8:
    .word 0x8c640000
    .word 0x3c06ff00
    .word 0x3c017f00
    ori at,at,0x1
    and a2,a0,a2
    sltu at,a2,at
    bnez at,L1ebde4
    srl t2,a2,0x18
    b L1ebe80
    .word 0xaca40000
    srl t2,a2,0x18
L1ebde4:
    .word 0x3c0e00ff
    and t4,a0,t6
    srl t4,t4,0x10
    .word 0x8ca60000
    mult t5,t4,t2
    addiu a3,zero,128
    subu a3,a3,t2
    and t4,a2,t6
    srl t4,t4,0x10
    mult1 t4,t4,a3
    addu t4,t5,t4
    andi t4,t4,0x7f80
    sll s0,t4,0x9
    .word 0x3c0cff00
    and t4,a2,t4
    srl t4,t4,0x18
    mult t4,a3
    andi t4,a0,0xff00
    srl t6,t4,0x8
    maddu t7,t2,t2
    andi t4,a0,0xff
    andi a0,a2,0xff00
    srl t5,a0,0x8
    andi a0,a2,0xff
    andi a2,t7,0x7f80
    mult t6,t2
    sll a2,a2,0x11
    addu t6,a2,s0
    maddu a2,t5,a3
    mult t4,t2
    andi a2,a2,0x7f80
    sll a2,a2,0x1
    addu a2,a2,t6
    maddu a0,a0,a3
    andi a0,a0,0x7f80
    srl a0,a0,0x7
    addu a0,a0,a2
    .word 0xaca40000
    nop
L1ebe80:
    paddub a0,v0,zero
    addiu a1,a1,4
    addiu v1,v1,4
    bnez a0,L1ebdb8
    addiu v0,v0,-1
    nop
L1ebe98:
    addu v1,v1,t0
    addu a1,a1,t1
L1ebea0:
    .word 0x8d640000
    addiu v0,a0,-1
    bnez a0,L1ebda4
    .word 0xad620000
    b L1ebf6c
    nop
L1ebeb8:
    .word 0x8cec0000
    .word 0x8da90000
    sll v0,v0,0x1
    sll v1,v1,0x1
    addiu a3,sp,212
    mult t5,a2,t1
    .word 0x8ce80000
    .word 0x8fa600d0
    .word 0x8fa900c0
    addu t4,t4,t5
    .word 0x01484018
    .word 0x8e470004
    mult1 a1,a1,t1
    addu t1,t4,a1
    .word 0x00862018
    addu a1,a3,t0
    b L1ebf40
    addu a2,a1,a0
L1ebf00:
    .word 0x8e270000
    paddub a0,a3,zero
    beqz a0,L1ebf38
    addiu a3,a3,-1
L1ebf10:
    .word 0x94c50000
    andi a0,a1,0x8000
    beqz a0,L1ebf28
    paddub a0,a3,zero
    .word 0xa5250000
    nop
L1ebf28:
    addiu t1,t1,2
    addiu a2,a2,2
    bnez a0,L1ebf10
    addiu a3,a3,-1
L1ebf38:
    addu a2,a2,v0
    addu t1,t1,v1
L1ebf40:
    .word 0x8d650000
    addiu a0,a1,-1
    bnez a1,L1ebf00
    .word 0xad640000
    b L1ebf6c
    nop
L1ebf58:
    b L1ebf70
    nop
L1ebf60:
    .word 0x70001628
L1ebf64:
    b L1ebf70
    nop
L1ebf6c:
    addiu v0,zero,1
L1ebf70:
    .word 0x7bbf00a0
L1ebf74:
    .word 0x7bbe0090
    .word 0x7bb70080
    .word 0x7bb60070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    jr ra
    addiu sp,sp,224
}


