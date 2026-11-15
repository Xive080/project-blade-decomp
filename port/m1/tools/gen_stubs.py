#!/usr/bin/env python3
# SPDX-License-Identifier: AGPL-3.0-or-later
"""gen_stubs.py - generador de stubs para el hito M1 (PORT_PLAN seccion 4).

Compila cada fichero de src/matched (por defecto) con PORT definido, mira que
simbolos quedan sin resolver y genera port/m1/gen/stubs.c con un stub por
simbolo faltante:

  * funciones: `long long NOMBRE() { m1_stub_hit(&tabla[i]); return 0; }`
    (registra el nombre y la primera llamada en el log de ejecucion);
  * datos (variables globales): un bloque de ceros alineado, que no cuenta como
    llamada pero se lista como "dato" en las estadisticas.

El log y la funcion de estadisticas viven en port/m1/stubs/m1_stub_log.[ch].

Diseno propio. No se copia nada de Tenkaichi3Decomp ni de third_party/PS2Recomp
(GPLv3); la idea de "enlazar y leer los simbolos sin resolver" es general.

Uso (desde la raiz del repo; Python 3 estandar, sin dependencias):

  python3 -I port/m1/tools/gen_stubs.py                     # todo src/matched
  python3 -I port/m1/tools/gen_stubs.py --subset 20         # uno de cada 20 ficheros
  python3 -I port/m1/tools/gen_stubs.py --report-data       # que simbolos son datos
  python3 -I port/m1/tools/gen_stubs.py --no-link           # solo generar

Como los ficheros de src/ son fragmentos (la funcion se llama `func` o `f`, hay
alias locales `f13b550`, `g147e20`, y algunos usan `asm` de MWCC), el
generador normaliza nombres con `#pragma redefine_extname` (solo cambia el
simbolo externo, no los identificadores) en un envoltorio por fichero dentro
del directorio de build:

  * la funcion definida pasa a `func_XXXXXXXX` (XXXXXXXX = direccion del nombre
    de fichero);
  * los alias de direccion (`f13b550`, `f_0013b550`, `g147e20`...) que se llaman
    sin estar definidos pasan a `func_XXXXXXXX`;
  * los demas simbolos globales definidos con nombre local (`g`, `sub`, `obj_`)
    se hacen unicos por fichero (`nombre__LXXXXXXXX`) para que no choquen.
"""
import argparse
import concurrent.futures as cf
import json
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
PROVIDED_DEFAULT = ("sdkmap", "rwport", "ported")   # codigo a mano/portado bajo port/m1/
M1 = ROOT / "port" / "m1"
PRELUDE = M1 / "include" / "m1_prelude.h"
STUBLOG_DIR = M1 / "stubs"
DEFAULT_OUT = M1 / "gen" / "stubs.c"
DEFAULT_BUILD = ROOT / "build" / "m1_stubs"

# alias de funcion con direccion: func_0013b550, f_0013b550, f13b550, g147e20, sub_..., fn_...
FUNC_ALIAS_RE = re.compile(r"^(?:func_|f_|sub_|fn_|f|g)([0-9a-fA-F]{6,8})$")
DATA_ADDR_RE = re.compile(r"^D_([0-9a-fA-F]{8})$")
FILE_ADDR_RE = re.compile(r"^f_([0-9a-fA-F]{8})\.c$")
MAIN_NAMES = ("func", "f")  # nombre con el que los fragmentos definen su funcion

# tamanos de tipos basicos (modelo PS2/LP64 de 64 bits en el host; ver m1_prelude.h)
SCALAR = {"char": 1, "signed char": 1, "unsigned char": 1, "s8": 1, "u8": 1,
          "short": 2, "unsigned short": 2, "s16": 2, "u16": 2,
          "int": 4, "unsigned int": 4, "unsigned": 4, "s32": 4, "u32": 4,
          "float": 4, "f32": 4,
          "long": 8, "unsigned long": 8, "long long": 8, "unsigned long long": 8,
          "s64": 8, "u64": 8, "double": 8}


# Direccion de un simbolo de datos a partir del nombre (convenciones de tools/m2c_pass.py y de los
# fragmentos): D_XXXXXXXX absoluta; G_xxxx = $gp + desplazamiento de 16 bits con signo; g_0xXXXXXX,
# g_unkXXXXXX, unk_XXXXXX, off_XXXXXX absolutas. $gp = 0x002f96f0 (crt0, confirmado).
GP_VALUE = 0x002F96F0
IMG_BASE, IMG_END = 0x00100000, 0x00340000      # igual que M1_IMG_BASE/M1_IMG_END de m1_gmem.h
_DATA_ADDR_PATTERNS = [
    (re.compile(r"^D_([0-9a-fA-F]{8})$"), lambda m: int(m.group(1), 16)),
    (re.compile(r"^G_([0-9a-fA-F]{4})$"), lambda m: (GP_VALUE + ((int(m.group(1), 16) ^ 0x8000) - 0x8000)) & 0xFFFFFFFF),
    (re.compile(r"^g_0x([0-9a-fA-F]{6})$"), lambda m: int(m.group(1), 16)),
    (re.compile(r"^g_unk_?([0-9a-fA-F]{6,8})$"), lambda m: int(m.group(1), 16)),
    (re.compile(r"^unk_([0-9a-fA-F]{6,8})$"), lambda m: int(m.group(1), 16)),
    (re.compile(r"^off_([0-9a-fA-F]{6,8})$"), lambda m: int(m.group(1), 16)),
]


