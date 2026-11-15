// plat_input_sdl3.cpp - backend SDL3 opcional (PLAT_WITH_SDL3). Diseno propio.
// El anfitrion debe haber hecho SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD) y bombear
// los eventos (SDL_PumpEvents / SDL_PollEvent) desde el hilo principal; aqui solo se lee.
#ifdef PLAT_WITH_SDL3
#include "plat_pad.h"

#include <SDL3/SDL.h>

namespace {

struct Sdl3State {
    SDL_Gamepad *pads[PLAT_PAD_PORTS] = {};
};

SDL_Scancode key_to_scancode(int k) {
    if (k >= PLAT_KEY_A && k <= PLAT_KEY_Z) return (SDL_Scancode)(SDL_SCANCODE_A + (k - PLAT_KEY_A));
    if (k == PLAT_KEY_0) return SDL_SCANCODE_0;
    if (k >= PLAT_KEY_1 && k <= PLAT_KEY_9) return (SDL_Scancode)(SDL_SCANCODE_1 + (k - PLAT_KEY_1));
    switch (k) {
    case PLAT_KEY_UP: return SDL_SCANCODE_UP;
    case PLAT_KEY_DOWN: return SDL_SCANCODE_DOWN;
    case PLAT_KEY_LEFT: return SDL_SCANCODE_LEFT;
    case PLAT_KEY_RIGHT: return SDL_SCANCODE_RIGHT;
    case PLAT_KEY_SPACE: return SDL_SCANCODE_SPACE;
    case PLAT_KEY_ENTER: return SDL_SCANCODE_RETURN;
    case PLAT_KEY_ESCAPE: return SDL_SCANCODE_ESCAPE;
    case PLAT_KEY_TAB: return SDL_SCANCODE_TAB;
    case PLAT_KEY_LSHIFT: return SDL_SCANCODE_LSHIFT;
    case PLAT_KEY_RSHIFT: return SDL_SCANCODE_RSHIFT;
    case PLAT_KEY_LCTRL: return SDL_SCANCODE_LCTRL;
    case PLAT_KEY_RCTRL: return SDL_SCANCODE_RCTRL;
    case PLAT_KEY_BACKSPACE: return SDL_SCANCODE_BACKSPACE;
    case PLAT_KEY_KP0: return SDL_SCANCODE_KP_0;
    case PLAT_KEY_KP1: return SDL_SCANCODE_KP_1;
    case PLAT_KEY_KP2: return SDL_SCANCODE_KP_2;
    case PLAT_KEY_KP3: return SDL_SCANCODE_KP_3;
    }
    return SDL_SCANCODE_UNKNOWN;
}

SDL_GamepadButton gbtn_map(int b) {
    switch (b) {
    case PLAT_GBTN_SOUTH: return SDL_GAMEPAD_BUTTON_SOUTH;
    case PLAT_GBTN_EAST: return SDL_GAMEPAD_BUTTON_EAST;
    case PLAT_GBTN_WEST: return SDL_GAMEPAD_BUTTON_WEST;
    case PLAT_GBTN_NORTH: return SDL_GAMEPAD_BUTTON_NORTH;
    case PLAT_GBTN_BACK: return SDL_GAMEPAD_BUTTON_BACK;
    case PLAT_GBTN_GUIDE: return SDL_GAMEPAD_BUTTON_GUIDE;
    case PLAT_GBTN_START: return SDL_GAMEPAD_BUTTON_START;
    case PLAT_GBTN_LSTICK: return SDL_GAMEPAD_BUTTON_LEFT_STICK;
    case PLAT_GBTN_RSTICK: return SDL_GAMEPAD_BUTTON_RIGHT_STICK;
    case PLAT_GBTN_LSHOULDER: return SDL_GAMEPAD_BUTTON_LEFT_SHOULDER;
    case PLAT_GBTN_RSHOULDER: return SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER;
    case PLAT_GBTN_DPAD_UP: return SDL_GAMEPAD_BUTTON_DPAD_UP;
    case PLAT_GBTN_DPAD_DOWN: return SDL_GAMEPAD_BUTTON_DPAD_DOWN;
    case PLAT_GBTN_DPAD_LEFT: return SDL_GAMEPAD_BUTTON_DPAD_LEFT;
    case PLAT_GBTN_DPAD_RIGHT: return SDL_GAMEPAD_BUTTON_DPAD_RIGHT;
    }
    return SDL_GAMEPAD_BUTTON_INVALID;
}

SDL_GamepadAxis gaxis_map(int a) {
    switch (a) {
    case PLAT_GAXIS_LX: return SDL_GAMEPAD_AXIS_LEFTX;
    case PLAT_GAXIS_LY: return SDL_GAMEPAD_AXIS_LEFTY;
    case PLAT_GAXIS_RX: return SDL_GAMEPAD_AXIS_RIGHTX;
    case PLAT_GAXIS_RY: return SDL_GAMEPAD_AXIS_RIGHTY;
    case PLAT_GAXIS_LTRIG: return SDL_GAMEPAD_AXIS_LEFT_TRIGGER;
    case PLAT_GAXIS_RTRIG: return SDL_GAMEPAD_AXIS_RIGHT_TRIGGER;
    }
    return SDL_GAMEPAD_AXIS_INVALID;
}

// Abre (o reabre si se perdio) el mando N-esimo de la lista actual.
SDL_Gamepad *pad_for(Sdl3State *st, int dev) {
    if (dev < 0 || dev >= PLAT_PAD_PORTS) return nullptr;
    if (st->pads[dev] && !SDL_GamepadConnected(st->pads[dev])) {
        SDL_CloseGamepad(st->pads[dev]);
        st->pads[dev] = nullptr;
    }
    if (!st->pads[dev]) {
        int n = 0;
        SDL_JoystickID *ids = SDL_GetGamepads(&n);
        if (ids && dev < n) st->pads[dev] = SDL_OpenGamepad(ids[dev]);
        SDL_free(ids);
    }
    return st->pads[dev];
}

} // namespace

