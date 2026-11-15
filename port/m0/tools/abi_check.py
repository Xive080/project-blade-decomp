#!/usr/bin/env python3
"""abi_check.py - comprobador de prototipos y layouts del C decompilado (M0, PORT_PLAN 3.1 y 6.9).

Subcomandos
  check      prototipos, llamadas y layouts sobre src/ (por defecto src/matched y src/auto)
  port-diff  para cada fichero con condicionales PORT: ABI y codigo con PORT definido frente a PS2
  manifest   huella (sha1) de la "vista PS2" de cada fichero: con PORT sin definir es lo que ve mwccps2

Que mira `check`
  protos  las declaraciones de un mismo simbolo (por nombre o por direccion: func_0011ec80, f_0011ec80,
          f11ec80 son el mismo) coinciden entre ficheros y con su definicion: aridad, retorno, parametros.
  calls   las llamadas pasan al menos tantos argumentos como el callee conocido declara.
  layouts los structs/uniones declarados tienen el mismo layout con el modelo de PS2 (puntero 4 B)
          y con el del host (puntero 8 B); lista los miembros que se mueven. Marca ademas los campos
          puntero y los usos de campos enteros como puntero (puntos calientes de la estrategia E2).

Limites (hipotesis): es un analizador propio de un subconjunto de C, no un compilador. Los bitfields,
las expresiones constantes complejas y los literales de asm no se interpretan (se avisa, no se falla).
`long` mide --ps2-long-bits (64 por defecto, segun PORT_PLAN 3.1; sin confirmar para mwccps2).
Sin dependencias: Python 3 estandar. Sin rutas absolutas: todo relativo al repo o por argumento.
"""
import argparse, hashlib, json, os, re, sys
from collections import defaultdict

# ----------------------------------------------------------------------------- preprocesado

_COMMENT = re.compile(r'/\*.*?\*/|//[^\n]*', re.S)


def strip_comments(t):
    return _COMMENT.sub(lambda m: re.sub(r'[^\n]', ' ', m.group(0)) if m.group(0).startswith('/*') else '', t)


def _eval_cond(expr, defines):
    e = re.sub(r'\bdefined\s*\(\s*(\w+)\s*\)|\bdefined\s+(\w+)',
               lambda m: '1' if (m.group(1) or m.group(2)) in defines else '0', expr)
    e = re.sub(r'\b[A-Za-z_]\w*\b', lambda m: str(defines.get(m.group(0), 0)) if m.group(0) in defines else '0', e)
    e = e.replace('&&', ' and ').replace('||', ' or ')
    e = re.sub(r'!(?!=)', ' not ', e)
    if re.search(r'[^0-9xXa-fA-F\s()<>=!+\-*/%&|^~andort]', e):
        return False
    try:
        return bool(eval(e, {'__builtins__': {}}, {}))
    except Exception:
        return False


def preprocess(text, defines):
    """Resuelve #if/#ifdef/#ifndef/#elif/#else/#endif con `defines` (dict nombre->valor).
    Quita #define/#pragma/#include. Mantiene el numero de lineas (lineas vacias)."""
    text = strip_comments(text).replace('\\\n', '  ')
    out, stack = [], []        # stack: (activo_padre, ya_tomada, activo)
    active = True
    for line in text.split('\n'):
        s = line.strip()
        if s.startswith('#'):
            m = re.match(r'#\s*(\w+)\s*(.*)', s)
            d, rest = (m.group(1), m.group(2)) if m else ('', '')
            if d in ('if', 'ifdef', 'ifndef'):
                if d == 'if':
                    c = _eval_cond(rest, defines)
                elif d == 'ifdef':
                    c = rest.split()[0] in defines if rest.split() else False
                else:
                    c = rest.split()[0] not in defines if rest.split() else True
                stack.append((active, c and active, c))
                active = active and c
            elif d == 'elif' and stack:
                pa, taken, _ = stack[-1]
                c = (not taken) and pa and _eval_cond(rest, defines)
                stack[-1] = (pa, taken or c, c)
                active = c
            elif d == 'else' and stack:
                pa, taken, _ = stack[-1]
                c = pa and not taken
                stack[-1] = (pa, True, c)
                active = c
            elif d == 'endif' and stack:
                pa, _, _ = stack.pop()
                active = pa
            out.append('')
            continue
        out.append(line if active else '')
    return '\n'.join(out)


def uses_port(text):
    return re.search(r'^\s*#\s*(if|ifdef|ifndef|elif)\b[^\n]*\bPORT\b', strip_comments(text), re.M) is not None

# ----------------------------------------------------------------------------- tokens

_TOK = re.compile(r'\s+|0[xX][0-9a-fA-F]+[uUlL]*|\d+\.?\d*(?:[eE][-+]?\d+)?[fFuUlL]*|[A-Za-z_]\w*|"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|->|\.\.\.|.', re.S)


