// Tarjeta de memoria nativa. Diseno propio; el comportamiento observable sigue a la recomp
// (ver docs/port/M5.md, seccion de compatibilidad).
#include "plat_memcard.h"

#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <filesystem>
#include <map>
#include <mutex>
#include <string>
#include <vector>

namespace fs = std::filesystem;

static_assert(sizeof(plat_mc_datetime) == 8, "sceMcStDateTime");
static_assert(sizeof(plat_mc_dirent) == 64, "sceMcTblGetDir");

namespace {

constexpr size_t kMaxPath = 1024;
constexpr size_t kMaxOpen = 32;

std::string lower(std::string s) {
    for (char &c : s) if (c >= 'A' && c <= 'Z') c = char(c - 'A' + 'a');
    return s;
}

struct OpenFile { FILE *fp; int port; };
struct Port { std::string cwd = "/"; bool formatted = true; fs::path root; };

std::vector<std::string> split(const std::string &s) {
    std::vector<std::string> out; std::string cur;
    for (char c : s) {
        if (c == '/' || c == '\\') { if (!cur.empty()) out.push_back(cur); cur.clear(); }
        else cur.push_back(c);
    }
    if (!cur.empty()) out.push_back(cur);
    return out;
}

bool wildcard(const std::string &p, const std::string &v) {
    size_t pi = 0, vi = 0, star = std::string::npos, mark = 0;
    while (vi < v.size()) {
        if (pi < p.size() && (p[pi] == '?' || p[pi] == v[vi])) { ++pi; ++vi; }
        else if (pi < p.size() && p[pi] == '*') { star = pi++; mark = vi; }
        else if (star != std::string::npos) { pi = star + 1; vi = ++mark; }
        else return false;
    }
    while (pi < p.size() && p[pi] == '*') ++pi;
    return pi == p.size();
}

void fill_time(plat_mc_datetime &o, std::time_t t) {
    std::tm tm{};
#ifdef _WIN32
    if (localtime_s(&tm, &t) != 0) { std::memset(&o, 0, sizeof o); return; }
#else
    if (!localtime_r(&t, &tm)) { std::memset(&o, 0, sizeof o); return; }
#endif
    o.resv2 = 0; o.sec = uint8_t(tm.tm_sec); o.min = uint8_t(tm.tm_min); o.hour = uint8_t(tm.tm_hour);
    o.day = uint8_t(tm.tm_mday); o.month = uint8_t(tm.tm_mon + 1); o.year = uint16_t(tm.tm_year + 1900);
}

std::time_t to_time_t(fs::file_time_type ft) {
    auto s = std::chrono::time_point_cast<std::chrono::system_clock::duration>(
        ft - fs::file_time_type::clock::now() + std::chrono::system_clock::now());
    return std::chrono::system_clock::to_time_t(s);
}

void fill_entry(plat_mc_dirent &e, const std::string &name, bool dir, uint32_t size, std::time_t t) {
    std::memset(&e, 0, sizeof e);
    fill_time(e.create, t); fill_time(e.modify, t);
    e.file_size = dir ? 0u : size;
    e.attr = uint16_t(PLAT_MC_ATTR_READABLE | PLAT_MC_ATTR_WRITEABLE |
                      (dir ? PLAT_MC_ATTR_SUBDIR : PLAT_MC_ATTR_FILE) | PLAT_MC_ATTR_CLOSED | PLAT_MC_ATTR_EXISTS);
    std::strncpy(e.name, name.c_str(), sizeof e.name - 1);
}

FILE *open_host(const fs::path &p, unsigned flags) {
    const unsigned acc = flags & PLAT_MC_O_RDWR;
    const bool rd = acc == PLAT_MC_O_RDONLY || acc == PLAT_MC_O_RDWR;
    const bool wr = acc == PLAT_MC_O_WRONLY || acc == PLAT_MC_O_RDWR;
    const bool app = flags & PLAT_MC_O_APPEND, cre = flags & PLAT_MC_O_CREAT, trn = flags & PLAT_MC_O_TRUNC;
    std::error_code ec;
    const bool ex = fs::exists(p, ec) && !ec;
    const char *mode = "rb";
    if (rd && wr)      mode = app ? (ex ? "a+b" : "w+b") : ((trn || (cre && !ex)) ? "w+b" : "r+b");
    else if (wr)       mode = app ? (ex ? "ab" : "wb") : ((trn || (cre && !ex)) ? "wb" : "r+b");
    return std::fopen(p.string().c_str(), mode);
}

} // namespace

