
asm void func(void) {
    .set noreorder
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0x8c820030
    .word 0x8c850004
    .word 0x70005e28
    .word 0x70006628
    .word 0x8c420000
    .word 0x90a800c2
    .word 0x8c460020
    .word 0x8c4a0024
    .word 0x8c470034
    .word 0x8c490038
    addiu v1,v0,24
    pcpyld t7,t3,t4
    .word 0x8c82000c
    .word 0x8c420000
    andi v0,v0,0x1
    beqz v0,L21c664
    addiu v0,a3,-1
    sll v0,v0,0x1
    addu t2,t2,v0
    addiu t3,zero,2
L21c664:
    .word 0x70c03e28
    .word 0x70006628
    b L21ceb8
    .word 0x70006e28
L21c674:
    .word 0x8c62001c
    addiu v0,v0,-1
    slt at,t5,v0
    beqz at,L21c690
    nop
    b L21c6a8
    .word 0x8c780018
L21c690:
    .word 0x8c6e001c
    .word 0x8c620018
    addiu t6,t6,-1
    .word 0x01c21018
    subu t8,t2,v0
    nop
L21c6a8:
    bnez t1,L21c6b4
    .word 0x01a9001b
    .word 0x000001cd
L21c6b4:
    mfhi v0
    bnez v0,L21c744
    .word 0x70007628
    subu t6,a2,a3
    bgez t6,L21c6d4
    sra v0,t6,0x4
    addiu v0,t6,15
    sra v0,v0,0x4
L21c6d4:
    addiu t6,v0,-1
    .word 0x3c021000
    or v0,t6,v0
    dsll32 s0,v0,0x0
    bnez t5,L21c700
    dsra32 s0,s0,0x0
    .word 0x3c110600
    dsll s1,s1,0x10
    ori s1,s1,0x1100
    b L21c708
    dsll s1,s1,0x10
L21c700:
    .word 0x70008e28
    nop
L21c708:
    pcpyld s1,s1,s0
    .word 0x90a200c0
    beqz v0,L21c730
    nop
    beqz t5,L21c730
    nop
    .word 0xfcf00000
    .word 0x70c03e28
    b L21c740
    addiu t4,zero,1
L21c730:
    .word 0x7cf10000
    .word 0x70c03e28
    addiu a2,a2,16
    nop
L21c740:
    .word 0x70007628
L21c744:
    b L21c93c
    .word 0x8c820024
    sll v0,t6,0x3
L21c750:
    addu v0,a1,v0
    addiu s0,v0,44
    .word 0x8c42002c
    andi v0,v0,0x1
    beqzl v0,L21c934
    addiu t6,t6,1
    .word 0x8e100000
    andi v0,s0,0x2000
    bnez v0,L21c930
    .word 0x3c02ff00
    and s0,s0,v0
    .word 0x3c026c00
    beq s0,v0,L21c7f8
    addiu t9,zero,4
    .word 0x3c026800
    beq s0,v0,L21c7ec
    addiu t9,zero,3
    .word 0x3c026d00
    beq s0,v0,L21c7e0
    addiu t9,zero,2
    .word 0x3c026400
    beq s0,v0,L21c7dc
    .word 0x3c026500
    beq s0,v0,L21c7d4
    addiu t9,zero,1
    .word 0x3c026e00
    beq s0,v0,L21c7d0
    .word 0x3c026000
    beq s0,v0,L21c7d0
    nop
    b L21c7f4
    nop
L21c7d0:
    addiu t9,zero,1
L21c7d4:
    b L21c7fc
    sll v0,t6,0x1
L21c7dc:
    addiu t9,zero,2
L21c7e0:
    b L21c7f8
    nop
    addiu t9,zero,3
L21c7ec:
    b L21c7f8
    nop
L21c7f4:
    addiu t9,zero,4
L21c7f8:
    sll v0,t6,0x1
L21c7fc:
    addu v0,v0,t6
    sll v0,v0,0x3
    addu s0,v0,v1
    .word 0x8c820024
    beqz v0,L21c820
    .word 0x8e110090
    .word 0x8e110094
    nop
    nop
L21c820:
    .word 0x8c7f0018
    sll v0,t5,0x2
    .word 0x03228018
    sll s2,s1,0x4
    .word 0x8c710008
    subu ra,ra,t3
    .word 0x03f0f818
    .word 0x73191018
    addiu v0,v0,3
    sra s0,v0,0x2
    addu v0,s1,s2
    dsll32 s1,ra,0x0
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    dsrl32 s1,s1,0x0
    daddu v0,v0,s1
    dsll32 s1,v0,0x0
    .word 0x3c023000
    or v0,s0,v0
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    or s0,v0,s1
    sll v0,t6,0x3
    addu v0,v0,a1
    lwu s1,44(v0)
    .word 0x0319f818
    addiu s2,zero,-4
    addiu v0,ra,3
    and v0,v0,s2
    subu ra,v0,ra
    ori v0,zero,0xff00
    dsll v0,v0,0x10
    ori v0,v0,0x4000
    and v0,s1,v0
    sll s1,t6,0x1
    addu s1,s1,t6
    sll s1,s1,0x3
    addu s1,s1,v1
    .word 0x9232009e
    ori v0,v0,0x8000
    addiu s1,t9,-1
    addu ra,ra,s1
    .word 0x03f9001a
    dsll32 s1,s2,0x0
    dsra32 s1,s1,0x0
    bnez t9,L21c8e0
    or s1,v0,s1
    .word 0x000001cd
L21c8e0:
    mflo t9
    .word 0x3c020100
    ori v0,v0,0x100
    addu t9,t8,t9
    sll t9,t9,0x10
    or s1,s1,t9
    dsll32 t9,s1,0x0
    or t9,t9,v0
    dsll32 v0,t0,0x0
    dsrl32 v0,v0,0x0
    or s1,t9,v0
    pcpyld s1,s1,s0
    .word 0x7cf10000
    .word 0x3c101000
    .word 0x70001628
    pcpyld s1,v0,s0
    .word 0x7cd10000
    addiu a2,a2,16
    .word 0x70c03e28
    addiu a2,a2,16
L21c930:
    addiu t6,t6,1
L21c934:
    nop
    .word 0x8c820024
L21c93c:
    addiu v0,v0,9
    slt v0,t6,v0
    bnez v0,L21c750
    sll v0,t6,0x3
    b L21ce60
    .word 0x70007628
    sll v0,t6,0x3
L21c958:
    addu v0,a1,v0
    addiu s0,v0,44
    .word 0x8c42002c
    andi v0,v0,0x1
    beqzl v0,L21ce5c
    addiu t6,t6,1
    .word 0x8e020000
    andi v0,v0,0x2000
    beqz v0,L21ce58
    addiu v0,zero,10
    beq t6,v0,L21cdbc
    addiu v0,zero,9
    beq t6,v0,L21cd28
    addiu v0,zero,4
    beq t6,v0,L21cc78
    addiu v0,zero,3
    beq t6,v0,L21cbcc
    addiu v0,zero,2
    beq t6,v0,L21cb1c
    addiu v0,zero,1
    beq t6,v0,L21ca70
    nop
    beqz t6,L21c9c0
    nop
    b L21ce58
    nop
L21c9c0:
    beqz t4,L21c9d4
    nop
    .word 0xdcd00000
    b L21c9f8
    .word 0x70006628
L21c9d4:
    .word 0x8f828128
    .word 0x97998128
    .word 0x3c100500
    dsll s0,s0,0x10
    ori s0,s0,0x700
    dsll s0,s0,0x10
    addiu v0,v0,1
    or s0,t9,s0
    .word 0xaf828128
L21c9f8:
    sll v0,t6,0x1
    addu v0,v0,t6
    sll v0,v0,0x3
    addu v0,v0,v1
    .word 0x905f009e
    sll t9,t8,0x10
    .word 0x3c026800
    ori v0,v0,0x8000
    or t9,t9,v0
    .word 0x3c020100
    dsll32 ra,ra,0x0
    ori v0,v0,0x100
    dsra32 ra,ra,0x0
    or v0,t0,v0
    or t9,t9,ra
    dsll32 v0,v0,0x0
    dsll32 t9,t9,0x0
    dsrl32 v0,v0,0x0
    or s1,v0,t9
    pcpyld s1,s1,s0
    sll v0,t8,0x1
    addu v0,v0,t8
    addiu v0,v0,3
    sra v0,v0,0x2
    .word 0x7cd10000
    sll v0,v0,0x4
    addu a2,a2,v0
    .word 0x7ccf0000
    b L21ce58
    addiu a2,a2,16
L21ca70:
    beqz t4,L21ca84
    nop
    .word 0xdcd00000
    b L21caa8
    .word 0x70006628
L21ca84:
    .word 0x8f828128
    .word 0x97998128
    .word 0x3c100500
    dsll s0,s0,0x10
    ori s0,s0,0x700
    dsll s0,s0,0x10
    addiu v0,v0,1
    or s0,t9,s0
    .word 0xaf828128
L21caa8:
    sll v0,t6,0x1
    addu v0,v0,t6
    sll v0,v0,0x3
    addu v0,v0,v1
    .word 0x905f009e
    sll t9,t8,0x10
    .word 0x3c026400
    ori v0,v0,0x8000
    or t9,t9,v0
    .word 0x3c020100
    dsll32 ra,ra,0x0
    ori v0,v0,0x100
    dsra32 ra,ra,0x0
    or v0,t0,v0
    or t9,t9,ra
    dsll32 v0,v0,0x0
    dsll32 t9,t9,0x0
    dsrl32 v0,v0,0x0
    or s1,v0,t9
    pcpyld s1,s1,s0
    sll v0,t8,0x1
    addiu v0,v0,3
    sra v0,v0,0x2
    .word 0x7cd10000
    sll v0,v0,0x4
    addu a2,a2,v0
    .word 0x7ccf0000
    b L21ce58
    addiu a2,a2,16
L21cb1c:
    beqz t4,L21cb30
    nop
    .word 0xdcd00000
    b L21cb58
    .word 0x70006628
L21cb30:
    .word 0x8f828128
    .word 0x97998128
    .word 0x3c100500
    dsll s0,s0,0x10
    ori s0,s0,0x700
    dsll s0,s0,0x10
    addiu v0,v0,1
    or s0,t9,s0
    .word 0xaf828128
    nop
L21cb58:
    sll v0,t6,0x1
    addu v0,v0,t6
    sll v0,v0,0x3
    addu v0,v0,v1
    .word 0x905f009e
    sll t9,t8,0x10
    .word 0x3c026c00
    ori v0,v0,0x8000
    or t9,t9,v0
    .word 0x3c020100
    dsll32 ra,ra,0x0
    ori v0,v0,0x100
    dsra32 ra,ra,0x0
    or v0,t0,v0
    or t9,t9,ra
    dsll32 v0,v0,0x0
    dsll32 t9,t9,0x0
    dsrl32 v0,v0,0x0
    or s1,v0,t9
    pcpyld s1,s1,s0
    sll v0,t8,0x2
    addiu v0,v0,3
    sra v0,v0,0x2
    .word 0x7cd10000
    sll v0,v0,0x4
    addu a2,a2,v0
    .word 0x7ccf0000
    b L21ce58
    addiu a2,a2,16
L21cbcc:
    beqz t4,L21cbe0
    nop
    .word 0xdcd00000
    b L21cc08
    .word 0x70006628
L21cbe0:
    .word 0x8f828128
    .word 0x97998128
    .word 0x3c100500
    dsll s0,s0,0x10
    ori s0,s0,0x700
    dsll s0,s0,0x10
    addiu v0,v0,1
    or s0,t9,s0
    .word 0xaf828128
    nop
L21cc08:
    sll v0,t6,0x1
    addu v0,v0,t6
    sll v0,v0,0x3
    addu v0,v0,v1
    .word 0x905f009e
    sll t9,t8,0x10
    .word 0x3c026e00
    ori v0,v0,0xc000
    or t9,t9,v0
    .word 0x3c020100
    dsll32 ra,ra,0x0
    ori v0,v0,0x100
    dsra32 ra,ra,0x0
    or v0,t0,v0
    or t9,t9,ra
    dsll32 v0,v0,0x0
    dsll32 t9,t9,0x0
    dsrl32 v0,v0,0x0
    or s1,v0,t9
    pcpyld s1,s1,s0
    addiu v0,t8,3
    sra v0,v0,0x2
    .word 0x7cd10000
    sll v0,v0,0x4
    addu a2,a2,v0
    .word 0x7ccf0000
    b L21ce58
    addiu a2,a2,16
L21cc78:
    beqz t4,L21cc8c
    nop
    .word 0xdcd00000
    b L21ccb0
    .word 0x70006628
L21cc8c:
    .word 0x8f828128
    .word 0x97998128
    .word 0x3c100500
    dsll s0,s0,0x10
    ori s0,s0,0x700
    dsll s0,s0,0x10
    addiu v0,v0,1
    or s0,t9,s0
    .word 0xaf828128
L21ccb0:
    sll v0,t6,0x1
    addu v0,v0,t6
    sll v0,v0,0x3
    addu v0,v0,v1
    .word 0x905f009e
    sll t9,t8,0x10
    .word 0x3c026a00
    ori v0,v0,0x8000
    or t9,t9,v0
    .word 0x3c020100
    dsll32 ra,ra,0x0
    ori v0,v0,0x100
    dsra32 ra,ra,0x0
    or v0,t0,v0
    or t9,t9,ra
    dsll32 v0,v0,0x0
    dsll32 t9,t9,0x0
    dsrl32 v0,v0,0x0
    or s1,v0,t9
    pcpyld s1,s1,s0
    sll v0,t8,0x1
    addu v0,v0,t8
    addiu s0,v0,15
    addiu v0,zero,-16
    .word 0x7cd10000
    and v0,s0,v0
    addu a2,a2,v0
    .word 0x7ccf0000
    b L21ce58
    addiu a2,a2,16
L21cd28:
    beqz t4,L21cd3c
    nop
    .word 0xdcd00000
    b L21cd60
    .word 0x70006628
L21cd3c:
    .word 0x8f828128
    .word 0x97998128
    .word 0x3c100500
    dsll s0,s0,0x10
    ori s0,s0,0x700
    dsll s0,s0,0x10
    addiu v0,v0,1
    or s0,t9,s0
    .word 0xaf828128
L21cd60:
    .word 0x3c026800
    sll t9,t8,0x10
    ori v0,v0,0x8000
    or ra,t9,v0
    .word 0x0308c818
    .word 0x3c020100
    ori v0,v0,0x404
    dsll32 t9,t9,0x0
    dsrl32 t9,t9,0x0
    or t9,ra,t9
    dsll32 t9,t9,0x0
    or s1,t9,v0
    pcpyld s1,s1,s0
    sll v0,t8,0x1
    addu v0,v0,t8
    addiu v0,v0,3
    sra v0,v0,0x2
    .word 0x7cd10000
    sll v0,v0,0x4
    addu a2,a2,v0
    .word 0x7ccf0000
    b L21ce58
    addiu a2,a2,16
L21cdbc:
    beqz t4,L21cdd0
    nop
    .word 0xdcd00000
    b L21cdf8
    .word 0x70006628
L21cdd0:
    .word 0x8f828128
    .word 0x97998128
    .word 0x3c100500
    dsll s0,s0,0x10
    ori s0,s0,0x700
    dsll s0,s0,0x10
    addiu v0,v0,1
    or s0,t9,s0
    .word 0xaf828128
    nop
L21cdf8:
    .word 0x3c026a00
    sll t9,t8,0x10
    ori v0,v0,0x8000
    or ra,t9,v0
    addiu v0,t0,1
    .word 0x0302c818
    dsll32 t9,t9,0x0
    dsrl32 t9,t9,0x0
    .word 0x3c020100
    or t9,ra,t9
    ori v0,v0,0x404
    dsll32 t9,t9,0x0
    or s1,t9,v0
    pcpyld s1,s1,s0
    sll v0,t8,0x1
    addu v0,v0,t8
    addiu s0,v0,15
    addiu v0,zero,-16
    .word 0x7cd10000
    and v0,s0,v0
    addu a2,a2,v0
    .word 0x7ccf0000
    addiu a2,a2,16
    nop
L21ce58:
    addiu t6,t6,1
L21ce5c:
    nop
L21ce60:
    .word 0x8c820024
    addiu v0,v0,9
    slt v0,t6,v0
    bnez v0,L21c958
    sll v0,t6,0x3
    bnez t5,L21ce88
    .word 0x3c021700
    b L21ce88
    .word 0x3c021500
    .word 0x3c021700
L21ce88:
    dsll32 s0,v0,0x0
    .word 0x3c020400
    or v0,t8,v0
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    or s0,s0,v0
    .word 0x70001628
    pcpyld s1,v0,s0
    .word 0x7cd10000
    addiu a2,a2,16
    addiu t5,t5,1
    nop
L21ceb8:
    .word 0x8c62001c
    slt v0,t5,v0
    bnez v0,L21c674
    .word 0x3c020600
    dsll v0,v0,0x10
    ori v0,v0,0x1100
    dsll v0,v0,0x10
    .word 0xfcc2fff8
    subu v1,a2,a3
    bgez v1,L21ceec
    sra v0,v1,0x4
    addiu v0,v1,15
    sra v0,v0,0x4
L21ceec:
    addiu v1,v0,-1
    .word 0x3c026000
    or v0,v1,v0
    dsll32 s0,v0,0x0
    dsra32 s0,s0,0x0
    .word 0xfcf00000
    .word 0x90a200c0
    bnez v0,L21cf14
    nop
    .word 0xfce00008
L21cf14:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,64
}