def data_addr(name):
    """Direccion guest de un dato con direccion en el nombre, o None."""
    for rx, fn in _DATA_ADDR_PATTERNS:
        m = rx.match(name)
        if m:
            return fn(m)
    return None


# Nombres de la libc/libm que el C decompilado puede pedir y que NO son locales del fragmento.
LIBC_NAMES = set("""memcpy memset memmove memcmp strlen strcpy strncpy strcmp strncmp strcat strchr strrchr strstr
sprintf snprintf printf puts putchar malloc calloc realloc free abs labs atoi sqrt sqrtf sin cos tan sinf cosf tanf
atan atan2 atan2f acos acosf asin asinf exp expf log logf pow powf fabs fabsf floor floorf ceil ceilf fmod fmodf
rand srand qsort bsearch toupper tolower isdigit isalpha isspace""".split())


def is_local_name(name):
    """Nombre global NO canonico que un fragmento usa sin definir: es local del fichero (`A`, `f1`, `G`,
    `buf`...), no una direccion ni un simbolo del sistema/SDK. Se hace unico por fichero (bug de colision
    de M1-main: el mismo nombre local era funcion en un fichero y dato en otro)."""
    if name in LIBC_NAMES or name == "main" or name.startswith(("sce", "__", "func_", "f_", "D_", "G_")):
        return False
    if func_alias_addr(name) is not None or data_addr(name) is not None:
        return False
    return re.match(r"^[A-Za-z_][A-Za-z0-9_]{0,15}$", name) is not None


def load_bindings(path):
    """Fichero de enlaces a mano para nombres locales de un fragmento: `XXXXXXXX nombre func|data 0xDIR`
    (XXXXXXXX = direccion del fichero f_XXXXXXXX.c). Lineas vacias y # ignoradas."""
    out = {}
    p = Path(path)
    if not p.is_file():
        return out
    for ln in p.read_text().splitlines():
        ln = ln.split("#")[0].strip()
        if not ln:
            continue
        f = ln.split()
        if len(f) != 4 or f[2] not in ("func", "data"):
            raise SystemExit("gen_stubs: linea de bindings no valida: %r" % ln)
        out[(int(f[0], 16), f[1])] = (f[2], int(f[3], 0))
    return out


BINDINGS = {}


def canon_func(addr):
    return "func_%08x" % addr


def func_alias_addr(name):
    m = FUNC_ALIAS_RE.match(name)
    if not m:
        return None
    h = m.group(1)
    if not any(c.isdigit() for c in h):
        return None
    return int(h, 16)


def guest_addr_of(name):
    m = re.match(r"^func_([0-9a-f]{8})$", name)
    if m:
        return int(m.group(1), 16)
    a = data_addr(name)
    return a if a is not None else 0


def is_clang(cc):
    try:
        out = subprocess.run([cc, "--version"], capture_output=True, text=True).stdout
    except OSError:
        return False
    return "clang" in out.lower()


def find_tool(*names):
    for n in names:
        p = shutil.which(n)
        if p:
            return p
    return None


def run(cmd, **kw):
    return subprocess.run(cmd, capture_output=True, text=True, **kw)


# ---------------------------------------------------------------------------
# AST (solo clang): kind y tipo por nombre
# ---------------------------------------------------------------------------
AST_LINE = re.compile(r"^[|`]-(FunctionDecl|VarDecl) 0x[0-9a-f]+ (?:prev 0x[0-9a-f]+ )?<[^>]*> "
                      r"(?:\S*:\S* )?((?:(?:implicit|used|referenced|invalid|parent|hidden) )*)"
                      r"(\w+) '([^']*)'(?::'([^']*)')?")


def parse_ast(text):
    """{nombre: (kind, tipo)} de las declaraciones de primer nivel."""
    out = {}
    for ln in text.splitlines():
        m = AST_LINE.match(ln)
        if not m:
            continue
        kind = "func" if m.group(1) == "FunctionDecl" else "data"
        name = m.group(3)
        ty = m.group(5) or m.group(4)
        prev = out.get(name)
        if prev is None or (kind == "data" and prev[0] == "data" and _dsize(ty)[0] > _dsize(prev[1])[0]):
            out[name] = (kind, ty)
    return out


def _dsize(ty):
    """(bytes, exacto). Tipos desconocidos o arrays sin tamano: exacto False."""
    t = ty.replace("extern", "").strip()
    n = 1
    exact = True
    while True:
        m = re.search(r"\[(\d*)\]\s*$", t)
        if not m:
            break
        if m.group(1) == "":
            exact = False
        else:
            n *= int(m.group(1))
        t = t[:m.start()].strip()
    if t.endswith("*"):
        base = 8
    else:
        base = SCALAR.get(re.sub(r"\bconst\b|\bvolatile\b", "", t).strip())
        if base is None:
            return (0, False)
    return (base * n, exact)


