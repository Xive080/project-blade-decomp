// plat_vfs.cpp - VFS/CD nativo (carpeta extraida o ISO 9660). Diseno propio.
#include "plat_vfs.h"

#include <algorithm>
#include <cctype>
#include <cstdarg>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <string>
#include <vector>

namespace fs = std::filesystem;

namespace {

struct IsoEntry {
    std::string name; // sin ;N, tal cual en el disco
    uint32_t lsn = 0;
    uint32_t size = 0;
    bool is_dir = false;
};

std::string upper(std::string s) {
    for (auto &c : s) c = (char)std::toupper((unsigned char)c);
    return s;
}

std::string strip_version(const std::string &n) {
    size_t p = n.rfind(';');
    std::string r = (p == std::string::npos) ? n : n.substr(0, p);
    if (r.size() > 1 && r.back() == '.') r.pop_back();
    return r;
}

uint32_t rd32le(const uint8_t *p) { return p[0] | (p[1] << 8) | (p[2] << 16) | ((uint32_t)p[3] << 24); }

} // namespace

struct plat_vfs {
    bool iso = false;
    fs::path root;           // carpeta
    std::ifstream iso_stream; // ISO
    uint32_t sector_size = 2048;
    uint32_t data_off = 0;   // inicio de los 2048 bytes de usuario dentro del sector crudo
    uint32_t root_lsn = 0, root_size = 0;
    uint64_t total_sectors = 0;
    bool trace_on = true;
    uint64_t seq = 0;
    std::vector<plat_vfs_trace_entry> trace;

    void log(plat_vfs_trace_op op, const std::string &path, int64_t off, int64_t len) {
        if (!trace_on) return;
        plat_vfs_trace_entry e{};
        e.seq = seq++;
        e.op = op;
        std::snprintf(e.path, sizeof e.path, "%s", path.c_str());
        e.offset = off;
        e.length = len;
        trace.push_back(e);
    }

    // Lee 'len' bytes de usuario empezando en (lsn, byte_off) logicos. Devuelve bytes leidos.
    int64_t iso_read(uint64_t lsn, uint64_t byte_off, void *dst, size_t len) {
        uint8_t *out = (uint8_t *)dst;
        size_t done = 0;
        lsn += byte_off / 2048u;
        byte_off %= 2048u;
        while (done < len) {
            size_t chunk = std::min<size_t>(len - done, 2048u - (size_t)byte_off);
            uint64_t pos = lsn * sector_size + data_off + byte_off;
            iso_stream.clear();
            iso_stream.seekg((std::streamoff)pos);
            iso_stream.read((char *)out + done, (std::streamsize)chunk);
            size_t got = (size_t)iso_stream.gcount();
            done += got;
            if (got < chunk) break;
            lsn++;
            byte_off = 0;
        }
        return (int64_t)done;
    }

    bool iso_list(uint32_t lsn, uint32_t size, std::vector<IsoEntry> &out) {
        std::vector<uint8_t> buf(size);
        if (size == 0 || iso_read(lsn, 0, buf.data(), size) != (int64_t)size) return false;
        size_t pos = 0;
        while (pos < size) {
            uint8_t len = buf[pos];
            if (len == 0) { pos = (pos / 2048 + 1) * 2048; continue; } // relleno a fin de sector
            if (pos + len > size || len < 34) return false;
            const uint8_t *r = &buf[pos];
            uint8_t nl = r[32];
            if (33u + nl > len) return false;
            IsoEntry e;
            e.lsn = rd32le(r + 2);
            e.size = rd32le(r + 10);
            e.is_dir = (r[25] & 2) != 0;
            if (!(nl == 1 && (r[33] == 0 || r[33] == 1))) { // saltar "." y ".."
                e.name = strip_version(std::string((const char *)r + 33, nl));
                out.push_back(e);
            }
            pos += len;
        }
        return true;
    }

