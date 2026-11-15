extern void func_001297c0(void);
extern void func_001ce160(void);
asm void func(void) {
    .set noreorder
    .set noat
    .word 0x27bdfef0
    .word 0x7fbf0090
    .word 0x7fbe0080
    .word 0x7fb70070
    .word 0x7fb60060
    .word 0x7fb50050
    .word 0x7fb40040
    .word 0x7fb30030
    .word 0x7fb20020
    .word 0x7fb10010
    .word 0x3c027000
    .word 0x7fb00000
    .word 0x34423fb8
    .word 0x8c420000
    .word 0x27b00104
    .word 0x27b700e8
    .word 0x27be00e4
    .word 0x24440001
    .word 0xae000000
    .word 0xaee00000
    .word 0x27a200e0
    .word 0xafc00000
    .word 0xac400000
    .word 0x27b300f4
    .word 0x27b200f0
    .word 0xae600000
    .word 0x27b100ec
    .word 0xae400000
    .word 0xae200000
    .word 0xafa500c0
    .word 0xc4c20000
    .word 0xc4c10004
    .word 0xc4c00008
    .word 0x27a500d4
    .word 0x27a300c8
    .word 0x3c02afbf
    .word 0xe4a20000
    .word 0xe4a10004
    .word 0xe4a00008
    .word 0xc4e20000
    .word 0xc4e10004
    .word 0xc4e00008
    .word 0x3c010030
    .word 0x3442cfdf
    .word 0x7120b628
    .word 0x7140ae28
    .word 0xe4620000
    .word 0xe4610004
    .word 0xe4600008
    .word 0x8fa30110
    .word 0xac24a568
    .word 0x3c017000
    .word 0xafa30108
    .word 0xafa800c4
    .word 0x8c233ffc
    bne v1,v0, L17bbf4
    .word 0x7160a628
    .word 0x3c010030
    .word 0x8c22a568
    .word 0x3c017000
    .word 0xac223fb8
L17bbf4:
    .word 0xc4a10000
    .word 0xc4e00000
    .word 0x3c020018
    .word 0xc7a200d8
    .word 0xc7a300dc
    .word 0x3c017000
    .word 0x27a500a0
    .word 0x46000801
    .word 0x2446c000
    .word 0xe7a000ac
    .word 0xc4e00004
    .word 0x46001001
    .word 0xe7a000b0
    .word 0xc4e00008
    .word 0x46001801
    .word 0xe7a000b4
    .word 0xc4e00000
    .word 0x46000800
    .word 0xe7a000a0
    .word 0xc4e00004
    .word 0x46001000
    .word 0xe7a000a4
    .word 0xc4e00008
    .word 0x46001800
    .word 0xe7a000a8
    .word 0x8c243fd8
    jal func_001297c0
    .word 0x27a700c0
    .word 0x8e020000
    beqz v0, L17bd44
    nop
    beqz s6, L17bcd0
    nop
    .word 0x44820800
    .word 0x27a200e0
    .word 0x46800860
    .word 0xc4400000
    .word 0x3c023f80
    .word 0x44821000
    nop
    .word 0x46011043
    .word 0x46010002
    .word 0xe6c00000
    .word 0xc6010000
    .word 0xc7c00000
    .word 0x46800860
    .word 0x46011043
    .word 0x46010002
    .word 0xe6c00004
    .word 0xc6010000
    .word 0xc6e00000
    .word 0x46800860
    .word 0x46011043
    .word 0x46010002
    .word 0xe6c00008
L17bcd0:
    beqz s5, L17bd38
    nop
    .word 0xc6010000
    .word 0x3c023f80
    .word 0x44821000
    .word 0xc6200000
    .word 0x72a02628
    .word 0x72a02e28
    .word 0x46800860
    .word 0x46011043
    .word 0x46010002
    .word 0xe6a00000
    .word 0xc6010000
    .word 0xc6400000
    .word 0x46800860
    .word 0x46011043
    .word 0x46010002
    .word 0xe6a00004
    .word 0xc6010000
    .word 0xc6600000
    .word 0x46800860
    .word 0x46011043
    nop
    .word 0x46010002
    jal func_001ce160
    .word 0xe6a00008
L17bd38:
    beqz s4, L17bd44
    nop
    .word 0xae800000
L17bd44:
    .word 0x8e020000
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
    .word 0x27bd0110
}