def tokenize(text):
    return [m.group(0) for m in _TOK.finditer(text) if not m.group(0).isspace()]


def split_top(tokens):
    """Parte en declaraciones de nivel superior. Funciones: terminan en '}' tras ')'."""
    decls, cur, depth, brace_prev = [], [], 0, None
    for i, t in enumerate(tokens):
        cur.append(t)
        if t in '({[':
            if t == '{' and depth == 0:
                brace_prev = cur[-2] if len(cur) > 1 else None
            depth += 1
        elif t in ')}]':
            depth -= 1
            if t == '}' and depth == 0 and brace_prev == ')':
                decls.append(cur); cur = []; brace_prev = None
        elif t == ';' and depth == 0:
            decls.append(cur); cur = []
    if cur:
        decls.append(cur)
    return decls

# ----------------------------------------------------------------------------- tipos

PRELUDE = {'u8': 'unsigned char', 's8': 'signed char', 'u16': 'unsigned short', 's16': 'short',
           'u32': 'unsigned int', 's32': 'int', 'u64': 'unsigned long', 's64': 'long', 'f32': 'float'}
QUAL = {'extern', 'static', 'const', 'volatile', 'register', 'inline', 'asm', '__inline', 'auto'}
PRIM_WORDS = {'unsigned', 'signed', 'short', 'long', 'int', 'char', 'float', 'double', 'void'}


class Model:
    def __init__(self, name, ptr, long_bits):
        self.name, self.ptr, self.long = name, ptr, long_bits // 8

    def prim(self, p):
        return {'i8': 1, 'u8': 1, 'i16': 2, 'u16': 2, 'i32': 4, 'u32': 4, 'i64': 8, 'u64': 8,
                'f32': 4, 'f64': 8, 'L': self.long, 'UL': self.long, 'void': 1}[p]


def prim_name(words):
    w = [x for x in words if x not in ('int',) or len(words) == 1]
    unsigned = 'unsigned' in w
    w = [x for x in w if x not in ('unsigned', 'signed')]
    if not w:
        return 'u32' if unsigned else 'i32'
    if w == ['char']:
        return 'u8' if unsigned else 'i8'
    if w == ['short']:
        return 'u16' if unsigned else 'i16'
    if w == ['long']:
        return 'UL' if unsigned else 'L'
    if w == ['long', 'long']:
        return 'u64' if unsigned else 'i64'
    if w == ['float']:
        return 'f32'
    if w in (['double'], ['long', 'double']):
        return 'f64'
    if w == ['void']:
        return 'void'
    return 'i32'


class Ctx:
    """Typedefs y structs vistos en un fichero."""
    def __init__(self):
        self.typedefs = {}   # nombre -> Type
        self.structs = {}    # (kind,tag) -> members | None
        self.anon = 0
        self.notes = []      # avisos de parseo


def parse_specifiers(tok, ctx):
    """Devuelve (Type base, indice del primer token tras los especificadores, es_typedef)."""
    i, words, is_typedef, base = 0, [], False, None
    while i < len(tok):
        t = tok[i]
        if t == 'typedef':
            is_typedef = True
        elif t in QUAL:
            pass
        elif t in PRIM_WORDS:
            words.append(t)
        elif t in ('struct', 'union', 'enum'):
            tag = None
            j = i + 1
            if j < len(tok) and re.match(r'[A-Za-z_]\w*$', tok[j]):
                tag = tok[j]; j += 1
            if j < len(tok) and tok[j] == '{':
                depth, k = 0, j
                while k < len(tok):
                    if tok[k] == '{': depth += 1
                    elif tok[k] == '}':
                        depth -= 1
                        if depth == 0: break
                    k += 1
                body = tok[j + 1:k]
                if tag is None:
                    ctx.anon += 1; tag = '<anon%d>' % ctx.anon
                if t == 'enum':
                    ctx.structs[(t, tag)] = None
                else:
                    ctx.structs[(t, tag)] = parse_members(body, ctx)
                base = ('agg', t, tag)
                i = k + 1
                continue
            if tag is None:
                ctx.anon += 1; tag = '<anon%d>' % ctx.anon
            ctx.structs.setdefault((t, tag), None)
            base = ('agg', t, tag)
            i = j
            continue
        elif re.match(r'[A-Za-z_]\w*$', t):
            if base is None and not words and (t in PRELUDE or t in ctx.typedefs):
                # nombre de tipo solo si aun no hay tipo
                base = ctx.typedefs.get(t) or parse_specifiers(tokenize(PRELUDE[t]), ctx)[0]
            else:
                break
        else:
            break
        i += 1
    if base is None:
        base = ('prim', prim_name(words)) if words else ('prim', 'i32')
        if not words:
            base = ('unk',)   # sin tipo (K&R) -> int implicito
    return base, i, is_typedef


