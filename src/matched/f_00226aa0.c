asm void f(void) {
.set noreorder
.set noat
addiu sp,sp,-144
sq ra,64(sp)
sq s3,48(sp)
sq s2,32(sp)
sq s1,16(sp)
sq s0,0(sp)
.word 0x0c090cb8
.word 0x70808628
lw v1,12(s0)
addiu v0,zero,5
.word 0x1062006d
nop
addiu v0,zero,4
beq v1,v0,L226ae4
nop
.word 0x1000012b
lq ra,64(sp)
L226ae4:
ld v1,-30568(gp)
addiu a1,sp,104
lui v0,0x2e
addiu a0,v0,26432
.word 0xfca30000
.word 0xdc830000
.word 0xc4800008
addiu v0,sp,112
lui at,0x30
.word 0xfc430000
.word 0xe4400008
lw v1,28888(at)
.word 0x1460005a
nop
.word 0x3c010030
lw v1,30344(at)
.word 0x14600056
nop
.word 0x3c010030
lw v1,28548(at)
andi v1,v1,0x6000
.word 0x14600051
nop
.word 0x70004628
.word 0x72004e28
lui v1,0x3c23
ori v1,v1,0xd70a
mtc1 v1,$f2
mtc1 zero,$f4
.word 0x3c030030
addiu a0,v1,27648
lui v1,0x3f80
addiu a1,zero,1456
mtc1 v1,$f1
L226b6c:
lwc1 $f3,56(t1)
lwc1 $f0,0(v0)
div.s $f3,$f3,$f0
nop
nop
c.lt.s $f3,$f4
nop
bc1t L226b94
neg.s $f0,$f3
mov.s $f0,$f3
L226b94:
c.le.s $f0,$f2
nop
bc1tl L226be4
addiu t0,t0,1
c.lt.s $f3,$f4
nop
bc1f L226bb8
addiu a2,zero,1
.word 0x70003628
L226bb8:
sll v1,a2,0x2
addu a3,v1,sp
mult v1,a2,a1
lw a2,104(a3)
addu v1,a0,v1
addiu a2,a2,1
sw a2,104(a3)
lwc1 $f0,1232(v1)
add.s $f0,$f0,$f1
swc1 $f0,1232(v1)
addiu t0,t0,1
L226be4:
slti v1,t0,3
addiu v0,v0,4
bnez v1,L226b6c
addiu t1,t1,4
lw v0,104(sp)
lw v1,108(sp)
beq v0,v1,L226c54
lui at,0x30
slt at,v1,v0
addiu v0,zero,1
addiu v1,zero,1456
movn v0,zero,at
mult a0,v0,v1
xori v0,v0,0x1
.word 0x70431818
lui v0,0x30
addiu v0,v0,28548
addu a1,v0,a0
lui v0,0x30
addiu v0,v0,28548
lw a0,0(a1)
addu v1,v0,v1
ori v0,a0,0x2000
sw v0,0(a1)
lw v0,0(v1)
ori v0,v0,0x4000
.word 0x1000000a
sw v0,0(v1)
L226c54:
lw v0,28548(at)
ori v0,v0,0x4000
lui at,0x30
sw v0,28548(at)
.word 0x3c010030
lw v0,30004(at)
ori v0,v0,0x4000
.word 0x3c010030
sw v0,30004(at)
L226c78:
.word 0x0c090a58
nop
L226c80:
.word 0x3c020030
addiu a0,v0,28544
addiu v1,zero,2
.word 0x70601628
beqz v0,L226e20
addiu v1,v1,-1
lui v0,0x3a83
ori v0,v0,0x126f
mtc1 v0,$f2
mtc1 zero,$f6
lui v0,0x40e0
mtc1 v0,$f1
addiu v0,zero,1
L226cb4:
lw t1,0(a0)
lw a3,344(a0)
addiu a1,zero,-1
movn a1,v0,t1
dsll32 t0,a1,0x18
sltiu at,a3,2
bnez at,L226d14
dsra32 t0,t0,0x18
bltz a3,L226ce8
srl a2,a3,0x1
mtc1 a3,$f0
b L226d00
cvt.s.w $f3,$f0
L226ce8:
andi a1,a3,0x1
or a2,a2,a1
mtc1 a2,$f0
nop
cvt.s.w $f3,$f0
add.s $f3,$f3,$f3
L226d00:
lwc1 $f0,340(a0)
mul.s $f0,$f3,$f0
mul.s $f0,$f2,$f0
b L226d18
mul.s $f3,$f1,$f0
L226d14:
mtc1 zero,$f3
L226d18:
sll a1,t1,0x2
addu t1,s0,a1
lwc1 $f4,116(t1)
sltiu a1,a3,2
lwc1 $f5,100(t1)
xori a1,a1,0x1
addiu a2,zero,1
c.eq.s $f6,$f4
nop
bc1f L226d48
sw a1,124(t1)
.word 0x70003628
L226d48:
beqz a2,L226d74
nop
lw a1,0(a0)
sll a1,a1,0x2
addu a1,s0,a1
lwc1 $f0,84(a1)
c.eq.s $f4,$f0
nop
bc1f L226d74
addiu a2,zero,1
.word 0x70003628
L226d74:
lw a1,0(a0)
c.eq.s $f6,$f5
addiu a3,zero,1
sll a1,a1,0x2
addu a1,s0,a1
bc1f L226d94
sw a2,140(a1)
.word 0x70003e28
L226d94:
beqz a3,L226dc0
nop
lw a1,0(a0)
sll a1,a1,0x2
addu a1,s0,a1
lwc1 $f0,76(a1)
c.eq.s $f5,$f0
nop
bc1f L226dc0
addiu a3,zero,1
.word 0x70003e28
L226dc0:
lw a2,0(a0)
mtc1 t0,$f0
.word 0x70602e28
cvt.s.w $f0,$f0
addiu v1,v1,-1
sll a2,a2,0x2
addu a2,s0,a2
sw a3,132(a2)
lw a2,0(a0)
mul.s $f0,$f3,$f0
sll a2,a2,0x2
addu a2,s0,a2
swc1 $f0,68(a2)
lw a2,0(a0)
sll a2,a2,0x2
addu a2,s0,a2
swc1 $f4,84(a2)
lw a2,0(a0)
sll a2,a2,0x2
addu a2,s0,a2
addiu a0,a0,1456
bnez a1,L226cb4
swc1 $f5,76(a2)
nop
L226e20:
addiu s2,sp,128
.word 0x70008e28
.word 0x72009e28
L226e2c:
lui v0,0x2e
addiu a0,v0,26448
.word 0xdc820000
.word 0xc4800008
addiu v1,sp,128
.word 0xfc620000
.word 0xe4600008
lwc1 $f1,0(s2)
lwc1 $f2,56(s0)
neg.s $f0,$f1
c.lt.s $f2,$f0
nop
bc1f L226e6c
nop
b L226e80
swc1 $f0,56(s0)
L226e6c:
c.le.s $f2,$f1
nop
bc1t L226e80
nop
swc1 $f1,56(s0)
L226e80:
sw s1,80(sp)
lwc1 $f1,56(s0)
lwc1 $f0,0(s2)
addiu a2,zero,2
.word 0x70c01628
addiu a2,a2,-1
div.s $f0,$f1,$f0
nop
nop
beqz v0,L226f30
swc1 $f0,84(sp)
sll v0,a2,0x2
addu a0,s3,v0
addu v0,v0,sp
addiu a1,v0,80
nop
L226ec0:
lwc1 $f1,0(s2)
lwc1 $f2,68(a0)
neg.s $f0,$f1
c.lt.s $f2,$f0
nop
bc1f L226ee4
nop
b L226ef8
swc1 $f0,68(a0)
L226ee4:
c.le.s $f2,$f1
nop
bc1t L226ef8
nop
swc1 $f1,68(a0)
L226ef8:
lwc1 $f2,56(s0)
lwc1 $f1,68(a0)
.word 0x70c01628
lwc1 $f0,0(s2)
addiu a2,a2,-1
add.s $f1,$f2,$f1
div.s $f0,$f1,$f0
swc1 $f0,8(a1)
lw v1,124(a0)
sw v1,16(a1)
addiu a0,a0,-4
bnez v0,L226ec0
addiu a1,a1,-4
nop
L226f30:
lw a0,-31572(gp)
beqz a0,L226f50
nop
lw v0,16(a0)
addiu a2,sp,80
.word 0x0040f809
addiu a1,zero,15
nop
L226f50:
lw a0,-30524(gp)
addiu v0,zero,1
sw v0,96(sp)
sw v0,100(sp)
addiu a2,sp,80
lw v0,16(a0)
.word 0x0040f809
addiu a1,zero,15
addiu s1,s1,1
slti v0,s1,3
addiu s2,s2,4
addiu s0,s0,4
bnez v0,L226e2c
addiu s3,s3,8
lq ra,64(sp)
L226f8c:
lq s3,48(sp)
lq s2,32(sp)
lq s1,16(sp)
lq s0,0(sp)
addiu v0,zero,1
jr ra
addiu sp,sp,144
}