# ---------------------------------------------------------------------------
# compilacion por fichero
# ---------------------------------------------------------------------------
class Unit:
    def __init__(self, src):
        self.src = Path(src)
        self.name = self.src.stem
        m = FILE_ADDR_RE.match(self.src.name)
        self.addr = int(m.group(1), 16) if m else None
        self.obj = None
        self.error = None        # texto del primer error de compilacion
        self.defs = {}           # simbolo (ya renombrado) -> 'func'|'data'
        self.undef = set()
        self.decl = {}           # nombre del simbolo final -> (kind, tipo)
        self.renames = {}        # nombre en el fuente -> simbolo externo


def nm_symbols(nm, obj):
    """(definidos, indefinidos) con el prefijo '_' de Mach-O quitado."""
    r = run([nm, "-P", str(obj)])
    defs, undef = {}, set()
    for ln in r.stdout.splitlines():
        p = ln.split()
        if len(p) < 2:
            continue
        name, typ = p[0], p[1]
        if sys.platform == "darwin" and name.startswith("_"):
            name = name[1:]
        if typ == "U":
            undef.add(name)
        elif typ.isupper() or typ in "wv":
            if typ in ("T", "t"):
                defs[name] = "func"
            else:
                defs[name] = "data"
    return defs, undef


def compile_unit(u, cc, clang, nm, bdir, flags, pragmas=None):
    """Compila u.src (con envoltorio si hay renombres). Devuelve (ok, ast_text)."""
    wd = bdir / "wrap"
    od = bdir / "obj"
    wd.mkdir(parents=True, exist_ok=True)
    od.mkdir(parents=True, exist_ok=True)
    wrap = wd / (u.name + "_wrap.c")
    lines = ["/* generado por gen_stubs.py */"]
    for old, new in sorted((pragmas or {}).items()):
        # en Mach-O redefine_extname fija el simbolo literal: hay que poner el '_' de C
        lines.append("#pragma redefine_extname %s %s%s" % (old, "_" if sys.platform == "darwin" else "", new))
    lines.append('#include "%s"' % u.src.name)
    wrap.write_text("\n".join(lines) + "\n")
    obj = od / (u.name + ".o")
    cmd = [cc, "-c", str(wrap), "-o", str(obj), "-I", str(u.src.parent)] + flags
    r = run(cmd)
    if r.returncode != 0:
        err = next((l for l in r.stderr.splitlines() if "error" in l), r.stderr.strip()[:200])
        return False, err, ""
    ast = ""
    if clang:
        # la accion de volcado de AST de clang no genera objeto: segunda pasada
        r = run([cc, "-fsyntax-only", str(wrap), "-I", str(u.src.parent), "-Xclang", "-ast-dump"] + flags)
        ast = r.stdout
    return True, "", ast


def process_unit(u, cc, clang, nm, bdir, flags):
    # pasada 0: sin renombres, para ver que define y que pide
    ok, err, ast = compile_unit(u, cc, clang, nm, bdir, flags)
    if not ok:
        u.error = err
        return u
    defs0, undef0 = nm_symbols(nm, bdir / "obj" / (u.name + ".o"))
    decl0 = parse_ast(ast) if clang else {}
    pragmas = {}
    taken = set()
    for name, kind in sorted(defs0.items()):
        new = None
        if name in MAIN_NAMES and kind == "func" and u.addr is not None:
            new = canon_func(u.addr)
        elif kind == "func" and func_alias_addr(name) is not None:
            new = canon_func(func_alias_addr(name))
        elif name.startswith(("func_", "f_")) and u.addr is not None and kind == "func":
            new = canon_func(u.addr)
        elif not (name.startswith("D_") and DATA_ADDR_RE.match(name)) and name not in ("main",):
            # simbolo global con nombre local: lo hacemos unico por fichero
            new = "%s__L%08x" % (name, u.addr if u.addr is not None else abs(hash(u.name)) & 0xffffffff)
        if new and new != name:
            pragmas[name] = new
            taken.add(new)
    for name in sorted(undef0):
        if name in defs0:
            continue
        a = func_alias_addr(name)
        kind = decl0.get(name, ("func" if data_addr(name) is None else "data", ""))[0]
        if a is not None and kind == "func" and name != canon_func(a):
            pragmas[name] = canon_func(a)
        elif is_local_name(name):
            b = BINDINGS.get((u.addr, name))
            if b and b[0] == "func":
                pragmas[name] = canon_func(b[1])
            elif b:
                pragmas[name] = "D_%08X" % b[1]
            else:       # local del fichero: unico por fichero, sin direccion
                pragmas[name] = "%s__L%08x" % (name, u.addr if u.addr is not None else abs(hash(u.name)) & 0xffffffff)
    if pragmas:
        ok, err, ast = compile_unit(u, cc, clang, nm, bdir, flags, pragmas)
        if not ok:
            u.error = "tras renombrar: " + err
            return u
    u.obj = bdir / "obj" / (u.name + ".o")
    u.defs, u.undef = nm_symbols(nm, u.obj)
    u.renames = pragmas
    decl = parse_ast(ast) if clang else {}
    # el AST usa el nombre del fuente; lo pasamos al nombre del simbolo final
    u.decl = {pragmas.get(n, n): v for n, v in decl.items()}
    return u