def parse_declarator(tok, i, base, ctx):
    """Parsea un declarador desde tok[i:]. Devuelve (nombre, Type, siguiente i)."""
    ptrs = 0
    while i < len(tok) and tok[i] in ('*', 'const', 'volatile'):
        if tok[i] == '*': ptrs += 1
        i += 1
    t = base
    for _ in range(ptrs):
        t = ('ptr', t)
    name = None
    if i < len(tok) and tok[i] == '(' and i + 1 < len(tok) and tok[i + 1] == '*':
        # puntero a funcion: (*name)(params)
        j = i + 2
        n = 0
        while j < len(tok) and tok[j] == '*': j += 1
        if j < len(tok) and re.match(r'[A-Za-z_]\w*$', tok[j]):
            name = tok[j]; j += 1
        while j < len(tok) and tok[j] != ')': j += 1
        j += 1
        params = None
        if j < len(tok) and tok[j] == '(':
            k, d = j, 0
            while k < len(tok):
                if tok[k] == '(': d += 1
                elif tok[k] == ')':
                    d -= 1
                    if d == 0: break
                k += 1
            params = parse_params(tok[j + 1:k], ctx)
            j = k + 1
        return name, ('ptr', ('func', t, params)), j
    if i < len(tok) and re.match(r'[A-Za-z_]\w*$', tok[i]):
        name = tok[i]; i += 1
    # sufijos
    while i < len(tok):
        if tok[i] == '[':
            j = i + 1
            while j < len(tok) and tok[j] != ']': j += 1
            expr = ''.join(tok[i + 1:j])
            try:
                n = int(re.sub(r'[uUlL]+$', '', expr), 0) if expr else None
            except ValueError:
                n = None
            t = ('arr', t, n)
            i = j + 1
        elif tok[i] == '(' :
            k, d = i, 0
            while k < len(tok):
                if tok[k] == '(': d += 1
                elif tok[k] == ')':
                    d -= 1
                    if d == 0: break
                k += 1
            t = ('func', t, parse_params(tok[i + 1:k], ctx))
            i = k + 1
        elif tok[i] == ':':          # bitfield
            ctx.notes.append('bitfield no interpretado')
            t = ('bits', t)
            i += 1
            while i < len(tok) and tok[i] not in (',', ';'): i += 1
        else:
            break
    return name, t, i


def parse_params(tok, ctx):
    """None = lista sin especificar `()`; [] = `(void)`; si no, lista de Type. Admite ('...',)."""
    if not tok:
        return None
    if tok == ['void']:
        return []
    parts, cur, d = [], [], 0
    for t in tok:
        if t in '([{': d += 1
        elif t in ')]}': d -= 1
        if t == ',' and d == 0:
            parts.append(cur); cur = []
        else:
            cur.append(t)
    parts.append(cur)
    out = []
    for p in parts:
        if p == ['...']:
            out.append(('va',)); continue
        base, i, _ = parse_specifiers(p, ctx)
        _, ty, _ = parse_declarator(p, i, base, ctx)
        if ty[0] == 'arr': ty = ('ptr', ty[1])       # array en parametro decae
        if ty[0] == 'func': ty = ('ptr', ty)
        out.append(ty)
    return out


def parse_members(tok, ctx):
    members = []
    for d in _split_semis(tok):
        if not d: continue
        base, i, _ = parse_specifiers(d, ctx)
        while i <= len(d):
            if i >= len(d): break
            name, ty, i = parse_declarator(d, i, base, ctx)
            members.append((name, ty))
            if i < len(d) and d[i] == ',':
                i += 1
            else:
                break
    return members


def _split_semis(tok):
    out, cur, d = [], [], 0
    for t in tok:
        if t in '({[': d += 1
        elif t in ')}]': d -= 1
        if t == ';' and d == 0:
            out.append(cur); cur = []
        else:
            cur.append(t)
    if cur: out.append(cur)
    return out

# ----------------------------------------------------------------------------- tamanos y clases

def size_align(ty, m, ctx, seen=()):
    """(size, align, offsets|None, notas)."""
    k = ty[0]
    if k == 'prim':
        s = m.prim(ty[1]); return s, min(s, 8), None
    if k == 'unk':
        return 4, 4, None
    if k == 'ptr':
        return m.ptr, m.ptr, None
    if k == 'func':
        return 1, 1, None
    if k == 'bits':
        return size_align(ty[1], m, ctx, seen)
    if k == 'arr':
        s, a, _ = size_align(ty[1], m, ctx, seen)
        return s * (ty[2] or 0), a, None
    if k == 'agg':
        key = (ty[1], ty[2])
        if ty[1] == 'enum':
            return 4, 4, None
        mem = ctx.structs.get(key)
        if mem is None or key in seen:
            return 0, 1, None            # incompleto
        off, mx, offs, total = 0, 1, [], 0
        for name, mt in mem:
            s, a, _ = size_align(mt, m, ctx, seen + (key,))
            if ty[1] == 'union':
                offs.append((name, 0)); total = max(total, s)
            else:
                off = (off + a - 1) // a * a
                offs.append((name, off)); off += s
            mx = max(mx, a)
        if ty[1] == 'struct': total = off
        total = (total + mx - 1) // mx * mx
        return total, mx, offs
    return 0, 1, None