struct plat_mc {
    std::mutex m;
    Port ports[2];
    std::map<int, OpenFile> files;
    int next_fd = 1, last_cmd = 0, last_result = 0;
    bool pending = false;
    std::string root_str[2];

    int done(int cmd, int result) { last_cmd = cmd; last_result = result; pending = true; return 0; }
    static bool valid(int port, int slot) { return port >= 0 && port < 2 && slot == 0; }

    // Ruta del invitado -> ruta normalizada "/a/b". ".." no sale de la raiz.
    std::string norm(int port, std::string path) const {
        std::replace(path.begin(), path.end(), '\\', '/');
        const std::string l = lower(path);
        if (l.rfind("mc0:", 0) == 0 || l.rfind("mc1:", 0) == 0) path = path.substr(4);
        std::vector<std::string> parts;
        if ((path.empty() || path[0] != '/') && port >= 0 && port < 2) parts = split(ports[port].cwd);
        for (auto &c : split(path)) {
            if (c == ".") continue;
            if (c == "..") { if (!parts.empty()) parts.pop_back(); continue; }
            parts.push_back(c);
        }
        if (parts.empty()) return "/";
        std::string j;
        for (auto &c : parts) j += "/" + c;
        return j;
    }
    // Un componente con ':' o caracteres de control no es un nombre de tarjeta valido y
    // en Windows podria escapar de la raiz.
    static bool safe(const std::string &g) {
        for (char c : g) if (c == ':' || (unsigned char)c < 0x20) return false;
        return true;
    }
    fs::path host(int port, const std::string &g) const {
        fs::path r = ports[port].root;
        if (g.size() > 1) r /= fs::path(g.substr(1));
        return r.lexically_normal();
    }
    void close_port_files(int port) {
        for (auto it = files.begin(); it != files.end();) {
            if (it->second.port == port) { if (it->second.fp) std::fclose(it->second.fp); it = files.erase(it); }
            else ++it;
        }
    }
    void close_all() { for (auto &kv : files) if (kv.second.fp) std::fclose(kv.second.fp); files.clear(); }
    void ensure_root(int port) { std::error_code ec; fs::create_directories(ports[port].root, ec); }
};

