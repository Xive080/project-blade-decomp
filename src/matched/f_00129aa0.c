
asm void func(void) {
    .set noreorder
    .word 0x3c017000
    .word 0x8c263fd8
    .word 0x3c033f80
    lwc1 $f1,0(a0)
    mtc1 v1,$f2
    .word 0x8cc700c0
    lwc1 $f0,12(a3)
    mul.s $f3,$f1,$f0
    .word 0x46001824
    mfc1 t3,$f0
    cvt.s.w $f0,$f0
    sub.s $f3,$f3,$f0
    bgez t3,L129ae4
    sub.s $f4,$f2,$f3
    paddub t3,zero,zero
    b L129b10
    paddub v1,zero,zero
L129ae4:
    .word 0x8ce30018
    addiu v1,v1,-1
    slt at,t3,v1
    beqzl at,L129b0c
    paddub t3,v1,zero
    .word 0x8ce6001c
    .word 0x8ce30020
    b L129b10
    mult v1,a2,v1
    paddub t3,v1,zero
L129b0c:
    paddub v1,zero,zero
L129b10:
    lwc1 $f2,4(a0)
    lwc1 $f1,16(a3)
    .word 0x3c063f80
    mtc1 a2,$f0
    nop
    mul.s $f5,$f2,$f1
    .word 0x46002864
    mfc1 t4,$f1
    cvt.s.w $f1,$f1
    sub.s $f5,$f5,$f1
    bgez t4,L129b4c
    sub.s $f6,$f0,$f5
    paddub t4,zero,zero
    b L129b70
    paddub t6,zero,zero
L129b4c:
    .word 0x8ce6001c
    addiu a2,a2,-1
    slt at,t4,a2
    beqzl at,L129b6c
    paddub t4,a2,zero
    b L129b70
    .word 0x8cee0020
    paddub t4,a2,zero
L129b6c:
    paddub t6,zero,zero
L129b70:
    lwc1 $f2,8(a0)
    lwc1 $f1,20(a3)
    .word 0x3c043f80
    mul.s $f7,$f2,$f1
    .word 0x46003864
    mfc1 t5,$f1
    mtc1 a0,$f0
    nop
    cvt.s.w $f1,$f1
    sub.s $f7,$f7,$f1
    bgez t5,L129bac
    sub.s $f8,$f0,$f7
    paddub t5,zero,zero
    b L129bd0
    paddub a0,zero,zero
L129bac:
    .word 0x8ce40020
    addiu a0,a0,-1
    slt at,t5,a0
    beqzl at,L129bcc
    paddub t5,a0,zero
    b L129bd0
    addiu a0,zero,1
    paddub t5,a0,zero
L129bcc:
    paddub a0,zero,zero
L129bd0:
    .word 0x8ce8001c
    .word 0x8cea0020
    .word 0x8ce90024
    mul.s $f1,$f4,$f6
    sll a2,a0,0x1
    mult t3,t3,t0
    addu a3,a2,a0
    mul.s $f4,$f4,$f5
    sll a2,t6,0x1
    addu t0,a2,t6
    addu a2,t4,t3
    mul.s $f0,$f8,$f1
    mult a2,a2,t2
    addu t3,v1,t6
    addu t4,t5,a2
    mul.s $f6,$f3,$f6
    sll a2,t4,0x1
    addu a2,a2,t4
    addu a2,t1,a2
    mul.s $f9,$f3,$f5
    addu t2,t6,a0
    .word 0x90cc0000
    sll t1,t2,0x1
    addu t1,t1,t2
    mul.s $f2,$f8,$f4
    sll t2,v1,0x1
    addu t2,t2,v1
    addu t6,v1,a0
    mul.s $f3,$f7,$f4
    addu t5,a0,t3
    sll a0,t3,0x1
    addu a0,a0,t3
    mul.s $f1,$f7,$f1
    sll v1,t6,0x1
    sll t3,t5,0x1
    addu v1,v1,t6
    mul.s $f5,$f7,$f6
    addu t3,t3,t5
    addu a3,a2,a3
    mul.s $f4,$f8,$f6
    addu t0,a2,t0
    addu t1,a2,t1
    mul.s $f6,$f8,$f9
    addu t2,a2,t2
    addu v1,a2,v1
    mul.s $f7,$f7,$f9
    addu a0,a2,a0
    bltz t4,L129ca0
    addu t3,a2,t3
    mtc1 t4,$f8
    b L129cbc
    cvt.s.w $f8,$f8
L129ca0:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129cbc:
    .word 0x90ec0000
    bltz t4,L129cd4
    mul.s $f9,$f0,$f8
    mtc1 t4,$f8
    b L129cf0
    cvt.s.w $f8,$f8
L129cd4:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129cf0:
    mul.s $f8,$f1,$f8
    .word 0x910c0000
    bltz t4,L129d0c
    add.s $f9,$f9,$f8
    mtc1 t4,$f8
    b L129d28
    cvt.s.w $f8,$f8
L129d0c:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129d28:
    mul.s $f8,$f2,$f8
    .word 0x912c0000
    bltz t4,L129d44
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    b L129d60
    cvt.s.w $f8,$f8
L129d44:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129d60:
    mul.s $f8,$f3,$f8
    .word 0x914c0000
    bltz t4,L129d7c
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    b L129d98
    cvt.s.w $f8,$f8
L129d7c:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129d98:
    mul.s $f8,$f4,$f8
    .word 0x906c0000
    bltz t4,L129db4
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    b L129dd0
    cvt.s.w $f8,$f8
L129db4:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129dd0:
    mul.s $f8,$f5,$f8
    .word 0x908c0000
    bltz t4,L129dec
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    b L129e08
    cvt.s.w $f8,$f8
L129dec:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129e08:
    mul.s $f8,$f6,$f8
    .word 0x916c0000
    bltz t4,L129e24
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    b L129e40
    cvt.s.w $f8,$f8
L129e24:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129e40:
    mul.s $f8,$f7,$f8
    .word 0x3c0c4000
    add.s $f8,$f8,$f9
    mtc1 t4,$f9
    nop
    mul.s $f8,$f9,$f8
    swc1 $f8,0(a1)
    .word 0x90cc0001
    bltz t4,L129e78
    srl t5,t4,0x1
    mtc1 t4,$f8
    b L129e90
    cvt.s.w $f8,$f8
    srl t5,t4,0x1
L129e78:
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129e90:
    .word 0x90ec0001
    bltz t4,L129ea8
    mul.s $f9,$f0,$f8
    mtc1 t4,$f8
    b L129ec4
    cvt.s.w $f8,$f8
L129ea8:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129ec4:
    mul.s $f8,$f1,$f8
    .word 0x910c0001
    bltz t4,L129ee0
    add.s $f9,$f9,$f8
    mtc1 t4,$f8
    b L129efc
    cvt.s.w $f8,$f8
L129ee0:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129efc:
    mul.s $f8,$f2,$f8
    .word 0x912c0001
    bltz t4,L129f18
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    b L129f34
    cvt.s.w $f8,$f8
L129f18:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129f34:
    mul.s $f8,$f3,$f8
    .word 0x914c0001
    bltz t4,L129f50
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    b L129f6c
    cvt.s.w $f8,$f8
L129f50:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129f6c:
    mul.s $f8,$f4,$f8
    .word 0x906c0001
    bltz t4,L129f88
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    b L129fa4
    cvt.s.w $f8,$f8
L129f88:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129fa4:
    mul.s $f8,$f5,$f8
    .word 0x908c0001
    bltz t4,L129fc0
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    b L129fdc
    cvt.s.w $f8,$f8
L129fc0:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L129fdc:
    mul.s $f8,$f6,$f8
    .word 0x916c0001
    bltz t4,L129ff8
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    b L12a014
    cvt.s.w $f8,$f8
L129ff8:
    srl t5,t4,0x1
    andi t4,t4,0x1
    or t5,t5,t4
    mtc1 t5,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L12a014:
    mul.s $f8,$f7,$f8
    .word 0x3c0c4000
    add.s $f9,$f8,$f9
    mtc1 t4,$f8
    nop
    mul.s $f8,$f8,$f9
    swc1 $f8,4(a1)
    .word 0x90c60002
    bltz a2,L12a04c
    srl t4,a2,0x1
    mtc1 a2,$f8
    b L12a064
    cvt.s.w $f8,$f8
    srl t4,a2,0x1
L12a04c:
    andi a2,a2,0x1
    or t4,t4,a2
    mtc1 t4,$f8
    nop
    cvt.s.w $f8,$f8
    add.s $f8,$f8,$f8
L12a064:
    .word 0x90e60002
    bltz a2,L12a07c
    mul.s $f8,$f0,$f8
    mtc1 a2,$f0
    b L12a098
    cvt.s.w $f0,$f0
L12a07c:
    srl a3,a2,0x1
    andi a2,a2,0x1
    or a3,a3,a2
    mtc1 a3,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L12a098:
    mul.s $f0,$f1,$f0
    .word 0x91060002
    bltz a2,L12a0b4
    add.s $f1,$f8,$f0
    mtc1 a2,$f0
    b L12a0d0
    cvt.s.w $f0,$f0
L12a0b4:
    srl a3,a2,0x1
    andi a2,a2,0x1
    or a3,a3,a2
    mtc1 a3,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L12a0d0:
    mul.s $f0,$f2,$f0
    .word 0x91260002
    bltz a2,L12a0ec
    add.s $f1,$f0,$f1
    mtc1 a2,$f0
    b L12a108
    cvt.s.w $f0,$f0
L12a0ec:
    srl a3,a2,0x1
    andi a2,a2,0x1
    or a3,a3,a2
    mtc1 a3,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L12a108:
    mul.s $f0,$f3,$f0
    .word 0x91460002
    bltz a2,L12a124
    add.s $f1,$f0,$f1
    mtc1 a2,$f0
    b L12a140
    cvt.s.w $f0,$f0
L12a124:
    srl a3,a2,0x1
    andi a2,a2,0x1
    or a3,a3,a2
    mtc1 a3,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L12a140:
    mul.s $f0,$f4,$f0
    .word 0x90630002
    bltz v1,L12a15c
    add.s $f1,$f0,$f1
    mtc1 v1,$f0
    b L12a178
    cvt.s.w $f0,$f0
L12a15c:
    srl a2,v1,0x1
    andi v1,v1,0x1
    or a2,a2,v1
    mtc1 a2,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L12a178:
    mul.s $f0,$f5,$f0
    .word 0x90830002
    bltz v1,L12a194
    add.s $f1,$f0,$f1
    mtc1 v1,$f0
    b L12a1b0
    cvt.s.w $f0,$f0
L12a194:
    srl a0,v1,0x1
    andi v1,v1,0x1
    or a0,a0,v1
    mtc1 a0,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L12a1b0:
    mul.s $f0,$f6,$f0
    .word 0x91630002
    bltz v1,L12a1cc
    add.s $f1,$f0,$f1
    mtc1 v1,$f0
    b L12a1e8
    cvt.s.w $f0,$f0
L12a1cc:
    srl a0,v1,0x1
    andi v1,v1,0x1
    or a0,a0,v1
    mtc1 a0,$f0
    nop
    cvt.s.w $f0,$f0
    add.s $f0,$f0,$f0
L12a1e8:
    mul.s $f0,$f7,$f0
    .word 0x3c034000
    add.s $f1,$f0,$f1
    mtc1 v1,$f0
    nop
    mul.s $f0,$f0,$f1
    jr ra
    swc1 $f0,8(a1)
}