# ---------------------------------------------------------------------------
# listas de funciones conocidas
# ---------------------------------------------------------------------------
def load_func_list(path):
    """Direcciones (int) desde un .json (lista de listas/numeros/dicts) o texto
    (formato splat `nombre = 0xADDR;` o una direccion por linea)."""
    p = Path(path)
    out = set()
    if not p.is_file():
        return out
    txt = p.read_text(errors="replace")
    if p.suffix == ".json":
        try:
            data = json.loads(txt)
        except ValueError:
            return out
        def walk(x):
            if isinstance(x, str) and re.fullmatch(r"0x[0-9a-fA-F]+", x):
                out.add(int(x, 16))
            elif isinstance(x, int) and x > 0xFFFF:
                out.add(x)
            elif isinstance(x, dict):
                for v in x.values():
                    walk(v)
            elif isinstance(x, list):
                # [inicio, fin, n]: solo el primer elemento es direccion
                if x and isinstance(x[0], (str, int)) and len(x) <= 4:
                    walk(x[0])
                else:
                    for v in x:
                        walk(v)
        walk(data)
        return out
    for ln in txt.splitlines():
        ln = ln.split("//")[0].split("#")[0]
        m = re.search(r"=\s*0x([0-9a-fA-F]+)", ln) or re.match(r"\s*0x([0-9a-fA-F]+)\s*$", ln)
        if m:
            out.add(int(m.group(1), 16))
    return out


def addrs_from_dir(d):
    out = {}
    for p in sorted(Path(d).glob("f_*.c")):
        m = FILE_ADDR_RE.match(p.name)
        if m:
            out[int(m.group(1), 16)] = str(p.relative_to(ROOT)) if p.is_relative_to(ROOT) else p.name
    return out


# ---------------------------------------------------------------------------
# generacion de stubs.c
# ---------------------------------------------------------------------------
BANNER = """/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * stubs.c - GENERADO por port/m1/tools/gen_stubs.py. No editar a mano.
 *
 * Un stub por simbolo que el C decompilado (src/matched, PORT definido) pide y
 * nadie define: %d funciones y %d datos. Cada funcion registra su nombre y la
 * primera llamada en el log (m1_stub_log.h) y devuelve 0. Los datos con direccion
 * son alias de la imagen guest (data_image.c); el resto, bloques de ceros. Origen de las direcciones: el nombre del simbolo.
 * Tipo de retorno: siempre entero de 64 bits (hipotesis: no sirve para
 * funciones que devuelven float o estructuras por valor).
 */
#include "m1_stub_log.h"

"""


def gen_stubs_c(funcs, datas):
    """funcs: [(name, addr)]; datas: [(name, addr, size)] ya ordenados."""
    ent = []
    for n, a in funcs:
        ent.append((n, a, 0, 0))
    for n, a, s in datas:
        ent.append((n, a, 1, s))
    o = [BANNER % (len(funcs), len(datas))]
    o.append("m1_stub_entry m1_stub_table[%d] = {" % max(len(ent), 1))
    if not ent:
        o.append('    { "", 0u, 0u, 0u, 0u, 0u },')
    for n, a, k, s in ent:
        o.append('    { "%s", 0x%08xu, %du, %du, 0u, 0u },' % (n, a, k, s))
    o.append("};")
    o.append("const unsigned m1_stub_table_count = %du;" % len(ent))
    o.append("")
    o.append("void m1_stubs_init(void) { m1_stub_set_table(m1_stub_table, m1_stub_table_count); }")
    o.append("")
    for i, (n, a) in enumerate(funcs):
        o.append("long long %s() { m1_stub_hit(&m1_stub_table[%d]); return 0; }" % (n, i))
    o.append("")
    for j, (n, a, s) in enumerate(datas):
        if in_image(n):
            continue       # alias de m1_img en data_image.c
        o.append("_Alignas(16) unsigned char %s[%d];" % (n, max(s, 1)))
    return "\n".join(o) + "\n"


def in_image(name):
    a = data_addr(name)
    return a is not None and IMG_BASE <= a < IMG_END


DATA_IMAGE_BANNER = """/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * data_image.c - GENERADO por port/m1/tools/gen_stubs.py. No editar a mano.
 *
 * m1_img: imagen guest [M1_IMG_BASE, M1_IMG_END) (se rellena con el ELF del usuario en tiempo de
 * ejecucion, m1_image_load_elf). Cada simbolo de datos del C decompilado con direccion en el nombre
 * (D_XXXXXXXX, G_xxxx = gp+off, g_0x..., unk_..., y los enlazados a mano en port/m1/data_bindings.txt)
 * es una ETIQUETA dentro de esa imagen: el C decompilado y el codigo portado ven los mismos bytes.
 *   - Mach-O (macOS): la imagen se define en ensamblador con etiquetas `.alt_entry` (Mach-O no admite
 *     alias con desplazamiento). Probado en macOS arm64.
 *   - ELF (Linux): `.set simbolo, m1_img + desplazamiento`. SIN PROBAR (hipotesis).
 *   - MSVC/Windows: no soportado todavia (hipotesis: clang-cl con el mismo ensamblador en linea de ELF/COFF).
 */
#include "m1_gmem.h"

"""