def cls(ty, ctx, m):
    """Clase ABI para comparar declaraciones: 'i32', 'f32', 'ptr', 'void', 'agg:tag'..."""
    k = ty[0]
    if k == 'prim':
        p = ty[1]
        if p in ('L', 'UL'):
            p = ('i' if p == 'L' else 'u') + str(m.long * 8)
        return p
    if k == 'unk': return 'i32'
    if k in ('ptr', 'arr', 'func'): return 'ptr'
    if k == 'agg': return 'enum' if ty[1] == 'enum' else 'agg'
    return '?'


def pointee(ty, ctx, m):
    t = ty
    while t[0] in ('ptr', 'arr') and len(t) > 1: t = t[1]
    return cls(t, ctx, m) if t[0] != 'func' else 'fn'


def sig_str(ret, params, ctx, m):
    if params is None: ps = '?'
    else: ps = ','.join('...' if p[0] == 'va' else cls(p, ctx, m) for p in params)
    return '%s(%s)' % (cls(ret, ctx, m), ps)

# ----------------------------------------------------------------------------- analisis de un fichero

ADDR_RE = [re.compile(r'^func_([0-9a-fA-F]{8})$'), re.compile(r'^f_([0-9a-fA-F]{8})$'),
           re.compile(r'^f([0-9a-fA-F]{6,7})$')]


def sym_key(name):
    for r in ADDR_RE:
        m = r.match(name)
        if m: return 'A%08x' % int(m.group(1), 16)
    return name


class FileInfo:
    def __init__(self, path):
        self.path = path
        self.ctx = Ctx()
        self.defs = {}     # nombre -> (ret, params)
        self.protos = {}   # nombre -> (ret, params)
        self.vars = {}     # nombre -> Type
        self.calls = []    # (callee_name, nargs)
        self.fields = []   # (func, expr, type_text, offset)
        self.bodies = {}   # nombre -> tokens
        self.structs = {}  # (kind, tag) -> miembros (modelo-neutral)
        self.notes = []


def analyze(path, text, defines=None):
    fi = FileInfo(path)
    defines = defines or {}
    pre = preprocess(text, defines)
    toks = tokenize(pre)
    ctx = fi.ctx
    ctx.typedefs.update({k: parse_specifiers(tokenize(v), ctx)[0] for k, v in PRELUDE.items()})
    for decl in split_top(toks):
        if not decl or decl == [';']:
            continue
        try:
            _analyze_decl(fi, decl)
        except Exception as e:            # un analizador de subconjunto no debe tumbar el lote
            fi.notes.append('declaracion no interpretada (%s): %s' % (type(e).__name__, ' '.join(decl[:8])))
    fi.structs = {k: v for k, v in ctx.structs.items() if v is not None}
    fi.notes += ctx.notes
    return fi


def _analyze_decl(fi, decl):
    ctx = fi.ctx
    if decl[0] == 'asm' or (decl[0] in QUAL and 'asm' in decl[:3]):
        # funcion en ensamblador: solo cabecera
        j = decl.index('{') if '{' in decl else len(decl)
        head = decl[:j]
        head = [t for t in head if t != 'asm']
        base, i, _ = parse_specifiers(head, ctx)
        name, ty, _ = parse_declarator(head, i, base, ctx)
        if name and ty[0] == 'func':
            fi.defs[name] = (ty[1], ty[2]); fi.bodies[name] = []
        return
    base, i, is_td = parse_specifiers(decl, ctx)
    first = True
    while i < len(decl) and decl[i] != ';' and not (first and decl[i] == '{'):
        first = False
        name, ty, i = parse_declarator(decl, i, base, ctx)
        if name is None:
            break
        if is_td:
            ctx.typedefs[name] = ty
        elif ty[0] == 'func':
            if i < len(decl) and decl[i] == '{':
                fi.defs[name] = (ty[1], ty[2])
                body = decl[i:]
                fi.bodies[name] = body
                _scan_body(fi, name, body)
                return
            fi.protos[name] = (ty[1], ty[2])
        else:
            fi.vars[name] = ty
        # inicializador
        if i < len(decl) and decl[i] == '=':
            d = 0
            while i < len(decl):
                if decl[i] in '({[': d += 1
                elif decl[i] in ')}]': d -= 1
                elif decl[i] == ',' and d == 0: break
                elif decl[i] == ';' and d == 0: break
                i += 1
        if i < len(decl) and decl[i] == ',':
            i += 1
        else:
            break


