extern void func_00142a90(void);
extern void func_001c3b70(void);
extern void func_001c7610(void);
extern void func_001c7890(void);
extern void func_001c3b00(void);
extern void func_001c3b80(void);
extern void func_00223150(void);
extern void func_001ffa80(void);
extern void func_002000b0(void);
extern void func_001fc4b0(void);
extern void func_001ff7d0(void);
extern void func_001ff930(void);
extern void func_001fefa0(void);
extern void func_00156c00(void);
extern void func_00151720(void);
extern void func_00153d30(void);
extern void func_001ff9e0(void);
extern void func_001ffac0(void);
extern void func_00151400(void);
extern void func_001c7c70(void);
extern void func_0013bcf0(void);
extern void func_00238350(void);
extern void func_00191ef0(void);
extern void func_00142950(void);
extern void func_0022b220(void);
extern void func_00150c20(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff30
    .word 0x7fbf0070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x70809e28
    .word 0x8c840404
    beqz a0,L14d178
    .word 0x70008e28
    jal func_00142a90
    nop
    .word 0x70408e28
L14d178:
    .word 0x8e640428
    beqz a0,L14d190
    .word 0x70009628
    jal func_00142a90
    nop
    .word 0x70409628
L14d190:
    .word 0x8e62051c
    .word 0x72408628
    movz s0,s1,v0
    .word 0x8e6200b0
    jal func_00142a90
    .word 0x8c440014
    beqz s3,L150bec
    .word 0x7040ae28
    .word 0x8e650008
    .word 0x3c020030
    .word 0x244334d0
    .word 0x3c020004
    sll a0,a1,0x5
    addu a1,a0,a1
    sll a0,a1,0x3
    addu a0,a1,a0
    sll a0,a0,0x2
    addu v1,v1,a0
    .word 0xaf838030
    .word 0x8e630010
    and v0,v1,v0
    beqz v0,L14d22c
    nop
    .word 0x8e63051c
    .word 0x3c010030
    .word 0x8c223e4c
    .word 0x72602628
    .word 0x70003628
    sltu v1,zero,v1
    jalr ra,v0
    xori a1,v1,0x1
    .word 0x8e62051c
    .word 0x72408628
    movz s0,s1,v0
    .word 0x8e630010
    .word 0x3c02fffb
    ori v0,v0,0xffff
    and v0,v1,v0
    .word 0xae620010
L14d22c:
    .word 0x8e63051c
    addiu v0,zero,1
    bne v1,v0,L14d30c
    .word 0x72002628
    jal func_001c3b70
    .word 0x72402628
    .word 0x7040a628
    .word 0x3c02002e
    .word 0x2444e460
    .word 0xdc820000
    .word 0xc4800008
    .word 0x27a30090
    .word 0xfc620000
    .word 0x72202628
    jal func_001c3b70
    .word 0xe4600008
    addiu a1,zero,8
    .word 0x72803628
L14d274:
    .word 0x8c440000
    .word 0x8c430004
    .word 0x24a5ffff
    .word 0xacc40000
    .word 0xacc30004
    .word 0x24420008
    bgtz a1,L14d274
    .word 0x24c60008
    .word 0xc6820030
    .word 0xc6810034
    .word 0xc6800038
    .word 0x27a30080
    .word 0x3c024334
    .word 0x44826000
    .word 0x26850010
    .word 0xe4620000
    .word 0xe4610004
    .word 0xe4600008
    .word 0xae800038
    .word 0xae800034
    addiu a2,zero,2
    .word 0x72802628
    jal func_001c7610
    .word 0xae800030
    .word 0x27a20080
    .word 0xc4420000
    .word 0xc4410004
    .word 0xc4400008
    .word 0x27a50090
    addiu a2,zero,1
    .word 0x72802628
    .word 0xe6820030
    .word 0xe6810034
    jal func_001c7890
    .word 0xe6800038
    jal func_001c3b00
    .word 0x72402628
    .word 0x72002628
L14d30c:
    jal func_001c3b70
    nop
    .word 0x7040a628
    jal func_001c3b70
    .word 0x72a02628
    addiu a1,zero,8
L14d324:
    .word 0x8e840000
    .word 0x8e830004
    .word 0x24a5ffff
    .word 0xac440000
    .word 0xac430004
    .word 0x26940008
    bgtz a1,L14d324
    .word 0x24420008
    jal func_001c3b00
    .word 0x72a02628
    jal func_001c3b80
    .word 0x72a02628
    .word 0x8e62003c
    .word 0x3c030020
    beql v0,v1,L14fdb8
    ori v0,zero,0xea00
    .word 0x3c030010
    beq v0,v1,L14fdb4
    .word 0x3c030004
    beq v0,v1,L14fc4c
    .word 0x3c037000
    .word 0x3c050002
    beql v0,a1,L14fa9c
    .word 0x3c027000
    .word 0x3c030001
    beq v0,v1,L14f920
    ori v1,zero,0x8000
    beq v0,v1,L14f4d8
    addiu v1,zero,8192
    beql v0,v1,L14ead4
    .word 0x3c027000
    addiu v1,zero,2048
    beq v0,v1,L14e518
    .word 0x3c037000
    addiu v1,zero,512
    beq v0,v1,L14e3dc
    .word 0x3c037000
    addiu v1,zero,128
    beql v0,v1,L14e228
    .word 0x3c027000
    addiu v1,zero,16384
    beq v0,v1,L14d768
    andi v1,v0,0x40
    addiu v1,zero,256
    beq v0,v1,L14d764
    addiu v1,zero,64
    beq v0,v1,L14d764
    addiu v1,zero,4096
    beq v0,v1,L14d764
    addiu v1,zero,1024
    beq v0,v1,L14d764
    addiu v1,zero,32
    beq v0,v1,L14d764
    addiu v1,zero,8
    beq v0,v1,L14d6bc
    addiu v1,zero,4
    beq v0,v1,L14d41c
    addiu v1,zero,2
    beq v0,v1,L14d41c
    nop
    b L14ff28
    .word 0x8e640450
L14d41c:
    .word 0x8e63047c
    addiu v0,zero,83
    bne v1,v0,L14d574
    nop
    .word 0x8e640474
    .word 0x3c024086
    ori v0,v0,0x6666
    .word 0x44820000
    .word 0xc481000c
    c.lt.s $f1,$f0
    nop
    bc1f L14d514
    addiu v0,zero,1
    .word 0x3c027000
    ori v0,v0,0x3fa8
    jal func_00223150
    .word 0xc44c0000
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14d4f0
    .word 0x70004628
L14d478:
    .word 0x8ca2003c
    .word 0x8e630478
    .word 0x24a70058
    .word 0x8e690474
    .word 0x01023018
    .word 0x8c64003c
    .word 0x24650058
    .word 0x8d22003c
    addu a2,a3,a2
    .word 0x71042018
    .word 0x25230058
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14d4f0:
    .word 0x8e650470
    .word 0x8ca20004
    slt v0,t0,v0
    bnez v0,L14d478
    nop
    jal func_001ffa80
    .word 0x8e640450
    b L14ff24
    nop
L14d514:
    .word 0xae620560
    .word 0x8e62003c
    addiu a1,zero,32
    beq v0,a1,L14ff24
    nop
    .word 0x8e620010
    andi v0,v0,0x2
    bnez v0,L14ff24
    nop
    .word 0x8e62000c
    .word 0x72602628
    .word 0x8c420010
    jalr ra,v0
    .word 0x2674000c
    beqz v0,L14ff24
    nop
    .word 0x8e820000
    addiu a1,zero,32
    .word 0x72602628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L14ff24
    nop
L14d574:
    .word 0x8e640474
    .word 0x3c023eaa
    ori v0,v0,0xaaab
    .word 0x44820000
    .word 0xc481000c
    c.lt.s $f1,$f0
    nop
    bc1f L14d65c
    addiu v0,zero,1
    .word 0x3c027000
    ori v0,v0,0x3fa8
    jal func_00223150
    .word 0xc44c0000
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14d638
    .word 0x70004628
L14d5c0:
    .word 0x8ca2003c
    .word 0x8e630478
    .word 0x24a70058
    .word 0x8e690474
    .word 0x01023018
    .word 0x8c64003c
    .word 0x24650058
    .word 0x8d22003c
    addu a2,a3,a2
    .word 0x71042018
    .word 0x25230058
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14d638:
    .word 0x8e650470
    .word 0x8ca20004
    slt v0,t0,v0
    bnez v0,L14d5c0
    nop
    jal func_001ffa80
    .word 0x8e640450
    b L14ff24
    nop
L14d65c:
    .word 0xae620560
    .word 0x8e62003c
    addiu a1,zero,32
    beq v0,a1,L14ff24
    nop
    .word 0x8e620010
    andi v0,v0,0x2
    bnez v0,L14ff24
    nop
    .word 0x8e62000c
    .word 0x72602628
    .word 0x8c420010
    jalr ra,v0
    .word 0x2674000c
    beqz v0,L14ff24
    nop
    .word 0x8e820000
    addiu a1,zero,32
    .word 0x72602628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L14ff24
    nop
L14d6bc:
    .word 0x8e650470
    jal func_001ffa80
    .word 0x8e640450
    .word 0x8e640450
    jal func_002000b0
    addiu a1,zero,1001
    .word 0x8e640450
    .word 0x3c03002e
    .word 0x2463e470
    .word 0xdc660000
    .word 0xc4600008
    .word 0x8c88003c
    .word 0x27a700a0
    .word 0x24890058
    .word 0x3c03002e
    .word 0x00481018
    .word 0xfce60000
    .word 0x2464e480
    addu s4,t1,v0
    .word 0xe4e00008
    .word 0xdc820000
    .word 0xc4800008
    .word 0x27a500b0
    .word 0x3c03428c
    .word 0x44830800
    addiu a2,zero,2
    .word 0xfca20000
    .word 0xe4a00008
    .word 0xc660052c
    .word 0x26840008
    jal func_001fc4b0
    mul.s $f12,$f1,$f0
    .word 0xc6600530
    .word 0x3c0241f0
    .word 0x44820800
    .word 0x26840008
    .word 0x27a500a0
    mul.s $f12,$f1,$f0
    jal func_001fc4b0
    addiu a2,zero,2
    b L14ff24
    nop
L14d764:
    andi v1,v0,0x40
L14d768:
    beqz v1,L14d778
    addiu s4,zero,57
    b L14d780
    addiu s4,zero,56
L14d778:
    andi v0,v0,0x4000
    movz s4,zero,v0
L14d780:
    ori v0,zero,0xea00
    addu v0,s3,v0
    .word 0xc4400000
    .word 0x3c023f80
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L14d8f4
    nop
    .word 0x8e620560
    bnez v0,L14d884
    .word 0x3c017000
    .word 0xc660052c
    .word 0x3c023fea
    ori v0,v0,0xaaab
    .word 0x44820800
    .word 0x8e640474
    neg.s $f0,$f0
    mul.s $f0,$f1,$f0
    add.s $f20,$f1,$f0
    jal func_001ff7d0
    .word 0x4600a306
    .word 0x8e640478
    jal func_001ff7d0
    .word 0x4600a306
    b L14d868
    .word 0x70004628
L14d7f0:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14d868:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14d7f0
    nop
    nop
    .word 0x3c017000
L14d884:
    .word 0xc4233fa8
    .word 0x3c024080
    .word 0x44821000
    .word 0x3c023f80
    .word 0x44820000
    .word 0x3c010001
    addu at,s3,at
    mul.s $f2,$f2,$f3
    .word 0xc421ea00
    add.s $f1,$f1,$f2
    .word 0x3c010001
    addu at,s3,at
    c.lt.s $f1,$f0
    nop
    bc1t L14d8d0
    .word 0xe421ea00
    .word 0x3c010001
    addu at,s3,at
    .word 0xac22ea00
L14d8d0:
    .word 0x3c010001
    addu at,s3,at
    .word 0x8e6504d0
    .word 0x8e660470
    .word 0xc42cea00
    jal func_001ff930
    .word 0x8e640450
    b L14e1e4
    .word 0x8e62003c
L14d8f4:
    .word 0x8e630560
    andi v0,v1,0x1
    beqz v0,L14dc94
    andi v0,v1,0x2
    .word 0x3c027000
    ori v0,v0,0x3fa8
    .word 0x8e640474
    .word 0xc44c0000
    .word 0xc480000c
    .word 0x8c820008
    .word 0xc441000c
    sub.s $f0,$f1,$f0
    c.le.s $f0,$f12
    nop
    bc1t L14d9e4
    nop
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14d9c8
    .word 0x70004628
L14d954:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14d9c8:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14d954
    nop
    b L14db84
    .word 0x8e620560
L14d9e4:
    .word 0x8f838030
    sll v0,s4,0x1
    addu v0,v0,s4
    sll s5,v0,0x2
    addu v0,s5,v1
    jal func_001fefa0
    .word 0x8c450004
    .word 0x8f828030
    addu v0,s5,v0
    .word 0x8c450008
    jal func_001fefa0
    .word 0x8e640478
    b L14da90
    .word 0x70004628
L14da1c:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14da90:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14da1c
    nop
    .word 0xae74047c
    .word 0x3c023fea
    ori v0,v0,0xaaab
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640474
    .word 0x3c023fea
    ori v0,v0,0xaaab
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640478
    b L14db50
    .word 0x70004628
L14dad8:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14db50:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14dad8
    nop
    .word 0xae600560
    .word 0xae60052c
    .word 0x8e630010
    .word 0x3c02fff7
    ori v0,v0,0xfc7f
    and v0,v1,v0
    .word 0xae620010
    .word 0x8e620560
L14db84:
    andi v0,v0,0x4
    beqz v0,L14dbb0
    nop
    .word 0x8e650470
    jal func_001ffa80
    .word 0x8e640450
    .word 0xae600520
    .word 0xae600524
    .word 0xae600528
    b L14e1e0
    .word 0xae60052c
L14dbb0:
    .word 0x8e620540
    addiu a2,zero,2
    beq v0,a2,L14dc7c
    nop
    .word 0x8e650008
    .word 0x3c020030
    .word 0x244334d0
    addiu v0,zero,5
    sll a0,a1,0x5
    addu a1,a0,a1
    sll a0,a1,0x3
    addu a0,a1,a0
    sll a0,a0,0x2
    addu v1,v1,a0
    .word 0xaf838030
    .word 0xae660540
    .word 0x8e630540
    beq v1,v0,L14dc54
    addiu v0,zero,4
    beq v1,v0,L14dc0c
    nop
    b L14dc58
    .word 0x8e640010
L14dc0c:
    .word 0x44806000
    jal func_001ff7d0
    .word 0x8e6404c4
    .word 0x44806000
    jal func_001ff7d0
    .word 0x8e6404c8
    jal func_00156c00
    .word 0x266404c0
    .word 0x8e640010
    .word 0x3c030010
    .word 0x3c02ffdf
    ori v0,v0,0xffff
    or v1,a0,v1
    .word 0xae630010
    .word 0x8e630010
    and v0,v1,v0
    b L14dc7c
    .word 0xae620010
L14dc54:
    .word 0x8e640010
L14dc58:
    .word 0x3c02ffef
    ori v1,v0,0xffff
    .word 0x3c02ffdf
    ori v0,v0,0xffff
    and v1,a0,v1
    .word 0xae630010
    .word 0x8e630010
    and v0,v1,v0
    .word 0xae620010
L14dc7c:
    .word 0xae600520
    .word 0x72602628
    jal func_00151720
    .word 0xae600524
    b L14e1e0
    nop
L14dc94:
    beqz v0,L14e024
    nop
    .word 0x8e640474
    .word 0x3c027000
    ori v0,v0,0x3fa8
    .word 0xc4410000
    .word 0xc480000c
    c.le.s $f0,$f1
    nop
    bc1t L14dd74
    neg.s $f12,$f1
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc4203fa8
    .word 0x8e640478
    jal func_00223150
    neg.s $f12,$f0
    b L14dd58
    .word 0x70004628
L14dce4:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14dd58:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14dce4
    nop
    b L14df14
    .word 0x8e620560
L14dd74:
    .word 0x8f838030
    sll v0,s4,0x1
    addu v0,v0,s4
    sll s5,v0,0x2
    addu v0,s5,v1
    jal func_001fefa0
    .word 0x8c450004
    .word 0x8f828030
    addu v0,s5,v0
    .word 0x8c450008
    jal func_001fefa0
    .word 0x8e640478
    b L14de20
    .word 0x70004628
L14ddac:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14de20:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14ddac
    nop
    .word 0xae74047c
    .word 0x3c023fea
    ori v0,v0,0xaaab
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640474
    .word 0x3c023fea
    ori v0,v0,0xaaab
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640478
    b L14dee0
    .word 0x70004628
L14de68:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14dee0:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14de68
    nop
    .word 0xae600560
    .word 0xae60052c
    .word 0x8e630010
    .word 0x3c02fff7
    ori v0,v0,0xfc7f
    and v0,v1,v0
    .word 0xae620010
    .word 0x8e620560
L14df14:
    andi v0,v0,0x4
    beqz v0,L14df40
    nop
    .word 0x8e650470
    jal func_001ffa80
    .word 0x8e640450
    .word 0xae600520
    .word 0xae600524
    .word 0xae600528
    b L14e1e0
    .word 0xae60052c
L14df40:
    .word 0x8e620540
    addiu a2,zero,2
    beq v0,a2,L14e00c
    nop
    .word 0x8e650008
    .word 0x3c020030
    .word 0x244334d0
    addiu v0,zero,5
    sll a0,a1,0x5
    addu a1,a0,a1
    sll a0,a1,0x3
    addu a0,a1,a0
    sll a0,a0,0x2
    addu v1,v1,a0
    .word 0xaf838030
    .word 0xae660540
    .word 0x8e630540
    beq v1,v0,L14dfe4
    addiu v0,zero,4
    beq v1,v0,L14df9c
    nop
    b L14dfe8
    .word 0x8e640010
L14df9c:
    .word 0x44806000
    jal func_001ff7d0
    .word 0x8e6404c4
    .word 0x44806000
    jal func_001ff7d0
    .word 0x8e6404c8
    jal func_00156c00
    .word 0x266404c0
    .word 0x8e640010
    .word 0x3c030010
    .word 0x3c02ffdf
    ori v0,v0,0xffff
    or v1,a0,v1
    .word 0xae630010
    .word 0x8e630010
    and v0,v1,v0
    b L14e00c
    .word 0xae620010
L14dfe4:
    .word 0x8e640010
L14dfe8:
    .word 0x3c02ffef
    ori v1,v0,0xffff
    .word 0x3c02ffdf
    ori v0,v0,0xffff
    and v1,a0,v1
    .word 0xae630010
    .word 0x8e630010
    and v0,v1,v0
    .word 0xae620010
L14e00c:
    .word 0xae600520
    .word 0x72602628
    jal func_00151720
    .word 0xae600524
    b L14e1e0
    nop
L14e024:
    .word 0xc6670550
    .word 0xc6640554
    .word 0xc661052c
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1t L14e050
    sub.s $f3,$f7,$f4
    b L14e054
    .word 0x46000886
L14e050:
    neg.s $f2,$f1
L14e054:
    .word 0x3c023faa
    ori v0,v0,0xaaab
    .word 0x44820000
    .word 0x3c017000
    .word 0x3c023fea
    mul.s $f2,$f0,$f2
    ori v0,v0,0xaaab
    .word 0xc4263fa8
    .word 0x44822800
    neg.s $f1,$f1
    adda.s $f5,$f4
    neg.s $f0,$f2
    madd.s $f20,$f5,$f1
    mul.s $f1,$f0,$f6
    c.lt.s $f3,$f1
    nop
    bc1fl L14e0c8
    mul.s $f1,$f2,$f6
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L14e0bc
    .word 0x460008c6
    b L14e0c0
    addiu v0,zero,-1
L14e0bc:
    .word 0x70001628
L14e0c0:
    b L14e104
    nop
L14e0c8:
    c.le.s $f3,$f1
    nop
    bc1t L14e104
    .word 0x70001628
    .word 0x44800000
    nop
    c.eq.s $f1,$f0
    nop
    bc1t L14e0f8
    .word 0x460008c6
    b L14e0fc
    addiu v0,zero,1
L14e0f8:
    .word 0x70001628
L14e0fc:
    b L14e104
    nop
L14e104:
    bnez v0,L14e110
    neg.s $f0,$f7
    .word 0xe6600550
L14e110:
    .word 0xc6600554
    add.s $f0,$f0,$f3
    .word 0xe6600554
    .word 0x8e640474
    jal func_001ff7d0
    .word 0x4600a306
    .word 0x8e640478
    jal func_001ff7d0
    .word 0x4600a306
    b L14e1b0
    .word 0x70004628
L14e13c:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14e1b0:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14e13c
    .word 0x72602628
    jal func_00151720
    nop
    .word 0x8e630010
    .word 0x3c02fff7
    ori v0,v0,0xfc7f
    and v0,v1,v0
    .word 0xae620010
L14e1e0:
    .word 0x8e62003c
L14e1e4:
    andi v0,v0,0x40
    beqz v0,L14ff24
    nop
    .word 0x8e6216d0
    bnez v0,L14ff24
    .word 0x3c017000
    .word 0xc4213fb0
    .word 0xc66016cc
    c.le.s $f1,$f0
    nop
    bc1t L14ff24
    addiu a1,zero,37
    jal func_00153d30
    .word 0x72602628
    addiu v0,zero,1
    b L14ff24
    .word 0xae6216d0
L14e228:
    ori v0,v0,0x3fa8
    .word 0x8e640474
    .word 0xc44c0000
    .word 0xc480000c
    .word 0x8c820008
    .word 0xc441000c
    sub.s $f0,$f1,$f0
    c.le.s $f0,$f12
    nop
    bc1t L14e304
    ori v0,zero,0xea00
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14e2e8
    .word 0x70004628
L14e274:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14e2e8:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14e274
    nop
    nop
    ori v0,zero,0xea00
L14e304:
    addu v0,s3,v0
    .word 0xc4400000
    .word 0x3c033f80
    .word 0x44831800
    nop
    c.lt.s $f0,$f3
    nop
    bc1f L14e390
    .word 0x3c017000
    .word 0xc4223fa8
    .word 0x3c024080
    .word 0x44820800
    .word 0x3c010001
    addu at,s3,at
    mul.s $f1,$f1,$f2
    .word 0xc420ea00
    add.s $f0,$f0,$f1
    .word 0x3c010001
    addu at,s3,at
    c.lt.s $f0,$f3
    nop
    bc1t L14e36c
    .word 0xe420ea00
    .word 0x3c010001
    addu at,s3,at
    .word 0xac23ea00
L14e36c:
    .word 0x3c010001
    addu at,s3,at
    .word 0x8e6504d0
    .word 0x8e660470
    .word 0xc42cea00
    jal func_001ff930
    .word 0x8e640450
    b L14ff24
    nop
L14e390:
    .word 0xc6600530
    .word 0x3c023f00
    .word 0x44820800
    .word 0x8e6404b4
    mul.s $f0,$f1,$f0
    add.s $f20,$f1,$f0
    jal func_001ff7d0
    .word 0x4600a306
    .word 0x8e6404b8
    jal func_001ff7d0
    .word 0x4600a306
    jal func_00156c00
    .word 0x266404b0
    .word 0x8e650470
    .word 0x8e6604b0
    jal func_001ff9e0
    .word 0x8e640450
    b L14ff24
    nop
L14e3dc:
    ori v1,v1,0x3fa8
    .word 0x8e640474
    .word 0xc46c0000
    .word 0xc480000c
    .word 0x8c830008
    .word 0xc461000c
    sub.s $f0,$f1,$f0
    c.le.s $f0,$f12
    nop
    bc1t L14e4c4
    addiu a1,zero,32
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14e4a0
    .word 0x70004628
L14e428:
    .word 0x8ca2003c
    .word 0x8e630478
    .word 0x24a70058
    .word 0x8e690474
    .word 0x01023018
    .word 0x8c64003c
    .word 0x24650058
    .word 0x8d22003c
    addu a2,a3,a2
    .word 0x71042018
    .word 0x25230058
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14e4a0:
    .word 0x8e650470
    .word 0x8ca20004
    slt v0,t0,v0
    bnez v0,L14e428
    nop
    jal func_001ffa80
    .word 0x8e640450
    b L14ff24
    nop
L14e4c4:
    beq v0,a1,L14ff24
    nop
    .word 0x8e620010
    andi v0,v0,0x2
    bnez v0,L14ff24
    nop
    .word 0x8e62000c
    .word 0x72602628
    .word 0x8c420010
    jalr ra,v0
    .word 0x2674000c
    beqz v0,L14ff24
    nop
    .word 0x8e820000
    addiu a1,zero,32
    .word 0x72602628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L14ff24
    nop
L14e518:
    ori v1,v1,0x3fa8
    .word 0x8e640474
    .word 0xc46c0000
    .word 0xc481000c
    .word 0x8c830008
    .word 0xc460000c
    sub.s $f0,$f0,$f1
    c.le.s $f0,$f12
    nop
    bc1t L14ea28
    nop
    .word 0x8e620544
    slti at,v0,26
    beqz at,L14e604
    .word 0x3c023f00
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14e5e8
    .word 0x70004628
L14e574:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14e5e8:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14e574
    nop
    b L14e92c
    ori v0,zero,0xea00
L14e604:
    .word 0x44820000
    nop
    sub.s $f0,$f0,$f12
    c.lt.s $f1,$f0
    nop
    bc1f L14e6d4
    .word 0x3c023fea
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14e6b8
    .word 0x70004628
L14e640:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14e6b8:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14e640
    nop
    b L14e928
    nop
L14e6d4:
    ori v0,v0,0xaaab
    .word 0x44821000
    nop
    sub.s $f0,$f2,$f12
    c.lt.s $f1,$f0
    nop
    bc1f L14e86c
    nop
    .word 0x8e620558
    beqzl v0,L14e7b4
    .word 0x46001306
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14e798
    .word 0x70004628
L14e720:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14e798:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14e720
    nop
    b L14e928
    nop
L14e7b4:
    jal func_001ff7d0
    nop
    .word 0x3c023fea
    ori v0,v0,0xaaab
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640478
    b L14e850
    .word 0x70004628
L14e7d8:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14e850:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14e7d8
    nop
    b L14e928
    nop
L14e86c:
    .word 0x8e620558
    bnez v0,L14e928
    nop
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14e910
    .word 0x70004628
L14e898:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14e910:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14e898
    nop
    nop
L14e928:
    ori v0,zero,0xea00
L14e92c:
    addu v0,s3,v0
    .word 0xc4400000
    .word 0x3c033f80
    .word 0x44831800
    nop
    c.lt.s $f0,$f3
    nop
    bc1f L14e9b8
    .word 0x3c017000
    .word 0xc4223fa8
    .word 0x3c024080
    .word 0x44820800
    .word 0x3c010001
    addu at,s3,at
    mul.s $f1,$f1,$f2
    .word 0xc420ea00
    add.s $f0,$f0,$f1
    .word 0x3c010001
    addu at,s3,at
    c.lt.s $f0,$f3
    nop
    bc1t L14e994
    .word 0xe420ea00
    .word 0x3c010001
    addu at,s3,at
    .word 0xac23ea00
L14e994:
    .word 0x3c010001
    addu at,s3,at
    .word 0x8e6504d0
    .word 0x8e660470
    .word 0xc42cea00
    jal func_001ff930
    .word 0x8e640450
    b L14ff24
    nop
L14e9b8:
    .word 0x8e620544
    slti at,v0,26
    beqz at,L14ea14
    nop
    .word 0xc6600530
    .word 0x3c023f00
    .word 0x44820800
    .word 0x8e6404b4
    mul.s $f0,$f1,$f0
    add.s $f20,$f1,$f0
    jal func_001ff7d0
    .word 0x4600a306
    .word 0x8e6404b8
    jal func_001ff7d0
    .word 0x4600a306
    jal func_00156c00
    .word 0x266404b0
    .word 0x8e650470
    .word 0x8e6604b0
    jal func_001ff9e0
    .word 0x8e640450
    b L14ff24
    nop
L14ea14:
    .word 0x8e650470
    jal func_001ffa80
    .word 0x8e640450
    b L14ff24
    nop
L14ea28:
    .word 0x8e640010
    and v1,a0,a1
    beqz v1,L14ea88
    addiu a1,zero,32
    addiu a1,zero,256
    beq v0,a1,L14ff24
    andi v0,a0,0x2
    bnez v0,L14ff24
    nop
    .word 0x8e62000c
    .word 0x72602628
    .word 0x8c420010
    jalr ra,v0
    .word 0x2674000c
    beqz v0,L14ff24
    nop
    .word 0x8e820000
    addiu a1,zero,256
    .word 0x72602628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L14ff24
    nop
L14ea88:
    beq v0,a1,L14ff24
    andi v0,a0,0x2
    bnez v0,L14ff24
    nop
    .word 0x8e62000c
    .word 0x72602628
    .word 0x8c420010
    jalr ra,v0
    .word 0x2674000c
    beqz v0,L14ff24
    nop
    .word 0x8e820000
    addiu a1,zero,32
    .word 0x72602628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
    b L14ff24
    nop
L14ead4:
    ori v0,v0,0x3fa8
    .word 0xc44c0000
    .word 0x8e640474
    .word 0x3c023fea
    ori v0,v0,0xaaab
    .word 0x44820000
    .word 0xc481000c
    sub.s $f0,$f0,$f12
    c.lt.s $f1,$f0
    nop
    bc1f L14ebb4
    nop
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14eb98
    .word 0x70004628
L14eb24:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14eb98:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14eb24
    nop
    b L14ec84
    .word 0xc6600530
L14ebb4:
    .word 0xc6610530
    .word 0x44800000
    nop
    c.eq.s $f0,$f1
    nop
    bc1f L14ec80
    .word 0x3c023f00
    .word 0x44826000
    jal func_001ff7d0
    nop
    .word 0x3c023f00
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640478
    b L14ec68
    .word 0x70004628
L14ebf4:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14ec68:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14ebf4
    nop
    nop
L14ec80:
    .word 0xc6600530
L14ec84:
    .word 0x44803000
    nop
    c.le.s $f0,$f6
    nop
    bc1t L14ee34
    nop
    .word 0x8e640494
    .word 0x3c017000
    .word 0xc42c3fa8
    .word 0x8c820008
    .word 0xc480000c
    .word 0xc441000c
    sub.s $f0,$f1,$f0
    c.le.s $f0,$f12
    nop
    bc1t L14ed7c
    .word 0x3c024020
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640498
    b L14ed60
    .word 0x70004628
L14ece8:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690494
    .word 0x8e630498
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14ed60:
    .word 0x8e630490
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14ece8
    nop
    b L14f4c4
    .word 0x8e640450
L14ed7c:
    .word 0x44826000
    jal func_001ff7d0
    nop
    .word 0x3c024020
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640498
    b L14ee18
    .word 0x70004628
L14eda0:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690494
    .word 0x8e630498
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14ee18:
    .word 0x8e630490
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14eda0
    nop
    b L14f4c0
    nop
L14ee34:
    c.lt.s $f0,$f6
    nop
    bc1f L14efdc
    nop
    .word 0x8e640494
    .word 0x3c017000
    .word 0xc4213fa8
    .word 0xc480000c
    c.le.s $f0,$f1
    nop
    bc1t L14ef1c
    .word 0x3c023f55
    jal func_00223150
    neg.s $f12,$f1
    .word 0x3c017000
    .word 0xc4203fa8
    .word 0x8e640498
    jal func_00223150
    neg.s $f12,$f0
    b L14ef00
    .word 0x70004628
L14ee88:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690494
    .word 0x8e630498
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14ef00:
    .word 0x8e630490
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14ee88
    nop
    b L14f4c0
    nop
L14ef1c:
    ori v0,v0,0x5555
    .word 0x44826000
    jal func_001ff7d0
    nop
    .word 0x3c023f55
    ori v0,v0,0x5555
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640498
    b L14efc0
    .word 0x70004628
L14ef48:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690494
    .word 0x8e630498
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14efc0:
    .word 0x8e630490
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14ef48
    nop
    b L14f4c0
    nop
L14efdc:
    .word 0x8e640494
    .word 0x3c023f55
    ori v0,v0,0x5555
    .word 0x44820000
    .word 0xc481000c
    c.lt.s $f1,$f0
    nop
    bc1f L14f18c
    .word 0x3c024020
    .word 0x3c017000
    .word 0xc4203fa8
    c.le.s $f1,$f0
    nop
    bc1t L14f0cc
    .word 0x3c023fd5
    jal func_00223150
    neg.s $f12,$f0
    .word 0x3c017000
    .word 0xc4203fa8
    .word 0x8e640498
    jal func_00223150
    neg.s $f12,$f0
    b L14f0b0
    .word 0x70004628
L14f03c:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690494
    .word 0x8e630498
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14f0b0:
    .word 0x8e630490
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14f03c
    nop
    b L14f4c0
    nop
L14f0cc:
    ori v0,v0,0x5555
    .word 0x44826000
    jal func_001ff7d0
    nop
    .word 0x3c023fd5
    ori v0,v0,0x5555
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640498
    b L14f170
    .word 0x70004628
L14f0f8:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690494
    .word 0x8e630498
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14f170:
    .word 0x8e630490
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14f0f8
    nop
    b L14f4c0
    nop
L14f18c:
    .word 0x44820000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L14f33c
    .word 0x3c023fd5
    .word 0x8c820008
    .word 0x3c017000
    .word 0xc42c3fa8
    .word 0xc440000c
    sub.s $f0,$f0,$f1
    c.le.s $f0,$f12
    nop
    bc1t L14f27c
    .word 0x3c023fd5
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640498
    b L14f260
    .word 0x70004628
L14f1e8:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690494
    .word 0x8e630498
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14f260:
    .word 0x8e630490
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14f1e8
    nop
    b L14f4c0
    nop
L14f27c:
    ori v0,v0,0x5555
    .word 0x44826000
    jal func_001ff7d0
    nop
    .word 0x3c023fd5
    ori v0,v0,0x5555
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640498
    b L14f320
    .word 0x70004628
L14f2a8:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690494
    .word 0x8e630498
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14f320:
    .word 0x8e630490
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14f2a8
    nop
    b L14f4c0
    nop
L14f33c:
    ori v0,v0,0x5555
    .word 0x44820000
    .word 0xc6630554
    .word 0x3c023f2a
    ori v0,v0,0xaaaa
    .word 0x3c017000
    .word 0x44821000
    .word 0xc661052c
    .word 0x3c02bfaa
    adda.s $f0,$f3
    ori v0,v0,0xaaab
    .word 0xc4243fa8
    .word 0x44820000
    .word 0xc6650550
    madd.s $f20,$f2,$f1
    mul.s $f0,$f0,$f4
    sub.s $f1,$f5,$f3
    c.lt.s $f1,$f0
    nop
    bc1f L14f3b4
    .word 0x3c023faa
    c.eq.s $f0,$f6
    nop
    bc1t L14f3a8
    .word 0x46000046
    b L14f3ac
    addiu v0,zero,-1
L14f3a8:
    .word 0x70001628
L14f3ac:
    b L14f3f8
    nop
L14f3b4:
    ori v0,v0,0xaaab
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f4
    c.le.s $f1,$f0
    nop
    bc1t L14f3f8
    .word 0x70001628
    c.eq.s $f0,$f6
    nop
    bc1t L14f3ec
    .word 0x46000046
    b L14f3f0
    addiu v0,zero,1
L14f3ec:
    .word 0x70001628
L14f3f0:
    b L14f3f8
    nop
L14f3f8:
    bnez v0,L14f404
    neg.s $f0,$f5
    .word 0xe6600550
L14f404:
    .word 0xc6600554
    add.s $f0,$f0,$f1
    .word 0xe6600554
    .word 0x8e640494
    jal func_001ff7d0
    .word 0x4600a306
    .word 0x8e640498
    jal func_001ff7d0
    .word 0x4600a306
    b L14f4a8
    .word 0x70004628
L14f430:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690494
    .word 0x8e630498
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14f4a8:
    .word 0x8e630490
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14f430
    nop
    nop
L14f4c0:
    .word 0x8e640450
L14f4c4:
    .word 0x8e660490
    jal func_001ff9e0
    .word 0x8e650470
    b L14ff24
    nop
L14f4d8:
    .word 0x8e63047c
    addiu v0,zero,58
    bne v1,v0,L14f744
    .word 0x3c027000
    ori v0,v0,0x3fa8
    .word 0x8e640474
    .word 0xc44c0000
    .word 0xc480000c
    .word 0x8c820008
    .word 0xc441000c
    sub.s $f0,$f1,$f0
    c.le.s $f0,$f12
    nop
    bc1t L14f5cc
    nop
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14f5a8
    .word 0x70004628
L14f534:
    .word 0x8ca2003c
    .word 0x8e630478
    .word 0x24a70058
    .word 0x8e690474
    .word 0x01023018
    .word 0x8c64003c
    .word 0x24650058
    .word 0x8d22003c
    addu a2,a3,a2
    .word 0x71042018
    .word 0x25230058
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14f5a8:
    .word 0x8e650470
    .word 0x8ca20004
    slt v0,t0,v0
    bnez v0,L14f534
    nop
    jal func_001ffa80
    .word 0x8e640450
    b L14ff24
    nop
L14f5cc:
    .word 0x8f828030
    jal func_001fefa0
    .word 0x8c450340
    .word 0x8f828030
    .word 0x8c450344
    jal func_001fefa0
    .word 0x8e640478
    b L14f668
    .word 0x70004628
L14f5f0:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14f668:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14f5f0
    addiu v0,zero,69
    .word 0xae62047c
    .word 0x3c023f80
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640474
    .word 0x3c023f80
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640478
    b L14f720
    .word 0x70004628
L14f6a8:
    .word 0x8ca2003c
    .word 0x8e630478
    .word 0x24a70058
    .word 0x8e690474
    .word 0x01023018
    .word 0x8c64003c
    .word 0x24650058
    .word 0x8d22003c
    addu a2,a3,a2
    .word 0x71042018
    .word 0x25230058
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14f720:
    .word 0x8e650470
    .word 0x8ca20004
    slt v0,t0,v0
    bnez v0,L14f6a8
    nop
    jal func_001ffa80
    .word 0x8e640450
    b L14ff24
    nop
L14f744:
    .word 0xc661052c
    .word 0x3c023eaa
    ori v0,v0,0xaaac
    .word 0x44821000
    .word 0x3c023f80
    mul.s $f1,$f2,$f1
    .word 0x44820000
    .word 0x3c023f2a
    ori v0,v0,0xaaab
    add.s $f20,$f0,$f1
    .word 0x44821800
    nop
    c.lt.s $f20,$f3
    nop
    bc1f L14f78c
    .word 0x3c023faa
    b L14f7b0
    .word 0x46001d06
L14f78c:
    ori v0,v0,0xaaab
    .word 0x44820000
    nop
    c.le.s $f20,$f0
    nop
    bc1t L14f7b0
    nop
    b L14f7b0
    .word 0x46000506
L14f7b0:
    .word 0x8e640474
    jal func_001ff7d0
    .word 0x4600a306
    .word 0x8e640478
    jal func_001ff7d0
    .word 0x4600a306
    b L14f848
    .word 0x70004628
L14f7d0:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14f848:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14f7d0
    .word 0x3c027000
    ori v0,v0,0x3fa8
    .word 0x8e640494
    jal func_00223150
    .word 0xc44c0000
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640498
    b L14f8f8
    .word 0x70004628
L14f884:
    .word 0x8cc2003c
    .word 0x8e630498
    .word 0x24c70058
    .word 0x8e690494
    .word 0x01023018
    .word 0x8c64003c
    .word 0x24650058
    .word 0x8d22003c
    addu a2,a3,a2
    .word 0x71042018
    .word 0x25230058
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14f8f8:
    .word 0x8e660490
    .word 0x8cc20004
    slt v0,t0,v0
    bnez v0,L14f884
    nop
    .word 0x8e650470
    jal func_001ff9e0
    .word 0x8e640450
    b L14ff24
    nop
L14f920:
    .word 0xc6620530
    .word 0x3c024334
    .word 0x44820000
    nop
    c.lt.s $f2,$f0
    nop
    bc1f L14f968
    .word 0x3c0243b4
    .word 0x3c023f2a
    ori v0,v0,0xaaab
    .word 0x44820800
    .word 0x3c023bb6
    ori v0,v0,0xb61
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f2
    b L14f9e4
    mul.s $f20,$f1,$f0
L14f968:
    .word 0x44821800
    nop
    div.s $f1,$f2,$f3
    .word 0x3c023b36
    ori v0,v0,0xb61
    .word 0x46000864
    cvt.s.w $f1,$f1
    mul.s $f1,$f3,$f1
    sub.s $f1,$f2,$f1
    .word 0x44820000
    nop
    mul.s $f2,$f0,$f1
    .word 0x3c023f00
    .word 0x44820000
    nop
    c.le.s $f2,$f0
    nop
    bc1t L14f9c8
    .word 0x3c023faa
    .word 0x3c023f80
    .word 0x44820000
    nop
    sub.s $f2,$f2,$f0
    .word 0x3c023faa
L14f9c8:
    ori v1,v0,0xaaab
    ori v0,v0,0xaaaa
    .word 0x44820000
    .word 0x44830800
    nop
    mul.s $f0,$f0,$f2
    add.s $f20,$f1,$f0
L14f9e4:
    .word 0x8e640474
    jal func_001ff7d0
    .word 0x4600a306
    .word 0x8e640478
    jal func_001ff7d0
    .word 0x4600a306
    b L14fa78
    .word 0x70004628
L14fa04:
    .word 0x8ca2003c
    .word 0x8e630478
    .word 0x24a70058
    .word 0x8e690474
    .word 0x01023018
    .word 0x8c64003c
    .word 0x24650058
    .word 0x8d22003c
    addu a2,a3,a2
    .word 0x71042018
    .word 0x25230058
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14fa78:
    .word 0x8e650470
    .word 0x8ca20004
    slt v0,t0,v0
    bnez v0,L14fa04
    nop
    jal func_001ffa80
    .word 0x8e640450
    b L14ff24
    nop
L14fa9c:
    ori v0,v0,0x3fa8
    .word 0xc44c0000
    .word 0x8e640474
    .word 0x3c023fd5
    ori v0,v0,0x5555
    .word 0x44820000
    .word 0xc481000c
    sub.s $f0,$f0,$f12
    c.lt.s $f1,$f0
    nop
    bc1f L14fb7c
    .word 0x3c023f2a
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14fb60
    .word 0x70004628
L14faec:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14fb60:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14faec
    nop
    b L14fc3c
    .word 0x8e640450
L14fb7c:
    ori v0,v0,0xaaab
    .word 0x44826000
    jal func_001ff7d0
    nop
    .word 0x3c023f2a
    ori v0,v0,0xaaab
    .word 0x44826000
    jal func_001ff7d0
    .word 0x8e640478
    b L14fc20
    .word 0x70004628
L14fba8:
    .word 0x8c62003c
    .word 0x24670058
    .word 0x8e690474
    .word 0x8e630478
    .word 0x01023018
    .word 0x8d22003c
    .word 0x8c64003c
    .word 0x24650058
    addu a2,a3,a2
    .word 0x01021018
    .word 0x25230058
    .word 0x71042018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14fc20:
    .word 0x8e630470
    .word 0x8c620004
    slt v0,t0,v0
    bnez v0,L14fba8
    nop
    nop
    .word 0x8e640450
L14fc3c:
    jal func_001ffa80
    .word 0x8e650470
    b L14ff24
    nop
L14fc4c:
    ori v1,v1,0x3fa8
    .word 0x8e640474
    .word 0xc46c0000
    .word 0xc480000c
    .word 0x8c830008
    .word 0xc461000c
    sub.s $f0,$f1,$f0
    c.le.s $f0,$f12
    nop
    bc1t L14fd34
    nop
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14fd10
    .word 0x70004628
L14fc98:
    .word 0x8ca2003c
    .word 0x8e630478
    .word 0x24a70058
    .word 0x8e690474
    .word 0x01023018
    .word 0x8c64003c
    .word 0x24650058
    .word 0x8d22003c
    addu a2,a3,a2
    .word 0x71042018
    .word 0x25230058
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
    nop
L14fd10:
    .word 0x8e650470
    .word 0x8ca20004
    slt v0,t0,v0
    bnez v0,L14fc98
    nop
    jal func_001ffa80
    .word 0x8e640450
    b L14ff24
    nop
L14fd34:
    .word 0x8e640010
    .word 0x3c030040
    and v1,a0,v1
    beqz v1,L14ff24
    addiu a1,zero,4
    beq v0,a1,L14fd8c
    andi v0,a0,0x2
    bnez v0,L14fd8c
    nop
    .word 0x8e62000c
    .word 0x72602628
    .word 0x8c420010
    jalr ra,v0
    .word 0x2674000c
    beqz v0,L14fd8c
    nop
    .word 0x8e820000
    addiu a1,zero,4
    .word 0x72602628
    .word 0x8c420014
    jalr ra,v0
    .word 0x70003628
L14fd8c:
    .word 0x8e640010
    .word 0x3c030008
    .word 0x3c02ffbf
    ori v0,v0,0xffff
    or v1,a0,v1
    .word 0xae630010
    .word 0x8e630010
    and v0,v1,v0
    b L14ff24
    .word 0xae620010
L14fdb4:
    ori v0,zero,0xea00
L14fdb8:
    addu v0,s3,v0
    .word 0xc4400000
    .word 0x3c033f80
    .word 0x44831800
    nop
    c.lt.s $f0,$f3
    nop
    bc1f L14fe48
    .word 0x3c027000
    .word 0x3c017000
    .word 0xc4223fa8
    .word 0x3c024080
    .word 0x44820800
    .word 0x3c010001
    addu at,s3,at
    mul.s $f1,$f1,$f2
    .word 0xc420ea00
    add.s $f0,$f0,$f1
    .word 0x3c010001
    addu at,s3,at
    c.lt.s $f0,$f3
    nop
    bc1t L14fe24
    .word 0xe420ea00
    .word 0x3c010001
    addu at,s3,at
    .word 0xac23ea00
L14fe24:
    .word 0x3c010001
    addu at,s3,at
    .word 0x8e6504d0
    .word 0x8e660470
    .word 0xc42cea00
    jal func_001ff930
    .word 0x8e640450
    b L14ff24
    nop
L14fe48:
    ori v0,v0,0x3fa8
    .word 0x8e640474
    .word 0xc44c0000
    .word 0xc480000c
    .word 0x8c820008
    .word 0xc441000c
    sub.s $f0,$f1,$f0
    c.le.s $f0,$f12
    nop
    bc1t L14ff24
    nop
    jal func_00223150
    nop
    .word 0x3c017000
    .word 0xc42c3fa8
    jal func_00223150
    .word 0x8e640478
    b L14ff08
    .word 0x70004628
L14fe94:
    .word 0x8ca2003c
    .word 0x8e630478
    .word 0x24a70058
    .word 0x8e690474
    .word 0x01023018
    .word 0x8c64003c
    .word 0x24650058
    .word 0x8d22003c
    addu a2,a3,a2
    .word 0x71042018
    .word 0x25230058
    .word 0x01021018
    addu a0,a1,a0
    addu v0,v1,v0
    .word 0xc4430008
    .word 0xc442000c
    .word 0xc4410010
    .word 0xc4400014
    .word 0x25080001
    .word 0xe4c30008
    .word 0xe4c2000c
    .word 0xe4c10010
    .word 0xe4c00014
    .word 0xc4820008
    .word 0xc481000c
    .word 0xc4800010
    .word 0xe4c20018
    .word 0xe4c1001c
    .word 0xe4c00020
L14ff08:
    .word 0x8e650470
    .word 0x8ca20004
    slt v0,t0,v0
    bnez v0,L14fe94
    nop
    jal func_001ffa80
    .word 0x8e640450
L14ff24:
    .word 0x8e640450
L14ff28:
    jal func_001ffac0
    nop
    jal func_001c3b80
    .word 0x8e6404ec
    .word 0xc4400030
    .word 0xe6600500
    jal func_001c3b80
    .word 0x8e6404ec
    .word 0xc4400038
    .word 0xe6600508
    .word 0x8e63003c
    andi v0,v1,0x5560
    beqz v0,L14ffb4
    andi v0,v1,0x8000
    .word 0x8e620560
    beqz v0,L14ff94
    nop
    .word 0x8e63047c
    addiu v0,zero,71
    beq v1,v0,L14ff94
    .word 0x2462ffb8
    sltiu at,v0,3
    bnez at,L14ff94
    .word 0x2462fffc
    sltiu at,v0,3
    beqz at,L14ffc8
    .word 0x72202628
L14ff94:
    .word 0x8e630540
    addiu v0,zero,2
    bne v1,v0,L14ffc4
    .word 0x72602628
    jal func_00151400
    nop
    b L14ffc4
    nop
L14ffb4:
    beqz v0,L14ffc4
    .word 0x72602628
    jal func_00151400
    nop
L14ffc4:
    .word 0x72202628
L14ffc8:
    jal func_001c3b80
    nop
    jal func_001c3b80
    .word 0x72402628
    jal func_001c3b80
    .word 0x8e6404e0
    .word 0x70409628
    .word 0x8e62044c
    jal func_001c3b70
    .word 0x8c440018
    addiu a1,zero,8
L14fff4:
    .word 0x8e440000
    .word 0x8e430004
    .word 0x24a5ffff
    .word 0xac440000
    .word 0xac430004
    .word 0x26520008
    bgtz a1,L14fff4
    .word 0x24420008
    jal func_001c3b80
    .word 0x8e6404e0
    .word 0x70409628
    .word 0x8e62044c
    jal func_001c3b70
    .word 0x8c44001c
    addiu a1,zero,8
L150030:
    .word 0x8e440000
    .word 0x8e430004
    .word 0x24a5ffff
    .word 0xac440000
    .word 0xac430004
    .word 0x26520008
    bgtz a1,L150030
    .word 0x24420008
    .word 0x8e62044c
    jal func_001c3b00
    .word 0x8c440018
    .word 0x8e62044c
    jal func_001c3b00
    .word 0x8c44001c
    jal func_001c3b80
    .word 0x8e6404e4
    .word 0x70409628
    jal func_001c3b80
    .word 0x72002628
    addiu a2,zero,2
    .word 0x72402628
    jal func_001c7c70
    .word 0x70402e28
    jal func_001c3b80
    .word 0x8e6404e8
    .word 0x70409628
    jal func_001c3b80
    .word 0x72002628
    addiu a2,zero,2
    .word 0x72402628
    jal func_001c7c70
    .word 0x70402e28
    jal func_001c3b80
    .word 0x8e6404ec
    .word 0x70409628
    jal func_001c3b80
    .word 0x72002628
    addiu a2,zero,2
    .word 0x72402628
    jal func_001c7c70
    .word 0x70402e28
    .word 0xc6620500
    .word 0xc6610504
    .word 0xc6600508
    .word 0x72002628
    .word 0xe6620014
    .word 0xe6610018
    .word 0xe660001c
    .word 0x8e62044c
    .word 0xc6620014
    .word 0xc6610018
    .word 0xc660001c
    .word 0x8c420008
    .word 0xe442001c
    .word 0xe4410020
    jal func_001c3b80
    .word 0xe4400024
    .word 0x8e6404fc
    jal func_001c3b80
    .word 0x70409628
    .word 0xc6420030
    .word 0xc6410034
    .word 0xc6400038
    .word 0x72002628
    .word 0xe4420030
    .word 0xe4410034
    jal func_001c3b80
    .word 0xe4400038
    .word 0xc4540010
    jal func_001c3b80
    .word 0x72002628
    .word 0xc4550014
    jal func_001c3b80
    .word 0x72002628
    .word 0x8e6404fc
    jal func_001c3b80
    .word 0xc4560018
    .word 0xc4400030
    .word 0x8e6404fc
    jal func_001c3b80
    add.s $f20,$f20,$f0
    .word 0xe4540030
    jal func_001c3b80
    .word 0x8e6404fc
    .word 0xc4400034
    .word 0x8e6404fc
    jal func_001c3b80
    add.s $f20,$f21,$f0
    .word 0xe4540034
    jal func_001c3b80
    .word 0x8e6404fc
    .word 0xc4400038
    .word 0x8e6404fc
    jal func_001c3b80
    add.s $f20,$f22,$f0
    .word 0xe4540038
    jal func_001c3b80
    .word 0x72002628
    .word 0xc4400020
    .word 0x3c033f00
    .word 0x44830800
    .word 0x72002628
    jal func_001c3b80
    mul.s $f20,$f1,$f0
    .word 0xc4400024
    .word 0x3c033f00
    .word 0x44830800
    .word 0x72002628
    jal func_001c3b80
    mul.s $f21,$f1,$f0
    .word 0xc4400028
    .word 0x3c033f00
    .word 0x44830800
    .word 0x8e6404fc
    jal func_001c3b80
    mul.s $f22,$f1,$f0
    .word 0xc4400030
    .word 0x8e6404fc
    jal func_001c3b80
    add.s $f20,$f20,$f0
    .word 0xe4540030
    jal func_001c3b80
    .word 0x8e6404fc
    .word 0xc4400034
    .word 0x8e6404fc
    jal func_001c3b80
    add.s $f20,$f21,$f0
    .word 0xe4540034
    jal func_001c3b80
    .word 0x8e6404fc
    .word 0xc4400038
    .word 0x8e6404fc
    jal func_001c3b80
    add.s $f20,$f22,$f0
    .word 0xe4540038
    jal func_001c3b80
    .word 0x8e6404ec
    .word 0x8e6404f8
    jal func_001c3b80
    .word 0x70409628
    addiu a1,zero,8
L150264:
    .word 0x8e440000
    .word 0x8e430004
    .word 0x24a5ffff
    .word 0xac440000
    .word 0xac430004
    .word 0x26520008
    bgtz a1,L150264
    .word 0x24420008
    .word 0x8e64003c
    andi v0,a0,0x2980
    bnez v0,L1502b8
    .word 0x3c017000
    andi v0,a0,0x5000
    beqz v0,L150498
    .word 0x3c020004
    .word 0x8e630010
    .word 0x3c020002
    and v0,v1,v0
    beqz v0,L150494
    nop
    .word 0x3c017000
L1502b8:
    .word 0x8c223fc0
    andi v0,v0,0x2
    beqzl v0,L1503d4
    .word 0x72002628
    .word 0x3c010030
    .word 0x8c22a630
    andi v0,v0,0x2
    bnez v0,L1503d0
    andi v0,a0,0x2000
    beqz v0,L1503d0
    .word 0x72002628
    jal func_001c3b80
    nop
    .word 0x8e6404f8
    jal func_001c3b80
    .word 0x70409628
    .word 0xc6420030
    .word 0xc6410034
    .word 0xc6400038
    .word 0x72002628
    .word 0xe4420030
    .word 0xe4410034
    jal func_001c3b80
    .word 0xe4400038
    .word 0xc6610504
    .word 0x3c033f00
    .word 0x44831000
    .word 0xc4400010
    .word 0x72002628
    mul.s $f1,$f2,$f1
    jal func_001c3b80
    mul.s $f20,$f1,$f0
    .word 0xc6610504
    .word 0x3c033f00
    .word 0x44831000
    .word 0xc4400014
    .word 0x72002628
    mul.s $f1,$f2,$f1
    jal func_001c3b80
    mul.s $f21,$f1,$f0
    .word 0xc6610504
    .word 0x3c033f00
    .word 0x44831000
    .word 0xc4400018
    .word 0x8e6404f8
    mul.s $f20,$f20,$f2
    mul.s $f1,$f2,$f1
    mul.s $f22,$f1,$f0
    jal func_001c3b80
    mul.s $f22,$f22,$f2
    .word 0xc4400030
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f20,$f0
    .word 0xe4540030
    jal func_001c3b80
    .word 0x8e6404f8
    .word 0xc4400034
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f21,$f0
    .word 0xe4540034
    jal func_001c3b80
    .word 0x8e6404f8
    .word 0xc4400038
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f22,$f0
    b L150680
    .word 0xe4540038
L1503d0:
    .word 0x72002628
L1503d4:
    jal func_001c3b80
    nop
    .word 0x8e6404f8
    jal func_001c3b80
    .word 0x70409628
    .word 0xc6420030
    .word 0xc6410034
    .word 0xc6400038
    .word 0x72002628
    .word 0xe4420030
    .word 0xe4410034
    jal func_001c3b80
    .word 0xe4400038
    .word 0xc6610504
    .word 0xc4400010
    .word 0x72002628
    jal func_001c3b80
    mul.s $f20,$f1,$f0
    .word 0xc6610504
    .word 0xc4400014
    .word 0x72002628
    jal func_001c3b80
    mul.s $f21,$f1,$f0
    .word 0xc6610504
    .word 0xc4400018
    .word 0x8e6404f8
    jal func_001c3b80
    mul.s $f22,$f1,$f0
    .word 0xc4400030
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f20,$f0
    .word 0xe4540030
    jal func_001c3b80
    .word 0x8e6404f8
    .word 0xc4400034
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f21,$f0
    .word 0xe4540034
    jal func_001c3b80
    .word 0x8e6404f8
    .word 0xc4400038
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f22,$f0
    b L150680
    .word 0xe4540038
L150494:
    .word 0x3c020004
L150498:
    and v0,a0,v0
    bnez v0,L150684
    .word 0x72602628
    jal func_001c3b80
    .word 0x72002628
    .word 0x8e6404f8
    jal func_001c3b80
    .word 0x70409628
    .word 0xc6420030
    .word 0xc6410034
    .word 0xc6400038
    .word 0x72002628
    .word 0xe4420030
    .word 0xe4410034
    jal func_001c3b80
    .word 0xe4400038
    .word 0xc6610500
    .word 0xc4400000
    .word 0x72002628
    jal func_001c3b80
    mul.s $f20,$f1,$f0
    .word 0xc6610500
    .word 0xc4400004
    .word 0x72002628
    jal func_001c3b80
    mul.s $f21,$f1,$f0
    .word 0xc6610500
    .word 0xc4400008
    .word 0x8e6404f8
    jal func_001c3b80
    mul.s $f22,$f1,$f0
    .word 0xc4400030
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f20,$f0
    .word 0xe4540030
    jal func_001c3b80
    .word 0x8e6404f8
    .word 0xc4400034
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f21,$f0
    .word 0xe4540034
    jal func_001c3b80
    .word 0x8e6404f8
    .word 0xc4400038
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f22,$f0
    .word 0xe4540038
    jal func_001c3b80
    .word 0x72002628
    .word 0xc6610504
    .word 0xc4400010
    .word 0x72002628
    jal func_001c3b80
    mul.s $f20,$f1,$f0
    .word 0xc6610504
    .word 0xc4400014
    .word 0x72002628
    jal func_001c3b80
    mul.s $f21,$f1,$f0
    .word 0xc6610504
    .word 0xc4400018
    .word 0x8e6404f8
    jal func_001c3b80
    mul.s $f22,$f1,$f0
    .word 0xc4400030
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f20,$f0
    .word 0xe4540030
    jal func_001c3b80
    .word 0x8e6404f8
    .word 0xc4400034
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f21,$f0
    .word 0xe4540034
    jal func_001c3b80
    .word 0x8e6404f8
    .word 0xc4400038
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f22,$f0
    .word 0xe4540038
    jal func_001c3b80
    .word 0x72002628
    .word 0xc6610508
    .word 0xc4400020
    .word 0x72002628
    jal func_001c3b80
    mul.s $f20,$f1,$f0
    .word 0xc6610508
    .word 0xc4400024
    .word 0x72002628
    jal func_001c3b80
    mul.s $f21,$f1,$f0
    .word 0xc6610508
    .word 0xc4400028
    .word 0x8e6404f8
    jal func_001c3b80
    mul.s $f22,$f1,$f0
    .word 0xc4400030
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f20,$f0
    .word 0xe4540030
    jal func_001c3b80
    .word 0x8e6404f8
    .word 0xc4400034
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f21,$f0
    .word 0xe4540034
    jal func_001c3b80
    .word 0x8e6404f8
    .word 0xc4400038
    .word 0x8e6404f8
    jal func_001c3b80
    add.s $f20,$f22,$f0
    .word 0xe4540038
L150680:
    .word 0x72602628
L150684:
    jal func_0013bcf0
    nop
    jal func_001c3b70
    .word 0x72202628
    .word 0x24450030
    .word 0x26641e18
    jal func_00238350
    .word 0x70003628
    jal func_00191ef0
    .word 0x72602628
    .word 0x8e620518
    beqzl v0,L150760
    .word 0x3c027000
    .word 0x3c01002e
    .word 0xc421e190
    .word 0xc4430058
    .word 0x3c01002e
    .word 0xc420e1a0
    .word 0x3c023f80
    .word 0x44821000
    nop
    mula.s $f1,$f3
    sub.s $f2,$f2,$f3
    .word 0x3c010001
    addu at,s3,at
    madd.s $f0,$f0,$f2
    .word 0xe420eb18
    .word 0x3c01002e
    .word 0xc421e194
    .word 0x3c01002e
    .word 0xc420e1a4
    mula.s $f1,$f3
    .word 0x3c010001
    addu at,s3,at
    madd.s $f0,$f0,$f2
    .word 0xe420eb1c
    .word 0x3c01002e
    .word 0xc421e198
    .word 0x3c01002e
    .word 0xc420e1a8
    mula.s $f1,$f3
    .word 0x3c010001
    addu at,s3,at
    madd.s $f0,$f0,$f2
    .word 0xe420eb20
    .word 0x3c01002e
    .word 0xc421e19c
    .word 0x3c01002e
    .word 0xc420e1ac
    mula.s $f1,$f3
    .word 0x3c010001
    addu at,s3,at
    madd.s $f0,$f0,$f2
    .word 0xe420eb24
    .word 0x3c027000
L150760:
    ori v0,v0,0x3fb0
    .word 0xc4400000
    .word 0x3c010001
    ori v1,zero,0xeb2c
    addu at,s3,at
    addu v1,s3,v1
    .word 0x3c023f99
    ori v0,v0,0x999a
    .word 0x44820800
    nop
    mul.s $f0,$f1,$f0
    ori v0,zero,0xeb28
    addu a0,s3,v0
    .word 0x3c023c23
    .word 0xe4800000
    .word 0xc422eb28
    ori v0,v0,0xd70a
    .word 0x44820800
    addiu v0,zero,8192
    .word 0x46001024
    .word 0x3c010001
    addu at,s3,at
    cvt.s.w $f0,$f0
    sub.s $f0,$f2,$f0
    .word 0xe420eb28
    .word 0x3c017000
    .word 0xc4203fb0
    mul.s $f0,$f1,$f0
    .word 0x3c010001
    addu at,s3,at
    .word 0xe4600000
    .word 0xc421eb2c
    .word 0x46000824
    .word 0x3c010001
    addu at,s3,at
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    .word 0xe420eb2c
    .word 0x8e63003c
    beq v1,v0,L15084c
    .word 0x3c020001
    beq v1,v0,L15084c
    .word 0x3c020002
    beq v1,v0,L15084c
    addiu v0,zero,2048
    bne v1,v0,L150904
    .word 0x3c017000
    .word 0x8e630474
    .word 0x3c023e99
    ori v0,v0,0x999a
    .word 0x44820000
    .word 0x8c620008
    .word 0xc461000c
    .word 0xc442000c
    sub.s $f1,$f2,$f1
    c.le.s $f1,$f0
    nop
    bc1t L150900
    nop
L15084c:
    .word 0x8e620518
    beqzl v0,L15089c
    .word 0x3c023e66
    .word 0xc442015c
    .word 0x3c023f80
    .word 0x44820000
    nop
    c.lt.s $f2,$f0
    nop
    bc1t L15088c
    .word 0x3c023ee6
    .word 0x3c023ee6
    ori v0,v0,0x6666
    .word 0x44821000
    b L1508a8
    .word 0x3c017000
L15088c:
    ori v0,v0,0x6666
    .word 0x44820000
    b L1508a4
    mul.s $f2,$f2,$f0
L15089c:
    ori v0,v0,0x6666
    .word 0x44821000
L1508a4:
    .word 0x3c017000
L1508a8:
    .word 0xc4213fa8
    .word 0x3c023e4c
    ori v0,v0,0xcccd
    .word 0x44820000
    ori v0,zero,0xeb4c
    div.s $f1,$f1,$f0
    addu v0,s3,v0
    .word 0x3c010001
    addu at,s3,at
    .word 0xc4400000
    mul.s $f1,$f2,$f1
    add.s $f0,$f0,$f1
    .word 0xe4400000
    .word 0xc420eb4c
    c.le.s $f0,$f2
    nop
    bc1t L15095c
    .word 0x3c017000
    .word 0x3c010001
    addu at,s3,at
    b L150958
    .word 0xe422eb4c
L150900:
    .word 0x3c017000
L150904:
    .word 0xc4213fa8
    .word 0x3c023e99
    ori v0,v0,0x999a
    .word 0x44820000
    ori v0,zero,0xeb4c
    div.s $f1,$f1,$f0
    addu v0,s3,v0
    .word 0x3c010001
    addu at,s3,at
    .word 0xc4400000
    sub.s $f0,$f0,$f1
    .word 0xe4400000
    .word 0xc420eb4c
    .word 0x44800800
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L150958
    .word 0x3c010001
    addu at,s3,at
    .word 0xac20eb4c
L150958:
    .word 0x3c017000
L15095c:
    .word 0xc4203fb0
    .word 0x3c024040
    .word 0x44821000
    ori v0,zero,0xeb50
    addu v1,s3,v0
    mul.s $f0,$f2,$f0
    .word 0x3c010001
    .word 0x3c024080
    addu at,s3,at
    .word 0xe4600000
    .word 0xc422eb50
    .word 0x44820800
    ori v0,zero,0xeb54
    addu v0,s3,v0
    .word 0x46001024
    .word 0x3c010001
    addu at,s3,at
    cvt.s.w $f0,$f0
    sub.s $f0,$f2,$f0
    .word 0xe420eb50
    .word 0x3c017000
    .word 0xc4203fb0
    mul.s $f0,$f1,$f0
    .word 0x3c010001
    addu at,s3,at
    .word 0xe4400000
    .word 0xc421eb54
    .word 0x46000824
    .word 0x3c010001
    addu at,s3,at
    cvt.s.w $f0,$f0
    sub.s $f0,$f1,$f0
    .word 0xe420eb54
    jal func_00142a90
    .word 0x8e640030
    jal func_00142950
    .word 0x70402628
    jal func_001c3b80
    .word 0x70402628
    .word 0x8e65003c
    addiu s2,zero,1
    .word 0x70408628
    .word 0x72401e28
    xori v0,a1,0x100
    sltiu v0,v0,1
    bnez v0,L150a20
    .word 0x72402628
    xori v0,a1,0x80
    sltiu v0,v0,1
L150a20:
    bnez v0,L150a34
    addiu v0,zero,2048
    beq a1,v0,L150a34
    nop
    .word 0x70002628
L150a34:
    bnez a0,L150a48
    .word 0x3c020001
    beq a1,v0,L150a48
    nop
    .word 0x70001e28
L150a48:
    bnez v1,L150a5c
    .word 0x3c020002
    beq a1,v0,L150a5c
    nop
    .word 0x70009628
L150a5c:
    .word 0xc6020030
    .word 0xc6010034
    .word 0xc6000038
    .word 0x27a500c0
    .word 0x3c02bf00
    .word 0x3c010001
    .word 0x44821800
    nop
    .word 0xe4a20000
    .word 0xe4a10004
    .word 0xe4a00008
    .word 0xc6010020
    .word 0xc7a000c0
    .word 0x27b400c4
    .word 0x27b500c8
    mul.s $f1,$f3,$f1
    addu at,s3,at
    add.s $f0,$f0,$f1
    .word 0xe7a000c0
    .word 0xc6010024
    .word 0xc6800000
    mul.s $f1,$f3,$f1
    add.s $f0,$f0,$f1
    .word 0xe6800000
    .word 0xc6010028
    .word 0xc6a00000
    mul.s $f1,$f3,$f1
    add.s $f0,$f0,$f1
    .word 0xe6a00000
    .word 0x8c24eb10
    jal func_0022b220
    .word 0x72403628
    .word 0xc6010020
    .word 0xc7a000c0
    .word 0x3c010001
    addu at,s3,at
    .word 0x27a500c0
    add.s $f0,$f0,$f1
    .word 0xe7a000c0
    .word 0xc6010024
    .word 0xc6800000
    add.s $f0,$f0,$f1
    .word 0xe6800000
    .word 0xc6010028
    .word 0xc6a00000
    add.s $f0,$f0,$f1
    .word 0xe6a00000
    .word 0x8c24eb14
    jal func_0022b220
    .word 0x72403628
    .word 0x8e620518
    beqz v0,L150bd8
    .word 0x72202628
    jal func_001c3b70
    .word 0x72202628
    .word 0x8e640518
    .word 0x3c030030
    .word 0x2463a4c0
    addiu a1,zero,8
    .word 0x8c840000
    sll a0,a0,0x6
    addu a2,v1,a0
L150b54:
    .word 0x8c440000
    .word 0x8c430004
    .word 0x24a5ffff
    .word 0xacc40000
    .word 0xacc30004
    .word 0x24420008
    bgtz a1,L150b54
    .word 0x24c60008
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L150bd4
    nop
    .word 0x8e630518
    .word 0x3c020030
    .word 0x3c017000
    .word 0x2442a4c0
    ori at,at,0x3f10
    .word 0x8c630000
    addiu a0,zero,8
    sll v1,v1,0x6
    addu a2,v0,v1
    addu a1,v1,at
L150bb4:
    .word 0x8cc30000
    .word 0x8cc20004
    .word 0x2484ffff
    .word 0xaca30000
    .word 0xaca20004
    .word 0x24c60008
    bgtz a0,L150bb4
    .word 0x24a50008
L150bd4:
    .word 0x72202628
L150bd8:
    jal func_001c3b70
    nop
    .word 0x72602628
    jal func_00150c20
    .word 0x70402e28
L150bec:
    .word 0x7bbf0070
    .word 0x7bb50060
    .word 0x7bb40050
    .word 0x7bb30040
    .word 0x7bb20030
    .word 0x7bb10020
    .word 0x7bb00010
    .word 0xc7b60008
    .word 0xc7b50004
    .word 0xc7b40000
    jr ra
    .word 0x27bd00d0
}
