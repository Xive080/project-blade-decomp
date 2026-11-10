#!/usr/bin/env python3
"""Enumera funciones candidatas para tools/m2c_pass.py y escribe build/cands2.json ([inicio, fin, nº instr.]).
Inicios: destinos de jal + palabra tras el delay slot de un jr ra (saltando relleno). Si un salto relativo
sale del trozo, se une con el siguiente. Descarta: ya igualadas (src/matched), bloques RenderWare,
funciones con `sd ra` (otra librería), COP2/VU0, syscall y medios de función.
NO descarta `paddub rd,rs,zero` (opcode MMI): es el `move` que emite mwccps2.
Uso (en el contenedor): python3 tools/m2c_enum.py"""
import sys, glob, json
from pathlib import Path
from collections import Counter
ROOT=Path(__file__).resolve().parent.parent; sys.path.insert(0,str(ROOT/"tools")); sys.path.insert(0,str(ROOT/"toolchain/pylib"))
import llm_match as L
d,segs=L.load_segments(ROOT/"SCES_502.46")
JR=0x03E00008
matched={int(Path(p).stem[2:],16) for p in glob.glob(str(ROOT/"src/matched/*.c"))}
RW=[(0x1bc000,0x1d0000),(0x1d8000,0x1e0000),(0x1f4000,0x20c000),(0x214000,0x21c000)]
res=[]
for va0,off,fs in segs:
    u=lambda a: L.u32(d,off+a-va0)
    end=va0+fs
    jal=set()
    for a in range(va0,end,4):
        w=u(a)
        if w>>26==3:
            t=((a+4)&0xF0000000)|((w&0x3FFFFFF)<<2)
            if va0<=t<end: jal.add(t)
    after=set()
    for a in range(va0+8,end,4):
        if u(a-8)==JR:
            b=a
            while b<end and u(b)==0: b+=4
            if b<end: after.add(b)
    S=sorted(jal|after)
    i=0
    while i<len(S):
        s=S[i]; j=i+1
        while True:
            e=S[j] if j<len(S) else end
            # strip padding
            ee=e
            while ee>s and u(ee-4)==0: ee-=4
            ws=[u(a) for a in range(s,ee,4)]
            esc=False
            for k,w in enumerate(ws):
                op=w>>26
                if op in (1,4,5,6,7,20,21,22,23) or (op==0x11 and ((w>>21)&31)==8):
                    o=w&0xFFFF; o=o-0x10000 if o&0x8000 else o
                    t=k+1+o
                    if t>=len(ws): esc=True
            if esc and j<len(S) and S[j] not in jal and j-i<20: j+=1; continue
            break
        res.append((s,ee,ws,s in jal,esc))
        i=j
def ok(w):
    for x in w:
        op=x>>26
        if x==0xC or op in (0x12,0x36,0x3E,0x13): return False
    return True
out=[]; c=Counter()
for s,e,ws,isjal,esc in res:
    n=len(ws)
    if n<2 or len(ws)<2 or ws[-2]!=JR: c["noend"]+=1; continue
    if esc: c["esc"]+=1; continue
    if s in matched: c["matched"]+=1; continue
    if any(a<=s<b for a,b in RW): c["rw"]+=1; continue
    if any(x&0xFFFF0000==0xFFBF0000 for x in ws): c["sdra"]+=1; continue
    if not ok(ws): c["asm"]+=1; continue
    if L.starts_mid_function(ws): c["mid"]+=1; continue
    c["ok"]+=1; out.append((n,s,e))
print(c, len(res))
out.sort()
json.dump([[hex(s),hex(e),n] for n,s,e in out],open(ROOT/"build/cands2.json","w"))
h=Counter(min(n//10*10,200) for n,_,_ in out); print(sorted(h.items()))