def _scan_body(fi, func, body):
    n = len(body)
    for i, t in enumerate(body):
        if re.match(r'[A-Za-z_]\w*$', t) and i + 1 < n and body[i + 1] == '(' and (i == 0 or body[i - 1] not in ('.', '->')):
            if t.startswith('M2C_') or t in ('sizeof', 'if', 'while', 'for', 'switch', 'return', 'asm'):
                if t == 'M2C_FIELD':
                    args = _args(body, i + 1)
                    if len(args) == 3 and args[2]:
                        try:
                            off = int(''.join(args[2]).rstrip('uUlL'), 0)
                            fi.fields.append((func, ''.join(args[0]), ' '.join(args[1]), off, i))
                        except ValueError:
                            pass
                continue
            fi.calls.append((func, t, len(_args(body, i + 1)) if body[i + 2:i + 3] != [')'] else 0))


def _args(tok, lp):
    """Argumentos (listas de tokens) de la llamada cuyo '(' esta en tok[lp]."""
    out, cur, d = [], [], 0
    for j in range(lp, len(tok)):
        t = tok[j]
        if t in '([{':
            d += 1
            if d == 1: continue
        elif t in ')]}':
            d -= 1
            if d == 0:
                out.append(cur); return out
        if t == ',' and d == 1:
            out.append(cur); cur = []
        else:
            cur.append(t)
    out.append(cur)
    return out

# ----------------------------------------------------------------------------- hallazgos

class Finding:
    def __init__(self, kind, sev, symbol, detail, files):
        self.kind, self.sev, self.symbol, self.detail, self.files = kind, sev, symbol, detail, sorted(set(files))

    def key(self):
        return '%s|%s|%s' % (self.kind, self.symbol, self.detail)

    def to_dict(self):
        return {'kind': self.kind, 'severity': self.sev, 'symbol': self.symbol, 'detail': self.detail, 'files': self.files}

    def __str__(self):
        f = ', '.join(os.path.basename(x) for x in self.files[:4]) + (' ...' if len(self.files) > 4 else '')
        return '[%s] %s %s: %s  (%s)' % (self.sev, self.kind, self.symbol, self.detail, f)


PS2 = Model('ps2', 4, 64)
HOST = Model('host', 8, 64)


def own_symbol(fi):
    """Nombre canonico de lo que define un fichero f_XXXXXXXX.c (func/f/f_XXXX)."""
    stem = os.path.splitext(os.path.basename(fi.path))[0]
    m = re.match(r'^f_([0-9a-fA-F]{8})$', stem)
    out = {}
    for name in fi.defs:
        k = sym_key(name)
        if k.startswith('A'):
            out[name] = k
        elif m and name in ('func', 'f'):
            out[name] = 'A%08x' % int(m.group(1), 16)
    return out


def comparable_name(n):
    """Nombres que significan lo mismo en todos los ficheros: direcciones, SDK (sce*), RenderWare
    (Rw*/Rp*/Rt*/rw*), nombres con guion bajo inicial o largos. Los alias cortos de los ficheros
    escritos a mano (sub, f1, g2, s2...) son locales a cada fichero (hipotesis de convencion)."""
    return sym_key(n).startswith('A') or n.startswith(('sce', 'Rw', 'Rp', 'Rt', 'rw', '_', 'D_', 'G_')) or len(n) >= 8


def check_protos(infos, model):
    findings = []
    decls = defaultdict(list)   # key -> [(origen, ret, params, fi, nombre)]
    # Nombres definidos en un fichero que no son su funcion principal ni una direccion
    # (ayudantes de los ficheros escritos a mano: sub, f1, ...) son locales: no se comparan entre ficheros.
    local = set()
    for fi in infos:
        own = own_symbol(fi)
        local |= {n for n in fi.defs if n not in own and not sym_key(n).startswith('A')}
        local |= {n for n in list(fi.protos) + list(fi.vars) if not comparable_name(n)}
    for fi in infos:
        own = own_symbol(fi)
        for name, (r, p) in fi.defs.items():
            k = own.get(name, sym_key(name) if name not in ('func', 'f') else None)
            if k and k not in local: decls[k].append(('def', r, p, fi, name))
        for name, (r, p) in fi.protos.items():
            if sym_key(name) not in local:
                decls[sym_key(name)].append(('proto', r, p, fi, name))
    for k, lst in decls.items():
        if len(lst) < 2:
            continue
        ref = next((d for d in lst if d[0] == 'def'), None) or lst[0]
        for d in lst:
            if d is ref: continue
            ctx_a, ctx_b = ref[3].ctx, d[3].ctx
            for issue in _compare_sig(ref, d, ctx_a, ctx_b, model):
                findings.append(Finding('proto', issue[0], k if not k.startswith('A') else 'func_' + k[1:],
                                        '%s: %s vs %s %s' % (issue[1], sig_str(ref[1], ref[2], ctx_a, model),
                                                              sig_str(d[1], d[2], ctx_b, model), d[0] if d[0] == 'def' else ''),
                                        [ref[3].path, d[3].path]))
    # variables globales
    gv = defaultdict(list)
    for fi in infos:
        for name, ty in fi.vars.items():
            if re.match(r'^(D_|G_)', name):
                gv[name].append((ty, fi))
    for name, lst in gv.items():
        ref = lst[0]
        for ty, fi in lst[1:]:
            a = _var_size(ref[0], ref[1].ctx, model); b = _var_size(ty, fi.ctx, model)
            if a is not None and b is not None and a != b and 0 not in (a, b):
                findings.append(Finding('var', 'WARN', name, 'tamano %d vs %d' % (a, b), [ref[1].path, fi.path]))
    return findings


