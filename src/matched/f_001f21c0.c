extern void func_001dcb40(void);
extern void func_001dcd40(void);
extern void func_001dee30(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-176
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    .word 0xafa500ac
    .word 0x8fa200ac
    .word 0x7080b628
    .word 0x7120a628
    .word 0x70c0ae28
    .word 0x70e09628
    .word 0x71008e28
    .word 0x02c21018
    .word 0x71409e28
    .word 0x7160be28
    .word 0x02821018
    srl v0,v0,0x3
    dsll32 s0,v0,0x0
    jal func_001dcb40
    dsrl32 s0,s0,0x0
    daddiu v0,s0,15
    dsrl v0,v0,0x4
    daddiu v0,v0,7
    dsll32 a1,v0,0x0
    dsra32 a1,a1,0x0
    jal func_001dcd40
    addiu a0,zero,1
    .word 0x3c061000
    dsll32 a2,a2,0x0
    ori a2,a2,0x5
    addiu a1,zero,14
    pcpyld a0,a1,a2
    .word 0x8f878690
    dsll32 a2,s3,0x0
    dsll32 v0,s1,0x0
    dsrl32 a2,a2,0x0
    dsrl32 v0,v0,0x0
    dsll32 v1,v0,0x10
    dsll32 a1,a2,0x18
    andi v0,s2,0x3fff
    or v1,a1,v1
    .word 0x7ce40000
    dsll32 v0,v0,0x0
    or v1,v0,v1
    dsll v0,a2,0x18
    or v1,v0,v1
    .word 0x3c02000a
    or a2,v1,v0
    .word 0x8f858690
    .word 0x3c010033
    .word 0x7824f740
    addiu v1,zero,80
    addiu v0,a1,16
    .word 0xaf828690
    .word 0x8f828690
    .word 0x7c440000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    pcpyld a1,v1,a2
    .word 0x8fa200ac
    .word 0x8f848690
    .word 0x3c010033
    addiu a3,zero,82
    dsll32 v0,v0,0x0
    dsrl32 v0,v0,0x0
    dsll32 v1,v0,0x0
    dsll32 v0,s6,0x0
    dsrl32 v0,v0,0x0
    or a2,v1,v0
    .word 0x7c850000
    .word 0x8f828690
    .word 0x7823f750
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    pcpyld v1,a3,a2
    daddiu v0,s0,15
    dsrl s2,v0,0x4
    .word 0x8f828690
    .word 0x3c010033
    .word 0x7c430000
    .word 0x8f828690
    .word 0x7823f760
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x8f828690
    sltiu at,s2,1006
    .word 0x7c430000
    .word 0x8f828690
    addiu v0,v0,16
    bnez at,L1f2364
    .word 0xaf828690
    b L1f2368
    addiu v1,zero,1005
L1f2364:
    .word 0x72401e28
L1f2368:
    sltiu at,s2,1006
    bnez at,L1f2378
    addiu v0,zero,1
    addiu v0,zero,1
L1f2378:
    sll v0,v0,0xf
    or v1,v0,v1
    .word 0x3c020800
    dsll32 v0,v0,0x0
    or a2,v1,v0
    .word 0x70001628
    pcpyld a0,v0,a2
    sll v0,s7,0x3
    .word 0x0054001b
    .word 0x8f878690
    .word 0x70001e28
    .word 0x70003628
    .word 0x70002e28
    .word 0x72a08628
    .word 0x72a08e28
    .word 0x7ce40000
    .word 0x8f848690
    addiu a0,a0,16
    .word 0xaf848690
    bnez s4,L1f23d0
    .word 0x70001628
    .word 0x000001cd
L1f23d0:
    mflo a3
    addiu a0,zero,32
    beq s4,a0,L1f2850
    subu s7,a3,s6
    addiu a0,zero,16
    beq s4,a0,L1f26f0
    .word 0x7000f628
    addiu a0,zero,8
    beq s4,a0,L1f2590
    .word 0x7000f628
    addiu a0,zero,4
    beq s4,a0,L1f240c
    .word 0x7000f628
    b L1f2854
    .word 0x7000f628
L1f240c:
    b L1f257c
    .word 0x8fa400ac
L1f2414:
    b L1f2550
    .word 0x70009e28
    andi a0,v0,0x4
L1f2420:
    beqz a0,L1f243c
    nop
    .word 0x92a40000
    dsrl a0,a0,0x4
    andi a3,a0,0xf
    b L1f2448
    addiu s5,s5,1
L1f243c:
    .word 0x92a40000
    andi a3,a0,0xf
    nop
L1f2448:
    sltiu at,v0,64
    beqz at,L1f2464
    addiu a0,v0,-64
    dsllv a0,a3,v0
    b L1f2470
    or a2,a2,a0
    addiu a0,v0,-64
L1f2464:
    dsllv a0,a3,a0
    or a1,a1,a0
    nop
L1f2470:
    addu v0,v0,s4
    sltiu a0,v0,128
    bnezl a0,L1f254c
    addiu s3,s3,1
    pcpyld a1,a1,a2
    .word 0x8f848690
    addiu v1,v1,1
    sltiu v0,v1,1005
    .word 0x7c850000
    .word 0x8f848690
    addiu a0,a0,16
    bnez v0,L1f2538
    .word 0xaf848690
    daddiu s2,s2,-1005
    beqz s2,L1f253c
    .word 0x70001628
    jal func_001dcb40
    nop
    daddiu v0,s2,4
    dsll32 a1,v0,0x0
    dsra32 a1,a1,0x0
    jal func_001dcd40
    addiu a0,zero,1
    sltiu at,s2,1006
    bnez at,L1f24e4
    .word 0x72401e28
    b L1f24e8
    addiu v1,zero,1005
    .word 0x72401e28
L1f24e4:
    nop
L1f24e8:
    sltiu at,s2,1006
    bnez at,L1f2500
    addiu v0,zero,1
    b L1f2500
    addiu v0,zero,1
    addiu v0,zero,1
L1f2500:
    dsll v0,v0,0xf
    or v1,v0,v1
    .word 0x3c020800
    dsll32 v0,v0,0x0
    or a2,v1,v0
    .word 0x70001628
    pcpyld a0,v0,a2
    .word 0x8f828690
    .word 0x70001e28
    .word 0x7c440000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    nop
L1f2538:
    .word 0x70001628
L1f253c:
    .word 0x70003628
    .word 0x70002e28
    nop
    addiu s3,s3,1
L1f254c:
    nop
L1f2550:
    sltu a0,s3,s6
    bnez a0,L1f2420
    andi a0,v0,0x4
    sll a0,s7,0x1
    addu s0,s0,a0
    sll a0,s7,0x2
    addu s5,s5,s7
    addu s1,s1,a0
    addiu s8,s8,1
    nop
    .word 0x8fa400ac
L1f257c:
    sltu a0,s8,a0
    bnez a0,L1f2414
    nop
    b L1f29a8
    nop
L1f2590:
    b L1f26dc
    .word 0x8fa400ac
L1f2598:
    b L1f26b0
    .word 0x70009e28
    sltiu at,v0,64
L1f25a4:
    beqz at,L1f25bc
    nop
    .word 0x92a40000
    dsllv a0,a0,v0
    b L1f25d0
    or a2,a2,a0
L1f25bc:
    .word 0x92a70000
    addiu a0,v0,-64
    dsllv a0,a3,a0
    or a1,a1,a0
    nop
L1f25d0:
    addu v0,v0,s4
    sltiu a0,v0,128
    bnez a0,L1f26a8
    addiu s5,s5,1
    pcpyld a1,a1,a2
    .word 0x8f848690
    addiu v1,v1,1
    sltiu v0,v1,1005
    .word 0x7c850000
    .word 0x8f848690
    addiu a0,a0,16
    bnez v0,L1f2698
    .word 0xaf848690
    daddiu s2,s2,-1005
    beqz s2,L1f269c
    .word 0x70001628
    jal func_001dcb40
    nop
    daddiu v0,s2,4
    dsll32 a1,v0,0x0
    dsra32 a1,a1,0x0
    jal func_001dcd40
    addiu a0,zero,1
    sltiu at,s2,1006
    bnez at,L1f2644
    .word 0x72401e28
    b L1f2648
    addiu v1,zero,1005
    .word 0x72401e28
L1f2644:
    nop
L1f2648:
    sltiu at,s2,1006
    bnez at,L1f2660
    addiu v0,zero,1
    b L1f2660
    addiu v0,zero,1
    addiu v0,zero,1
L1f2660:
    dsll v0,v0,0xf
    or v1,v0,v1
    .word 0x3c020800
    dsll32 v0,v0,0x0
    or a2,v1,v0
    .word 0x70001628
    pcpyld a0,v0,a2
    .word 0x8f828690
    .word 0x70001e28
    .word 0x7c440000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    nop
L1f2698:
    .word 0x70001628
L1f269c:
    .word 0x70003628
    .word 0x70002e28
    nop
L1f26a8:
    addiu s3,s3,1
    nop
L1f26b0:
    sltu a0,s3,s6
    bnez a0,L1f25a4
    sltiu at,v0,64
    sll a0,s7,0x1
    addu s0,s0,a0
    sll a0,s7,0x2
    addu s5,s5,s7
    addu s1,s1,a0
    addiu s8,s8,1
    nop
    .word 0x8fa400ac
L1f26dc:
    sltu a0,s8,a0
    bnez a0,L1f2598
    nop
    b L1f29a8
    nop
L1f26f0:
    b L1f283c
    .word 0x8fa400ac
L1f26f8:
    b L1f2810
    .word 0x70009e28
    sltiu at,v0,64
L1f2704:
    beqz at,L1f271c
    nop
    .word 0x96040000
    dsllv a0,a0,v0
    b L1f2730
    or a2,a2,a0
L1f271c:
    .word 0x96070000
    addiu a0,v0,-64
    dsllv a0,a3,a0
    or a1,a1,a0
    nop
L1f2730:
    addu v0,v0,s4
    sltiu a0,v0,128
    bnez a0,L1f2808
    addiu s0,s0,2
    pcpyld a1,a1,a2
    .word 0x8f848690
    addiu v1,v1,1
    sltiu v0,v1,1005
    .word 0x7c850000
    .word 0x8f848690
    addiu a0,a0,16
    bnez v0,L1f27f8
    .word 0xaf848690
    daddiu s2,s2,-1005
    beqz s2,L1f27fc
    .word 0x70001628
    jal func_001dcb40
    nop
    daddiu v0,s2,4
    dsll32 a1,v0,0x0
    dsra32 a1,a1,0x0
    jal func_001dcd40
    addiu a0,zero,1
    sltiu at,s2,1006
    bnez at,L1f27a4
    .word 0x72401e28
    b L1f27a8
    addiu v1,zero,1005
    .word 0x72401e28
L1f27a4:
    nop
L1f27a8:
    sltiu at,s2,1006
    bnez at,L1f27c0
    addiu v0,zero,1
    b L1f27c0
    addiu v0,zero,1
    addiu v0,zero,1
L1f27c0:
    dsll v0,v0,0xf
    or v1,v0,v1
    .word 0x3c020800
    dsll32 v0,v0,0x0
    or a2,v1,v0
    .word 0x70001628
    pcpyld a0,v0,a2
    .word 0x8f828690
    .word 0x70001e28
    .word 0x7c440000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    nop
L1f27f8:
    .word 0x70001628
L1f27fc:
    .word 0x70003628
    .word 0x70002e28
    nop
L1f2808:
    addiu s3,s3,1
    nop
L1f2810:
    sltu a0,s3,s6
    bnez a0,L1f2704
    sltiu at,v0,64
    sll a0,s7,0x1
    addu s0,s0,a0
    sll a0,s7,0x2
    addu s5,s5,s7
    addu s1,s1,a0
    addiu s8,s8,1
    nop
    .word 0x8fa400ac
L1f283c:
    sltu a0,s8,a0
    bnez a0,L1f26f8
    nop
    b L1f29a8
    nop
L1f2850:
    .word 0x7000f628
L1f2854:
    b L1f299c
    .word 0x8fa400ac
L1f285c:
    b L1f2970
    .word 0x70009e28
    sltiu at,v0,64
L1f2868:
    beqz at,L1f2880
    nop
    lwu a0,0(s1)
    dsllv a0,a0,v0
    b L1f2890
    or a2,a2,a0
L1f2880:
    lwu a3,0(s1)
    addiu a0,v0,-64
    dsllv a0,a3,a0
    or a1,a1,a0
L1f2890:
    addu v0,v0,s4
    sltiu a0,v0,128
    bnez a0,L1f2968
    addiu s1,s1,4
    pcpyld a1,a1,a2
    .word 0x8f848690
    addiu v1,v1,1
    sltiu v0,v1,1005
    .word 0x7c850000
    .word 0x8f848690
    addiu a0,a0,16
    bnez v0,L1f2958
    .word 0xaf848690
    daddiu s2,s2,-1005
    beqz s2,L1f295c
    .word 0x70001628
    jal func_001dcb40
    nop
    daddiu v0,s2,4
    dsll32 a1,v0,0x0
    dsra32 a1,a1,0x0
    jal func_001dcd40
    addiu a0,zero,1
    sltiu at,s2,1006
    bnez at,L1f2904
    .word 0x72401e28
    b L1f2908
    addiu v1,zero,1005
    .word 0x72401e28
L1f2904:
    nop
L1f2908:
    sltiu at,s2,1006
    bnez at,L1f2920
    addiu v0,zero,1
    b L1f2920
    addiu v0,zero,1
    addiu v0,zero,1
L1f2920:
    dsll v0,v0,0xf
    or v1,v0,v1
    .word 0x3c020800
    dsll32 v0,v0,0x0
    or a2,v1,v0
    .word 0x70001628
    pcpyld a0,v0,a2
    .word 0x8f828690
    .word 0x70001e28
    .word 0x7c440000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
    nop
L1f2958:
    .word 0x70001628
L1f295c:
    .word 0x70003628
    .word 0x70002e28
    nop
L1f2968:
    addiu s3,s3,1
    nop
L1f2970:
    sltu a0,s3,s6
    bnez a0,L1f2868
    sltiu at,v0,64
    sll a0,s7,0x1
    addu s0,s0,a0
    sll a0,s7,0x2
    addu s5,s5,s7
    addu s1,s1,a0
    addiu s8,s8,1
    nop
    .word 0x8fa400ac
L1f299c:
    sltu a0,s8,a0
    bnez a0,L1f285c
    nop
L1f29a8:
    beqz v0,L1f29c8
    nop
    pcpyld v1,a1,a2
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    addiu v0,v0,16
    .word 0xaf828690
L1f29c8:
    jal func_001dcb40
    nop
    addiu a0,zero,1
    jal func_001dcd40
    addiu a1,zero,3
    .word 0x3c061000
    dsll32 a2,a2,0x0
    ori a2,a2,0x8001
    addiu a1,zero,14
    pcpyld a0,a1,a2
    .word 0x8f828690
    .word 0x3c010033
    .word 0x7c440000
    .word 0x8f828690
    .word 0x7823f740
    addiu v0,v0,16
    .word 0xaf828690
    .word 0x8f828690
    .word 0x7c430000
    .word 0x8f828690
    addiu v0,v0,16
    jal func_001dcb40
    .word 0xaf828690
    jal func_001dee30
    nop
    .word 0x7bbf0090
    .word 0x7bbe0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,176
}


