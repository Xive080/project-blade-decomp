extern void F121a58(void);
extern void F13b550(void);
extern void F182e50(void);
extern void F189050(void);
extern void F230bf0(void);
extern void F230d40(void);
asm void f(void) {
    .set noreorder
    addiu sp,sp,-128
    sq ra,32(sp)
    sq s0,16(sp)
    swc1 $f21,4(sp)
    mtc1 zero,$f21
    nop
    swc1 $f20,0(sp)
    paddub s0,a0,zero
    paddub a1,zero,zero
    jal F230bf0
    mov.s $f20,$f21
    sw v0,64(s0)
    lw v1,44(s0)
    andi v0,v1,0x1
    beqz v0,L245bfc
    andi v0,v1,0x2
    lui v0,0x3f80
    mtc1 v0,$f21
    lui v0,0xc1c0
    mtc1 v0,$f20
    b L245c10
    lwc1 $f12,40(s0)
    andi v0,v1,0x2
L245bfc:
    beqz v0,L245c0c
    nop
    lui v0,0x3f00
    mtc1 v0,$f21
L245c0c:
    lwc1 $f12,40(s0)
L245c10:
    jal F230d40
    addiu a0,s0,32
    sw v0,52(s0)
    lw a0,-31960(gp)
    jal F13b550
    addiu a1,zero,338
    lw a0,-31568(gp)
    lui v1,0x3d4c
    addiu a2,zero,2
    ori v1,v1,0xcccd
    paddub a1,v0,zero
    lw a0,44(a0)
    sw a2,48(sp)
    swc1 $f21,52(sp)
    sw v1,56(sp)
    swc1 $f20,60(sp)
    sw zero,64(sp)
    sw a0,92(sp)
    jal F182e50
    sw v0,96(sp)
    addiu v0,sp,100
    .word 0xE4400000
    lui a1,0x41a0
    mtc1 a1,$f1
    nop
    .word 0x46000006
    mul.s $f0,$f1,$f0
    lui v0,0x2e
    addiu v1,v0,1728
    addiu v0,sp,76
    swc1 $f0,68(sp)
    sw a1,72(sp)
    lwc1 $f3,0(v1)
    lwc1 $f2,4(v1)
    lwc1 $f1,8(v1)
    lwc1 $f0,12(v1)
    .word 0xE4430000
    .word 0xE4420004
    .word 0xE4410008
    .word 0xE440000C
    lw v0,-31568(gp)
    lhu a3,28(s0)
    lw a2,52(s0)
    lw a1,20(v0)
    jal F189050
    addiu a0,sp,48
    sw v0,56(s0)
    lui v0,0x2f
    addiu a0,s0,48
    addiu a1,v0,3920
    jal F121a58
    sw zero,60(s0)
    lq ra,32(sp)
    lq s0,16(sp)
    lwc1 $f21,4(sp)
    lwc1 $f20,0(sp)
    jr ra
    addiu sp,sp,128
}
