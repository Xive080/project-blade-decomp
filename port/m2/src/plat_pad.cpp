// plat_pad.cpp - entrada abstracta con informe estilo scePadRead. Diseno propio.
#include "plat_pad.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>

namespace {

const char *const kButtonNames[PLAT_PAD_BUTTON_COUNT] = {
    "SELECT", "L3", "R3", "START", "UP", "RIGHT", "DOWN", "LEFT",
    "L2", "R2", "L1", "R1", "TRIANGLE", "CIRCLE", "CROSS", "SQUARE"};
const char *const kAxisNames[PLAT_AXIS_COUNT] = {"LX", "LY", "RX", "RY"};
const char *const kKeyNames[] = {
#define X(n) #n,
    PLAT_KEY_LIST(X)
#undef X
};
const char *const kGbtnNames[] = {
#define X(n) #n,
    PLAT_GBTN_LIST(X)
#undef X
};
const char *const kGaxisNames[] = {
#define X(n) #n,
    PLAT_GAXIS_LIST(X)
#undef X
};

template <size_t N> int find_name(const char *const (&arr)[N], const char *s) {
    for (size_t i = 0; i < N; i++)
        if (std::strcmp(arr[i], s) == 0) return (int)i;
    return -1;
}

struct Frame {
    uint64_t tick;
    uint16_t buttons;
    uint8_t stick[PLAT_AXIS_COUNT];
};

float clampf(float v, float lo, float hi) { return v < lo ? lo : v > hi ? hi : v; }

} // namespace

struct plat_pad {
    plat_input_backend be{};
    plat_pad_cfg cfg[PLAT_PAD_PORTS];
    uint64_t tick = 0;
    bool recording = false;
    bool replaying = false;
    std::vector<Frame> rec[PLAT_PAD_PORTS];
    std::vector<Frame> play[PLAT_PAD_PORTS];
};