    bool iso_find(const std::string &norm, IsoEntry &found) {
        uint32_t lsn = root_lsn, size = root_size;
        size_t start = 0;
        IsoEntry cur;
        cur.is_dir = true;
        cur.lsn = lsn;
        cur.size = size;
        while (start <= norm.size()) {
            size_t end = norm.find('/', start);
            std::string comp = norm.substr(start, end == std::string::npos ? std::string::npos : end - start);
            if (!cur.is_dir) return false;
            std::vector<IsoEntry> list;
            if (!iso_list(cur.lsn, cur.size, list)) return false;
            bool ok = false;
            for (auto &e : list)
                if (upper(e.name) == comp) { cur = e; ok = true; break; }
            if (!ok) return false;
            if (end == std::string::npos) break;
            start = end + 1;
        }
        found = cur;
        return true;
    }

    // Resuelve una ruta normalizada a un fichero del host (insensible a mayusculas y a ;N).
    bool dir_find(const std::string &norm, fs::path &out) {
        fs::path cur = root;
        size_t start = 0;
        std::error_code ec;
        while (start <= norm.size()) {
            size_t end = norm.find('/', start);
            std::string comp = norm.substr(start, end == std::string::npos ? std::string::npos : end - start);
            bool ok = false;
            fs::path exact = cur / comp;
            if (fs::exists(exact, ec)) { cur = exact; ok = true; }
            else {
                for (auto &d : fs::directory_iterator(cur, ec)) {
                    if (upper(strip_version(d.path().filename().string())) == comp) { cur = d.path(); ok = true; break; }
                }
            }
            if (!ok) return false;
            if (end == std::string::npos) break;
            start = end + 1;
        }
        out = cur;
        return true;
    }
};

struct plat_vfs_file {
    plat_vfs *vfs = nullptr;
    std::string path;
    int64_t pos = 0;
    int64_t size = 0;
    uint32_t lsn = PLAT_VFS_NO_LSN;
    std::ifstream host;
};

