#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
"""Lista las funciones del ELF que no tienen src/matched/f_*.c y las clasifica por causa y tamano.

Solo lectura: usa el ELF del usuario (por defecto <repo>/SCES_502.46, o --elf, o AIRBLADE_ELF),
src/matched y build/rw_classification.json. Escribe port/unmatched/data/nomatch.json
(determinista) y, con --md, una tabla resumen en Markdown por stdout.

La segmentacion de funciones replica la de tools/rw_classify.py (destinos de jal + tras 'jr ra',
con fusion si un salto sale del tramo). Reescrita aqui, sin importar esos scripts.
Python 3 estandar. Uso: python3 -I port/unmatched/tools/list_nomatch.py [--md]
"""
import argparse, json, os, re, struct, sys
from collections import Counter
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
JR_RA = 0x03E00008
RW_BLOCKS = [(0x1bc000, 0x1d0000), (0x1d8000, 0x1e0000), (0x1f4000, 0x20c000), (0x214000, 0x21c000)]
SDK_BLOCK = (0x1098C0, 0x10A1A0)
HUGE = 300          # instrucciones: umbral de "enorme" (decision propia, ver docs/port/no_match.md)


def load_elf(path):
    d = Path(path).read_bytes()
    if d[:4] != b"\x7fELF":
        sys.exit("no es un ELF: %s" % path)
    ph = struct.unpack_from("<I", d, 0x1c)[0]
    n = struct.unpack_from("<H", d, 0x2c)[0]
    for i in range(n):
        t, off, va, _, fs = struct.unpack_from("<5I", d, ph + i * 32)
        if t == 1 and fs:
            return d, va, off, fs
    sys.exit("sin segmento LOAD")