def _var_size(ty, ctx, model):
    if ty[0] == 'arr' and ty[2] is None: return None
    return size_align(ty, model, ctx)[0]


_INT = re.compile(r'^[iu](8|16|32|64)$|^enum$')


def compat(x, y):
    """Severidad de declarar x donde el otro lado dice y (None = compatible)."""
    if x == y: return None
    if _INT.match(x) and _INT.match(y):
        wx = int(re.sub(r'\D', '', x) or 32); wy = int(re.sub(r'\D', '', y) or 32)
        if wx == wy: return 'INFO'                 # solo el signo
        return 'WARN' if max(wx, wy) <= 32 else 'ERROR'
    if {x, y} <= {'ptr', 'i32', 'u32'}: return 'WARN'   # igual en PS2, distinto con punteros de 64 bits
    return 'ERROR'


def _compare_sig(a, b, ca, cb, m):
    """Compara la referencia `a` (la definicion si existe) con la declaracion `b`."""
    out = []
    (oa, ra, pa, _, _), (ob, rb, pb, _, _) = a, b
    ka, kb = cls(ra, ca, m), cls(rb, cb, m)
    if ka != kb:
        if oa == 'def' and kb == 'void':
            out.append(('INFO', 'el llamador ignora el retorno %s' % ka))
        elif ka == 'void':
            out.append(('WARN', 'el llamador espera %s y el callee no devuelve nada' % kb))
        elif 'void' in (ka, kb):
            out.append(('WARN', 'retorno %s vs %s' % (ka, kb)))
        else:
            out.append((compat(ka, kb), 'retorno %s vs %s' % (ka, kb)))
    if pa is None or pb is None:
        if (pa is None) != (pb is None):
            out.append(('INFO', 'uno sin lista de parametros'))
        return out
    na = [p for p in pa if p[0] != 'va']; nb = [p for p in pb if p[0] != 'va']
    if len(na) != len(nb) and not any(p[0] == 'va' for p in pa + pb):
        # la declaracion b pasa menos de lo que lee el callee: basura en los registros
        sev = 'ERROR' if (oa == 'def' and len(nb) < len(na)) or oa != 'def' else 'WARN'
        out.append((sev, 'aridad %d vs %d' % (len(na), len(nb))))
        return out
    for i, (x, y) in enumerate(zip(na, nb)):
        cx, cy = cls(x, ca, m), cls(y, cb, m)
        if cx != cy:
            out.append((compat(cx, cy), 'param %d %s vs %s' % (i, cx, cy)))
        elif cx == 'ptr' and pointee(x, ca, m) != pointee(y, cb, m):
            out.append(('INFO', 'param %d apunta a %s vs %s' % (i, pointee(x, ca, m), pointee(y, cb, m))))
    return out


def check_calls(infos, model):
    known = {}
    for fi in infos:
        own = own_symbol(fi)
        for name, (r, p) in fi.defs.items():
            k = own.get(name) or (sym_key(name) if name not in ('func', 'f') else None)
            if k and p is not None: known[k] = (len([x for x in p if x[0] != 'va']), any(x[0] == 'va' for x in p), 'def')
    for fi in infos:
        for name, (r, p) in fi.protos.items():
            k = sym_key(name)
            if k not in known and p is not None:
                known[k] = (len([x for x in p if x[0] != 'va']), any(x[0] == 'va' for x in p), 'proto')
    out = []
    for fi in infos:
        for func, callee, n in fi.calls:
            k = sym_key(callee)
            if k not in known: continue
            want, va, src = known[k]
            if n < want and not va:
                out.append(Finding('call', 'WARN', callee, 'llamada con %d args, %s declara %d (en %s)' % (n, src, want, func), [fi.path]))
    return out


