#!/usr/bin/env python3
"""Lanza decomp-permuter sobre una función cuyo C casi coincide (mismo nº de instrucciones, otros registros/orden).
Prepara build/perm/<name>/ (base.c, target.o, compile.sh, settings.toml) y busca score 0.
Uso: python3 tools/permute.py --elf SCES_502.46 --addr 0x108118 --src build/llm2/f_00108118.c [--seconds 120]"""
import argparse, os, re, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools")); sys.path.insert(0, str(ROOT / "toolchain" / "pylib"))
import llm_match as L  # noqa: E402

TC = ROOT / "toolchain"
AS = TC / "binutils/bin/mips64-elf-as"
OBJDUMP = TC / "binutils/bin/mips64-elf-objdump"


def orig_bytes(elf, va):
    d, segs = L.load_segments(elf)
    for v, o, fs in segs:
        if v <= va < v + fs:
            s = o + va - v
            e = s
            while L.u32(d, e) != 0x03E00008:
                e += 4
            return d[s:e + 8]
    raise SystemExit("dirección fuera del ELF")


def setup(name, src, raw, va):
    w = ROOT / "build" / "perm" / name; w.mkdir(parents=True, exist_ok=True)
    (w / "base.c").write_text(L.PRELUDE + src)
    asm = ".set noat\n.set noreorder\n.text\n.globl func\nfunc:\n" + "".join(
        f".word 0x{L.u32(raw, i):08x}\n" for i in range(0, len(raw), 4))
    (w / "target.s").write_text(asm)
    subprocess.run([str(AS), "-march=r5900", "-EL", "-o", str(w / "target.o"), str(w / "target.s")], check=True)
    (w / "compile.sh").write_text(
        f'#!/bin/bash\nexport MWCIncludes="{TC / "comp"}"\nexec "{TC / "wibo"}" "{TC / "comp" / "mwccps2.exe"}" -O4,p -sdatathreshold 0 -c "$1" -o "$3"\n')
    os.chmod(w / "compile.sh", 0o755)
    (w / "settings.toml").write_text(
        f'func_name = "func"\ncompiler_type = "mwcc"\nobjdump_command = "{OBJDUMP} -drz -m mips:5900"\n')
    return w


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--elf", default="SCES_502.46"); ap.add_argument("--addr", required=True)
    ap.add_argument("--src", required=True); ap.add_argument("--seconds", type=int, default=120)
    ap.add_argument("-j", type=int, default=2)
    a = ap.parse_args()
    va = int(a.addr, 16); name = f"f_{va:08x}"
    w = setup(name, Path(a.src).read_text(), orig_bytes(ROOT / a.elf, va), va)
    env = dict(os.environ, PYTHONPATH=str(TC / "pylib"))
    try:
        import signal
        pr = subprocess.Popen(["python3", "permuter.py", str(w), "--stop-on-zero", "--quiet", "-j", str(a.j)],
                              cwd=TC / "decomp-permuter", env=env, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True,
                              start_new_session=True)   # grupo propio: al vencer el tiempo se matan también los trabajadores
        try:
            out, _ = pr.communicate(timeout=a.seconds)
        except subprocess.TimeoutExpired:
            os.killpg(pr.pid, signal.SIGKILL)
            out, _ = pr.communicate()
            out = out or ""
    except Exception as e:  # noqa: BLE001
        out = str(e)
    hit = sorted(w.glob("output-0-*/source.c"))
    print(out[-400:].strip())
    if hit:
        print("MATCH ->", hit[0]); print(hit[0].read_text())
    else:
        print("sin score 0 en", a.seconds, "s")


if __name__ == "__main__":
    main()