extern "C" {

plat_vfs *plat_vfs_open_dir(const char *root) {
    if (!root) return nullptr;
    std::error_code ec;
    if (!fs::is_directory(root, ec)) return nullptr;
    auto *v = new plat_vfs;
    v->root = root;
    return v;
}

plat_vfs *plat_vfs_open_iso(const char *iso_path) {
    if (!iso_path) return nullptr;
    auto *v = new plat_vfs;
    v->iso = true;
    v->iso_stream.open(iso_path, std::ios::binary);
    if (!v->iso_stream) { delete v; return nullptr; }
    v->iso_stream.seekg(0, std::ios::end);
    uint64_t total = (uint64_t)v->iso_stream.tellg();
    // Formatos: 2048 (cooked), 2352 modo 1 (datos a +16), 2352 modo 2 form 1 (datos a +24).
    static const uint32_t ss[3] = {2048, 2352, 2352}, off[3] = {0, 16, 24};
    uint8_t pvd[2048];
    bool ok = false;
    for (int i = 0; i < 3 && !ok; i++) {
        v->sector_size = ss[i];
        v->data_off = off[i];
        if (v->iso_read(16, 0, pvd, sizeof pvd) == (int64_t)sizeof pvd && pvd[0] == 1 && std::memcmp(pvd + 1, "CD001", 5) == 0)
            ok = true;
    }
    if (!ok) { delete v; return nullptr; }
    v->total_sectors = total / v->sector_size;
    v->root_lsn = rd32le(pvd + 156 + 2);
    v->root_size = rd32le(pvd + 156 + 10);
    return v;
}

plat_vfs *plat_vfs_open_auto(const char *path) {
    if (!path) return nullptr;
    std::error_code ec;
    return fs::is_directory(path, ec) ? plat_vfs_open_dir(path) : plat_vfs_open_iso(path);
}

void plat_vfs_close(plat_vfs *v) { delete v; }
int plat_vfs_is_iso(const plat_vfs *v) { return v && v->iso; }

int plat_vfs_normalize(const char *g, char *out, size_t n) {
    if (!g || !out || n == 0) return -1;
    std::string s(g);
    for (auto &c : s) if (c == '\\') c = '/';
    size_t colon = s.find(':');
    if (colon != std::string::npos) {
        std::string dev = upper(s.substr(0, colon));
        if (dev != "CDROM0" && dev != "CDROM") return -1;
        s = s.substr(colon + 1);
    }
    std::string res;
    size_t i = 0;
    while (i <= s.size()) {
        size_t j = s.find('/', i);
        std::string c = s.substr(i, j == std::string::npos ? std::string::npos : j - i);
        i = (j == std::string::npos) ? s.size() + 1 : j + 1;
        size_t sc = c.find(';');
        if (sc != std::string::npos) c.resize(sc);
        if (c.empty() || c == ".") continue;
        if (c == "..") return -1;
        if (c.find(':') != std::string::npos) return -1;
        if (!res.empty()) res += '/';
        res += upper(c);
    }
    if (res.empty() || res.size() + 1 > n) return -1;
    std::memcpy(out, res.c_str(), res.size() + 1);
    return 0;
}

plat_vfs_file *plat_vfs_open(plat_vfs *v, const char *guest) {
    if (!v) return nullptr;
    char norm[256];
    if (plat_vfs_normalize(guest, norm, sizeof norm) != 0) {
        v->log(PLAT_VFS_OP_OPEN_FAIL, guest ? guest : "", 0, 0);
        return nullptr;
    }
    auto f = new plat_vfs_file;
    f->vfs = v;
    f->path = norm;
    bool ok = false;
    if (v->iso) {
        IsoEntry e;
        if (v->iso_find(norm, e) && !e.is_dir) { f->size = e.size; f->lsn = e.lsn; ok = true; }
    } else {
        fs::path p;
        std::error_code ec;
        if (v->dir_find(norm, p) && fs::is_regular_file(p, ec)) {
            f->host.open(p, std::ios::binary);
            if (f->host) { f->size = (int64_t)fs::file_size(p, ec); ok = true; }
        }
    }
    if (!ok) { v->log(PLAT_VFS_OP_OPEN_FAIL, norm, 0, 0); delete f; return nullptr; }
    v->log(PLAT_VFS_OP_OPEN, norm, 0, f->size);
    return f;
}

void plat_vfs_file_close(plat_vfs_file *f) {
    if (!f) return;
    f->vfs->log(PLAT_VFS_OP_CLOSE, f->path, 0, 0);
    delete f;
}

static int64_t raw_read(plat_vfs_file *f, int64_t pos, void *dst, size_t size) {
    if (pos >= f->size) return 0;
    size_t n = (size_t)std::min<int64_t>((int64_t)size, f->size - pos);
    if (f->vfs->iso) return f->vfs->iso_read(f->lsn, (uint64_t)pos, dst, n);
    f->host.clear();
    f->host.seekg((std::streamoff)pos);
    f->host.read((char *)dst, (std::streamsize)n);
    return (int64_t)f->host.gcount();
}

int64_t plat_vfs_read(plat_vfs_file *f, void *dst, size_t size) {
    if (!f || (!dst && size)) return -1;
    int64_t at = f->pos;
    int64_t got = raw_read(f, at, dst, size);
    if (got < 0) return -1;
    f->pos += got;
    f->vfs->log(PLAT_VFS_OP_READ, f->path, at, got);
    return got;
}

int64_t plat_vfs_seek(plat_vfs_file *f, int64_t off, int whence) {
    if (!f) return -1;
    int64_t base = whence == 1 ? f->pos : whence == 2 ? f->size : whence == 0 ? 0 : -1;
    if (base < 0) return -1;
    int64_t p = base + off;
    if (p < 0 || p > f->size) return -1;
    f->pos = p;
    return p;
}
int64_t plat_vfs_tell(const plat_vfs_file *f) { return f ? f->pos : -1; }
int64_t plat_vfs_size(const plat_vfs_file *f) { return f ? f->size : -1; }
uint32_t plat_vfs_file_lsn(const plat_vfs_file *f) { return f ? f->lsn : PLAT_VFS_NO_LSN; }

int plat_vfs_read_sectors(plat_vfs_file *f, uint32_t first, uint32_t count, void *dst) {
    if (!f || (!dst && count)) return -1;
    uint8_t *out = (uint8_t *)dst;
    std::memset(out, 0, (size_t)count * PLAT_VFS_SECTOR);
    int delivered = 0;
    for (uint32_t i = 0; i < count; i++) {
        int64_t pos = (int64_t)(first + i) * PLAT_VFS_SECTOR;
        if (pos >= f->size) break;
        if (raw_read(f, pos, out + (size_t)i * PLAT_VFS_SECTOR, PLAT_VFS_SECTOR) < 0) return -1;
        delivered++;
    }
    f->vfs->log(PLAT_VFS_OP_READSEC, f->path, first, count);
    return delivered;
}

int plat_vfs_stat(plat_vfs *v, const char *guest, int64_t *size, uint32_t *lsn) {
    if (!v) return -1;
    char norm[256];
    if (plat_vfs_normalize(guest, norm, sizeof norm) != 0) return -1;
    if (v->iso) {
        IsoEntry e;
        if (!v->iso_find(norm, e) || e.is_dir) return -1;
        if (size) *size = e.size;
        if (lsn) *lsn = e.lsn;
        return 0;
    }
    fs::path p;
    std::error_code ec;
    if (!v->dir_find(norm, p) || !fs::is_regular_file(p, ec)) return -1;
    if (size) *size = (int64_t)fs::file_size(p, ec);
    if (lsn) *lsn = PLAT_VFS_NO_LSN;
    return 0;
}

int plat_vfs_read_lsn(plat_vfs *v, uint32_t lsn, uint32_t count, void *dst) {
    if (!v || !v->iso || (!dst && count)) return -1;
    if ((uint64_t)lsn + count > v->total_sectors) return -1;
    return v->iso_read(lsn, 0, dst, (size_t)count * 2048u) == (int64_t)count * 2048 ? (int)count : -1;
}

namespace {
struct WalkCtx { plat_vfs_walk_cb cb; void *user; int stop; };

void iso_walk(plat_vfs *v, uint32_t lsn, uint32_t size, const std::string &prefix, WalkCtx &w) {
    std::vector<IsoEntry> list;
    if (!v->iso_list(lsn, size, list)) return;
    std::sort(list.begin(), list.end(), [](const IsoEntry &a, const IsoEntry &b) { return upper(a.name) < upper(b.name); });
    for (auto &e : list) {
        if (w.stop) return;
        std::string p = prefix.empty() ? upper(e.name) : prefix + "/" + upper(e.name);
        if (e.is_dir) iso_walk(v, e.lsn, e.size, p, w);
        else if (w.cb(w.user, p.c_str(), e.size, e.lsn)) w.stop = 1;
    }
}

void dir_walk(const fs::path &dir, const std::string &prefix, WalkCtx &w) {
    std::error_code ec;
    std::vector<std::pair<std::string, fs::path>> items;
    for (auto &d : fs::directory_iterator(dir, ec))
        items.emplace_back(upper(strip_version(d.path().filename().string())), d.path());
    std::sort(items.begin(), items.end());
    for (auto &it : items) {
        if (w.stop) return;
        std::string p = prefix.empty() ? it.first : prefix + "/" + it.first;
        if (fs::is_directory(it.second, ec)) dir_walk(it.second, p, w);
        else if (w.cb(w.user, p.c_str(), (int64_t)fs::file_size(it.second, ec), PLAT_VFS_NO_LSN)) w.stop = 1;
    }
}
} // namespace

int plat_vfs_walk(plat_vfs *v, plat_vfs_walk_cb cb, void *user) {
    if (!v || !cb) return -1;
    WalkCtx w{cb, user, 0};
    if (v->iso) iso_walk(v, v->root_lsn, v->root_size, "", w);
    else dir_walk(v->root, "", w);
    return 0;
}

int plat_vfs_lsn_to_path(plat_vfs *v, uint32_t lsn, char *path, size_t n, uint32_t *sec) {
    if (!v || !v->iso || !path || n == 0) return -1;
    struct Q { uint32_t lsn; char *path; size_t n; uint32_t *sec; int found; } q{lsn, path, n, sec, 0};
    plat_vfs_walk(v, [](void *u, const char *p, int64_t size, uint32_t l) -> int {
        Q *q = (Q *)u;
        uint32_t sectors = (uint32_t)((size + 2047) / 2048);
        if (q->lsn >= l && q->lsn < l + (sectors ? sectors : 1)) {
            std::snprintf(q->path, q->n, "%s", p);
            if (q->sec) *q->sec = q->lsn - l;
            q->found = 1;
            return 1;
        }
        return 0;
    }, &q);
    return q.found ? 0 : -1;
}

void plat_vfs_trace_enable(plat_vfs *v, int on) { if (v) v->trace_on = on != 0; }
void plat_vfs_trace_clear(plat_vfs *v) { if (v) { v->trace.clear(); v->seq = 0; } }
size_t plat_vfs_trace_count(const plat_vfs *v) { return v ? v->trace.size() : 0; }
int plat_vfs_trace_get(const plat_vfs *v, size_t i, plat_vfs_trace_entry *out) {
    if (!v || !out || i >= v->trace.size()) return -1;
    *out = v->trace[i];
    return 0;
}

static const char *op_name(plat_vfs_trace_op op) {
    switch (op) {
    case PLAT_VFS_OP_OPEN: return "OPEN";
    case PLAT_VFS_OP_OPEN_FAIL: return "OPEN_FAIL";
    case PLAT_VFS_OP_READ: return "READ";
    case PLAT_VFS_OP_READSEC: return "READSEC";
    case PLAT_VFS_OP_CLOSE: return "CLOSE";
    }
    return "?";
}

void plat_vfs_trace_write(const plat_vfs *v, FILE *out) {
    if (!v || !out) return;
    for (auto &e : v->trace)
        std::fprintf(out, "%llu %s %s %lld %lld\n", (unsigned long long)e.seq, op_name(e.op),
                     e.path[0] ? e.path : "-", (long long)e.offset, (long long)e.length);
}

static bool next_line(FILE *f, std::string &s) {
    s.clear();
    int c;
    bool any = false;
    while ((c = std::fgetc(f)) != EOF) {
        any = true;
        if (c == '\n') return true;
        if (c != '\r') s += (char)c;
    }
    return any;
}

// Quita el numero de secuencia (primer campo) y, si opens_only, filtra.
static bool pick(FILE *f, int opens_only, std::string &out, long &lineno) {
    std::string s;
    while (next_line(f, s)) {
        lineno++;
        size_t sp = s.find(' ');
        if (sp == std::string::npos) continue;
        std::string rest = s.substr(sp + 1);
        if (opens_only) {
            if (rest.compare(0, 5, "OPEN ") != 0) continue;
            size_t second = rest.find(' ', 5);
            rest = rest.substr(0, second); // solo "OPEN RUTA"
        }
        out = rest;
        return true;
    }
    return false;
}

long plat_vfs_trace_diff(FILE *a, FILE *b, int opens_only, char *msg, size_t msg_size) {
    if (!a || !b) return -1;
    std::string la, lb;
    long na = 0, nb = 0, idx = 0;
    for (;;) {
        bool ha = pick(a, opens_only, la, na), hb = pick(b, opens_only, lb, nb);
        idx++;
        if (!ha && !hb) { if (msg && msg_size) std::snprintf(msg, msg_size, "iguales (%ld eventos)", idx - 1); return 0; }
        if (ha != hb || la != lb) {
            if (msg && msg_size)
                std::snprintf(msg, msg_size, "evento %ld: A='%s' B='%s'", idx, ha ? la.c_str() : "<fin>", hb ? lb.c_str() : "<fin>");
            return idx;
        }
    }
}

} // extern "C"