def gen_data_image(datas):
    items = sorted({(data_addr(n) - IMG_BASE, n) for n, a, sz in datas if in_image(n)})
    o = [DATA_IMAGE_BANNER]
    o.append("#if defined(__APPLE__)")
    o.append('__asm__(".data\\n.p2align 12\\n.globl _m1_img\\n_m1_img:\\n"')
    pos = 0
    for off, n in items:
        if off > pos:
            o.append('    ".zero %d\\n"' % (off - pos))
            pos = off
        o.append('    ".globl _%s\\n.alt_entry _%s\\n_%s:\\n"' % (n, n, n))
    o.append('    ".zero %d\\n");' % (IMG_END - IMG_BASE - pos))
    o.append("#else")
    o.append("unsigned char m1_img[M1_IMG_SIZE] __attribute__((aligned(4096)));")
    for off, n in items:
        o.append('__asm__(".globl %s\\n\\t.set %s, m1_img + %d");' % (n, n, off))
    o.append("#endif")
    return "\n".join(o) + "\n"


# ---------------------------------------------------------------------------
# enlazado
# ---------------------------------------------------------------------------
UNDEF_RES = [
    re.compile(r'^\s+"([^"]+)", referenced from'),                 # ld64
    re.compile(r"undefined reference to [`'\"]([^'\"`]+)['\"`]"),   # GNU ld
    re.compile(r"undefined symbol: (\S+)"),                         # lld
    re.compile(r"unresolved external symbol (\S+)"),                # link.exe
]


def parse_unresolved(text):
    out = set()
    for ln in text.splitlines():
        for rx in UNDEF_RES:
            m = rx.search(ln)
            if m:
                n = m.group(1)
                if sys.platform == "darwin" and n.startswith("_"):
                    n = n[1:]
                n = re.sub(r"\(.*$", "", n)
                out.add(n)
                break
    return out


def link(cc, objs, out_exe, extra=()):
    cmd = [cc, "-o", str(out_exe)] + [str(o) for o in objs] + list(extra)
    r = run(cmd)
    return r.returncode, r.stdout + r.stderr


_PROV_DEF = re.compile(r"^(?![ \t#/*]|extern\b)[^\n]*?\b(func_[0-9a-f]{8})\s*\([^\n]*[{}),]\s*$", re.M)


def provided_symbols(d):
    """Simbolos func_XXXXXXXX definidos (no solo declarados) en los .c de d."""
    out = set()
    if d.is_dir():
        for f in sorted(d.glob("*.c")):
            txt = re.sub(r"/\*.*?\*/", "", f.read_text(), flags=re.S)
            for m in _PROV_DEF.finditer(txt):
                out.add(m.group(1))
    return out


def compile_provided(cc, dirs, bdir):
    """Compila lo definido a mano (sdkmap) + shim + arena para el enlace de comprobacion."""
    srcs = []
    for pd in dirs:
        srcs += sorted(Path(pd).glob("*.c"))
    srcs += sorted((M1 / "shim").glob("*.c")) + [M1 / "src" / "m1_arena.c", M1 / "src" / "m1_gmem.c"]
    pdir = bdir / "prov"
    pdir.mkdir(exist_ok=True)
    objs = []
    inc = ["-I", str(M1 / "include"), "-I", str(M1 / "shim"), "-I", str(M1 / "stubs"),
           "-I", str(M1.parent / "m0" / "include" / "plat")]
    for i, f in enumerate(srcs):
        o = pdir / ("%d_%s.o" % (i, f.stem))
        r = run([cc, "-c", str(f), "-o", str(o), "-std=gnu11", "-w"] + inc)
        if r.returncode != 0:
            print("gen_stubs: no compila %s\n%s" % (f, r.stderr[:2000]), file=sys.stderr)
            return None
        objs.append(o)
    return objs


def provided_funcs(dirs):
    out = set()
    for d in dirs:
        for sym in provided_symbols(Path(d)):
            out.add((int(sym[5:], 16), sym))
    return out


