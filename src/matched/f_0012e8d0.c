asm void f(void) {
    .set noreorder
    .set noat
    .word 0x3c010030
    lw a3,-23704(at)
    andi v1,a3,0x1
    beqz v1,L12e904
    addiu t0,zero,1
    lui v1,0x30
    andi a2,a3,0x2
    andi t1,a3,0x4
    andi a3,a3,0x8
    beqz a3,L12e914
    addiu v1,v1,-30976
    b L12e914
    addiu t0,zero,2
L12e904:
    lui v1,0x30
    addiu v1,v1,-27400
    andi a2,a3,0x10
    andi t1,a3,0x20
L12e914:
    lui a3,0x3000
    sltiu at,a0,8
    beqz at,L12eb08
    addu a3,v1,a3
    lui t2,0x2f
    addiu t3,t2,-16288
    sll t2,a0,0x2
    addu t2,t2,t3
    lw t2,0(t2)
    jr t2
    nop
    andi t3,a1,0xff
    bgez t3,L12e958
    andi t2,t3,0x3f
    beqz t2,L12e95c
    addiu a3,zero,1
    addiu t2,t2,-64
L12e958:
    addiu a3,zero,1
L12e95c:
    dsllv t2,a3,t2
    bgez t3,L12e970
    sra a3,t3,0x6
    addiu a3,t3,63
    sra a3,a3,0x6
L12e970:
    sll a3,a3,0x3
    addu a3,v1,a3
    ld v1,0(a3)
    or v1,v1,t2
    beqz a2,L12e998
    sd v1,0(a3)
    ld v1,32(a3)
    or v1,v1,t2
    sd v1,32(a3)
    nop
L12e998:
    beqz t1,L12eb08
    nop
    ld v1,64(a3)
    or v1,v1,t2
    b L12eb08
    sd v1,64(a3)
    lw a2,100(v1)
    sll a2,a2,0x2
    addu a2,a3,a2
    sw a1,248(a2)
    lw a2,100(v1)
    addiu a2,a2,1
    b L12eb08
    sw a2,100(v1)
    .word 0x3c010030
    lw a2,-23704(at)
    andi a2,a2,0x2
    beqz a2,L12e9f0
    nop
    lbu a2,6(a1)
    ori a2,a2,0x1
    sb a2,6(a1)
L12e9f0:
    .word 0x3c010030
    lw a2,-23704(at)
    andi a2,a2,0x10
    beqz a2,L12ea10
    nop
    lbu a2,6(a1)
    ori a2,a2,0x2
    sb a2,6(a1)
L12ea10:
    lw a2,104(v1)
    lwc1 $f1,0(a1)
    lwc1 $f0,4(a1)
    sll a2,a2,0x3
    addu a2,a3,a2
    swc1 $f1,504(a2)
    swc1 $f0,508(a2)
    lw a2,104(v1)
    addiu a2,a2,1
    b L12eb08
    sw a2,104(v1)
    .word 0x3c010030
    lw a2,-23704(at)
    andi a2,a2,0x2
    beqz a2,L12ea60
    nop
    lbu a2,6(a1)
    ori a2,a2,0x1
    sb a2,6(a1)
    nop
L12ea60:
    .word 0x3c010030
    lw a2,-23704(at)
    andi a2,a2,0x10
    beqz a2,L12ea80
    nop
    lbu a2,6(a1)
    ori a2,a2,0x2
    sb a2,6(a1)
L12ea80:
    lw a2,108(v1)
    lwc1 $f1,0(a1)
    lwc1 $f0,4(a1)
    sll a2,a2,0x3
    addu a2,a3,a2
    swc1 $f1,2904(a2)
    swc1 $f0,2908(a2)
    lw a2,108(v1)
    addiu a2,a2,1
    b L12eb08
    sw a2,108(v1)
    lw a2,112(v1)
    sll a2,a2,0x2
    addu a2,a3,a2
    sw a1,3416(a2)
    lw a2,112(v1)
    addiu a2,a2,1
    b L12eb08
    sw a2,112(v1)
    lw a2,96(v1)
    sll a2,a2,0x2
    addu a2,a3,a2
    sw a1,120(a2)
    lw a2,96(v1)
    addiu a2,a2,1
    b L12eb08
    sw a2,96(v1)
    lw a2,116(v1)
    sll a2,a2,0x2
    addu a2,a3,a2
    sw a1,3448(a2)
    lw a2,116(v1)
    addiu a2,a2,1
    sw a2,116(v1)
L12eb08:
    .word 0x3c010030
    lw a2,-23704(at)
    lui v1,0x30
    addiu t0,t0,-1
    addiu v1,v1,-27400
    bgtz t0,L12e914
    andi a2,a2,0x10
    jr ra
    nop
}
