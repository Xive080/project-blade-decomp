extern void func_00191b20(void);
extern void func_00147c60(void);
extern void func_00147b70(void);
extern void func_001450e0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff90
    .word 0x7fbf0060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b40000
    .word 0x7080a628
    .word 0x70a09e28
    .word 0x46006506
    .word 0x70c09628
    .word 0x70e08e28
    beqz s4,L148044
    .word 0x70008628
    bnez s3,L14804c
    nop
L148044:
    b L1482f4
    .word 0x70001628
L14804c:
    .word 0x8e830000
    andi v0,v1,0x8
    beqz v0,L14809c
    nop
    .word 0x86840006
    .word 0x86820004
    slt at,a0,v0
    beqz at,L14823c
    andi v0,v1,0x1
    beqz v0,L148088
    sll v0,a0,0x2
    .word 0x26830018
    sll v0,a0,0x4
    b L14823c
    addu s0,v1,v0
L148088:
    addu v0,v0,a0
    .word 0x26830018
    sll v0,v0,0x3
    b L14823c
    addu s0,v1,v0
L14809c:
    .word 0x8e840020
    beqz a0,L1480b8
    andi v0,v1,0x1
    jal func_00191b20
    nop
    b L1480f8
    .word 0x70408628
L1480b8:
    beqz v0,L1480dc
    andi v0,v1,0x6
    .word 0x3c020033
    .word 0x2442a620
    .word 0x8c420130
    jalr ra,v0
    addiu a0,zero,24
    b L1480f8
    .word 0x70408628
L1480dc:
    beqz v0,L1480f8
    .word 0x3c020033
    .word 0x2442a620
    .word 0x8c420130
    jalr ra,v0
    addiu a0,zero,48
    .word 0x70408628
L1480f8:
    bnez s0,L148108
    .word 0x70001628
    b L1482f8
    .word 0x7bbf0060
L148108:
    .word 0x8e820000
    andi v0,v0,0x1
    beqz v0,L148128
    .word 0x26440028
    .word 0x26440010
    .word 0x26020010
    b L148130
    movz a0,zero,s2
L148128:
    movz a0,zero,s2
    .word 0x26020028
L148130:
    addiu v1,zero,4
    beq s1,v1,L148204
    addiu v1,zero,3
    beq s1,v1,L1481e4
    addiu v1,zero,2
    beq s1,v1,L1481a0
    addiu v1,zero,1
    beq s1,v1,L14815c
    nop
    b L148224
    .word 0x8e840018
L14815c:
    beqz a0,L148180
    nop
    .word 0xac440000
    .word 0x8c830004
    .word 0xac430004
    .word 0x8c830004
    .word 0xac620000
    b L14823c
    .word 0xac820004
L148180:
    .word 0x8e840018
    .word 0x26830018
    .word 0xac440000
    .word 0xac430004
    .word 0x8e830018
    .word 0xac620004
    b L14823c
    .word 0xae820018
L1481a0:
    beqz a0,L1481c4
    nop
    .word 0xac440004
    .word 0x8c830000
    .word 0xac430000
    .word 0x8c830000
    .word 0xac620004
    b L14823c
    .word 0xac820000
L1481c4:
    .word 0x8e84001c
    .word 0x26830018
    .word 0xac440004
    .word 0xac430000
    .word 0x8e83001c
    .word 0xac620000
    b L14823c
    .word 0xae82001c
L1481e4:
    .word 0x8e840018
    .word 0x26830018
    .word 0xac440000
    .word 0xac430004
    .word 0x8e830018
    .word 0xac620004
    b L14823c
    .word 0xae820018
L148204:
    .word 0x8e84001c
    .word 0x26830018
    .word 0xac440004
    .word 0xac430000
    .word 0x8e83001c
    .word 0xac620000
    b L14823c
    .word 0xae82001c
L148224:
    .word 0x26830018
    .word 0xac440000
    .word 0xac430004
    .word 0x8e830018
    .word 0xac620004
    .word 0xae820018
L14823c:
    .word 0xc6620000
    .word 0xc6610004
    .word 0xc6600008
    .word 0xe6020000
    .word 0xe6010004
    .word 0xe6000008
    .word 0xe614000c
    .word 0x8e830000
    andi v0,v1,0x2
    beqz v0,L14829c
    andi v0,v1,0x4
    .word 0xc6020000
    .word 0xc6010004
    .word 0xc6000008
    .word 0xe6020010
    .word 0xe6010014
    .word 0xe6000018
    .word 0xc6020000
    .word 0xc6010004
    .word 0xc6000008
    .word 0xe602001c
    .word 0xe6010020
    b L1482e4
    .word 0xe6000024
L14829c:
    beqz v0,L1482e4
    .word 0x72802628
    jal func_00147c60
    .word 0x72002e28
    .word 0x70408e28
    .word 0x72802628
    jal func_00147b70
    .word 0x72002e28
    .word 0x70409628
    .word 0x72802628
    jal func_001450e0
    .word 0x72002e28
    .word 0x72202e28
    jal func_001450e0
    .word 0x72802628
    .word 0x72402e28
    jal func_001450e0
    .word 0x72802628
L1482e4:
    .word 0x86830006
    .word 0x72001628
    .word 0x24630001
    .word 0xa6830006
L1482f4:
    .word 0x7bbf0060
L1482f8:
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b40000
    jr ra
    .word 0x27bd0070
}
