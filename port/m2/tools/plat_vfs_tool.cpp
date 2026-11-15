// plat_vfs_tool - utilidad de linea de comandos del VFS (inspeccion y traza).
//   plat_vfs_tool ls <iso|carpeta>
//   plat_vfs_tool open <iso|carpeta> <ruta-del-juego>...     (abre cada ruta, imprime la traza)
//   plat_vfs_tool replay <iso|carpeta> <traza.txt>           (reabre en orden los OPEN de una traza)
//   plat_vfs_tool log-to-trace <run.log>                     (extrae path="cdrom0:..." de un log de la recomp a traza de OPEN)
//   plat_vfs_tool trace-diff <a.txt> <b.txt> [--opens]       (compara dos trazas)
#include "plat_vfs.h"

#include <cstdio>
#include <cstring>
#include <string>

static int usage() {
    std::fprintf(stderr, "uso: plat_vfs_tool ls|open|replay|trace-diff ...\n");
    return 2;
}

int main(int argc, char **argv) {
    if (argc < 3) return usage();
    std::string cmd = argv[1];
    if (cmd == "log-to-trace") {
        FILE *l = std::fopen(argv[2], "rb");
        if (!l) { std::fprintf(stderr, "no se puede abrir el log\n"); return 2; }
        char line[2048];
        unsigned long long seq = 0;
        while (std::fgets(line, sizeof line, l)) {
            const char *q = std::strstr(line, "path=\"");
            if (!q) continue;
            q += 6;
            const char *e = std::strchr(q, '"');
            if (!e) continue;
            std::string raw(q, (size_t)(e - q)), norm;
            char out[256];
            if (plat_vfs_normalize(raw.c_str(), out, sizeof out) != 0) continue; // otros dispositivos: se ignoran
            std::printf("%llu OPEN %s 0 0\n", seq++, out);
        }
        std::fclose(l);
        return 0;
    }
    if (cmd == "trace-diff") {
        if (argc < 4) return usage();
        FILE *a = std::fopen(argv[2], "rb"), *b = std::fopen(argv[3], "rb");
        if (!a || !b) { std::fprintf(stderr, "no se pueden abrir las trazas\n"); return 2; }
        char msg[512];
        long r = plat_vfs_trace_diff(a, b, argc > 4 && !std::strcmp(argv[4], "--opens"), msg, sizeof msg);
        std::printf("%s\n", msg);
        return r == 0 ? 0 : 1;
    }
    plat_vfs *v = plat_vfs_open_auto(argv[2]);
    if (!v) { std::fprintf(stderr, "no se puede abrir '%s' (ni carpeta ni ISO 9660)\n", argv[2]); return 2; }
    int rc = 0;
    if (cmd == "ls") {
        plat_vfs_walk(v, [](void *, const char *p, int64_t s, uint32_t l) {
            if (l == PLAT_VFS_NO_LSN) std::printf("%12lld  %s\n", (long long)s, p);
            else std::printf("%12lld  lsn=%-8u  %s\n", (long long)s, l, p);
            return 0;
        }, nullptr);
    } else if (cmd == "open") {
        for (int i = 3; i < argc; i++) {
            plat_vfs_file *f = plat_vfs_open(v, argv[i]);
            if (!f) { rc = 1; continue; }
            char buf[4096];
            while (plat_vfs_read(f, buf, sizeof buf) > 0) {}
            plat_vfs_file_close(f);
        }
        plat_vfs_trace_write(v, stdout);
    } else if (cmd == "replay") {
        if (argc < 4) return usage();
        FILE *t = std::fopen(argv[3], "rb");
        if (!t) { std::fprintf(stderr, "no se puede abrir la traza\n"); return 2; }
        char line[512];
        int missing = 0, opened = 0;
        while (std::fgets(line, sizeof line, t)) {
            unsigned long long seq; char op[32], path[300];
            if (std::sscanf(line, "%llu %31s %299s", &seq, op, path) != 3 || std::strcmp(op, "OPEN")) continue;
            plat_vfs_file *f = plat_vfs_open(v, path);
            if (f) { opened++; plat_vfs_file_close(f); } else { missing++; std::printf("falta: %s\n", path); }
        }
        std::fclose(t);
        std::printf("abiertos=%d faltan=%d\n", opened, missing);
        rc = missing ? 1 : 0;
    } else rc = usage();
    plat_vfs_close(v);
    return rc;
}
