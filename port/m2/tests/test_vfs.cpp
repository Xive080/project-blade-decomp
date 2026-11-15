#include "check.h"
#include "plat_vfs.h"

#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <map>
#include <string>
#include <vector>

namespace fs = std::filesystem;

// ---------- Generador de ISO 9660 sintetico (propio del test) ----------
struct Node { std::string name; bool dir; std::vector<uint8_t> data; std::vector<Node> kids; uint32_t lsn = 0, size = 0; };

static void put32(uint8_t *p, uint32_t v) { for (int i = 0; i < 4; i++) { p[i] = (v >> (8 * i)) & 255; p[4 + i] = (v >> (24 - 8 * i)) & 255; } }

static std::vector<uint8_t> pattern(size_t n, uint8_t seed) { std::vector<uint8_t> v(n); for (size_t i = 0; i < n; i++) v[i] = (uint8_t)(seed + i * 7 + (i >> 8)); return v; }

static void rec(std::vector<uint8_t> &out, const std::string &nm, uint32_t lsn, uint32_t size, bool dir, bool special = false, uint8_t sp = 0) {
    std::string name = special ? std::string(1, (char)sp) : (dir ? nm : nm + ";1");
    size_t len = 33 + name.size();
    if (len & 1) len++;
    std::vector<uint8_t> r(len, 0);
    r[0] = (uint8_t)len;
    put32(&r[2], lsn);
    put32(&r[10], size);
    r[25] = dir ? 2 : 0;
    r[32] = (uint8_t)name.size();
    std::memcpy(&r[33], name.data(), name.size());
    out.insert(out.end(), r.begin(), r.end());
}

struct IsoBuilder {
    std::vector<std::vector<uint8_t>> sectors; // 2048 cada uno
    uint32_t alloc(uint32_t n) { uint32_t s = (uint32_t)sectors.size(); sectors.resize(s + n, std::vector<uint8_t>(2048, 0)); return s; }

    void layout(Node &d) { // asigna extents: primero ficheros, luego dirs
        // tamano del directorio: . .. + hijos, con salto de sector si no cabe
        std::vector<uint8_t> tmp;
        rec(tmp, "", 0, 0, true, true, 0); rec(tmp, "", 0, 0, true, true, 1);
        for (auto &k : d.kids) rec(tmp, k.name, 0, 0, k.dir);
        d.size = (uint32_t)((tmp.size() + 2047) / 2048 * 2048);
        d.lsn = alloc(d.size / 2048);
        for (auto &k : d.kids) {
            if (k.dir) layout(k);
            else { k.size = (uint32_t)k.data.size(); k.lsn = alloc(std::max<uint32_t>(1, (k.size + 2047) / 2048)); for (size_t i = 0; i < k.size; i++) sectors[k.lsn + i / 2048][i % 2048] = k.data[i]; }
        }
    }
    void write_dir(Node &d, uint32_t parent_lsn, uint32_t parent_size) {
        std::vector<uint8_t> buf;
        rec(buf, "", d.lsn, d.size, true, true, 0);
        rec(buf, "", parent_lsn, parent_size, true, true, 1);
        for (auto &k : d.kids) rec(buf, k.name, k.lsn, k.size, k.dir);
        for (size_t i = 0; i < buf.size(); i++) sectors[d.lsn + i / 2048][i % 2048] = buf[i];
        for (auto &k : d.kids) if (k.dir) write_dir(k, d.lsn, d.size);
    }
};

// Escribe en 2048, 2352 (modo 1) o 2352 (modo 2 form 1).
static void build_iso(const std::string &path, Node root, int fmt) {
    IsoBuilder b;
    b.alloc(16);                    // sectores 0..15 sistema
    uint32_t pvd = b.alloc(1);      // 16
    uint32_t term = b.alloc(1);     // 17
    b.alloc(2);
    b.layout(root);
    b.write_dir(root, root.lsn, root.size);
    auto &P = b.sectors[pvd];
    P[0] = 1; std::memcpy(&P[1], "CD001", 5); P[6] = 1;
    put32(&P[80], (uint32_t)b.sectors.size());
    std::vector<uint8_t> rr; rec(rr, "", root.lsn, root.size, true, true, 0);
    std::memcpy(&P[156], rr.data(), rr.size());
    auto &T = b.sectors[term]; T[0] = 255; std::memcpy(&T[1], "CD001", 5); T[6] = 1;
    std::ofstream f(path, std::ios::binary);
    for (auto &s : b.sectors) {
        if (fmt == 0) f.write((const char *)s.data(), 2048);
        else {
            std::vector<uint8_t> raw(2352, 0);
            size_t off = fmt == 1 ? 16 : 24;
            std::memset(&raw[1], 0xFF, 10);
            std::memcpy(&raw[off], s.data(), 2048);
            f.write((const char *)raw.data(), 2352);
        }
    }
}

