extern void func_00142a90(void);
extern void func_00156c00(void);
extern void func_001a8d50(void);
extern void func_001c3b80(void);
extern void func_001c7c70(void);
extern void func_001fefa0(void);
extern void func_001ff7d0(void);
extern void func_001ffa80(void);
extern void func_001ffac0(void);
extern void func_002383e0(void);
asm void func(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-64
    .word 0x7fbf0030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    lw a2,8(a0)
    .word 0x3c020030
    addiu v0,v0,13520
    paddub s0,a0,zero
    sll v1,a2,0x5
    addu a2,v1,a2
    sll v1,a2,0x3
    addu v1,a2,v1
    sll v1,v1,0x2
    addu v0,v0,v1
    bnez a0,L1535cc
    sw v0,-32720(gp)
    b L153d18
    paddub v0,zero,zero
L1535cc:
    lw v1,60(a0)
    .word 0x3c020020
    beq v1,v0,L153d18
    addiu v0,zero,1
    .word 0x3c020010
    beq v1,v0,L153d14
    ori v0,zero,0x8000
    beq v1,v0,L153bf0
    andi v0,a1,0x5560
    addiu v0,zero,16384
    beq v1,v0,L153bec
    .word 0x3c020002
    beq v1,v0,L153b18
    .word 0x3c020001
    beq v1,v0,L153a40
    addiu v0,zero,8192
    beq v1,v0,L153890
    addiu v0,zero,128
    beq v1,v0,L153874
    .word 0x3c010001
    addiu v0,zero,2048
    beq v1,v0,L153824
    .word 0x3c020004
    beq v1,v0,L15380c
    addiu v0,zero,512
    beq v1,v0,L15380c
    addiu v0,zero,16
    beq v1,v0,L15380c
    addiu v0,zero,8
    beq v1,v0,L15380c
    addiu v0,zero,64
    beq v1,v0,L1537c4
    andi v0,a1,0x5560
    addiu v0,zero,256
    beq v1,v0,L1537b4
    andi v0,a1,0x5560
    addiu v0,zero,4096
    beq v1,v0,L1537b0
    addiu v0,zero,1024
    beq v1,v0,L1537b0
    addiu v0,zero,32
    beq v1,v0,L1537b0
    addiu v0,zero,4
    beq v1,v0,L1537a0
    addiu v0,zero,2
    beq v1,v0,L1537a0
    nop
    beqz v1,L153698
    nop
    b L153d14
    nop
L153698:
    lw a0,1028(s0)
    beqz a0,L1536ac
    paddub v0,zero,zero
    jal func_00142a90
    nop
L1536ac:
    lw a0,1064(s0)
    beqz a0,L1536c8
    paddub s1,v0,zero
    jal func_00142a90
    nop
    b L1536d0
    lw v1,1308(s0)
L1536c8:
    paddub v0,zero,zero
    lw v1,1308(s0)
L1536d0:
    movn s1,v0,v1
    jal func_001ffac0
    lw a0,1104(s0)
    jal func_001c3b80
    lw a0,1260(s0)
    lwc1 $f0,48(v0)
    swc1 $f0,1280(s0)
    jal func_001c3b80
    lw a0,1260(s0)
    lwc1 $f0,56(v0)
    swc1 $f0,1288(s0)
    lwc1 $f2,1280(s0)
    lwc1 $f1,1284(s0)
    lwc1 $f0,1288(s0)
    swc1 $f2,20(s0)
    swc1 $f1,24(s0)
    swc1 $f0,28(s0)
    lw v0,1100(s0)
    lwc1 $f2,20(s0)
    lwc1 $f1,24(s0)
    lwc1 $f0,28(s0)
    lw v0,8(v0)
    swc1 $f2,28(v0)
    swc1 $f1,32(v0)
    swc1 $f0,36(v0)
    jal func_001c3b80
    lw a0,1260(s0)
    paddub a0,s1,zero
    jal func_001c3b80
    paddub s1,v0,zero
    addiu a2,zero,2
    paddub a0,s1,zero
    jal func_001c7c70
    paddub a1,v0,zero
    jal func_001c3b80
    lw a0,1260(s0)
    lw a0,1272(s0)
    jal func_001c3b80
    paddub s1,v0,zero
    addiu a1,zero,8
L153770:
    lw a0,0(s1)
    lw v1,4(s1)
    addiu a1,a1,-1
    sw a0,0(v0)
    sw v1,4(v0)
    addiu s1,s1,8
    bgtz a1,L153770
    addiu v0,v0,8
    jal func_002383e0
    addiu a0,s0,7704
    b L153d14
    nop
L1537a0:
    sw zero,1312(s0)
    sw zero,1316(s0)
    b L153d14
    sw zero,1324(s0)
L1537b0:
    andi v0,a1,0x5560
L1537b4:
    bnez v0,L153d14
    nop
    b L153d14
    sw zero,1376(s0)
L1537c4:
    bnez v0,L1537d0
    nop
    sw zero,1376(s0)
L1537d0:
    lw v0,1376(s0)
    bnez v0,L1537f0
    .word 0x3c010001
    addu at,s0,at
    sw zero,-5632(at)
    lw a1,1104(s0)
    jal func_001ffa80
    lw a0,1232(s0)
L1537f0:
    lw v0,5840(s0)
    beqz v0,L153d14
    addiu a0,s0,5672
    jal func_001a8d50
    nop
    b L153d14
    nop
L15380c:
    sw zero,1376(s0)
    sw zero,1312(s0)
    sw zero,1316(s0)
    sw zero,1324(s0)
    b L153d14
    sw zero,1328(s0)
L153824:
    sw zero,1376(s0)
    sw zero,1312(s0)
    sw zero,1316(s0)
    sw zero,1324(s0)
    sw zero,1328(s0)
    lw v1,1020(s0)
    beqz v1,L153d14
    nop
    lw v0,1348(s0)
    sll v0,v0,0x3
    addu v0,v1,v0
    lw v0,0(v0)
    andi v0,v0,0x1
    beqz v0,L153d14
    nop
    lw v1,16(s0)
    .word 0x3c020004
    or v0,v1,v0
    b L153d14
    sw v0,16(s0)
L153874:
    addu at,s0,at
    sw zero,-5632(at)
    lw a1,1104(s0)
    jal func_001ffa80
    lw a0,1232(s0)
    b L153d14
    nop
L153890:
    lw v0,1352(s0)
    lw v1,-32720(gp)
    sll v0,v0,0x1
    addiu s1,v0,38
    sll v0,s1,0x1
    addu v0,v0,s1
    sll s2,v0,0x2
    addu v0,s2,v1
    lw a1,4(v0)
    jal func_001fefa0
    lw a0,1140(s0)
    lw v0,-32720(gp)
    addu v0,s2,v0
    lw a1,8(v0)
    jal func_001fefa0
    lw a0,1144(s0)
    b L153950
    paddub t0,zero,zero
L1538d8:
    lw v0,60(v1)
    addiu a3,v1,88
    lw t1,1140(s0)
    lw v1,1144(s0)
    mult a2,t0,v0
    lw v0,60(t1)
    lw a0,60(v1)
    addiu a1,v1,88
    addu a2,a3,a2
    .word 0x01021018
    addiu v1,t1,88
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    lwc1 $f3,8(v0)
    lwc1 $f2,12(v0)
    lwc1 $f1,16(v0)
    lwc1 $f0,20(v0)
    addiu t0,t0,1
    swc1 $f3,8(a2)
    swc1 $f2,12(a2)
    swc1 $f1,16(a2)
    swc1 $f0,20(a2)
    lwc1 $f2,8(a0)
    lwc1 $f1,12(a0)
    lwc1 $f0,16(a0)
    swc1 $f2,24(a2)
    swc1 $f1,28(a2)
    swc1 $f0,32(a2)
    nop
L153950:
    lw v1,1136(s0)
    lw v0,4(v1)
    slt v0,t0,v0
    bnez v0,L1538d8
    nop
    sw s1,1148(s0)
    .word 0x3c023fea
    ori v0,v0,0xaaab
    mtc1 v0,$f12
    jal func_001ff7d0
    lw a0,1140(s0)
    .word 0x3c023fea
    ori v0,v0,0xaaab
    mtc1 v0,$f12
    jal func_001ff7d0
    lw a0,1144(s0)
    b L153a10
    paddub t0,zero,zero
L153998:
    lw v0,60(v1)
    addiu a3,v1,88
    lw t1,1140(s0)
    lw v1,1144(s0)
    mult a2,t0,v0
    lw v0,60(t1)
    lw a0,60(v1)
    addiu a1,v1,88
    addu a2,a3,a2
    .word 0x01021018
    addiu v1,t1,88
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    lwc1 $f3,8(v0)
    lwc1 $f2,12(v0)
    lwc1 $f1,16(v0)
    lwc1 $f0,20(v0)
    addiu t0,t0,1
    swc1 $f3,8(a2)
    swc1 $f2,12(a2)
    swc1 $f1,16(a2)
    swc1 $f0,20(a2)
    lwc1 $f2,8(a0)
    lwc1 $f1,12(a0)
    lwc1 $f0,16(a0)
    swc1 $f2,24(a2)
    swc1 $f1,28(a2)
    swc1 $f0,32(a2)
    nop
L153a10:
    lw v1,1136(s0)
    lw v0,4(v1)
    slt v0,t0,v0
    bnez v0,L153998
    addiu v0,zero,1
    sw v0,1376(s0)
    sw zero,1312(s0)
    sw zero,1316(s0)
    sw zero,1320(s0)
    sw zero,1324(s0)
    b L153d14
    sw zero,1328(s0)
L153a40:
    .word 0x3c02400a
    ori v0,v0,0xaaab
    mtc1 v0,$f12
    jal func_001ff7d0
    lw a0,1140(s0)
    .word 0x3c02400a
    ori v0,v0,0xaaab
    mtc1 v0,$f12
    jal func_001ff7d0
    lw a0,1144(s0)
    b L153ae8
    paddub t0,zero,zero
L153a70:
    lw v0,60(v1)
    addiu a3,v1,88
    lw t1,1140(s0)
    lw v1,1144(s0)
    mult a2,t0,v0
    lw v0,60(t1)
    lw a0,60(v1)
    addiu a1,v1,88
    addu a2,a3,a2
    .word 0x01021018
    addiu v1,t1,88
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    lwc1 $f3,8(v0)
    lwc1 $f2,12(v0)
    lwc1 $f1,16(v0)
    lwc1 $f0,20(v0)
    addiu t0,t0,1
    swc1 $f3,8(a2)
    swc1 $f2,12(a2)
    swc1 $f1,16(a2)
    swc1 $f0,20(a2)
    lwc1 $f2,8(a0)
    lwc1 $f1,12(a0)
    lwc1 $f0,16(a0)
    swc1 $f2,24(a2)
    swc1 $f1,28(a2)
    swc1 $f0,32(a2)
    nop
L153ae8:
    lw v1,1136(s0)
    lw v0,4(v1)
    slt v0,t0,v0
    bnez v0,L153a70
    addiu v0,zero,5
    sw v0,1376(s0)
    sw zero,1312(s0)
    sw zero,1316(s0)
    sw zero,1320(s0)
    sw zero,1324(s0)
    b L153d14
    sw zero,1328(s0)
L153b18:
    .word 0x3c023fd5
    ori v0,v0,0x5555
    mtc1 v0,$f12
    jal func_001ff7d0
    lw a0,1140(s0)
    .word 0x3c023fd5
    ori v0,v0,0x5555
    mtc1 v0,$f12
    jal func_001ff7d0
    lw a0,1144(s0)
    b L153bc0
    paddub t0,zero,zero
L153b48:
    lw v0,60(v1)
    addiu a3,v1,88
    lw t1,1140(s0)
    lw v1,1144(s0)
    mult a2,t0,v0
    lw v0,60(t1)
    lw a0,60(v1)
    addiu a1,v1,88
    addu a2,a3,a2
    .word 0x01021018
    addiu v1,t1,88
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    lwc1 $f3,8(v0)
    lwc1 $f2,12(v0)
    lwc1 $f1,16(v0)
    lwc1 $f0,20(v0)
    addiu t0,t0,1
    swc1 $f3,8(a2)
    swc1 $f2,12(a2)
    swc1 $f1,16(a2)
    swc1 $f0,20(a2)
    lwc1 $f2,8(a0)
    lwc1 $f1,12(a0)
    lwc1 $f0,16(a0)
    swc1 $f2,24(a2)
    swc1 $f1,28(a2)
    swc1 $f0,32(a2)
    nop
L153bc0:
    lw v1,1136(s0)
    lw v0,4(v1)
    slt v0,t0,v0
    bnez v0,L153b48
    addiu v0,zero,5
    sw v0,1376(s0)
    sw zero,1312(s0)
    sw zero,1316(s0)
    sw zero,1320(s0)
    b L153d14
    sw zero,1324(s0)
L153bec:
    andi v0,a1,0x5560
L153bf0:
    bnez v0,L153bfc
    addiu v0,zero,32
    sw zero,1376(s0)
L153bfc:
    bne a1,v0,L153cf8
    .word 0x3c010001
    lw v0,1376(s0)
    bnezl v0,L153cfc
    addu at,s0,at
    .word 0x3c010001
    addu at,s0,at
    sw zero,-5632(at)
    lw a1,1104(s0)
    jal func_001ffa80
    lw a0,1232(s0)
    lw v0,1344(s0)
    addiu a2,zero,2
    beq v0,a2,L153d04
    nop
    lw a1,8(s0)
    .word 0x3c020030
    addiu v1,v0,13520
    addiu v0,zero,5
    sll a0,a1,0x5
    addu a1,a0,a1
    sll a0,a1,0x3
    addu a0,a1,a0
    sll a0,a0,0x2
    addu v1,v1,a0
    sw v1,-32720(gp)
    sw a2,1344(s0)
    lw v1,1344(s0)
    beq v1,v0,L153ccc
    addiu v0,zero,4
    beq v1,v0,L153c84
    nop
    b L153cd0
    lw a0,16(s0)
L153c84:
    mtc1 zero,$f12
    jal func_001ff7d0
    lw a0,1220(s0)
    mtc1 zero,$f12
    jal func_001ff7d0
    lw a0,1224(s0)
    jal func_00156c00
    addiu a0,s0,1216
    lw a0,16(s0)
    .word 0x3c030010
    .word 0x3c02ffdf
    ori v0,v0,0xffff
    or v1,a0,v1
    sw v1,16(s0)
    lw v1,16(s0)
    and v0,v1,v0
    b L153d04
    sw v0,16(s0)
L153ccc:
    lw a0,16(s0)
L153cd0:
    .word 0x3c02ffef
    ori v1,v0,0xffff
    .word 0x3c02ffdf
    ori v0,v0,0xffff
    and v1,a0,v1
    sw v1,16(s0)
    lw v1,16(s0)
    and v0,v1,v0
    b L153d04
    sw v0,16(s0)
L153cf8:
    addu at,s0,at
L153cfc:
    .word 0x3c023f80
    sw v0,-5632(at)
L153d04:
    sw zero,1312(s0)
    sw zero,1316(s0)
    sw zero,1320(s0)
    sw zero,1324(s0)
L153d14:
    addiu v0,zero,1
L153d18:
    .word 0x7bbf0030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    jr ra
    addiu sp,sp,64
}
