extern void func_0011eb78(void);
extern void func_0013b350(void);
extern void func_00142340(void);
extern void func_00142510(void);
extern void func_001bf2b0(void);
extern void func_001ca2d0(void);
extern void func_001ca6a0(void);
asm void f(void) {
    .set noreorder
    .set noat
    addiu sp,sp,-192
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    addiu a1,sp,176
    .word 0x70808e28
    jal func_001bf2b0
    .word 0x7fb00000
    .word 0x3c010030
    .word 0x8c226094
    addiu a2,zero,4
    bne v0,a2,L141f54
    addiu a1,gp,-31928
    .word 0x8fa500b4
    jal func_001ca6a0
    .word 0x72202628
    b L14230c
    .word 0x70001628
    addiu a1,gp,-31928
L141f54:
    jal func_001ca2d0
    .word 0x72202628
    addiu a1,gp,-31932
    addiu a2,zero,4
    jal func_001ca2d0
    .word 0x72202628
    addiu a1,gp,-31936
    addiu a2,zero,4
    jal func_001ca2d0
    .word 0x72202628
    .word 0x8f838348
    .word 0x8f858344
    .word 0x3c020033
    addiu v0,v0,-23008
    .word 0x8f878340
    .word 0x8c420130
    sll a2,v1,0x5
    sll v1,a1,0x3
    subu v1,v1,a1
    sll v1,v1,0x2
    addu a0,a2,v1
    sll v1,a3,0x3
    addu v1,v1,a3
    sll v1,v1,0x2
    addu s0,v1,a0
    sll v1,a3,0x4
    subu a0,v1,a3
    sll v1,a0,0x2
    addu v1,a0,v1
    sll a0,v1,0x2
    sll v1,a1,0x4
    addu v1,v1,a1
    sll v1,v1,0x2
    addu v1,a2,v1
    jalr ra,v0
    addu a0,a0,v1
    .word 0xaf828334
    .word 0x8f828348
    .word 0x8f858334
    .word 0x8f888344
    .word 0x72003628
    .word 0x72202628
    sll v0,v0,0x5
    addu s2,a1,v0
    sll v0,t0,0x4
    addu v0,v0,t0
    .word 0xaf928338
    sll a3,v0,0x2
    sll v0,t0,0x3
    subu v0,v0,t0
    sll v0,v0,0x2
    .word 0x8f838338
    addu s0,s2,v0
    addu v0,v1,a3
    jal func_001ca2d0
    .word 0xaf82833c
    .word 0x8f828340
    addiu s1,v0,-1
    bltz s1,L142090
    nop
    sll v0,s1,0x3
    addu v0,v0,s1
    sll v0,v0,0x2
    addu s0,s0,v0
    sll v0,s1,0x4
    subu v1,v0,s1
    sll v0,v1,0x2
    addu v0,v1,v0
    sll s3,v0,0x2
L142068:
    .word 0x8f82833c
    addiu a2,zero,36
    .word 0x72002e28
    jal func_0011eb78
    addu a0,v0,s3
    addiu s1,s1,-1
    addiu s0,s0,-36
    bgez s1,L142068
    addiu s3,s3,-300
    nop
L142090:
    .word 0x8f828344
    addiu s0,v0,-1
    bltz s0,L1420e4
    .word 0x70003628
    sll v0,s0,0x3
    subu v0,v0,s0
    sll v0,v0,0x2
    addu s1,s2,v0
    sll v0,s0,0x4
    addu v0,v0,s0
    sll s2,v0,0x2
L1420bc:
    .word 0x8f828338
    addiu a2,zero,28
    .word 0x72202e28
    jal func_0011eb78
    addu a0,v0,s2
    addiu s0,s0,-1
    addiu s1,s1,-28
    bgez s0,L1420bc
    addiu s2,s2,-68
    .word 0x70003628
L1420e4:
    b L142178
    .word 0x70001628
    .word 0x70002e28
L1420f0:
    .word 0x70003e28
    nop
L1420f8:
    .word 0x8f848338
    .word 0x8f838340
    addu a0,v0,a0
    addu t0,a0,a3
    .word 0x8d040000
    sltu at,a0,v1
    beqz at,L14213c
    nop
    sll v1,a0,0x4
    subu a0,v1,a0
    sll v1,a0,0x2
    addu a0,a0,v1
    .word 0x8f83833c
    sll a0,a0,0x2
    addu v1,v1,a0
    b L142140
    .word 0xad030000
L14213c:
    .word 0xad000000
L142140:
    addiu a1,a1,1
    slti v1,a1,2
    bnez v1,L1420f8
    addiu a3,a3,4
    .word 0x8f848338
    .word 0x8f838334
    addiu a2,a2,1
    addu a1,a0,v0
    .word 0x8ca4000c
    addiu v0,v0,68
    sll a0,a0,0x5
    addu v1,v1,a0
    .word 0xaca3000c
    nop
L142178:
    .word 0x8f838344
    slt v1,a2,v1
    bnez v1,L1420f0
    .word 0x70002e28
    .word 0x70004628
    b L1421e8
    .word 0x70003e28
    .word 0x70004e28
L142198:
    b L1421c8
    .word 0x70003628
    addu a1,v1,a2
L1421a4:
    .word 0x8f828338
    .word 0x8ca40004
    addiu a2,a2,4
    addiu t1,t1,1
    sll v1,a0,0x4
    addu v1,v1,a0
    sll v1,v1,0x2
    addu v0,v0,v1
    .word 0xaca20004
L1421c8:
    .word 0x8f82833c
    addu v1,a3,v0
    .word 0x8c620000
    slt v0,t1,v0
    bnez v0,L1421a4
    addu a1,v1,a2
    addiu a3,a3,300
    addiu t0,t0,1
L1421e8:
    .word 0x8f828340
    slt v0,t0,v0
    bnez v0,L142198
    .word 0x70004e28
    jal func_00142510
    nop
    jal func_0013b350
    nop
    .word 0x3c020030
    addiu v0,v0,-4848
    .word 0x7000f628
    .word 0x7000be28
    b L1422f8
    .word 0xafa200a0
L142220:
    .word 0x8f828338
    .word 0x70009628
    .word 0x7000a628
    .word 0x7000b628
    addu s1,v0,s7
    .word 0x8fa200a0
    .word 0x72209e28
    .word 0xac400000
L142240:
    .word 0x70001e28
    .word 0x72602628
    addiu v0,zero,-1
L14224c:
    addiu v1,v1,1
    .word 0xac820024
    slti at,v1,4
    addiu a0,a0,4
    nop
    bnez at,L14224c
    nop
    .word 0x8f828338
    addu v0,s7,v0
    addu v0,v0,s6
    .word 0x8c500000
    beqzl s0,L1422cc
    addiu s4,s4,1
    .word 0x7000ae28
    nop
    .word 0x72202628
L14228c:
    .word 0x72402e28
    .word 0x72003628
    jal func_00142340
    .word 0x72a03e28
    addiu v1,zero,4
    beql v0,v1,L1422bc
    addiu s5,s5,1
    sll v0,v0,0x2
    addu v0,s3,v0
    .word 0xac550024
    nop
    addiu s5,s5,1
L1422bc:
    slti v0,s5,4
    bnez v0,L14228c
    .word 0x72202628
    addiu s4,s4,1
L1422cc:
    slti v0,s4,2
    addiu s2,zero,1
    addiu s3,s3,16
    bnez v0,L142240
    addiu s6,s6,4
    .word 0x8fa200a0
    addiu s7,s7,68
    addiu s8,s8,1
    addiu v0,v0,4
    .word 0xafa200a0
    nop
L1422f8:
    .word 0x8f828344
    slt v0,s8,v0
    bnez v0,L142220
    nop
    addiu v0,zero,1
L14230c:
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
    addiu sp,sp,192
}
