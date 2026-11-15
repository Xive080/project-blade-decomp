// Pruebas de plat_memcard con datos sinteticos en una carpeta temporal propia.
#include "plat_memcard.h"

#include <cstddef>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <string>
#include <vector>
#include <chrono>

namespace fs = std::filesystem;
static int g_fail = 0;
#define CHECK(c) do { if (!(c)) { std::printf("FALLO %s:%d  %s\n", __FILE__, __LINE__, #c); ++g_fail; } } while (0)
#define CHECK_EQ(a, b) do { long long _a = (a), _b = (b); if (_a != _b) { std::printf("FALLO %s:%d  %s=%lld != %s=%lld\n", __FILE__, __LINE__, #a, _a, #b, _b); ++g_fail; } } while (0)

// Ejecuta una orden y devuelve su resultado via sync (comprobando cmd).
static int sync_result(plat_mc *mc, int expect_cmd) {
    int cmd = -99, res = -99;
    CHECK_EQ(plat_mc_sync(mc, &cmd, &res), 1);
    CHECK_EQ(cmd, expect_cmd);
    CHECK_EQ(plat_mc_sync(mc, nullptr, nullptr), -1); // consumida
    return res;
}

static std::vector<unsigned char> payload(size_t n, unsigned seed) {
    std::vector<unsigned char> v(n);
    unsigned s = seed;
    for (auto &b : v) { s = s * 1664525u + 1013904223u; b = (unsigned char)(s >> 24); }
    return v;
}

static int write_file(plat_mc *mc, const char *path, const std::vector<unsigned char> &d, unsigned flags) {
    plat_mc_open(mc, 0, 0, path, flags);
    int fd = sync_result(mc, PLAT_MC_CMD_OPEN);
    if (fd < 0) return fd;
    plat_mc_write(mc, fd, d.data(), int(d.size()));
    int w = sync_result(mc, PLAT_MC_CMD_WRITE);
    plat_mc_close(mc, fd);
    sync_result(mc, PLAT_MC_CMD_CLOSE);
    return w;
}