extern "C" {

const char *plat_pad_button_name(int b) { return (b >= 0 && b < PLAT_PAD_BUTTON_COUNT) ? kButtonNames[b] : "?"; }
const char *plat_key_name(int k) { return (k >= 0 && k < PLAT_KEY_COUNT) ? kKeyNames[k] : "?"; }
const char *plat_gbtn_name(int g) { return (g >= 0 && g < PLAT_GBTN_COUNT) ? kGbtnNames[g] : "?"; }

void plat_pad_cfg_default(plat_pad_cfg *c, int port) {
    std::memset(c, 0, sizeof *c);
    c->deadzone = 0.15f;
    c->rescale = 1;
    c->trigger_threshold = 0.5f;
    c->gamepad_device = port; // mando N para el puerto N
    auto B = [&](int b, int slot, int type, int code) { c->button[b][slot] = plat_src{type, code}; };
    // Mando (todos los puertos).
    B(PLAT_PAD_CROSS, 0, PLAT_SRC_GBTN, PLAT_GBTN_SOUTH);
    B(PLAT_PAD_CIRCLE, 0, PLAT_SRC_GBTN, PLAT_GBTN_EAST);
    B(PLAT_PAD_SQUARE, 0, PLAT_SRC_GBTN, PLAT_GBTN_WEST);
    B(PLAT_PAD_TRIANGLE, 0, PLAT_SRC_GBTN, PLAT_GBTN_NORTH);
    B(PLAT_PAD_L1, 0, PLAT_SRC_GBTN, PLAT_GBTN_LSHOULDER);
    B(PLAT_PAD_R1, 0, PLAT_SRC_GBTN, PLAT_GBTN_RSHOULDER);
    B(PLAT_PAD_L2, 0, PLAT_SRC_GAXIS_POS, PLAT_GAXIS_LTRIG);
    B(PLAT_PAD_R2, 0, PLAT_SRC_GAXIS_POS, PLAT_GAXIS_RTRIG);
    B(PLAT_PAD_START, 0, PLAT_SRC_GBTN, PLAT_GBTN_START);
    B(PLAT_PAD_SELECT, 0, PLAT_SRC_GBTN, PLAT_GBTN_BACK);
    B(PLAT_PAD_L3, 0, PLAT_SRC_GBTN, PLAT_GBTN_LSTICK);
    B(PLAT_PAD_R3, 0, PLAT_SRC_GBTN, PLAT_GBTN_RSTICK);
    B(PLAT_PAD_UP, 0, PLAT_SRC_GBTN, PLAT_GBTN_DPAD_UP);
    B(PLAT_PAD_DOWN, 0, PLAT_SRC_GBTN, PLAT_GBTN_DPAD_DOWN);
    B(PLAT_PAD_LEFT, 0, PLAT_SRC_GBTN, PLAT_GBTN_DPAD_LEFT);
    B(PLAT_PAD_RIGHT, 0, PLAT_SRC_GBTN, PLAT_GBTN_DPAD_RIGHT);
    for (int a = 0; a < PLAT_AXIS_COUNT; a++) {
        c->axis[a][0].type = 2;
        c->axis[a][0].gaxis = a; // LX LY RX RY coinciden en orden
    }
    if (port == 0) { // teclado solo en el puerto 0
        B(PLAT_PAD_UP, 1, PLAT_SRC_KEY, PLAT_KEY_UP);
        B(PLAT_PAD_DOWN, 1, PLAT_SRC_KEY, PLAT_KEY_DOWN);
        B(PLAT_PAD_LEFT, 1, PLAT_SRC_KEY, PLAT_KEY_LEFT);
        B(PLAT_PAD_RIGHT, 1, PLAT_SRC_KEY, PLAT_KEY_RIGHT);
        B(PLAT_PAD_UP, 2, PLAT_SRC_KEY, PLAT_KEY_W);
        B(PLAT_PAD_DOWN, 2, PLAT_SRC_KEY, PLAT_KEY_S);
        B(PLAT_PAD_LEFT, 2, PLAT_SRC_KEY, PLAT_KEY_A);
        B(PLAT_PAD_RIGHT, 2, PLAT_SRC_KEY, PLAT_KEY_D);
        B(PLAT_PAD_CROSS, 1, PLAT_SRC_KEY, PLAT_KEY_X);
        B(PLAT_PAD_CROSS, 2, PLAT_SRC_KEY, PLAT_KEY_SPACE);
        B(PLAT_PAD_CIRCLE, 1, PLAT_SRC_KEY, PLAT_KEY_C);
        B(PLAT_PAD_SQUARE, 1, PLAT_SRC_KEY, PLAT_KEY_Z);
        B(PLAT_PAD_TRIANGLE, 1, PLAT_SRC_KEY, PLAT_KEY_V);
        B(PLAT_PAD_L1, 1, PLAT_SRC_KEY, PLAT_KEY_Q);
        B(PLAT_PAD_R1, 1, PLAT_SRC_KEY, PLAT_KEY_E);
        B(PLAT_PAD_L2, 1, PLAT_SRC_KEY, PLAT_KEY_LSHIFT);
        B(PLAT_PAD_R2, 1, PLAT_SRC_KEY, PLAT_KEY_RSHIFT);
        B(PLAT_PAD_START, 1, PLAT_SRC_KEY, PLAT_KEY_ENTER);
        B(PLAT_PAD_SELECT, 1, PLAT_SRC_KEY, PLAT_KEY_TAB);
        c->axis[PLAT_AXIS_RX][1] = plat_axis_src{1, PLAT_KEY_J, PLAT_KEY_L, 0, 0};
        c->axis[PLAT_AXIS_RY][1] = plat_axis_src{1, PLAT_KEY_I, PLAT_KEY_K, 0, 0};
    }
}

plat_pad *plat_pad_create(const plat_input_backend *be) {
    auto *p = new plat_pad;
    if (be) p->be = *be;
    for (int i = 0; i < PLAT_PAD_PORTS; i++) plat_pad_cfg_default(&p->cfg[i], i);
    return p;
}
void plat_pad_destroy(plat_pad *p) { delete p; }
void plat_pad_set_backend(plat_pad *p, const plat_input_backend *be) {
    if (!p) return;
    p->be = be ? *be : plat_input_backend{};
}
plat_pad_cfg *plat_pad_cfg_get(plat_pad *p, int port) {
    return (p && port >= 0 && port < PLAT_PAD_PORTS) ? &p->cfg[port] : nullptr;
}

int plat_pad_bind_button(plat_pad *p, int port, int button, int slot, plat_src src) {
    auto *c = plat_pad_cfg_get(p, port);
    if (!c || button < 0 || button >= PLAT_PAD_BUTTON_COUNT || slot < 0 || slot >= PLAT_PAD_SRC_PER_BUTTON) return -1;
    c->button[button][slot] = src;
    return 0;
}
int plat_pad_clear_button(plat_pad *p, int port, int button) {
    auto *c = plat_pad_cfg_get(p, port);
    if (!c || button < 0 || button >= PLAT_PAD_BUTTON_COUNT) return -1;
    std::memset(c->button[button], 0, sizeof c->button[button]);
    return 0;
}
int plat_pad_bind_axis(plat_pad *p, int port, int axis, int slot, plat_axis_src src) {
    auto *c = plat_pad_cfg_get(p, port);
    if (!c || axis < 0 || axis >= PLAT_AXIS_COUNT || slot < 0 || slot >= PLAT_PAD_SRC_PER_AXIS) return -1;
    c->axis[axis][slot] = src;
    return 0;
}

// ---- Procesado puro ----

void plat_pad_apply_deadzone(const plat_pad_cfg *c, float x, float y, float *ox, float *oy) {
    float dz = clampf(c->deadzone, 0.0f, 0.95f);
    x = clampf(x, -1.0f, 1.0f);
    y = clampf(y, -1.0f, 1.0f);
    if (dz <= 0.0f) { *ox = x; *oy = y; return; }
    if (c->radial) {
        float m = std::sqrt(x * x + y * y);
        if (m < dz) { *ox = *oy = 0.0f; return; }
        float s = c->rescale ? (std::min(m, 1.0f) - dz) / (1.0f - dz) / m : 1.0f;
        if (!c->rescale && m > 1.0f) s = 1.0f / m;
        *ox = x * s;
        *oy = y * s;
        return;
    }
    auto one = [&](float v) {
        float a = std::fabs(v);
        if (a < dz) return 0.0f;
        float r = c->rescale ? (a - dz) / (1.0f - dz) : a;
        return v < 0 ? -r : r;
    };
    *ox = one(x);
    *oy = one(y);
}

uint8_t plat_pad_axis_to_byte(float v) {
    v = clampf(v, -1.0f, 1.0f);
    long r = std::lround(128.0f + v * 127.0f);
    return (uint8_t)std::min(255L, std::max(0L, r));
}

void plat_pad_state_to_report(const plat_pad_state *s, int compat, uint8_t out[PLAT_PAD_REPORT_SIZE]) {
    std::memset(out, 0, PLAT_PAD_REPORT_SIZE);
    out[0] = compat ? 0x01 : 0x00;
    out[1] = 0x73;
    out[2] = (uint8_t)(~s->buttons & 0xFF);
    out[3] = (uint8_t)((~s->buttons >> 8) & 0xFF);
    out[4] = s->stick[PLAT_AXIS_RX];
    out[5] = s->stick[PLAT_AXIS_RY];
    out[6] = s->stick[PLAT_AXIS_LX];
    out[7] = s->stick[PLAT_AXIS_LY];
    static const int order[12] = {PLAT_PAD_RIGHT, PLAT_PAD_LEFT, PLAT_PAD_UP, PLAT_PAD_DOWN,
                                  PLAT_PAD_TRIANGLE, PLAT_PAD_CIRCLE, PLAT_PAD_CROSS, PLAT_PAD_SQUARE,
                                  PLAT_PAD_L1, PLAT_PAD_R1, PLAT_PAD_L2, PLAT_PAD_R2};
    for (int i = 0; i < 12; i++) out[8 + i] = (s->buttons >> order[i]) & 1 ? 0xFF : 0x00;
}

void plat_pad_report_to_state(const uint8_t in[PLAT_PAD_REPORT_SIZE], plat_pad_state *s) {
    uint16_t low = (uint16_t)(in[2] | (in[3] << 8));
    s->buttons = (uint16_t)~low;
    s->stick[PLAT_AXIS_RX] = in[4];
    s->stick[PLAT_AXIS_RY] = in[5];
    s->stick[PLAT_AXIS_LX] = in[6];
    s->stick[PLAT_AXIS_LY] = in[7];
}

// ---- Muestreo ----

static bool src_active(const plat_pad *p, const plat_pad_cfg *c, const plat_src &s) {
    const plat_input_backend &b = p->be;
    int dev = c->gamepad_device;
    switch (s.type) {
    case PLAT_SRC_KEY: return b.key_down && b.key_down(b.user, s.code);
    case PLAT_SRC_GBTN: return dev >= 0 && b.gamepad_button && b.gamepad_button(b.user, dev, s.code);
    case PLAT_SRC_GAXIS_POS: return dev >= 0 && b.gamepad_axis && b.gamepad_axis(b.user, dev, s.code) > c->trigger_threshold;
    case PLAT_SRC_GAXIS_NEG: return dev >= 0 && b.gamepad_axis && b.gamepad_axis(b.user, dev, s.code) < -c->trigger_threshold;
    }
    return false;
}

static float axis_value(const plat_pad *p, const plat_pad_cfg *c, int a) {
    const plat_input_backend &b = p->be;
    float best = 0.0f;
    for (int i = 0; i < PLAT_PAD_SRC_PER_AXIS; i++) {
        const plat_axis_src &s = c->axis[a][i];
        float v = 0.0f;
        if (s.type == 1) {
            bool neg = b.key_down && s.key_neg >= 0 && b.key_down(b.user, s.key_neg);
            bool pos = b.key_down && s.key_pos >= 0 && b.key_down(b.user, s.key_pos);
            v = (pos ? 1.0f : 0.0f) - (neg ? 1.0f : 0.0f);
        } else if (s.type == 2 && c->gamepad_device >= 0 && b.gamepad_axis) {
            v = b.gamepad_axis(b.user, c->gamepad_device, s.gaxis);
        }
        if (s.invert) v = -v;
        if (std::fabs(v) > std::fabs(best)) best = v;
    }
    return best;
}

static int port_connected(const plat_pad *p, int port) {
    if (port == 0) return 1; // el teclado cuenta como mando en el puerto 0
    const plat_pad_cfg &c = p->cfg[port];
    return c.gamepad_device >= 0 && p->be.gamepad_connected && p->be.gamepad_connected(p->be.user, c.gamepad_device);
}

static bool replay_lookup(const plat_pad *p, int port, plat_pad_state *s) {
    const auto &v = p->play[port];
    s->buttons = 0;
    for (auto &x : s->stick) x = 0x80;
    auto it = std::upper_bound(v.begin(), v.end(), p->tick, [](uint64_t t, const Frame &f) { return t < f.tick; });
    if (it == v.begin()) return true; // antes del primer fotograma: neutro
    --it;
    s->buttons = it->buttons;
    std::memcpy(s->stick, it->stick, sizeof s->stick);
    return true;
}

int plat_pad_sample(plat_pad *p, int port, plat_pad_state *out) {
    if (!p || !out || port < 0 || port >= PLAT_PAD_PORTS) return -1;
    if (p->replaying) return replay_lookup(p, port, out) ? 0 : -1;
    if (p->be.poll) p->be.poll(p->be.user);
    const plat_pad_cfg &c = p->cfg[port];
    out->buttons = 0;
    for (int b = 0; b < PLAT_PAD_BUTTON_COUNT; b++)
        for (int s = 0; s < PLAT_PAD_SRC_PER_BUTTON; s++)
            if (src_active(p, &c, c.button[b][s])) { out->buttons |= (uint16_t)(1u << b); break; }
    float lx, ly, rx, ry;
    plat_pad_apply_deadzone(&c, axis_value(p, &c, PLAT_AXIS_LX), axis_value(p, &c, PLAT_AXIS_LY), &lx, &ly);
    plat_pad_apply_deadzone(&c, axis_value(p, &c, PLAT_AXIS_RX), axis_value(p, &c, PLAT_AXIS_RY), &rx, &ry);
    out->stick[PLAT_AXIS_LX] = plat_pad_axis_to_byte(lx);
    out->stick[PLAT_AXIS_LY] = plat_pad_axis_to_byte(ly);
    out->stick[PLAT_AXIS_RX] = plat_pad_axis_to_byte(rx);
    out->stick[PLAT_AXIS_RY] = plat_pad_axis_to_byte(ry);
    return 0;
}

int plat_pad_read(plat_pad *p, int port, uint8_t out[PLAT_PAD_REPORT_SIZE]) {
    if (!p || !out || port < 0 || port >= PLAT_PAD_PORTS) return 0;
    if (!p->replaying && !port_connected(p, port)) return 0;
    plat_pad_state s;
    if (plat_pad_sample(p, port, &s) != 0) return 0;
    plat_pad_state_to_report(&s, p->cfg[port].recomp_compat, out);
    if (p->recording) {
        auto &v = p->rec[port];
        Frame f{p->tick, s.buttons, {s.stick[0], s.stick[1], s.stick[2], s.stick[3]}};
        if (!v.empty() && v.back().tick == f.tick) v.back() = f;
        else if (v.empty() || v.back().buttons != f.buttons || std::memcmp(v.back().stick, f.stick, 4) != 0) v.push_back(f);
    }
    return PLAT_PAD_REPORT_SIZE;
}

int plat_pad_get_state(plat_pad *p, int port) {
    if (!p || port < 0 || port >= PLAT_PAD_PORTS) return 0;
    return (p->replaying || port_connected(p, port)) ? 6 : 0;
}

void plat_pad_set_tick(plat_pad *p, uint64_t t) { if (p) p->tick = t; }

// ---- Grabacion / replay ----

int plat_pad_record_start(plat_pad *p) {
    if (!p || p->replaying) return -1;
    for (auto &v : p->rec) v.clear();
    p->recording = true;
    return 0;
}
void plat_pad_record_stop(plat_pad *p) { if (p) p->recording = false; }
size_t plat_pad_record_frames(const plat_pad *p) {
    size_t n = 0;
    if (p) for (auto &v : p->rec) n += v.size();
    return n;
}

int plat_pad_record_save(const plat_pad *p, const char *path) {
    if (!p || !path) return -1;
    FILE *f = std::fopen(path, "wb");
    if (!f) return -1;
    std::fprintf(f, "# plat_pad_replay v1\n# tick port buttons_hex(1=pulsado) lx ly rx ry\n");
    for (int port = 0; port < PLAT_PAD_PORTS; port++)
        for (auto &fr : p->rec[port])
            std::fprintf(f, "%llu %d %04x %u %u %u %u\n", (unsigned long long)fr.tick, port, fr.buttons,
                         fr.stick[PLAT_AXIS_LX], fr.stick[PLAT_AXIS_LY], fr.stick[PLAT_AXIS_RX], fr.stick[PLAT_AXIS_RY]);
    return std::fclose(f) == 0 ? 0 : -1;
}

int plat_pad_replay_from_text(plat_pad *p, const char *text) {
    if (!p || !text) return -1;
    for (auto &v : p->play) v.clear();
    const char *s = text;
    while (*s) {
        const char *e = std::strchr(s, '\n');
        std::string line(s, e ? (size_t)(e - s) : std::strlen(s));
        s = e ? e + 1 : s + line.size();
        if (line.empty() || line[0] == '#') continue;
        unsigned long long tick;
        int port;
        unsigned btn, lx, ly, rx, ry;
        if (std::sscanf(line.c_str(), "%llu %d %x %u %u %u %u", &tick, &port, &btn, &lx, &ly, &rx, &ry) != 7 ||
            port < 0 || port >= PLAT_PAD_PORTS || lx > 255 || ly > 255 || rx > 255 || ry > 255 || btn > 0xFFFF)
            return -1;
        auto &v = p->play[port];
        if (!v.empty() && tick <= v.back().tick) return -1; // debe ser estrictamente creciente
        v.push_back(Frame{tick, (uint16_t)btn, {(uint8_t)lx, (uint8_t)ly, (uint8_t)rx, (uint8_t)ry}});
    }
    p->replaying = true;
    p->recording = false;
    return 0;
}

int plat_pad_replay_load(plat_pad *p, const char *path) {
    if (!p || !path) return -1;
    FILE *f = std::fopen(path, "rb");
    if (!f) return -1;
    std::string t;
    char buf[4096];
    size_t n;
    while ((n = std::fread(buf, 1, sizeof buf, f)) > 0) t.append(buf, n);
    std::fclose(f);
    return plat_pad_replay_from_text(p, t.c_str());
}
void plat_pad_replay_stop(plat_pad *p) { if (p) p->replaying = false; }
int plat_pad_replaying(const plat_pad *p) { return p && p->replaying; }

// ---- Texto de configuracion ----

int plat_pad_cfg_to_text(const plat_pad_cfg *c, char *out, size_t n) {
    std::string s;
    char line[160];
    std::snprintf(line, sizeof line, "deadzone %.4f\nradial %d\nrescale %d\ntrigger %.4f\ndevice %d\ncompat %d\n",
                  c->deadzone, c->radial, c->rescale, c->trigger_threshold, c->gamepad_device, c->recomp_compat);
    s += line;
    for (int b = 0; b < PLAT_PAD_BUTTON_COUNT; b++)
        for (int i = 0; i < PLAT_PAD_SRC_PER_BUTTON; i++) {
            const plat_src &r = c->button[b][i];
            const char *nm = nullptr, *ty = nullptr;
            if (r.type == PLAT_SRC_KEY) { ty = "key"; nm = plat_key_name(r.code); }
            else if (r.type == PLAT_SRC_GBTN) { ty = "gbtn"; nm = plat_gbtn_name(r.code); }
            else if (r.type == PLAT_SRC_GAXIS_POS) { ty = "gaxis+"; nm = kGaxisNames[r.code % PLAT_GAXIS_COUNT]; }
            else if (r.type == PLAT_SRC_GAXIS_NEG) { ty = "gaxis-"; nm = kGaxisNames[r.code % PLAT_GAXIS_COUNT]; }
            if (!ty) continue;
            std::snprintf(line, sizeof line, "button %s %d %s %s\n", kButtonNames[b], i, ty, nm);
            s += line;
        }
    for (int a = 0; a < PLAT_AXIS_COUNT; a++)
        for (int i = 0; i < PLAT_PAD_SRC_PER_AXIS; i++) {
            const plat_axis_src &r = c->axis[a][i];
            if (r.type == 1)
                std::snprintf(line, sizeof line, "axis %s %d keys %s %s %d\n", kAxisNames[a], i, plat_key_name(r.key_neg), plat_key_name(r.key_pos), r.invert);
            else if (r.type == 2)
                std::snprintf(line, sizeof line, "axis %s %d gaxis %s %d\n", kAxisNames[a], i, kGaxisNames[r.gaxis % PLAT_GAXIS_COUNT], r.invert);
            else continue;
            s += line;
        }
    if (!out || s.size() + 1 > n) return -1;
    std::memcpy(out, s.c_str(), s.size() + 1);
    return 0;
}

int plat_pad_cfg_from_text(plat_pad_cfg *c, const char *text) {
    if (!c || !text) return -1;
    plat_pad_cfg tmp = *c;
    std::memset(tmp.button, 0, sizeof tmp.button); // el texto es la fuente completa de enlaces
    std::memset(tmp.axis, 0, sizeof tmp.axis);
    const char *s = text;
    while (*s) {
        const char *e = std::strchr(s, '\n');
        std::string line(s, e ? (size_t)(e - s) : std::strlen(s));
        s = e ? e + 1 : s + line.size();
        char k[32], a1[32], a2[32], a3[32], a4[32];
        int slot, inv;
        float f;
        int iv;
        if (line.empty() || line[0] == '#') continue;
        if (std::sscanf(line.c_str(), "deadzone %f", &f) == 1) tmp.deadzone = f;
        else if (std::sscanf(line.c_str(), "radial %d", &iv) == 1) tmp.radial = iv;
        else if (std::sscanf(line.c_str(), "rescale %d", &iv) == 1) tmp.rescale = iv;
        else if (std::sscanf(line.c_str(), "trigger %f", &f) == 1) tmp.trigger_threshold = f;
        else if (std::sscanf(line.c_str(), "device %d", &iv) == 1) tmp.gamepad_device = iv;
        else if (std::sscanf(line.c_str(), "compat %d", &iv) == 1) tmp.recomp_compat = iv;
        else if (std::sscanf(line.c_str(), "button %31s %d %31s %31s", a1, &slot, a2, a3) == 4) {
            int b = find_name(kButtonNames, a1);
            if (b < 0 || slot < 0 || slot >= PLAT_PAD_SRC_PER_BUTTON) return -1;
            plat_src r{0, 0};
            if (!std::strcmp(a2, "key")) { r.type = PLAT_SRC_KEY; r.code = find_name(kKeyNames, a3); }
            else if (!std::strcmp(a2, "gbtn")) { r.type = PLAT_SRC_GBTN; r.code = find_name(kGbtnNames, a3); }
            else if (!std::strcmp(a2, "gaxis+")) { r.type = PLAT_SRC_GAXIS_POS; r.code = find_name(kGaxisNames, a3); }
            else if (!std::strcmp(a2, "gaxis-")) { r.type = PLAT_SRC_GAXIS_NEG; r.code = find_name(kGaxisNames, a3); }
            else return -1;
            if (r.code < 0) return -1;
            tmp.button[b][slot] = r;
        } else if (std::sscanf(line.c_str(), "axis %31s %d %31s %31s %31s %d", a1, &slot, k, a2, a3, &inv) == 6 && !std::strcmp(k, "keys")) {
            int ax = find_name(kAxisNames, a1);
            int kn = find_name(kKeyNames, a2), kp = find_name(kKeyNames, a3);
            if (ax < 0 || kn < 0 || kp < 0 || slot < 0 || slot >= PLAT_PAD_SRC_PER_AXIS) return -1;
            tmp.axis[ax][slot] = plat_axis_src{1, kn, kp, 0, inv};
        } else if (std::sscanf(line.c_str(), "axis %31s %d %31s %31s %d", a1, &slot, k, a4, &inv) == 5 && !std::strcmp(k, "gaxis")) {
            int ax = find_name(kAxisNames, a1);
            int ga = find_name(kGaxisNames, a4);
            if (ax < 0 || ga < 0 || slot < 0 || slot >= PLAT_PAD_SRC_PER_AXIS) return -1;
            tmp.axis[ax][slot] = plat_axis_src{2, 0, 0, ga, inv};
        } else return -1;
    }
    *c = tmp;
    return 0;
}

} // extern "C"