def check_layouts(infos):
    out = []
    for fi in infos:
        ctx = fi.ctx
        for (kind, tag), members in fi.structs.items():
            if kind == 'enum' or not members: continue
            sp, ap, op = size_align(('agg', kind, tag), PS2, ctx)
            sh, ah, oh = size_align(('agg', kind, tag), HOST, ctx)
            moved = [n for (n, a), (_, b) in zip(op, oh) if a != b]
            ptrs = [n for n, t in members if _has_ptr(t)]
            if sp != sh or moved:
                out.append(Finding('layout', 'WARN', '%s %s' % (kind, tag if not tag.startswith('<') else tag + '@' + os.path.basename(fi.path)),
                                   'tamano PS2 %d vs host %d; miembros que se mueven: %s' % (sp, sh, ', '.join(str(x) for x in moved) or '-'), [fi.path]))
            elif ptrs:
                out.append(Finding('layout', 'INFO', '%s %s' % (kind, tag), 'campos puntero sin efecto en el layout: %s' % ', '.join(map(str, ptrs)), [fi.path]))
        for name, ty in fi.vars.items():
            if ty[0] == 'agg' and (ty[1], ty[2]) in fi.structs:
                sp = size_align(ty, PS2, ctx)[0]; sh = size_align(ty, HOST, ctx)[0]
                if sp != sh:
                    out.append(Finding('layout', 'WARN', 'var ' + name, 'tamano PS2 %d vs host %d' % (sp, sh), [fi.path]))
        # campos puntero y enteros usados como puntero
        for func, expr, tytxt, off, pos in fi.fields:
            body = fi.bodies.get(func, [])
            tt = tytxt.split()
            ptr_field = tt.count('*') >= 2
            if ptr_field:
                out.append(Finding('ptr_field', 'INFO', '%s@0x%x' % (func, off), 'campo puntero en offset 0x%x (4 B en PS2, 8 B en host)' % off, [fi.path]))
            elif tt and tt[-1] == '*' and pos >= 3 and body[pos - 1] == ')' and '*' in body[max(0, pos - 4):pos]:
                out.append(Finding('int_as_ptr', 'INFO', '%s@0x%x' % (func, off), 'campo de %s usado como puntero (cast) en offset 0x%x' % (' '.join(tt[:-1]), off), [fi.path]))
        # accesos solapados con distinto ancho a la misma base
        by = defaultdict(list)
        for func, expr, tytxt, off, pos in fi.fields:
            tt = tytxt.split()
            if tt.count('*') != 1: continue
            w = _prim_width(tt[:-1], fi.ctx)
            if w: by[(func, expr)].append((off, w))
        for (func, expr), lst in by.items():
            lst = sorted(set(lst))
            for (o1, w1), (o2, w2) in zip(lst, lst[1:]):
                if o1 + w1 > o2:
                    out.append(Finding('overlap', 'INFO', '%s:%s' % (func, expr), 'accesos solapados 0x%x(%d) y 0x%x(%d): union o layout ambiguo' % (o1, w1, o2, w2), [fi.path]))
    return out


def _prim_width(words, ctx):
    if len(words) == 1 and words[0] in PRELUDE or all(w in PRIM_WORDS for w in words):
        base = parse_specifiers(words, ctx)[0]
        if base[0] == 'prim': return PS2.prim(base[1])
    return None


def _has_ptr(t):
    return t[0] == 'ptr' or (t[0] == 'arr' and _has_ptr(t[1]))

# ----------------------------------------------------------------------------- PORT frente a PS2

def summary(fi, model):
    s = {}
    for n, (r, p) in sorted(fi.defs.items()): s['def ' + n] = sig_str(r, p, fi.ctx, model)
    for n, (r, p) in sorted(fi.protos.items()): s['proto ' + n] = sig_str(r, p, fi.ctx, model)
    for n, t in sorted(fi.vars.items()):
        sz = _var_size(t, fi.ctx, model)
        s['var ' + n] = '%s:%s' % (cls(t, fi.ctx, model), sz)
    for (k, tag), mem in sorted(fi.structs.items()):
        if mem and k != 'enum':
            sz, al, offs = size_align(('agg', k, tag), model, fi.ctx)
            cl = {n: cls(t, fi.ctx, model) for n, t in mem}
            s['%s %s' % (k, tag)] = '%d/%d %s' % (sz, al, ' '.join('%s@%d:%s' % (n, o, cl.get(n)) for n, o in (offs or [])))
    s['calls'] = ' '.join('%s/%d' % (c, n) for _, c, n in fi.calls)
    return s


def port_diff(path, text, model=PS2):
    if not uses_port(text):
        return None
    a = analyze(path, text, {})
    b = analyze(path, text, {'PORT': 1})
    sa, sb = summary(a, model), summary(b, model)
    abi = []
    for k in sorted(set(sa) | set(sb)):
        if sa.get(k) != sb.get(k):
            abi.append('%s: PS2=%s PORT=%s' % (k, sa.get(k, '-'), sb.get(k, '-')))
    ca = tokenize(preprocess(text, {})); cb = tokenize(preprocess(text, {'PORT': 1}))
    return {'file': path, 'abi_changed': abi, 'code_changed': ca != cb}


def ps2_hash(text):
    t = tokenize(preprocess(text, {}))
    return hashlib.sha1(' '.join(t).encode()).hexdigest()

