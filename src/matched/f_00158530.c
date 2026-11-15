extern void func_00119ff8(void);
extern void func_001595a0(void);
extern void func_001594d0(void);
extern void func_001597d0(void);
extern void func_00169860(void);
extern void func_0013b2c0(void);
extern void func_001593e0(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdff40
    .word 0x7fbf0090
    .word 0x7fb70080
    .word 0x7fb60070
    .word 0x7fb50060
    .word 0x7fb40050
    .word 0x7fb30040
    .word 0x7fb20030
    .word 0x7fb10020
    .word 0x7fb00010
    .word 0xe7b60008
    .word 0xe7b50004
    .word 0xe7b40000
    .word 0x8ca30004
    .word 0xc4d50004
    .word 0x7080be28
    .word 0x70e0a628
    .word 0x71009e28
    .word 0x70a0b628
    beqz v1,L1585ac
    .word 0x70c0ae28
    .word 0x8c620578
    beqz v0,L1585ac
    nop
    .word 0xc4600598
    .word 0x3c023c8e
    ori v0,v0,0xfa35
    .word 0x44820800
    jal func_00119ff8
    mul.s $f12,$f1,$f0
    mul.s $f21,$f21,$f0
L1585ac:
    .word 0x8ec30008
    addiu v0,zero,1
    bne v1,v0,L1585cc
    nop
    .word 0x3c03c220
    .word 0xae830000
    b L1593a0
    .word 0xae600000
L1585cc:
    .word 0x8ec30000
    beq v1,v0,L1585ec
    .word 0x27a500ac
    .word 0xc6a00000
    .word 0xe6800000
    b L1593a0
    .word 0xe6750000
    .word 0x27a500ac
L1585ec:
    .word 0x27a600b0
    .word 0x27a700b4
    jal func_001595a0
    .word 0x72c02628
    .word 0xc6c1003c
    .word 0xc6c0004c
    c.eq.s $f1,$f0
    nop
    bc1f L159004
    nop
    .word 0x3c024cbe
    ori v0,v0,0xbc20
    .word 0x4482b000
    .word 0x70008e28
    .word 0x8ec20160
    beqz v0,L15864c
    .word 0x70008628
    .word 0x3c024020
    .word 0x44820000
    addiu s1,zero,1
    .word 0x3c024080
    .word 0x4482a000
    b L158758
    mul.s $f22,$f0,$f21
L15864c:
    .word 0x8ea20038
    beqz v0,L158758
    nop
    .word 0x8ec3013c
    beqz v1,L158670
    nop
    addiu v0,zero,2
    bne v1,v0,L158758
    nop
L158670:
    bnez v1,L158698
    .word 0x3c023f00
    .word 0x8ec300e4
    .word 0x3c023f00
    .word 0x44820000
    .word 0xc4610010
    cvt.s.w $f1,$f1
    b L15869c
    add.s $f1,$f0,$f1
    .word 0x3c023f00
L158698:
    .word 0x44820800
L15869c:
    .word 0xc6c00044
    .word 0x44801000
    sub.s $f1,$f0,$f1
    c.lt.s $f1,$f2
    nop
    bc1f L1586bc
    nop
    neg.s $f1,$f1
L1586bc:
    .word 0x44800000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L158758
    nop
    .word 0xc6c00054
    .word 0xc7a200b0
    mul.s $f0,$f1,$f0
    c.le.s $f2,$f0
    nop
    bc1t L15870c
    nop
    .word 0x8ec30058
    addiu v0,zero,1
    bne v1,v0,L158758
    nop
    addiu v0,zero,2
    b L158758
    .word 0xaec20058
L15870c:
    .word 0x8ec40058
    addiu v1,zero,1
    bne a0,v1,L158734
    addiu v0,zero,2
    jal func_001594d0
    .word 0x72c02628
    addiu v0,zero,3
    b L158758
    .word 0xaec20058
    addiu v0,zero,2
L158734:
    bne a0,v0,L158758
    nop
    .word 0x3c023f80
    .word 0x44820000
    .word 0x70608e28
    sub.s $f22,$f2,$f0
    .word 0x3c024080
    .word 0x70608628
    .word 0x4482a000
L158758:
    bnez s1,L158888
    nop
    .word 0xc6a0000c
    .word 0x44801000
    nop
    c.le.s $f0,$f2
    nop
    bc1t L158848
    nop
    .word 0xc6c1015c
    c.lt.s $f1,$f2
    nop
    bc1t L1587a0
    nop
    .word 0x3c017000
    .word 0xc4203fa8
    sub.s $f0,$f1,$f0
    .word 0xe6c0015c
L1587a0:
    .word 0xc6c1015c
    .word 0x44800000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L1587d0
    nop
    .word 0xaec0015c
    .word 0xc6c00158
    .word 0xc6b4000c
    addiu s1,zero,1
    mul.s $f22,$f21,$f0
L1587d0:
    .word 0x8fa400ac
    beqz a0,L158848
    nop
    .word 0xc7a200b4
    .word 0x3c024120
    .word 0x44820000
    nop
    c.lt.s $f2,$f0
    nop
    bc1f L158848
    nop
    .word 0x8c830140
    .word 0x8ec20140
    bne v1,v0,L158848
    nop
    .word 0xc4800014
    .word 0x3c023f8c
    ori v0,v0,0xcccd
    .word 0x44820800
    nop
    mul.s $f0,$f1,$f0
    c.lt.s $f0,$f21
    nop
    bc1f L158848
    nop
    .word 0x3c024000
    .word 0x44820000
    .word 0xc6b4000c
    sub.s $f22,$f2,$f0
    addiu s1,zero,1
L158848:
    .word 0x8ec20164
    beqz v0,L158888
    nop
    .word 0xaec00164
    .word 0xc6c10044
    .word 0x46000824
    cvt.s.w $f0,$f0
    c.eq.s $f1,$f0
    nop
    bc1f L158878
    addiu v0,zero,1
    .word 0x70001628
L158878:
    beqz v0,L158888
    nop
    addiu v0,zero,1
    .word 0xaec20160
L158888:
    beqz s1,L159004
    nop
    .word 0x3c0240a0
    .word 0x44820000
    nop
    c.le.s $f22,$f0
    nop
    bc1tl L1588b8
    .word 0x46000586
    b L1588bc
    .word 0x8ec400e4
    .word 0x46000586
L1588b8:
    .word 0x8ec400e4
L1588bc:
    .word 0x8ec30144
    .word 0x8c82000c
    sll v1,v1,0x5
    .word 0x8c910008
    beqz s0,L158980
    addu s2,v0,v1
    .word 0x8ec2013c
    bnez v0,L158904
    .word 0x3c023f00
    .word 0xc4810010
    .word 0x3c023f00
    .word 0x44820000
    nop
    cvt.s.w $f1,$f1
    add.s $f0,$f0,$f1
    b L158908
    .word 0xe7a000bc
    .word 0x3c023f00
L158904:
    .word 0xafa200bc
L158908:
    .word 0x8ec20140
    .word 0x8ec300e4
    sltu v0,zero,v0
    xori v0,v0,0x1
    beqz v0,L158928
    .word 0x8ee41ec4
    bnez a0,L158938
    nop
L158928:
    bnez v0,L158940
    nop
    bnez a0,L158940
    nop
L158938:
    b L15895c
    .word 0xc7a000bc
L158940:
    .word 0x8c620010
    .word 0xc7a000bc
    .word 0x24420001
    .word 0x44820800
    nop
    cvt.s.w $f1,$f1
    sub.s $f0,$f1,$f0
L15895c:
    .word 0xe7a000b8
    .word 0xc6c1003c
    .word 0xc7a000bc
    c.eq.s $f0,$f1
    nop
    bc1f L1589b0
    nop
    b L158f28
    .word 0x70001628
L158980:
    .word 0x27a700bc
    .word 0x4600a346
    .word 0x27a800b8
    .word 0x4600b306
    .word 0x72e02628
    .word 0x72c02e28
    jal func_001597d0
    .word 0x72a03628
    bnez v0,L1589b0
    nop
    b L158f28
    .word 0x70001628
L1589b0:
    .word 0x8ec40140
    .word 0x8ec300e4
    beqz a0,L158aa0
    .word 0xc7a000b8
    .word 0xc641fffc
    .word 0xc645fff8
    .word 0xc6d40148
    .word 0x44801000
    sub.s $f4,$f1,$f5
    c.eq.s $f2,$f4
    nop
    bc1f L1589ec
    .word 0x8ec20144
    b L158a28
    .word 0xc642001c
L1589ec:
    .word 0x8c660010
    .word 0x3c054000
    .word 0x44850800
    nop
    mul.s $f2,$f1,$f0
    .word 0x3c053f80
    sll a2,a2,0x1
    .word 0x44861800
    .word 0x44850800
    cvt.s.w $f3,$f3
    sub.s $f1,$f2,$f1
    div.s $f1,$f1,$f3
    mul.s $f1,$f1,$f4
    add.s $f5,$f5,$f1
    .word 0xc642001c
L158a28:
    .word 0xc6460018
    .word 0x44800800
    sub.s $f4,$f2,$f6
    c.eq.s $f1,$f4
    nop
    bc1f L158a4c
    nop
    b L158a88
    .word 0xc6c1014c
L158a4c:
    .word 0x8c660010
    .word 0x3c054000
    .word 0x44850800
    nop
    mul.s $f2,$f1,$f0
    .word 0x3c053f80
    sll a2,a2,0x1
    .word 0x44861800
    .word 0x44850800
    cvt.s.w $f3,$f3
    sub.s $f1,$f2,$f1
    div.s $f1,$f1,$f3
    mul.s $f1,$f1,$f4
    add.s $f6,$f6,$f1
    .word 0xc6c1014c
L158a88:
    sub.s $f2,$f6,$f5
    addiu t2,zero,1
    mul.s $f1,$f1,$f2
    add.s $f4,$f5,$f1
    b L158bf8
    add.s $f4,$f4,$f22
L158aa0:
    .word 0x8c660008
    .word 0x8ec20144
    .word 0x8c65000c
    .word 0xc6c20048
    .word 0x44801800
    .word 0x24c6ffff
    sll a2,a2,0x5
    addu a1,a1,a2
    .word 0xc4a1001c
    .word 0xc4a50018
    sub.s $f4,$f1,$f5
    c.eq.s $f3,$f4
    nop
    bc1f L158ae4
    .word 0x2442ffff
    b L158b20
    .word 0xc642fffc
L158ae4:
    .word 0x8c660010
    .word 0x3c054000
    .word 0x44850800
    nop
    mul.s $f2,$f1,$f2
    .word 0x3c053f80
    sll a2,a2,0x1
    .word 0x44861800
    .word 0x44850800
    cvt.s.w $f3,$f3
    sub.s $f1,$f2,$f1
    div.s $f1,$f1,$f3
    mul.s $f1,$f1,$f4
    add.s $f5,$f5,$f1
    .word 0xc642fffc
L158b20:
    .word 0xc646fff8
    .word 0xc6c30148
    .word 0x44800800
    sub.s $f4,$f2,$f6
    c.eq.s $f1,$f4
    nop
    bc1f L158b48
    sub.s $f20,$f5,$f3
    b L158b84
    .word 0xc642001c
L158b48:
    .word 0x8c660010
    .word 0x3c054000
    .word 0x44850800
    nop
    mul.s $f2,$f1,$f0
    .word 0x3c053f80
    sll a2,a2,0x1
    .word 0x44861800
    .word 0x44850800
    cvt.s.w $f3,$f3
    sub.s $f1,$f2,$f1
    div.s $f1,$f1,$f3
    mul.s $f1,$f1,$f4
    add.s $f6,$f6,$f1
    .word 0xc642001c
L158b84:
    .word 0xc6450018
    .word 0x44800800
    sub.s $f4,$f2,$f5
    c.eq.s $f1,$f4
    nop
    bc1f L158ba8
    nop
    b L158be4
    .word 0xc6c1014c
L158ba8:
    .word 0x8c660010
    .word 0x3c054000
    .word 0x44850800
    nop
    mul.s $f2,$f1,$f0
    .word 0x3c053f80
    sll a2,a2,0x1
    .word 0x44861800
    .word 0x44850800
    cvt.s.w $f3,$f3
    sub.s $f1,$f2,$f1
    div.s $f1,$f1,$f3
    mul.s $f1,$f1,$f4
    add.s $f5,$f5,$f1
    .word 0xc6c1014c
L158be4:
    sub.s $f2,$f5,$f6
    addiu t2,zero,-1
    mul.s $f1,$f1,$f2
    add.s $f4,$f6,$f1
    sub.s $f4,$f4,$f22
L158bf8:
    .word 0x3c064000
    .word 0x44860800
    .word 0x8c65000c
    mul.s $f1,$f1,$f0
    .word 0x3c063f80
    sll a3,v0,0x5
    addiu t1,zero,1
    .word 0x44861000
    addu a3,a1,a3
    sub.s $f1,$f1,$f2
    .word 0x70004628
    sll t3,t2,0x5
    .word 0x44801800
L158c2c:
    blez t2,L158c48
    nop
    slt at,v0,s1
    beqz at,L158cd8
    nop
    b L158c54
    .word 0xc4e2001c
L158c48:
    bltz v0,L158cd8
    nop
    .word 0xc4e2001c
L158c54:
    .word 0xc4e60018
    sub.s $f5,$f2,$f6
    c.eq.s $f3,$f5
    nop
    bc1f L158c74
    .word 0x25290001
    b L158c94
    nop
L158c74:
    .word 0x8c660010
    sll a2,a2,0x1
    .word 0x44861000
    nop
    cvt.s.w $f2,$f2
    div.s $f2,$f1,$f2
    mul.s $f2,$f2,$f5
    add.s $f6,$f6,$f2
L158c94:
    beqz a0,L158cb4
    nop
    c.lt.s $f6,$f4
    nop
    bc1tl L158cd0
    addu a3,a3,t3
    b L158cd8
    addiu t0,zero,1
L158cb4:
    c.le.s $f6,$f4
    nop
    bc1f L158ccc
    nop
    b L158cd8
    addiu t0,zero,1
L158ccc:
    addu a3,a3,t3
L158cd0:
    b L158c2c
    addu v0,v0,t2
L158cd8:
    bnez t0,L158ce8
    nop
    b L158f28
    .word 0x70001628
L158ce8:
    beqz a0,L158d04
    nop
    .word 0xc6c3014c
    .word 0x3c023f80
    .word 0x44821000
    b L158d0c
    sub.s $f12,$f2,$f3
L158d04:
    .word 0xc6cc014c
    nop
L158d0c:
    slti at,t1,2
    beqz at,L158d20
    nop
    b L158f28
    .word 0x70001628
L158d20:
    .word 0xc6c20044
    .word 0xc7a300bc
    .word 0x44802000
    sub.s $f5,$f3,$f2
    c.lt.s $f5,$f4
    nop
    bc1f L158d44
    nop
    neg.s $f5,$f5
L158d44:
    beqz a0,L158e34
    nop
    .word 0x8ec70144
    .word 0x2522fffe
    .word 0x8c640008
    addu a2,a3,v0
    slt v0,a2,a0
    bnez v0,L158d70
    .word 0x2482ffff
    .word 0x2486ffff
    .word 0x2482ffff
L158d70:
    .word 0x44801800
    sll v0,v0,0x5
    addu v0,a1,v0
    .word 0xc444001c
    .word 0xc4470018
    sub.s $f6,$f4,$f7
    c.eq.s $f3,$f6
    nop
    bc1f L158da0
    nop
    b L158ddc
    sll v0,a2,0x5
L158da0:
    .word 0x8c640010
    .word 0x3c024000
    .word 0x44821800
    nop
    mul.s $f3,$f3,$f0
    .word 0x3c023f80
    sll a0,a0,0x1
    .word 0x44842000
    .word 0x44820000
    cvt.s.w $f4,$f4
    sub.s $f0,$f3,$f0
    div.s $f0,$f0,$f4
    mul.s $f0,$f0,$f6
    add.s $f7,$f7,$f0
    sll v0,a2,0x5
L158ddc:
    addu v0,a1,v0
    .word 0x44800000
    .word 0xc443001c
    .word 0xc4440018
    sub.s $f3,$f3,$f4
    c.eq.s $f0,$f3
    nop
    bc1f L158e08
    nop
    b L158e2c
    sub.s $f4,$f7,$f4
L158e08:
    .word 0x8c620010
    sll v0,v0,0x1
    .word 0x44820000
    nop
    cvt.s.w $f0,$f0
    div.s $f0,$f1,$f0
    mul.s $f0,$f0,$f3
    add.s $f4,$f4,$f0
    sub.s $f4,$f7,$f4
L158e2c:
    b L158ea4
    .word 0x8ea20038
L158e34:
    .word 0x8ec40144
    .word 0x2522fffe
    .word 0x2487ffff
    subu v0,a3,v0
    bgezl v0,L158e54
    sll v0,v0,0x5
    .word 0x70001628
    sll v0,v0,0x5
L158e54:
    addu v0,a1,v0
    .word 0x44800000
    .word 0xc443001c
    .word 0xc4440018
    sub.s $f3,$f3,$f4
    c.eq.s $f0,$f3
    nop
    bc1f L158e80
    nop
    b L158ea0
    nop
L158e80:
    .word 0x8c620010
    sll v0,v0,0x1
    .word 0x44820000
    nop
    cvt.s.w $f0,$f0
    div.s $f0,$f1,$f0
    mul.s $f0,$f0,$f3
    add.s $f4,$f4,$f0
L158ea0:
    .word 0x8ea20038
L158ea4:
    beqz v0,L158ed4
    nop
    bnez s0,L158ed4
    nop
    .word 0xc6c00054
    mul.s $f0,$f5,$f0
    c.lt.s $f4,$f0
    nop
    bc1f L158ed4
    nop
    b L158f28
    .word 0x70001628
L158ed4:
    .word 0xe6c2003c
    .word 0xc6c00048
    .word 0x26c40018
    .word 0x26c50024
    .word 0xe6c00040
    .word 0xc7a000bc
    .word 0xe6c0004c
    .word 0xc7a000b8
    .word 0xe6c00050
    .word 0x8ec600e4
    .word 0xc6cd0048
    .word 0xc7ae00b8
    .word 0x8ec80140
    jal func_00169860
    .word 0x26ca0060
    bnez v0,L158f24
    addiu v0,zero,1
    b L158f28
    .word 0x70001628
    addiu v0,zero,1
L158f24:
    .word 0xe6d400a4
L158f28:
    beqz v0,L159004
    nop
    .word 0x8ea20030
    bnez v0,L158f5c
    .word 0xc6c1004c
    .word 0x46000824
    cvt.s.w $f0,$f0
    c.eq.s $f1,$f0
    nop
    bc1t L158f5c
    nop
    b L158fe0
    addiu v0,zero,1
L158f5c:
    .word 0x8ea20034
    bnez v0,L158fe0
    .word 0x70001628
    .word 0x8ec30000
    addiu v0,zero,1
    bne v1,v0,L158f80
    nop
    b L158f98
    .word 0x8ec300e4
L158f80:
    .word 0x8ec20138
    .word 0x8ec300e8
    sll v0,v0,0x2
    addu v0,v0,v1
    .word 0x8c430004
    nop
L158f98:
    .word 0x8c620014
    beqz v0,L158fb0
    nop
    .word 0x8c620010
    b L158fb8
    sra v0,v0,0x1
L158fb0:
    .word 0x8c620010
    nop
L158fb8:
    .word 0x44820000
    nop
    cvt.s.w $f0,$f0
    c.le.s $f1,$f0
    nop
    bc1t L158fdc
    nop
    b L158fe0
    addiu v0,zero,1
L158fdc:
    .word 0x70001628
L158fe0:
    beqz s0,L158ff0
    .word 0xaec20160
    addiu v0,zero,3
    .word 0xaec20058
L158ff0:
    .word 0x27a500ac
    .word 0x27a600b0
    .word 0x27a700b4
    jal func_001595a0
    .word 0x72c02628
L159004:
    .word 0xc7a000b0
    .word 0x3c024120
    .word 0x44820800
    nop
    c.lt.s $f0,$f1
    nop
    bc1f L159054
    nop
    .word 0x8ec2005c
    bnez v0,L159054
    nop
    .word 0x8ec30140
    .word 0x8ec200e4
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c440000
    jal func_0013b2c0
    .word 0x72c02e28
    addiu v0,zero,1
    .word 0xaec2005c
L159054:
    .word 0x8ec30008
    bnez v1,L159204
    addiu v0,zero,5
    .word 0xc6a00000
    .word 0xe6800000
    .word 0xe6750000
    .word 0x8fa200ac
    bnez v0,L15913c
    nop
    .word 0x8ea20028
    beqz v0,L1593a0
    addiu v0,zero,1
    .word 0xc7a100b0
    .word 0x3c024120
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L15939c
    nop
    .word 0x8ec30140
    .word 0x8ec200e4
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c450000
    jal func_001593e0
    .word 0x72c02628
    beqz v0,L15939c
    nop
    addiu v0,zero,5
    .word 0xaec20008
    .word 0xc7a100b0
    .word 0x3c0240a0
    ori v1,v0,0x51ec
    .word 0x44830000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L15912c
    .word 0xc6c20014
    .word 0x44820000
    nop
    sub.s $f0,$f1,$f0
    .word 0x3c023f00
    .word 0x44820800
    nop
    mul.s $f1,$f1,$f2
    mul.s $f1,$f1,$f2
    neg.s $f1,$f1
    div.s $f0,$f1,$f0
    nop
    nop
    b L159134
    .word 0xe6800000
L15912c:
    .word 0xc6a00008
    .word 0xe6800000
L159134:
    b L15939c
    .word 0xae600000
L15913c:
    .word 0x8ea2002c
    beqz v0,L15939c
    nop
    .word 0xc7a100b4
    .word 0x3c024120
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L15939c
    nop
    addiu v0,zero,5
    .word 0xaec20008
    .word 0x8fa300ac
    .word 0x3c023fc1
    ori v0,v0,0x47ae
    .word 0xc6c20014
    .word 0xc7a300b4
    .word 0x44820000
    .word 0xc4610014
    c.le.s $f3,$f0
    nop
    bc1t L1591d8
    sub.s $f1,$f2,$f1
    .word 0x3c023f00
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f1
    .word 0x3c023fc0
    mul.s $f0,$f0,$f1
    neg.s $f1,$f0
    .word 0x44820000
    nop
    sub.s $f0,$f3,$f0
    div.s $f0,$f1,$f0
    nop
    nop
    b L1591e0
    .word 0xe6800000
L1591d8:
    .word 0xc6a00008
    .word 0xe6800000
L1591e0:
    .word 0x8fa300ac
    .word 0x3c023f66
    ori v0,v0,0x6666
    .word 0x44820800
    .word 0xc4600014
    mul.s $f0,$f1,$f0
    b L15939c
    .word 0xe6600000
    addiu v0,zero,5
L159204:
    bne v1,v0,L15939c
    nop
    .word 0x8fa200ac
    bnez v0,L1592e0
    nop
    .word 0xc7a100b0
    .word 0x3c0240a0
    ori v1,v0,0x51ec
    .word 0x44830000
    nop
    c.le.s $f1,$f0
    nop
    bc1t L159274
    .word 0xc6c20014
    .word 0x44820000
    nop
    sub.s $f0,$f1,$f0
    .word 0x3c023f00
    .word 0x44820800
    nop
    mul.s $f1,$f1,$f2
    mul.s $f1,$f1,$f2
    neg.s $f1,$f1
    div.s $f0,$f1,$f0
    nop
    nop
    b L15927c
    .word 0xe6800000
L159274:
    .word 0xc6a00008
    .word 0xe6800000
L15927c:
    .word 0xae600000
    .word 0xc7a100b0
    .word 0x3c024130
    .word 0x44820000
    nop
    c.lt.s $f1,$f0
    nop
    bc1f L1592ac
    nop
    .word 0x8ea2002c
    bnez v0,L1592b4
    nop
L1592ac:
    b L15939c
    .word 0xaec00008
L1592b4:
    .word 0x8ec30140
    .word 0x8ec200e4
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0x8c450000
    jal func_001593e0
    .word 0x72c02628
    bnez v0,L15939c
    nop
    b L15939c
    .word 0xaec00008
L1592e0:
    .word 0xc4410014
    .word 0xc6c20014
    .word 0xc7a300b4
    .word 0x3c023fc1
    ori v0,v0,0x47ae
    .word 0x44820000
    nop
    c.le.s $f3,$f0
    nop
    bc1t L159348
    sub.s $f1,$f2,$f1
    .word 0x3c023f00
    .word 0x44820000
    nop
    mul.s $f0,$f0,$f1
    .word 0x3c023fc0
    mul.s $f0,$f0,$f1
    neg.s $f1,$f0
    .word 0x44820000
    nop
    sub.s $f0,$f3,$f0
    div.s $f0,$f1,$f0
    nop
    nop
    b L159350
    .word 0xe6800000
L159348:
    .word 0xc6a00008
    .word 0xe6800000
L159350:
    .word 0x8fa300ac
    .word 0x3c023f66
    ori v0,v0,0x6666
    .word 0x44821000
    .word 0x3c024130
    .word 0xc4610014
    .word 0x44820000
    nop
    mul.s $f1,$f2,$f1
    .word 0xe6610000
    .word 0xc7a100b4
    c.lt.s $f1,$f0
    nop
    bc1f L159398
    nop
    .word 0x8ea2002c
    bnez v0,L15939c
    nop
L159398:
    .word 0xaec00008
L15939c:
    addiu v0,zero,1
L1593a0:
    .word 0x7bbf0090
    .word 0x7bb70080
    .word 0x7bb60070
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
    .word 0x27bd00c0
}
