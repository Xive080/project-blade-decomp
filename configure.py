#!/usr/bin/env python3
"""Configure the AirBlade decomp build.

No absolute paths: everything is resolved relative to this file at runtime so the
project is portable across machines and OSes. The user supplies the original ELF
(from their own disc); we never ship it.
"""
import argparse
import hashlib
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent

# Verification target: the original AirBlade PAL executable.
EXPECTED = {
    "name": "SCES_502.46",
    "size": 2319516,
    "sha1": "1e8e5acc5e96d9123696e887c90189fd29fe6309",
    "sha256": "992e48de03c394305f3a9dc0d54320169128b76d90592fdd80c52e320693d6d6",
}


def sha(path: Path, algo: str) -> str:
    h = hashlib.new(algo)
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


def verify_elf(elf: Path) -> bool:
    if not elf.is_file():
        print(f"[!] No existe: {elf}")
        return False
    size = elf.stat().st_size
    if size != EXPECTED["size"]:
        print(f"[!] Tamaño {size} != esperado {EXPECTED['size']}")
        return False
    got1 = sha(elf, "sha1")
    if got1 != EXPECTED["sha1"]:
        print(f"[!] SHA1 {got1}\n    != esperado {EXPECTED['sha1']}")
        print("    Este no es el ELF PAL SCES-50246 sin modificar.")
        return False
    print("[ok] ELF verificado: AirBlade PAL SCES-50246 original.")
    return True


def main() -> int:
    ap = argparse.ArgumentParser(description="Configure AirBlade decomp build")
    ap.add_argument("--elf", required=True,
                    help="Ruta al SCES_502.46 extraído de tu disco")
    ap.add_argument("--check", action="store_true",
                    help="Solo verificar el ELF y salir")
    args = ap.parse_args()

    elf = Path(args.elf).expanduser().resolve()
    if not verify_elf(elf):
        return 1
    if args.check:
        return 0

    # Place/symlink the verified ELF where splat expects it (relative to ROOT).
    target = ROOT / "config" / "SCES_502.46"
    try:
        if target.exists() or target.is_symlink():
            target.unlink()
        target.symlink_to(elf)
        print(f"[ok] Enlazado {target.relative_to(ROOT)} -> {elf}")
    except OSError as e:
        print(f"[!] No se pudo enlazar ({e}); cópialo a {target} a mano.")
        return 1

    print("\nSiguiente paso:")
    print("  pip install splat64 spimdisasm   # desensamblado")
    print("  splat split config/splat.yaml    # trocea el ELF en asm/ y data/")
    return 0


if __name__ == "__main__":
    sys.exit(main())
