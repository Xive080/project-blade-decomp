extern void func_00109d20(void);
extern void func_0011fe10(void);
extern void func_00111a70(void);
extern void func_00111ab8(void);
extern void func_00109d00(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s2,a0,zero
    .word 0x8c840040
    jal func_00109d20
    .word 0x70008e28
    .word 0x8e420044
    bnez v0,L1b3c78
    nop
    .word 0x3c02002f
    addiu a0,v0,336
    .word 0x3c02002f
    addiu a1,v0,360
    .word 0x3c02002f
    addiu a2,zero,255
    jal func_0011fe10
    addiu a3,v0,368
L1b3c70:
    b L1b3c70
    nop
L1b3c78:
    jal func_00111a70
    nop
    .word 0x3c021000
    ori v1,v0,0xf520
    .word 0x8c640000
    ori a1,v0,0xf590
    ori a2,v0,0xb400
    addiu v0,zero,5
    .word 0x3c011001
    .word 0x3c030001
    or v1,a0,v1
    .word 0xaca30000
    .word 0xacc20000
    .word 0x8c23f520
    .word 0x3c02fffe
    ori v0,v0,0xffff
    and v0,v1,v0
    .word 0x3c011001
    jal func_00111ab8
    .word 0xac22f590
    .word 0x3c011001
    .word 0x8c30b400
    .word 0x8e450008
    .word 0x3c020fff
    ori a2,v0,0xffff
    .word 0x8e430004
    .word 0x3c011001
    addiu v0,a1,1
    .word 0x8c24b410
    sll v0,v0,0x4
    addu v0,v1,v0
    and v0,v0,a2
    bne a0,v0,L1b3d08
    nop
    b L1b3d14
    .word 0x70001628
L1b3d08:
    .word 0x8e420000
    subu v0,a0,v0
    srl v0,v0,0xf
L1b3d14:
    .word 0x8e44000c
    addu v0,v0,a1
    ori a2,zero,0x8000
    subu v0,v0,a0
    .word 0x0045001a
    nop
    nop
    mfhi v1
    addu v0,a0,v1
    .word 0x0045001a
    nop
    nop
    .word 0x00001010
    .word 0xae42000c
    .word 0x8e420010
    subu v0,v0,v1
    .word 0xae420010
    .word 0x8e44000c
    .word 0x8e430010
    .word 0x8e420008
    .word 0x8e450014
    addu v1,a0,v1
    .word 0x0062001a
    nop
    nop
    mfhi v0
    .word 0x00a6001a
    nop
    nop
    mflo v1
    bgez a1,L1b3da0
    andi a0,a1,0x7fff
    beqz a0,L1b3da0
    nop
    addiu a0,a0,-32768
L1b3da0:
    blez v1,L1b3e04
    .word 0xae440014
    .word 0x8e48000c
    .word 0x8e460010
    .word 0x3c043000
    ori a1,a0,0x800
    .word 0x8e490008
    .word 0x8e470000
    .word 0x8e440004
    addu a2,t0,a2
    addiu a2,a2,-1
    addu a2,t1,a2
    .word 0x00c9001a
    addiu s1,zero,1
    nop
    mfhi t0
    sll a2,t0,0xf
    addu a2,a3,a2
    dsll32 a2,a2,0x0
    dsrl32 a2,a2,0x0
    dsll32 a2,a2,0x0
    or a2,a2,a1
    sll a1,t0,0x4
    addu a0,a0,a1
    .word 0xfc860000
L1b3e04:
    slt at,zero,v1
    beqz at,L1b3e88
    .word 0x70005628
    addiu t1,v1,-1
L1b3e14:
    .word 0x8e450000
    sll a0,v0,0xf
    addu a0,a1,a0
    dsll32 a0,a0,0x0
    dsrl32 a0,a0,0x0
    bne t2,t1,L1b3e38
    dsll32 a1,a0,0x0
    b L1b3e3c
    .word 0x70002628
L1b3e38:
    addiu a0,zero,3
L1b3e3c:
    dsll32 a0,a0,0x0
    dsrl32 a0,a0,0x0
    dsll a0,a0,0x1c
    or a0,a1,a0
    .word 0x8e460004
    addiu a1,v0,1
    sll a3,v0,0x4
    ori t0,a0,0x800
    addiu t2,t2,1
    addu v0,a2,a3
    .word 0xfc480000
    .word 0x8e420008
    slt a0,t2,v1
    .word 0x00a2001a
    nop
    nop
    mfhi v0
    bnez a0,L1b3e14
    nop
L1b3e88:
    .word 0x8e420010
    addu v0,v0,v1
    .word 0xae420010
    .word 0x8e420010
    beqz v0,L1b3f04
    nop
    beqz s1,L1b3eb8
    nop
    dsll32 v1,s0,0x4
    dsrl32 v1,v1,0x4
    .word 0x3c023000
    or s0,v1,v0
L1b3eb8:
    jal func_00111a70
    nop
    .word 0x3c011001
    .word 0x8c25f520
    .word 0x3c040001
    .word 0x3c02fffe
    ori v1,s0,0x100
    ori v0,v0,0xffff
    or a0,a1,a0
    .word 0x3c011001
    .word 0xac24f590
    .word 0x3c011001
    .word 0xac23b400
    .word 0x3c011001
    .word 0x8c23f520
    and v0,v1,v0
    .word 0x3c011001
    jal func_00111ab8
    .word 0xac22f590
L1b3f04:
    jal func_00109d00
    .word 0x8e440040
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,64
}


