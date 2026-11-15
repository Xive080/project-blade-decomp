extern void fn_131540(void);
extern void fn_174380(void);
extern void fn_132a00(void);
extern void fn_1a9a40(void);
extern void fn_1b5c30(void);
extern void fn_132950(void);
extern void fn_2605f0(void);
extern void fn_187e10(void);
extern void fn_189050(void);
extern void fn_189320(void);
extern void fn_16f240(void);
extern void fn_16f380(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-288
    .word 0x7fbf0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x7fb00000
    addiu v0,zero,2
    .word 0x3c010030
    .word 0xac22a364
    .word 0x3c010030
    .word 0x8c26a364
    .word 0x3c020026
    addiu v1,zero,-17
    addiu a1,v0,-3584
    paddub s0,a0,zero
    and v0,a2,v1
    .word 0x3c010030
    paddub a0,zero,zero
    jal fn_131540
    .word 0xac22a364
    jal fn_174380
    paddub a0,zero,zero
    jal fn_174380
    addiu a0,zero,1
    .word 0x3c010030
    .word 0xac20a584
    .word 0x3c017000
    .word 0x8c233ffc
    .word 0x3c02afbf
    ori v0,v0,0xcfdf
    bne v1,v0,L25ef50
    nop
    .word 0x3c010030
    .word 0x8c22a584
    .word 0x3c017000
    .word 0xac223fd4
L25ef50:
    jal fn_132a00
    nop
    addiu a0,zero,-2
    jal fn_1a9a40
    addiu a1,zero,1
    jal fn_1b5c30
    nop
    jal fn_132950
    mov.s $f12,$f0
    jal fn_2605f0
    nop
    .word 0xae02000c
    jal fn_187e10
    .word 0x8e04000c
    addiu v0,zero,9
    .word 0xafa20090
    addiu s7,sp,148
    addiu s1,sp,152
    .word 0xaee00000
    addiu s2,sp,156
    .word 0xae200000
    addiu s3,sp,160
    .word 0xae400000
    addiu s4,sp,164
    .word 0xae600000
    .word 0x3c024420
    .word 0xae820000
    addiu s5,sp,168
    .word 0x3c0243e0
    .word 0xaea20000
    .word 0x3c02002e
    addiu v0,v0,1696
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    addiu s6,sp,172
    addiu a0,sp,144
    paddub a3,zero,zero
    .word 0xe6c30000
    .word 0xe6c20004
    .word 0xe6c10008
    .word 0xe6c0000c
    .word 0x8e05000c
    jal fn_189050
    paddub a2,a1,zero
    .word 0xae020010
    addiu v0,zero,7
    .word 0xafa20090
    .word 0xaee00000
    .word 0xae200000
    .word 0xae400000
    .word 0xae600000
    .word 0x3c024420
    .word 0xae820000
    .word 0x3c0243e0
    .word 0xaea20000
    .word 0x3c02002e
    addiu v0,v0,1712
    .word 0xc4430000
    .word 0xc4420004
    .word 0xc4410008
    .word 0xc440000c
    addiu a0,sp,144
    addiu a3,zero,2
    .word 0xe6c30000
    .word 0xe6c20004
    .word 0xe6c10008
    .word 0xe6c0000c
    .word 0x8e05000c
    jal fn_189050
    paddub a2,a1,zero
    addiu v1,zero,48
    .word 0xae020014
    paddub v0,v1,zero
    beqz v0,L25f0a8
    addiu v1,v1,-1
    sll v0,v1,0x4
    addu a0,s0,v0
L25f08c:
    .word 0xac800020
    .word 0xac80001c
    .word 0xac800024
    paddub v0,v1,zero
    addiu a0,a0,-16
    bnez v0,L25f08c
    addiu v1,v1,-1
L25f0a8:
    .word 0x3c02002e
    addiu t2,v0,1792
    .word 0xc5430000
    .word 0xc5420004
    .word 0xc5410008
    .word 0xc540000c
    addiu a1,sp,232
    addiu a2,zero,1
    .word 0x3c023f4c
    .word 0xe4a30000
    .word 0xe4a20004
    .word 0xe4a10008
    .word 0xe4a0000c
    .word 0xc5430010
    .word 0xc5420014
    .word 0xc5410018
    .word 0xc540001c
    .word 0x3c033f80
    ori v0,v0,0xcccd
    addiu a0,sp,224
    addiu t0,zero,-1
    .word 0xe4a30010
    .word 0xe4a20014
    .word 0xe4a10018
    .word 0xe4a0001c
    .word 0xc5410020
    .word 0xc5400024
    paddub a3,a2,zero
    .word 0xe4a10020
    .word 0xe4a00024
    .word 0xafa30110
    .word 0xafa600e0
    .word 0xafa200f0
    .word 0xafa000f4
    .word 0xafa000f8
    .word 0xafa200fc
    .word 0x8e05000c
    jal fn_189320
    paddub t1,zero,zero
    .word 0xae020318
    .word 0xae00031c
    addiu a1,zero,-1
    .word 0xae000320
    .word 0xae000324
    addiu a0,zero,12
    paddub a2,a1,zero
    jal fn_16f240
    .word 0xae000008
    bnez v0,L25f178
    nop
    jal fn_16f380
    addiu a0,zero,81
L25f178:
    .word 0xae000328
    .word 0x3c023f80
    .word 0xae02032c
    addiu v0,zero,8
    .word 0x3c010030
    .word 0xac22a640
    addiu v0,zero,98
    .word 0x3c010030
    .word 0xac22a64c
    addiu v0,zero,-1
    .word 0x3c010030
    .word 0xac22a658
    addiu v0,zero,1
    .word 0x3c010030
    .word 0xac22a670
    .word 0x3c010030
    jal fn_1b5c30
    .word 0xac22a664
    .word 0x3c010030
    .word 0xe420a6ac
    .word 0x7bbf0080
    .word 0x7bb70070
    .word 0x7bb60060
    .word 0x7bb50050
    .word 0x7bb40040
    .word 0x7bb30030
    .word 0x7bb20020
    .word 0x7bb10010
    .word 0x7bb00000
    addiu v0,zero,1
    jr ra
    addiu sp,sp,288
}

