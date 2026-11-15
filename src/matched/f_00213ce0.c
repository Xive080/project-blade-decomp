extern void func_001c9990(void);
extern void func_001c9c70(void);
extern void func_001d7fe0(void);
extern void func_001ea6e0(void);
extern void func_002121b0(void);
extern void func_00212620(void);
extern void func_00212e50(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-544
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
    .word 0xafa4010c
    .word 0x8c830000
    .word 0x70c0ae28
    .word 0x70008e28
    .word 0x7000b628
    .word 0x70009628
    .word 0x7000f628
    .word 0xafa000b0
    .word 0xafa000c0
    .word 0xa7a000e0
    .word 0x8ca20000
    .word 0x70009e28
    .word 0xafa200f0
    .word 0x8ca20004
    .word 0xafa200a0
    bnez v1,L213d78
    addiu v0,zero,1
    .word 0x8fa3010c
    .word 0x8c640004
    .word 0x3c030033
    addiu v1,v1,-23008
    .word 0x8c630004
    .word 0x8c900054
    .word 0x90630002
    andi v1,v1,0x9d
    b L213e3c
    .word 0xa7a300d0
L213d78:
    bne v1,v0,L213e28
    nop
    .word 0x8fa2010c
    .word 0x8c420004
    .word 0x8c460018
    addiu a3,v0,76
    .word 0x90c30002
    .word 0x8cd00044
    .word 0x94c2000c
    andi v1,v1,0x9f
    .word 0xa7a200e0
    .word 0x8cc20024
    slti at,v0,2
    bnez at,L213db8
    .word 0xa7a300d0
    addiu s3,zero,2
L213db8:
    beqz s3,L213e3c
    nop
    .word 0x8ce30000
    andi v1,v1,0x1
    beqz v1,L213e3c
    nop
    .word 0x8fa300a0
    .word 0x8c650000
    beqz a1,L213e3c
    nop
    .word 0x8ca40040
    .word 0x84e30004
    bne a0,v1,L213e10
    nop
    .word 0x84e30006
    .word 0x8ca40044
    bne a0,v1,L213e10
    nop
    .word 0x8ca40048
    .word 0x8cc30024
    beq a0,v1,L213e3c
    nop
L213e10:
    .word 0x8fa300a0
    .word 0x8c630000
    .word 0xac600010
    .word 0x8fa300a0
    b L213e3c
    .word 0xac600000
L213e28:
    .word 0x8fa300f0
    .word 0xa7a000d0
    addiu s0,v1,-16
    daddiu v1,zero,63
    .word 0xa7a300e0
L213e3c:
    .word 0x8ea300b4
    .word 0x8e040000
    .word 0x92050000
    and v1,v1,a0
    beq a1,v1,L213e5c
    nop
    b L215544
    .word 0x70001628
L213e5c:
    .word 0x8fa300f0
    .word 0x8c770004
    andi v1,a0,0x2
    beqz v1,L213e80
    andi v1,a0,0x8
    addiu a0,s7,-2
    sll v1,a0,0x1
    b L213e8c
    addu s7,v1,a0
L213e80:
    beqz v1,L213e8c
    addiu v1,s7,-1
    sll s7,v1,0x1
L213e8c:
    .word 0x8fa300a0
    .word 0x8c650000
    beqzl a1,L213fe4
    daddiu v0,zero,63
    .word 0x96040006
    .word 0x8fa3010c
    .word 0xa464000c
    .word 0x94a40024
    .word 0x96030006
    bne a0,v1,L213ee0
    addiu s1,a1,24
    .word 0x97a300d0
    .word 0x96240010
    .word 0x70601e28
    bne a0,v1,L213ee0
    nop
    .word 0x97a300e0
    .word 0x70601e28
    andi v1,v1,0x1
    beqz v1,L213fe8
    nop
L213ee0:
    .word 0x8e230014
    bne v1,s7,L213fa0
    nop
    .word 0x8e240018
    .word 0x8e030000
    bne a0,v1,L213fa0
    nop
    .word 0x8e230030
    bne v1,v0,L213fa0
    nop
    .word 0x97a200e0
    .word 0x70401628
    andi v0,v0,0x1
    bnez v0,L213fa0
    nop
    .word 0x8fa200a0
    .word 0x70001e28
    .word 0x8c420000
    .word 0x8c5e0008
    b L213f80
    addiu a0,s3,9
L213f34:
    addu v0,v0,v1
    sll v0,v0,0x3
    addu a1,v0,s1
    .word 0xc4a3008c
    .word 0xc4a20090
    .word 0xc4a10094
    .word 0xc4a00098
    addu v0,v0,sp
    addiu v0,v0,272
    addiu v1,v1,1
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0xc4a1009c
    .word 0xc4a000a0
    .word 0xe4410010
    .word 0xe4400014
    nop
L213f80:
    slt v0,v1,a0
    bnez v0,L213f34
    sll v0,v1,0x1
    .word 0x8e32001c
    .word 0x8e220020
    .word 0xafa200b0
    b L213fb4
    .word 0x8e360024
L213fa0:
    .word 0x8fa200a0
    .word 0x8c420000
    .word 0xac400010
    .word 0x8fa200a0
    .word 0xac400000
L213fb4:
    .word 0x9623000c
    .word 0x96020006
    bne v1,v0,L213fdc
    daddiu v0,zero,63
    .word 0x97a200d0
    .word 0x96230010
    .word 0x70401628
    beq v1,v0,L213fe8
    nop
    daddiu v0,zero,63
L213fdc:
    b L213fe8
    .word 0xa7a200e0
L213fe4:
    .word 0xa7a200e0
L213fe8:
    .word 0x8fa200a0
    .word 0x8c420000
    beqz v0,L21415c
    nop
    .word 0x97a200e0
    bnez v0,L214084
    nop
    .word 0x8ea20000
    beqz v0,L214070
    .word 0x70008628
    b L214064
    .word 0x8ea20000
    sll v0,s0,0x3
L21401c:
    addu v1,s1,v0
    sll v0,s0,0x2
    addu v0,v0,s5
    .word 0x8c520088
    .word 0x8c650034
    .word 0x8c660038
    .word 0x8e270014
    jal func_001d7fe0
    .word 0x72402628
    .word 0x96420000
    addiu s0,s0,1
    andi v0,v0,0xfffd
    .word 0xa6420000
    .word 0x96420000
    ori v0,v0,0x6
    .word 0xa6420000
    nop
    .word 0x8ea20000
L214064:
    sltu v0,s0,v0
    bnez v0,L21401c
    sll v0,s0,0x3
L214070:
    .word 0x8fa200a0
    jal func_001c9c70
    .word 0x8c440000
    b L215544
    addiu v0,zero,1
L214084:
    .word 0x8ea20000
    beqz v0,L2140f0
    .word 0x70009e28
    b L2140e4
    .word 0x8ea20000
    sll v0,s3,0x3
L21409c:
    addu v1,s1,v0
    sll v0,s3,0x2
    addu v0,v0,s5
    .word 0x8c520088
    .word 0x8c650034
    .word 0x8c660038
    .word 0x8e270014
    jal func_001d7fe0
    .word 0x72402628
    .word 0x96420000
    addiu s3,s3,1
    andi v0,v0,0xfffd
    .word 0xa6420000
    .word 0x96420000
    ori v0,v0,0x6
    .word 0xa6420000
    nop
    .word 0x8ea20000
L2140e4:
    sltu v0,s3,v0
    bnez v0,L21409c
    sll v0,s3,0x3
L2140f0:
    .word 0x8fa200a0
    jal func_001c9c70
    .word 0x8c440000
    .word 0x8fa2010c
    .word 0x8c430000
    addiu v0,zero,1
    bne v1,v0,L214138
    nop
    .word 0x8e070000
    .word 0x8fa600f0
    .word 0x97a900e0
    .word 0x8faa010c
    .word 0x72a02628
    .word 0x72202e28
    jal func_00212e50
    .word 0x72e04628
    b L215548
    .word 0x7bbf0090
L214138:
    .word 0x8e070000
    .word 0x8fa600f0
    .word 0x8fa9010c
    .word 0x72a02628
    .word 0x72202e28
    jal func_00212620
    .word 0x72e04628
    b L215544
    nop
L21415c:
    bnez s8,L214914
    nop
    .word 0x8e020000
    andi v0,v0,0x1
    beqz v0,L21422c
    nop
    .word 0x8eb200d0
    .word 0x8ea200d4
    beqz s3,L214190
    .word 0xafa200b0
    .word 0x8eb200d8
    .word 0x8ea200dc
    .word 0xafa200b0
L214190:
    addiu v1,s7,-2
    addiu v0,s2,-3
    addu v1,v1,v0
    addiu v0,s2,-2
    bnez v0,L2141ac
    .word 0x0062001b
    .word 0x000001cd
L2141ac:
    mflo s6
    .word 0x70001e28
    addiu a0,s3,9
    addiu v0,s6,-1
    sll v0,v0,0x1
    addu v0,s7,v0
    b L214218
    .word 0xafa200c0
L2141cc:
    addu v0,v0,v1
    sll v0,v0,0x3
    addu a1,v0,s5
    .word 0xc4a300e0
    .word 0xc4a200e4
    .word 0xc4a100e8
    .word 0xc4a000ec
    addu v0,v0,sp
    addiu v0,v0,272
    addiu v1,v1,1
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0xc4a100f0
    .word 0xc4a000f4
    .word 0xe4410010
    .word 0xe4400014
    nop
L214218:
    slt v0,v1,a0
    bnez v0,L2141cc
    sll v0,v1,0x1
    b L2142cc
    .word 0x92a200cc
L21422c:
    .word 0x8eb201e8
    .word 0x8ea201ec
    beqz s3,L214248
    .word 0xafa200b0
    .word 0x8eb201f0
    .word 0x8ea201f4
    .word 0xafa200b0
L214248:
    addiu v0,s2,-1
    addu v0,s7,v0
    bnez s2,L21425c
    .word 0x0052001b
    .word 0x000001cd
L21425c:
    mflo s6
    .word 0xafb700c0
    .word 0x70001e28
    b L2142b8
    addiu a0,s3,9
L214270:
    addu v0,v0,v1
    sll v0,v0,0x3
    addu a1,v0,s5
    .word 0xc4a301f8
    .word 0xc4a201fc
    .word 0xc4a10200
    .word 0xc4a00204
    addu v0,v0,sp
    addiu v0,v0,272
    addiu v1,v1,1
    .word 0xe4430000
    .word 0xe4420004
    .word 0xe4410008
    .word 0xe440000c
    .word 0xc4a10208
    .word 0xc4a0020c
    .word 0xe4410010
    .word 0xe4400014
L2142b8:
    slt v0,v1,a0
    bnez v0,L214270
    sll v0,v1,0x1
    nop
    .word 0x92a200cc
L2142cc:
    beqz v0,L21454c
    addiu v0,s6,-1
    .word 0x87a50120
    .word 0x8fa400c0
    .word 0x02563018
    addiu v0,zero,1
    .word 0x70001e28
    .word 0x7000f628
    beqz a1,L214310
    subu a0,a2,a0
    .word 0x8fa500c0
    addiu v0,v0,1
    sll a2,a1,0x1
    addu a1,a2,a1
    addiu a1,a1,3
    b L214314
    srl a1,a1,0x2
L214310:
    .word 0x70002e28
L214314:
    addu s8,s8,a1
    .word 0xa7a30124
    .word 0x87a50120
    beqz a1,L214334
    .word 0x70002e28
    sll a1,a0,0x1
    addu a1,a1,a0
    sra a1,a1,0x2
L214334:
    addu v1,v1,a1
    .word 0x87a50138
    beqz a1,L214358
    .word 0x70002e28
    .word 0x8fa500c0
    addiu v0,v0,1
    sll a1,a1,0x1
    addiu a1,a1,3
    srl a1,a1,0x2
L214358:
    addu s8,s8,a1
    .word 0xa7a3013c
    .word 0x87a50138
    beqz a1,L214370
    .word 0x70002e28
    sra a1,a0,0x1
L214370:
    addu v1,v1,a1
    .word 0x87a50150
    beqz a1,L214394
    .word 0x70002e28
    .word 0x8fa500c0
    addiu v0,v0,1
    sll a1,a1,0x2
    addiu a1,a1,3
    srl a1,a1,0x2
L214394:
    addu s8,s8,a1
    .word 0xa7a30154
    .word 0x87a50150
    beqz a1,L2143ac
    .word 0x70002e28
    .word 0x70802e28
L2143ac:
    addu v1,v1,a1
    .word 0x87a50168
    beqz a1,L2143cc
    .word 0x70002e28
    .word 0x8fa500c0
    addiu v0,v0,1
    addiu a1,a1,3
    srl a1,a1,0x2
L2143cc:
    addu s8,s8,a1
    .word 0xa7a3016c
    .word 0x87a50168
    beqz a1,L2143e4
    .word 0x70002e28
    sra a1,a0,0x2
L2143e4:
    addu v1,v1,a1
    .word 0x87a50180
    beqz a1,L214430
    .word 0x70002e28
    sll a1,s2,0x1
    addu a1,a1,s2
    addiu a1,a1,15
    srl a2,a1,0x4
    addiu a1,s6,-1
    .word 0x00a63818
    addiu v0,v0,1
    mult1 a2,s2,a1
    .word 0x8fa500c0
    subu a2,a1,a2
    sll a1,a2,0x1
    addu a1,a1,a2
    addiu a1,a1,15
    srl a1,a1,0x4
    addu a1,a3,a1
L214430:
    addu s8,s8,a1
    beqz s3,L2144f4
    .word 0xa7a30184
    .word 0x87a50180
    beqz a1,L21447c
    .word 0x70002e28
    addiu a1,s6,-1
    .word 0x02453818
    sll a1,s2,0x1
    addu a1,a1,s2
    addiu a2,a1,15
    .word 0x8fa500c0
    subu a3,a1,a3
    srl a1,a2,0x4
    sll a2,a3,0x1
    addu a2,a2,a3
    addiu a2,a2,15
    srl a2,a2,0x4
    subu a1,a1,a2
L21447c:
    addu v1,v1,a1
    .word 0x8fa500c0
    addiu v0,v0,1
    .word 0xa7a301fc
    addiu v0,v0,1
    sll a2,a1,0x1
    addu a1,a2,a1
    addiu a1,a1,3
    srl a1,a1,0x2
    addu s8,s8,a1
    sll a1,a0,0x1
    addu a0,a1,a0
    sra a0,a0,0x2
    addu v1,v1,a0
    .word 0xa7a30214
    sll v1,s2,0x1
    addu v1,v1,s2
    addiu v1,v1,15
    srl a0,v1,0x4
    addiu v1,s6,-1
    .word 0x00642818
    mult1 a0,s2,v1
    .word 0x8fa300c0
    subu a0,v1,a0
    sll v1,a0,0x1
    addu v1,v1,a0
    addiu v1,v1,15
    srl v1,v1,0x4
    addu v1,a1,v1
    addu s8,s8,v1
L2144f4:
    .word 0x00562018
    .word 0x8fa200b0
    addu s8,s8,a0
    addu v0,s6,v0
    addiu v1,v0,-1
    .word 0x8fa200b0
    bnez v0,L214518
    .word 0x0062001b
    .word 0x000001cd
L214518:
    .word 0x8fa200b0
    mflo a0
    addu s8,s8,a0
    addu v0,s6,v0
    addiu v1,v0,-1
    .word 0x8fa200b0
    bnez v0,L21453c
    .word 0x0062001b
    .word 0x000001cd
L21453c:
    mflo v0
    sll v0,v0,0x3
    b L214908
    addu s8,s8,v0
L21454c:
    .word 0x02422818
    .word 0x92a600cd
    .word 0x70002628
    .word 0x7000f628
    .word 0x8fa200c0
    .word 0x70001e28
    subu a1,v0,a1
    addiu v0,a2,1
    sll v0,v0,0x1
    b L2147f0
    mult1 v0,s6,v0
L214578:
    addu a2,a2,s5
    .word 0x8cc70004
    andi a2,a3,0x1
    beqzl a2,L2147ec
    addiu v1,v1,1
    andi a2,a3,0x2000
    beqz a2,L2147b0
    sll a2,v1,0x3
    addiu a2,zero,4
    beql v1,a2,L214748
    sll v0,s2,0x1
    addiu a2,zero,3
    beql v1,a2,L2146f4
    addiu v0,s2,3
    addiu a2,zero,2
    beql v1,a2,L214698
    sll v0,s2,0x2
    addiu a2,zero,1
    beql v1,a2,L214640
    addiu v0,s2,1
    beqzl v1,L2145dc
    sll v0,s2,0x1
    b L2147e8
    nop
    sll v0,s2,0x1
L2145dc:
    addu v0,v0,s2
    addiu v0,v0,3
    srl a2,v0,0x2
    .word 0x8fa20118
    beqz s3,L214600
    .word 0x87a70120
    .word 0x87a70122
    .word 0x8fa2011c
    nop
L214600:
    dsll32 t0,a3,0x10
    dsra32 t0,t0,0x10
    addiu a3,s6,-1
    .word 0x01074018
    .word 0xa7a40124
    sll a3,a1,0x1
    addu a3,a3,a1
    addiu a3,a3,3
    addu v0,v0,t0
    addu v0,a2,v0
    sra a3,a3,0x2
    subu a2,a2,a3
    addiu v0,v0,1
    b L2147e8
    addu a0,a0,a2
    addiu v0,s2,1
L214640:
    srl a2,v0,0x1
    .word 0x8fa20130
    beqz s3,L214660
    .word 0x87a70138
    .word 0x87a7013a
    .word 0x8fa20134
    nop
    nop
L214660:
    dsll32 t0,a3,0x10
    dsra32 t0,t0,0x10
    addiu a3,s6,-1
    .word 0x01074018
    .word 0xa7a4013c
    addiu a3,a1,1
    sra a3,a3,0x1
    addu v0,v0,t0
    subu a3,a2,a3
    addu v0,a2,v0
    addiu v0,v0,1
    b L2147e8
    addu a0,a0,a3
    sll v0,s2,0x2
L214698:
    addiu v0,v0,3
    srl a2,v0,0x2
    .word 0x8fa20148
    beqz s3,L2146b8
    .word 0x87a70150
    .word 0x87a70152
    .word 0x8fa2014c
    nop
L2146b8:
    dsll32 t0,a3,0x10
    dsra32 t0,t0,0x10
    addiu a3,s6,-1
    .word 0x01074018
    .word 0xa7a40154
    sll a3,a1,0x2
    addiu a3,a3,3
    addu v0,v0,t0
    addu v0,a2,v0
    sra a3,a3,0x2
    subu a2,a2,a3
    addiu v0,v0,1
    b L2147e8
    addu a0,a0,a2
    addiu v0,s2,3
L2146f4:
    srl a2,v0,0x2
    .word 0x8fa20160
    beqz s3,L214710
    .word 0x87a70168
    .word 0x87a7016a
    .word 0x8fa20164
    nop
L214710:
    dsll32 t0,a3,0x10
    dsra32 t0,t0,0x10
    addiu a3,s6,-1
    .word 0x01074018
    .word 0xa7a4016c
    addiu a3,a1,3
    sra a3,a3,0x2
    addu v0,v0,t0
    subu a3,a2,a3
    addu v0,a2,v0
    addiu v0,v0,1
    b L2147e8
    addu a0,a0,a3
    sll v0,s2,0x1
L214748:
    addu v0,v0,s2
    addiu v0,v0,15
    srl a2,v0,0x4
    .word 0x8fa20178
    beqz s3,L214770
    .word 0x87a70180
    .word 0x87a70182
    .word 0x8fa2017c
    nop
    nop
L214770:
    dsll32 t0,a3,0x10
    dsra32 t0,t0,0x10
    addiu a3,s6,-1
    .word 0x01074018
    .word 0xa7a40184
    sll a3,a1,0x1
    addu a3,a3,a1
    addiu a3,a3,15
    addu v0,v0,t0
    addu v0,a2,v0
    sra a3,a3,0x4
    subu a2,a2,a3
    addiu v0,v0,1
    b L2147e8
    addu a0,a0,a2
    sll a2,v1,0x3
L2147b0:
    addu a2,a2,s5
    .word 0x8cc70008
    sll a2,v1,0x1
    addu a2,a2,v1
    sll a2,a2,0x3
    addu a2,a2,sp
    .word 0xacd70110
    .word 0xacd70114
    .word 0x02e73818
    .word 0xa4c00124
    addiu a2,a3,3
    srl a2,a2,0x2
    addu s8,s8,a2
    nop
L2147e8:
    addiu v1,v1,1
L2147ec:
    nop
L2147f0:
    slti a2,v1,9
    bnez a2,L214578
    sll a2,v1,0x3
    beqzl s3,L21486c
    subu v0,v0,a0
    sll v0,s2,0x1
    sll a2,a1,0x1
    addu v1,v0,s2
    addiu v0,v1,3
    addu a2,a2,a1
    addiu a1,a2,3
    .word 0xa7a401fc
    srl v0,v0,0x2
    sra a1,a1,0x2
    subu v0,v0,a1
    .word 0x87a70212
    .word 0x8fa5020c
    addu a0,a0,v0
    addiu v1,v1,15
    srl v0,v1,0x4
    addiu v1,a2,15
    addiu a2,s6,-1
    sra v1,v1,0x4
    mult1 a2,a3,a2
    subu v1,v0,v1
    addu a1,a1,a2
    addu v0,v0,a1
    .word 0xa7a40214
    addiu v0,v0,1
    addu a0,a0,v1
    subu v0,v0,a0
L21486c:
    addu s8,s8,v0
    b L2148f8
    .word 0x70001e28
L214878:
    addu a0,a0,s5
    .word 0x8c850004
    andi a0,a1,0x1
    beqzl a0,L2148f4
    addiu v1,v1,1
    andi a0,a1,0x2000
    bnez a0,L2148f0
    nop
    beqz s3,L2148bc
    sll a0,v1,0x1
    sll a0,v1,0x1
    addu a0,a0,v1
    sll a0,a0,0x3
    addu a0,a0,sp
    b L2148d0
    .word 0xac82011c
    sll a0,v1,0x1
L2148bc:
    addu a0,a0,v1
    sll a0,a0,0x3
    addu a0,a0,sp
    .word 0xac820118
    nop
L2148d0:
    sll a0,v1,0x3
    addu a0,a0,s5
    .word 0x8c840008
    .word 0x02e42018
    addiu a0,a0,3
    srl a0,a0,0x2
    addu v0,v0,a0
    nop
L2148f0:
    addiu v1,v1,1
L2148f4:
    nop
L2148f8:
    addiu a0,s3,9
    slt a0,v1,a0
    bnez a0,L214878
    sll a0,v1,0x3
L214908:
    sll s8,s8,0x4
    addiu s8,s8,416
    addiu s8,s8,127
L214914:
    .word 0x8fa2010c
    addiu a2,zero,2
    .word 0x8c420000
    bne v0,a2,L214990
    .word 0x92b400ce
    .word 0x8f848680
    jal func_001ea6e0
    addiu a1,s8,24
    .word 0x8fa300a0
    .word 0xac620000
    .word 0x8fa200a0
    .word 0x8c420000
    .word 0xac400004
    .word 0x8fa200a0
    .word 0x8c420000
    .word 0xac400000
    .word 0x8fa2010c
    .word 0x8c430004
    .word 0x8fa200a0
    .word 0x8c420000
    .word 0xac43000c
    .word 0x8fa200a0
    .word 0x8c420000
    .word 0xac5e0008
    .word 0x8fa200a0
    .word 0x8c420000
    .word 0xac400010
    .word 0x8fa200a0
    .word 0x8c420000
    b L214a34
    .word 0xac400014
L214990:
    addiu a3,zero,1
    bne v0,a3,L214a18
    nop
    .word 0x8fa2010c
    .word 0x8c420004
    bnez s3,L2149f8
    .word 0x8c440018
    .word 0x8c82004c
    andi v0,v0,0x2
    beqz v0,L2149dc
    nop
    .word 0x8fa500a0
    .word 0x3c020021
    .word 0x73c03628
    .word 0x70003e28
    jal func_001c9990
    addiu t0,v0,5008
    b L214a38
    .word 0x8fa200a0
L2149dc:
    .word 0x8fa500a0
    .word 0x3c020021
    .word 0x73c03628
    jal func_001c9990
    addiu t0,v0,5008
    b L214a34
    nop
L2149f8:
    .word 0x8fa500a0
    .word 0x70402628
    .word 0x3c020021
    .word 0x73c03628
    jal func_001c9990
    addiu t0,v0,5008
    b L214a34
    nop
L214a18:
    .word 0x8fa2010c
    .word 0x8fa500a0
    .word 0x73c03628
    .word 0x8c440004
    .word 0x3c020021
    jal func_001c9990
    addiu t0,v0,5008
L214a34:
    .word 0x8fa200a0
L214a38:
    .word 0x70001e28
    addiu a0,s3,9
    .word 0x8c460000
    .word 0xacc00018
    .word 0xacc0001c
    .word 0x86020006
    addiu s1,a2,24
    addiu a1,v0,-1
    .word 0x8fa2010c
    .word 0xa445000c
    .word 0x96020006
    .word 0xacc20024
    .word 0x97a200d0
    .word 0xa4c20028
    b L214ac0
    .word 0xacd7002c
L214a78:
    addu v0,v0,v1
    sll a1,v0,0x3
    addu v0,a1,sp
    addiu v0,v0,272
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    addu a1,a1,s1
    addiu v1,v1,1
    .word 0xe4a3008c
    .word 0xe4a20090
    .word 0xe4a10094
    .word 0xe4a00098
    .word 0xc4410010
    .word 0xc4400014
    .word 0xe4a1009c
    .word 0xe4a000a0
L214ac0:
    slt v0,v1,a0
    bnez v0,L214a78
    sll v0,v1,0x1
    .word 0xae32001c
    .word 0x8fa200b0
    .word 0xae220020
    .word 0xae360024
    .word 0xae200028
    .word 0xae20002c
    addiu v0,zero,1
    .word 0xae220030
    .word 0x8e040000
    addiu v0,s1,404
    addiu v1,v0,63
    addiu v0,zero,-64
    and a1,v1,v0
    .word 0xae240018
    .word 0x92a200cc
    beqz v0,L214b18
    addiu v1,a1,127
    addiu v0,zero,-128
    and a1,v1,v0
L214b18:
    .word 0xae250008
    .word 0x70002628
    .word 0x70001e28
    b L214ba0
    addiu a2,s3,9
L214b2c:
    addu v0,v0,s5
    .word 0x8c470004
    andi v0,a3,0x1
    beqzl v0,L214b9c
    addiu v1,v1,1
    andi v0,a3,0x2000
    bnez v0,L214b98
    sll v0,v1,0x1
    addu v0,v0,v1
    sll v0,v0,0x3
    addu a3,v0,s1
    beqz s3,L214b68
    .word 0x8ce20094
    .word 0x8ce20098
    nop
L214b68:
    .word 0x8e280008
    sll t1,v0,0x4
    sll v0,a0,0x3
    addu a3,v0,s1
    sll v0,v1,0x3
    addu v0,v0,s5
    addu t0,t0,t1
    .word 0xace80034
    .word 0x8c420008
    addiu a0,a0,1
    sll v0,v0,0x2
    .word 0xace20038
L214b98:
    addiu v1,v1,1
L214b9c:
    nop
L214ba0:
    slt v0,v1,a2
    bnez v0,L214b2c
    sll v0,v1,0x3
    .word 0x70001628
    .word 0x70001e28
    .word 0x70434389
    .word 0x70a03628
    b L215400
    .word 0x70003e28
L214bc4:
    slt at,v1,v0
    beqz at,L214bdc
    addiu v0,s6,-1
    b L214be8
    .word 0x72404e28
    addiu v0,s6,-1
L214bdc:
    .word 0x00522018
    .word 0x8fa200c0
    subu t1,v0,a0
L214be8:
    .word 0x8fa200b0
    bnez v0,L214bf8
    .word 0x0062001b
    .word 0x000001cd
L214bf8:
    mfhi v0
    bnez v0,L214c84
    .word 0x70002628
    subu a0,a1,a2
    bgez a0,L214c18
    sra v0,a0,0x4
    addiu v0,a0,15
    sra v0,v0,0x4
L214c18:
    addiu a0,v0,-1
    .word 0x3c021000
    or v0,a0,v0
    dsll32 t3,v0,0x0
    bnez v1,L214c44
    dsra32 t3,t3,0x0
    .word 0x3c020600
    dsll v0,v0,0x10
    ori v0,v0,0x1100
    b L214c48
    dsll v0,v0,0x10
L214c44:
    .word 0x70001628
L214c48:
    .word 0x704b5389
    .word 0x92a200cc
    beqz v0,L214c70
    nop
    beqz v1,L214c70
    nop
    .word 0xfccb0000
    .word 0x70a03628
    b L214c80
    addiu a3,zero,1
L214c70:
    .word 0x7cca0000
    .word 0x70a03628
    addiu a1,a1,16
    nop
L214c80:
    .word 0x70002628
L214c84:
    b L214e8c
    addiu v0,s3,9
    sll v0,a0,0x3
L214c90:
    addu v0,v0,s5
    .word 0x8c4a0004
    andi v0,t2,0x1
    beqzl v0,L214e84
    addiu a0,a0,1
    andi v0,t2,0x2000
    bnez v0,L214e80
    .word 0x3c02ff00
    and t2,t2,v0
    .word 0x3c026c00
    beql t2,v0,L214d30
    addiu t2,zero,4
    .word 0x3c026800
    beql t2,v0,L214d24
    addiu t2,zero,3
    .word 0x3c026d00
    beql t2,v0,L214d18
    addiu t2,zero,2
    .word 0x3c026400
    beq t2,v0,L214d14
    .word 0x3c026500
    beql t2,v0,L214d0c
    addiu t2,zero,1
    .word 0x3c026e00
    beq t2,v0,L214d08
    .word 0x3c026000
    beq t2,v0,L214d08
    nop
    b L214d2c
    nop
L214d08:
    addiu t2,zero,1
L214d0c:
    b L214d34
    sll v0,a0,0x1
L214d14:
    addiu t2,zero,2
L214d18:
    b L214d30
    nop
    addiu t2,zero,3
L214d24:
    b L214d30
    nop
L214d2c:
    addiu t2,zero,4
L214d30:
    sll v0,a0,0x1
L214d34:
    addu v0,v0,a0
    sll v0,v0,0x3
    addu t3,v0,s1
    beqz s3,L214d50
    .word 0x8d620094
    .word 0x8d620098
    nop
L214d50:
    .word 0x8e0b0000
    andi t3,t3,0x1
    beqz t3,L214d6c
    .word 0x70005e28
    b L214d70
    addiu t3,zero,2
    .word 0x70005e28
L214d6c:
    nop
L214d70:
    sll t6,v0,0x4
    subu t3,s2,t3
    sll v0,v1,0x2
    .word 0x004b6018
    .word 0x8e2d0008
    mult1 v0,t1,t2
    addiu t3,v0,3
    .word 0x014c1018
    addu t5,t5,t6
    sra t4,t3,0x2
    .word 0x3c0b3000
    or t3,t4,t3
    dsll32 t4,v0,0x0
    dsll32 v0,t5,0x0
    dsrl32 t4,t4,0x0
    dsra32 v0,v0,0x0
    daddu v0,v0,t4
    dsll32 t4,v0,0x0
    .word 0x012a7018
    dsll32 v0,t3,0x0
    dsra32 v0,v0,0x0
    or t3,v0,t4
    addiu t4,zero,-4
    addiu t5,t6,3
    and t4,t5,t4
    addiu v0,t2,-1
    subu t4,t4,t6
    addu v0,v0,t4
    bnez t2,L214dec
    .word 0x004a001a
    .word 0x000001cd
L214dec:
    sll v0,a0,0x3
    addu v0,v0,s5
    lwu t5,4(v0)
    mflo t2
    ori t4,zero,65280
    dsll t4,t4,0x10
    addu t2,t1,t2
    sll t6,t2,0x10
    sll v0,a0,0x1
    addu t2,v0,a0
    ori t4,t4,0x4000
    sll t2,t2,0x3
    and v0,t5,t4
    addu t2,t2,s1
    .word 0x914c00a2
    or v0,v0,t6
    ori v0,v0,0x8000
    .word 0x3c0a0100
    ori t2,t2,0x100
    dsll32 t4,t4,0x0
    or t2,s4,t2
    dsra32 t4,t4,0x0
    dsll32 t2,t2,0x0
    or v0,t4,v0
    dsrl32 t2,t2,0x0
    dsll32 v0,v0,0x0
    or v0,t2,v0
    .word 0x704b5389
    .word 0x7cca0000
    .word 0x3c0b1000
    .word 0x70001628
    .word 0x704b5389
    .word 0x7caa0000
    addiu a1,a1,16
    .word 0x70a03628
    addiu a1,a1,16
    nop
L214e80:
    addiu a0,a0,1
L214e84:
    nop
    addiu v0,s3,9
L214e8c:
    slt v0,a0,v0
    bnez v0,L214c90
    sll v0,a0,0x3
    b L2153a8
    .word 0x70002628
    sll v0,a0,0x3
L214ea4:
    addu v0,v0,s5
    .word 0x8c4a0004
    andi v0,t2,0x1
    beqzl v0,L2153a4
    addiu a0,a0,1
    andi v0,t2,0x2000
    beqz v0,L2153a0
    addiu v0,zero,10
    beq a0,v0,L215304
    addiu v0,zero,9
    beq a0,v0,L215270
    addiu v0,zero,4
    beq a0,v0,L2151c0
    addiu v0,zero,3
    beq a0,v0,L215114
    addiu v0,zero,2
    beq a0,v0,L215064
    addiu v0,zero,1
    beq a0,v0,L214fb8
    nop
    beqz a0,L214f04
    nop
    b L2153a0
    nop
L214f04:
    beqz a3,L214f18
    nop
    .word 0xdcab0000
    b L214f40
    .word 0x70003e28
L214f18:
    .word 0x8f828128
    .word 0x978b8128
    .word 0x3c0a0500
    dsll t2,t2,0x10
    ori t2,t2,0x700
    dsll t2,t2,0x10
    addiu v0,v0,1
    or t3,t3,t2
    .word 0xaf828128
    nop
L214f40:
    sll v0,a0,0x1
    addu v0,v0,a0
    sll v0,v0,0x3
    addu v0,v0,s1
    .word 0x904c00a2
    sll t2,t1,0x10
    .word 0x3c026800
    ori v0,v0,0x8000
    or t2,t2,v0
    .word 0x3c020100
    dsll32 t4,t4,0x0
    ori v0,v0,0x100
    dsra32 t4,t4,0x0
    or v0,s4,v0
    or t2,t2,t4
    dsll32 v0,v0,0x0
    dsll32 t2,t2,0x0
    dsrl32 v0,v0,0x0
    or v0,v0,t2
    .word 0x704b5389
    sll v0,t1,0x1
    addu v0,v0,t1
    addiu v0,v0,3
    sra v0,v0,0x2
    .word 0x7caa0000
    sll v0,v0,0x4
    addu a1,a1,v0
    .word 0x7ca80000
    b L2153a0
    addiu a1,a1,16
L214fb8:
    beqz a3,L214fcc
    nop
    .word 0xdcab0000
    b L214ff0
    .word 0x70003e28
L214fcc:
    .word 0x8f828128
    .word 0x978b8128
    .word 0x3c0a0500
    dsll t2,t2,0x10
    ori t2,t2,0x700
    dsll t2,t2,0x10
    addiu v0,v0,1
    or t3,t3,t2
    .word 0xaf828128
L214ff0:
    sll v0,a0,0x1
    addu v0,v0,a0
    sll v0,v0,0x3
    addu v0,v0,s1
    .word 0x904c00a2
    sll t2,t1,0x10
    .word 0x3c026400
    ori v0,v0,0x8000
    or t2,t2,v0
    .word 0x3c020100
    dsll32 t4,t4,0x0
    ori v0,v0,0x100
    dsra32 t4,t4,0x0
    or v0,s4,v0
    or t2,t2,t4
    dsll32 v0,v0,0x0
    dsll32 t2,t2,0x0
    dsrl32 v0,v0,0x0
    or v0,v0,t2
    .word 0x704b5389
    sll v0,t1,0x1
    addiu v0,v0,3
    sra v0,v0,0x2
    .word 0x7caa0000
    sll v0,v0,0x4
    addu a1,a1,v0
    .word 0x7ca80000
    b L2153a0
    addiu a1,a1,16
L215064:
    beqz a3,L215078
    nop
    .word 0xdcab0000
    b L2150a0
    .word 0x70003e28
L215078:
    .word 0x8f828128
    .word 0x978b8128
    .word 0x3c0a0500
    dsll t2,t2,0x10
    ori t2,t2,0x700
    dsll t2,t2,0x10
    addiu v0,v0,1
    or t3,t3,t2
    .word 0xaf828128
    nop
L2150a0:
    sll v0,a0,0x1
    addu v0,v0,a0
    sll v0,v0,0x3
    addu v0,v0,s1
    .word 0x904c00a2
    sll t2,t1,0x10
    .word 0x3c026c00
    ori v0,v0,0x8000
    or t2,t2,v0
    .word 0x3c020100
    dsll32 t4,t4,0x0
    ori v0,v0,0x100
    dsra32 t4,t4,0x0
    or v0,s4,v0
    or t2,t2,t4
    dsll32 v0,v0,0x0
    dsll32 t2,t2,0x0
    dsrl32 v0,v0,0x0
    or v0,v0,t2
    .word 0x704b5389
    sll v0,t1,0x2
    addiu v0,v0,3
    sra v0,v0,0x2
    .word 0x7caa0000
    sll v0,v0,0x4
    addu a1,a1,v0
    .word 0x7ca80000
    b L2153a0
    addiu a1,a1,16
L215114:
    beqz a3,L215128
    nop
    .word 0xdcab0000
    b L215150
    .word 0x70003e28
L215128:
    .word 0x8f828128
    .word 0x978b8128
    .word 0x3c0a0500
    dsll t2,t2,0x10
    ori t2,t2,0x700
    dsll t2,t2,0x10
    addiu v0,v0,1
    or t3,t3,t2
    .word 0xaf828128
    nop
L215150:
    sll v0,a0,0x1
    addu v0,v0,a0
    sll v0,v0,0x3
    addu v0,v0,s1
    .word 0x904c00a2
    sll t2,t1,0x10
    .word 0x3c026e00
    ori v0,v0,0xc000
    or t2,t2,v0
    .word 0x3c020100
    dsll32 t4,t4,0x0
    ori v0,v0,0x100
    dsra32 t4,t4,0x0
    or v0,s4,v0
    or t2,t2,t4
    dsll32 v0,v0,0x0
    dsll32 t2,t2,0x0
    dsrl32 v0,v0,0x0
    or v0,v0,t2
    .word 0x704b5389
    addiu v0,t1,3
    sra v0,v0,0x2
    .word 0x7caa0000
    sll v0,v0,0x4
    addu a1,a1,v0
    .word 0x7ca80000
    b L2153a0
    addiu a1,a1,16
L2151c0:
    beqz a3,L2151d4
    nop
    .word 0xdcab0000
    b L2151f8
    .word 0x70003e28
L2151d4:
    .word 0x8f828128
    .word 0x978b8128
    .word 0x3c0a0500
    dsll t2,t2,0x10
    ori t2,t2,0x700
    dsll t2,t2,0x10
    addiu v0,v0,1
    or t3,t3,t2
    .word 0xaf828128
L2151f8:
    sll v0,a0,0x1
    addu v0,v0,a0
    sll v0,v0,0x3
    addu v0,v0,s1
    .word 0x904c00a2
    sll t2,t1,0x10
    .word 0x3c026a00
    ori v0,v0,0x8000
    or t2,t2,v0
    .word 0x3c020100
    dsll32 t4,t4,0x0
    ori v0,v0,0x100
    dsra32 t4,t4,0x0
    or v0,s4,v0
    or t2,t2,t4
    dsll32 v0,v0,0x0
    dsll32 t2,t2,0x0
    dsrl32 v0,v0,0x0
    or v0,v0,t2
    .word 0x704b5389
    sll v0,t1,0x1
    .word 0x7caa0000
    addu v0,v0,t1
    addiu t2,v0,15
    addiu v0,zero,-16
    and v0,t2,v0
    addu a1,a1,v0
    .word 0x7ca80000
    b L2153a0
    addiu a1,a1,16
L215270:
    beqz a3,L215284
    nop
    .word 0xdcab0000
    b L2152a8
    .word 0x70003e28
L215284:
    .word 0x8f828128
    .word 0x978b8128
    .word 0x3c0a0500
    dsll t2,t2,0x10
    ori t2,t2,0x700
    dsll t2,t2,0x10
    addiu v0,v0,1
    or t3,t3,t2
    .word 0xaf828128
L2152a8:
    .word 0x3c026800
    sll t2,t1,0x10
    ori v0,v0,0x8000
    or t4,t2,v0
    .word 0x01345018
    .word 0x3c020100
    ori v0,v0,0x404
    dsll32 t2,t2,0x0
    dsrl32 t2,t2,0x0
    or t2,t4,t2
    dsll32 t2,t2,0x0
    or v0,t2,v0
    .word 0x704b5389
    sll v0,t1,0x1
    addu v0,v0,t1
    addiu v0,v0,3
    sra v0,v0,0x2
    .word 0x7caa0000
    sll v0,v0,0x4
    addu a1,a1,v0
    .word 0x7ca80000
    b L2153a0
    addiu a1,a1,16
L215304:
    beqz a3,L215318
    nop
    .word 0xdcab0000
    b L215340
    .word 0x70003e28
L215318:
    .word 0x8f828128
    .word 0x978b8128
    .word 0x3c0a0500
    dsll t2,t2,0x10
    ori t2,t2,0x700
    dsll t2,t2,0x10
    addiu v0,v0,1
    or t3,t3,t2
    .word 0xaf828128
    nop
L215340:
    .word 0x3c026a00
    sll t2,t1,0x10
    ori v0,v0,0x8000
    or t4,t2,v0
    addiu v0,s4,1
    .word 0x01225018
    dsll32 t2,t2,0x0
    dsrl32 t2,t2,0x0
    .word 0x3c020100
    or t2,t4,t2
    ori v0,v0,0x404
    dsll32 t2,t2,0x0
    or v0,t2,v0
    .word 0x704b5389
    sll v0,t1,0x1
    .word 0x7caa0000
    addu v0,v0,t1
    addiu t2,v0,15
    addiu v0,zero,-16
    and v0,t2,v0
    addu a1,a1,v0
    .word 0x7ca80000
    addiu a1,a1,16
    nop
L2153a0:
    addiu a0,a0,1
L2153a4:
    nop
L2153a8:
    addiu v0,s3,9
    slt v0,a0,v0
    bnez v0,L214ea4
    sll v0,a0,0x3
    bnez v1,L2153cc
    .word 0x3c021700
    b L2153d0
    .word 0x3c021500
    .word 0x3c021700
L2153cc:
    nop
L2153d0:
    dsll32 t3,v0,0x0
    .word 0x3c020400
    or v0,t1,v0
    dsll32 v0,v0,0x0
    dsra32 v0,v0,0x0
    or t3,t3,v0
    .word 0x70001628
    .word 0x704b5389
    .word 0x7caa0000
    addiu a1,a1,16
    addiu v1,v1,1
    nop
L215400:
    slt v0,v1,s6
    bnez v0,L214bc4
    addiu v0,s6,-1
    .word 0x3c020600
    dsll v0,v0,0x10
    ori v0,v0,0x1100
    dsll v0,v0,0x10
    .word 0xfca2fff8
    subu v1,a1,a2
    bgez v1,L215434
    sra v0,v1,0x4
    addiu v0,v1,15
    sra v0,v0,0x4
L215434:
    addiu v1,v0,-1
    .word 0x3c026000
    or v0,v1,v0
    dsll32 t3,v0,0x0
    dsra32 t3,t3,0x0
    .word 0xfccb0000
    .word 0x92a200cc
    bnez v0,L21545c
    nop
    .word 0xfcc00008
L21545c:
    .word 0x8ea20000
    beqz v0,L2154c8
    .word 0x70009e28
    b L2154bc
    .word 0x8ea20000
    sll v0,s3,0x3
L215474:
    addu v1,s1,v0
    sll v0,s3,0x2
    addu v0,v0,s5
    .word 0x8c520088
    .word 0x8c650034
    .word 0x8c660038
    .word 0x8e270014
    jal func_001d7fe0
    .word 0x72402628
    .word 0x96420000
    addiu s3,s3,1
    andi v0,v0,0xfffd
    .word 0xa6420000
    .word 0x96420000
    ori v0,v0,0x6
    .word 0xa6420000
    nop
    .word 0x8ea20000
L2154bc:
    sltu v0,s3,v0
    bnez v0,L215474
    sll v0,s3,0x3
L2154c8:
    .word 0x8fa2010c
    .word 0x8c430000
    bnezl v1,L2154fc
    addiu v0,zero,1
    .word 0x8e070000
    .word 0x8fa600f0
    .word 0x72a02628
    .word 0x72202e28
    .word 0x72e04628
    jal func_00212620
    .word 0x70404e28
    b L215544
    nop
L2154fc:
    bne v1,v0,L21552c
    nop
    .word 0x8e070000
    .word 0x8fa600f0
    .word 0x97a900e0
    .word 0x8faa010c
    .word 0x72a02628
    .word 0x72202e28
    jal func_00212e50
    .word 0x72e04628
    b L215544
    nop
L21552c:
    .word 0x8e060000
    .word 0x8fa500f0
    .word 0x8fa8010c
    .word 0x72202628
    jal func_002121b0
    .word 0x72e03e28
L215544:
    .word 0x7bbf0090
L215548:
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
    addiu sp,sp,544
}