def emit_cmake(live, bdir, extra_funcs=()):
    """Escribe los envoltorios (portables: el '_' de Mach-O va tras #if __APPLE__),
    la lista de unidades para CMake y una tabla direccion -> funcion."""
    gdir = M1 / "gen"
    wdir = gdir / "wrap"
    shutil.rmtree(wdir, ignore_errors=True)
    wdir.mkdir(parents=True)
    names, funcs = [], []
    for u in sorted(live, key=lambda x: x.name):
        lines = ["/* SPDX-License-Identifier: AGPL-3.0-or-later */",
                 "/* generado por gen_stubs.py --emit-cmake; no editar */"]
        if u.renames:
            lines.append("#if defined(__APPLE__)  /* Mach-O: el simbolo lleva '_' a mano */")
            for old, new in sorted(u.renames.items()):
                lines.append("#pragma redefine_extname %s _%s" % (old, new))
            lines.append("#else")
            for old, new in sorted(u.renames.items()):
                lines.append("#pragma redefine_extname %s %s" % (old, new))
            lines.append("#endif")
        lines.append('#include "%s"' % u.src.name)
        (wdir / (u.name + "_wrap.c")).write_text("\n".join(lines) + "\n")
        names.append(u.name + "_wrap.c")
        for sym, kind in sorted(u.defs.items()):
            m = re.match(r"^func_([0-9a-f]{8})$", sym)
            if kind == "func" and m:
                funcs.append((int(m.group(1), 16), sym))
    cm = ["# SPDX-License-Identifier: AGPL-3.0-or-later",
          "# GENERADO por gen_stubs.py --emit-cmake. No editar.",
          "set(M1_MATCHED_UNITS"]
    cm += ["  wrap/" + n for n in names]
    cm.append(")")
    (gdir / "matched_units.cmake").write_text("\n".join(cm) + "\n")
    funcs = sorted(set(funcs) | set(extra_funcs))
    c = ["/* SPDX-License-Identifier: AGPL-3.0-or-later */",
         "/* GENERADO por gen_stubs.py --emit-cmake: direccion PS2 -> funcion decompilada enlazada. */",
         "typedef struct { unsigned addr; void *fn; } m1_func_entry;"]
    c += ["extern void %s();" % n for _, n in funcs]
    c.append("const m1_func_entry m1_func_table[] = {")
    c += ["    { 0x%08xu, (void *)%s }," % (a_, n) for a_, n in funcs]
    c.append("    { 0u, 0 }\n};")
    c.append("const unsigned m1_func_table_count = %d;" % len(funcs))
    (gdir / "func_table.c").write_text("\n".join(c) + "\n")


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.split("\n")[1])
    ap.add_argument("--src", action="append", help="directorio con f_XXXXXXXX.c (repetible; por defecto src/matched)")
    ap.add_argument("--files", nargs="*", help="lista explicita de ficheros .c (sustituye a --src)")
    ap.add_argument("--subset", type=int, default=0, help="usar un fichero de cada N (determinista)")
    ap.add_argument("--limit", type=int, default=0, help="usar como mucho N ficheros (tras --subset)")
    ap.add_argument("--cc", default=None, help="compilador (por defecto clang, si no cc)")
    ap.add_argument("--out", default=str(DEFAULT_OUT), help="stubs.c de salida")
    ap.add_argument("--build-dir", default=str(DEFAULT_BUILD), help="objetos, envoltorios y ejecutable de prueba")
    ap.add_argument("--report", default=None, help="escribe un informe JSON")
    ap.add_argument("--report-data", action="store_true", help="informa de que simbolos son datos (globales), no funciones")
    ap.add_argument("--data-size", type=int, default=0x1000, help="bytes de un dato de tamano desconocido (por defecto 4096)")
    ap.add_argument("--func-list", action="append", default=[], help="lista de funciones/direcciones conocidas (.json o splat)")
    ap.add_argument("--no-link", action="store_true", help="no enlazar ni comprobar")
    ap.add_argument("--emit-cmake", action="store_true",
                    help="escribe gen/wrap/*.c, gen/matched_units.cmake y gen/func_table.c para el binario M1 (CMake)")
    ap.add_argument("--provided", action="append", default=None,
                    help="directorio con .c que DEFINEN a mano func_XXXXXXXX (por defecto port/m1/sdkmap si existe); "
                         "esos simbolos no se generan como stubs")
    ap.add_argument("--bindings", default=str(M1 / "data_bindings.txt"),
                    help="enlaces a mano de nombres locales a direcciones (por defecto port/m1/data_bindings.txt)")
    ap.add_argument("--keep-going", action="store_true", help="exit 0 aunque el enlace final falle")
    ap.add_argument("-j", "--jobs", type=int, default=2, help="compilaciones en paralelo (por defecto 2)")
    ap.add_argument("-q", "--quiet", action="store_true")
    a = ap.parse_args(argv)

    cc = a.cc or find_tool("clang", "cc", "gcc")
    if not cc:
        print("gen_stubs: no hay compilador (clang/cc/gcc)", file=sys.stderr)
        return 2
    nm = find_tool("llvm-nm", "nm")
    if not nm:
        print("gen_stubs: no hay nm", file=sys.stderr)
        return 2
    clang = is_clang(cc)
    bdir = Path(a.build_dir)
    for sub in ("wrap", "obj", "rt", "prov"):  # nada rancio de ejecuciones anteriores
        shutil.rmtree(bdir / sub, ignore_errors=True)
    bdir.mkdir(parents=True, exist_ok=True)

    srcdirs = [Path(s) for s in (a.src or [str(ROOT / "src" / "matched")])]
    if a.files:
        files = [Path(f) for f in a.files]
    else:
        files = []
        for d in srcdirs:
            files += sorted(d.glob("*.c"))
    if a.subset > 1:
        files = files[::a.subset]
    if a.limit:
        files = files[:a.limit]
    if not files:
        print("gen_stubs: sin ficheros de entrada", file=sys.stderr)
        return 2

    flags = ["-DPORT", "-fcommon", "-w", "-std=gnu11", "-O0", "-include", str(PRELUDE),
             "-Wno-error=implicit-function-declaration", "-Wno-error=int-conversion",
             "-Wno-error=incompatible-pointer-types"]
    if not clang:
        flags = [f for f in flags if not f.startswith("-Wno-error=")]
    global BINDINGS
    BINDINGS = load_bindings(a.bindings)
    prov_dirs = a.provided if a.provided is not None else [str(M1 / d) for d in PROVIDED_DEFAULT]
    provided = set()
    for pd in prov_dirs:
        provided |= provided_symbols(Path(pd))
    units = [Unit(f) for f in files]
    with cf.ThreadPoolExecutor(max_workers=max(1, a.jobs)) as ex:
        list(ex.map(lambda u: process_unit(u, cc, clang, nm, bdir, flags), units))

    failed = [u for u in units if u.error]
    live = [u for u in units if not u.error]
    # unidades sustituidas por una version del port (rwport/ported/sdkmap define el mismo func_XXXXXXXX)
    replaced = [u for u in live if any(k == "func" and sy in provided for sy, k in u.defs.items())]
    live = [u for u in live if u not in replaced]
    summary_replaced = sorted(u.name for u in replaced)

    # definiciones duplicadas: nos quedamos con el primer fichero (orden estable)
    dropped = []
    while True:
        owner, dup_files = {}, set()
        for u in live:
            for s, k in u.defs.items():
                if k == "data" and False:
                    continue
                if s in owner and owner[s] is not u:
                    dup_files.add(u)
                else:
                    owner[s] = u
        if not dup_files:
            break
        for u in sorted(dup_files, key=lambda x: x.name):
            dropped.append(u)
        live = [u for u in live if u not in dup_files]
    defined = set()
    for u in live:
        defined |= set(u.defs)
    # -fcommon: un simbolo 'C' duplicado fusiona; nm -P lo da como 'C' (mayuscula), ya contado arriba una vez

    undef = set()
    decl = {}
    for u in live:
        undef |= u.undef
        for n, v in u.decl.items():
            p = decl.get(n)
            if p is None:
                decl[n] = v
            elif p[0] != v[0]:
                decl[n] = ("mixed", p[1])
    # lo que el codigo a mano/portado (sdkmap, rwport, ported) llama tambien hay que resolverlo:
    # se compila ahora y sus func_XXXXXXXX indefinidos se suman a los pedidos
    prov_objs = []
    if provided:
        prov_objs = compile_provided(cc, prov_dirs, bdir)
        if prov_objs is None:
            return 1
        for o in prov_objs:
            _d, _u = nm_symbols(nm, o)
            undef |= {n for n in _u if re.match(r"^func_[0-9a-f]{8}$", n)}
    missing = sorted((undef - defined) - provided)

    # probe de enlace sin stubs para descartar lo que resuelve libc/sistema
    log_obj_dir = bdir / "rt"
    log_obj_dir.mkdir(exist_ok=True)
    rt_obj = log_obj_dir / "m1_stub_log.o"
    r = run([cc, "-c", str(STUBLOG_DIR / "m1_stub_log.c"), "-o", str(rt_obj), "-I", str(STUBLOG_DIR), "-std=gnu11", "-w"])
    if r.returncode != 0:
        print("gen_stubs: no compila m1_stub_log.c\n" + r.stderr, file=sys.stderr)
        return 2
    probe_main = bdir / "probe_main.c"
    probe_main.write_text("int main(void) { return 0; }\n")
    sysdefined = set()
    if not a.no_link and missing:
        code, out = link(cc, [probe_main] + prov_objs + [u.obj for u in live], bdir / "probe.out")
        unresolved = parse_unresolved(out)
        if unresolved:
            sysdefined = set(missing) - unresolved
        elif code == 0:
            sysdefined = set(missing)
        # si el enlazador no se entiende, no descartamos nada (se avisa abajo)
        else:
            print("gen_stubs: aviso: no se entendio la salida del enlazador; sin filtrar simbolos del sistema", file=sys.stderr)
    stubbed = [s for s in missing if s not in sysdefined]

    # clasificacion
    known = {}
    for d in srcdirs:
        known.update(addrs_from_dir(d))
    for extra in ("src/auto",):
        known.setdefault  # noqa
        for k, v in addrs_from_dir(ROOT / extra).items():
            known.setdefault(k, v)
    listed = set()
    for fl in ([str(ROOT / "config" / "symbol_addrs.txt")] + a.func_list):
        listed |= load_func_list(fl)
    nocompile = {u.addr: u for u in failed if u.addr is not None}

    funcs, datas, info = [], [], {"functions": [], "data": []}
    for s in stubbed:
        kind = decl.get(s, (None, ""))[0]
        if kind is None:
            kind = "data" if data_addr(s) is not None else "func"
        if kind == "mixed":
            kind = "func"
        addr = guest_addr_of(s)
        if kind == "func":
            funcs.append((s, addr))
            if addr in nocompile:
                src = "fuente-no-compila (%s)" % nocompile[addr].error[:60]
            elif addr in known:
                src = "fuente-no-enlazada"
            elif addr in listed:
                src = "lista-de-simbolos"
            elif addr:
                src = "sin-decompilar"
            else:
                src = "sdk/nombre"
            info["functions"].append({"name": s, "addr": "0x%08x" % addr if addr else None, "origin": src})
        else:
            ty = decl.get(s, (None, ""))[1]
            size, exact = _dsize(ty) if ty else (0, False)
            sz = max(size, 16) if exact and size else a.data_size
            datas.append((s, addr, sz))
            info["data"].append({"name": s, "addr": "0x%08x" % addr if addr else None,
                                 "size": sz, "size_known": bool(exact and size), "type": ty,
                                 "referenced_by": sorted(u.name for u in live if s in u.undef)})
    funcs.sort(key=lambda t: (t[1] == 0, t[1], t[0]))
    datas.sort(key=lambda t: (t[1] == 0, t[1], t[0]))

    text = gen_stubs_c(funcs, datas)
    if not a.report_data or a.out != str(DEFAULT_OUT):
        outp = Path(a.out)
        outp.parent.mkdir(parents=True, exist_ok=True)
        outp.write_text(text)

    data_image_c = Path(a.out).parent / "data_image.c"
    if not a.report_data or a.out != str(DEFAULT_OUT):
        data_image_c.write_text(gen_data_image(datas))

    if a.emit_cmake:
        emit_cmake(live, bdir, provided_funcs(prov_dirs))

    summary = {
        "inputs": len(units), "compiled": len(live) + len(dropped), "compile_failed": len(failed),
        "dropped_duplicates": sorted(u.name for u in dropped),
        "defined_symbols": len(defined), "undefined_total": len(undef),
        "resolved_by_system": len(sysdefined), "stub_functions": len(funcs), "stub_data": len(datas),
        "replaced_by_port": summary_replaced, "data_aliases": sum(1 for d in datas if in_image(d[0])),
        "compile_errors_by_kind": {},
    }
    for u in failed:
        k = re.sub(r"^.*?error: ", "", u.error)[:70]
        summary["compile_errors_by_kind"][k] = summary["compile_errors_by_kind"].get(k, 0) + 1
    mixed = sorted(n for n, v in decl.items() if v[0] == "mixed" and n in stubbed)
    summary["mixed_func_and_data"] = mixed

    link_ok = None
    link_msg = ""
    if not a.no_link:
        # stubs.c + runtime + main de comprobacion
        stub_obj = bdir / "rt" / "stubs.o"
        r = run([cc, "-c", str(a.out), "-o", str(stub_obj), "-I", str(STUBLOG_DIR), "-std=gnu11", "-w"])
        if r.returncode != 0:
            print("gen_stubs: no compila stubs.c\n" + r.stderr[:2000], file=sys.stderr)
            return 1
        main_c = bdir / "check_main.c"
        main_c.write_text('#include "m1_stub_log.h"\nvoid m1_stubs_init(void);\n'
                          "int main(void) { m1_stubs_init(); return 0; }\n")
        di_obj = bdir / "rt" / "data_image.o"
        r = run([cc, "-c", str(data_image_c), "-o", str(di_obj), "-I", str(M1 / "include"), "-std=gnu11", "-w"])
        if r.returncode != 0:
            print("gen_stubs: no compila data_image.c\n" + r.stderr[:2000], file=sys.stderr)
            return 1
        tab_c = bdir / "rt" / "func_table_check.c"
        tab_c.write_text("typedef struct { unsigned addr; void *fn; } e;\nconst e m1_func_table[1] = {{0, 0}};\n"
                         "const unsigned m1_func_table_count = 0;\n")
        code, out = link(cc, [main_c, stub_obj, rt_obj, di_obj, tab_c] + prov_objs + [u.obj for u in live],
                         bdir / "check.out", extra=["-I", str(STUBLOG_DIR)])
        link_ok = code == 0
        link_msg = out if not link_ok else ""
        summary["link_ok"] = link_ok
        summary["link_unresolved"] = sorted(parse_unresolved(out)) if not link_ok else []

    if not a.quiet:
        print("ficheros: %d  compilan: %d  no compilan: %d  duplicados descartados: %d"
              % (summary["inputs"], summary["compiled"], summary["compile_failed"], len(dropped)))
        for k, v in sorted(summary["compile_errors_by_kind"].items(), key=lambda kv: -kv[1])[:5]:
            print("  no compila (%d): %s" % (v, k))
        print("simbolos sin resolver: %d (resueltos por el sistema: %d)  -> stubs: %d funciones, %d datos"
              % (len(missing), len(sysdefined), len(funcs), len(datas)))
        if mixed:
            print("aviso: usados como funcion y como dato: %s (se generan como funcion)" % ", ".join(mixed[:10]))
        if a.report_data:
            print("\nSimbolos de DATOS (variables globales, no funciones): %d" % len(datas))
            for d in info["data"]:
                print("  %-22s dir=%-10s tam=%-6d%s tipo=%s usado-en=%s" % (
                    d["name"], d["addr"] or "-", d["size"], "" if d["size_known"] else "?", d["type"] or "-",
                    ",".join(d["referenced_by"][:3]) + ("..." if len(d["referenced_by"]) > 3 else "")))
        if link_ok is not None:
            print("enlace final: %s" % ("OK, sin simbolos sin resolver" if link_ok else "FALLA"))
            if not link_ok:
                print(link_msg[:1500])
        print("escrito %s" % a.out)
    if a.report:
        Path(a.report).write_text(json.dumps({"summary": summary, **info}, indent=1, sort_keys=True) + "\n")
    if link_ok is False and not a.keep_going:
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main())
