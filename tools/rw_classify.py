#!/usr/bin/env python3
"""Clasifica las funciones candidatas pendientes (sin src/matched/f_XXXXXXXX.c) en rw / game / unknown.
Combina bloques de direcciones, globales y jal compartidos con las funciones que referencian cadenas RW,
vecindad en el grafo de llamadas y patrones (sd ra, etc.). Escribe build/rw_classification.json y
build/rw_classification_summary.md. Uso: python3 tools/rw_classify.py"""
import json, os, re, struct, sys
from collections import defaultdict, Counter
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from batch_permuter import load_segments, find_functions, u32  # noqa: E402

# (copiado de globals_index.py: aquel importa capstone, que aquí no carga)
W = {0x20: ("lb", 1), 0x24: ("lbu", 1), 0x28: ("sb", 1), 0x21: ("lh", 2), 0x25: ("lhu", 2), 0x29: ("sh", 2), 0x23: ("lw", 4),
     0x27: ("lwu", 4), 0x2b: ("sw", 4), 0x31: ("lwc1", 4), 0x39: ("swc1", 4), 0x37: ("ld", 8), 0x3f: ("sd", 8), 0x1e: ("lq", 16), 0x1f: ("sq", 16)}


def _scan(words):
    """-> (bases, accesses). bases: constantes base (dirección o ('gp', off)); accesses: lista (clave_abs, op, anchura)."""
    const, bases, acc = {}, set(), []
    for w in words:
        op, rs, rt, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, w & 0xFFFF
        simm = imm - 0x10000 if imm & 0x8000 else imm
        if op == 15:
            const[rt] = ("a", imm << 16)
        elif op in (9, 13) and rs in const and const[rs][0] == "a":
            v = const[rs][1] + (simm if op == 9 else imm)
            const[rt] = ("a", v & 0xFFFFFFFF); bases.add(v & 0xFFFFFFFF)
        elif op == 9 and rs == 28:
            const[rt] = ("g", simm); bases.add(("gp", simm))
        elif op in W:
            n, wd = W[op]
            if rs == 28: acc.append((("gp", simm), n, wd))
            elif rs in const:
                k = const[rs]; acc.append(((k[1] + simm) & 0xFFFFFFFF if k[0] == "a" else ("gp", k[1] + simm), n, wd))
        elif op not in (0, 2, 3, 4, 5, 6, 7, 1) and rt in const and op not in (0x2b, 0x28, 0x29, 0x3f, 0x39, 0x1f):
            const.pop(rt, None)
    return bases, acc



class G: scan=staticmethod(_scan)

d, segs = load_segments(ROOT / "SCES_502.46")
base_va, base_off, _ = segs[0]
def rd(va): return u32(d, va - base_va + base_off)

JR = 0x03E00008
RW_BLOCKS = [(0x1bc000, 0x1d0000), (0x1d8000, 0x1e0000), (0x1f4000, 0x20c000), (0x214000, 0x21c000)]
SDK_BLOCK = (0x1098C0, 0x10A1A0)

