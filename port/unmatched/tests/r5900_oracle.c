/* SPDX-License-Identifier: AGPL-3.0-or-later */
#include "r5900_oracle.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define RA_SENTINEL 0xFFFFFFF0u

orc_cpu *orc_new(void)
{
    orc_cpu *c = (orc_cpu *)calloc(1, sizeof *c);
    if (!c) return NULL;
    c->mem = (uint8_t *)calloc(1, ORC_MEM_SIZE);
    if (!c->mem) { free(c); return NULL; }
    return c;
}
void orc_free(orc_cpu *c) { if (c) { free(c->mem); free(c); } }

static int rd_all(const char *path, uint8_t **buf, size_t *n)
{
    FILE *f = fopen(path, "rb");
    long len;
    if (!f) return -1;
    if (fseek(f, 0, SEEK_END) || (len = ftell(f)) < 0 || fseek(f, 0, SEEK_SET)) { fclose(f); return -1; }
    *buf = (uint8_t *)malloc((size_t)len);
    if (!*buf || fread(*buf, 1, (size_t)len, f) != (size_t)len) { fclose(f); free(*buf); return -1; }
    fclose(f);
    *n = (size_t)len;
    return 0;
}
static uint32_t le32(const uint8_t *p) { return (uint32_t)p[0] | (uint32_t)p[1] << 8 | (uint32_t)p[2] << 16 | (uint32_t)p[3] << 24; }

int orc_load_elf(orc_cpu *c, const char *path)
{
    uint8_t *d; size_t n; uint32_t ph, i, nph;
    if (rd_all(path, &d, &n)) return -1;
    if (n < 0x34 || memcmp(d, "\x7f""ELF", 4)) { free(d); return -2; }
    ph = le32(d + 0x1c); nph = d[0x2c] | (uint32_t)d[0x2d] << 8;
    for (i = 0; i < nph; i++) {
        const uint8_t *e = d + ph + 32u * i;
        uint32_t type = le32(e), off = le32(e + 4), va = le32(e + 8), fs = le32(e + 16);
        if (type == 1 && fs && (uint64_t)off + fs <= n && (uint64_t)(va & 0x1FFFFFFFu) + fs <= ORC_MEM_SIZE) {
            memcpy(c->mem + (va & 0x1FFFFFFFu), d + off, fs);
            free(d);
            return 0;
        }
    }
    free(d);
    return -3;
}

void orc_hook(orc_cpu *c, uint32_t addr, orc_hook_fn fn, void *user)
{
    if (c->nhooks < 8) { c->hook_addr[c->nhooks] = addr; c->hook_fn[c->nhooks] = fn; c->hook_user[c->nhooks] = user; c->nhooks++; }
}

static int addr_ok(orc_cpu *c, uint32_t a, uint32_t n)
{
    if ((uint64_t)(a & 0x1FFFFFFFu) + n > ORC_MEM_SIZE) { c->err = "acceso fuera de la memoria"; return 0; }
    return 1;
}
static uint32_t rd32(orc_cpu *c, uint32_t a) { return addr_ok(c, a, 4) ? le32(c->mem + (a & 0x1FFFFFFFu)) : 0; }

#define SX16(x) ((int64_t)(int16_t)(x))
#define W32(v) ((uint64_t)(int64_t)(int32_t)(uint32_t)(v))   /* resultado de 32 bits con extension de signo a 64 */