// ---- Backend programable ----

struct plat_input_scripted {
    bool key[PLAT_KEY_COUNT] = {};
    bool gb[PLAT_PAD_PORTS][PLAT_GBTN_COUNT] = {};
    float ga[PLAT_PAD_PORTS][PLAT_GAXIS_COUNT] = {};
    bool conn[PLAT_PAD_PORTS] = {};
};

extern "C" {

plat_input_scripted *plat_input_scripted_create(plat_input_backend *be) {
    auto *s = new plat_input_scripted;
    if (be) {
        *be = plat_input_backend{};
        be->user = s;
        be->key_down = [](void *u, int k) { return (int)(k >= 0 && k < PLAT_KEY_COUNT && ((plat_input_scripted *)u)->key[k]); };
        be->gamepad_connected = [](void *u, int d) { return (int)(d >= 0 && d < PLAT_PAD_PORTS && ((plat_input_scripted *)u)->conn[d]); };
        be->gamepad_button = [](void *u, int d, int b) { return (int)(d >= 0 && d < PLAT_PAD_PORTS && b >= 0 && b < PLAT_GBTN_COUNT && ((plat_input_scripted *)u)->gb[d][b]); };
        be->gamepad_axis = [](void *u, int d, int a) { return (d >= 0 && d < PLAT_PAD_PORTS && a >= 0 && a < PLAT_GAXIS_COUNT) ? ((plat_input_scripted *)u)->ga[d][a] : 0.0f; };
    }
    return s;
}
void plat_input_scripted_destroy(plat_input_scripted *s) { delete s; }
void plat_input_scripted_set_key(plat_input_scripted *s, int k, int d) { if (s && k >= 0 && k < PLAT_KEY_COUNT) s->key[k] = d != 0; }
void plat_input_scripted_set_gbtn(plat_input_scripted *s, int dev, int b, int d) {
    if (s && dev >= 0 && dev < PLAT_PAD_PORTS && b >= 0 && b < PLAT_GBTN_COUNT) s->gb[dev][b] = d != 0;
}
void plat_input_scripted_set_gaxis(plat_input_scripted *s, int dev, int a, float v) {
    if (s && dev >= 0 && dev < PLAT_PAD_PORTS && a >= 0 && a < PLAT_GAXIS_COUNT) s->ga[dev][a] = v;
}
void plat_input_scripted_set_connected(plat_input_scripted *s, int dev, int c) {
    if (s && dev >= 0 && dev < PLAT_PAD_PORTS) s->conn[dev] = c != 0;
}

} // extern "C"
