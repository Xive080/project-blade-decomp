extern void func_001321a0(void);
extern void func_00132280(void);
extern void func_00133120(void);
extern void func_0016f4c0(void);
extern void func_00171860(void);
extern void func_00171880(void);
extern void func_001718b0(void);
extern void func_001718d0(void);
extern void func_00172270(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x3c020025
    .word 0x244282e0
    .word 0x3c010033
    .word 0xac223030
    .word 0x3c020025
    .word 0x244282a0
    .word 0x3c010033
    .word 0xac223034
    .word 0x3c020025
    .word 0x244280c0
    .word 0x3c010033
    .word 0xac223038
    .word 0x3c010033
    .word 0x3c020033
    .word 0xac20303c
    .word 0x24423030
    .word 0x3c010033
    .word 0xac223050
    addiu v0,zero,-1
    .word 0x3c010033
    .word 0xac223058
    .word 0x3c010033
    .word 0xac22305c
    .word 0x3c020033
    .word 0x24453050
    .word 0x0804ccb0
    addiu a0,zero,12
    nop
    .word 0x27bdffe0
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x8c830018
    addiu v0,zero,1
    beq v1,v0, L248138
    .word 0x70808628
    beqz v1, L2480f0
    .word 0x70002628
    b L248170
    .word 0x70002628
    .word 0x70002628
L2480f0:
    jal func_00132280
    nop
    beqz v0, L248130
    addiu v0,zero,1
    .word 0x3c010033
    .word 0x8c24305c
    jal func_0016f4c0
    .word 0x70002e28
    .word 0x70402628
    .word 0x8e020008
    .word 0x00401027
    jal func_00172270
    .word 0x2c450001
    addiu v0,zero,1
    .word 0xae020018
    .word 0x24020001
L248130:
    b L248294
    .word 0x7bbf0010
L248138:
    jal func_001718d0
    nop
    .word 0x8c4200a0
    beqz v0, L248164
    addiu v0,zero,1
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xac22a664
    addiu v0,zero,2
    .word 0xae020018
    addiu v0,zero,1
L248164:
    b L248290
    nop
    .word 0x70002628
L248170:
    jal func_001321a0
    nop
    jal func_00171860
    .word 0x46000306
    .word 0x8e020014
    bnez v0, L248258
    nop
    .word 0x8e030010
    addiu v0,zero,-2
    bne v1,v0, L2481e4
    nop
    .word 0x3c010030
    .word 0xc420a868
    .word 0x3c023f00
    .word 0x44820800
    nop
    .word 0x46010036
    nop
    bc1f L248234
    nop
    .word 0x3c010030
    .word 0xc420a870
    .word 0x46010036
    nop
    bc1f L248234
    nop
    addiu v0,zero,-1
    b L248234
    .word 0xae020010
L2481e4:
    .word 0x3c010030
    .word 0xc420a868
    .word 0x3c023f00
    .word 0x44820800
    nop
    .word 0x46010036
    nop
    bc1t L248214
    nop
    addiu v0,zero,6
    b L248234
    .word 0xae020010
L248214:
    .word 0x3c010030
    .word 0xc420a870
    .word 0x46010036
    nop
    bc1t L248234
    nop
    addiu v0,zero,8
    .word 0xae020010
L248234:
    .word 0x8e020010
    bltz v0, L248258
    nop
    jal func_00171880
    nop
    addiu v0,zero,1
    .word 0xae020014
    addiu v0,zero,-1
    .word 0xae020010
L248258:
    jal func_001718b0
    nop
    beqz v0, L248290
    addiu v0,zero,1
    .word 0x8e020014
    beqz v0, L248284
    nop
    jal func_00133120
    .word 0x8e040004
    b L24828c
    nop
L248284:
    jal func_00133120
    .word 0x8e040008
L24828c:
    addiu v0,zero,1
L248290:
    .word 0x7bbf0010
L248294:
    .word 0x7bb00000
    jr ra
    .word 0x27bd0020
}
