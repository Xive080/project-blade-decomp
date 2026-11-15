#!/usr/bin/env python3
"""matching_sample.py - M0(c): la build PS2 sin PORT mantiene el matching en una muestra de ficheros.

Para N ficheros de src/matched (por defecto 20, repartidos de forma determinista) ejecuta
tools/check_c.py dentro del contenedor docker `abmatch` (el repo montado en /repo, como en
tools/README.md) y guarda el resultado. Con --port-wrap repite la prueba sobre una copia de cada
fichero a la que se anade un bloque `#ifdef PORT` (con codigo que cambiaria el binario si PORT
estuviera definido): con PORT sin definir mwccps2 debe seguir dando MATCH.

No recompila los ~1000 ficheros: solo la muestra. Sin rutas absolutas: el repo se deduce de la
ubicacion del script y el contenedor se elige con --container.
Uso: python3 port/m0/tools/matching_sample.py [--n 20] [--port-wrap] [--out FICHERO.json] [--compare BASE.json]
"""
import argparse, json, os, re, shutil, subprocess, sys

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.abspath(os.path.join(HERE, '..', '..', '..'))


def sample(files, n):
    files = sorted(files)
    if n >= len(files): return files
    return [files[i * len(files) // n] for i in range(n)]


def run(container, src_rel, addr):
    cmd = ['docker', 'exec', '-w', '/repo', container, 'python3', 'tools/check_c.py', '--addr', addr, '--src', src_rel]
    r = subprocess.run(cmd, capture_output=True, text=True)
    out = (r.stdout + r.stderr).strip()
    first = out.splitlines()[0] if out else ''
    return ('MATCH' if first == 'MATCH' else 'NO_COMPILA' if first.startswith('NO COMPILA') else
            'NO_COINCIDE' if first.startswith('NO COINCIDE') else 'ERROR'), first[:120]


WRAP = ('\n#ifdef PORT\n/* bloque de prueba: no debe verse sin PORT */\nint port_probe_never_compiled(void) { return 1; }\n'
        '#endif\n#ifndef PORT\n#else\n#error "PORT no debe estar definido en la build PS2"\n#endif\n')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--n', type=int, default=20)
    ap.add_argument('--container', default='abmatch')
    ap.add_argument('--port-wrap', action='store_true')
    ap.add_argument('--out')
    ap.add_argument('--compare', help='json previo; sale con 1 si algun fichero deja de coincidir')
    a = ap.parse_args()
    d = os.path.join(REPO, 'src', 'matched')
    names = [f for f in os.listdir(d) if re.match(r'^f_[0-9a-f]{8}\.c$', f)]
    res = {}
    tmp = os.path.join(REPO, 'build', 'm0_port_wrap')
    if a.port_wrap: os.makedirs(tmp, exist_ok=True)
    try:
        for f in sample(names, a.n):
            addr = '0x' + f[2:10]
            st, msg = run(a.container, 'src/matched/' + f, addr)
            row = {'plain': st}
            if st != 'MATCH': row['plain_msg'] = msg
            if a.port_wrap:
                w = os.path.join(tmp, f)
                with open(os.path.join(d, f), errors='replace') as fh: txt = fh.read()
                with open(w, 'w') as fh: fh.write(txt + WRAP)
                st2, msg2 = run(a.container, 'build/m0_port_wrap/' + f, addr)
                row['port_wrap'] = st2
                if st2 != 'MATCH': row['port_wrap_msg'] = msg2
            res[f] = row
            print(f, row)
    finally:
        if a.port_wrap: shutil.rmtree(tmp, ignore_errors=True)
    bad = {f: r for f, r in res.items() if r['plain'] != 'MATCH' or r.get('port_wrap', 'MATCH') != 'MATCH'}
    print('--- %d ficheros, %d sin MATCH' % (len(res), len(bad)))
    if a.out:
        with open(a.out, 'w') as fh: json.dump(res, fh, indent=1, sort_keys=True)
    if a.compare and os.path.exists(a.compare):
        old = json.load(open(a.compare))
        reg = [f for f in res if old.get(f, {}).get('plain') == 'MATCH' and res[f]['plain'] != 'MATCH']
        for f in reg: print('REGRESION', f)
        return 1 if reg else 0
    return 1 if bad else 0


if __name__ == '__main__':
    sys.exit(main())