/* Ejecuta UNA instruccion. Devuelve 0 si sigue, -1 si error. next_pc/branch gestionados fuera. */
static int step(orc_cpu *c, uint32_t w, uint32_t pc, int *taken, uint32_t *target)
{
    uint32_t op = w >> 26, rs = (w >> 21) & 31, rt = (w >> 16) & 31, rd = (w >> 11) & 31, sa = (w >> 6) & 31, fn = w & 63;
    uint16_t imm = (uint16_t)w;
    uint64_t *g = c->gpr;
    *taken = 0;
    switch (op) {
    case 0x00:
        switch (fn) {
        case 0x00: if (w) g[rd] = W32((uint32_t)g[rt] << sa); break;                       /* sll (nop si w==0) */
        case 0x08: *taken = 1; *target = (uint32_t)g[rs]; break;                            /* jr */
        case 0x0A: if (g[rt] == 0) g[rd] = g[rs]; break;                                    /* movz */
        case 0x0B: if (g[rt] != 0) g[rd] = g[rs]; break;                                    /* movn */
        case 0x21: g[rd] = W32((uint32_t)g[rs] + (uint32_t)g[rt]); break;                   /* addu */
        case 0x2D: g[rd] = g[rs] + g[rt]; break;                                            /* daddu (move) */
        default: c->err = "SPECIAL no soportado"; return -1;
        }
        break;
    case 0x02: *taken = 1; *target = ((pc + 4) & 0xF0000000u) | ((w & 0x3FFFFFFu) << 2); break; /* j */
    case 0x04: if (g[rs] == g[rt]) { *taken = 1; *target = pc + 4 + ((uint32_t)(int32_t)SX16(imm) << 2); } break; /* beq */
    case 0x05: if (g[rs] != g[rt]) { *taken = 1; *target = pc + 4 + ((uint32_t)(int32_t)SX16(imm) << 2); } break; /* bne */
    case 0x08: g[rt] = W32((uint32_t)g[rs] + (uint32_t)SX16(imm)); break;                   /* addi (sin trampa de overflow: hipotesis) */
    case 0x09: g[rt] = W32((uint32_t)g[rs] + (uint32_t)SX16(imm)); break;                   /* addiu */
    case 0x0B: g[rt] = (uint64_t)g[rs] < (uint64_t)SX16(imm); break;                        /* sltiu (inmediato con signo extendido a 64, comparacion sin signo) */
    case 0x0C: g[rt] = g[rs] & imm; break;                                                  /* andi */
    case 0x0F: g[rt] = W32((uint32_t)imm << 16); break;                                     /* lui */
    case 0x23: { uint32_t a = (uint32_t)g[rs] + (uint32_t)SX16(imm); g[rt] = W32(rd32(c, a)); break; }   /* lw */
    case 0x24: { uint32_t a = (uint32_t)g[rs] + (uint32_t)SX16(imm); g[rt] = addr_ok(c, a, 1) ? c->mem[a & 0x1FFFFFFFu] : 0; break; } /* lbu */
    case 0x28: { uint32_t a = (uint32_t)g[rs] + (uint32_t)SX16(imm); if (addr_ok(c, a, 1)) c->mem[a & 0x1FFFFFFFu] = (uint8_t)g[rt]; break; } /* sb */
    case 0x1E: { uint32_t a = ((uint32_t)g[rs] + (uint32_t)SX16(imm)) & ~15u;               /* lq: ignora los 4 bits bajos */
                 if (addr_ok(c, a, 16)) { memcpy(&g[rt], c->mem + (a & 0x1FFFFFFFu), 8); memcpy(&c->gpr_hi[rt], c->mem + (a & 0x1FFFFFFFu) + 8, 8); } break; }
    case 0x1F: { uint32_t a = ((uint32_t)g[rs] + (uint32_t)SX16(imm)) & ~15u;               /* sq */
                 if (addr_ok(c, a, 16)) { memcpy(c->mem + (a & 0x1FFFFFFFu), &g[rt], 8); memcpy(c->mem + (a & 0x1FFFFFFFu) + 8, &c->gpr_hi[rt], 8); } break; }
    case 0x1C: {                                                                            /* MMI */
        uint8_t s[16], t[16], d[16]; int i;
        memcpy(s, &g[rs], 8); memcpy(s + 8, &c->gpr_hi[rs], 8);
        memcpy(t, &g[rt], 8); memcpy(t + 8, &c->gpr_hi[rt], 8);
        memset(d, 0, 16);
        if (fn == 0x08 && sa == 0x04) {          /* paddh */
            for (i = 0; i < 8; i++) { uint16_t a, b, r; memcpy(&a, s + 2 * i, 2); memcpy(&b, t + 2 * i, 2); r = (uint16_t)(a + b); memcpy(d + 2 * i, &r, 2); }
        } else if (fn == 0x28 && sa == 0x07) {   /* pminh */
            for (i = 0; i < 8; i++) { int16_t a, b, r; memcpy(&a, s + 2 * i, 2); memcpy(&b, t + 2 * i, 2); r = a < b ? a : b; memcpy(d + 2 * i, &r, 2); }
        } else if (fn == 0x08 && sa == 0x07) {   /* pmaxh */
            for (i = 0; i < 8; i++) { int16_t a, b, r; memcpy(&a, s + 2 * i, 2); memcpy(&b, t + 2 * i, 2); r = a > b ? a : b; memcpy(d + 2 * i, &r, 2); }
        } else if (fn == 0x08 && sa == 0x1B) {   /* ppacb */
            for (i = 0; i < 8; i++) { d[i] = t[2 * i]; d[8 + i] = s[2 * i]; }
        } else { c->err = "MMI no soportado"; return -1; }
        if (rd) { memcpy(&g[rd], d, 8); memcpy(&c->gpr_hi[rd], d + 8, 8); }
        break;
    }
    default: c->err = "opcode no soportado"; return -1;
    }
    g[0] = 0; c->gpr_hi[0] = 0;
    return 0;
}

int orc_call(orc_cpu *c, uint32_t entry, unsigned long max_steps)
{
    uint32_t pc = entry;
    c->err = NULL; c->steps = 0;
    c->gpr[31] = RA_SENTINEL;
    while (c->steps < max_steps) {
        int i, taken, dtaken; uint32_t target = 0, dtarget;
        uint32_t w;
        for (i = 0; i < c->nhooks; i++)
            if (c->hook_addr[i] == pc) { c->hook_fn[i](c, c->hook_user[i]); pc = (uint32_t)c->gpr[31]; goto landed; }
        w = rd32(c, pc);
        if (c->err) return -1;
        c->steps++;
        if (step(c, w, pc, &taken, &target)) return -1;
        if (taken) {                              /* ranura de retardo: se ejecuta antes del salto */
            uint32_t dw = rd32(c, pc + 4);
            if (c->err) return -1;
            c->steps++;
            if (step(c, dw, pc + 4, &dtaken, &dtarget)) return -1;
            if (dtaken) { c->err = "salto dentro de ranura de retardo"; return -1; }
            pc = target;
        } else pc += 4;
    landed:
        if (pc == RA_SENTINEL) return 0;
    }
    c->err = "limite de pasos";
    return -1;
}