def segment(d, va0, off, fs):
    u = lambda a: struct.unpack_from("<I", d, off + a - va0)[0]
    end = va0 + fs
    jal = set()
    for a in range(va0, end, 4):
        w = u(a)
        if w >> 26 == 3:
            t = ((a + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
            if va0 <= t < end:
                jal.add(t)
    after = set()
    for a in range(va0 + 8, end, 4):
        if u(a - 8) == JR_RA:
            b = a
            while b < end and u(b) == 0:
                b += 4
            if b < end:
                after.add(b)
    S = sorted(jal | after)
    res, i = [], 0
    while i < len(S):
        s = S[i]
        j = i + 1
        while True:
            e = S[j] if j < len(S) else end
            ee = e
            while ee > s and u(ee - 4) == 0:
                ee -= 4
            ws = [u(a) for a in range(s, ee, 4)]
            esc = False
            for k, w in enumerate(ws):
                op = w >> 26
                if op in (1, 4, 5, 6, 7, 20, 21, 22, 23) or (op == 0x11 and ((w >> 21) & 31) == 8):
                    o = w & 0xFFFF
                    o = o - 0x10000 if o & 0x8000 else o
                    if k + 1 + o >= len(ws):
                        esc = True
            if esc and j < len(S) and S[j] not in jal and j - i < 20:
                j += 1
                continue
            break
        res.append((s, ee, ws, s in jal, esc))
        i = j
    return res


def features(s, e, ws, isjal, esc):
    f = Counter()
    for k, w in enumerate(ws):
        op, funct = w >> 26, w & 0x3F
        rs, rt, rd = (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
        if op == 0:
            if funct in (0x0A, 0x0B): f["movzn"] += 1
            elif funct == 0x0C: f["syscall"] += 1
            elif funct == 0x0D: f["break"] += 1
            elif funct == 0x08 and rs != 31: f["jr_other"] += 1
        elif op == 0x1C:
            if funct in (0x08, 0x09, 0x28, 0x29):
                # MMI0..3. paddub rd,rs,zero (MMI1, funct 0x28, sa 0x18) es el "move" de 128 bits de mwccps2.
                sa = (w >> 6) & 31
                if funct == 0x28 and sa == 0x18 and (rt == 0 or rs == 0): f["mmi_move"] += 1
                else: f["mmi_real"] += 1
            elif funct in (0x18, 0x1A, 0x19, 0x1B, 0x10, 0x12, 0x11, 0x13): f["mult1_mfhi1"] += 1
            elif funct == 0x00 or funct == 0x01 or funct == 0x04 or funct == 0x05: f["madd"] += 1
            else: f["mmi_real"] += 1
        elif op == 0x12: f["cop2"] += 1
        elif op in (0x36, 0x3E): f["lqc2_sqc2"] += 1
        elif op == 2:
            t = ((s + 4 * k + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2)
            if not (s <= t < e): f["tail_j"] += 1
        elif op == 0x3F and rt == 31: f["sd_ra"] += 1
        elif op == 4 and rs == 0 and rt == 0 and (w & 0xFFFF) == 1: f["b_next"] += 1
        elif op == 0x11 and rs in (0x10,) : pass
    f["n"] = len(ws)
    f["jr_ra"] = sum(1 for w in ws if w == JR_RA)
    return f


def cause(f, esc, isjal, s, label):
    """Causa primaria (una por funcion) en orden de prioridad; el resto queda en 'flags'."""
    if any(lo <= s < hi for lo, hi in RW_BLOCKS) or SDK_BLOCK[0] <= s < SDK_BLOCK[1] or label == "rw":
        return "rw_sdk"
    if f["sd_ra"] and label != "game":
        return "rw_sdk"       # 'sd ra' = zona SDK (heuristica de rw_classify); si el clasificador dice game se sigue
    if f["syscall"]: return "syscall"
    if f["cop2"] or f["lqc2_sqc2"]: return "vu0_cop2"
    if f["movzn"]: return "movz_movn"
    if f["mmi_real"]: return "mmi"
    if f["tail_j"] or f["jr_other"] and not f["jr_ra"]: return "tail_call_j"
    if esc: return "limite_dudoso"
    if f["b_next"]: return "sin_optimizar"
    if f["jr_ra"] == 0: return "sin_jr_ra"
    return "otro"


def mid_function(words, limit=24):
    """Reescritura de la heuristica de tools/llm_match.py (starts_mid_function): lee un temporal antes de escribirlo."""
    temps = {1, 2, 3, *range(8, 16), 24, 25}
    written = set()
    for w in words[:limit]:
        op, rs, rt, rd = w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
        if w == 0:
            continue
        if op == 0:
            fn = w & 63
            if fn in (8, 9): reads, writes = [rs], []
            elif fn in (0, 2, 3): reads, writes = [rt], [rd]
            elif fn in (12, 13): return False
            else: reads, writes = [rs, rt], [rd]
        elif op in (4, 5, 20, 21): reads, writes = [rs, rt], []
        elif op in (1, 6, 7, 22, 23): reads, writes = [rs], []
        elif op == 2: reads, writes = [], []
        elif op == 3: return False
        elif op == 15: reads, writes = [], [rt]
        elif 0x28 <= op <= 0x2f or op in (0x3f, 0x3d, 0x39, 0x1f): reads, writes = [rs, rt], []
        elif op in (0x20, 0x21, 0x23, 0x24, 0x25, 0x27, 0x37, 0x1e, 0x1a, 0x1b, 0x22, 0x26, 0x18, 0x19): reads, writes = [rs], [rt]
        elif 8 <= op <= 14: reads, writes = [rs], [rt]
        else: continue
        if any(r in temps and r not in written for r in reads):
            return True
        written.update(writes)
    return False


def excluded_from_cands2(s, ws, esc):
    """Por que tools/m2c_enum / build/enum2.py no la puso en build/cands2.json (el orden es el del original)."""
    if len(ws) < 2 or ws[-2] != JR_RA: return "noend"
    if esc: return "esc"
    if any(lo <= s < hi for lo, hi in RW_BLOCKS): return "rw_block"
    if any(x & 0xFFFF0000 == 0xFFBF0000 for x in ws): return "sdra"
    if any(x == 0xC or (x >> 26) in (0x12, 0x36, 0x3E, 0x13) for x in ws): return "asm_syscall_vu0"
    if mid_function(ws): return "mid"
    return "ok"


def size_class(n):
    for lim, nm in ((8, "<=8"), (32, "9-32"), (100, "33-100"), (299, "101-299")):
        if n <= lim: return nm
    return ">=300"


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", default=os.environ.get("AIRBLADE_ELF", str(ROOT / "SCES_502.46")))
    ap.add_argument("--ghidra-map", default=os.environ.get("AIRBLADE_GHIDRA_MAP"),
                    help="CSV Name,Start,End,Size de Ghidra (solo lectura); si se da, es la lista de funciones")
    ap.add_argument("--md", action="store_true")
    ap.add_argument("--out", default=str(ROOT / "port/unmatched/data/nomatch.json"))
    a = ap.parse_args()
    d, va0, off, fs = load_elf(a.elf)
    matched = set()
    for p in (ROOT / "src/matched").iterdir():
        m = re.match(r"f_([0-9a-f]+)\.c$", p.name)
        if m: matched.add(int(m.group(1), 16))
    cls = {}
    cp = ROOT / "build/rw_classification.json"
    if cp.exists():
        for x in json.loads(cp.read_text()): cls[int(x["addr"], 16)] = x["label"]
    segs = segment(d, va0, off, fs)
    own = {x[0] for x in segs}
    gh = None
    if a.ghidra_map:
        import csv
        gh = []
        u = lambda ad: struct.unpack_from("<I", d, off + ad - va0)[0]
        for r in csv.DictReader(open(a.ghidra_map)):
            gs, ge = int(r["Start"], 16), int(r["End"], 16)
            if not (va0 <= gs < va0 + fs): continue
            ge = min(ge, va0 + fs)
            while ge > gs and u(ge - 4) == 0: ge -= 4
            ws = [u(x) for x in range(gs, ge, 4)]
            esc = False
            for k, w in enumerate(ws):
                op = w >> 26
                if op in (1, 4, 5, 6, 7, 20, 21, 22, 23) or (op == 0x11 and ((w >> 21) & 31) == 8):
                    o = w & 0xFFFF
                    o = o - 0x10000 if o & 0x8000 else o
                    if k + 1 + o >= len(ws) or k + 1 + o < 0: esc = True
            gh.append((gs, ge, ws, False, esc))
        segs_prop = segs
        segs = sorted(gh)
    # referencias: llamadas jal por direccion y punteros de 32 bits alineados en todo el fichero (tablas, vtables)
    callers = Counter()
    for s_, e_, ws_, _, _ in segs:
        for w in ws_:
            if w >> 26 == 3:
                callers[((w & 0x3FFFFFF) << 2) | (s_ & 0xF0000000)] += 1
    starts = {x[0] for x in segs}
    gh_only = sorted(starts - own) if gh else []
    own_only = sorted(own - starts) if gh else []
    ptr_refs = Counter()
    for o in range(0, len(d) - 3, 4):
        v = struct.unpack_from("<I", d, o)[0]
        if v in starts and not (va0 <= va0 + o - off < va0 + fs and False):
            ptr_refs[v] += 1
    out = []
    tot = Counter()
    for s, e, ws, isjal, esc in segs:
        tot["segmentos"] += 1
        if s in matched:
            tot["con_match"] += 1
            fm = features(s, e, ws, isjal, esc)
            for k in ("movzn", "mmi_real", "cop2", "lqc2_sqc2", "syscall", "tail_j", "sd_ra", "b_next"):
                if fm[k]: tot["match_con_" + k] += 1
            if fm["n"] >= HUGE: tot["match_enorme"] += 1
            if ws and ws[-1] == JR_RA: tot["match_acaba_jr_nop"] += 1
            continue
        f = features(s, e, ws, isjal, esc)
        lab = cls.get(s, "sin_clasificar")
        c = cause(f, esc, isjal, s, lab)
        flags = sorted(k for k in ("movzn", "mmi_real", "mmi_move", "cop2", "lqc2_sqc2", "syscall", "tail_j", "sd_ra",
                                   "b_next", "mult1_mfhi1", "madd", "break") if f[k])
        out.append(dict(addr="0x%08x" % s, n=len(ws), label=lab, cause=c, size=size_class(len(ws)),
                        flags=flags, esc=esc, jr_ra=f["jr_ra"], cands2=excluded_from_cands2(s, ws, esc),
                        jal_callers=callers[s], ptr_refs=ptr_refs[s],
                        own_start=(s in own), ends_jr_nop=bool(ws and ws[-1] == JR_RA)))
    in_matched_not_found = sorted(m for m in matched if m not in {x[0] for x in segs})
    Path(a.out).parent.mkdir(parents=True, exist_ok=True)
    Path(a.out).write_text(json.dumps(dict(
        fuente="ghidra" if gh else "segmentacion_propia",
        solo_ghidra=len(gh_only), solo_segmentacion_propia=len(own_only),
        total_segmentos=len(segs), con_match=tot["con_match"],
        con_match_detalle={k[6:]: v for k, v in sorted(tot.items()) if k.startswith("match_")}, matched_fuera_de_segmentacion=["0x%x" % m for m in in_matched_not_found],
        funciones=out), indent=1) + "\n")
    print("segmentos %d, con match %d, sin match %d; matched fuera de la segmentacion: %d" %
          (len(segs), tot["con_match"], len(out), len(in_matched_not_found)), file=sys.stderr)
    if a.md:
        for title, key in (("causa x etiqueta", None),):
            lab_c = Counter((x["cause"], x["label"]) for x in out)
            print(json.dumps({"%s|%s" % k: v for k, v in sorted(lab_c.items())}, indent=0))


if __name__ == "__main__":
    main()