extern "C" {

int plat_mc_derive_root(const char *root0, int port, char *out, size_t cap) {
    fs::path root = root0 && *root0 ? fs::path(root0) : fs::path("mc0");
    root = root.lexically_normal();
    fs::path r = root;
    if (port > 0) {
        // lexically_normal deja una barra final como hoja vacia
        if (!root.has_filename()) root = root.parent_path();
        const std::string leaf = root.filename().string();
        const fs::path parent = root.parent_path();
        if (lower(leaf) == "mc0") r = parent / "mc1";
        else if (leaf.empty()) r = root / "mc1";
        else r = parent / (leaf + "_slot" + std::to_string(port));
        r = r.lexically_normal();
    }
    const std::string s = r.string();
    if (s.size() + 1 > cap) return -1;
    std::memcpy(out, s.c_str(), s.size() + 1);
    return 0;
}

plat_mc *plat_mc_create(const char *root0, const char *root1) {
    auto *mc = new plat_mc();
    char buf[kMaxPath];
    if (plat_mc_derive_root(root0, 0, buf, sizeof buf) != 0) { delete mc; return nullptr; }
    mc->ports[0].root = buf;
    if (root1 && *root1) mc->ports[1].root = fs::path(root1).lexically_normal();
    else if (plat_mc_derive_root(root0, 1, buf, sizeof buf) == 0) mc->ports[1].root = buf;
    else { delete mc; return nullptr; }
    for (int i = 0; i < 2; ++i) { mc->root_str[i] = mc->ports[i].root.string(); mc->ensure_root(i); }
    return mc;
}

void plat_mc_destroy(plat_mc *mc) {
    if (!mc) return;
    { std::lock_guard<std::mutex> l(mc->m); mc->close_all(); }
    delete mc;
}

const char *plat_mc_root(const plat_mc *mc, int port) {
    return (mc && (port == 0 || port == 1)) ? mc->root_str[port].c_str() : nullptr;
}

int plat_mc_init(plat_mc *mc) {
    std::lock_guard<std::mutex> l(mc->m);
    mc->close_all(); mc->next_fd = 1; mc->last_cmd = 0; mc->last_result = 0; mc->pending = false;
    for (int i = 0; i < 2; ++i) { mc->ports[i].cwd = "/"; mc->ports[i].formatted = true; mc->ensure_root(i); }
    return 0;
}

int plat_mc_end(plat_mc *mc) {
    std::lock_guard<std::mutex> l(mc->m);
    mc->close_all(); mc->next_fd = 1; mc->last_cmd = 0; mc->last_result = 0; mc->pending = false;
    for (auto &p : mc->ports) p.cwd = "/";
    return 0;
}

int plat_mc_get_slot_max(const plat_mc *) { return 1; }

int plat_mc_get_info(plat_mc *mc, int port, int slot, int *type, int *freec, int *format) {
    std::lock_guard<std::mutex> l(mc->m);
    int t = 0, f = 0, fm = 0, r = PLAT_MC_NO_ENTRY;
    if (plat_mc::valid(port, slot)) {
        const bool fmt = mc->ports[port].formatted;
        t = PLAT_MC_CARD_TYPE_PS2; f = fmt ? PLAT_MC_FREE_CLUSTERS : 0; fm = fmt ? 1 : 0;
        r = fmt ? PLAT_MC_OK : PLAT_MC_NO_FORMAT;
    }
    if (type) *type = t;
    if (freec) *freec = f;
    if (format) *format = fm;
    return mc->done(PLAT_MC_CMD_GETINFO, r);
}

int plat_mc_open(plat_mc *mc, int port, int slot, const char *path, unsigned flags) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    if (plat_mc::valid(port, slot) && path) {
        if (!mc->ports[port].formatted) r = PLAT_MC_NO_FORMAT;
        else {
            const std::string g = mc->norm(port, std::string(path, strnlen(path, kMaxPath)));
            const fs::path hp = mc->host(port, g);
            std::error_code ec;
            const bool cre = flags & PLAT_MC_O_CREAT;
            const bool ex = fs::exists(hp, ec) && !ec;
            if (!plat_mc::safe(g) || g == "/") r = PLAT_MC_DENIED;
            else if (ex && fs::is_directory(hp, ec)) r = PLAT_MC_DENIED;
            else if (!ex && !cre) r = PLAT_MC_NO_ENTRY;
            else if (!fs::exists(hp.parent_path(), ec) || ec) r = PLAT_MC_NO_ENTRY;
            else if (mc->files.size() >= kMaxOpen) r = PLAT_MC_TOO_MANY_HANDLES;
            else if (FILE *fp = open_host(hp, flags)) {
                int fd = mc->next_fd;
                for (int a = 0; a < 0x10000; ++a, ++fd) {
                    if (fd <= 0) fd = 1;
                    if (!mc->files.count(fd)) break;
                }
                mc->next_fd = fd + 1;
                mc->files[fd] = OpenFile{fp, port};
                r = fd;
            } else r = ex ? PLAT_MC_DENIED : PLAT_MC_NO_ENTRY;
        }
    }
    return mc->done(PLAT_MC_CMD_OPEN, r);
}

int plat_mc_close(plat_mc *mc, int fd) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    auto it = mc->files.find(fd);
    if (it != mc->files.end()) {
        r = (!it->second.fp || std::fclose(it->second.fp) == 0) ? PLAT_MC_OK : r;
        mc->files.erase(it);
    }
    return mc->done(PLAT_MC_CMD_CLOSE, r);
}

int plat_mc_read(plat_mc *mc, int fd, void *dst, int size) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    auto it = mc->files.find(fd);
    if (size <= 0) r = 0;
    else if (it == mc->files.end() || !it->second.fp) r = PLAT_MC_NO_ENTRY;
    else if (!dst) r = PLAT_MC_DENIED;
    else {
        size_t n = std::fread(dst, 1, size_t(size), it->second.fp);
        if (std::ferror(it->second.fp)) { std::clearerr(it->second.fp); r = PLAT_MC_DENIED; }
        else r = int(n);
    }
    return mc->done(PLAT_MC_CMD_READ, r);
}

