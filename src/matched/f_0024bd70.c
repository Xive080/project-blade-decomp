extern void func_0013b550(void);
extern void func_00187e10(void);
extern void func_00189710(void);
extern void func_0024b5f0(void);
extern void func_0024bba0(void);
extern void func_0024bc60(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-96
    .word 0x7fbf0040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    paddub s1,a0,zero
    paddub s0,a1,zero
    paddub a0,zero,zero
    jal func_0024bc60
    paddub a1,zero,zero
    .word 0x8f8289f0
    jal func_00187e10
    .word 0x8c440000
    .word 0x8f8289f0
    .word 0xac400090
    .word 0x8f8289f0
    beqz s0,L24bdd8
    .word 0xac400094
    .word 0x3c023e4c
    ori v1,v0,0xcccd
    .word 0x8f8289f0
    .word 0xac430018
    .word 0x8f8289f0
    b L24bde0
    .word 0xac40001c
L24bdd8:
    .word 0x8f8289f0
    .word 0xac400018
L24bde0:
    .word 0x8f8389f0
    .word 0x8c6200c0
    beqz v0,L24be38
    nop
    .word 0x8c630000
    .word 0x3c024420
    mtc1 v0,$f1
    .word 0xc4600018
    mul.s $f0,$f1,$f0
    .word 0xe4600010
    .word 0xac600014
    .word 0x8c62000c
    ori v0,v0,0x1
    .word 0xac62000c
    .word 0xc4600018
    .word 0xc461001c
    neg.s $f0,$f0
    .word 0xe4600018
    .word 0xe461001c
    .word 0x8c62000c
    ori v0,v0,0x2
    .word 0xac62000c
L24be38:
    .word 0x8e220004
    andi v0,v0,0x1
    beqz v0,L24be64
    nop
    .word 0x8f8389f0
    .word 0x3c0242c8
    mtc1 v0,$f0
    .word 0xc46100b4
    add.s $f0,$f0,$f1
    b L24be70
    .word 0xe46000bc
L24be64:
    .word 0x8f8289f0
    .word 0xc44000b4
    .word 0xe44000bc
L24be70:
    .word 0x3c017000
    .word 0x8c233fc8
    addiu v0,zero,1
    bne v1,v0,L24befc
    nop
    .word 0x8f8289f0
    .word 0x8c44002c
    .word 0x8c820028
    beqz v0,L24bea8
    paddub s2,a0,zero
    beqz v0,L24bea8
    nop
    jal func_0024bba0
    nop
L24bea8:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    addiu a1,zero,1
    jalr ra,v0
    paddub a0,s2,zero
    beqz s0,L24bfdc
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
    b L24bfe0
    .word 0x8f8389f0
L24befc:
    .word 0x8f8289f0
    .word 0x8c44002c
    .word 0x8c820028
    beqz v0,L24bf20
    paddub s2,a0,zero
    beqz v0,L24bf20
    nop
    jal func_0024bba0
    nop
L24bf20:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    paddub a0,s2,zero
    jalr ra,v0
    paddub a1,zero,zero
    beqz s0,L24bf6c
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24bf6c:
    .word 0x8f8289f0
    .word 0x8c440030
    .word 0x8c820028
    beqz v0,L24bf90
    paddub s2,a0,zero
    beqz v0,L24bf90
    nop
    jal func_0024bba0
    nop
L24bf90:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    paddub a0,s2,zero
    jalr ra,v0
    paddub a1,zero,zero
    beqz s0,L24bfdc
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24bfdc:
    .word 0x8f8389f0
L24bfe0:
    .word 0x8c620014
    beqz v0,L24c058
    nop
    .word 0x8c640034
    .word 0x8c820028
    beqz v0,L24c00c
    paddub s2,a0,zero
    beqz v0,L24c00c
    nop
    jal func_0024bba0
    nop
L24c00c:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    paddub a0,s2,zero
    jalr ra,v0
    paddub a1,zero,zero
    beqz s0,L24c058
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24c058:
    .word 0x8f8289f0
    .word 0x8c440038
    .word 0x8c820028
    beqz v0,L24c07c
    paddub s2,a0,zero
    beqz v0,L24c07c
    nop
    jal func_0024bba0
    nop
L24c07c:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    paddub a0,s2,zero
    jalr ra,v0
    paddub a1,zero,zero
    beqz s0,L24c0c8
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24c0c8:
    .word 0x8f8289f0
    .word 0x8c44003c
    .word 0x8c820028
    beqz v0,L24c0ec
    paddub s2,a0,zero
    beqz v0,L24c0ec
    nop
    jal func_0024bba0
    nop
L24c0ec:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    paddub a0,s2,zero
    jalr ra,v0
    paddub a1,zero,zero
    beqz s0,L24c138
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24c138:
    .word 0x8e230004
    andi v1,v1,0x10
    bnez v1,L24c1dc
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,270
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,190
    jal func_0013b550
    .word 0xa3a20050
    .word 0xafa20054
    .word 0x8f8289f0
    .word 0x8c440040
    .word 0x8c820028
    beqz v0,L24c190
    paddub s2,a0,zero
    beqz v0,L24c190
    nop
    jal func_0024bba0
    nop
L24c190:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    addiu a1,sp,80
    jalr ra,v0
    paddub a0,s2,zero
    beqz s0,L24c1dc
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24c1dc:
    .word 0x8e230004
    andi v1,v1,0x8
    bnez v1,L24c280
    nop
    .word 0x8f848328
    jal func_0013b550
    addiu a1,zero,267
    .word 0x80420000
    .word 0x8f848328
    addiu a1,zero,191
    jal func_0013b550
    .word 0xa3a20050
    .word 0xafa20054
    .word 0x8f8289f0
    .word 0x8c440044
    .word 0x8c820028
    beqz v0,L24c234
    paddub s2,a0,zero
    beqz v0,L24c234
    nop
    jal func_0024bba0
    nop
L24c234:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    addiu a1,sp,80
    jalr ra,v0
    paddub a0,s2,zero
    beqz s0,L24c280
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24c280:
    .word 0x8e230010
    beqz v1,L24c2fc
    nop
    .word 0x8f8289f0
    .word 0x8c440050
    .word 0x8c820028
    beqz v0,L24c2b0
    paddub s2,a0,zero
    beqz v0,L24c2b0
    nop
    jal func_0024bba0
    nop
L24c2b0:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    paddub a0,s2,zero
    jalr ra,v0
    paddub a1,s1,zero
    beqz s0,L24c2fc
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24c2fc:
    .word 0x8e230004
    andi v1,v1,0x2
    bnez v1,L24c5c0
    nop
    .word 0x8f8289f0
    .word 0x8e330008
    .word 0x8c44007c
    .word 0x8c820028
    beqz v0,L24c334
    paddub s2,a0,zero
    beqz v0,L24c334
    nop
    jal func_0024bba0
    nop
L24c334:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    paddub a1,s3,zero
    jalr ra,v0
    paddub a0,s2,zero
    beqz s0,L24c380
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24c380:
    .word 0x8e33000c
    beqz s3,L24c3fc
    nop
    .word 0x8f8289f0
    .word 0x8c440078
    .word 0x8c820028
    beqz v0,L24c3b0
    paddub s2,a0,zero
    beqz v0,L24c3b0
    nop
    jal func_0024bba0
    nop
L24c3b0:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    paddub a1,s3,zero
    jalr ra,v0
    paddub a0,s2,zero
    beqz s0,L24c3fc
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24c3fc:
    .word 0x8e230010
    sltiu at,v1,2
    bnez at,L24c4ec
    nop
    .word 0x8f8289f0
    .word 0x8c440080
    .word 0x8c820028
    beqz v0,L24c430
    paddub s2,a0,zero
    beqz v0,L24c430
    nop
    jal func_0024bba0
    nop
L24c430:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    paddub a0,s2,zero
    jalr ra,v0
    paddub a1,zero,zero
    beqz s0,L24c47c
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24c47c:
    .word 0x8f8289f0
    .word 0x8c440084
    .word 0x8c820028
    beqz v0,L24c4a0
    paddub s2,a0,zero
    beqz v0,L24c4a0
    nop
    jal func_0024bba0
    nop
L24c4a0:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae420028
    addiu v0,zero,-1
    .word 0xae400024
    .word 0xae42003c
    .word 0xae420040
    .word 0xae420044
    .word 0xae420048
    .word 0x8e42000c
    paddub a0,s2,zero
    jalr ra,v0
    paddub a1,s1,zero
    beqz s0,L24c4ec
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s2,zero
L24c4ec:
    .word 0x8e240010
    beqz a0,L24c5c0
    nop
    .word 0x8e230004
    andi v1,v1,0x1
    beqz v1,L24c514
    nop
    addiu v1,zero,1
    beq a0,v1,L24c5c0
    nop
L24c514:
    .word 0x8e230018
    .word 0x8e240014
    .word 0x8f8289f0
    sll v1,v1,0x5
    addu v1,v1,a0
    .word 0x8c630004
    .word 0xafa30058
    .word 0x8e240018
    .word 0x8e230014
    sll a0,a0,0x5
    addu v1,v1,a0
    .word 0x8c630008
    andi v1,v1,0x1
    sltu v1,zero,v1
    .word 0xa3a3005c
    .word 0xa3a0005d
    .word 0x8c44008c
    .word 0x8c820028
    beqz v0,L24c574
    paddub s1,a0,zero
    beqz v0,L24c574
    nop
    jal func_0024bba0
    nop
L24c574:
    .word 0x8f8289f0
    jal func_00189710
    .word 0x8c440000
    .word 0xae220028
    addiu v0,zero,-1
    .word 0xae200024
    .word 0xae22003c
    .word 0xae220040
    .word 0xae220044
    .word 0xae220048
    .word 0x8e22000c
    addiu a1,sp,88
    jalr ra,v0
    paddub a0,s1,zero
    beqz s0,L24c5c0
    nop
    addiu a1,zero,1
    jal func_0024b5f0
    paddub a0,s1,zero
L24c5c0:
    .word 0x7bbf0040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,96
}
