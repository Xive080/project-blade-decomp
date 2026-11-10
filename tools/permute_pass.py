#!/usr/bin/env python3
"""Pasada de permuter sobre las fallidas cuyo mejor C ya tiene el mismo nº de instrucciones. Sin GPU, en paralelo en CPU.
Al hacer match: marca el json (via=permuter), guarda el C y lo añade a la biblioteca.
Uso: python3 tools/permute_pass.py --seconds 240 --workers 4"""
import argparse, json, subprocess, sys, re
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L
ap = argparse.ArgumentParser(); ap.add_argument("--seconds", type=int, default=240); ap.add_argument("--workers", type=int, default=4)
ap.add_argument("--max-len", type=int, default=60); a = ap.parse_args()
d, segs = L.load_segments(ROOT / "SCES_502.46")
out = ROOT / "build/llm2"; tried = ROOT / "build/permuted.json"
done = set(json.load(open(tried))) if tried.exists() else set()
jobs = []
for j in sorted(out.glob("f_*.json")):
    r = json.load(open(j)); name = r["name"]
    if r["match"] or name in done or not (out / f"{name}.c").exists(): continue
    va = int(name[2:], 16)
    for v, o, fs in segs:
        if v <= va < v + fs:
            s = o + va - v; e = s
            while L.u32(d, e) != 0x03E00008: e += 4
            w = [L.u32(d, i) for i in range(s, e + 8, 4)]
    if len(w) > a.max_len or any(x & 0xFFFF0000 == 0xFFBF0000 for x in w) or L.starts_mid_function(w) or L.branch_escapes(w, va): continue
    res, _ = L.compile_c((out / f"{name}.c").read_text(), str(ROOT / "toolchain/wibo"), str(ROOT / "toolchain/comp"),
                         L.flags_for(w, ["-O4,p", "-sdatathreshold", "0"]))
    if res and len(res[0]) == len(w) * 4: jobs.append((va, name, d[s:e + 8]))
print(len(jobs), "candidatas con mismo nº de instrucciones", flush=True)

def run(job):
    va, name, raw = job
    r = subprocess.run([sys.executable, str(ROOT / "tools/permute.py"), "--addr", hex(va), "--src", str(out / f"{name}.c"),
                        "--seconds", str(a.seconds), "-j", "1"], capture_output=True, text=True, cwd=ROOT)
    m = re.search(r"MATCH -> (\S+)", r.stdout)
    done.add(name); json.dump(sorted(done), open(tried, "w"))
    if m and Path(m.group(1)).exists():
        txt = Path(m.group(1)).read_text(); src = txt[len(L.PRELUDE):] if txt.startswith(L.PRELUDE) else txt
        (out / f"{name}.c").write_text(src)
        (out / f"{name}.json").write_text(json.dumps({"name": name, "match": True, "via": "permuter", "tries": []}, indent=1))
        open(ROOT / "build/examples.jsonl", "a").write(json.dumps({"name": name, "asm": L.disasm(raw, va), "c": src}) + "\n")
        print(name, "MATCH", flush=True); return 1
    print(name, "no", flush=True); return 0
with ThreadPoolExecutor(a.workers) as ex:
    print("== permuter:", sum(ex.map(run, jobs)), "/", len(jobs), "==")
