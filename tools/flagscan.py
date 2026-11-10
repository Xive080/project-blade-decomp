#!/usr/bin/env python3
"""Prueba combinaciones de flags de mwccps2 contra el manifiesto de automatch (verdad conocida)."""
import json, sys, struct
from pathlib import Path
sys.path.insert(0, str(Path(__file__).parent)); sys.path.insert(0, str(Path(__file__).parent.parent/'toolchain'/'pylib'))
import llm_match as L
man = json.load(open(sys.argv[1])); wibo, comp = sys.argv[2], sys.argv[3]
for fl in [["-O4,p"],["-O4,s"],["-O2"],["-O3,p"],["-O1"],["-O4,p","-sdatathreshold","0"],["-O4,p","-sdatathreshold","8"],["-O2","-sdatathreshold","0"],["-O4,p","-char","unsigned"],["-O4,p","-sym","off"]]:
    ok = 0
    for m in man:
        src = L.PRELUDE + Path(m["cfile"]).read_text()
        res, err = L.compile_c(src, wibo, comp, fl)
        if res and res[0].hex() == bytes.fromhex(m["bytes"].replace(" ","")).hex(): ok += 1
    print(" ".join(fl), ok, "/", len(man), flush=True)
