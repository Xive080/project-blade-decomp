extern void func_00132a00(void);
extern void func_00133120(void);
extern void func_001332c0(void);
extern void func_0016b090(void);
extern void func_00170ba0(void);
extern void func_00174380(void);
extern void func_00178480(void);
extern void func_001784a0(void);
extern void func_00178800(void);
extern void func_001a9a40(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c020017
    addiu v0,v0,14928
    .word 0x3c010031
    sw v0,-32224(at)
    .word 0x3c020017
    addiu v0,v0,14784
    .word 0x3c010031
    sw v0,-32220(at)
    .word 0x3c020017
    addiu v0,v0,14240
    .word 0x3c010031
    sw v0,-32216(at)
    .word 0x3c020031
    addiu v0,v0,-32224
    .word 0x3c010031
    addiu a1,gp,-31672
    addiu a0,zero,5
    sw v0,-31672(gp)
    sw zero,-31676(gp)
    j func_001332c0
    sw zero,-32212(at)
    nop
    nop
    nop
    addiu sp,sp,-32
    .word 0x7fbf0010
    .word 0x7fb00000
    lw v1,-31684(gp)
    addiu v0,zero,9
    beq v1,v0,L1738c4
    nop
    jal func_0016b090
    nop
    beqz v0,L1737d4
    nop
    b L1739ac
    addiu v0,zero,1
L1737d4:
    lw v1,-31684(gp)
    addiu v0,zero,3
    beq v1,v0,L173884
    paddub a0,zero,zero
    beqz v1,L1737f4
    nop
    b L1738bc
    addiu v0,zero,1
L1737f4:
    .word 0x3c010030
    lbu s0,-23009(at)
    .word 0x3c020030
    jal func_00178480
    addiu a0,v0,-23024
    jal func_00174380
    paddub a0,zero,zero
    jal func_00174380
    addiu a0,zero,1
    .word 0x3c010030
    lbu v0,-23009(at)
    bne s0,v0,L173868
    addiu v0,zero,1
    addiu a0,zero,-1
    jal func_001a9a40
    paddub a1,zero,zero
    .word 0x3c017000
    lw a0,16340(at)
    lw v0,0(a0)
    lw v0,32(v0)
    jalr ra,v0
    nop
    addiu a0,zero,-1
    jal func_001a9a40
    addiu a1,zero,1
    addiu v0,zero,1
    b L1738b8
    sw v0,-31688(gp)
    addiu v0,zero,1
L173868:
    .word 0x3c010030
    addiu a0,zero,3
    jal func_00133120
    sw v0,-23508(at)
    b L1738b8
    nop
    paddub a0,zero,zero
L173884:
    jal func_00174380
    nop
    jal func_00174380
    addiu a0,zero,1
    jal func_00132a00
    nop
    addiu v0,zero,1
    jal func_00170ba0
    sw v0,-31688(gp)
    addiu a0,zero,1
    .word 0x3c010030
    jal func_00133120
    sw a0,-23508(at)
L1738b8:
    addiu v0,zero,1
L1738bc:
    b L1739b0
    .word 0x7bbf0010
L1738c4:
    jal func_00178800
    nop
    .word 0x3c017000
    lw a0,16352(at)
    addiu v0,zero,4
    lw v1,60(a0)
    bne v1,v0,L1738f4
    nop
    lw v0,12(a0)
    lw v0,12(v0)
    jalr ra,v0
    nop
L1738f4:
    lw v1,-31676(gp)
    addiu v0,zero,4
    beq v1,v0,L17391c
    addiu a1,zero,1
    addiu v0,zero,3
    beq v1,v0,L173918
    nop
    b L173928
    paddub a1,zero,zero
L173918:
    addiu a1,zero,1
L17391c:
    b L17392c
    lw v0,-31668(gp)
    paddub a1,zero,zero
L173928:
    lw v0,-31668(gp)
L17392c:
    bnez v0,L1739ac
    addiu v0,zero,1
    .word 0x3c020030
    addiu v0,v0,-21888
    sll v1,a1,0x2
    addu v0,v0,v1
    lw v0,0(v0)
    addiu a0,zero,1
    bne v0,a0,L1739a8
    nop
    sll v0,a1,0x3
    subu v0,v0,a1
    sll v1,v0,0x6
    .word 0x3c020030
    addiu v0,v0,-22416
    mtc1 zero,$f0
    addu v0,v0,v1
    lwc1 $f1,0(v0)
    c.eq.s $f1,$f0
    nop
    bc1t L1739a4
    nop
    lw v0,-31680(gp)
    beqz v0,L17399c
    nop
    sw a0,-31668(gp)
    jal func_001784a0
    addiu a0,zero,5
L17399c:
    b L1739a8
    sw zero,-31680(gp)
L1739a4:
    sw a0,-31680(gp)
L1739a8:
    addiu v0,zero,1
L1739ac:
    .word 0x7bbf0010
L1739b0:
    .word 0x7bb00000
    jr ra
    addiu sp,sp,32
}
