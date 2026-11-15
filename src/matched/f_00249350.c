extern void func_001332a0(void);
extern void func_0013b550(void);
extern void func_0016f130(void);
extern void func_00170ce0(void);
extern void func_001b4ab0(void);
extern void func_001ba140(void);
asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c020033
    addiu v1,v0,10944
    .word 0x78660000
    .word 0x78650010
    .word 0x3c020033
    addiu a3,v0,12496
    .word 0xdc640020
    .word 0x3c020025
    .word 0x3c010033
    addiu v1,v0,-25680
    .word 0x7ce60000
    .word 0x7ce50010
    .word 0xfce40020
    .word 0x3c020025
    sw v1,12496(at)
    addiu v0,v0,-26144
    .word 0x3c010033
    sw v0,12504(at)
    .word 0x3c020025
    addiu v0,v0,-26832
    .word 0x3c010033
    sw v0,12524(at)
    .word 0x3c020025
    addiu v0,v0,-25360
    .word 0x3c010033
    sw v0,12532(at)
    .word 0x3c020025
    addiu v0,v0,-25968
    .word 0x3c010033
    sw v0,12500(at)
    .word 0x3c020025
    addiu v0,v0,-25744
    .word 0x3c010033
    sw v0,12520(at)
    .word 0x3c020025
    addiu v0,v0,-27264
    .word 0x3c010033
    sw v0,12528(at)
    .word 0x3c020033
    addiu v0,v0,12496
    .word 0x3c010033
    sw v0,12544(at)
    .word 0x3c020033
    .word 0x3c010033
    addiu a1,v0,12544
    addiu a0,zero,6
    j func_001332a0
    sw zero,12548(at)
    addiu sp,sp,-96
    sq ra,80(sp)
    sq s4,64(sp)
    sq s3,48(sp)
    sq s2,32(sp)
    sq s1,16(sp)
    .word 0x3c020033
    addiu s1,v0,-26768
    .word 0x3c020030
    sq s0,0(sp)
    .word 0x3c017000
    lw s0,16340(at)
    addiu s2,v0,29208
    jal func_00170ce0
    addiu a0,zero,-17
    .word 0x3c020033
    addiu a0,v0,-26768
    jal func_001ba140
    addiu a1,zero,7
    addiu v0,zero,8
    sw v0,0(s2)
    .word 0x3c010033
    lbu a0,-23176(at)
    .word 0x70009e28
    .word 0x3c010033
    lbu v1,-23175(at)
    .word 0x3c010033
    lbu v0,-23174(at)
    addu v1,a0,v1
    addu v1,v0,v1
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x3
    addu v0,s2,v0
    b L249518
    addiu s2,v0,4
L2494a0:
    lbu a2,3592(s1)
    lbu v1,3593(s1)
    lbu v0,3594(s1)
    .word 0x3c010030
    lbu a0,-23009(at)
    .word 0x72602e28
    addu v1,a2,v1
    addu v0,v0,v1
    addu v1,s3,v0
    sll v0,v1,0x3
    subu v0,v0,v1
    sll v0,v0,0x4
    jal func_001b4ab0
    addu s4,s1,v0
    beqzl v0,L249514
    addiu s2,s2,24
    lw v0,0(s2)
    ori v0,v0,0x2
    sw v0,0(s2)
    lw v0,4(s4)
    bnez v0,L249510
    nop
    .word 0x3c020025
    addiu a1,v0,-25616
    .word 0x72803628
    jal func_0016f130
    .word 0x3c0400ac
    nop
L249510:
    addiu s2,s2,24
L249514:
    addiu s3,s3,1
L249518:
    lbu v0,3595(s1)
    slt v0,s3,v0
    bnez v0,L2494a0
    nop
    addiu v0,zero,5
    sw v0,12(s0)
    lw a0,-31960(gp)
    jal func_0013b550
    addiu a1,zero,521
    lw a0,-31572(gp)
    beqz a0,L249554
    .word 0x70403628
    lw v0,16(a0)
    jalr ra,v0
    addiu a1,zero,8
L249554:
    lq ra,80(sp)
    lq s4,64(sp)
    lq s3,48(sp)
    lq s2,32(sp)
    lq s1,16(sp)
    lq s0,0(sp)
    jr ra
    addiu sp,sp,96
}