static Node file(const char *n, std::vector<uint8_t> d) { Node x; x.name = n; x.dir = false; x.data = std::move(d); return x; }
static Node dir(const char *n, std::vector<Node> k) { Node x; x.name = n; x.dir = true; x.kids = std::move(k); return x; }

static Node make_tree() {
    return dir("", {file("SYSTEM.CNF", pattern(60, 1)),
                    file("SLES_502.46", pattern(100000, 2)),
                    dir("DATA", {file("MODEL.BIN", pattern(5000, 3)), file("EMPTY.BIN", {}),
                                 dir("SUB", {file("A.TXT", pattern(2048, 4))})})});
}
static void write_tree(const fs::path &base, const Node &n, bool version_suffix) {
    for (auto &k : n.kids) {
        if (k.dir) { fs::create_directories(base / k.name); write_tree(base / k.name, k, version_suffix); }
        else { std::ofstream f(base / (std::string(version_suffix ? "" : "") + k.name), std::ios::binary); f.write((const char *)k.data.data(), (std::streamsize)k.data.size()); }
    }
}

struct Seen { std::map<std::string, std::pair<int64_t, uint32_t>> m; };

int main() {
    fs::path tmp = fs::temp_directory_path() / "plat_m2_vfs_test";
    fs::remove_all(tmp);
    fs::create_directories(tmp);
    Node tree = make_tree();
    // Carpeta con minusculas y sufijo ;1 en un fichero para probar la tolerancia de nombres.
    fs::path folder = tmp / "folder";
    fs::create_directories(folder);
    write_tree(folder, tree, false);
    fs::rename(folder / "system.cnf", folder / "system.cnf"); // no-op
    { std::error_code ec; fs::rename(folder / "SYSTEM.CNF", folder / "system.cnf;1", ec); }
    build_iso((tmp / "d2048.iso").string(), tree, 0);
    build_iso((tmp / "raw1.iso").string(), tree, 1);
    build_iso((tmp / "raw2.iso").string(), tree, 2);

    // Normalizacion.
    char n[256];
    CHECK(plat_vfs_normalize("cdrom0:\\DATA\\MODEL.BIN;1", n, sizeof n) == 0 && !std::strcmp(n, "DATA/MODEL.BIN"));
    CHECK(plat_vfs_normalize("CDROM0:/data//./model.bin", n, sizeof n) == 0 && !std::strcmp(n, "DATA/MODEL.BIN"));
    CHECK(plat_vfs_normalize("\\SLES_502.46;1", n, sizeof n) == 0 && !std::strcmp(n, "SLES_502.46"));
    CHECK(plat_vfs_normalize("cdrom:SYSTEM.CNF", n, sizeof n) == 0 && !std::strcmp(n, "SYSTEM.CNF"));
    CHECK(plat_vfs_normalize("cdrom0:\\..\\x", n, sizeof n) == -1);
    CHECK(plat_vfs_normalize("host:foo", n, sizeof n) == -1);
    CHECK(plat_vfs_normalize("mc0:save", n, sizeof n) == -1);
    CHECK(plat_vfs_normalize("cdrom0:", n, sizeof n) == -1);
    CHECK(plat_vfs_normalize("", n, sizeof n) == -1);
    CHECK(plat_vfs_normalize("a/b", n, 3) == -1);

    CHECK(plat_vfs_open_iso((tmp / "folder").string().c_str()) == nullptr);
    CHECK(plat_vfs_open_dir((tmp / "nope").string().c_str()) == nullptr);
    { std::ofstream f(tmp / "basura.iso", std::ios::binary); std::string z(40000, 'x'); f << z; }
    CHECK(plat_vfs_open_auto((tmp / "basura.iso").string().c_str()) == nullptr);

    const char *srcs[4] = {"folder", "d2048.iso", "raw1.iso", "raw2.iso"};
    std::vector<std::string> traces;
    for (int si = 0; si < 4; si++) {
        std::string sp = (tmp / srcs[si]).string();
        plat_vfs *v = plat_vfs_open_auto(sp.c_str());
        CHECK(v != nullptr);
        if (!v) continue;
        CHECK(plat_vfs_is_iso(v) == (si > 0));

        // Misma secuencia en las cuatro fuentes.
        plat_vfs_file *f = plat_vfs_open(v, "cdrom0:\\SLES_502.46;1");
        CHECK(f && plat_vfs_size(f) == 100000);
        std::vector<uint8_t> buf(3000);
        CHECK(plat_vfs_read(f, buf.data(), 3000) == 3000);
        CHECK(std::memcmp(buf.data(), pattern(100000, 2).data(), 3000) == 0);
        CHECK(plat_vfs_seek(f, -10, 2) == 99990);
        CHECK(plat_vfs_read(f, buf.data(), 100) == 10);   // recorte en EOF
        CHECK(plat_vfs_read(f, buf.data(), 100) == 0);
        CHECK(plat_vfs_seek(f, 2040, 0) == 2040);
        CHECK(plat_vfs_read(f, buf.data(), 20) == 20);    // cruza frontera de sector
        CHECK(std::memcmp(buf.data(), pattern(100000, 2).data() + 2040, 20) == 0);
        CHECK(plat_vfs_seek(f, 1, 1) == 2061);
        CHECK(plat_vfs_seek(f, -1, 0) == -1 && plat_vfs_seek(f, 100001, 0) == -1 && plat_vfs_seek(f, 0, 7) == -1);
        // Sectores: 3 pedidos desde el 48 (el ultimo sector del fichero es el 48: 100000/2048 = 48.8).
        std::vector<uint8_t> sec(3 * 2048, 0xAA);
        CHECK(plat_vfs_read_sectors(f, 48, 3, sec.data()) == 1);
        CHECK(std::memcmp(sec.data(), pattern(100000, 2).data() + 48 * 2048, 100000 - 48 * 2048) == 0);
        bool zeros = true;
        for (size_t i = 100000 - 48 * 2048; i < sec.size(); i++) zeros &= sec[i] == 0;
        CHECK(zeros);
        CHECK(plat_vfs_read_sectors(f, 0, 2, sec.data()) == 2);
        if (si > 0) CHECK(plat_vfs_file_lsn(f) != PLAT_VFS_NO_LSN); else CHECK(plat_vfs_file_lsn(f) == PLAT_VFS_NO_LSN);
        plat_vfs_file_close(f);

        f = plat_vfs_open(v, "cdrom0:\\data\\sub\\a.txt;1");     // minusculas
        CHECK(f && plat_vfs_size(f) == 2048);
        plat_vfs_file_close(f);
        f = plat_vfs_open(v, "DATA/EMPTY.BIN");
        CHECK(f && plat_vfs_size(f) == 0 && plat_vfs_read(f, buf.data(), 10) == 0);
        plat_vfs_file_close(f);
        f = plat_vfs_open(v, "cdrom0:\\SYSTEM.CNF;1");           // en carpeta esta como system.cnf;1
        CHECK(f && plat_vfs_size(f) == 60);
        plat_vfs_file_close(f);
        CHECK(plat_vfs_open(v, "cdrom0:\\NOEXISTE.BIN;1") == nullptr);
        CHECK(plat_vfs_open(v, "cdrom0:\\DATA") == nullptr);     // directorio
        CHECK(plat_vfs_open(v, "cdrom0:\\..\\fuera") == nullptr);
        CHECK(plat_vfs_open(v, "host:algo") == nullptr);

        int64_t sz = 0; uint32_t lsn = 0;
        CHECK(plat_vfs_stat(v, "DATA/MODEL.BIN;1", &sz, &lsn) == 0 && sz == 5000);
        CHECK(plat_vfs_stat(v, "DATA/XX", &sz, &lsn) == -1);

        // Recorrido: mismo conjunto y orden.
        Seen seen; std::string order;
        plat_vfs_walk(v, [](void *u, const char *p, int64_t s, uint32_t l) { ((Seen *)u)->m[p] = {s, l}; return 0; }, &seen);
        for (auto &kv : seen.m) order += kv.first + ":" + std::to_string(kv.second.first) + ",";
        CHECK(order == "DATA/EMPTY.BIN:0,DATA/MODEL.BIN:5000,DATA/SUB/A.TXT:2048,SLES_502.46:100000,SYSTEM.CNF:60,");

        if (si > 0) {
            // sceCdRead por LSN absoluto + inverso.
            uint32_t l2 = seen.m["DATA/MODEL.BIN"].second;
            std::vector<uint8_t> raw(2 * 2048);
            CHECK(plat_vfs_read_lsn(v, l2, 2, raw.data()) == 2);
            CHECK(std::memcmp(raw.data(), pattern(5000, 3).data(), 4096) == 0);
            char pth[128]; uint32_t sif = 99;
            CHECK(plat_vfs_lsn_to_path(v, l2 + 1, pth, sizeof pth, &sif) == 0 && !std::strcmp(pth, "DATA/MODEL.BIN") && sif == 1);
            CHECK(plat_vfs_read_lsn(v, 0xFFFFFF, 1, raw.data()) == -1);
            CHECK(plat_vfs_lsn_to_path(v, 0xFFFFFF, pth, sizeof pth, &sif) == -1);
        } else {
            uint8_t b1[1];
            CHECK(plat_vfs_read_lsn(v, 0, 1, b1) == -1);
        }

        // Traza: orden y contenido.
        size_t cnt = plat_vfs_trace_count(v);
        CHECK(cnt > 10);
        plat_vfs_trace_entry e;
        CHECK(plat_vfs_trace_get(v, 0, &e) == 0 && e.op == PLAT_VFS_OP_OPEN && !std::strcmp(e.path, "SLES_502.46") && e.seq == 0 && e.length == 100000);
        CHECK(plat_vfs_trace_get(v, 1, &e) == 0 && e.op == PLAT_VFS_OP_READ && e.offset == 0 && e.length == 3000);
        CHECK(plat_vfs_trace_get(v, 2, &e) == 0 && e.op == PLAT_VFS_OP_READ && e.offset == 99990 && e.length == 10);
        CHECK(plat_vfs_trace_get(v, cnt, &e) == -1);
        std::string tp = (tmp / (std::string("trace") + std::to_string(si) + ".txt")).string();
        FILE *tf = std::fopen(tp.c_str(), "wb");
        plat_vfs_trace_write(v, tf);
        std::fclose(tf);
        traces.push_back(tp);

        plat_vfs_trace_enable(v, 0);
        plat_vfs_trace_clear(v);
        f = plat_vfs_open(v, "SYSTEM.CNF"); plat_vfs_file_close(f);
        CHECK(plat_vfs_trace_count(v) == 0);
        plat_vfs_close(v);
    }

    // Las trazas de las cuatro fuentes son identicas (la ruta/orden no depende del origen).
    for (int i = 1; i < 4; i++) {
        FILE *a = std::fopen(traces[0].c_str(), "rb"), *b = std::fopen(traces[i].c_str(), "rb");
        char msg[256];
        CHECK(plat_vfs_trace_diff(a, b, 0, msg, sizeof msg) == 0);
        std::fclose(a); std::fclose(b);
    }
    // Divergencia detectada.
    {
        std::string alt = (tmp / "alt.txt").string();
        { std::ofstream o(alt); o << "0 OPEN SLES_502.46 0 100000\n1 READ SLES_502.46 0 3000\n2 OPEN OTRO.BIN 0 5\n"; }
        std::string ref = (tmp / "ref.txt").string();
        { std::ofstream o(ref); o << "0 OPEN SLES_502.46 0 100000\n1 READ SLES_502.46 0 4096\n2 OPEN OTRO.BIN 0 5\n"; }
        char msg[256];
        FILE *a = std::fopen(alt.c_str(), "rb"), *b = std::fopen(ref.c_str(), "rb");
        CHECK(plat_vfs_trace_diff(a, b, 0, msg, sizeof msg) == 2);
        std::fclose(a); std::fclose(b);
        a = std::fopen(alt.c_str(), "rb"); b = std::fopen(ref.c_str(), "rb");
        CHECK(plat_vfs_trace_diff(a, b, 1, msg, sizeof msg) == 0); // solo aperturas: iguales
        std::fclose(a); std::fclose(b);
        { std::ofstream o(ref); o << "0 OPEN SLES_502.46 0 1\n1 OPEN AAA 0 0\n"; }
        a = std::fopen(alt.c_str(), "rb"); b = std::fopen(ref.c_str(), "rb");
        CHECK(plat_vfs_trace_diff(a, b, 1, msg, sizeof msg) == 2);
        std::fclose(a); std::fclose(b);
    }
    fs::remove_all(tmp);
    DONE("vfs");
}