int main() {
    const fs::path base = fs::temp_directory_path() /
        ("plat_mc_test_" + std::to_string(std::chrono::steady_clock::now().time_since_epoch().count()));
    const fs::path ra = base / "A" / "mc0", rb = base / "B";
    fs::create_directories(base);

    // --- derivacion de raices (regla de la recomp)
    char buf[512];
    CHECK_EQ(plat_mc_derive_root("x/mc0", 1, buf, sizeof buf), 0);
    CHECK(fs::path(buf) == fs::path("x/mc1"));
    CHECK_EQ(plat_mc_derive_root("x/MC0/", 1, buf, sizeof buf), 0);
    CHECK(fs::path(buf) == fs::path("x/mc1"));
    CHECK_EQ(plat_mc_derive_root("x/cards", 1, buf, sizeof buf), 0);
    CHECK(fs::path(buf) == fs::path("x/cards_slot1"));
    CHECK_EQ(plat_mc_derive_root("x/mc0", 1, buf, 3), -1);

    plat_mc *mc = plat_mc_create(ra.string().c_str(), nullptr);
    CHECK(mc != nullptr);
    CHECK(fs::is_directory(ra) && fs::is_directory(ra.parent_path() / "mc1"));
    CHECK_EQ(plat_mc_get_slot_max(mc), 1);
    CHECK_EQ(plat_mc_sync(mc, nullptr, nullptr), -1); // ocioso

    // --- info
    int type = 0, freec = 0, fmt = 0;
    plat_mc_get_info(mc, 0, 0, &type, &freec, &fmt);
    CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETINFO), 0);
    CHECK_EQ(type, 2); CHECK_EQ(freec, 0x2000); CHECK_EQ(fmt, 1);
    plat_mc_get_info(mc, 0, 1, &type, &freec, &fmt); // slot invalido
    CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETINFO), PLAT_MC_NO_ENTRY);

    // --- guardar partida: directorio + fichero, y compararla con una escritura de referencia
    const std::string dir = "BASCUS-00000AIRBLADE";
    plat_mc_mkdir(mc, 0, 0, dir.c_str());
    CHECK_EQ(sync_result(mc, PLAT_MC_CMD_MKDIR), 0);
    const auto save = payload(0x838 * 3 + 17, 1234); // tamano arbitrario, no el real
    const auto icon = payload(0xB3F8, 99);
    CHECK_EQ(write_file(mc, (dir + "/AIRBLADE.dat").c_str(), save, PLAT_MC_O_WRONLY | PLAT_MC_O_CREAT), int(save.size()));
    CHECK_EQ(write_file(mc, ("mc0:/" + dir + "/icon.ico").c_str(), icon, PLAT_MC_O_WRONLY | PLAT_MC_O_CREAT | PLAT_MC_O_TRUNC), int(icon.size()));

    // referencia: lo que la recomp hace con stdio (fopen "wb" + fwrite) en otra carpeta
    fs::create_directories(rb / dir);
    for (auto &pr : {std::make_pair(std::string("AIRBLADE.dat"), &save), std::make_pair(std::string("icon.ico"), &icon)}) {
        FILE *f = std::fopen((rb / dir / pr.first).string().c_str(), "wb");
        CHECK(f != nullptr);
        std::fwrite(pr.second->data(), 1, pr.second->size(), f);
        std::fclose(f);
    }
    char msg[256];
    CHECK_EQ(plat_mc_compare_trees(ra.string().c_str(), rb.string().c_str(), msg, sizeof msg), 0);
    // una diferencia de un solo byte se detecta
    { FILE *f = std::fopen((rb / dir / "AIRBLADE.dat").string().c_str(), "r+b"); std::fseek(f, 100, SEEK_SET);
      int c = std::fgetc(f); std::fseek(f, 100, SEEK_SET); std::fputc(c ^ 1, f); std::fclose(f); }
    CHECK_EQ(plat_mc_compare_trees(ra.string().c_str(), rb.string().c_str(), msg, sizeof msg), 1);
    CHECK(std::string(msg).find("offset 100") != std::string::npos);

    // --- recarga: destruir y volver a abrir lee los mismos bytes
    plat_mc_destroy(mc);
    mc = plat_mc_create(ra.string().c_str(), nullptr);
    plat_mc_init(mc); CHECK_EQ(plat_mc_sync(mc, nullptr, nullptr), -1); // init no deja orden pendiente
    plat_mc_open(mc, 0, 0, (dir + "/AIRBLADE.dat").c_str(), PLAT_MC_O_RDONLY);
    int fd = sync_result(mc, PLAT_MC_CMD_OPEN);
    CHECK(fd > 0);
    std::vector<unsigned char> back(save.size() + 10);
    plat_mc_read(mc, fd, back.data(), int(back.size()));
    CHECK_EQ(sync_result(mc, PLAT_MC_CMD_READ), int(save.size())); // lectura corta
    CHECK(std::memcmp(back.data(), save.data(), save.size()) == 0);
    plat_mc_seek(mc, fd, 10, PLAT_MC_SEEK_SET); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_SEEK), 10);
    plat_mc_seek(mc, fd, -4, PLAT_MC_SEEK_END); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_SEEK), int(save.size()) - 4);
    plat_mc_read(mc, fd, back.data(), 100); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_READ), 4);
    plat_mc_close(mc, fd); sync_result(mc, PLAT_MC_CMD_CLOSE);
    plat_mc_close(mc, fd); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_CLOSE), PLAT_MC_NO_ENTRY);

    // --- banderas de apertura
    plat_mc_open(mc, 0, 0, "nada.dat", PLAT_MC_O_RDONLY); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_OPEN), PLAT_MC_NO_ENTRY);
    plat_mc_open(mc, 0, 0, "nodir/x.dat", PLAT_MC_O_WRONLY | PLAT_MC_O_CREAT); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_OPEN), PLAT_MC_NO_ENTRY);
    plat_mc_open(mc, 0, 0, dir.c_str(), PLAT_MC_O_RDONLY); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_OPEN), PLAT_MC_DENIED);
    const auto tiny = payload(10, 5);
    CHECK_EQ(write_file(mc, "t.bin", tiny, PLAT_MC_O_WRONLY | PLAT_MC_O_CREAT), 10);
    CHECK_EQ(write_file(mc, "t.bin", tiny, PLAT_MC_O_WRONLY | PLAT_MC_O_APPEND), 10);
    CHECK_EQ(int(fs::file_size(ra / "t.bin")), 20);
    CHECK_EQ(write_file(mc, "t.bin", tiny, PLAT_MC_O_WRONLY), 10); // sin TRUNC: sobrescribe al inicio
    CHECK_EQ(int(fs::file_size(ra / "t.bin")), 20);
    CHECK_EQ(write_file(mc, "t.bin", tiny, PLAT_MC_O_WRONLY | PLAT_MC_O_TRUNC), 10);
    CHECK_EQ(int(fs::file_size(ra / "t.bin")), 10);

    // --- get_dir: orden, atributos, comodines
    plat_mc_dirent tab[16];
    static_assert(offsetof(plat_mc_dirent, file_size) == 16 && offsetof(plat_mc_dirent, attr) == 20 &&
                  offsetof(plat_mc_dirent, name) == 32, "layout");
    plat_mc_get_dir(mc, 0, 0, "/*", 16, tab);
    CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETDIR), 4); // . .. BASCUS... t.bin
    CHECK(std::string(tab[0].name) == "." && std::string(tab[1].name) == "..");
    CHECK(std::string(tab[2].name) == dir && (tab[2].attr & PLAT_MC_ATTR_SUBDIR));
    CHECK(std::string(tab[3].name) == "t.bin" && tab[3].file_size == 10 && (tab[3].attr & PLAT_MC_ATTR_FILE));
    CHECK((tab[3].attr & PLAT_MC_ATTR_EXISTS) && (tab[3].attr & PLAT_MC_ATTR_CLOSED));
    plat_mc_get_dir(mc, 0, 0, (dir + "/*.dat").c_str(), 16, tab);
    CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETDIR), 1);
    CHECK(std::string(tab[0].name) == "AIRBLADE.dat" && tab[0].file_size == save.size());
    plat_mc_get_dir(mc, 0, 0, "/*", 2, tab); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETDIR), 2);
    plat_mc_get_dir(mc, 0, 0, "/*", 16, nullptr); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETDIR), 4); // solo contar
    plat_mc_get_dir(mc, 0, 0, "/NOHAY/*", 16, tab); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETDIR), PLAT_MC_NO_ENTRY);

    // --- chdir, rutas relativas, no salir de la raiz
    char cwd[64];
    plat_mc_chdir(mc, 0, 0, dir.c_str(), cwd, sizeof cwd); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_CHDIR), 0);
    CHECK(std::string(cwd) == "/" + dir);
    plat_mc_open(mc, 0, 0, "icon.ico", PLAT_MC_O_RDONLY); fd = sync_result(mc, PLAT_MC_CMD_OPEN); CHECK(fd > 0);
    plat_mc_close(mc, fd); sync_result(mc, PLAT_MC_CMD_CLOSE);
    plat_mc_chdir(mc, 0, 0, "../../..", cwd, sizeof cwd); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_CHDIR), 0);
    CHECK(std::string(cwd) == "/");
    plat_mc_chdir(mc, 0, 0, "/nohay", cwd, sizeof cwd); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_CHDIR), PLAT_MC_NO_ENTRY);
    plat_mc_open(mc, 0, 0, "../../../escape.bin", PLAT_MC_O_WRONLY | PLAT_MC_O_CREAT);
    fd = sync_result(mc, PLAT_MC_CMD_OPEN); CHECK(fd > 0);
    plat_mc_close(mc, fd); sync_result(mc, PLAT_MC_CMD_CLOSE);
    CHECK(fs::exists(ra / "escape.bin") && !fs::exists(base / "escape.bin"));
    plat_mc_open(mc, 0, 0, "C:/boom.bin", PLAT_MC_O_WRONLY | PLAT_MC_O_CREAT); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_OPEN), PLAT_MC_DENIED);

    // --- rename / delete
    plat_mc_rename(mc, 0, 0, "t.bin", "u.bin"); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_RENAME), 0);
    CHECK(fs::exists(ra / "u.bin") && !fs::exists(ra / "t.bin"));
    plat_mc_rename(mc, 0, 0, "t.bin", "v.bin"); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_RENAME), PLAT_MC_NO_ENTRY);
    plat_mc_delete(mc, 0, 0, dir.c_str()); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_DELETE), PLAT_MC_NOT_EMPTY);
    plat_mc_delete(mc, 0, 0, (dir + "/AIRBLADE.dat").c_str()); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_DELETE), 0);
    plat_mc_delete(mc, 0, 0, (dir + "/icon.ico").c_str()); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_DELETE), 0);
    plat_mc_delete(mc, 0, 0, dir.c_str()); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_DELETE), 0);
    plat_mc_delete(mc, 0, 0, dir.c_str()); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_DELETE), PLAT_MC_NO_ENTRY);
    plat_mc_delete(mc, 0, 0, "/"); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_DELETE), PLAT_MC_NO_ENTRY);
    plat_mc_set_file_info(mc, 0, 0, "u.bin"); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_SETFILEINFO), 0);
    plat_mc_get_ent_space(mc); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETENTSPACE), 1024);

    // --- limite de manejadores
    std::vector<int> fds;
    for (int i = 0; i < 40; ++i) {
        plat_mc_open(mc, 0, 0, "u.bin", PLAT_MC_O_RDONLY);
        int r = sync_result(mc, PLAT_MC_CMD_OPEN);
        if (i < 32) { CHECK(r > 0); fds.push_back(r); } else CHECK_EQ(r, PLAT_MC_TOO_MANY_HANDLES);
    }
    for (int f : fds) { plat_mc_close(mc, f); sync_result(mc, PLAT_MC_CMD_CLOSE); }

    // --- tarjeta 1 independiente; unformat / format
    plat_mc_open(mc, 1, 0, "p1.bin", PLAT_MC_O_WRONLY | PLAT_MC_O_CREAT); fd = sync_result(mc, PLAT_MC_CMD_OPEN); CHECK(fd > 0);
    plat_mc_close(mc, fd); sync_result(mc, PLAT_MC_CMD_CLOSE);
    CHECK(fs::exists(ra.parent_path() / "mc1" / "p1.bin") && !fs::exists(ra / "p1.bin"));
    plat_mc_unformat(mc, 0, 0); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_UNFORMAT), 0);
    plat_mc_get_info(mc, 0, 0, &type, &freec, &fmt); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETINFO), PLAT_MC_NO_FORMAT);
    CHECK_EQ(freec, 0); CHECK_EQ(fmt, 0);
    plat_mc_open(mc, 0, 0, "x.bin", PLAT_MC_O_WRONLY | PLAT_MC_O_CREAT); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_OPEN), PLAT_MC_NO_FORMAT);
    plat_mc_get_dir(mc, 0, 0, "/*", 4, tab); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETDIR), PLAT_MC_NO_FORMAT);
    plat_mc_format(mc, 0, 0); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_FORMAT), 0);
    plat_mc_get_dir(mc, 0, 0, "/*", 4, tab); CHECK_EQ(sync_result(mc, PLAT_MC_CMD_GETDIR), 2); // . ..
    CHECK(fs::exists(ra.parent_path() / "mc1" / "p1.bin"));

    plat_mc_end(mc);
    plat_mc_destroy(mc);
    std::error_code ec; fs::remove_all(base, ec);
    std::printf(g_fail ? "test_memcard: %d FALLOS\n" : "test_memcard: OK\n", g_fail);
    return g_fail ? 1 : 0;
}