# ----------------------------------------------------------------------------- CLI

def collect(paths):
    files = []
    for p in paths:
        if os.path.isdir(p):
            for r, _, fs in os.walk(p):
                files += [os.path.join(r, f) for f in fs if f.endswith('.c')]
        elif os.path.isfile(p):
            files.append(p)
    return sorted(files)


def default_roots():
    here = os.path.dirname(os.path.abspath(__file__))
    repo = os.path.abspath(os.path.join(here, '..', '..', '..'))
    return [os.path.join(repo, 'src', 'matched'), os.path.join(repo, 'src', 'auto')]


def read(p):
    with open(p, 'r', errors='replace') as f:
        return f.read()


def model_from(args):
    return Model('ps2', 4, args.ps2_long_bits), Model('host', 8, args.ps2_long_bits)


def run_check(args):
    global PS2, HOST
    PS2, HOST = model_from(args)
    files = collect(args.paths or default_roots())
    infos = [analyze(f, read(f)) for f in files]
    fnd = check_protos(infos, PS2) + check_calls(infos, PS2) + check_layouts(infos)
    skipped = sum(1 for fi in infos for _ in fi.notes)
    if args.baseline and os.path.exists(args.baseline):
        base = set(json.load(open(args.baseline))['keys'])
        new = [f for f in fnd if f.key() not in base]
    else:
        new = None
    if args.write_baseline:
        json.dump({'keys': sorted({f.key() for f in fnd if f.sev in ('ERROR', 'WARN')})}, open(args.write_baseline, 'w'), indent=1)
    show = [f for f in (new if new is not None else fnd) if f.sev in args.show]
    if args.json:
        print(json.dumps({'files': len(files), 'notes': skipped, 'findings': [f.to_dict() for f in show]}, indent=1))
    else:
        for f in show: print(f)
        cnt = defaultdict(int)
        for f in fnd: cnt[(f.kind, f.sev)] += 1
        print('--- %d ficheros, %d avisos de parseo' % (len(files), skipped))
        for (k, s), n in sorted(cnt.items()): print('  %-10s %-5s %d' % (k, s, n))
        if new is not None: print('  nuevos respecto a la base: %d' % len(new))
    bad = [f for f in (new if new is not None else fnd) if f.sev == 'ERROR']
    return 1 if bad else 0


def run_portdiff(args):
    files = collect(args.paths or default_roots())
    rows, tot = [], 0
    for f in files:
        r = port_diff(f, read(f))
        if r:
            tot += 1
            rows.append(r)
    for r in rows:
        tag = 'ABI' if r['abi_changed'] else ('codigo' if r['code_changed'] else 'igual')
        print('%-7s %s' % (tag, r['file']))
        for l in r['abi_changed']: print('         ' + l)
    print('--- %d ficheros, %d con condicionales PORT, %d con ABI distinta' % (len(files), tot, sum(1 for r in rows if r['abi_changed'])))
    return 1 if any(r['abi_changed'] for r in rows) and not args.allow_abi else 0


def run_manifest(args):
    files = collect(args.paths or default_roots())
    cur = {os.path.basename(f): ps2_hash(read(f)) for f in files}
    if args.write:
        json.dump(cur, open(args.write, 'w'), indent=0, sort_keys=True); print('escrito', args.write, len(cur)); return 0
    if args.check:
        old = json.load(open(args.check))
        diff = [k for k in sorted(set(old) | set(cur)) if old.get(k) != cur.get(k)]
        for k in diff: print('CAMBIA', k)
        print('--- %d ficheros, %d distintos de la huella' % (len(cur), len(diff)))
        return 1 if diff else 0
    for k, v in sorted(cur.items()): print(v, k)
    return 0


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.split('\n')[0])
    sp = ap.add_subparsers(dest='cmd', required=True)
    for n in ('check', 'port-diff', 'manifest'):
        p = sp.add_parser(n)
        p.add_argument('paths', nargs='*', help='ficheros o carpetas; por defecto src/matched y src/auto')
        p.add_argument('--ps2-long-bits', type=int, default=64)
        if n == 'check':
            p.add_argument('--show', default='ERROR,WARN', type=lambda s: set(s.split(',')), help='severidades a listar (INFO incluida si se pide)')
            p.add_argument('--json', action='store_true')
            p.add_argument('--baseline', help='json con claves aceptadas: solo falla por hallazgos nuevos')
            p.add_argument('--write-baseline')
        if n == 'port-diff':
            p.add_argument('--allow-abi', action='store_true', help='no devolver error si la ABI cambia')
        if n == 'manifest':
            p.add_argument('--write'); p.add_argument('--check')
    a = ap.parse_args(argv)
    return {'check': run_check, 'port-diff': run_portdiff, 'manifest': run_manifest}[a.cmd](a)


if __name__ == '__main__':
    sys.exit(main())
