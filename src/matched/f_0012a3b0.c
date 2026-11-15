extern void F12e880(void);
extern void F142a90(void);
extern void F142aa0(void);
extern void F142ad0(void);
extern void F142b00(void);
extern void F142d80(void);
extern void F16bd40(void);
extern void F1bf2b0(void);
extern void F1c40f0(void);
extern void F1ce240(void);
extern void F201cc0(void);
extern void F201cf0(void);
extern void F201d20(void);
asm void func(void) {
    .set noreorder
    addiu sp,sp,-160
    sq ra,64(sp)
    sq s2,48(sp)
    sq s1,32(sp)
    sq s0,16(sp)
    .word 0x70A08E28
    .word 0x70808628
    .word 0xE7B50004
    addiu a1,sp,112
    .word 0x72202628
    .word 0xE7B40000
    jal F1bf2b0
    .word 0x70009628
    jal F201d20
    .word 0x72202628
    sw v0,120(s0)
    jal F142ad0
    lw a0,120(s0)
    .word 0x70408E28
    beqz s1,L12a448
    nop
L12a404:
    jal F16bd40
    lw a0,4(s1)
    addiu v1,zero,1
    bne v0,v1,L12a424
    .word 0x72202628
    .word 0x72209628
    nop
    .word 0x72202628
L12a424:
    jal F12e880
    .word 0x70002E28
    lw a0,120(s0)
    jal F142aa0
    .word 0x72202E28
    .word 0x70408E28
    bnez s1,L12a404
    nop
    nop
L12a448:
    beqz s2,L12a468
    nop
    lw a0,120(s0)
    jal F201cf0
    .word 0x72402E28
    lw a0,120(s0)
    jal F201cc0
    .word 0x72402E28
L12a468:
    lw a0,120(s0)
    addiu a1,sp,156
    jal F142d80
    .word 0x70003628
    .word 0xC60200A4
    .word 0x3C023F80
    mtc1 v0,$f1
    .word 0xC7A0009C
    lw a0,120(s0)
    addiu a1,sp,80
    add.s $f1,$f1,$f2
    .word 0x70003628
    div.s $f21,$f1,$f0
    nop
    nop
    jal F142b00
    nop
    mtc1 zero,$f20
    .word 0x70008E28
    andi v0,s1,0x1
L12a4b8:
    beqz v0,L12a4cc
    nop
    .word 0xC7A00050
    b L12a4d8
    .word 0xE7A00080
L12a4cc:
    .word 0xC7A0005C
    .word 0xE7A00080
    nop
L12a4d8:
    andi v0,s1,0x2
    beqz v0,L12a4f0
    nop
    .word 0xC7A00054
    b L12a4f8
    .word 0xE7A00084
L12a4f0:
    .word 0xC7A00060
    .word 0xE7A00084
L12a4f8:
    andi v0,s1,0x4
    beqz v0,L12a510
    nop
    .word 0xC7A00058
    b L12a518
    .word 0xE7A00088
L12a510:
    .word 0xC7A00064
    .word 0xE7A00088
L12a518:
    jal F1ce240
    addiu a0,sp,128
    c.le.s $f20,$f0
    nop
    bc1t L12a53c
    addiu a0,sp,128
    b L12a54c
    addiu s1,s1,1
    addiu a0,sp,128
L12a53c:
    jal F1ce240
    nop
    mov.s $f20,$f0
    addiu s1,s1,1
L12a54c:
    slti v0,s1,8
    bnez v0,L12a4b8
    andi v0,s1,0x1
    mul.s $f20,$f20,$f21
    .word 0xE61400A4
    .word 0xE7B50098
    .word 0xE7B50094
    .word 0xE7B50090
    jal F142a90
    lw a0,120(s0)
    addiu a1,sp,144
    .word 0x70402628
    jal F1c40f0
    .word 0x70003628
    lq ra,64(sp)
    lq s2,48(sp)
    lq s1,32(sp)
    lq s0,16(sp)
    .word 0xC7B50004
    .word 0xC7B40000
    jr ra
    addiu sp,sp,160
}