int plat_mc_write(plat_mc *mc, int fd, const void *src, int size) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    auto it = mc->files.find(fd);
    if (size <= 0) r = 0;
    else if (it == mc->files.end() || !it->second.fp) r = PLAT_MC_NO_ENTRY;
    else if (!src) r = PLAT_MC_DENIED;
    else {
        size_t n = std::fwrite(src, 1, size_t(size), it->second.fp);
        if (std::ferror(it->second.fp)) { std::clearerr(it->second.fp); r = PLAT_MC_DENIED; }
        else { std::fflush(it->second.fp); r = int(n); }
    }
    return mc->done(PLAT_MC_CMD_WRITE, r);
}

int plat_mc_seek(plat_mc *mc, int fd, int offset, int origin) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    auto it = mc->files.find(fd);
    if (it != mc->files.end() && it->second.fp) {
        int wh = origin == PLAT_MC_SEEK_CUR ? SEEK_CUR : origin == PLAT_MC_SEEK_END ? SEEK_END : SEEK_SET;
        if (std::fseek(it->second.fp, offset, wh) == 0) {
            long p = std::ftell(it->second.fp);
            r = p >= 0 ? int(p) : PLAT_MC_DENIED;
        } else r = PLAT_MC_DENIED;
    }
    return mc->done(PLAT_MC_CMD_SEEK, r);
}

int plat_mc_flush(plat_mc *mc, int fd) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    auto it = mc->files.find(fd);
    if (it != mc->files.end() && it->second.fp) r = std::fflush(it->second.fp) == 0 ? PLAT_MC_OK : PLAT_MC_DENIED;
    return mc->done(PLAT_MC_CMD_FLUSH, r);
}

int plat_mc_mkdir(plat_mc *mc, int port, int slot, const char *path) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    if (plat_mc::valid(port, slot) && path) {
        if (!mc->ports[port].formatted) r = PLAT_MC_NO_FORMAT;
        else {
            mc->ensure_root(port);
            const std::string g = mc->norm(port, std::string(path, strnlen(path, kMaxPath)));
            const fs::path hp = mc->host(port, g);
            std::error_code ec;
            if (!plat_mc::safe(g)) r = PLAT_MC_DENIED;
            else if (fs::exists(hp, ec) && !ec) r = fs::is_directory(hp, ec) ? PLAT_MC_OK : PLAT_MC_DENIED;
            else if (fs::create_directory(hp, ec) && !ec) r = PLAT_MC_OK;
            else r = (fs::exists(hp.parent_path(), ec) && !ec) ? PLAT_MC_DENIED : PLAT_MC_NO_ENTRY;
        }
    }
    return mc->done(PLAT_MC_CMD_MKDIR, r);
}

int plat_mc_chdir(plat_mc *mc, int port, int slot, const char *path, char *cwd_out, size_t cap) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    std::string cwd = "/";
    if (plat_mc::valid(port, slot)) {
        Port &p = mc->ports[port];
        cwd = p.cwd;
        if (!p.formatted) r = PLAT_MC_NO_FORMAT;
        else {
            mc->ensure_root(port);
            const std::string req = path ? std::string(path, strnlen(path, kMaxPath)) : std::string();
            const std::string g = req.empty() ? p.cwd : mc->norm(port, req);
            std::error_code ec;
            if (plat_mc::safe(g) && fs::is_directory(mc->host(port, g), ec) && !ec) { p.cwd = g; cwd = g; r = PLAT_MC_OK; }
        }
    }
    if (cwd_out && cap) { std::strncpy(cwd_out, cwd.c_str(), cap - 1); cwd_out[cap - 1] = 0; }
    return mc->done(PLAT_MC_CMD_CHDIR, r);
}

