#include "check.h"
#include "plat_pad.h"

#include <cmath>
#include <cstring>
#include <string>

static bool pressed(const uint8_t *r, int b) { return !((r[b < 8 ? 2 : 3] >> (b & 7)) & 1); }

int main() {
    plat_input_backend be;
    plat_input_scripted *in = plat_input_scripted_create(&be);
    plat_pad *p = plat_pad_create(&be);
    uint8_t r[PLAT_PAD_REPORT_SIZE];

    // Reposo.
    CHECK(plat_pad_read(p, 0, r) == 32);
    CHECK(r[0] == 0x00 && r[1] == 0x73 && r[2] == 0xFF && r[3] == 0xFF);
    CHECK(r[4] == 0x80 && r[5] == 0x80 && r[6] == 0x80 && r[7] == 0x80);
    for (int i = 8; i < 20; i++) CHECK(r[i] == 0);
    CHECK(plat_pad_get_state(p, 0) == 6);
    CHECK(plat_pad_get_state(p, 1) == 0);
    CHECK(plat_pad_read(p, 1, r) == 0); // puerto 1 sin mando
    CHECK(plat_pad_read(p, 2, r) == 0);

    // Teclado: X = cruz; flechas = cruceta; activo a 0.
    plat_input_scripted_set_key(in, PLAT_KEY_X, 1);
    plat_input_scripted_set_key(in, PLAT_KEY_UP, 1);
    plat_pad_read(p, 0, r);
    CHECK(pressed(r, PLAT_PAD_CROSS) && pressed(r, PLAT_PAD_UP) && !pressed(r, PLAT_PAD_SQUARE));
    CHECK(r[2] == (uint8_t)~(1u << PLAT_PAD_UP) && r[3] == (uint8_t)~(1u << (PLAT_PAD_CROSS - 8)));
    CHECK(r[8 + 6] == 0xFF && r[8 + 2] == 0xFF && r[8 + 7] == 0x00); // presion cruz, arriba
    plat_input_scripted_set_key(in, PLAT_KEY_X, 0);
    plat_input_scripted_set_key(in, PLAT_KEY_UP, 0);

    // Sticks con teclas (derecho J/L/I/K) a fondo.
    plat_input_scripted_set_key(in, PLAT_KEY_L, 1);
    plat_input_scripted_set_key(in, PLAT_KEY_I, 1);
    plat_pad_read(p, 0, r);
    CHECK(r[4] == 255 && r[5] == 1 && r[6] == 0x80 && r[7] == 0x80);
    plat_input_scripted_set_key(in, PLAT_KEY_L, 0);
    plat_input_scripted_set_key(in, PLAT_KEY_I, 0);

    // Mando en puerto 0 y 1.
    plat_input_scripted_set_connected(in, 0, 1);
    plat_input_scripted_set_connected(in, 1, 1);
    plat_input_scripted_set_gbtn(in, 0, PLAT_GBTN_SOUTH, 1);
    plat_input_scripted_set_gbtn(in, 1, PLAT_GBTN_EAST, 1);
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LTRIG, 0.9f);
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_RTRIG, 0.2f);
    plat_pad_read(p, 0, r);
    CHECK(pressed(r, PLAT_PAD_CROSS) && pressed(r, PLAT_PAD_L2) && !pressed(r, PLAT_PAD_R2) && !pressed(r, PLAT_PAD_CIRCLE));
    CHECK(plat_pad_get_state(p, 1) == 6);
    CHECK(plat_pad_read(p, 1, r) == 32);
    CHECK(pressed(r, PLAT_PAD_CIRCLE) && !pressed(r, PLAT_PAD_CROSS));
    plat_input_scripted_set_gbtn(in, 0, PLAT_GBTN_SOUTH, 0);
    plat_input_scripted_set_gbtn(in, 1, PLAT_GBTN_EAST, 0);
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LTRIG, 0);

    // Deadzone cuadrada con reescalado.
    plat_pad_cfg *c = plat_pad_cfg_get(p, 0);
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LX, 0.10f);
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LY, 0.50f);
    plat_pad_read(p, 0, r);
    CHECK(r[6] == 0x80);                      // 0.10 < 0.15 -> 0
    float expect = (0.50f - 0.15f) / 0.85f;
    CHECK(r[7] == plat_pad_axis_to_byte(expect));
    CHECK(r[7] > 0x80);
    // Sin deadzone
    c->deadzone = 0.0f;
    plat_pad_read(p, 0, r);
    CHECK(r[6] == plat_pad_axis_to_byte(0.10f));
    // Radial: (0.12, 0.12) tiene modulo 0.17 > 0.15 (pasa) pero cuadrada lo anularia.
    c->deadzone = 0.15f;
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LX, 0.12f);
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LY, 0.12f);
    c->radial = 0; plat_pad_read(p, 0, r);
    CHECK(r[6] == 0x80 && r[7] == 0x80);
    c->radial = 1; plat_pad_read(p, 0, r);
    CHECK(r[6] > 0x80 && r[7] > 0x80 && r[6] == r[7]);
    // Radial a fondo en diagonal: el modulo se limita a 1.
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LX, 1.0f);
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LY, 1.0f);
    float ox, oy; plat_pad_apply_deadzone(c, 1.0f, 1.0f, &ox, &oy);
    CHECK(std::fabs(std::sqrt(ox * ox + oy * oy) - 1.0f) < 1e-4f);
    // Extremos y centro del byte.
    CHECK(plat_pad_axis_to_byte(-1.0f) == 1 && plat_pad_axis_to_byte(1.0f) == 255 && plat_pad_axis_to_byte(0.0f) == 128);
    CHECK(plat_pad_axis_to_byte(5.0f) == 255 && plat_pad_axis_to_byte(-5.0f) == 1);
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LX, 0);
    plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LY, 0);
    c->radial = 0;

    // Rebind: Q pasa a ser TRIANGULO (y deja de ser L1); se limpia CIRCULO.
    CHECK(plat_pad_bind_button(p, 0, PLAT_PAD_TRIANGLE, 2, plat_src{PLAT_SRC_KEY, PLAT_KEY_Q}) == 0);
    plat_pad_cfg_get(p, 0)->button[PLAT_PAD_L1][1] = plat_src{0, 0};
    plat_input_scripted_set_key(in, PLAT_KEY_Q, 1);
    plat_input_scripted_set_key(in, PLAT_KEY_C, 1);
    plat_pad_read(p, 0, r);
    CHECK(pressed(r, PLAT_PAD_TRIANGLE) && !pressed(r, PLAT_PAD_L1) && pressed(r, PLAT_PAD_CIRCLE));
    CHECK(plat_pad_clear_button(p, 0, PLAT_PAD_CIRCLE) == 0);
    plat_pad_read(p, 0, r);
    CHECK(!pressed(r, PLAT_PAD_CIRCLE));
    CHECK(plat_pad_bind_button(p, 0, 99, 0, plat_src{0, 0}) == -1 && plat_pad_bind_button(p, 5, 0, 0, plat_src{0, 0}) == -1);
    plat_input_scripted_set_key(in, PLAT_KEY_Q, 0);
    plat_input_scripted_set_key(in, PLAT_KEY_C, 0);

    // Eje invertido por teclas.
    plat_pad_bind_axis(p, 0, PLAT_AXIS_LY, 1, plat_axis_src{1, PLAT_KEY_N, PLAT_KEY_M, 0, 1});
    plat_input_scripted_set_key(in, PLAT_KEY_M, 1);
    plat_pad_read(p, 0, r);
    CHECK(r[7] == 1);
    plat_input_scripted_set_key(in, PLAT_KEY_M, 0);

    // Texto de configuracion: ida y vuelta.
    {
        static char buf[8192];
        CHECK(plat_pad_cfg_to_text(plat_pad_cfg_get(p, 0), buf, sizeof buf) == 0);
        plat_pad_cfg copy;
        std::memset(&copy, 0, sizeof copy);
        CHECK(plat_pad_cfg_from_text(&copy, buf) == 0);
        static char buf2[8192];
        CHECK(plat_pad_cfg_to_text(&copy, buf2, sizeof buf2) == 0);
        CHECK(std::strcmp(buf, buf2) == 0);
        CHECK(copy.button[PLAT_PAD_TRIANGLE][2].code == PLAT_KEY_Q);
        CHECK(plat_pad_cfg_from_text(&copy, "button NOPE 0 key A\n") == -1);
        CHECK(plat_pad_cfg_from_text(&copy, "button CROSS 0 key ZZZ\n") == -1);
    }

    // Informe <-> estado y compat con la recomp.
    {
        plat_pad_state s{}, s2{};
        s.buttons = (1u << PLAT_PAD_START) | (1u << PLAT_PAD_SQUARE);
        s.stick[0] = 1; s.stick[1] = 2; s.stick[2] = 3; s.stick[3] = 4;
        plat_pad_state_to_report(&s, 0, r);
        CHECK(r[0] == 0 && r[4] == 3 && r[5] == 4 && r[6] == 1 && r[7] == 2);
        plat_pad_report_to_state(r, &s2);
        CHECK(s2.buttons == s.buttons && std::memcmp(s.stick, s2.stick, 4) == 0);
        plat_pad_state_to_report(&s, 1, r);
        CHECK(r[0] == 1);
    }

    // Grabar -> guardar -> reproducir en otro plat_pad: mismos informes por tick.
    {
        uint8_t rec_reports[40][PLAT_PAD_REPORT_SIZE];
        CHECK(plat_pad_record_start(p) == 0);
        for (int tick = 0; tick < 40; tick++) {
            plat_pad_set_tick(p, (uint64_t)tick);
            plat_input_scripted_set_key(in, PLAT_KEY_X, tick >= 5 && tick < 15);
            plat_input_scripted_set_key(in, PLAT_KEY_ENTER, tick >= 20 && tick < 22);
            plat_input_scripted_set_gaxis(in, 0, PLAT_GAXIS_LX, tick >= 30 ? 0.8f : 0.0f);
            plat_pad_read(p, 0, rec_reports[tick]);
        }
        plat_pad_record_stop(p);
        CHECK(plat_pad_record_frames(p) == 6); // inicial, X, X off, ENTER, ENTER off, stick
        std::string path = std::string("plat_pad_replay_test.txt");
        CHECK(plat_pad_record_save(p, path.c_str()) == 0);
        plat_pad *q = plat_pad_create(nullptr);
        CHECK(plat_pad_replay_load(q, path.c_str()) == 0 && plat_pad_replaying(q));
        // Lectura repetida varias veces por tick (el juego puede leer mas de una vez): mismo resultado.
        for (int tick = 0; tick < 40; tick++) {
            plat_pad_set_tick(q, (uint64_t)tick);
            for (int rep = 0; rep < 3; rep++) {
                uint8_t rr[PLAT_PAD_REPORT_SIZE];
                CHECK(plat_pad_read(q, 0, rr) == 32);
                CHECK(std::memcmp(rr, rec_reports[tick], 8) == 0);
            }
        }
        CHECK(plat_pad_replay_from_text(q, "5 0 0000 128 128 128 128\n3 0 0001 128 128 128 128\n") == -1);
        CHECK(plat_pad_replay_from_text(q, "basura\n") == -1);
        plat_pad_destroy(q);
        std::remove(path.c_str());
    }
    plat_pad_destroy(p);
    plat_input_scripted_destroy(in);
    DONE("pad");
}
