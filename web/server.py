#!/usr/bin/env python3
"""Panel local de AirBlade Decomp. Solo escucha en 127.0.0.1.
- Reexporta las cifras cada 60 s por su cuenta (sin caducidad mientras el servicio viva).
- Botones: actualizar ahora, lanzar matching, parar matching.
- Ejecuta SOLO comandos fijos; los únicos parámetros (n, tries) son enteros acotados.
Uso: python3 web/server.py [--port 8870]"""
import argparse, json, subprocess, threading, time, urllib.request
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
EXPORT = ROOT / "build" / "export"
LOCK = threading.Lock()
LAST = {"at": None, "ok": None, "msg": ""}


def export_now():
    with LOCK:
        r = subprocess.run(["python3", str(ROOT / "tools" / "export_stats.py")], cwd=ROOT,
                           capture_output=True, text=True, timeout=120)
        LAST.update(at=time.strftime("%Y-%m-%dT%H:%M:%S"), ok=r.returncode == 0,
                    msg=(r.stdout or r.stderr).strip().splitlines()[-1:] and (r.stdout or r.stderr).strip().splitlines()[-1])
    return LAST


def running():
    return subprocess.run(["pgrep", "-f", "tools/llm_match.py"], capture_output=True).returncode == 0


def llm_up():
    try:
        urllib.request.urlopen("http://127.0.0.1:8862/health", timeout=2)
        return True
    except Exception:  # noqa: BLE001
        return False


def read(name):
    p = EXPORT / name
    return json.loads(p.read_text()) if p.exists() else []


def state():
    return {"summary": read("summary.json"), "funcs": read("funcs.json"), "matching": running(),
            "llm": llm_up(), "export": LAST, "now": time.strftime("%Y-%m-%dT%H:%M:%S")}


def start_matching(n, tries):
    if running():
        return {"ok": False, "msg": "Ya hay un matching en marcha."}
    done = len(list((ROOT / "build" / "llm2").glob("*.json")))
    log = open(ROOT / "build" / "run_web.log", "a")
    subprocess.Popen(["python3", "tools/llm_match.py", "--elf", "SCES_502.46", "--wibo", "toolchain/wibo",
                      "--comp", "toolchain/comp", "--out", "build/llm2", "--n", str(n), "--tries", str(tries),
                      "--sort", "--min-len", "5", "--max-len", "40", "--skip", str(done)],
                     cwd=ROOT, stdout=log, stderr=log, start_new_session=True)
    return {"ok": True, "msg": f"Matching lanzado: {n} funciones desde la nº {done + 1}."}


def stop_matching():
    subprocess.run(["pkill", "-f", "tools/llm_match.py"])
    return {"ok": True, "msg": "Matching detenido."}


class H(BaseHTTPRequestHandler):
    def log_message(self, *a):
        pass

    def send(self, code, body, ctype="application/json"):
        data = body if isinstance(body, bytes) else json.dumps(body).encode()
        self.send_response(code)
        self.send_header("Content-Type", ctype); self.send_header("Content-Length", str(len(data)))
        self.send_header("Cache-Control", "no-store"); self.end_headers(); self.wfile.write(data)

    def do_GET(self):
        if self.path == "/api/state":
            return self.send(200, state())
        if self.path in ("/", "/index.html"):
            return self.send(200, (ROOT / "web" / "index.html").read_bytes(), "text/html; charset=utf-8")
        self.send(404, {"error": "no existe"})

    def do_POST(self):
        # Anti-CSRF: solo desde la propia página (cabecera propia y Host local).
        host = (self.headers.get("Host") or "").split(":")[0]
        if self.headers.get("X-Panel") != "1" or host not in ("127.0.0.1", "localhost"):
            return self.send(403, {"error": "prohibido"})
        body = {}
        try:
            body = json.loads(self.rfile.read(int(self.headers.get("Content-Length") or 0)) or b"{}")
        except Exception:  # noqa: BLE001
            pass
        if self.path == "/api/refresh":
            return self.send(200, {"ok": True, "export": export_now()})
        if self.path == "/api/match":
            n = min(max(int(body.get("n", 50)), 1), 500); t = min(max(int(body.get("tries", 6)), 1), 10)
            return self.send(200, start_matching(n, t))
        if self.path == "/api/stop":
            return self.send(200, stop_matching())
        self.send(404, {"error": "no existe"})


def loop():
    while True:
        try:
            export_now()
        except Exception as e:  # noqa: BLE001
            LAST.update(ok=False, msg=str(e))
        time.sleep(60)


if __name__ == "__main__":
    ap = argparse.ArgumentParser(); ap.add_argument("--port", type=int, default=8870)
    a = ap.parse_args()
    threading.Thread(target=loop, daemon=True).start()
    ThreadingHTTPServer(("127.0.0.1", a.port), H).serve_forever()