int plat_mc_get_dir(plat_mc *mc, int port, int slot, const char *pattern, int max_entries,
                    plat_mc_dirent *table) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    if (plat_mc::valid(port, slot)) {
        if (!mc->ports[port].formatted) r = PLAT_MC_NO_FORMAT;
        else {
            mc->ensure_root(port);
            const std::string raw = pattern ? std::string(pattern, strnlen(pattern, kMaxPath)) : std::string();
            const std::string q = mc->norm(port, raw.empty() ? "." : raw);
            const bool wc = q.find('*') != std::string::npos || q.find('?') != std::string::npos;
            const fs::path rel = q.size() > 1 ? fs::path(q.substr(1)) : fs::path();
            fs::path parent; std::string pat;
            std::error_code ec;
            if (wc) { parent = rel.parent_path(); pat = rel.filename().string(); }
            else if (fs::is_directory(mc->host(port, q), ec) && !ec) { parent = rel; pat = "*"; }
            else { parent = rel.parent_path(); pat = rel.filename().string(); }
            if (pat.empty()) pat = "*";
            fs::path dir = mc->ports[port].root;
            if (!parent.empty()) dir /= parent;
            dir = dir.lexically_normal();
            if (plat_mc::safe(q) && fs::is_directory(dir, ec) && !ec) {
                std::vector<plat_mc_dirent> ents;
                const std::time_t now = std::time(nullptr);
                for (const char *sp : {".", ".."}) {
                    if (wildcard(pat, sp)) { plat_mc_dirent e; fill_entry(e, sp, true, 0, now); ents.push_back(e); }
                }
                std::vector<fs::directory_entry> de;
                for (auto &e : fs::directory_iterator(dir, fs::directory_options::skip_permission_denied, ec)) {
                    if (ec) break;
                    de.push_back(e);
                }
                std::sort(de.begin(), de.end(), [](const fs::directory_entry &a, const fs::directory_entry &b) {
                    return lower(a.path().filename().string()) < lower(b.path().filename().string());
                });
                for (auto &e : de) {
                    const std::string n = e.path().filename().string();
                    if (!wildcard(pat, n)) continue;
                    std::error_code e2;
                    const bool isd = e.is_directory(e2) && !e2;
                    const uint32_t sz = isd ? 0u : uint32_t(e.file_size(e2));
                    e2.clear();
                    const std::time_t t = to_time_t(e.last_write_time(e2));
                    plat_mc_dirent pe; fill_entry(pe, n, isd, sz, e2 ? now : t);
                    ents.push_back(pe);
                }
                const size_t cnt = std::min(ents.size(), max_entries > 0 ? size_t(max_entries) : size_t(0));
                if (cnt && table) std::memcpy(table, ents.data(), cnt * sizeof(plat_mc_dirent));
                r = int(cnt);
            }
        }
    }
    return mc->done(PLAT_MC_CMD_GETDIR, r);
}

int plat_mc_delete(plat_mc *mc, int port, int slot, const char *path) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    if (plat_mc::valid(port, slot) && path) {
        if (!mc->ports[port].formatted) r = PLAT_MC_NO_FORMAT;
        else {
            const std::string g = mc->norm(port, std::string(path, strnlen(path, kMaxPath)));
            if (g != "/" && plat_mc::safe(g)) {
                const fs::path hp = mc->host(port, g);
                std::error_code ec;
                if (fs::exists(hp, ec) && !ec) {
                    if (fs::is_directory(hp, ec) && !fs::is_empty(hp, ec)) r = PLAT_MC_NOT_EMPTY;
                    else r = (fs::remove(hp, ec) && !ec) ? PLAT_MC_OK : PLAT_MC_DENIED;
                }
            }
        }
    }
    return mc->done(PLAT_MC_CMD_DELETE, r);
}

int plat_mc_rename(plat_mc *mc, int port, int slot, const char *o, const char *n) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    if (plat_mc::valid(port, slot) && o && n) {
        if (!mc->ports[port].formatted) r = PLAT_MC_NO_FORMAT;
        else {
            const std::string go = mc->norm(port, std::string(o, strnlen(o, kMaxPath)));
            const std::string gn = mc->norm(port, std::string(n, strnlen(n, kMaxPath)));
            if (plat_mc::safe(go) && plat_mc::safe(gn) && go != "/" && gn != "/") {
                const fs::path ho = mc->host(port, go), hn = mc->host(port, gn);
                std::error_code ec;
                if (fs::exists(ho, ec) && !ec && fs::exists(hn.parent_path(), ec) && !ec) {
                    fs::rename(ho, hn, ec);
                    r = ec ? PLAT_MC_DENIED : PLAT_MC_OK;
                }
            }
        }
    }
    return mc->done(PLAT_MC_CMD_RENAME, r);
}

