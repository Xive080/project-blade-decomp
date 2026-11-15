extern void func_0015f2c0(void);
extern void func_00161af0(void);
extern void func_0015f420(void);
extern void func_001a8d50(void);
extern void func_0015b970(void);
extern void func_001a8e80(void);
extern void func_001c3b70(void);
extern void func_001c3b00(void);
extern void func_001ff7d0(void);
extern void func_0013bcf0(void);
extern void func_0015f190(void);
extern void func_001a8600(void);
extern void func_0017a150(void);
extern void func_00179ef0(void);
extern void func_0024a6f0(void);
extern void func_00133b90(void);
extern void func_00160f20(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-112
    .word 0x7fbf0060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c820010
    .word 0x3c017000
    .word 0x8c303fcc
    andi v0,v0,0x1
    beqz v0,L15e980
    paddub s1,a0,zero
    b L15e988
    .word 0x70009628
L15e980:
    .word 0x8e3203dc
    nop
L15e988:
    paddub a0,s1,zero
    jal func_0015f2c0
    paddub a1,s2,zero
    jal func_00161af0
    paddub a0,s1,zero
    paddub a0,s1,zero
    jal func_0015f420
    paddub a1,s2,zero
    bnez v0,L15f160
    nop
    .word 0x8e240010
    andi a1,a0,0x1000
    beqz a1,L15eacc
    nop
    andi v0,a0,0x400
    beqz v0,L15e9f0
    .word 0x70001e28
    .word 0x8e2200cc
    .word 0x8c420018
    andi v0,v0,0x4
    beqz v0,L15e9f4
    andi v0,a0,0x800
    jal func_001a8d50
    addiu a0,s1,1016
    b L15ea24
    addiu v1,zero,1
L15e9f0:
    andi v0,a0,0x800
L15e9f4:
    beqz v0,L15ea18
    nop
    .word 0x8e2200cc
    .word 0x8c420018
    andi v0,v0,0x1
    beqz v0,L15ea18
    nop
    b L15ea24
    addiu v1,zero,1
L15ea18:
    beqz a1,L15ea24
    nop
    addiu v1,zero,1
L15ea24:
    beqz v1,L15eaa4
    nop
    .word 0x8e020000
    .word 0x8e25055c
    paddub a0,s0,zero
    .word 0x70003628
    .word 0x8c420010
    jalr ra,v0
    paddub a3,s1,zero
    .word 0x8e22003c
    addiu a1,zero,8
    beq v0,a1,L15eabc
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L15eabc
    nop
    .word 0x8e22000c
    paddub a0,s1,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s1,12
    beqz v0,L15eabc
    nop
    .word 0x8e020000
    addiu a1,zero,8
    paddub a0,s1,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L15eac0
    .word 0x8e230010
L15eaa4:
    .word 0x8e2403d8
    beqz a0,L15eabc
    nop
    paddub a1,s2,zero
    jal func_0015b970
    .word 0x70003628
L15eabc:
    .word 0x8e230010
L15eac0:
    addiu v0,zero,-4097
    and v0,v1,v0
    .word 0xae220010
L15eacc:
    .word 0x8e230010
    andi v0,v1,0x40
    beqz v0,L15eb24
    andi v0,v1,0x80
    addiu v0,zero,-65
    and v0,v1,v0
    .word 0xae220010
    .word 0x8e220010
    ori v0,v0,0x100
    .word 0xae220010
    .word 0x8e2403d8
    beqzl a0,L15eb10
    addiu a0,s1,1016
    addiu a2,zero,1
    jal func_0015b970
    paddub a1,s2,zero
    addiu a0,s1,1016
L15eb10:
    jal func_001a8e80
    nop
    b L15ec58
    .word 0x8e23003c
    andi v0,v1,0x80
L15eb24:
    beqz v0,L15eb4c
    andi v0,v1,0x400
    addiu v0,zero,-129
    and v0,v1,v0
    .word 0xae220010
    .word 0x8e220010
    ori v0,v0,0x200
    b L15ec54
    .word 0xae220010
    andi v0,v1,0x400
L15eb4c:
    beqz v0,L15eba4
    andi v0,v1,0x800
    addiu v0,zero,-1281
    and v0,v1,v0
    .word 0xae220010
    .word 0x8e2203d8
    beqz v0,L15eb90
    addiu a0,s1,1016
    .word 0xae400174
    .word 0x8e42000c
    addiu a2,zero,3
    beq v0,a2,L15eb8c
    nop
    .word 0x8e2403d8
    jal func_0015b970
    paddub a1,s2,zero
L15eb8c:
    addiu a0,s1,1016
L15eb90:
    jal func_001a8d50
    nop
    b L15ec54
    nop
    andi v0,v1,0x800
L15eba4:
    beqz v0,L15ec00
    andi v0,v1,0x20
    .word 0x8e2203dc
    beqz v0,L15ebe8
    nop
    .word 0x8e430008
    addiu v0,zero,4
    beq v1,v0,L15ebe8
    nop
    addiu v0,zero,3
    beq v1,v0,L15ebe8
    nop
    addiu v0,zero,2
    beq v1,v0,L15ebe8
    nop
    addiu v0,zero,1
    .word 0xae420008
L15ebe8:
    .word 0x8e230010
    addiu v0,zero,-2561
    and v0,v1,v0
    b L15ec54
    .word 0xae220010
    andi v0,v1,0x20
L15ec00:
    beqz v0,L15ec54
    nop
    .word 0x8e2203dc
    beqz v0,L15ec44
    nop
    .word 0x8e430008
    addiu v0,zero,4
    beq v1,v0,L15ec44
    nop
    addiu v0,zero,3
    beq v1,v0,L15ec44
    nop
    addiu v0,zero,2
    beq v1,v0,L15ec44
    nop
    addiu v0,zero,1
    .word 0xae420008
L15ec44:
    .word 0x8e230010
    addiu v0,zero,-33
    and v0,v1,v0
    .word 0xae220010
L15ec54:
    .word 0x8e23003c
L15ec58:
    addiu v0,zero,8
    beq v1,v0,L15ec84
    .word 0x8e3400bc
    addiu v0,zero,16
    beq v1,v0,L15ec78
    nop
    b L15ec94
    .word 0x8e300360
L15ec78:
    .word 0x8e33035c
    b L15ec9c
    .word 0x8e300368
L15ec84:
    .word 0x8e330358
    b L15ec9c
    .word 0x8e300364
    .word 0x8e300360
L15ec94:
    .word 0x8e330354
    nop
L15ec9c:
    beqz s4,L15ecf4
    nop
    .word 0x8e220030
    beq s4,v0,L15ecf4
    nop
    jal func_001c3b70
    .word 0x8c440004
    .word 0x8e950004
    paddub s4,v0,zero
    jal func_001c3b70
    paddub a0,s5,zero
    addiu a1,zero,8
L15eccc:
    .word 0x8e840000
    .word 0x8e830004
    addiu a1,a1,-1
    .word 0xac440000
    .word 0xac430004
    addiu s4,s4,8
    bgtz a1,L15eccc
    addiu v0,v0,8
    jal func_001c3b00
    paddub a0,s5,zero
L15ecf4:
    .word 0xc6200568
    .word 0x44800800
    nop
    c.le.s $f0,$f1
    nop
    bc1t L15ee74
    nop
    .word 0x3c017000
    .word 0xc6210560
    .word 0xc4203fa8
    add.s $f1,$f1,$f0
    .word 0xe6210560
    .word 0xc6200568
    c.le.s $f1,$f0
    nop
    bc1t L15ee74
    nop
    .word 0x8e23003c
    addiu v0,zero,8
    bne v1,v0,L15eda4
    nop
    addiu a1,zero,16
    beq v1,a1,L15ed98
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L15ed98
    nop
    .word 0x8e22000c
    paddub a0,s1,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s1,12
    beqz v0,L15ed98
    nop
    .word 0x8e020000
    addiu a1,zero,16
    paddub a0,s1,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L15ed98:
    .word 0x8e300368
    .word 0x8e33035c
    nop
L15eda4:
    .word 0x8e23003c
    addiu v0,zero,16
    beq v1,v0,L15ede8
    .word 0x70002e28
    addiu v0,zero,4
    beq v1,v0,L15edd4
    nop
    addiu v0,zero,2
    beq v1,v0,L15edd4
    nop
    b L15edf0
    nop
L15edd4:
    .word 0x8e2200cc
    .word 0xac400188
    addiu a1,v0,76
    b L15edf0
    .word 0xac40018c
L15ede8:
    .word 0x8e2200cc
    addiu a1,v0,932
L15edf0:
    beqz a1,L15ee64
    nop
    .word 0x8ca3013c
    addiu v0,zero,-1
    beq v1,v0,L15ee64
    nop
    beqz s0,L15ee4c
    nop
    beqz s3,L15ee4c
    nop
    .word 0x8e020008
    paddub a0,s0,zero
    .word 0xc440000c
    .word 0xe6200568
    .word 0x8e220010
    ori v0,v0,0x2000
    .word 0xae220010
    .word 0xc4a00140
    .word 0xe6200560
    jal func_001ff7d0
    .word 0x46000306
    b L15ee74
    nop
L15ee4c:
    .word 0x8e230010
    addiu v0,zero,-8193
    and v0,v1,v0
    .word 0xae220010
    b L15ee74
    .word 0xae200560
L15ee64:
    .word 0xc6210568
    .word 0xc6200560
    sub.s $f0,$f0,$f1
    .word 0xe6200560
L15ee74:
    beqz s2,L15ee9c
    paddub a0,s1,zero
    .word 0x3c017000
    .word 0xc4223fa8
    .word 0xc6410014
    .word 0xc6200668
    mul.s $f1,$f1,$f2
    add.s $f0,$f0,$f1
    .word 0xe6200668
    paddub a0,s1,zero
L15ee9c:
    jal func_0013bcf0
    nop
    .word 0x8e24003c
    addiu v1,zero,16
    beq a0,v1,L15ef74
    nop
    addiu v1,zero,8
    beq a0,v1,L15ef2c
    nop
    addiu v1,zero,2
    beq a0,v1,L15ef04
    nop
    addiu v1,zero,4
    beq a0,v1,L15eee0
    nop
    b L15f0e8
    .word 0xc6210568
L15eee0:
    beqz s2,L15ef04
    nop
    paddub a0,s1,zero
    jal func_0015f190
    paddub a1,s2,zero
    addiu a1,s2,24
    addiu a0,s1,1016
    jal func_001a8600
    .word 0x70003628
L15ef04:
    .word 0x8e2400c0
    beqz a0,L15ef1c
    addiu a1,zero,1
    jal func_0017a150
    nop
    addiu a1,zero,1
L15ef1c:
    jal func_00179ef0
    paddub a0,s1,zero
    b L15f0e4
    nop
L15ef2c:
    .word 0x8e2400c4
    beqz a0,L15ef44
    addiu a1,zero,2
    jal func_0017a150
    nop
    addiu a1,zero,2
L15ef44:
    jal func_00179ef0
    paddub a0,s1,zero
    .word 0x8e230010
    andi v1,v1,0x10
    beqz v1,L15f0e4
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_0024a6f0
    .word 0x8e2400b4
    b L15f0e4
    nop
L15ef74:
    .word 0x8e2200cc
    .word 0x8c420028
    bnez v0,L15efb8
    nop
    .word 0x3c027f7f
    ori v0,v0,0xffff
    beqz s2,L15eff4
    .word 0xae2200d4
    paddub a0,s1,zero
    jal func_0015f190
    paddub a1,s2,zero
    addiu a1,s2,24
    addiu a0,s1,1016
    jal func_001a8600
    .word 0x70003628
    b L15eff8
    .word 0x3c017000
L15efb8:
    .word 0x8e2200b8
    jal func_001c3b70
    .word 0x8c440004
    .word 0xc62c0020
    jal func_00133b90
    addiu a0,v0,48
    beqz v0,L15eff4
    nop
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0x3c024000
    .word 0x44820000
    nop
    add.s $f0,$f0,$f1
    .word 0xe62000d4
L15eff4:
    .word 0x3c017000
L15eff8:
    .word 0xc4213fb0
    .word 0xc62000d4
    c.le.s $f1,$f0
    nop
    bc1t L15f0c4
    nop
    .word 0x8e2200d0
    andi v0,v0,0x1
    beqz v0,L15f0c4
    nop
    .word 0x8e2300cc
    addiu v0,zero,2
    .word 0x8c630028
    beq v1,v0,L15f0a8
    paddub a0,s1,zero
    addiu v0,zero,1
    beq v1,v0,L15f048
    nop
    b L15f0bc
    .word 0x3c027f7f
L15f048:
    .word 0x8e22003c
    beqz v0,L15f0b8
    nop
    .word 0x8e220010
    andi v0,v0,0x2
    bnez v0,L15f0b8
    nop
    .word 0x8e22000c
    paddub a0,s1,zero
    .word 0x70002e28
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s1,12
    beqz v0,L15f0b8
    nop
    .word 0x8e020000
    paddub a0,s1,zero
    .word 0x70002e28
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L15f0b8
    nop
    paddub a0,s1,zero
L15f0a8:
    jal func_00160f20
    .word 0x70002e28
    addiu v0,zero,1
    .word 0xae2200d8
L15f0b8:
    .word 0x3c027f7f
L15f0bc:
    ori v0,v0,0xffff
    .word 0xae2200d4
L15f0c4:
    .word 0x8e2400c8
    beqz a0,L15f0dc
    addiu a1,zero,3
    jal func_0017a150
    nop
    addiu a1,zero,3
L15f0dc:
    jal func_00179ef0
    paddub a0,s1,zero
L15f0e4:
    .word 0xc6210568
L15f0e8:
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1f L15f160
    nop
    .word 0x8e24003c
    addiu v1,zero,8
    bne a0,v1,L15f160
    nop
    addiu a1,zero,16
    beq a0,a1,L15f160
    nop
    .word 0x8e230010
    andi v1,v1,0x2
    bnez v1,L15f160
    nop
    .word 0x8e22000c
    paddub a0,s1,zero
    .word 0x8c420010
    jalr ra,v0
    addiu s0,s1,12
    beqz v0,L15f160
    nop
    .word 0x8e020000
    addiu a1,zero,16
    paddub a0,s1,zero
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L15f160:
    .word 0x7bbf0060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,112
}


