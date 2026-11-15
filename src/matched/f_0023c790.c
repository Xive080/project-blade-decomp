extern void func_001cc990(void);
extern void func_001cc9b0(void);
extern void func_001ccbc0(void);
extern void func_001ccc90(void);
extern void func_00204350(void);
extern void func_0023e1f0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8f828990
    paddub s1,a1,zero
    paddub s2,a0,zero
    paddub a1,zero,zero
    addiu v1,zero,1
    addu v0,a0,v0
    .word 0x8c440000
    b L23c7f0
    paddub a2,a0,zero
L23c7c8:
    .word 0x8cc20030
    bne v0,v1,L23c7e4
    addiu v0,a1,1
    andi v0,a1,0xff
    sll v0,v0,0x6
    b L23c800
    addu s0,a0,v0
L23c7e4:
    addiu a2,a2,64
    andi a1,v0,0xff
    nop
L23c7f0:
    andi v0,a1,0xff
    slti v0,v0,2
    bnez v0,L23c7c8
    paddub s0,zero,zero
L23c800:
    .word 0x8e040008
    beq zero,a0,L23c818
    nop
    jal func_001cc9b0
    nop
    .word 0xae000008
L23c818:
    .word 0x8e040004
    beq zero,a0,L23c834
    nop
    jal func_001cc9b0
    nop
    .word 0xae000004
    .word 0xae000010
L23c834:
    beqz s1,L23c89c
    paddub a0,s2,zero
    jal func_00204350
    paddub a0,s2,zero
    paddub a0,v0,zero
    jal func_0023e1f0
    paddub a1,s1,zero
    .word 0xae020004
    .word 0x8e020004
    bne zero,v0,L23c868
    paddub v0,zero,zero
    b L23c8f4
    .word 0x7bbf0030
L23c868:
    .word 0xae110008
    jal func_001cc990
    .word 0x8e040008
    jal func_001ccc90
    nop
    beqz v0,L23c890
    nop
    .word 0x8e050004
    jal func_001ccbc0
    paddub a0,v0,zero
L23c890:
    .word 0x8e020004
    b L23c8ac
    .word 0x8c420000
L23c89c:
    jal func_00204350
    nop
    .word 0x8c420000
    nop
L23c8ac:
    .word 0x8c42000c
    bltz v0,L23c8c4
    srl v1,v0,0x1
    mtc1 v0,$f0
    b L23c8dc
    cvt.s.w $f1,$f0
L23c8c4:
    andi v0,v0,0x1
    or v1,v1,v0
    mtc1 v1,$f0
    nop
    cvt.s.w $f1,$f0
    add.s $f1,$f1,$f1
L23c8dc:
    .word 0x3c033f80
    mtc1 v1,$f0
    paddub v0,s2,zero
    div.s $f0,$f0,$f1
    .word 0xe6000010
    .word 0x7bbf0030
L23c8f4:
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