static int wipe(plat_mc *mc, int port, int slot, bool formatted, int cmd) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    if (plat_mc::valid(port, slot)) {
        mc->close_port_files(port);
        std::error_code ec;
        fs::remove_all(mc->ports[port].root, ec);
        ec.clear();
        fs::create_directories(mc->ports[port].root, ec);
        if (!ec) { mc->ports[port].cwd = "/"; mc->ports[port].formatted = formatted; r = PLAT_MC_OK; }
    }
    return mc->done(cmd, r);
}
int plat_mc_format(plat_mc *mc, int port, int slot) { return wipe(mc, port, slot, true, PLAT_MC_CMD_FORMAT); }
int plat_mc_unformat(plat_mc *mc, int port, int slot) { return wipe(mc, port, slot, false, PLAT_MC_CMD_UNFORMAT); }

int plat_mc_set_file_info(plat_mc *mc, int port, int slot, const char *path) {
    std::lock_guard<std::mutex> l(mc->m);
    int r = PLAT_MC_NO_ENTRY;
    if (plat_mc::valid(port, slot) && path) {
        if (!mc->ports[port].formatted) r = PLAT_MC_NO_FORMAT;
        else {
            const std::string g = mc->norm(port, std::string(path, strnlen(path, kMaxPath)));
            std::error_code ec;
            if (plat_mc::safe(g) && fs::exists(mc->host(port, g), ec) && !ec) r = PLAT_MC_OK;
        }
    }
    return mc->done(PLAT_MC_CMD_SETFILEINFO, r);
}

int plat_mc_get_ent_space(plat_mc *mc) {
    std::lock_guard<std::mutex> l(mc->m);
    return mc->done(PLAT_MC_CMD_GETENTSPACE, PLAT_MC_ENT_SPACE);
}

int plat_mc_sync(plat_mc *mc, int *cmd, int *result) {
    std::lock_guard<std::mutex> l(mc->m);
    if (!mc->pending) return -1;
    mc->pending = false;
    if (cmd) *cmd = mc->last_cmd;
    if (result) *result = mc->last_result;
    return 1;
}

static bool read_all(const fs::path &p, std::vector<unsigned char> &out) {
    FILE *f = std::fopen(p.string().c_str(), "rb");
    if (!f) return false;
    unsigned char buf[65536]; size_t n;
    while ((n = std::fread(buf, 1, sizeof buf, f)) > 0) out.insert(out.end(), buf, buf + n);
    std::fclose(f);
    return true;
}

static void list_tree(const fs::path &root, std::map<std::string, bool> &out, const fs::path &cur) {
    std::error_code ec;
    for (auto &e : fs::directory_iterator(cur, ec)) {
        const std::string rel = e.path().lexically_relative(root).generic_string();
        const bool d = e.is_directory(ec);
        out[rel] = d;
        if (d) list_tree(root, out, e.path());
    }
}

int plat_mc_compare_trees(const char *a, const char *b, char *msg, size_t cap) {
    auto say = [&](const std::string &s) { if (msg && cap) { std::strncpy(msg, s.c_str(), cap - 1); msg[cap - 1] = 0; } };
    say("");
    std::map<std::string, bool> ta, tb;
    std::error_code ec;
    if (!fs::is_directory(a, ec) || !fs::is_directory(b, ec)) { say("carpeta inexistente"); return -1; }
    list_tree(a, ta, a); list_tree(b, tb, b);
    for (auto &kv : ta) if (!tb.count(kv.first)) { say("solo en A: " + kv.first); return 1; }
    for (auto &kv : tb) if (!ta.count(kv.first)) { say("solo en B: " + kv.first); return 1; }
    for (auto &kv : ta) {
        if (kv.second != tb[kv.first]) { say("tipo distinto: " + kv.first); return 1; }
        if (kv.second) continue;
        std::vector<unsigned char> x, y;
        if (!read_all(fs::path(a) / kv.first, x) || !read_all(fs::path(b) / kv.first, y)) { say("error de lectura: " + kv.first); return -1; }
        if (x.size() != y.size()) { say("tamano distinto: " + kv.first); return 1; }
        for (size_t i = 0; i < x.size(); ++i)
            if (x[i] != y[i]) { say("byte distinto en " + kv.first + " offset " + std::to_string(i)); return 1; }
    }
    return 0;
}

} // extern "C"