def segment():
    """Segmentación de funciones como build/enum2.py (destinos de jal + tras 'jr ra'), con fusión si un salto escapa."""
    va0, off = base_va, base_off
    u = lambda a: u32(d, off + a - va0)
    end = va0 + 0x236280
    jal = set()
    for a in range(va0, end, 4):
        w = u(a)
        if w >> 26 == 3:
            t = ((a + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
            if va0 <= t < end: jal.add(t)
    after = set()
    for a in range(va0 + 8, end, 4):
        if u(a - 8) == JR:
            b = a
            while b < end and u(b) == 0: b += 4
            if b < end: after.add(b)
    S = sorted(jal | after); res = []; i = 0
    while i < len(S):
        s = S[i]; j = i + 1
        while True:
            e = S[j] if j < len(S) else end
            ee = e
            while ee > s and u(ee - 4) == 0: ee -= 4
            ws = [u(a) for a in range(s, ee, 4)]
            esc = False
            for k, w in enumerate(ws):
                op = w >> 26
                if op in (1, 4, 5, 6, 7, 20, 21, 22, 23) or (op == 0x11 and ((w >> 21) & 31) == 8):
                    o = w & 0xFFFF; o = o - 0x10000 if o & 0x8000 else o
                    if k + 1 + o >= len(ws): esc = True
            if esc and j < len(S) and S[j] not in jal and j - i < 20: j += 1; continue
            break
        res.append((s, ee, ws)); i = j
    return res

fns = [(s, 0, 0) for s, e, w in segment()]  # placeholder
SEG = segment()
starts = [s for s, e, w in SEG]
import bisect

# --- cadenas RW referenciadas
def cstrings():
    out = []; o = 0; blob = d
    for m in re.finditer(rb"[\x20-\x7e]{4,}\x00", blob):
        out.append((m.start() - base_off + base_va, m.group(0)[:-1].decode()))
    return out
S = cstrings()
RW_STR = re.compile(r"\.csl$|^PS2All|^PS2Obj|AllInOne|Vanilla|^PS2Manager|^PS2Mat|^PS2Mesh|^PS2Im3D|_rwPS2|^Rx|MaterialScatter|PS2xyz|PS2uv|PS2rgba|PS2normal|PS2user|Instance\.csl|Dma chain")
SDK_STR = re.compile(r"^sceGs|libdma|libpad|PADMAN|^sce[A-Z]|load_chroma|quantizer|Module version", re.I)
rw_str_addr = {a for a, s in S if RW_STR.search(s)}
sdk_str_addr = {a for a, s in S if SDK_STR.search(s)}

feat = {}
for va, e, w in SEG:
    bases, acc = G.scan(w)
    calls = set(); jr_ra_tail = 0; syscall = 0; sdra = 0; sqra = 0; fp = 0; vu = 0; mmi = 0; jalr = 0
    for i, x in enumerate(w):
        op = x >> 26
        if op == 3: calls.add(((x & 0x3FFFFFF) << 2) | 0x00000000)
        if op == 0 and (x & 0x3f) == 9: jalr += 1
        if op == 0 and (x & 0x3f) == 0xc: syscall += 1
        if op == 0x3f and ((x >> 16) & 31) == 31: sdra += 1
        if op == 0x1f and ((x >> 16) & 31) == 31: sqra += 1
        if op == 0x11: fp += 1
        if op == 0x12: vu += 1
        if op == 0x1c: mmi += 1
    abs_g = {b for b in bases if isinstance(b, int)}
    gp_g = {b[1] for b in bases if isinstance(b, tuple)}
    feat[va] = dict(n=len(w), calls=calls, absg=abs_g, gpg=gp_g, sdra=sdra, sqra=sqra, fp=fp, vu=vu, mmi=mmi, jalr=jalr,
                    syscall=syscall, end=va + 4 * len(w),
                    rwstr=bool(abs_g & rw_str_addr) or any((x in rw_str_addr) for x in abs_g),
                    )
# función que referencia cadena RW (bases pueden incluir la dirección exacta de la cadena)
def refs_str(va, addrs):
    return any(b in addrs for b in feat[va]["absg"])
seeds = [va for va in feat if refs_str(va, rw_str_addr)]
sdk_seeds = [va for va in feat if refs_str(va, sdk_str_addr)]
print("semillas RW (cadenas):", [hex(x) for x in seeds], file=sys.stderr)

def fn_of(addr):
    i = bisect.bisect_right(starts, addr) - 1
    return starts[i] if i >= 0 and addr < feat[starts[i]]["end"] else None

# grafo de llamadas
callees = {va: {t for t in f["calls"] if t in feat} for va, f in feat.items()}
callers = defaultdict(set)
for a, ts in callees.items():
    for t in ts: callers[t].add(a)

# señal 2: compartir globales (excluyendo muy comunes) y jal con las semillas
seed_g = Counter(); seed_c = Counter()
for s in seeds:
    for g in feat[s]["absg"]: seed_g[g] += 1
    for c in feat[s]["calls"]: seed_c[c] += 1
glob_use = Counter(); call_use = Counter()
for va, f in feat.items():
    for g in f["absg"]: glob_use[g] += 1
    for c in f["calls"]: call_use[c] += 1
# objetivos compartidos por >=2 semillas, y no ubicuos (<= 200 usuarios) para no confundir con memcpy
sh_g = {g for g, k in seed_g.items() if k >= 2 and glob_use[g] <= 150 and g not in rw_str_addr}
sh_c = {c for c, k in seed_c.items() if k >= 2 and call_use[c] <= 150}
json.dump(dict(seeds=seeds, shared_globals=sorted(sh_g), shared_calls=sorted(sh_c)),
          open(ROOT / "build/rw_candidates.json", "w"))

def shared(va):
    f = feat[va]
    return len(f["absg"] & sh_g), len(f["calls"] & sh_c)

# ---------------------------------------------------------------- análisis
def inblk(a, blocks=RW_BLOCKS): return any(lo <= a < hi for lo, hi in blocks)
def blk_dist(a):
    return min((0 if lo <= a < hi else min(abs(a - lo), abs(a - hi)) for lo, hi in RW_BLOCKS))
R = {a for a in feat if inblk(a)} | set(seeds)           # núcleo RW por bloque (hallazgos 15/16)
gk = lambda f: f["absg"] | {("gp", x) for x in f["gpg"]}
gu = Counter(); gr = Counter(); cu = Counter(); cr = Counter()
for a, f in feat.items():
    for g in gk(f): gu[g] += 1; gr[g] += a in R
    for t in f["calls"]: cu[t] += 1; cr[t] += a in R
RWG = {g for g in gr if gr[g] >= 3 and gr[g] / gu[g] >= 0.7 and gu[g] <= 200}   # globales "de RW"
RWC = {t for t in cr if cr[t] >= 3 and cr[t] / cu[t] >= 0.7 and cu[t] <= 200} | {t for t in R}  # destinos "de RW"
_sdkish = lambda a: feat[a]["sdden"] >= 0.4 if "sdden" in feat[a] else False
GAMEG_RAW = {g for g in gu if gu[g] >= 2 and gr[g] == 0}  # globales usadas solo fuera de RW (se afina abajo sin las del SDK)

callees = {a: {t for t in f["calls"] if t in feat} for a, f in feat.items()}
callers = defaultdict(set)
for a, ts in callees.items():
    for t in ts: callers[t].add(a)

# punteros a función: desde código (lui/addiu a una entrada) y desde tablas de datos
TEXT_END = 0x262000
ptr_from_code = defaultdict(set)
for a, f in feat.items():
    for g in f["absg"]:
        if g in feat and g != a: ptr_from_code[g].add(a)
hits = [(a, rd(a)) for a in range(TEXT_END, base_va + 0x236280, 4) if rd(a) in feat]
tables = []
for a, v in hits:
    if tables and a - tables[-1][-1][0] <= 0x20: tables[-1].append((a, v))
    else: tables.append([(a, v)])
tables = [t for t in tables if len(t) >= 2]
table_of = defaultdict(list)
for ti, t in enumerate(tables):
    for a, v in t: table_of[v].append(ti)
def table_rw_frac(ti, exclude=None):
    vs = {v for _, v in tables[ti] if v != exclude}
    return (len(vs & R) / len(vs)) if vs else 0.0, len(vs)

str_set = {a: t for a, t in S}
game_str_addr = {a for a, t in S if a not in rw_str_addr and a not in sdk_str_addr and len(t) >= 4}
for a, f in feat.items():
    f["gstr"] = len(f["absg"] & game_str_addr)
    f["rwstr_n"] = len(f["absg"] & rw_str_addr)
    f["sdkstr"] = len(f["absg"] & sdk_str_addr)

# ---- señales de zona SDK por densidad de 'sd ra' entre vecinos (otra librería, otro compilador)
order = sorted(feat)
idx_of = {a: i for i, a in enumerate(order)}
def sdra_density(a, k=6):
    i = idx_of[a]; nb = [order[j] for j in range(max(0, i - k), min(len(order), i + k + 1)) if order[j] != a]
    return sum(feat[x]["sdra"] > 0 for x in nb) / max(1, len(nb))
SDK_ZONE = (0x100000, 0x130000)
SDK_STR_WORDS = re.compile(r"macroblock|slice|picture|mpeg|chroma|work area|image buffer|BDEC|D1_TADR|TTY|rom0:|sqrt|acosf|atan2f|vertical size|field|IOP|sce|libpad|PADMAN", re.I)
for a, f in feat.items():
    f["sdden"] = sdra_density(a)
    f["sdkstr"] += sum(bool(SDK_STR_WORDS.search(str_set[g])) for g in f["absg"] if g in game_str_addr)
    f["gstr"] -= sum(bool(SDK_STR_WORDS.search(str_set[g])) for g in f["absg"] if g in game_str_addr)

_gnon = Counter()
for a, f in feat.items():
    if f["sdden"] < 0.4:
        for g in gk(f): _gnon[g] += 1
GAMEG = {g for g in GAMEG_RAW if _gnon[g] >= 2}

# ================================================================ clasificación
def pending_list():
    c = json.load(open(ROOT / "build/cands2.json"))
    have = {int(f[2:10], 16) for f in os.listdir(ROOT / "src/matched") if f.startswith("f_") and f.endswith(".c")}
    return [(int(a, 16), int(b, 16), n) for a, b, n in c if int(a, 16) not in have]

def refs_to(p):
    """Referentes de p: llamadores por jal, por puntero desde código y por tablas de datos (tabla -> miembros)."""
    r = {("jal", x) for x in callers[p]} | {("ptr", x) for x in ptr_from_code[p]}
    return r

def classify_all(pend):
    P = {a for a, _, _ in pend}
    RWL = set(R)                      # etiquetado rw (propaga)
    SDKL = {a for a in feat if SDK_ZONE[0] <= a < SDK_ZONE[1] and feat[a]["sdden"] >= 0.4} | \
           {a for a in feat if a < TEXT_END and feat[a]["sdden"] >= 0.4}
    res = {}
    for it in range(3):
        newrw = set()
        for a, e, n in pend:
            f = feat[a]; sig = []; grp = set(); gm = []
            # --- señales RW
            bd = blk_dist(a)
            if SDK_BLOCK[0] <= a < SDK_BLOCK[1]:
                sig.append("zona libkernel 0x1098C0-0x10A1A0"); grp.add("zona")
            elif a in SDKL:
                sig.append(f"zona SDK por 'sd ra' (densidad vecinos {f['sdden']:.2f})"); grp.add("zona")
            elif bd <= 0x800:
                sig.append(f"adyacente a bloque RW (a {bd:#x})"); grp.add("zona")
            elif bd <= 0x2000:
                sig.append(f"cerca de bloque RW (a {bd:#x})"); grp.add("zona_d")
            ng = len(gk(f) & RWG)
            if ng: sig.append(f"{ng} global(es) de RW"); grp.add("glob")
            if f["rwstr_n"]: sig.append("cadena RW (.csl/PS2All)"); grp.add("str")
            if f["sdkstr"]: sig.append("cadena SDK (mpeg/libc/libpad)"); grp.add("sdkstr")
            refs = {x for _, x in refs_to(a)}
            tbl = [ti for ti in table_of.get(a, [])]
            rf_rw = {x for x in refs if x in RWL}; rf_sdk = {x for x in refs if x in SDKL}
            if refs and len(rf_rw | rf_sdk) == len(refs) and not tbl:
                sig.append(f"{len(refs)} referente(s), todos RW/SDK"); grp.add("ref")
            elif refs and len(rf_rw | rf_sdk) / len(refs) >= 0.7 and len(refs) >= 3:
                sig.append(f"{len(rf_rw | rf_sdk)}/{len(refs)} referentes RW/SDK"); grp.add("ref")
            for ti in tbl:
                fr, nv = table_rw_frac(ti, exclude=a)
                if nv >= 1 and fr >= 0.5:
                    sig.append(f"en tabla de punteros {tables[ti][0][0]:#x} con {fr:.0%} RW"); grp.add("ref")
            co = callees[a]
            co_rw = {x for x in co if x in RWL or x in SDKL}
            if co and len(co_rw) == len(co) and f["calls"] == co | set() and not f["absg"] - rw_str_addr - {g for g in f["absg"] if g in RWG}:
                sig.append(f"solo llama a RW/SDK ({len(co)}) y sin globales ajenos"); grp.add("out")
            elif len(co) >= 3 and len(co_rw) / len(co) >= 0.7 and ng:
                sig.append(f"{len(co_rw)}/{len(co)} llamados RW/SDK"); grp.add("out")
            # --- señales game
            co_game = {x for x in co if x not in RWL and x not in SDKL}
            gg = len(f["absg"] & {g for g in GAMEG}) if True else 0
            if f["gstr"]: gm.append("cadena propia del juego"); 
            if len(co_game) >= 2: gm.append(f"llama a {len(co_game)} funciones no RW/SDK")
            if gg >= 2: gm.append(f"{gg} globales usados solo fuera de RW")
            nonR_refs = {x for x in refs if x not in RWL and x not in SDKL}
            if len(nonR_refs) >= 2: gm.append(f"{len(nonR_refs)} referentes no RW/SDK")
            for ti in tbl:
                fr, nv = table_rw_frac(ti, exclude=a)
                if nv >= 3 and fr == 0: gm.append(f"tabla de punteros sin RW ({tables[ti][0][0]:#x}, {nv} entradas)")
            if bd > 0x10000 and a not in SDKL: gm.append("lejos de bloques RW/SDK")
            f["_sig"] = sig; f["_grp"] = grp; f["_gm"] = gm
            res[a] = (sig, grp, gm)
            if len(grp - {"zona_d"}) >= 2 and not any(g.startswith(("cadena propia", "llama a")) for g in gm):
                newrw.add(a)
        if not (newrw - RWL): break
        RWL |= newrw
    return res, RWL, SDKL

STRONG_GM = ("cadena propia", "llama a", "globales usados solo fuera", "referentes no RW/SDK", "tabla de punteros sin RW")
def is_strong(x): return any(k in x for k in STRONG_GM)

def decide(a, res, RWL):
    sig, grp, gm = res[a]
    g2 = grp - {"zona_d"}
    gm_strong = [x for x in gm if is_strong(x)]
    if len(g2) >= 2 and not gm_strong:
        conf = min(0.9, 0.5 + 0.1 * len(g2) + (0.1 if "str" in g2 else 0) - (0.1 if gm_strong else 0))
        return "rw", round(conf, 2), sig + [f"(contra) {x}" for x in gm_strong]
    if not g2 and len(gm_strong) >= 2:
        conf = min(0.85, 0.45 + 0.1 * len(gm_strong) + (0.05 if "lejos de bloques RW/SDK" in gm else 0))
        return "game", round(conf, 2), gm + sig
    if len(g2) == 1 and len(gm_strong) >= 3:
        return "game", 0.4, gm + [f"(contra) {x}" for x in sig]
    tag = []
    if g2: tag.append("sesgo rw")
    elif gm_strong or gm: tag.append("sesgo game")
    return "unknown", 0.3 if g2 or gm_strong else 0.2, sig + gm + tag

def size_bucket(n):
    for hi, nm in ((4, "<=4"), (8, "5-8"), (16, "9-16"), (32, "17-32"), (64, "33-64"), (128, "65-128"), (256, "129-256")):
        if n <= hi: return nm
    return ">256"
SIZES = ["<=4", "5-8", "9-16", "17-32", "33-64", "65-128", "129-256", ">256"]

def main():
    pend = pending_list()
    res, RWL, SDKL = classify_all(pend)
    out = []
    for a, e, n in sorted(pend):
        lab, conf, sig = decide(a, res, RWL)
        out.append({"addr": f"0x{a:08x}", "instr": n, "label": lab, "confidence": conf, "signals": sig})
    (ROOT / "build/rw_classification.json").write_text(json.dumps(out, indent=1))
    # validación: lo ya igualado (src/matched) fuera de bloques RW no debería salir 'rw' (salvo zona SDK)
    have = sorted(int(f[2:10], 16) for f in os.listdir(ROOT / "src/matched") if f.startswith("f_") and f.endswith(".c"))
    mt = [(a, feat[a]["end"], feat[a]["n"]) for a in have if a in feat and not inblk(a)]
    r2, RWL2, _ = classify_all(mt)
    vc = Counter(decide(a, r2, RWL2)[0] for a, _, _ in mt)
    vz = Counter(); 
    for a, _, _ in mt:
        if decide(a, r2, RWL2)[0] == "rw": vz["sdk-zona" if a < 0x130000 or sdra_density(a) >= .4 else "otro"] += 1
    # resumen
    L = ["# Clasificación RW / game / unknown de las candidatas pendientes", "",
         f"Generado por `tools/rw_classify.py`. Pendientes = entradas de `build/cands2.json` sin `src/matched/f_XXXXXXXX.c` en el momento de ejecutar: **{len(out)}**.", "",
         "Etiquetas: `rw` = RenderWare o SDK de Sony (se sustituye por librw/shims, no se decompila); `game` = código propio; `unknown` = sin evidencia suficiente. `rw` exige al menos dos grupos de señales independientes y ninguna señal fuerte de juego.", ""]
    tot = Counter(o["label"] for o in out)
    L += ["## Totales", "", "| etiqueta | funciones | instrucciones |", "|---|---|---|"]
    for lab in ("rw", "game", "unknown"):
        L.append(f"| {lab} | {tot[lab]} | {sum(o['instr'] for o in out if o['label'] == lab)} |")
    L += ["", "## Por bloque de direcciones", "", "| bloque | rw | game | unknown | total | nota |", "|---|---|---|---|---|---|"]
    def zone(a):
        if a < 0x130000: return "0x100000-0x12ffff", "libmpeg/libkernel/libc/libm (SDK, zona de `sd ra`)"
        for lo, hi in RW_BLOCKS:
            if lo - 0x2000 <= a < hi + 0x2000: return f"0x{lo-0x2000:06x}-0x{hi+0x2000-1:06x}", "bloque RW conocido +-0x2000 (el bloque en sí ya está excluido de cands2)"
        b = (a >> 16) << 16
        return f"0x{b:06x}-0x{b+0xffff:06x}", ""
    Z = defaultdict(Counter); notes = {}
    for o in out:
        z, nt = zone(int(o["addr"], 16)); Z[z][o["label"]] += 1; notes[z] = nt
    for z in sorted(Z):
        c = Z[z]; L.append(f"| {z} | {c['rw']} | {c['game']} | {c['unknown']} | {sum(c.values())} | {notes[z]} |")
    L += ["", "## Por tamaño (instrucciones)", "", "| tamaño | rw | game | unknown | total |", "|---|---|---|---|---|"]
    Sz = defaultdict(Counter)
    for o in out: Sz[size_bucket(o["instr"])][o["label"]] += 1
    for k in SIZES:
        c = Sz[k]; L.append(f"| {k} | {c['rw']} | {c['game']} | {c['unknown']} | {sum(c.values())} |")
    sigc = Counter()
    for o in out:
        if o["label"] == "rw":
            for s_ in o["signals"]:
                sigc[re.sub(r"[\d.]+x?[0-9a-f]*", "#", s_.split("(")[0].strip())] += 1
    L += ["", "## Señales más repetidas en las `rw`", ""] + [f"- {k}: {v}" for k, v in sigc.most_common(8)]
    L += ["", "## Validación", "",
          f"Se aplicó el mismo clasificador a las {len(mt)} funciones ya igualadas (`src/matched`) fuera de los bloques RW: {dict(vc)}. De las marcadas `rw`: {dict(vz)}.",
          "Las igualadas incluyen utilidades triviales, así que no son prueba de `game`; sirve solo como alarma de falsos `rw`.", ""]
    L += ["## Límites", "",
          "- El ELF no tiene símbolos ni cadenas de API `Rw*`: la señal RW sale de cadenas de pipeline, globales/destinos compartidos y vecindad; ninguna etiqueta es una identificación por nombre.",
          "- Los bloques `0x1bc000-0x1d0000`, `0x1d8000-0x1e0000`, `0x1f4000-0x20c000` y `0x214000-0x21c000` y sus funciones ya se excluyeron de `cands2.json`; aquí solo hay vecinos y funciones sueltas.",
          "- `game` con confianza <0.6 es una inclinación, no una afirmación. `unknown` es el valor por defecto.",
          "- Las funciones sin llamadores directos (jal/puntero) no tienen señal de grafo y suelen quedar en `unknown`.", ""]
    (ROOT / "build/rw_classification_summary.md").write_text("\n".join(L))
    print(dict(tot), "validación:", dict(vc), dict(vz))

if __name__ == "__main__":
    main()