extern "C" {

int plat_input_sdl3_create(plat_input_backend *be) {
    if (!be) return -1;
    auto *st = new Sdl3State;
    *be = plat_input_backend{};
    be->user = st;
    be->poll = [](void *) { SDL_UpdateGamepads(); };
    be->key_down = [](void *, int k) {
        SDL_Scancode sc = key_to_scancode(k);
        if (sc == SDL_SCANCODE_UNKNOWN) return 0;
        int n = 0;
        const bool *ks = SDL_GetKeyboardState(&n);
        return (int)(ks && (int)sc < n && ks[sc]);
    };
    be->gamepad_connected = [](void *u, int d) { return (int)(pad_for((Sdl3State *)u, d) != nullptr); };
    be->gamepad_button = [](void *u, int d, int b) {
        SDL_Gamepad *g = pad_for((Sdl3State *)u, d);
        SDL_GamepadButton sb = gbtn_map(b);
        return (int)(g && sb != SDL_GAMEPAD_BUTTON_INVALID && SDL_GetGamepadButton(g, sb));
    };
    be->gamepad_axis = [](void *u, int d, int a) -> float {
        SDL_Gamepad *g = pad_for((Sdl3State *)u, d);
        SDL_GamepadAxis sa = gaxis_map(a);
        if (!g || sa == SDL_GAMEPAD_AXIS_INVALID) return 0.0f;
        float v = (float)SDL_GetGamepadAxis(g, sa);
        return v < 0 ? v / 32768.0f : v / 32767.0f;
    };
    return 0;
}

void plat_input_sdl3_destroy(plat_input_backend *be) {
    if (!be || !be->user) return;
    auto *st = (Sdl3State *)be->user;
    for (auto *g : st->pads) if (g) SDL_CloseGamepad(g);
    delete st;
    be->user = nullptr;
}

} // extern "C"
#endif
