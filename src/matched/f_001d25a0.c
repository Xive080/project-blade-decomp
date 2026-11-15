extern void f1c21a0(void);
extern void f1c5e90(void);
extern void f1c5ea0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    sq ra,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    .word 0x3c020033
    sq s0,0(sp)
    addiu v0,v0,-23008
    .word 0x8c500000
    paddub s2,a0,zero
    jal f1c21a0
    paddub a0,s0,zero
    lw a0,20(s0)
    addiu v1,zero,1
    bnel a0,v1,L1d25e0
    paddub v1,zero,zero
L1d25e0:
    sll a0,v1,0x2
    addiu v1,gp,-32576
    addu v1,v1,a0
    lw s1,0(v1)
    .word 0xc600008c
    .word 0x3c030033
    addiu s3,v1,-6592
    .word 0xe6600000
    .word 0xc6000090
    .word 0xe6600004
    .word 0xc440000c
    cvt.s.w $f0,$f0
    .word 0xe6600010
    .word 0xc4400010
    cvt.s.w $f0,$f0
    .word 0xe6600014
    lh v1,28(v0)
    mtc1 v1,$f0
    nop
    cvt.s.w $f0,$f0
    .word 0xe6600018
    lh v0,30(v0)
    mtc1 v0,$f0
    nop
    cvt.s.w $f0,$f0
    .word 0xe660001c
    .word 0xc6000080
    .word 0xe6600008
    .word 0xc6000084
    jal f1c5e90
    .word 0xe660000c
    jal f1c5ea0
    .word 0xe6600020
    .word 0x3c020033
    addiu a1,v0,-6624
    .word 0xe6600024
    .word 0x8ca30000
    addiu v0,zero,3
    addiu a0,v1,20
    lw v1,20(v1)
    bnel v1,v0,L1d269c
    paddub a1,zero,zero
    addiu v0,zero,2
    sw v0,0(a0)
    .word 0x8ca20000
    .word 0x8c450018
    nop
L1d269c:
    jalr ra,s1
    paddub a0,s2,zero
    lq ra,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,80
}
