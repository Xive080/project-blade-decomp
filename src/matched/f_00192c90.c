extern void func_00114cf8(void);
extern void func_00114e30(void);
extern void func_00115590(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdffd0
    .word 0x7fbf0010
    .word 0x7fb00000
    .word 0x8f8284b8
    addiu v1,zero,-1
    .word 0x70808628
    .word 0xafa30028
    beqz v0, L192cc0
    .word 0xafa3002c
    .word 0x8e0201e4
    bnez v0, L192cc8
    addiu a0,zero,1
L192cc0:
    b L193310
    addiu v0,zero,13
L192cc8:
    .word 0x27a50028
    jal func_00114cf8
    .word 0x27a6002c
    .word 0x8f84805c
    bltz a0, L192d08
    addiu t1,zero,-1
    .word 0x8e0300a0
    beq v1,a0, L192d04
    addiu v1,zero,1
    bne v0,v1, L192cfc
    .word 0x70601628
    b L192d04
    addiu v0,zero,-1
L192cfc:
    b L193314
    .word 0x7bbf0010
L192d04:
    addiu t1,zero,-1
L192d08:
    bne v0,t1, L192d58
    .word 0xaf898060
    addiu v0,zero,-100
    .word 0xaf89805c
    .word 0xaf8284d0
    .word 0xaf8284cc
    .word 0xaf8284c8
    .word 0x8e0400a0
    .word 0x278684d0
    .word 0x278784c8
    .word 0x278884cc
    jal func_00114e30
    .word 0x70002e28
    bnez v0, L192d50
    addiu v0,zero,2
    .word 0x8e0200a0
    .word 0xaf82805c
    addiu v0,zero,2
L192d50:
    b L193310
    nop
L192d58:
    bnez v0, L192e50
    addiu t0,zero,1
    .word 0x8fa50028
    addiu v0,zero,11
    beq a1,v0, L193310
    nop
    addiu v0,zero,14
    beq a1,v0, L192e34
    addiu a0,zero,13
    beq a1,a0, L192e0c
    addiu v0,zero,16
    beq a1,v0, L192e04
    addiu v0,zero,6
    addiu v0,zero,6
    beq a1,v0, L192dfc
    addiu v0,zero,4
    addiu v0,zero,5
    beql a1,v0, L192df4
    addiu v0,zero,3
    addiu v1,zero,4
    beq a1,v1, L193310
    nop
    addiu v0,zero,1
    beq a1,v0, L192dec
    addiu v0,zero,2
    addiu v0,zero,3
    beq a1,v0, L192de4
    addiu v0,zero,8
    addiu v0,zero,2
    beq a1,v0, L192ddc
    addiu v0,zero,7
    b L192e48
    .word 0x70801628
L192ddc:
    b L193310
    nop
L192de4:
    b L193310
    nop
L192dec:
    b L193310
    nop
L192df4:
    b L193310
    nop
L192dfc:
    b L193310
    nop
L192e04:
    b L193310
    nop
L192e0c:
    .word 0x8f8384c4
    bnez v1, L192e20
    addiu v0,zero,1
    b L193310
    addiu v0,zero,9
L192e20:
    bne v1,v0, L192e2c
    .word 0x70801628
    addiu v0,zero,10
L192e2c:
    b L193310
    nop
L192e34:
    .word 0x8f8484c4
    addiu v0,zero,9
    addiu v1,zero,13
    b L193310
    .word 0x0064100b
L192e48:
    b L193310
    nop
L192e50:
    bne v0,t0, L193310
    addiu v0,zero,13
    .word 0x8fa70028
    addiu v0,zero,11
    beq a3,v0, L1932e8
    .word 0xaf89805c
    addiu a2,zero,14
    beq a3,a2, L193294
    addiu a0,zero,13
    beq a3,a0, L19315c
    addiu v0,zero,16
    beq a3,v0, L19313c
    addiu v1,zero,6
    beq a3,v1, L1930c8
    addiu v1,zero,5
    beq a3,v1, L193054
    addiu v1,zero,4
    beq a3,v1, L19303c
    addiu v1,zero,3
    beq a3,v1, L192ff4
    addiu a1,zero,2
    beq a3,a1, L192f28
    nop
    beq a3,t0, L192ebc
    nop
    b L193310
    .word 0x70801628
L192ebc:
    .word 0x8fa4002c
    addiu v1,zero,-2
    beql a0,v1, L192f18
    addiu v0,zero,15
    beq a0,t1, L192f14
    nop
    beqz a0, L192ee4
    nop
    b L192f20
    .word 0x70c01628
L192ee4:
    .word 0x8f8384d0
    bnel v1,a1, L192f0c
    .word 0x70c01628
    .word 0x8f8384cc
    beqz v1, L193310
    nop
    .word 0x8e0300a0
    .word 0x70001628
    b L193310
    .word 0xaf838060
L192f0c:
    b L193310
    nop
L192f14:
    addiu v0,zero,15
L192f18:
    b L193310
    nop
L192f20:
    b L193310
    nop
L192f28:
    .word 0x8fa3002c
    bltz v1, L192f54
    addiu v0,zero,-4
    .word 0x8f8284bc
    beqz v0, L192f50
    nop
    .word 0xac430000
    .word 0xaf8084bc
    b L193310
    .word 0x70001628
L192f50:
    addiu v0,zero,-4
L192f54:
    bne v1,v0, L192f8c
    .word 0x2861fff7
    .word 0x8f8384bc
    beqz v1, L192f84
    addiu v0,zero,12
    addiu v0,zero,-1
    .word 0xac620000
    .word 0x8f8284c0
    .word 0xaf8084bc
    .word 0x2442ffff
    .word 0xaf8284c0
    addiu v0,zero,12
L192f84:
    b L193310
    nop
L192f8c:
    beqz at, L192fc4
    nop
    .word 0x8f8384bc
    beqz v1, L192fbc
    addiu v0,zero,14
    addiu v0,zero,-1
    .word 0xac620000
    .word 0x8f8284c0
    .word 0xaf8084bc
    .word 0x2442ffff
    .word 0xaf8284c0
    addiu v0,zero,14
L192fbc:
    b L193310
    nop
L192fc4:
    .word 0x8f8384bc
    beqz v1, L192fec
    addiu v0,zero,13
    addiu v0,zero,-1
    .word 0xac620000
    .word 0x8f8284c0
    .word 0xaf8084bc
    .word 0x2442ffff
    .word 0xaf8284c0
    addiu v0,zero,13
L192fec:
    b L193310
    nop
L192ff4:
    .word 0x8f8284bc
    beqz v0, L193014
    nop
    .word 0xac490000
    .word 0x8f8284c0
    .word 0xaf8084bc
    .word 0x2442ffff
    .word 0xaf8284c0
L193014:
    .word 0x8fa2002c
    bnez v0, L193028
    .word 0x2841fff7
    b L193310
    .word 0x70001628
L193028:
    beqz at, L193034
    addiu v0,zero,13
    addiu v0,zero,14
L193034:
    b L193310
    nop
L19303c:
    .word 0x8fa2002c
    bltz v0, L19304c
    .word 0x70801628
    .word 0x70001628
L19304c:
    b L193310
    nop
L193054:
    .word 0x8fa2002c
    bltz v0, L193068
    .word 0x2841fff7
    b L193310
    .word 0x70001628
L193068:
    beqz at, L19309c
    nop
    .word 0x8f8284bc
    beqzl v0, L193094
    addiu v0,zero,14
    .word 0xac490000
    .word 0x8f8284c0
    .word 0xaf8084bc
    .word 0x2442ffff
    .word 0xaf8284c0
    addiu v0,zero,14
L193094:
    b L193310
    nop
L19309c:
    .word 0x8f8284bc
    beqzl v0, L1930c0
    addiu v0,zero,13
    .word 0xac490000
    .word 0x8f8284c0
    .word 0xaf8084bc
    .word 0x2442ffff
    .word 0xaf8284c0
    addiu v0,zero,13
L1930c0:
    b L193310
    nop
L1930c8:
    .word 0x8fa2002c
    bltz v0, L1930dc
    .word 0x2841fff7
    b L193310
    .word 0x70001628
L1930dc:
    beqz at, L193110
    nop
    .word 0x8f8284bc
    beqzl v0, L193108
    addiu v0,zero,14
    .word 0xac490000
    .word 0x8f8284c0
    .word 0xaf8084bc
    .word 0x2442ffff
    .word 0xaf8284c0
    addiu v0,zero,14
L193108:
    b L193310
    nop
L193110:
    .word 0x8f8284bc
    beqzl v0, L193134
    addiu v0,zero,13
    .word 0xac490000
    .word 0x8f8284c0
    .word 0xaf8084bc
    .word 0x2442ffff
    .word 0xaf8284c0
    addiu v0,zero,13
L193134:
    b L193310
    nop
L19313c:
    .word 0x8fa2002c
    bnez v0, L193150
    .word 0x2841fff7
    b L193310
    .word 0x70001628
L193150:
    .word 0x70801628
    b L193310
    .word 0x00c1100b
L19315c:
    .word 0x8fa2002c
    .word 0x2841fff7
    beqz at, L193178
    addiu v1,zero,2
    .word 0x70c01628
    b L193310
    .word 0xaf8384c4
L193178:
    bnez v0, L193190
    nop
    addiu v0,zero,2
    .word 0xaf8284c4
    b L193310
    addiu v0,zero,12
L193190:
    .word 0x8f8384c4
    bnez v1, L19325c
    nop
    bne v0,t0, L193288
    addiu v0,zero,2
    .word 0x3c010031
    .word 0x8c222830
    .word 0x28410000
    bnez at, L1931e8
    nop
    bnez v0, L1931d8
    .word 0x3c010031
    .word 0x3c010031
    .word 0x94222894
    .word 0x3042fffd
    .word 0x3c010031
    b L1931e8
    .word 0xa4222894
L1931d8:
    .word 0x94222894
    .word 0x34420002
    .word 0x3c010031
    .word 0xa4222894
L1931e8:
    .word 0x3c010031
    .word 0x8c222834
    .word 0x28410000
    bnez at, L19322c
    nop
    bnez v0, L19321c
    .word 0x3c010031
    .word 0x3c010031
    .word 0x94222894
    .word 0x3042fff7
    .word 0x3c010031
    b L19322c
    .word 0xa4222894
L19321c:
    .word 0x94222894
    .word 0x34420008
    .word 0x3c010031
    .word 0xa4222894
L19322c:
    .word 0x3c020031
    .word 0x244628a0
    .word 0x3c020031
    .word 0x24472880
    addiu t0,zero,4
    .word 0x70002628
    jal func_00115590
    .word 0x70002e28
    bnez v0, L193284
    addiu v0,zero,9
    b L193310
    nop
L19325c:
    bne v1,t0, L193284
    nop
    bne v0,t0, L193284
    .word 0x3c010031
    .word 0x8c232890
    addiu v0,zero,2
    .word 0xaf8284c4
    .word 0x70001628
    b L193310
    .word 0xaf838064
L193284:
    addiu v0,zero,2
L193288:
    .word 0xaf8284c4
    b L193310
    addiu v0,zero,13
L193294:
    .word 0x8f8284c4
    bnez v0, L1932bc
    nop
    .word 0x8fa2002c
    bnez v0, L1932dc
    addiu v0,zero,2
    addiu v0,zero,2
    .word 0xaf8284c4
    b L193310
    .word 0x70001628
L1932bc:
    .word 0x8fa2002c
    .word 0x2841fff7
    beqz at, L1932d8
    addiu v1,zero,2
    .word 0x70c01628
    b L193310
    .word 0xaf8384c4
L1932d8:
    addiu v0,zero,2
L1932dc:
    .word 0xaf8284c4
    b L193310
    addiu v0,zero,13
L1932e8:
    .word 0x8fa2002c
    bnez v0, L1932fc
    .word 0x2841fff7
    b L193310
    .word 0x70001628
L1932fc:
    beqz at, L193308
    addiu v0,zero,13
    addiu v0,zero,14
L193308:
    b L193310
    nop
L193310:
    .word 0x7bbf0010
L193314:
    .word 0x7bb00000
    jr ra
    .word 0x27bd0030
}


