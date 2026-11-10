#!/usr/bin/env python3
"""Limpia los .match.c de build/a2 (quita m2c_macros si no hacen falta), reverifica byte a byte y copia a src/matched.
No pisa funciones ya presentes. Omite las listadas en build/prev_auto.txt (triviales de pasadas anteriores)."""
import re, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
import m2c_pass as A

prev = set()
for _f in ("build/prev_auto.txt", "build/prev_matched.txt"):
    if (ROOT / _f).exists(): prev |= set((ROOT / _f).read_text().split())
import json
ends = {int(s, 16): int(e, 16) for s, e, n in json.load(open(ROOT / "build/cands2.json"))}
new = []
for f in sorted((ROOT / "build/a2").glob("*.match.c")):
    name = f.name.split(".")[0]
    if name in prev or (ROOT / "src/matched" / f"{name}.c").exists():
        continue
    va = int(name[2:], 16); raw = A.raw_of(va, ends[va])
    src = f.read_text()
    body = src.split("#endif", 1)[1].strip() + "\n" if "M2C_MACROS_H" in src or "#endif" in src else src
    if "#endif" in src:
        pre = src.split("#ifndef M2C_MACROS_H")[0] if "#ifndef M2C_MACROS_H" in src else ""
        body = pre.strip() + "\n" + body if pre.strip() else body
    for k, t in (("M2C_UNK64", "s64"), ("M2C_UNK32", "s32"), ("M2C_UNK16", "s16"), ("M2C_UNK8", "s8"), ("M2C_UNK", "s32")):
        body = re.sub(r"\b" + k + r"\b", t, body)
    body = re.sub(r"\n{3,}", "\n\n", body)
    final = None
    if A.check(body, raw)[0] == 0:
        final = body
    elif A.check(src, raw)[0] == 0:
        # dejar solo las macros usadas
        used = set(re.findall(r"\b(M2C_\w+)", body))
        mac = [l for l in A.MACROS.splitlines() if l.startswith("#define") and l.split()[1].split("(")[0] in used]
        cand = "\n".join(mac) + "\n" + body
        final = cand if A.check(cand, raw)[0] == 0 else None
    if final is None:
        print("NO VERIFICA", name); continue
    (ROOT / "src/matched" / f"{name}.c").write_text(final)
    new.append(name)
print(len(new), "nuevos:", " ".join(new))
