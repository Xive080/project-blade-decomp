extern void func_0013bcf0(void);
extern void func_00179db0(void);
extern void func_00179ef0(void);
extern void func_0017a3c0(void);
extern void func_001c3b70(void);
extern void func_001ce240(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c83003c
    beqz v1,L243fac
    .word 0x70809628
    .word 0x8e430010
    andi v1,v1,0x1
    beqz v1,L243c0c
    nop
    b L243fb0
    .word 0x7bbf0040
L243c0c:
    jal func_001c3b70
    .word 0x8e4403dc
    .word 0x8e45003c
    addiu a0,zero,1
    beq a1,a0,L243ddc
    .word 0x70408628
    addiu v0,zero,4
    beql a1,v0,L243dcc
    addiu a1,zero,2
    addiu v0,zero,2
    beq a1,v0,L243c44
    nop
    b L243fa4
    .word 0x72402628
L243c44:
    .word 0x8e420010
    andi s1,v0,0x20
    beqz s1,L243cf0
    nop
    .word 0x8e4200d0
    andi v0,v0,0x40
    beqz v0,L243cf0
    nop
    .word 0x8e4203d8
    beqzl v0,L243cd0
    .word 0x3c024974
    .word 0x8c420008
    .word 0xc6400050
    addiu a0,sp,80
    .word 0xc4410050
    sub.s $f0,$f0,$f1
    .word 0xe7a00050
    .word 0x8e4203d8
    .word 0xc6400054
    .word 0x8c420008
    .word 0xc4410054
    sub.s $f0,$f0,$f1
    .word 0xe7a00054
    .word 0x8e4203d8
    .word 0xc6400058
    .word 0x8c420008
    .word 0xc4410058
    sub.s $f0,$f0,$f1
    jal func_001ce240
    .word 0xe7a00058
    .word 0x3c023f4c
    ori v0,v0,0xcccd
    .word 0x44820800
    b L243cd8
    mul.s $f0,$f0,$f1
L243cd0:
    ori v0,v0,0x2400
    .word 0x44820000
L243cd8:
    .word 0xc6410020
    c.le.s $f0,$f1
    nop
    bc1f L243cf0
    nop
    .word 0x70008e28
L243cf0:
    beqz s1,L243d80
    addiu a1,zero,1
    .word 0x3c017000
    .word 0x8c243fcc
    .word 0x8e4503d8
    .word 0x70003628
    .word 0x8c820000
    .word 0x8c420010
    jalr ra,v0
    .word 0x72403e28
    .word 0x8e42003c
    addiu a1,zero,4
    beq v0,a1,L243d6c
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L243d6c
    nop
    .word 0x8e42000c
    .word 0x72402628
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s2,12
    beqz v0,L243d6c
    nop
    .word 0x8e020000
    addiu a1,zero,4
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L243d6c:
    .word 0x8e430010
    addiu v0,zero,-33
    and v0,v1,v0
    b L243fa0
    .word 0xae420010
L243d80:
    jal func_00179ef0
    .word 0x72402628
    .word 0x3c023f80
    .word 0x44826800
    addiu a0,s2,992
    .word 0x3c024080
    .word 0x44826000
    addiu a2,s2,1456
    jal func_00179db0
    .word 0x72002e28
    .word 0x3c0240a0
    .word 0x44826000
    addiu a0,s2,1224
    mov.s $f13,$f12
    addiu a2,s2,1460
    jal func_00179db0
    .word 0x72002e28
    b L243fa0
    nop
L243dcc:
    jal func_00179ef0
    .word 0x72402628
    b L243fa0
    nop
L243ddc:
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0xc64000d4
    c.le.s $f1,$f0
    nop
    bc1tl L243f5c
    addiu a1,zero,3
    .word 0x8e4200cc
    beqzl v0,L243f50
    .word 0x3c027f7f
    .word 0x8c430028
    addiu v0,zero,2
    beq v1,v0,L243e84
    nop
    beq v1,a0,L243e2c
    nop
    beqz v1,L243f4c
    nop
    b L243f4c
    nop
L243e2c:
    beqz a1,L243f4c
    nop
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L243f4c
    nop
    .word 0x8e42000c
    .word 0x72402628
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s2,12
    beqz v0,L243f4c
    nop
    .word 0x8e220000
    .word 0x72402628
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L243f4c
    nop
L243e84:
    jal func_0017a3c0
    nop
    .word 0x8c420008
    .word 0x72402628
    jalr ra,v0
    .word 0x70002e28
    .word 0x8e42003c
    beqz v0,L243ef0
    addiu s1,s2,60
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L243ef0
    nop
    .word 0x8e42000c
    .word 0x72402628
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s3,s2,12
    beqz v0,L243ef0
    nop
    .word 0x8e620000
    .word 0x72402628
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L243ef0:
    .word 0x8e220000
    addiu a1,zero,2
    beq v0,a1,L243f48
    addiu v0,zero,1
    .word 0x8e420010
    andi v0,v0,0x2
    bnez v0,L243f44
    nop
    .word 0x8e42000c
    .word 0x72402628
    .word 0x8c420010
    jalr ra,v0
    addiu s1,s2,12
    beqz v0,L243f44
    nop
    .word 0x8e220000
    addiu a1,zero,2
    .word 0x72402628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L243f44:
    addiu v0,zero,1
L243f48:
    .word 0xae4200d8
L243f4c:
    .word 0x3c027f7f
L243f50:
    ori v0,v0,0xffff
    .word 0xae4200d4
    addiu a1,zero,3
L243f5c:
    jal func_00179ef0
    .word 0x72402628
    .word 0x3c023f80
    .word 0x44826800
    addiu a0,s2,1108
    .word 0x3c024080
    .word 0x44826000
    addiu a2,s2,1456
    jal func_00179db0
    .word 0x72002e28
    .word 0x3c0240a0
    .word 0x44826000
    addiu a0,s2,1340
    mov.s $f13,$f12
    addiu a2,s2,1460
    jal func_00179db0
    .word 0x72002e28
L243fa0:
    .word 0x72402628
L243fa4:
    jal func_0013bcf0
    nop
L243fac:
    .word 0x7bbf0040
L243fb0:
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
