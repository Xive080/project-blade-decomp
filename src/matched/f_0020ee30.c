extern void func_00211390(void);
extern void func_001c9840(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-80
    sq ra,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    sq s0,0(sp)
    lw s1,0(a0)
    .word 0x70808628
    .word 0x72201628
    beqz v0,L20eeb8
    addiu s1,s1,-1
    sll v0,s1,0x2
    addu s3,s0,v0
L20ee64:
    lw s2,4(s3)
    beqz s2,L20eeac
    .word 0x72201628
    lw v0,0(s2)
    bne zero,v0,L20eea0
    nop
    lw v0,4(s2)
    bne zero,v0,L20eea0
    .word 0x72402628
    jal func_00211390
    nop
    jal func_001c9840
    .word 0x72402628
    b L20eea8
    nop
L20eea0:
    sw zero,16(s2)
    nop
L20eea8:
    .word 0x72201628
L20eeac:
    addiu s3,s3,-4
    bnez v0,L20ee64
    addiu s1,s1,-1
L20eeb8:
    .word 0x3c020033
    addiu v0,v0,-23008
    lw v0,308(v0)
    jalr ra,v0
    .word 0x72002628
    lq ra,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,80
}
