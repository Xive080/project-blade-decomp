/* SPDX-License-Identifier: AGPL-3.0-or-later */
/*
 * data_image.c - GENERADO por port/m1/tools/gen_stubs.py. No editar a mano.
 *
 * m1_img: imagen guest [M1_IMG_BASE, M1_IMG_END) (se rellena con el ELF del usuario en tiempo de
 * ejecucion, m1_image_load_elf). Cada simbolo de datos del C decompilado con direccion en el nombre
 * (D_XXXXXXXX, G_xxxx = gp+off, g_0x..., unk_..., y los enlazados a mano en port/m1/data_bindings.txt)
 * es una ETIQUETA dentro de esa imagen: el C decompilado y el codigo portado ven los mismos bytes.
 *   - Mach-O (macOS): la imagen se define en ensamblador con etiquetas `.alt_entry` (Mach-O no admite
 *     alias con desplazamiento). Probado en macOS arm64.
 *   - ELF (Linux): `.set simbolo, m1_img + desplazamiento`. SIN PROBAR (hipotesis).
 *   - MSVC/Windows: no soportado todavia (hipotesis: clang-cl con el mismo ensamblador en linea de ELF/COFF).
 */
#include "m1_gmem.h"


#if defined(__APPLE__)
__asm__(".data\n.p2align 12\n.globl _m1_img\n_m1_img:\n"
    ".zero 160272\n"
    ".globl _D_00127210\n.alt_entry _D_00127210\n_D_00127210:\n"
    ".zero 7104\n"
    ".globl _D_00128DD0\n.alt_entry _D_00128DD0\n_D_00128DD0:\n"
    ".zero 896\n"
    ".globl _D_00129150\n.alt_entry _D_00129150\n_D_00129150:\n"
    ".zero 48\n"
    ".globl _D_00129180\n.alt_entry _D_00129180\n_D_00129180:\n"
    ".zero 11440\n"
    ".globl _D_0012BE30\n.alt_entry _D_0012BE30\n_D_0012BE30:\n"
    ".zero 256\n"
    ".globl _D_0012BF30\n.alt_entry _D_0012BF30\n_D_0012BF30:\n"
    ".zero 224\n"
    ".globl _D_0012C010\n.alt_entry _D_0012C010\n_D_0012C010:\n"
    ".zero 2272\n"
    ".globl _D_0012C8F0\n.alt_entry _D_0012C8F0\n_D_0012C8F0:\n"
    ".zero 1296\n"
    ".globl _D_0012CE00\n.alt_entry _D_0012CE00\n_D_0012CE00:\n"
    ".zero 1424\n"
    ".globl _D_0012D390\n.alt_entry _D_0012D390\n_D_0012D390:\n"
    ".zero 432\n"
    ".globl _D_0012D540\n.alt_entry _D_0012D540\n_D_0012D540:\n"
    ".zero 304\n"
    ".globl _D_0012D670\n.alt_entry _D_0012D670\n_D_0012D670:\n"
    ".zero 2432\n"
    ".globl _D_0012DFF0\n.alt_entry _D_0012DFF0\n_D_0012DFF0:\n"
    ".zero 944\n"
    ".globl _D_0012E3A0\n.alt_entry _D_0012E3A0\n_D_0012E3A0:\n"
    ".zero 8576\n"
    ".globl _D_00130520\n.alt_entry _D_00130520\n_D_00130520:\n"
    ".zero 144\n"
    ".globl _D_001305B0\n.alt_entry _D_001305B0\n_D_001305B0:\n"
    ".zero 14080\n"
    ".globl _D_00133CB0\n.alt_entry _D_00133CB0\n_D_00133CB0:\n"
    ".zero 48432\n"
    ".globl _D_0013F9E0\n.alt_entry _D_0013F9E0\n_D_0013F9E0:\n"
    ".zero 1568\n"
    ".globl _D_00140000\n.alt_entry _D_00140000\n_D_00140000:\n"
    ".zero 20528\n"
    ".globl _D_00145030\n.alt_entry _D_00145030\n_D_00145030:\n"
    ".zero 29264\n"
    ".globl _D_0014C280\n.alt_entry _D_0014C280\n_D_0014C280:\n"
    ".zero 3280\n"
    ".globl _D_0014CF50\n.alt_entry _D_0014CF50\n_D_0014CF50:\n"
    ".zero 64\n"
    ".globl _D_0014CF90\n.alt_entry _D_0014CF90\n_D_0014CF90:\n"
    ".zero 352\n"
    ".globl _D_0014D0F0\n.alt_entry _D_0014D0F0\n_D_0014D0F0:\n"
    ".zero 64\n"
    ".globl _D_0014D130\n.alt_entry _D_0014D130\n_D_0014D130:\n"
    ".zero 19552\n"
    ".globl _D_00151D90\n.alt_entry _D_00151D90\n_D_00151D90:\n"
    ".zero 6128\n"
    ".globl _D_00153580\n.alt_entry _D_00153580\n_D_00153580:\n"
    ".zero 2192\n"
    ".globl _D_00153E10\n.alt_entry _D_00153E10\n_D_00153E10:\n"
    ".zero 3952\n"
    ".globl _D_00154D80\n.alt_entry _D_00154D80\n_D_00154D80:\n"
    ".zero 1312\n"
    ".globl _D_001552A0\n.alt_entry _D_001552A0\n_D_001552A0:\n"
    ".zero 29952\n"
    ".globl _D_0015C7A0\n.alt_entry _D_0015C7A0\n_D_0015C7A0:\n"
    ".zero 160\n"
    ".globl _D_0015C840\n.alt_entry _D_0015C840\n_D_0015C840:\n"
    ".zero 16\n"
    ".globl _D_0015C850\n.alt_entry _D_0015C850\n_D_0015C850:\n"
    ".zero 16048\n"
    ".globl _D_00160700\n.alt_entry _D_00160700\n_D_00160700:\n"
    ".zero 46848\n"
    ".globl _D_0016BE00\n.alt_entry _D_0016BE00\n_D_0016BE00:\n"
    ".zero 16\n"
    ".globl _D_0016BE10\n.alt_entry _D_0016BE10\n_D_0016BE10:\n"
    ".zero 640\n"
    ".globl _D_0016C090\n.alt_entry _D_0016C090\n_D_0016C090:\n"
    ".zero 112\n"
    ".globl _D_0016C100\n.alt_entry _D_0016C100\n_D_0016C100:\n"
    ".zero 64\n"
    ".globl _D_0016C140\n.alt_entry _D_0016C140\n_D_0016C140:\n"
    ".zero 16\n"
    ".globl _D_0016C150\n.alt_entry _D_0016C150\n_D_0016C150:\n"
    ".zero 48\n"
    ".globl _D_0016C180\n.alt_entry _D_0016C180\n_D_0016C180:\n"
    ".zero 32\n"
    ".globl _D_0016C1A0\n.alt_entry _D_0016C1A0\n_D_0016C1A0:\n"
    ".zero 12432\n"
    ".globl _D_0016F230\n.alt_entry _D_0016F230\n_D_0016F230:\n"
    ".zero 7520\n"
    ".globl _D_00170F90\n.alt_entry _D_00170F90\n_D_00170F90:\n"
    ".zero 11168\n"
    ".globl _D_00173B30\n.alt_entry _D_00173B30\n_D_00173B30:\n"
    ".zero 288\n"
    ".globl _D_00173C50\n.alt_entry _D_00173C50\n_D_00173C50:\n"
    ".zero 15856\n"
    ".globl _D_00177A40\n.alt_entry _D_00177A40\n_D_00177A40:\n"
    ".zero 17920\n"
    ".globl _D_0017C040\n.alt_entry _D_0017C040\n_D_0017C040:\n"
    ".zero 9232\n"
    ".globl _D_0017E450\n.alt_entry _D_0017E450\n_D_0017E450:\n"
    ".zero 8832\n"
    ".globl _D_001806D0\n.alt_entry _D_001806D0\n_D_001806D0:\n"
    ".zero 5184\n"
    ".globl _D_00181B10\n.alt_entry _D_00181B10\n_D_00181B10:\n"
    ".zero 64\n"
    ".globl _D_00181B50\n.alt_entry _D_00181B50\n_D_00181B50:\n"
    ".zero 21680\n"
    ".globl _g_unk_00187000\n.alt_entry _g_unk_00187000\n_g_unk_00187000:\n"
    ".zero 8\n"
    ".globl _g_unk_00187008\n.alt_entry _g_unk_00187008\n_g_unk_00187008:\n"
    ".zero 364\n"
    ".globl _g_unk_00187174\n.alt_entry _g_unk_00187174\n_g_unk_00187174:\n"
    ".zero 5580\n"
    ".globl _g_unk_00188740\n.alt_entry _g_unk_00188740\n_g_unk_00188740:\n"
    ".zero 4\n"
    ".globl _g_unk_00188744\n.alt_entry _g_unk_00188744\n_g_unk_00188744:\n"
    ".zero 764\n"
    ".globl _g_unk_00188A40\n.alt_entry _g_unk_00188A40\n_g_unk_00188A40:\n"
    ".zero 716\n"
    ".globl _g_unk_00188D0C\n.alt_entry _g_unk_00188D0C\n_g_unk_00188D0C:\n"
    ".zero 4\n"
    ".globl _g_unk_00188D10\n.alt_entry _g_unk_00188D10\n_g_unk_00188D10:\n"
    ".zero 8\n"
    ".globl _g_unk_00188D18\n.alt_entry _g_unk_00188D18\n_g_unk_00188D18:\n"
    ".zero 168\n"
    ".globl _g_unk_00188DC0\n.alt_entry _g_unk_00188DC0\n_g_unk_00188DC0:\n"
    ".zero 10704\n"
    ".globl _D_0018B790\n.alt_entry _D_0018B790\n_D_0018B790:\n"
    ".zero 47680\n"
    ".globl _D_001971D0\n.alt_entry _D_001971D0\n_D_001971D0:\n"
    ".zero 3584\n"
    ".globl _D_00197FD0\n.alt_entry _D_00197FD0\n_D_00197FD0:\n"
    ".zero 139360\n"
    ".globl _D_001BA030\n.alt_entry _D_001BA030\n_D_001BA030:\n"
    ".zero 448\n"
    ".globl _D_001BA1F0\n.alt_entry _D_001BA1F0\n_D_001BA1F0:\n"
    ".zero 2192\n"
    ".globl _D_001BAA80\n.alt_entry _D_001BAA80\n_D_001BAA80:\n"
    ".zero 304\n"
    ".globl _D_001BABB0\n.alt_entry _D_001BABB0\n_D_001BABB0:\n"
    ".zero 263456\n"
    ".globl _D_001FB0D0\n.alt_entry _D_001FB0D0\n_D_001FB0D0:\n"
    ".zero 7728\n"
    ".globl _D_001FCF00\n.alt_entry _D_001FCF00\n_D_001FCF00:\n"
    ".zero 240\n"
    ".globl _D_001FCFF0\n.alt_entry _D_001FCFF0\n_D_001FCFF0:\n"
    ".zero 1648\n"
    ".globl _D_001FD660\n.alt_entry _D_001FD660\n_D_001FD660:\n"
    ".zero 1632\n"
    ".globl _D_001FDCC0\n.alt_entry _D_001FDCC0\n_D_001FDCC0:\n"
    ".zero 272\n"
    ".globl _D_001FDDD0\n.alt_entry _D_001FDDD0\n_D_001FDDD0:\n"
    ".zero 192\n"
    ".globl _D_001FDE90\n.alt_entry _D_001FDE90\n_D_001FDE90:\n"
    ".zero 112\n"
    ".globl _D_001FDF00\n.alt_entry _D_001FDF00\n_D_001FDF00:\n"
    ".zero 384\n"
    ".globl _D_001FE080\n.alt_entry _D_001FE080\n_D_001FE080:\n"
    ".zero 133040\n"
    ".globl _D_0021E830\n.alt_entry _D_0021E830\n_D_0021E830:\n"
    ".zero 288\n"
    ".globl _D_0021E950\n.alt_entry _D_0021E950\n_D_0021E950:\n"
    ".zero 160\n"
    ".globl _D_0021E9F0\n.alt_entry _D_0021E9F0\n_D_0021E9F0:\n"
    ".zero 64\n"
    ".globl _D_0021EA30\n.alt_entry _D_0021EA30\n_D_0021EA30:\n"
    ".zero 16432\n"
    ".globl _D_00222A60\n.alt_entry _D_00222A60\n_D_00222A60:\n"
    ".zero 560\n"
    ".globl _D_00222C90\n.alt_entry _D_00222C90\n_D_00222C90:\n"
    ".zero 1920\n"
    ".globl _D_00223410\n.alt_entry _D_00223410\n_D_00223410:\n"
    ".zero 304\n"
    ".globl _D_00223540\n.alt_entry _D_00223540\n_D_00223540:\n"
    ".zero 1200\n"
    ".globl _D_002239F0\n.alt_entry _D_002239F0\n_D_002239F0:\n"
    ".zero 1200\n"
    ".globl _D_00223EA0\n.alt_entry _D_00223EA0\n_D_00223EA0:\n"
    ".zero 320\n"
    ".globl _D_00223FE0\n.alt_entry _D_00223FE0\n_D_00223FE0:\n"
    ".zero 64\n"
    ".globl _D_00224020\n.alt_entry _D_00224020\n_D_00224020:\n"
    ".zero 304\n"
    ".globl _D_00224150\n.alt_entry _D_00224150\n_D_00224150:\n"
    ".zero 304\n"
    ".globl _D_00224280\n.alt_entry _D_00224280\n_D_00224280:\n"
    ".zero 64\n"
    ".globl _D_002242C0\n.alt_entry _D_002242C0\n_D_002242C0:\n"
    ".zero 112\n"
    ".globl _D_00224330\n.alt_entry _D_00224330\n_D_00224330:\n"
    ".zero 304\n"
    ".globl _D_00224460\n.alt_entry _D_00224460\n_D_00224460:\n"
    ".zero 336\n"
    ".globl _D_002245B0\n.alt_entry _D_002245B0\n_D_002245B0:\n"
    ".zero 15520\n"
    ".globl _D_00228250\n.alt_entry _D_00228250\n_D_00228250:\n"
    ".zero 17056\n"
    ".globl _D_0022C4F0\n.alt_entry _D_0022C4F0\n_D_0022C4F0:\n"
    ".zero 1312\n"
    ".globl _D_0022CA10\n.alt_entry _D_0022CA10\n_D_0022CA10:\n"
    ".zero 688\n"
    ".globl _D_0022CCC0\n.alt_entry _D_0022CCC0\n_D_0022CCC0:\n"
    ".zero 144\n"
    ".globl _D_0022CD50\n.alt_entry _D_0022CD50\n_D_0022CD50:\n"
    ".zero 336\n"
    ".globl _D_0022CEA0\n.alt_entry _D_0022CEA0\n_D_0022CEA0:\n"
    ".zero 128\n"
    ".globl _D_0022CF20\n.alt_entry _D_0022CF20\n_D_0022CF20:\n"
    ".zero 1008\n"
    ".globl _D_0022D310\n.alt_entry _D_0022D310\n_D_0022D310:\n"
    ".zero 14336\n"
    ".globl _D_00230B10\n.alt_entry _D_00230B10\n_D_00230B10:\n"
    ".zero 42416\n"
    ".globl _off_23b0c0\n.alt_entry _off_23b0c0\n_off_23b0c0:\n"
    ".zero 3152\n"
    ".globl _off_23bd10\n.alt_entry _off_23bd10\n_off_23bd10:\n"
    ".zero 32\n"
    ".globl _off_23bd30\n.alt_entry _off_23bd30\n_off_23bd30:\n"
    ".zero 288\n"
    ".globl _off_23be50\n.alt_entry _off_23be50\n_off_23be50:\n"
    ".zero 27584\n"
    ".globl _D_00242A10\n.alt_entry _D_00242A10\n_D_00242A10:\n"
    ".zero 272\n"
    ".globl _D_00242B20\n.alt_entry _D_00242B20\n_D_00242B20:\n"
    ".zero 736\n"
    ".globl _D_00242E00\n.alt_entry _D_00242E00\n_D_00242E00:\n"
    ".zero 656\n"
    ".globl _D_00243090\n.alt_entry _D_00243090\n_D_00243090:\n"
    ".zero 160\n"
    ".globl _D_00243130\n.alt_entry _D_00243130\n_D_00243130:\n"
    ".zero 16\n"
    ".globl _D_00243140\n.alt_entry _D_00243140\n_D_00243140:\n"
    ".zero 192\n"
    ".globl _D_00243200\n.alt_entry _D_00243200\n_D_00243200:\n"
    ".zero 48\n"
    ".globl _D_00243230\n.alt_entry _D_00243230\n_D_00243230:\n"
    ".zero 96\n"
    ".globl _D_00243290\n.alt_entry _D_00243290\n_D_00243290:\n"
    ".zero 80\n"
    ".globl _D_002432E0\n.alt_entry _D_002432E0\n_D_002432E0:\n"
    ".zero 17056\n"
    ".globl _D_00247580\n.alt_entry _D_00247580\n_D_00247580:\n"
    ".zero 512\n"
    ".globl _off_247780\n.alt_entry _off_247780\n_off_247780:\n"
    ".zero 12560\n"
    ".globl _D_0024A890\n.alt_entry _D_0024A890\n_D_0024A890:\n"
    ".zero 1136\n"
    ".globl _D_0024AD00\n.alt_entry _D_0024AD00\n_D_0024AD00:\n"
    ".zero 32\n"
    ".globl _D_0024AD20\n.alt_entry _D_0024AD20\n_D_0024AD20:\n"
    ".zero 144\n"
    ".globl _D_0024ADB0\n.alt_entry _D_0024ADB0\n_D_0024ADB0:\n"
    ".zero 208\n"
    ".globl _D_0024AE80\n.alt_entry _D_0024AE80\n_D_0024AE80:\n"
    ".zero 80\n"
    ".globl _D_0024AED0\n.alt_entry _D_0024AED0\n_D_0024AED0:\n"
    ".zero 80\n"
    ".globl _D_0024AF20\n.alt_entry _D_0024AF20\n_D_0024AF20:\n"
    ".zero 32\n"
    ".globl _D_0024AF40\n.alt_entry _D_0024AF40\n_D_0024AF40:\n"
    ".zero 16\n"
    ".globl _D_0024AF50\n.alt_entry _D_0024AF50\n_D_0024AF50:\n"
    ".zero 324672\n"
    ".globl _D_0029A390\n.alt_entry _D_0029A390\n_D_0029A390:\n"
    ".zero 640\n"
    ".globl _D_0029A610\n.alt_entry _D_0029A610\n_D_0029A610:\n"
    ".zero 8304\n"
    ".globl _D_0029C680\n.alt_entry _D_0029C680\n_D_0029C680:\n"
    ".zero 8384\n"
    ".globl _D_0029E740\n.alt_entry _D_0029E740\n_D_0029E740:\n"
    ".zero 8304\n"
    ".globl _D_002A07B0\n.alt_entry _D_002A07B0\n_D_002A07B0:\n"
    ".zero 210912\n"
    ".globl _D_002D3F90\n.alt_entry _D_002D3F90\n_D_002D3F90:\n"
    ".zero 17312\n"
    ".globl _D_002D8330\n.alt_entry _D_002D8330\n_D_002D8330:\n"
    ".zero 23544\n"
    ".globl _D_002DDF28\n.alt_entry _D_002DDF28\n_D_002DDF28:\n"
    ".zero 200\n"
    ".globl _D_002DDFF0\n.alt_entry _D_002DDFF0\n_D_002DDFF0:\n"
    ".zero 1408\n"
    ".globl _D_002DE570\n.alt_entry _D_002DE570\n_D_002DE570:\n"
    ".zero 7248\n"
    ".globl _D_002E01C0\n.alt_entry _D_002E01C0\n_D_002E01C0:\n"
    ".zero 496\n"
    ".globl _D_002E03B0\n.alt_entry _D_002E03B0\n_D_002E03B0:\n"
    ".zero 48\n"
    ".globl _D_002E03E0\n.alt_entry _D_002E03E0\n_D_002E03E0:\n"
    ".zero 704\n"
    ".globl _D_002E06A0\n.alt_entry _D_002E06A0\n_D_002E06A0:\n"
    ".zero 64\n"
    ".globl _D_002E06E0\n.alt_entry _D_002E06E0\n_D_002E06E0:\n"
    ".zero 32\n"
    ".globl _D_002E0700\n.alt_entry _D_002E0700\n_D_002E0700:\n"
    ".zero 3792\n"
    ".globl _D_002E15D0\n.alt_entry _D_002E15D0\n_D_002E15D0:\n"
    ".zero 32\n"
    ".globl _D_002E15F0\n.alt_entry _D_002E15F0\n_D_002E15F0:\n"
    ".zero 208\n"
    ".globl _D_002E16C0\n.alt_entry _D_002E16C0\n_D_002E16C0:\n"
    ".zero 3696\n"
    ".globl _D_002E2530\n.alt_entry _D_002E2530\n_D_002E2530:\n"
    ".zero 112\n"
    ".globl _D_002E25A0\n.alt_entry _D_002E25A0\n_D_002E25A0:\n"
    ".zero 1808\n"
    ".globl _D_002E2CB0\n.alt_entry _D_002E2CB0\n_D_002E2CB0:\n"
    ".zero 512\n"
    ".globl _D_002E2EB0\n.alt_entry _D_002E2EB0\n_D_002E2EB0:\n"
    ".zero 912\n"
    ".globl _D_002E3240\n.alt_entry _D_002E3240\n_D_002E3240:\n"
    ".globl _g_0x2E3240\n.alt_entry _g_0x2E3240\n_g_0x2E3240:\n"
    ".zero 4\n"
    ".globl _D_002E3244\n.alt_entry _D_002E3244\n_D_002E3244:\n"
    ".zero 4\n"
    ".globl _D_002E3248\n.alt_entry _D_002E3248\n_D_002E3248:\n"
    ".zero 4\n"
    ".globl _D_002E324C\n.alt_entry _D_002E324C\n_D_002E324C:\n"
    ".zero 4\n"
    ".globl _D_002E3250\n.alt_entry _D_002E3250\n_D_002E3250:\n"
    ".zero 4\n"
    ".globl _D_002E3254\n.alt_entry _D_002E3254\n_D_002E3254:\n"
    ".zero 4\n"
    ".globl _g_0x2E3258\n.alt_entry _g_0x2E3258\n_g_0x2E3258:\n"
    ".zero 4\n"
    ".globl _g_0x2E325C\n.alt_entry _g_0x2E325C\n_g_0x2E325C:\n"
    ".zero 4\n"
    ".globl _g_0x2E3260\n.alt_entry _g_0x2E3260\n_g_0x2E3260:\n"
    ".zero 4\n"
    ".globl _D_002E3264\n.alt_entry _D_002E3264\n_D_002E3264:\n"
    ".globl _g_0x2E3264\n.alt_entry _g_0x2E3264\n_g_0x2E3264:\n"
    ".zero 4\n"
    ".globl _D_002E3268\n.alt_entry _D_002E3268\n_D_002E3268:\n"
    ".zero 4\n"
    ".globl _D_002E326C\n.alt_entry _D_002E326C\n_D_002E326C:\n"
    ".zero 916\n"
    ".globl _D_002E3600\n.alt_entry _D_002E3600\n_D_002E3600:\n"
    ".zero 4\n"
    ".globl _D_002E3604\n.alt_entry _D_002E3604\n_D_002E3604:\n"
    ".zero 24\n"
    ".globl _D_002E361C\n.alt_entry _D_002E361C\n_D_002E361C:\n"
    ".globl _g_0x2E361C\n.alt_entry _g_0x2E361C\n_g_0x2E361C:\n"
    ".globl _unk_2E361C\n.alt_entry _unk_2E361C\n_unk_2E361C:\n"
    ".zero 4\n"
    ".globl _g_0x2E3620\n.alt_entry _g_0x2E3620\n_g_0x2E3620:\n"
    ".globl _unk_2E3620\n.alt_entry _unk_2E3620\n_unk_2E3620:\n"
    ".zero 4\n"
    ".globl _g_0x2E3624\n.alt_entry _g_0x2E3624\n_g_0x2E3624:\n"
    ".zero 4\n"
    ".globl _g_0x2E3628\n.alt_entry _g_0x2E3628\n_g_0x2E3628:\n"
    ".zero 4\n"
    ".globl _g_0x2E362C\n.alt_entry _g_0x2E362C\n_g_0x2E362C:\n"
    ".zero 4\n"
    ".globl _D_002E3630\n.alt_entry _D_002E3630\n_D_002E3630:\n"
    ".zero 4\n"
    ".globl _D_002E3634\n.alt_entry _D_002E3634\n_D_002E3634:\n"
    ".zero 44\n"
    ".globl _D_002E3660\n.alt_entry _D_002E3660\n_D_002E3660:\n"
    ".zero 4\n"
    ".globl _D_002E3664\n.alt_entry _D_002E3664\n_D_002E3664:\n"
    ".zero 4\n"
    ".globl _D_002E3668\n.alt_entry _D_002E3668\n_D_002E3668:\n"
    ".zero 180\n"
    ".globl _D_002E371C\n.alt_entry _D_002E371C\n_D_002E371C:\n"
    ".zero 804\n"
    ".globl _unk_2E3A40\n.alt_entry _unk_2E3A40\n_unk_2E3A40:\n"
    ".zero 320\n"
    ".globl _unk_2E3B80\n.alt_entry _unk_2E3B80\n_unk_2E3B80:\n"
    ".zero 272\n"
    ".globl _D_002E3C90\n.alt_entry _D_002E3C90\n_D_002E3C90:\n"
    ".zero 192\n"
    ".globl _unk_2E3D50\n.alt_entry _unk_2E3D50\n_unk_2E3D50:\n"
    ".zero 224\n"
    ".globl _unk_2E3E30\n.alt_entry _unk_2E3E30\n_unk_2E3E30:\n"
    ".zero 224\n"
    ".globl _unk_2E3F10\n.alt_entry _unk_2E3F10\n_unk_2E3F10:\n"
    ".zero 368\n"
    ".globl _unk_2E4080\n.alt_entry _unk_2E4080\n_unk_2E4080:\n"
    ".zero 176\n"
    ".globl _unk_2E4130\n.alt_entry _unk_2E4130\n_unk_2E4130:\n"
    ".zero 192\n"
    ".globl _unk_2E41F0\n.alt_entry _unk_2E41F0\n_unk_2E41F0:\n"
    ".zero 208\n"
    ".globl _unk_2E42C0\n.alt_entry _unk_2E42C0\n_unk_2E42C0:\n"
    ".zero 240\n"
    ".globl _unk_2E43B0\n.alt_entry _unk_2E43B0\n_unk_2E43B0:\n"
    ".zero 3344\n"
    ".globl _g_0x2E50C0\n.alt_entry _g_0x2E50C0\n_g_0x2E50C0:\n"
    ".zero 368\n"
    ".globl _unk_2E5230\n.alt_entry _unk_2E5230\n_unk_2E5230:\n"
    ".zero 224\n"
    ".globl _unk_2E5310\n.alt_entry _unk_2E5310\n_unk_2E5310:\n"
    ".zero 224\n"
    ".globl _unk_2E53F0\n.alt_entry _unk_2E53F0\n_unk_2E53F0:\n"
    ".zero 208\n"
    ".globl _unk_2E54C0\n.alt_entry _unk_2E54C0\n_unk_2E54C0:\n"
    ".zero 176\n"
    ".globl _unk_2E5570\n.alt_entry _unk_2E5570\n_unk_2E5570:\n"
    ".zero 176\n"
    ".globl _unk_2E5620\n.alt_entry _unk_2E5620\n_unk_2E5620:\n"
    ".zero 144\n"
    ".globl _unk_2E56B0\n.alt_entry _unk_2E56B0\n_unk_2E56B0:\n"
    ".zero 240\n"
    ".globl _unk_2E57A0\n.alt_entry _unk_2E57A0\n_unk_2E57A0:\n"
    ".zero 320\n"
    ".globl _D_002E58E0\n.alt_entry _D_002E58E0\n_D_002E58E0:\n"
    ".zero 16\n"
    ".globl _D_002E58F0\n.alt_entry _D_002E58F0\n_D_002E58F0:\n"
    ".zero 32\n"
    ".globl _D_002E5910\n.alt_entry _D_002E5910\n_D_002E5910:\n"
    ".zero 16\n"
    ".globl _D_002E5920\n.alt_entry _D_002E5920\n_D_002E5920:\n"
    ".zero 16\n"
    ".globl _D_002E5930\n.alt_entry _D_002E5930\n_D_002E5930:\n"
    ".zero 416\n"
    ".globl _D_002E5AD0\n.alt_entry _D_002E5AD0\n_D_002E5AD0:\n"
    ".zero 1296\n"
    ".globl _unk_2E5FE0\n.alt_entry _unk_2E5FE0\n_unk_2E5FE0:\n"
    ".zero 1824\n"
    ".globl _D_002E6700\n.alt_entry _D_002E6700\n_D_002E6700:\n"
    ".zero 48\n"
    ".globl _D_002E6730\n.alt_entry _D_002E6730\n_D_002E6730:\n"
    ".zero 8328\n"
    ".globl _D_002E87B8\n.alt_entry _D_002E87B8\n_D_002E87B8:\n"
    ".zero 56\n"
    ".globl _D_002E87F0\n.alt_entry _D_002E87F0\n_D_002E87F0:\n"
    ".zero 14328\n"
    ".globl _D_002EBFE8\n.alt_entry _D_002EBFE8\n_D_002EBFE8:\n"
    ".zero 152\n"
    ".globl _D_002EC080\n.alt_entry _D_002EC080\n_D_002EC080:\n"
    ".zero 16\n"
    ".globl _D_002EC090\n.alt_entry _D_002EC090\n_D_002EC090:\n"
    ".zero 8\n"
    ".globl _D_002EC098\n.alt_entry _D_002EC098\n_D_002EC098:\n"
    ".zero 15712\n"
    ".globl _D_002EFDF8\n.alt_entry _D_002EFDF8\n_D_002EFDF8:\n"
    ".zero 24\n"
    ".globl _D_002EFE10\n.alt_entry _D_002EFE10\n_D_002EFE10:\n"
    ".zero 16\n"
    ".globl _D_002EFE20\n.alt_entry _D_002EFE20\n_D_002EFE20:\n"
    ".zero 16\n"
    ".globl _D_002EFE30\n.alt_entry _D_002EFE30\n_D_002EFE30:\n"
    ".zero 8\n"
    ".globl _D_002EFE38\n.alt_entry _D_002EFE38\n_D_002EFE38:\n"
    ".zero 456\n"
    ".globl _D_002F0000\n.alt_entry _D_002F0000\n_D_002F0000:\n"
    ".zero 16\n"
    ".globl _D_002F0010\n.alt_entry _D_002F0010\n_D_002F0010:\n"
    ".zero 8\n"
    ".globl _D_002F0018\n.alt_entry _D_002F0018\n_D_002F0018:\n"
    ".zero 152\n"
    ".globl _D_002F00B0\n.alt_entry _D_002F00B0\n_D_002F00B0:\n"
    ".zero 96\n"
    ".globl _D_002F0110\n.alt_entry _D_002F0110\n_D_002F0110:\n"
    ".zero 16\n"
    ".globl _D_002F0120\n.alt_entry _D_002F0120\n_D_002F0120:\n"
    ".zero 272\n"
    ".globl _D_002F0230\n.alt_entry _D_002F0230\n_D_002F0230:\n"
    ".zero 152\n"
    ".globl _D_002F02C8\n.alt_entry _D_002F02C8\n_D_002F02C8:\n"
    ".zero 8\n"
    ".globl _D_002F02D0\n.alt_entry _D_002F02D0\n_D_002F02D0:\n"
    ".zero 8\n"
    ".globl _D_002F02D8\n.alt_entry _D_002F02D8\n_D_002F02D8:\n"
    ".zero 8\n"
    ".globl _D_002F02E0\n.alt_entry _D_002F02E0\n_D_002F02E0:\n"
    ".zero 8\n"
    ".globl _D_002F02E8\n.alt_entry _D_002F02E8\n_D_002F02E8:\n"
    ".zero 16\n"
    ".globl _D_002F02F8\n.alt_entry _D_002F02F8\n_D_002F02F8:\n"
    ".zero 8\n"
    ".globl _D_002F0300\n.alt_entry _D_002F0300\n_D_002F0300:\n"
    ".zero 16\n"
    ".globl _D_002F0310\n.alt_entry _D_002F0310\n_D_002F0310:\n"
    ".zero 8\n"
    ".globl _D_002F0318\n.alt_entry _D_002F0318\n_D_002F0318:\n"
    ".zero 8\n"
    ".globl _D_002F0320\n.alt_entry _D_002F0320\n_D_002F0320:\n"
    ".zero 16\n"
    ".globl _D_002F0330\n.alt_entry _D_002F0330\n_D_002F0330:\n"
    ".zero 1888\n"
    ".globl _D_002F0A90\n.alt_entry _D_002F0A90\n_D_002F0A90:\n"
    ".zero 16\n"
    ".globl _D_002F0AA0\n.alt_entry _D_002F0AA0\n_D_002F0AA0:\n"
    ".zero 360\n"
    ".globl _D_002F0C08\n.alt_entry _D_002F0C08\n_D_002F0C08:\n"
    ".zero 16\n"
    ".globl _D_002F0C18\n.alt_entry _D_002F0C18\n_D_002F0C18:\n"
    ".zero 8\n"
    ".globl _D_002F0C20\n.alt_entry _D_002F0C20\n_D_002F0C20:\n"
    ".zero 32\n"
    ".globl _D_002F0C40\n.alt_entry _D_002F0C40\n_D_002F0C40:\n"
    ".zero 32\n"
    ".globl _D_002F0C60\n.alt_entry _D_002F0C60\n_D_002F0C60:\n"
    ".zero 16\n"
    ".globl _D_002F0C70\n.alt_entry _D_002F0C70\n_D_002F0C70:\n"
    ".zero 32\n"
    ".globl _D_002F0C90\n.alt_entry _D_002F0C90\n_D_002F0C90:\n"
    ".zero 32\n"
    ".globl _D_002F0CB0\n.alt_entry _D_002F0CB0\n_D_002F0CB0:\n"
    ".zero 16\n"
    ".globl _D_002F0CC0\n.alt_entry _D_002F0CC0\n_D_002F0CC0:\n"
    ".zero 560\n"
    ".globl _D_002F0EF0\n.alt_entry _D_002F0EF0\n_D_002F0EF0:\n"
    ".zero 8\n"
    ".globl _D_002F0EF8\n.alt_entry _D_002F0EF8\n_D_002F0EF8:\n"
    ".zero 8\n"
    ".globl _D_002F0F00\n.alt_entry _D_002F0F00\n_D_002F0F00:\n"
    ".zero 8\n"
    ".globl _D_002F0F08\n.alt_entry _D_002F0F08\n_D_002F0F08:\n"
    ".zero 8\n"
    ".globl _D_002F0F10\n.alt_entry _D_002F0F10\n_D_002F0F10:\n"
    ".zero 152\n"
    ".globl _D_002F0FA8\n.alt_entry _D_002F0FA8\n_D_002F0FA8:\n"
    ".zero 1904\n"
    ".globl _G_8028\n.alt_entry _G_8028\n_G_8028:\n"
    ".zero 32\n"
    ".globl _G_8048\n.alt_entry _G_8048\n_G_8048:\n"
    ".zero 20\n"
    ".globl _G_805C\n.alt_entry _G_805C\n_G_805C:\n"
    ".zero 4\n"
    ".globl _G_8060\n.alt_entry _G_8060\n_G_8060:\n"
    ".zero 12\n"
    ".globl _G_806C\n.alt_entry _G_806C\n_G_806C:\n"
    ".zero 20\n"
    ".globl _G_8080\n.alt_entry _G_8080\n_G_8080:\n"
    ".zero 144\n"
    ".globl _G_8110\n.alt_entry _G_8110\n_G_8110:\n"
    ".zero 8\n"
    ".globl _G_8118\n.alt_entry _G_8118\n_G_8118:\n"
    ".zero 352\n"
    ".globl _G_8278\n.alt_entry _G_8278\n_G_8278:\n"
    ".zero 24\n"
    ".globl _G_8290\n.alt_entry _G_8290\n_G_8290:\n"
    ".zero 8\n"
    ".globl _G_8298\n.alt_entry _G_8298\n_G_8298:\n"
    ".zero 8\n"
    ".globl _G_82A0\n.alt_entry _G_82A0\n_G_82A0:\n"
    ".zero 4\n"
    ".globl _G_82A4\n.alt_entry _G_82A4\n_G_82A4:\n"
    ".zero 108\n"
    ".globl _G_8310\n.alt_entry _G_8310\n_G_8310:\n"
    ".zero 8\n"
    ".globl _G_8318\n.alt_entry _G_8318\n_G_8318:\n"
    ".zero 12\n"
    ".globl _G_8324\n.alt_entry _G_8324\n_G_8324:\n"
    ".zero 4\n"
    ".globl _G_8328\n.alt_entry _G_8328\n_G_8328:\n"
    ".zero 16\n"
    ".globl _G_8338\n.alt_entry _G_8338\n_G_8338:\n"
    ".zero 12\n"
    ".globl _G_8344\n.alt_entry _G_8344\n_G_8344:\n"
    ".zero 12\n"
    ".globl _G_8350\n.alt_entry _G_8350\n_G_8350:\n"
    ".zero 16\n"
    ".globl _G_8360\n.alt_entry _G_8360\n_G_8360:\n"
    ".zero 8\n"
    ".globl _G_8368\n.alt_entry _G_8368\n_G_8368:\n"
    ".zero 24\n"
    ".globl _G_8380\n.alt_entry _G_8380\n_G_8380:\n"
    ".zero 8\n"
    ".globl _G_8388\n.alt_entry _G_8388\n_G_8388:\n"
    ".zero 4\n"
    ".globl _G_838C\n.alt_entry _G_838C\n_G_838C:\n"
    ".zero 12\n"
    ".globl _G_8398\n.alt_entry _G_8398\n_G_8398:\n"
    ".zero 8\n"
    ".globl _D_002F1A90\n.alt_entry _D_002F1A90\n_D_002F1A90:\n"
    ".globl _G_83A0\n.alt_entry _G_83A0\n_G_83A0:\n"
    ".zero 8\n"
    ".globl _G_83A8\n.alt_entry _G_83A8\n_G_83A8:\n"
    ".zero 4\n"
    ".globl _G_83AC\n.alt_entry _G_83AC\n_G_83AC:\n"
    ".zero 4\n"
    ".globl _G_83B0\n.alt_entry _G_83B0\n_G_83B0:\n"
    ".zero 12\n"
    ".globl _G_83BC\n.alt_entry _G_83BC\n_G_83BC:\n"
    ".zero 4\n"
    ".globl _G_83C0\n.alt_entry _G_83C0\n_G_83C0:\n"
    ".zero 80\n"
    ".globl _G_8410\n.alt_entry _G_8410\n_G_8410:\n"
    ".zero 36\n"
    ".globl _G_8434\n.alt_entry _G_8434\n_G_8434:\n"
    ".zero 4\n"
    ".globl _G_8438\n.alt_entry _G_8438\n_G_8438:\n"
    ".zero 4\n"
    ".globl _G_843C\n.alt_entry _G_843C\n_G_843C:\n"
    ".zero 4\n"
    ".globl _G_8440\n.alt_entry _G_8440\n_G_8440:\n"
    ".zero 4\n"
    ".globl _G_8444\n.alt_entry _G_8444\n_G_8444:\n"
    ".zero 8\n"
    ".globl _G_844C\n.alt_entry _G_844C\n_G_844C:\n"
    ".zero 8\n"
    ".globl _G_8454\n.alt_entry _G_8454\n_G_8454:\n"
    ".zero 4\n"
    ".globl _G_8458\n.alt_entry _G_8458\n_G_8458:\n"
    ".zero 44\n"
    ".globl _G_8484\n.alt_entry _G_8484\n_G_8484:\n"
    ".zero 4\n"
    ".globl _G_8488\n.alt_entry _G_8488\n_G_8488:\n"
    ".zero 4\n"
    ".globl _G_848C\n.alt_entry _G_848C\n_G_848C:\n"
    ".zero 32\n"
    ".globl _G_84AC\n.alt_entry _G_84AC\n_G_84AC:\n"
    ".zero 4\n"
    ".globl _G_84B0\n.alt_entry _G_84B0\n_G_84B0:\n"
    ".zero 4\n"
    ".globl _G_84B4\n.alt_entry _G_84B4\n_G_84B4:\n"
    ".zero 4\n"
    ".globl _G_84B8\n.alt_entry _G_84B8\n_G_84B8:\n"
    ".zero 4\n"
    ".globl _G_84BC\n.alt_entry _G_84BC\n_G_84BC:\n"
    ".zero 4\n"
    ".globl _G_84C0\n.alt_entry _G_84C0\n_G_84C0:\n"
    ".zero 4\n"
    ".globl _G_84C4\n.alt_entry _G_84C4\n_G_84C4:\n"
    ".zero 4\n"
    ".globl _G_84C8\n.alt_entry _G_84C8\n_G_84C8:\n"
    ".zero 16\n"
    ".globl _G_84D8\n.alt_entry _G_84D8\n_G_84D8:\n"
    ".zero 20\n"
    ".globl _G_84EC\n.alt_entry _G_84EC\n_G_84EC:\n"
    ".zero 4\n"
    ".globl _G_84F0\n.alt_entry _G_84F0\n_G_84F0:\n"
    ".zero 24\n"
    ".globl _G_8508\n.alt_entry _G_8508\n_G_8508:\n"
    ".zero 12\n"
    ".globl _G_8514\n.alt_entry _G_8514\n_G_8514:\n"
    ".zero 4\n"
    ".globl _G_8518\n.alt_entry _G_8518\n_G_8518:\n"
    ".zero 4\n"
    ".globl _G_851C\n.alt_entry _G_851C\n_G_851C:\n"
    ".zero 4\n"
    ".globl _G_8520\n.alt_entry _G_8520\n_G_8520:\n"
    ".zero 4\n"
    ".globl _G_8524\n.alt_entry _G_8524\n_G_8524:\n"
    ".zero 4\n"
    ".globl _G_8528\n.alt_entry _G_8528\n_G_8528:\n"
    ".zero 4\n"
    ".globl _G_852C\n.alt_entry _G_852C\n_G_852C:\n"
    ".zero 12\n"
    ".globl _G_8538\n.alt_entry _G_8538\n_G_8538:\n"
    ".zero 4\n"
    ".globl _G_853C\n.alt_entry _G_853C\n_G_853C:\n"
    ".zero 4\n"
    ".globl _G_8540\n.alt_entry _G_8540\n_G_8540:\n"
    ".zero 4\n"
    ".globl _G_8544\n.alt_entry _G_8544\n_G_8544:\n"
    ".zero 4\n"
    ".globl _G_8548\n.alt_entry _G_8548\n_G_8548:\n"
    ".zero 4\n"
    ".globl _G_854C\n.alt_entry _G_854C\n_G_854C:\n"
    ".zero 4\n"
    ".globl _G_8550\n.alt_entry _G_8550\n_G_8550:\n"
    ".zero 8\n"
    ".globl _G_8558\n.alt_entry _G_8558\n_G_8558:\n"
    ".zero 24\n"
    ".globl _G_8570\n.alt_entry _G_8570\n_G_8570:\n"
    ".zero 8\n"
    ".globl _G_8578\n.alt_entry _G_8578\n_G_8578:\n"
    ".zero 168\n"
    ".globl _G_8620\n.alt_entry _G_8620\n_G_8620:\n"
    ".zero 32\n"
    ".globl _G_8640\n.alt_entry _G_8640\n_G_8640:\n"
    ".zero 164\n"
    ".globl _G_86E4\n.alt_entry _G_86E4\n_G_86E4:\n"
    ".zero 12\n"
    ".globl _G_86F0\n.alt_entry _G_86F0\n_G_86F0:\n"
    ".zero 8\n"
    ".globl _G_86F8\n.alt_entry _G_86F8\n_G_86F8:\n"
    ".zero 80\n"
    ".globl _G_8748\n.alt_entry _G_8748\n_G_8748:\n"
    ".zero 48\n"
    ".globl _G_8778\n.alt_entry _G_8778\n_G_8778:\n"
    ".zero 84\n"
    ".globl _G_87CC\n.alt_entry _G_87CC\n_G_87CC:\n"
    ".zero 168\n"
    ".globl _G_8874\n.alt_entry _G_8874\n_G_8874:\n"
    ".zero 4\n"
    ".globl _G_8878\n.alt_entry _G_8878\n_G_8878:\n"
    ".zero 24\n"
    ".globl _G_8890\n.alt_entry _G_8890\n_G_8890:\n"
    ".zero 24\n"
    ".globl _G_88A8\n.alt_entry _G_88A8\n_G_88A8:\n"
    ".zero 84\n"
    ".globl _G_88FC\n.alt_entry _G_88FC\n_G_88FC:\n"
    ".zero 4\n"
    ".globl _G_8900\n.alt_entry _G_8900\n_G_8900:\n"
    ".zero 24\n"
    ".globl _G_8918\n.alt_entry _G_8918\n_G_8918:\n"
    ".zero 4\n"
    ".globl _G_891C\n.alt_entry _G_891C\n_G_891C:\n"
    ".zero 8\n"
    ".globl _G_8924\n.alt_entry _G_8924\n_G_8924:\n"
    ".zero 4\n"
    ".globl _G_8928\n.alt_entry _G_8928\n_G_8928:\n"
    ".zero 4\n"
    ".globl _G_892C\n.alt_entry _G_892C\n_G_892C:\n"
    ".zero 4\n"
    ".globl _G_8930\n.alt_entry _G_8930\n_G_8930:\n"
    ".zero 8\n"
    ".globl _G_8938\n.alt_entry _G_8938\n_G_8938:\n"
    ".zero 8\n"
    ".globl _G_8940\n.alt_entry _G_8940\n_G_8940:\n"
    ".zero 32\n"
    ".globl _G_8960\n.alt_entry _G_8960\n_G_8960:\n"
    ".zero 16\n"
    ".globl _G_8970\n.alt_entry _G_8970\n_G_8970:\n"
    ".zero 4\n"
    ".globl _G_8974\n.alt_entry _G_8974\n_G_8974:\n"
    ".zero 8\n"
    ".globl _G_897C\n.alt_entry _G_897C\n_G_897C:\n"
    ".zero 4\n"
    ".globl _G_8980\n.alt_entry _G_8980\n_G_8980:\n"
    ".zero 4\n"
    ".globl _G_8984\n.alt_entry _G_8984\n_G_8984:\n"
    ".zero 4\n"
    ".globl _G_8988\n.alt_entry _G_8988\n_G_8988:\n"
    ".zero 76\n"
    ".globl _G_89D4\n.alt_entry _G_89D4\n_G_89D4:\n"
    ".zero 4\n"
    ".globl _G_89D8\n.alt_entry _G_89D8\n_G_89D8:\n"
    ".zero 20\n"
    ".globl _G_89EC\n.alt_entry _G_89EC\n_G_89EC:\n"
    ".zero 4\n"
    ".globl _G_89F0\n.alt_entry _G_89F0\n_G_89F0:\n"
    ".zero 12\n"
    ".globl _G_89FC\n.alt_entry _G_89FC\n_G_89FC:\n"
    ".zero 8\n"
    ".globl _G_8A04\n.alt_entry _G_8A04\n_G_8A04:\n"
    ".zero 28\n"
    ".globl _G_8A20\n.alt_entry _G_8A20\n_G_8A20:\n"
    ".zero 25872\n"
    ".globl _D_002F8620\n.alt_entry _D_002F8620\n_D_002F8620:\n"
    ".zero 8\n"
    ".globl _D_002F8628\n.alt_entry _D_002F8628\n_D_002F8628:\n"
    ".zero 24\n"
    ".globl _D_002F8640\n.alt_entry _D_002F8640\n_D_002F8640:\n"
    ".zero 4\n"
    ".globl _D_002F8644\n.alt_entry _D_002F8644\n_D_002F8644:\n"
    ".zero 4\n"
    ".globl _D_002F8648\n.alt_entry _D_002F8648\n_D_002F8648:\n"
    ".zero 4\n"
    ".globl _D_002F864C\n.alt_entry _D_002F864C\n_D_002F864C:\n"
    ".zero 4\n"
    ".globl _D_002F8650\n.alt_entry _D_002F8650\n_D_002F8650:\n"
    ".zero 4\n"
    ".globl _D_002F8654\n.alt_entry _D_002F8654\n_D_002F8654:\n"
    ".zero 4\n"
    ".globl _D_002F8658\n.alt_entry _D_002F8658\n_D_002F8658:\n"
    ".zero 4\n"
    ".globl _D_002F865C\n.alt_entry _D_002F865C\n_D_002F865C:\n"
    ".zero 40\n"
    ".globl _D_002F8684\n.alt_entry _D_002F8684\n_D_002F8684:\n"
    ".zero 4\n"
    ".globl _D_002F8688\n.alt_entry _D_002F8688\n_D_002F8688:\n"
    ".zero 4\n"
    ".globl _D_002F868C\n.alt_entry _D_002F868C\n_D_002F868C:\n"
    ".zero 4\n"
    ".globl _D_002F8690\n.alt_entry _D_002F8690\n_D_002F8690:\n"
    ".zero 4\n"
    ".globl _D_002F8694\n.alt_entry _D_002F8694\n_D_002F8694:\n"
    ".zero 12\n"
    ".globl _D_002F86A0\n.alt_entry _D_002F86A0\n_D_002F86A0:\n"
    ".zero 28\n"
    ".globl _D_002F86BC\n.alt_entry _D_002F86BC\n_D_002F86BC:\n"
    ".zero 20\n"
    ".globl _D_002F86D0\n.alt_entry _D_002F86D0\n_D_002F86D0:\n"
    ".zero 4\n"
    ".globl _D_002F86D4\n.alt_entry _D_002F86D4\n_D_002F86D4:\n"
    ".zero 4\n"
    ".globl _D_002F86D8\n.alt_entry _D_002F86D8\n_D_002F86D8:\n"
    ".zero 4\n"
    ".globl _D_002F86DC\n.alt_entry _D_002F86DC\n_D_002F86DC:\n"
    ".zero 4\n"
    ".globl _D_002F86E0\n.alt_entry _D_002F86E0\n_D_002F86E0:\n"
    ".zero 4\n"
    ".globl _D_002F86E4\n.alt_entry _D_002F86E4\n_D_002F86E4:\n"
    ".zero 8\n"
    ".globl _D_002F86EC\n.alt_entry _D_002F86EC\n_D_002F86EC:\n"
    ".zero 4\n"
    ".globl _D_002F86F0\n.alt_entry _D_002F86F0\n_D_002F86F0:\n"
    ".zero 8\n"
    ".globl _D_002F86F8\n.alt_entry _D_002F86F8\n_D_002F86F8:\n"
    ".zero 7256\n"
    ".globl _D_002FA350\n.alt_entry _D_002FA350\n_D_002FA350:\n"
    ".zero 16\n"
    ".globl _D_002FA360\n.alt_entry _D_002FA360\n_D_002FA360:\n"
    ".zero 4\n"
    ".globl _D_002FA364\n.alt_entry _D_002FA364\n_D_002FA364:\n"
    ".zero 4\n"
    ".globl _D_002FA368\n.alt_entry _D_002FA368\n_D_002FA368:\n"
    ".zero 4\n"
    ".globl _D_002FA36C\n.alt_entry _D_002FA36C\n_D_002FA36C:\n"
    ".zero 4\n"
    ".globl _D_002FA370\n.alt_entry _D_002FA370\n_D_002FA370:\n"
    ".zero 28\n"
    ".globl _D_002FA38C\n.alt_entry _D_002FA38C\n_D_002FA38C:\n"
    ".zero 144\n"
    ".globl _D_002FA41C\n.alt_entry _D_002FA41C\n_D_002FA41C:\n"
    ".zero 4\n"
    ".globl _D_002FA420\n.alt_entry _D_002FA420\n_D_002FA420:\n"
    ".zero 4\n"
    ".globl _D_002FA424\n.alt_entry _D_002FA424\n_D_002FA424:\n"
    ".zero 8\n"
    ".globl _D_002FA42C\n.alt_entry _D_002FA42C\n_D_002FA42C:\n"
    ".zero 4\n"
    ".globl _D_002FA430\n.alt_entry _D_002FA430\n_D_002FA430:\n"
    ".zero 12\n"
    ".globl _D_002FA43C\n.alt_entry _D_002FA43C\n_D_002FA43C:\n"
    ".zero 8\n"
    ".globl _D_002FA444\n.alt_entry _D_002FA444\n_D_002FA444:\n"
    ".zero 4\n"
    ".globl _D_002FA448\n.alt_entry _D_002FA448\n_D_002FA448:\n"
    ".zero 4\n"
    ".globl _D_002FA44C\n.alt_entry _D_002FA44C\n_D_002FA44C:\n"
    ".zero 4\n"
    ".globl _D_002FA450\n.alt_entry _D_002FA450\n_D_002FA450:\n"
    ".zero 4\n"
    ".globl _D_002FA454\n.alt_entry _D_002FA454\n_D_002FA454:\n"
    ".zero 4\n"
    ".globl _D_002FA458\n.alt_entry _D_002FA458\n_D_002FA458:\n"
    ".zero 4\n"
    ".globl _D_002FA45C\n.alt_entry _D_002FA45C\n_D_002FA45C:\n"
    ".zero 12\n"
    ".globl _D_002FA468\n.alt_entry _D_002FA468\n_D_002FA468:\n"
    ".zero 12\n"
    ".globl _D_002FA474\n.alt_entry _D_002FA474\n_D_002FA474:\n"
    ".zero 252\n"
    ".globl _D_002FA570\n.alt_entry _D_002FA570\n_D_002FA570:\n"
    ".zero 20\n"
    ".globl _D_002FA584\n.alt_entry _D_002FA584\n_D_002FA584:\n"
    ".zero 4\n"
    ".globl _D_002FA588\n.alt_entry _D_002FA588\n_D_002FA588:\n"
    ".zero 4\n"
    ".globl _D_002FA58C\n.alt_entry _D_002FA58C\n_D_002FA58C:\n"
    ".zero 4\n"
    ".globl _D_002FA590\n.alt_entry _D_002FA590\n_D_002FA590:\n"
    ".zero 16\n"
    ".globl _D_002FA5A0\n.alt_entry _D_002FA5A0\n_D_002FA5A0:\n"
    ".zero 56\n"
    ".globl _D_002FA5D8\n.alt_entry _D_002FA5D8\n_D_002FA5D8:\n"
    ".zero 56\n"
    ".globl _D_002FA610\n.alt_entry _D_002FA610\n_D_002FA610:\n"
    ".zero 4\n"
    ".globl _D_002FA614\n.alt_entry _D_002FA614\n_D_002FA614:\n"
    ".zero 4\n"
    ".globl _D_002FA618\n.alt_entry _D_002FA618\n_D_002FA618:\n"
    ".zero 7\n"
    ".globl _D_002FA61F\n.alt_entry _D_002FA61F\n_D_002FA61F:\n"
    ".zero 1\n"
    ".globl _D_002FA620\n.alt_entry _D_002FA620\n_D_002FA620:\n"
    ".zero 8\n"
    ".globl _D_002FA628\n.alt_entry _D_002FA628\n_D_002FA628:\n"
    ".zero 8\n"
    ".globl _D_002FA630\n.alt_entry _D_002FA630\n_D_002FA630:\n"
    ".zero 12\n"
    ".globl _D_002FA63C\n.alt_entry _D_002FA63C\n_D_002FA63C:\n"
    ".zero 48\n"
    ".globl _D_002FA66C\n.alt_entry _D_002FA66C\n_D_002FA66C:\n"
    ".zero 12\n"
    ".globl _D_002FA678\n.alt_entry _D_002FA678\n_D_002FA678:\n"
    ".zero 36\n"
    ".globl _D_002FA69C\n.alt_entry _D_002FA69C\n_D_002FA69C:\n"
    ".zero 52\n"
    ".globl _D_002FA6D0\n.alt_entry _D_002FA6D0\n_D_002FA6D0:\n"
    ".zero 4\n"
    ".globl _D_002FA6D4\n.alt_entry _D_002FA6D4\n_D_002FA6D4:\n"
    ".zero 4\n"
    ".globl _D_002FA6D8\n.alt_entry _D_002FA6D8\n_D_002FA6D8:\n"
    ".zero 4\n"
    ".globl _D_002FA6DC\n.alt_entry _D_002FA6DC\n_D_002FA6DC:\n"
    ".zero 4\n"
    ".globl _D_002FA6E0\n.alt_entry _D_002FA6E0\n_D_002FA6E0:\n"
    ".zero 32\n"
    ".globl _D_002FA700\n.alt_entry _D_002FA700\n_D_002FA700:\n"
    ".zero 896\n"
    ".globl _D_002FAA80\n.alt_entry _D_002FAA80\n_D_002FAA80:\n"
    ".zero 8\n"
    ".globl _D_002FAA88\n.alt_entry _D_002FAA88\n_D_002FAA88:\n"
    ".zero 17032\n"
    ".globl _D_002FED10\n.alt_entry _D_002FED10\n_D_002FED10:\n"
    ".zero 13184\n"
    ".globl _D_00302090\n.alt_entry _D_00302090\n_D_00302090:\n"
    ".zero 5184\n"
    ".globl _D_003034D0\n.alt_entry _D_003034D0\n_D_003034D0:\n"
    ".zero 2384\n"
    ".globl _D_00303E20\n.alt_entry _D_00303E20\n_D_00303E20:\n"
    ".zero 4\n"
    ".globl _D_00303E24\n.alt_entry _D_00303E24\n_D_00303E24:\n"
    ".zero 4\n"
    ".globl _D_00303E28\n.alt_entry _D_00303E28\n_D_00303E28:\n"
    ".zero 4\n"
    ".globl _D_00303E2C\n.alt_entry _D_00303E2C\n_D_00303E2C:\n"
    ".zero 4\n"
    ".globl _D_00303E30\n.alt_entry _D_00303E30\n_D_00303E30:\n"
    ".zero 4\n"
    ".globl _D_00303E34\n.alt_entry _D_00303E34\n_D_00303E34:\n"
    ".zero 4\n"
    ".globl _D_00303E38\n.alt_entry _D_00303E38\n_D_00303E38:\n"
    ".zero 4\n"
    ".globl _D_00303E3C\n.alt_entry _D_00303E3C\n_D_00303E3C:\n"
    ".zero 12\n"
    ".globl _D_00303E48\n.alt_entry _D_00303E48\n_D_00303E48:\n"
    ".zero 4\n"
    ".globl _D_00303E4C\n.alt_entry _D_00303E4C\n_D_00303E4C:\n"
    ".zero 6984\n"
    ".globl _g_unk_305994\n.alt_entry _g_unk_305994\n_g_unk_305994:\n"
    ".zero 4\n"
    ".globl _g_unk_305998\n.alt_entry _g_unk_305998\n_g_unk_305998:\n"
    ".zero 876\n"
    ".globl _D_00305D04\n.alt_entry _D_00305D04\n_D_00305D04:\n"
    ".zero 76\n"
    ".globl _D_00305D50\n.alt_entry _D_00305D50\n_D_00305D50:\n"
    ".zero 192\n"
    ".globl _D_00305E10\n.alt_entry _D_00305E10\n_D_00305E10:\n"
    ".zero 272\n"
    ".globl _D_00305F20\n.alt_entry _D_00305F20\n_D_00305F20:\n"
    ".zero 48\n"
    ".globl _D_00305F50\n.alt_entry _D_00305F50\n_D_00305F50:\n"
    ".globl _g_0x305F50\n.alt_entry _g_0x305F50\n_g_0x305F50:\n"
    ".zero 4\n"
    ".globl _g_unk_305F54\n.alt_entry _g_unk_305F54\n_g_unk_305F54:\n"
    ".zero 40\n"
    ".globl _D_00305F7C\n.alt_entry _D_00305F7C\n_D_00305F7C:\n"
    ".zero 164\n"
    ".globl _D_00306020\n.alt_entry _D_00306020\n_D_00306020:\n"
    ".zero 36\n"
    ".globl _D_00306044\n.alt_entry _D_00306044\n_D_00306044:\n"
    ".zero 8\n"
    ".globl _D_0030604C\n.alt_entry _D_0030604C\n_D_0030604C:\n"
    ".globl _g_0x30604C\n.alt_entry _g_0x30604C\n_g_0x30604C:\n"
    ".zero 4\n"
    ".globl _D_00306050\n.alt_entry _D_00306050\n_D_00306050:\n"
    ".zero 16\n"
    ".globl _D_00306060\n.alt_entry _D_00306060\n_D_00306060:\n"
    ".zero 4\n"
    ".globl _D_00306064\n.alt_entry _D_00306064\n_D_00306064:\n"
    ".zero 4\n"
    ".globl _D_00306068\n.alt_entry _D_00306068\n_D_00306068:\n"
    ".zero 4\n"
    ".globl _D_0030606C\n.alt_entry _D_0030606C\n_D_0030606C:\n"
    ".zero 4\n"
    ".globl _D_00306070\n.alt_entry _D_00306070\n_D_00306070:\n"
    ".zero 8\n"
    ".globl _g_unk_306078\n.alt_entry _g_unk_306078\n_g_unk_306078:\n"
    ".zero 16\n"
    ".globl _D_00306088\n.alt_entry _D_00306088\n_D_00306088:\n"
    ".zero 12\n"
    ".globl _D_00306094\n.alt_entry _D_00306094\n_D_00306094:\n"
    ".zero 4\n"
    ".globl _D_00306098\n.alt_entry _D_00306098\n_D_00306098:\n"
    ".zero 384\n"
    ".globl _D_00306218\n.alt_entry _D_00306218\n_D_00306218:\n"
    ".zero 4\n"
    ".globl _D_0030621C\n.alt_entry _D_0030621C\n_D_0030621C:\n"
    ".zero 16\n"
    ".globl _D_0030622C\n.alt_entry _D_0030622C\n_D_0030622C:\n"
    ".zero 4\n"
    ".globl _D_00306230\n.alt_entry _D_00306230\n_D_00306230:\n"
    ".zero 12\n"
    ".globl _D_0030623C\n.alt_entry _D_0030623C\n_D_0030623C:\n"
    ".zero 4\n"
    ".globl _D_00306240\n.alt_entry _D_00306240\n_D_00306240:\n"
    ".zero 4\n"
    ".globl _D_00306244\n.alt_entry _D_00306244\n_D_00306244:\n"
    ".zero 12\n"
    ".globl _D_00306250\n.alt_entry _D_00306250\n_D_00306250:\n"
    ".zero 4\n"
    ".globl _D_00306254\n.alt_entry _D_00306254\n_D_00306254:\n"
    ".zero 4\n"
    ".globl _D_00306258\n.alt_entry _D_00306258\n_D_00306258:\n"
    ".zero 12\n"
    ".globl _D_00306264\n.alt_entry _D_00306264\n_D_00306264:\n"
    ".zero 4\n"
    ".globl _D_00306268\n.alt_entry _D_00306268\n_D_00306268:\n"
    ".zero 4\n"
    ".globl _D_0030626C\n.alt_entry _D_0030626C\n_D_0030626C:\n"
    ".zero 12\n"
    ".globl _D_00306278\n.alt_entry _D_00306278\n_D_00306278:\n"
    ".zero 4\n"
    ".globl _D_0030627C\n.alt_entry _D_0030627C\n_D_0030627C:\n"
    ".zero 4\n"
    ".globl _D_00306280\n.alt_entry _D_00306280\n_D_00306280:\n"
    ".zero 4\n"
    ".globl _D_00306284\n.alt_entry _D_00306284\n_D_00306284:\n"
    ".zero 4\n"
    ".globl _D_00306288\n.alt_entry _D_00306288\n_D_00306288:\n"
    ".zero 4\n"
    ".globl _D_0030628C\n.alt_entry _D_0030628C\n_D_0030628C:\n"
    ".zero 4\n"
    ".globl _D_00306290\n.alt_entry _D_00306290\n_D_00306290:\n"
    ".zero 4\n"
    ".globl _D_00306294\n.alt_entry _D_00306294\n_D_00306294:\n"
    ".zero 4\n"
    ".globl _D_00306298\n.alt_entry _D_00306298\n_D_00306298:\n"
    ".zero 4\n"
    ".globl _D_0030629C\n.alt_entry _D_0030629C\n_D_0030629C:\n"
    ".zero 4\n"
    ".globl _D_003062A0\n.alt_entry _D_003062A0\n_D_003062A0:\n"
    ".zero 4\n"
    ".globl _D_003062A4\n.alt_entry _D_003062A4\n_D_003062A4:\n"
    ".zero 8\n"
    ".globl _D_003062AC\n.alt_entry _D_003062AC\n_D_003062AC:\n"
    ".zero 4\n"
    ".globl _D_003062B0\n.alt_entry _D_003062B0\n_D_003062B0:\n"
    ".zero 4\n"
    ".globl _D_003062B4\n.alt_entry _D_003062B4\n_D_003062B4:\n"
    ".zero 4\n"
    ".globl _D_003062B8\n.alt_entry _D_003062B8\n_D_003062B8:\n"
    ".zero 4\n"
    ".globl _D_003062BC\n.alt_entry _D_003062BC\n_D_003062BC:\n"
    ".zero 4\n"
    ".globl _D_003062C0\n.alt_entry _D_003062C0\n_D_003062C0:\n"
    ".zero 4\n"
    ".globl _D_003062C4\n.alt_entry _D_003062C4\n_D_003062C4:\n"
    ".zero 4\n"
    ".globl _D_003062C8\n.alt_entry _D_003062C8\n_D_003062C8:\n"
    ".zero 4\n"
    ".globl _D_003062CC\n.alt_entry _D_003062CC\n_D_003062CC:\n"
    ".zero 4\n"
    ".globl _D_003062D0\n.alt_entry _D_003062D0\n_D_003062D0:\n"
    ".zero 4\n"
    ".globl _D_003062D4\n.alt_entry _D_003062D4\n_D_003062D4:\n"
    ".zero 4\n"
    ".globl _D_003062D8\n.alt_entry _D_003062D8\n_D_003062D8:\n"
    ".zero 4\n"
    ".globl _D_003062DC\n.alt_entry _D_003062DC\n_D_003062DC:\n"
    ".zero 12\n"
    ".globl _D_003062E8\n.alt_entry _D_003062E8\n_D_003062E8:\n"
    ".zero 20\n"
    ".globl _D_003062FC\n.alt_entry _D_003062FC\n_D_003062FC:\n"
    ".zero 2\n"
    ".globl _D_003062FE\n.alt_entry _D_003062FE\n_D_003062FE:\n"
    ".zero 2\n"
    ".globl _D_00306300\n.alt_entry _D_00306300\n_D_00306300:\n"
    ".zero 2\n"
    ".globl _D_00306302\n.alt_entry _D_00306302\n_D_00306302:\n"
    ".zero 2\n"
    ".globl _D_00306304\n.alt_entry _D_00306304\n_D_00306304:\n"
    ".zero 2\n"
    ".globl _D_00306306\n.alt_entry _D_00306306\n_D_00306306:\n"
    ".zero 2\n"
    ".globl _D_00306308\n.alt_entry _D_00306308\n_D_00306308:\n"
    ".zero 2\n"
    ".globl _D_0030630A\n.alt_entry _D_0030630A\n_D_0030630A:\n"
    ".zero 2\n"
    ".globl _D_0030630C\n.alt_entry _D_0030630C\n_D_0030630C:\n"
    ".zero 2\n"
    ".globl _D_0030630E\n.alt_entry _D_0030630E\n_D_0030630E:\n"
    ".zero 2\n"
    ".globl _D_00306310\n.alt_entry _D_00306310\n_D_00306310:\n"
    ".zero 4\n"
    ".globl _D_00306314\n.alt_entry _D_00306314\n_D_00306314:\n"
    ".zero 2\n"
    ".globl _D_00306316\n.alt_entry _D_00306316\n_D_00306316:\n"
    ".zero 2\n"
    ".globl _D_00306318\n.alt_entry _D_00306318\n_D_00306318:\n"
    ".zero 2\n"
    ".globl _D_0030631A\n.alt_entry _D_0030631A\n_D_0030631A:\n"
    ".zero 2\n"
    ".globl _D_0030631C\n.alt_entry _D_0030631C\n_D_0030631C:\n"
    ".zero 2\n"
    ".globl _D_0030631E\n.alt_entry _D_0030631E\n_D_0030631E:\n"
    ".zero 2\n"
    ".globl _D_00306320\n.alt_entry _D_00306320\n_D_00306320:\n"
    ".zero 2\n"
    ".globl _D_00306322\n.alt_entry _D_00306322\n_D_00306322:\n"
    ".zero 2\n"
    ".globl _D_00306324\n.alt_entry _D_00306324\n_D_00306324:\n"
    ".zero 2\n"
    ".globl _D_00306326\n.alt_entry _D_00306326\n_D_00306326:\n"
    ".zero 2\n"
    ".globl _D_00306328\n.alt_entry _D_00306328\n_D_00306328:\n"
    ".zero 2\n"
    ".globl _D_0030632A\n.alt_entry _D_0030632A\n_D_0030632A:\n"
    ".zero 2\n"
    ".globl _D_0030632C\n.alt_entry _D_0030632C\n_D_0030632C:\n"
    ".zero 6\n"
    ".globl _D_00306332\n.alt_entry _D_00306332\n_D_00306332:\n"
    ".zero 10\n"
    ".globl _D_0030633C\n.alt_entry _D_0030633C\n_D_0030633C:\n"
    ".zero 52\n"
    ".globl _D_00306370\n.alt_entry _D_00306370\n_D_00306370:\n"
    ".zero 48\n"
    ".globl _D_003063A0\n.alt_entry _D_003063A0\n_D_003063A0:\n"
    ".zero 20\n"
    ".globl _D_003063B4\n.alt_entry _D_003063B4\n_D_003063B4:\n"
    ".zero 48\n"
    ".globl _D_003063E4\n.alt_entry _D_003063E4\n_D_003063E4:\n"
    ".zero 20\n"
    ".globl _D_003063F8\n.alt_entry _D_003063F8\n_D_003063F8:\n"
    ".zero 8\n"
    ".globl _D_00306400\n.alt_entry _D_00306400\n_D_00306400:\n"
    ".zero 12\n"
    ".globl _D_0030640C\n.alt_entry _D_0030640C\n_D_0030640C:\n"
    ".zero 16\n"
    ".globl _D_0030641C\n.alt_entry _D_0030641C\n_D_0030641C:\n"
    ".zero 8\n"
    ".globl _D_00306424\n.alt_entry _D_00306424\n_D_00306424:\n"
    ".zero 8\n"
    ".globl _D_0030642C\n.alt_entry _D_0030642C\n_D_0030642C:\n"
    ".zero 4\n"
    ".globl _D_00306430\n.alt_entry _D_00306430\n_D_00306430:\n"
    ".zero 4\n"
    ".globl _D_00306434\n.alt_entry _D_00306434\n_D_00306434:\n"
    ".zero 36\n"
    ".globl _D_00306458\n.alt_entry _D_00306458\n_D_00306458:\n"
    ".zero 4\n"
    ".globl _D_0030645C\n.alt_entry _D_0030645C\n_D_0030645C:\n"
    ".zero 4\n"
    ".globl _D_00306460\n.alt_entry _D_00306460\n_D_00306460:\n"
    ".zero 4\n"
    ".globl _D_00306464\n.alt_entry _D_00306464\n_D_00306464:\n"
    ".zero 12\n"
    ".globl _D_00306470\n.alt_entry _D_00306470\n_D_00306470:\n"
    ".zero 8\n"
    ".globl _D_00306478\n.alt_entry _D_00306478\n_D_00306478:\n"
    ".zero 12\n"
    ".globl _D_00306484\n.alt_entry _D_00306484\n_D_00306484:\n"
    ".zero 256\n"
    ".globl _D_00306584\n.alt_entry _D_00306584\n_D_00306584:\n"
    ".zero 1024\n"
    ".globl _D_00306984\n.alt_entry _D_00306984\n_D_00306984:\n"
    ".zero 64\n"
    ".globl _D_003069C4\n.alt_entry _D_003069C4\n_D_003069C4:\n"
    ".zero 256\n"
    ".globl _D_00306AC4\n.alt_entry _D_00306AC4\n_D_00306AC4:\n"
    ".zero 4\n"
    ".globl _D_00306AC8\n.alt_entry _D_00306AC8\n_D_00306AC8:\n"
    ".zero 312\n"
    ".globl _D_00306C00\n.alt_entry _D_00306C00\n_D_00306C00:\n"
    ".zero 896\n"
    ".globl _D_00306F80\n.alt_entry _D_00306F80\n_D_00306F80:\n"
    ".zero 4\n"
    ".globl _D_00306F84\n.alt_entry _D_00306F84\n_D_00306F84:\n"
    ".zero 332\n"
    ".globl _D_003070D0\n.alt_entry _D_003070D0\n_D_003070D0:\n"
    ".zero 328\n"
    ".globl _D_00307218\n.alt_entry _D_00307218\n_D_00307218:\n"
    ".zero 792\n"
    ".globl _D_00307530\n.alt_entry _D_00307530\n_D_00307530:\n"
    ".zero 4\n"
    ".globl _D_00307534\n.alt_entry _D_00307534\n_D_00307534:\n"
    ".zero 3372\n"
    ".globl _D_00308260\n.alt_entry _D_00308260\n_D_00308260:\n"
    ".zero 8\n"
    ".globl _D_00308268\n.alt_entry _D_00308268\n_D_00308268:\n"
    ".zero 12\n"
    ".globl _D_00308274\n.alt_entry _D_00308274\n_D_00308274:\n"
    ".zero 4\n"
    ".globl _D_00308278\n.alt_entry _D_00308278\n_D_00308278:\n"
    ".zero 8\n"
    ".globl _D_00308280\n.alt_entry _D_00308280\n_D_00308280:\n"
    ".zero 4\n"
    ".globl _D_00308284\n.alt_entry _D_00308284\n_D_00308284:\n"
    ".zero 4\n"
    ".globl _D_00308288\n.alt_entry _D_00308288\n_D_00308288:\n"
    ".zero 4\n"
    ".globl _D_0030828C\n.alt_entry _D_0030828C\n_D_0030828C:\n"
    ".zero 4\n"
    ".globl _D_00308290\n.alt_entry _D_00308290\n_D_00308290:\n"
    ".zero 96\n"
    ".globl _D_003082F0\n.alt_entry _D_003082F0\n_D_003082F0:\n"
    ".zero 32\n"
    ".globl _D_00308310\n.alt_entry _D_00308310\n_D_00308310:\n"
    ".zero 320\n"
    ".globl _D_00308450\n.alt_entry _D_00308450\n_D_00308450:\n"
    ".zero 6576\n"
    ".globl _D_00309E00\n.alt_entry _D_00309E00\n_D_00309E00:\n"
    ".zero 4\n"
    ".globl _D_00309E04\n.alt_entry _D_00309E04\n_D_00309E04:\n"
    ".zero 4\n"
    ".globl _D_00309E08\n.alt_entry _D_00309E08\n_D_00309E08:\n"
    ".zero 4\n"
    ".globl _D_00309E0C\n.alt_entry _D_00309E0C\n_D_00309E0C:\n"
    ".zero 35040\n"
    ".globl _D_003126EC\n.alt_entry _D_003126EC\n_D_003126EC:\n"
    ".zero 180\n"
    ".globl _D_003127A0\n.alt_entry _D_003127A0\n_D_003127A0:\n"
    ".zero 144\n"
    ".globl _D_00312830\n.alt_entry _D_00312830\n_D_00312830:\n"
    ".zero 80\n"
    ".globl _D_00312880\n.alt_entry _D_00312880\n_D_00312880:\n"
    ".zero 11712\n"
    ".globl _D_00315640\n.alt_entry _D_00315640\n_D_00315640:\n"
    ".zero 128\n"
    ".globl _D_003156C0\n.alt_entry _D_003156C0\n_D_003156C0:\n"
    ".zero 32\n"
    ".globl _D_003156E0\n.alt_entry _D_003156E0\n_D_003156E0:\n"
    ".zero 96\n"
    ".globl _D_00315740\n.alt_entry _D_00315740\n_D_00315740:\n"
    ".zero 320\n"
    ".globl _D_00315880\n.alt_entry _D_00315880\n_D_00315880:\n"
    ".zero 32\n"
    ".globl _D_003158A0\n.alt_entry _D_003158A0\n_D_003158A0:\n"
    ".zero 32\n"
    ".globl _D_003158C0\n.alt_entry _D_003158C0\n_D_003158C0:\n"
    ".zero 32\n"
    ".globl _D_003158E0\n.alt_entry _D_003158E0\n_D_003158E0:\n"
    ".zero 288\n"
    ".globl _D_00315A00\n.alt_entry _D_00315A00\n_D_00315A00:\n"
    ".zero 32\n"
    ".globl _D_00315A20\n.alt_entry _D_00315A20\n_D_00315A20:\n"
    ".zero 160\n"
    ".globl _D_00315AC0\n.alt_entry _D_00315AC0\n_D_00315AC0:\n"
    ".zero 256\n"
    ".globl _D_00315BC0\n.alt_entry _D_00315BC0\n_D_00315BC0:\n"
    ".zero 32\n"
    ".globl _D_00315BE0\n.alt_entry _D_00315BE0\n_D_00315BE0:\n"
    ".zero 32\n"
    ".globl _D_00315C00\n.alt_entry _D_00315C00\n_D_00315C00:\n"
    ".zero 32\n"
    ".globl _D_00315C20\n.alt_entry _D_00315C20\n_D_00315C20:\n"
    ".zero 128\n"
    ".globl _D_00315CA0\n.alt_entry _D_00315CA0\n_D_00315CA0:\n"
    ".zero 32\n"
    ".globl _D_00315CC0\n.alt_entry _D_00315CC0\n_D_00315CC0:\n"
    ".zero 128\n"
    ".globl _D_00315D40\n.alt_entry _D_00315D40\n_D_00315D40:\n"
    ".zero 128\n"
    ".globl _D_00315DC0\n.alt_entry _D_00315DC0\n_D_00315DC0:\n"
    ".zero 352\n"
    ".globl _D_00315F20\n.alt_entry _D_00315F20\n_D_00315F20:\n"
    ".zero 32\n"
    ".globl _D_00315F40\n.alt_entry _D_00315F40\n_D_00315F40:\n"
    ".zero 688\n"
    ".globl _g_unk_3161f0\n.alt_entry _g_unk_3161f0\n_g_unk_3161f0:\n"
    ".zero 80\n"
    ".globl _D_00316240\n.alt_entry _D_00316240\n_D_00316240:\n"
    ".zero 32\n"
    ".globl _D_00316260\n.alt_entry _D_00316260\n_D_00316260:\n"
    ".zero 32\n"
    ".globl _D_00316280\n.alt_entry _D_00316280\n_D_00316280:\n"
    ".zero 32\n"
    ".globl _D_003162A0\n.alt_entry _D_003162A0\n_D_003162A0:\n"
    ".zero 32\n"
    ".globl _D_003162C0\n.alt_entry _D_003162C0\n_D_003162C0:\n"
    ".zero 480\n"
    ".globl _D_003164A0\n.alt_entry _D_003164A0\n_D_003164A0:\n"
    ".zero 32\n"
    ".globl _D_003164C0\n.alt_entry _D_003164C0\n_D_003164C0:\n"
    ".zero 32\n"
    ".globl _D_003164E0\n.alt_entry _D_003164E0\n_D_003164E0:\n"
    ".zero 32\n"
    ".globl _D_00316500\n.alt_entry _D_00316500\n_D_00316500:\n"
    ".zero 8\n"
    ".globl _D_00316508\n.alt_entry _D_00316508\n_D_00316508:\n"
    ".zero 24\n"
    ".globl _D_00316520\n.alt_entry _D_00316520\n_D_00316520:\n"
    ".zero 32\n"
    ".globl _D_00316540\n.alt_entry _D_00316540\n_D_00316540:\n"
    ".zero 8\n"
    ".globl _D_00316548\n.alt_entry _D_00316548\n_D_00316548:\n"
    ".zero 24\n"
    ".globl _D_00316560\n.alt_entry _D_00316560\n_D_00316560:\n"
    ".zero 32\n"
    ".globl _D_00316580\n.alt_entry _D_00316580\n_D_00316580:\n"
    ".zero 32\n"
    ".globl _D_003165a0\n.alt_entry _D_003165a0\n_D_003165a0:\n"
    ".zero 32\n"
    ".globl _D_003165c0\n.alt_entry _D_003165c0\n_D_003165c0:\n"
    ".zero 32\n"
    ".globl _D_003165e0\n.alt_entry _D_003165e0\n_D_003165e0:\n"
    ".zero 32\n"
    ".globl _D_00316600\n.alt_entry _D_00316600\n_D_00316600:\n"
    ".zero 32\n"
    ".globl _D_00316620\n.alt_entry _D_00316620\n_D_00316620:\n"
    ".zero 32\n"
    ".globl _D_00316640\n.alt_entry _D_00316640\n_D_00316640:\n"
    ".zero 32\n"
    ".globl _D_00316660\n.alt_entry _D_00316660\n_D_00316660:\n"
    ".zero 416\n"
    ".globl _D_00316800\n.alt_entry _D_00316800\n_D_00316800:\n"
    ".zero 8\n"
    ".globl _D_00316808\n.alt_entry _D_00316808\n_D_00316808:\n"
    ".zero 24\n"
    ".globl _D_00316820\n.alt_entry _D_00316820\n_D_00316820:\n"
    ".zero 32\n"
    ".globl _D_00316840\n.alt_entry _D_00316840\n_D_00316840:\n"
    ".zero 192\n"
    ".globl _D_00316900\n.alt_entry _D_00316900\n_D_00316900:\n"
    ".zero 512\n"
    ".globl _D_00316B00\n.alt_entry _D_00316B00\n_D_00316B00:\n"
    ".zero 224\n"
    ".globl _D_00316BE0\n.alt_entry _D_00316BE0\n_D_00316BE0:\n"
    ".zero 1376\n"
    ".globl _D_00317140\n.alt_entry _D_00317140\n_D_00317140:\n"
    ".zero 32\n"
    ".globl _D_00317160\n.alt_entry _D_00317160\n_D_00317160:\n"
    ".zero 32\n"
    ".globl _D_00317180\n.alt_entry _D_00317180\n_D_00317180:\n"
    ".zero 352\n"
    ".globl _D_003172E0\n.alt_entry _D_003172E0\n_D_003172E0:\n"
    ".zero 288\n"
    ".globl _D_00317400\n.alt_entry _D_00317400\n_D_00317400:\n"
    ".globl _g_0x317400\n.alt_entry _g_0x317400\n_g_0x317400:\n"
    ".zero 4\n"
    ".globl _D_00317404\n.alt_entry _D_00317404\n_D_00317404:\n"
    ".zero 4\n"
    ".globl _D_00317408\n.alt_entry _D_00317408\n_D_00317408:\n"
    ".zero 4\n"
    ".globl _D_0031740C\n.alt_entry _D_0031740C\n_D_0031740C:\n"
    ".zero 148\n"
    ".globl _D_003174A0\n.alt_entry _D_003174A0\n_D_003174A0:\n"
    ".zero 64\n"
    ".globl _D_003174E0\n.alt_entry _D_003174E0\n_D_003174E0:\n"
    ".zero 96\n"
    ".globl _D_00317540\n.alt_entry _D_00317540\n_D_00317540:\n"
    ".zero 4\n"
    ".globl _D_00317544\n.alt_entry _D_00317544\n_D_00317544:\n"
    ".zero 60\n"
    ".globl _D_00317580\n.alt_entry _D_00317580\n_D_00317580:\n"
    ".zero 4\n"
    ".globl _D_00317584\n.alt_entry _D_00317584\n_D_00317584:\n"
    ".zero 300\n"
    ".globl _D_003176B0\n.alt_entry _D_003176B0\n_D_003176B0:\n"
    ".zero 4\n"
    ".globl _D_003176B4\n.alt_entry _D_003176B4\n_D_003176B4:\n"
    ".zero 12\n"
    ".globl _D_003176C0\n.alt_entry _D_003176C0\n_D_003176C0:\n"
    ".zero 32768\n"
    ".globl _D_0031F6C0\n.alt_entry _D_0031F6C0\n_D_0031F6C0:\n"
    ".zero 32840\n"
    ".globl _D_00327708\n.alt_entry _D_00327708\n_D_00327708:\n"
    ".zero 56\n"
    ".globl _D_00327740\n.alt_entry _D_00327740\n_D_00327740:\n"
    ".zero 580\n"
    ".globl _D_00327984\n.alt_entry _D_00327984\n_D_00327984:\n"
    ".zero 4\n"
    ".globl _D_00327988\n.alt_entry _D_00327988\n_D_00327988:\n"
    ".zero 4\n"
    ".globl _D_0032798C\n.alt_entry _D_0032798C\n_D_0032798C:\n"
    ".zero 4\n"
    ".globl _D_00327990\n.alt_entry _D_00327990\n_D_00327990:\n"
    ".zero 304\n"
    ".globl _D_00327AC0\n.alt_entry _D_00327AC0\n_D_00327AC0:\n"
    ".zero 192\n"
    ".globl _D_00327B80\n.alt_entry _D_00327B80\n_D_00327B80:\n"
    ".zero 288\n"
    ".globl _unk_327CA0\n.alt_entry _unk_327CA0\n_unk_327CA0:\n"
    ".zero 168\n"
    ".globl _D_00327D48\n.alt_entry _D_00327D48\n_D_00327D48:\n"
    ".zero 4\n"
    ".globl _D_00327D4C\n.alt_entry _D_00327D4C\n_D_00327D4C:\n"
    ".zero 8\n"
    ".globl _D_00327D54\n.alt_entry _D_00327D54\n_D_00327D54:\n"
    ".zero 4\n"
    ".globl _D_00327D58\n.alt_entry _D_00327D58\n_D_00327D58:\n"
    ".zero 4\n"
    ".globl _D_00327D5C\n.alt_entry _D_00327D5C\n_D_00327D5C:\n"
    ".globl _g_0x327D5C\n.alt_entry _g_0x327D5C\n_g_0x327D5C:\n"
    ".zero 1972\n"
    ".globl _D_00328510\n.alt_entry _D_00328510\n_D_00328510:\n"
    ".zero 4\n"
    ".globl _D_00328514\n.alt_entry _D_00328514\n_D_00328514:\n"
    ".zero 4\n"
    ".globl _D_00328518\n.alt_entry _D_00328518\n_D_00328518:\n"
    ".zero 4\n"
    ".globl _D_0032851C\n.alt_entry _D_0032851C\n_D_0032851C:\n"
    ".zero 4\n"
    ".globl _D_00328520\n.alt_entry _D_00328520\n_D_00328520:\n"
    ".zero 4\n"
    ".globl _D_00328524\n.alt_entry _D_00328524\n_D_00328524:\n"
    ".zero 8\n"
    ".globl _D_0032852C\n.alt_entry _D_0032852C\n_D_0032852C:\n"
    ".zero 44\n"
    ".globl _D_00328558\n.alt_entry _D_00328558\n_D_00328558:\n"
    ".zero 40\n"
    ".globl _D_00328580\n.alt_entry _D_00328580\n_D_00328580:\n"
    ".zero 40\n"
    ".globl _D_003285A8\n.alt_entry _D_003285A8\n_D_003285A8:\n"
    ".zero 160\n"
    ".globl _D_00328648\n.alt_entry _D_00328648\n_D_00328648:\n"
    ".zero 32\n"
    ".globl _D_00328668\n.alt_entry _D_00328668\n_D_00328668:\n"
    ".zero 8\n"
    ".globl _D_00328670\n.alt_entry _D_00328670\n_D_00328670:\n"
    ".zero 1\n"
    ".globl _D_00328671\n.alt_entry _D_00328671\n_D_00328671:\n"
    ".zero 1\n"
    ".globl _D_00328672\n.alt_entry _D_00328672\n_D_00328672:\n"
    ".zero 1\n"
    ".globl _D_00328673\n.alt_entry _D_00328673\n_D_00328673:\n"
    ".zero 3\n"
    ".globl _D_00328676\n.alt_entry _D_00328676\n_D_00328676:\n"
    ".zero 186\n"
    ".globl _D_00328730\n.alt_entry _D_00328730\n_D_00328730:\n"
    ".zero 68\n"
    ".globl _D_00328774\n.alt_entry _D_00328774\n_D_00328774:\n"
    ".zero 64\n"
    ".globl _D_003287B4\n.alt_entry _D_003287B4\n_D_003287B4:\n"
    ".zero 64\n"
    ".globl _D_003287F4\n.alt_entry _D_003287F4\n_D_003287F4:\n"
    ".zero 588\n"
    ".globl _D_00328A40\n.alt_entry _D_00328A40\n_D_00328A40:\n"
    ".zero 8\n"
    ".globl _g_unk328A48\n.alt_entry _g_unk328A48\n_g_unk328A48:\n"
    ".zero 1668\n"
    ".globl _g_unk3290CC\n.alt_entry _g_unk3290CC\n_g_unk3290CC:\n"
    ".zero 1672\n"
    ".globl _g_unk329754\n.alt_entry _g_unk329754\n_g_unk329754:\n"
    ".zero 4\n"
    ".globl _D_00329758\n.alt_entry _D_00329758\n_D_00329758:\n"
    ".globl _g_unk329758\n.alt_entry _g_unk329758\n_g_unk329758:\n"
    ".zero 4\n"
    ".globl _D_0032975C\n.alt_entry _D_0032975C\n_D_0032975C:\n"
    ".zero 4\n"
    ".globl _D_00329760\n.alt_entry _D_00329760\n_D_00329760:\n"
    ".zero 16\n"
    ".globl _D_00329770\n.alt_entry _D_00329770\n_D_00329770:\n"
    ".zero 3760\n"
    ".globl _D_0032A620\n.alt_entry _D_0032A620\n_D_0032A620:\n"
    ".zero 18064\n"
    ".globl _D_0032ECB0\n.alt_entry _D_0032ECB0\n_D_0032ECB0:\n"
    ".zero 6832\n"
    ".globl _D_00330760\n.alt_entry _D_00330760\n_D_00330760:\n"
    ".zero 14\n"
    ".globl _D_0033076E\n.alt_entry _D_0033076E\n_D_0033076E:\n"
    ".zero 18\n"
    ".globl _g_unk_330780\n.alt_entry _g_unk_330780\n_g_unk_330780:\n"
    ".zero 144\n"
    ".globl _D_00330810\n.alt_entry _D_00330810\n_D_00330810:\n"
    ".zero 600\n"
    ".globl _D_00330A68\n.alt_entry _D_00330A68\n_D_00330A68:\n"
    ".zero 4\n"
    ".globl _D_00330A6C\n.alt_entry _D_00330A6C\n_D_00330A6C:\n"
    ".zero 4\n"
    ".globl _D_00330A70\n.alt_entry _D_00330A70\n_D_00330A70:\n"
    ".zero 3760\n"
    ".globl _D_00331920\n.alt_entry _D_00331920\n_D_00331920:\n"
    ".globl _unk_331920\n.alt_entry _unk_331920\n_unk_331920:\n"
    ".zero 4\n"
    ".globl _D_00331924\n.alt_entry _D_00331924\n_D_00331924:\n"
    ".zero 4\n"
    ".globl _D_00331928\n.alt_entry _D_00331928\n_D_00331928:\n"
    ".zero 4\n"
    ".globl _D_0033192C\n.alt_entry _D_0033192C\n_D_0033192C:\n"
    ".zero 4\n"
    ".globl _D_00331930\n.alt_entry _D_00331930\n_D_00331930:\n"
    ".zero 4\n"
    ".globl _D_00331934\n.alt_entry _D_00331934\n_D_00331934:\n"
    ".zero 8\n"
    ".globl _D_0033193C\n.alt_entry _D_0033193C\n_D_0033193C:\n"
    ".zero 4\n"
    ".globl _D_00331940\n.alt_entry _D_00331940\n_D_00331940:\n"
    ".zero 16\n"
    ".globl _D_00331950\n.alt_entry _D_00331950\n_D_00331950:\n"
    ".zero 976\n"
    ".globl _D_00331D20\n.alt_entry _D_00331D20\n_D_00331D20:\n"
    ".zero 304\n"
    ".globl _D_00331E50\n.alt_entry _D_00331E50\n_D_00331E50:\n"
    ".zero 128\n"
    ".globl _D_00331ED0\n.alt_entry _D_00331ED0\n_D_00331ED0:\n"
    ".zero 3056\n"
    ".globl _D_00332AC0\n.alt_entry _D_00332AC0\n_D_00332AC0:\n"
    ".zero 4\n"
    ".globl _D_00332AC4\n.alt_entry _D_00332AC4\n_D_00332AC4:\n"
    ".zero 4\n"
    ".globl _D_00332AC8\n.alt_entry _D_00332AC8\n_D_00332AC8:\n"
    ".zero 4\n"
    ".globl _D_00332ACC\n.alt_entry _D_00332ACC\n_D_00332ACC:\n"
    ".zero 4\n"
    ".globl _D_00332AD0\n.alt_entry _D_00332AD0\n_D_00332AD0:\n"
    ".zero 4\n"
    ".globl _D_00332AD4\n.alt_entry _D_00332AD4\n_D_00332AD4:\n"
    ".zero 4\n"
    ".globl _D_00332AD8\n.alt_entry _D_00332AD8\n_D_00332AD8:\n"
    ".zero 4\n"
    ".globl _D_00332ADC\n.alt_entry _D_00332ADC\n_D_00332ADC:\n"
    ".zero 4\n"
    ".globl _D_00332AE0\n.alt_entry _D_00332AE0\n_D_00332AE0:\n"
    ".zero 4\n"
    ".globl _D_00332AE4\n.alt_entry _D_00332AE4\n_D_00332AE4:\n"
    ".zero 4\n"
    ".globl _D_00332AE8\n.alt_entry _D_00332AE8\n_D_00332AE8:\n"
    ".zero 24\n"
    ".globl _D_00332B00\n.alt_entry _D_00332B00\n_D_00332B00:\n"
    ".zero 4\n"
    ".globl _D_00332B04\n.alt_entry _D_00332B04\n_D_00332B04:\n"
    ".zero 8\n"
    ".globl _D_00332B0C\n.alt_entry _D_00332B0C\n_D_00332B0C:\n"
    ".zero 116\n"
    ".globl _D_00332B80\n.alt_entry _D_00332B80\n_D_00332B80:\n"
    ".zero 192\n"
    ".globl _D_00332C40\n.alt_entry _D_00332C40\n_D_00332C40:\n"
    ".zero 4\n"
    ".globl _D_00332C44\n.alt_entry _D_00332C44\n_D_00332C44:\n"
    ".zero 4\n"
    ".globl _D_00332C48\n.alt_entry _D_00332C48\n_D_00332C48:\n"
    ".zero 4\n"
    ".globl _D_00332C4C\n.alt_entry _D_00332C4C\n_D_00332C4C:\n"
    ".zero 4\n"
    ".globl _D_00332C50\n.alt_entry _D_00332C50\n_D_00332C50:\n"
    ".zero 624\n"
    ".globl _D_00332EC0\n.alt_entry _D_00332EC0\n_D_00332EC0:\n"
    ".zero 160\n"
    ".globl _D_00332F60\n.alt_entry _D_00332F60\n_D_00332F60:\n"
    ".zero 252\n"
    ".globl _g_unk_33305c\n.alt_entry _g_unk_33305c\n_g_unk_33305c:\n"
    ".zero 228\n"
    ".globl _D_00333140\n.alt_entry _D_00333140\n_D_00333140:\n"
    ".zero 80\n"
    ".globl _D_00333190\n.alt_entry _D_00333190\n_D_00333190:\n"
    ".zero 4\n"
    ".globl _D_00333194\n.alt_entry _D_00333194\n_D_00333194:\n"
    ".zero 4\n"
    ".globl _D_00333198\n.alt_entry _D_00333198\n_D_00333198:\n"
    ".zero 48\n"
    ".globl _g_0x3331C8\n.alt_entry _g_0x3331C8\n_g_0x3331C8:\n"
    ".zero 4\n"
    ".globl _g_0x3331CC\n.alt_entry _g_0x3331CC\n_g_0x3331CC:\n"
    ".zero 4\n"
    ".globl _D_003331D0\n.alt_entry _D_003331D0\n_D_003331D0:\n"
    ".zero 144\n"
    ".globl _D_00333260\n.alt_entry _D_00333260\n_D_00333260:\n"
    ".zero 572\n"
    ".globl _D_0033349C\n.alt_entry _D_0033349C\n_D_0033349C:\n"
    ".zero 4\n"
    ".globl _D_003334A0\n.alt_entry _D_003334A0\n_D_003334A0:\n"
    ".zero 160\n"
    ".globl _D_00333540\n.alt_entry _D_00333540\n_D_00333540:\n"
    ".zero 25104\n"
    ".globl _g_0x339750\n.alt_entry _g_0x339750\n_g_0x339750:\n"
    ".zero 26800\n");
#else
unsigned char m1_img[M1_IMG_SIZE] __attribute__((aligned(4096)));
__asm__(".globl D_00127210\n\t.set D_00127210, m1_img + 160272");
__asm__(".globl D_00128DD0\n\t.set D_00128DD0, m1_img + 167376");
__asm__(".globl D_00129150\n\t.set D_00129150, m1_img + 168272");
__asm__(".globl D_00129180\n\t.set D_00129180, m1_img + 168320");
__asm__(".globl D_0012BE30\n\t.set D_0012BE30, m1_img + 179760");
__asm__(".globl D_0012BF30\n\t.set D_0012BF30, m1_img + 180016");
__asm__(".globl D_0012C010\n\t.set D_0012C010, m1_img + 180240");
__asm__(".globl D_0012C8F0\n\t.set D_0012C8F0, m1_img + 182512");
__asm__(".globl D_0012CE00\n\t.set D_0012CE00, m1_img + 183808");
__asm__(".globl D_0012D390\n\t.set D_0012D390, m1_img + 185232");
__asm__(".globl D_0012D540\n\t.set D_0012D540, m1_img + 185664");
__asm__(".globl D_0012D670\n\t.set D_0012D670, m1_img + 185968");
__asm__(".globl D_0012DFF0\n\t.set D_0012DFF0, m1_img + 188400");
__asm__(".globl D_0012E3A0\n\t.set D_0012E3A0, m1_img + 189344");
__asm__(".globl D_00130520\n\t.set D_00130520, m1_img + 197920");
__asm__(".globl D_001305B0\n\t.set D_001305B0, m1_img + 198064");
__asm__(".globl D_00133CB0\n\t.set D_00133CB0, m1_img + 212144");
__asm__(".globl D_0013F9E0\n\t.set D_0013F9E0, m1_img + 260576");
__asm__(".globl D_00140000\n\t.set D_00140000, m1_img + 262144");
__asm__(".globl D_00145030\n\t.set D_00145030, m1_img + 282672");
__asm__(".globl D_0014C280\n\t.set D_0014C280, m1_img + 311936");
__asm__(".globl D_0014CF50\n\t.set D_0014CF50, m1_img + 315216");
__asm__(".globl D_0014CF90\n\t.set D_0014CF90, m1_img + 315280");
__asm__(".globl D_0014D0F0\n\t.set D_0014D0F0, m1_img + 315632");
__asm__(".globl D_0014D130\n\t.set D_0014D130, m1_img + 315696");
__asm__(".globl D_00151D90\n\t.set D_00151D90, m1_img + 335248");
__asm__(".globl D_00153580\n\t.set D_00153580, m1_img + 341376");
__asm__(".globl D_00153E10\n\t.set D_00153E10, m1_img + 343568");
__asm__(".globl D_00154D80\n\t.set D_00154D80, m1_img + 347520");
__asm__(".globl D_001552A0\n\t.set D_001552A0, m1_img + 348832");
__asm__(".globl D_0015C7A0\n\t.set D_0015C7A0, m1_img + 378784");
__asm__(".globl D_0015C840\n\t.set D_0015C840, m1_img + 378944");
__asm__(".globl D_0015C850\n\t.set D_0015C850, m1_img + 378960");
__asm__(".globl D_00160700\n\t.set D_00160700, m1_img + 395008");
__asm__(".globl D_0016BE00\n\t.set D_0016BE00, m1_img + 441856");
__asm__(".globl D_0016BE10\n\t.set D_0016BE10, m1_img + 441872");
__asm__(".globl D_0016C090\n\t.set D_0016C090, m1_img + 442512");
__asm__(".globl D_0016C100\n\t.set D_0016C100, m1_img + 442624");
__asm__(".globl D_0016C140\n\t.set D_0016C140, m1_img + 442688");
__asm__(".globl D_0016C150\n\t.set D_0016C150, m1_img + 442704");
__asm__(".globl D_0016C180\n\t.set D_0016C180, m1_img + 442752");
__asm__(".globl D_0016C1A0\n\t.set D_0016C1A0, m1_img + 442784");
__asm__(".globl D_0016F230\n\t.set D_0016F230, m1_img + 455216");
__asm__(".globl D_00170F90\n\t.set D_00170F90, m1_img + 462736");
__asm__(".globl D_00173B30\n\t.set D_00173B30, m1_img + 473904");
__asm__(".globl D_00173C50\n\t.set D_00173C50, m1_img + 474192");
__asm__(".globl D_00177A40\n\t.set D_00177A40, m1_img + 490048");
__asm__(".globl D_0017C040\n\t.set D_0017C040, m1_img + 507968");
__asm__(".globl D_0017E450\n\t.set D_0017E450, m1_img + 517200");
__asm__(".globl D_001806D0\n\t.set D_001806D0, m1_img + 526032");
__asm__(".globl D_00181B10\n\t.set D_00181B10, m1_img + 531216");
__asm__(".globl D_00181B50\n\t.set D_00181B50, m1_img + 531280");
__asm__(".globl g_unk_00187000\n\t.set g_unk_00187000, m1_img + 552960");
__asm__(".globl g_unk_00187008\n\t.set g_unk_00187008, m1_img + 552968");
__asm__(".globl g_unk_00187174\n\t.set g_unk_00187174, m1_img + 553332");
__asm__(".globl g_unk_00188740\n\t.set g_unk_00188740, m1_img + 558912");
__asm__(".globl g_unk_00188744\n\t.set g_unk_00188744, m1_img + 558916");
__asm__(".globl g_unk_00188A40\n\t.set g_unk_00188A40, m1_img + 559680");
__asm__(".globl g_unk_00188D0C\n\t.set g_unk_00188D0C, m1_img + 560396");
__asm__(".globl g_unk_00188D10\n\t.set g_unk_00188D10, m1_img + 560400");
__asm__(".globl g_unk_00188D18\n\t.set g_unk_00188D18, m1_img + 560408");
__asm__(".globl g_unk_00188DC0\n\t.set g_unk_00188DC0, m1_img + 560576");
__asm__(".globl D_0018B790\n\t.set D_0018B790, m1_img + 571280");
__asm__(".globl D_001971D0\n\t.set D_001971D0, m1_img + 618960");
__asm__(".globl D_00197FD0\n\t.set D_00197FD0, m1_img + 622544");
__asm__(".globl D_001BA030\n\t.set D_001BA030, m1_img + 761904");
__asm__(".globl D_001BA1F0\n\t.set D_001BA1F0, m1_img + 762352");
__asm__(".globl D_001BAA80\n\t.set D_001BAA80, m1_img + 764544");
__asm__(".globl D_001BABB0\n\t.set D_001BABB0, m1_img + 764848");
__asm__(".globl D_001FB0D0\n\t.set D_001FB0D0, m1_img + 1028304");
__asm__(".globl D_001FCF00\n\t.set D_001FCF00, m1_img + 1036032");
__asm__(".globl D_001FCFF0\n\t.set D_001FCFF0, m1_img + 1036272");
__asm__(".globl D_001FD660\n\t.set D_001FD660, m1_img + 1037920");
__asm__(".globl D_001FDCC0\n\t.set D_001FDCC0, m1_img + 1039552");
__asm__(".globl D_001FDDD0\n\t.set D_001FDDD0, m1_img + 1039824");
__asm__(".globl D_001FDE90\n\t.set D_001FDE90, m1_img + 1040016");
__asm__(".globl D_001FDF00\n\t.set D_001FDF00, m1_img + 1040128");
__asm__(".globl D_001FE080\n\t.set D_001FE080, m1_img + 1040512");
__asm__(".globl D_0021E830\n\t.set D_0021E830, m1_img + 1173552");
__asm__(".globl D_0021E950\n\t.set D_0021E950, m1_img + 1173840");
__asm__(".globl D_0021E9F0\n\t.set D_0021E9F0, m1_img + 1174000");
__asm__(".globl D_0021EA30\n\t.set D_0021EA30, m1_img + 1174064");
__asm__(".globl D_00222A60\n\t.set D_00222A60, m1_img + 1190496");
__asm__(".globl D_00222C90\n\t.set D_00222C90, m1_img + 1191056");
__asm__(".globl D_00223410\n\t.set D_00223410, m1_img + 1192976");
__asm__(".globl D_00223540\n\t.set D_00223540, m1_img + 1193280");
__asm__(".globl D_002239F0\n\t.set D_002239F0, m1_img + 1194480");
__asm__(".globl D_00223EA0\n\t.set D_00223EA0, m1_img + 1195680");
__asm__(".globl D_00223FE0\n\t.set D_00223FE0, m1_img + 1196000");
__asm__(".globl D_00224020\n\t.set D_00224020, m1_img + 1196064");
__asm__(".globl D_00224150\n\t.set D_00224150, m1_img + 1196368");
__asm__(".globl D_00224280\n\t.set D_00224280, m1_img + 1196672");
__asm__(".globl D_002242C0\n\t.set D_002242C0, m1_img + 1196736");
__asm__(".globl D_00224330\n\t.set D_00224330, m1_img + 1196848");
__asm__(".globl D_00224460\n\t.set D_00224460, m1_img + 1197152");
__asm__(".globl D_002245B0\n\t.set D_002245B0, m1_img + 1197488");
__asm__(".globl D_00228250\n\t.set D_00228250, m1_img + 1213008");
__asm__(".globl D_0022C4F0\n\t.set D_0022C4F0, m1_img + 1230064");
__asm__(".globl D_0022CA10\n\t.set D_0022CA10, m1_img + 1231376");
__asm__(".globl D_0022CCC0\n\t.set D_0022CCC0, m1_img + 1232064");
__asm__(".globl D_0022CD50\n\t.set D_0022CD50, m1_img + 1232208");
__asm__(".globl D_0022CEA0\n\t.set D_0022CEA0, m1_img + 1232544");
__asm__(".globl D_0022CF20\n\t.set D_0022CF20, m1_img + 1232672");
__asm__(".globl D_0022D310\n\t.set D_0022D310, m1_img + 1233680");
__asm__(".globl D_00230B10\n\t.set D_00230B10, m1_img + 1248016");
__asm__(".globl off_23b0c0\n\t.set off_23b0c0, m1_img + 1290432");
__asm__(".globl off_23bd10\n\t.set off_23bd10, m1_img + 1293584");
__asm__(".globl off_23bd30\n\t.set off_23bd30, m1_img + 1293616");
__asm__(".globl off_23be50\n\t.set off_23be50, m1_img + 1293904");
__asm__(".globl D_00242A10\n\t.set D_00242A10, m1_img + 1321488");
__asm__(".globl D_00242B20\n\t.set D_00242B20, m1_img + 1321760");
__asm__(".globl D_00242E00\n\t.set D_00242E00, m1_img + 1322496");
__asm__(".globl D_00243090\n\t.set D_00243090, m1_img + 1323152");
__asm__(".globl D_00243130\n\t.set D_00243130, m1_img + 1323312");
__asm__(".globl D_00243140\n\t.set D_00243140, m1_img + 1323328");
__asm__(".globl D_00243200\n\t.set D_00243200, m1_img + 1323520");
__asm__(".globl D_00243230\n\t.set D_00243230, m1_img + 1323568");
__asm__(".globl D_00243290\n\t.set D_00243290, m1_img + 1323664");
__asm__(".globl D_002432E0\n\t.set D_002432E0, m1_img + 1323744");
__asm__(".globl D_00247580\n\t.set D_00247580, m1_img + 1340800");
__asm__(".globl off_247780\n\t.set off_247780, m1_img + 1341312");
__asm__(".globl D_0024A890\n\t.set D_0024A890, m1_img + 1353872");
__asm__(".globl D_0024AD00\n\t.set D_0024AD00, m1_img + 1355008");
__asm__(".globl D_0024AD20\n\t.set D_0024AD20, m1_img + 1355040");
__asm__(".globl D_0024ADB0\n\t.set D_0024ADB0, m1_img + 1355184");
__asm__(".globl D_0024AE80\n\t.set D_0024AE80, m1_img + 1355392");
__asm__(".globl D_0024AED0\n\t.set D_0024AED0, m1_img + 1355472");
__asm__(".globl D_0024AF20\n\t.set D_0024AF20, m1_img + 1355552");
__asm__(".globl D_0024AF40\n\t.set D_0024AF40, m1_img + 1355584");
__asm__(".globl D_0024AF50\n\t.set D_0024AF50, m1_img + 1355600");
__asm__(".globl D_0029A390\n\t.set D_0029A390, m1_img + 1680272");
__asm__(".globl D_0029A610\n\t.set D_0029A610, m1_img + 1680912");
__asm__(".globl D_0029C680\n\t.set D_0029C680, m1_img + 1689216");
__asm__(".globl D_0029E740\n\t.set D_0029E740, m1_img + 1697600");
__asm__(".globl D_002A07B0\n\t.set D_002A07B0, m1_img + 1705904");
__asm__(".globl D_002D3F90\n\t.set D_002D3F90, m1_img + 1916816");
__asm__(".globl D_002D8330\n\t.set D_002D8330, m1_img + 1934128");
__asm__(".globl D_002DDF28\n\t.set D_002DDF28, m1_img + 1957672");
__asm__(".globl D_002DDFF0\n\t.set D_002DDFF0, m1_img + 1957872");
__asm__(".globl D_002DE570\n\t.set D_002DE570, m1_img + 1959280");
__asm__(".globl D_002E01C0\n\t.set D_002E01C0, m1_img + 1966528");
__asm__(".globl D_002E03B0\n\t.set D_002E03B0, m1_img + 1967024");
__asm__(".globl D_002E03E0\n\t.set D_002E03E0, m1_img + 1967072");
__asm__(".globl D_002E06A0\n\t.set D_002E06A0, m1_img + 1967776");
__asm__(".globl D_002E06E0\n\t.set D_002E06E0, m1_img + 1967840");
__asm__(".globl D_002E0700\n\t.set D_002E0700, m1_img + 1967872");
__asm__(".globl D_002E15D0\n\t.set D_002E15D0, m1_img + 1971664");
__asm__(".globl D_002E15F0\n\t.set D_002E15F0, m1_img + 1971696");
__asm__(".globl D_002E16C0\n\t.set D_002E16C0, m1_img + 1971904");
__asm__(".globl D_002E2530\n\t.set D_002E2530, m1_img + 1975600");
__asm__(".globl D_002E25A0\n\t.set D_002E25A0, m1_img + 1975712");
__asm__(".globl D_002E2CB0\n\t.set D_002E2CB0, m1_img + 1977520");
__asm__(".globl D_002E2EB0\n\t.set D_002E2EB0, m1_img + 1978032");
__asm__(".globl D_002E3240\n\t.set D_002E3240, m1_img + 1978944");
__asm__(".globl g_0x2E3240\n\t.set g_0x2E3240, m1_img + 1978944");
__asm__(".globl D_002E3244\n\t.set D_002E3244, m1_img + 1978948");
__asm__(".globl D_002E3248\n\t.set D_002E3248, m1_img + 1978952");
__asm__(".globl D_002E324C\n\t.set D_002E324C, m1_img + 1978956");
__asm__(".globl D_002E3250\n\t.set D_002E3250, m1_img + 1978960");
__asm__(".globl D_002E3254\n\t.set D_002E3254, m1_img + 1978964");
__asm__(".globl g_0x2E3258\n\t.set g_0x2E3258, m1_img + 1978968");
__asm__(".globl g_0x2E325C\n\t.set g_0x2E325C, m1_img + 1978972");
__asm__(".globl g_0x2E3260\n\t.set g_0x2E3260, m1_img + 1978976");
__asm__(".globl D_002E3264\n\t.set D_002E3264, m1_img + 1978980");
__asm__(".globl g_0x2E3264\n\t.set g_0x2E3264, m1_img + 1978980");
__asm__(".globl D_002E3268\n\t.set D_002E3268, m1_img + 1978984");
__asm__(".globl D_002E326C\n\t.set D_002E326C, m1_img + 1978988");
__asm__(".globl D_002E3600\n\t.set D_002E3600, m1_img + 1979904");
__asm__(".globl D_002E3604\n\t.set D_002E3604, m1_img + 1979908");
__asm__(".globl D_002E361C\n\t.set D_002E361C, m1_img + 1979932");
__asm__(".globl g_0x2E361C\n\t.set g_0x2E361C, m1_img + 1979932");
__asm__(".globl unk_2E361C\n\t.set unk_2E361C, m1_img + 1979932");
__asm__(".globl g_0x2E3620\n\t.set g_0x2E3620, m1_img + 1979936");
__asm__(".globl unk_2E3620\n\t.set unk_2E3620, m1_img + 1979936");
__asm__(".globl g_0x2E3624\n\t.set g_0x2E3624, m1_img + 1979940");
__asm__(".globl g_0x2E3628\n\t.set g_0x2E3628, m1_img + 1979944");
__asm__(".globl g_0x2E362C\n\t.set g_0x2E362C, m1_img + 1979948");
__asm__(".globl D_002E3630\n\t.set D_002E3630, m1_img + 1979952");
__asm__(".globl D_002E3634\n\t.set D_002E3634, m1_img + 1979956");
__asm__(".globl D_002E3660\n\t.set D_002E3660, m1_img + 1980000");
__asm__(".globl D_002E3664\n\t.set D_002E3664, m1_img + 1980004");
__asm__(".globl D_002E3668\n\t.set D_002E3668, m1_img + 1980008");
__asm__(".globl D_002E371C\n\t.set D_002E371C, m1_img + 1980188");
__asm__(".globl unk_2E3A40\n\t.set unk_2E3A40, m1_img + 1980992");
__asm__(".globl unk_2E3B80\n\t.set unk_2E3B80, m1_img + 1981312");
__asm__(".globl D_002E3C90\n\t.set D_002E3C90, m1_img + 1981584");
__asm__(".globl unk_2E3D50\n\t.set unk_2E3D50, m1_img + 1981776");
__asm__(".globl unk_2E3E30\n\t.set unk_2E3E30, m1_img + 1982000");
__asm__(".globl unk_2E3F10\n\t.set unk_2E3F10, m1_img + 1982224");
__asm__(".globl unk_2E4080\n\t.set unk_2E4080, m1_img + 1982592");
__asm__(".globl unk_2E4130\n\t.set unk_2E4130, m1_img + 1982768");
__asm__(".globl unk_2E41F0\n\t.set unk_2E41F0, m1_img + 1982960");
__asm__(".globl unk_2E42C0\n\t.set unk_2E42C0, m1_img + 1983168");
__asm__(".globl unk_2E43B0\n\t.set unk_2E43B0, m1_img + 1983408");
__asm__(".globl g_0x2E50C0\n\t.set g_0x2E50C0, m1_img + 1986752");
__asm__(".globl unk_2E5230\n\t.set unk_2E5230, m1_img + 1987120");
__asm__(".globl unk_2E5310\n\t.set unk_2E5310, m1_img + 1987344");
__asm__(".globl unk_2E53F0\n\t.set unk_2E53F0, m1_img + 1987568");
__asm__(".globl unk_2E54C0\n\t.set unk_2E54C0, m1_img + 1987776");
__asm__(".globl unk_2E5570\n\t.set unk_2E5570, m1_img + 1987952");
__asm__(".globl unk_2E5620\n\t.set unk_2E5620, m1_img + 1988128");
__asm__(".globl unk_2E56B0\n\t.set unk_2E56B0, m1_img + 1988272");
__asm__(".globl unk_2E57A0\n\t.set unk_2E57A0, m1_img + 1988512");
__asm__(".globl D_002E58E0\n\t.set D_002E58E0, m1_img + 1988832");
__asm__(".globl D_002E58F0\n\t.set D_002E58F0, m1_img + 1988848");
__asm__(".globl D_002E5910\n\t.set D_002E5910, m1_img + 1988880");
__asm__(".globl D_002E5920\n\t.set D_002E5920, m1_img + 1988896");
__asm__(".globl D_002E5930\n\t.set D_002E5930, m1_img + 1988912");
__asm__(".globl D_002E5AD0\n\t.set D_002E5AD0, m1_img + 1989328");
__asm__(".globl unk_2E5FE0\n\t.set unk_2E5FE0, m1_img + 1990624");
__asm__(".globl D_002E6700\n\t.set D_002E6700, m1_img + 1992448");
__asm__(".globl D_002E6730\n\t.set D_002E6730, m1_img + 1992496");
__asm__(".globl D_002E87B8\n\t.set D_002E87B8, m1_img + 2000824");
__asm__(".globl D_002E87F0\n\t.set D_002E87F0, m1_img + 2000880");
__asm__(".globl D_002EBFE8\n\t.set D_002EBFE8, m1_img + 2015208");
__asm__(".globl D_002EC080\n\t.set D_002EC080, m1_img + 2015360");
__asm__(".globl D_002EC090\n\t.set D_002EC090, m1_img + 2015376");
__asm__(".globl D_002EC098\n\t.set D_002EC098, m1_img + 2015384");
__asm__(".globl D_002EFDF8\n\t.set D_002EFDF8, m1_img + 2031096");
__asm__(".globl D_002EFE10\n\t.set D_002EFE10, m1_img + 2031120");
__asm__(".globl D_002EFE20\n\t.set D_002EFE20, m1_img + 2031136");
__asm__(".globl D_002EFE30\n\t.set D_002EFE30, m1_img + 2031152");
__asm__(".globl D_002EFE38\n\t.set D_002EFE38, m1_img + 2031160");
__asm__(".globl D_002F0000\n\t.set D_002F0000, m1_img + 2031616");
__asm__(".globl D_002F0010\n\t.set D_002F0010, m1_img + 2031632");
__asm__(".globl D_002F0018\n\t.set D_002F0018, m1_img + 2031640");
__asm__(".globl D_002F00B0\n\t.set D_002F00B0, m1_img + 2031792");
__asm__(".globl D_002F0110\n\t.set D_002F0110, m1_img + 2031888");
__asm__(".globl D_002F0120\n\t.set D_002F0120, m1_img + 2031904");
__asm__(".globl D_002F0230\n\t.set D_002F0230, m1_img + 2032176");
__asm__(".globl D_002F02C8\n\t.set D_002F02C8, m1_img + 2032328");
__asm__(".globl D_002F02D0\n\t.set D_002F02D0, m1_img + 2032336");
__asm__(".globl D_002F02D8\n\t.set D_002F02D8, m1_img + 2032344");
__asm__(".globl D_002F02E0\n\t.set D_002F02E0, m1_img + 2032352");
__asm__(".globl D_002F02E8\n\t.set D_002F02E8, m1_img + 2032360");
__asm__(".globl D_002F02F8\n\t.set D_002F02F8, m1_img + 2032376");
__asm__(".globl D_002F0300\n\t.set D_002F0300, m1_img + 2032384");
__asm__(".globl D_002F0310\n\t.set D_002F0310, m1_img + 2032400");
__asm__(".globl D_002F0318\n\t.set D_002F0318, m1_img + 2032408");
__asm__(".globl D_002F0320\n\t.set D_002F0320, m1_img + 2032416");
__asm__(".globl D_002F0330\n\t.set D_002F0330, m1_img + 2032432");
__asm__(".globl D_002F0A90\n\t.set D_002F0A90, m1_img + 2034320");
__asm__(".globl D_002F0AA0\n\t.set D_002F0AA0, m1_img + 2034336");
__asm__(".globl D_002F0C08\n\t.set D_002F0C08, m1_img + 2034696");
__asm__(".globl D_002F0C18\n\t.set D_002F0C18, m1_img + 2034712");
__asm__(".globl D_002F0C20\n\t.set D_002F0C20, m1_img + 2034720");
__asm__(".globl D_002F0C40\n\t.set D_002F0C40, m1_img + 2034752");
__asm__(".globl D_002F0C60\n\t.set D_002F0C60, m1_img + 2034784");
__asm__(".globl D_002F0C70\n\t.set D_002F0C70, m1_img + 2034800");
__asm__(".globl D_002F0C90\n\t.set D_002F0C90, m1_img + 2034832");
__asm__(".globl D_002F0CB0\n\t.set D_002F0CB0, m1_img + 2034864");
__asm__(".globl D_002F0CC0\n\t.set D_002F0CC0, m1_img + 2034880");
__asm__(".globl D_002F0EF0\n\t.set D_002F0EF0, m1_img + 2035440");
__asm__(".globl D_002F0EF8\n\t.set D_002F0EF8, m1_img + 2035448");
__asm__(".globl D_002F0F00\n\t.set D_002F0F00, m1_img + 2035456");
__asm__(".globl D_002F0F08\n\t.set D_002F0F08, m1_img + 2035464");
__asm__(".globl D_002F0F10\n\t.set D_002F0F10, m1_img + 2035472");
__asm__(".globl D_002F0FA8\n\t.set D_002F0FA8, m1_img + 2035624");
__asm__(".globl G_8028\n\t.set G_8028, m1_img + 2037528");
__asm__(".globl G_8048\n\t.set G_8048, m1_img + 2037560");
__asm__(".globl G_805C\n\t.set G_805C, m1_img + 2037580");
__asm__(".globl G_8060\n\t.set G_8060, m1_img + 2037584");
__asm__(".globl G_806C\n\t.set G_806C, m1_img + 2037596");
__asm__(".globl G_8080\n\t.set G_8080, m1_img + 2037616");
__asm__(".globl G_8110\n\t.set G_8110, m1_img + 2037760");
__asm__(".globl G_8118\n\t.set G_8118, m1_img + 2037768");
__asm__(".globl G_8278\n\t.set G_8278, m1_img + 2038120");
__asm__(".globl G_8290\n\t.set G_8290, m1_img + 2038144");
__asm__(".globl G_8298\n\t.set G_8298, m1_img + 2038152");
__asm__(".globl G_82A0\n\t.set G_82A0, m1_img + 2038160");
__asm__(".globl G_82A4\n\t.set G_82A4, m1_img + 2038164");
__asm__(".globl G_8310\n\t.set G_8310, m1_img + 2038272");
__asm__(".globl G_8318\n\t.set G_8318, m1_img + 2038280");
__asm__(".globl G_8324\n\t.set G_8324, m1_img + 2038292");
__asm__(".globl G_8328\n\t.set G_8328, m1_img + 2038296");
__asm__(".globl G_8338\n\t.set G_8338, m1_img + 2038312");
__asm__(".globl G_8344\n\t.set G_8344, m1_img + 2038324");
__asm__(".globl G_8350\n\t.set G_8350, m1_img + 2038336");
__asm__(".globl G_8360\n\t.set G_8360, m1_img + 2038352");
__asm__(".globl G_8368\n\t.set G_8368, m1_img + 2038360");
__asm__(".globl G_8380\n\t.set G_8380, m1_img + 2038384");
__asm__(".globl G_8388\n\t.set G_8388, m1_img + 2038392");
__asm__(".globl G_838C\n\t.set G_838C, m1_img + 2038396");
__asm__(".globl G_8398\n\t.set G_8398, m1_img + 2038408");
__asm__(".globl D_002F1A90\n\t.set D_002F1A90, m1_img + 2038416");
__asm__(".globl G_83A0\n\t.set G_83A0, m1_img + 2038416");
__asm__(".globl G_83A8\n\t.set G_83A8, m1_img + 2038424");
__asm__(".globl G_83AC\n\t.set G_83AC, m1_img + 2038428");
__asm__(".globl G_83B0\n\t.set G_83B0, m1_img + 2038432");
__asm__(".globl G_83BC\n\t.set G_83BC, m1_img + 2038444");
__asm__(".globl G_83C0\n\t.set G_83C0, m1_img + 2038448");
__asm__(".globl G_8410\n\t.set G_8410, m1_img + 2038528");
__asm__(".globl G_8434\n\t.set G_8434, m1_img + 2038564");
__asm__(".globl G_8438\n\t.set G_8438, m1_img + 2038568");
__asm__(".globl G_843C\n\t.set G_843C, m1_img + 2038572");
__asm__(".globl G_8440\n\t.set G_8440, m1_img + 2038576");
__asm__(".globl G_8444\n\t.set G_8444, m1_img + 2038580");
__asm__(".globl G_844C\n\t.set G_844C, m1_img + 2038588");
__asm__(".globl G_8454\n\t.set G_8454, m1_img + 2038596");
__asm__(".globl G_8458\n\t.set G_8458, m1_img + 2038600");
__asm__(".globl G_8484\n\t.set G_8484, m1_img + 2038644");
__asm__(".globl G_8488\n\t.set G_8488, m1_img + 2038648");
__asm__(".globl G_848C\n\t.set G_848C, m1_img + 2038652");
__asm__(".globl G_84AC\n\t.set G_84AC, m1_img + 2038684");
__asm__(".globl G_84B0\n\t.set G_84B0, m1_img + 2038688");
__asm__(".globl G_84B4\n\t.set G_84B4, m1_img + 2038692");
__asm__(".globl G_84B8\n\t.set G_84B8, m1_img + 2038696");
__asm__(".globl G_84BC\n\t.set G_84BC, m1_img + 2038700");
__asm__(".globl G_84C0\n\t.set G_84C0, m1_img + 2038704");
__asm__(".globl G_84C4\n\t.set G_84C4, m1_img + 2038708");
__asm__(".globl G_84C8\n\t.set G_84C8, m1_img + 2038712");
__asm__(".globl G_84D8\n\t.set G_84D8, m1_img + 2038728");
__asm__(".globl G_84EC\n\t.set G_84EC, m1_img + 2038748");
__asm__(".globl G_84F0\n\t.set G_84F0, m1_img + 2038752");
__asm__(".globl G_8508\n\t.set G_8508, m1_img + 2038776");
__asm__(".globl G_8514\n\t.set G_8514, m1_img + 2038788");
__asm__(".globl G_8518\n\t.set G_8518, m1_img + 2038792");
__asm__(".globl G_851C\n\t.set G_851C, m1_img + 2038796");
__asm__(".globl G_8520\n\t.set G_8520, m1_img + 2038800");
__asm__(".globl G_8524\n\t.set G_8524, m1_img + 2038804");
__asm__(".globl G_8528\n\t.set G_8528, m1_img + 2038808");
__asm__(".globl G_852C\n\t.set G_852C, m1_img + 2038812");
__asm__(".globl G_8538\n\t.set G_8538, m1_img + 2038824");
__asm__(".globl G_853C\n\t.set G_853C, m1_img + 2038828");
__asm__(".globl G_8540\n\t.set G_8540, m1_img + 2038832");
__asm__(".globl G_8544\n\t.set G_8544, m1_img + 2038836");
__asm__(".globl G_8548\n\t.set G_8548, m1_img + 2038840");
__asm__(".globl G_854C\n\t.set G_854C, m1_img + 2038844");
__asm__(".globl G_8550\n\t.set G_8550, m1_img + 2038848");
__asm__(".globl G_8558\n\t.set G_8558, m1_img + 2038856");
__asm__(".globl G_8570\n\t.set G_8570, m1_img + 2038880");
__asm__(".globl G_8578\n\t.set G_8578, m1_img + 2038888");
__asm__(".globl G_8620\n\t.set G_8620, m1_img + 2039056");
__asm__(".globl G_8640\n\t.set G_8640, m1_img + 2039088");
__asm__(".globl G_86E4\n\t.set G_86E4, m1_img + 2039252");
__asm__(".globl G_86F0\n\t.set G_86F0, m1_img + 2039264");
__asm__(".globl G_86F8\n\t.set G_86F8, m1_img + 2039272");
__asm__(".globl G_8748\n\t.set G_8748, m1_img + 2039352");
__asm__(".globl G_8778\n\t.set G_8778, m1_img + 2039400");
__asm__(".globl G_87CC\n\t.set G_87CC, m1_img + 2039484");
__asm__(".globl G_8874\n\t.set G_8874, m1_img + 2039652");
__asm__(".globl G_8878\n\t.set G_8878, m1_img + 2039656");
__asm__(".globl G_8890\n\t.set G_8890, m1_img + 2039680");
__asm__(".globl G_88A8\n\t.set G_88A8, m1_img + 2039704");
__asm__(".globl G_88FC\n\t.set G_88FC, m1_img + 2039788");
__asm__(".globl G_8900\n\t.set G_8900, m1_img + 2039792");
__asm__(".globl G_8918\n\t.set G_8918, m1_img + 2039816");
__asm__(".globl G_891C\n\t.set G_891C, m1_img + 2039820");
__asm__(".globl G_8924\n\t.set G_8924, m1_img + 2039828");
__asm__(".globl G_8928\n\t.set G_8928, m1_img + 2039832");
__asm__(".globl G_892C\n\t.set G_892C, m1_img + 2039836");
__asm__(".globl G_8930\n\t.set G_8930, m1_img + 2039840");
__asm__(".globl G_8938\n\t.set G_8938, m1_img + 2039848");
__asm__(".globl G_8940\n\t.set G_8940, m1_img + 2039856");
__asm__(".globl G_8960\n\t.set G_8960, m1_img + 2039888");
__asm__(".globl G_8970\n\t.set G_8970, m1_img + 2039904");
__asm__(".globl G_8974\n\t.set G_8974, m1_img + 2039908");
__asm__(".globl G_897C\n\t.set G_897C, m1_img + 2039916");
__asm__(".globl G_8980\n\t.set G_8980, m1_img + 2039920");
__asm__(".globl G_8984\n\t.set G_8984, m1_img + 2039924");
__asm__(".globl G_8988\n\t.set G_8988, m1_img + 2039928");
__asm__(".globl G_89D4\n\t.set G_89D4, m1_img + 2040004");
__asm__(".globl G_89D8\n\t.set G_89D8, m1_img + 2040008");
__asm__(".globl G_89EC\n\t.set G_89EC, m1_img + 2040028");
__asm__(".globl G_89F0\n\t.set G_89F0, m1_img + 2040032");
__asm__(".globl G_89FC\n\t.set G_89FC, m1_img + 2040044");
__asm__(".globl G_8A04\n\t.set G_8A04, m1_img + 2040052");
__asm__(".globl G_8A20\n\t.set G_8A20, m1_img + 2040080");
__asm__(".globl D_002F8620\n\t.set D_002F8620, m1_img + 2065952");
__asm__(".globl D_002F8628\n\t.set D_002F8628, m1_img + 2065960");
__asm__(".globl D_002F8640\n\t.set D_002F8640, m1_img + 2065984");
__asm__(".globl D_002F8644\n\t.set D_002F8644, m1_img + 2065988");
__asm__(".globl D_002F8648\n\t.set D_002F8648, m1_img + 2065992");
__asm__(".globl D_002F864C\n\t.set D_002F864C, m1_img + 2065996");
__asm__(".globl D_002F8650\n\t.set D_002F8650, m1_img + 2066000");
__asm__(".globl D_002F8654\n\t.set D_002F8654, m1_img + 2066004");
__asm__(".globl D_002F8658\n\t.set D_002F8658, m1_img + 2066008");
__asm__(".globl D_002F865C\n\t.set D_002F865C, m1_img + 2066012");
__asm__(".globl D_002F8684\n\t.set D_002F8684, m1_img + 2066052");
__asm__(".globl D_002F8688\n\t.set D_002F8688, m1_img + 2066056");
__asm__(".globl D_002F868C\n\t.set D_002F868C, m1_img + 2066060");
__asm__(".globl D_002F8690\n\t.set D_002F8690, m1_img + 2066064");
__asm__(".globl D_002F8694\n\t.set D_002F8694, m1_img + 2066068");
__asm__(".globl D_002F86A0\n\t.set D_002F86A0, m1_img + 2066080");
__asm__(".globl D_002F86BC\n\t.set D_002F86BC, m1_img + 2066108");
__asm__(".globl D_002F86D0\n\t.set D_002F86D0, m1_img + 2066128");
__asm__(".globl D_002F86D4\n\t.set D_002F86D4, m1_img + 2066132");
__asm__(".globl D_002F86D8\n\t.set D_002F86D8, m1_img + 2066136");
__asm__(".globl D_002F86DC\n\t.set D_002F86DC, m1_img + 2066140");
__asm__(".globl D_002F86E0\n\t.set D_002F86E0, m1_img + 2066144");
__asm__(".globl D_002F86E4\n\t.set D_002F86E4, m1_img + 2066148");
__asm__(".globl D_002F86EC\n\t.set D_002F86EC, m1_img + 2066156");
__asm__(".globl D_002F86F0\n\t.set D_002F86F0, m1_img + 2066160");
__asm__(".globl D_002F86F8\n\t.set D_002F86F8, m1_img + 2066168");
__asm__(".globl D_002FA350\n\t.set D_002FA350, m1_img + 2073424");
__asm__(".globl D_002FA360\n\t.set D_002FA360, m1_img + 2073440");
__asm__(".globl D_002FA364\n\t.set D_002FA364, m1_img + 2073444");
__asm__(".globl D_002FA368\n\t.set D_002FA368, m1_img + 2073448");
__asm__(".globl D_002FA36C\n\t.set D_002FA36C, m1_img + 2073452");
__asm__(".globl D_002FA370\n\t.set D_002FA370, m1_img + 2073456");
__asm__(".globl D_002FA38C\n\t.set D_002FA38C, m1_img + 2073484");
__asm__(".globl D_002FA41C\n\t.set D_002FA41C, m1_img + 2073628");
__asm__(".globl D_002FA420\n\t.set D_002FA420, m1_img + 2073632");
__asm__(".globl D_002FA424\n\t.set D_002FA424, m1_img + 2073636");
__asm__(".globl D_002FA42C\n\t.set D_002FA42C, m1_img + 2073644");
__asm__(".globl D_002FA430\n\t.set D_002FA430, m1_img + 2073648");
__asm__(".globl D_002FA43C\n\t.set D_002FA43C, m1_img + 2073660");
__asm__(".globl D_002FA444\n\t.set D_002FA444, m1_img + 2073668");
__asm__(".globl D_002FA448\n\t.set D_002FA448, m1_img + 2073672");
__asm__(".globl D_002FA44C\n\t.set D_002FA44C, m1_img + 2073676");
__asm__(".globl D_002FA450\n\t.set D_002FA450, m1_img + 2073680");
__asm__(".globl D_002FA454\n\t.set D_002FA454, m1_img + 2073684");
__asm__(".globl D_002FA458\n\t.set D_002FA458, m1_img + 2073688");
__asm__(".globl D_002FA45C\n\t.set D_002FA45C, m1_img + 2073692");
__asm__(".globl D_002FA468\n\t.set D_002FA468, m1_img + 2073704");
__asm__(".globl D_002FA474\n\t.set D_002FA474, m1_img + 2073716");
__asm__(".globl D_002FA570\n\t.set D_002FA570, m1_img + 2073968");
__asm__(".globl D_002FA584\n\t.set D_002FA584, m1_img + 2073988");
__asm__(".globl D_002FA588\n\t.set D_002FA588, m1_img + 2073992");
__asm__(".globl D_002FA58C\n\t.set D_002FA58C, m1_img + 2073996");
__asm__(".globl D_002FA590\n\t.set D_002FA590, m1_img + 2074000");
__asm__(".globl D_002FA5A0\n\t.set D_002FA5A0, m1_img + 2074016");
__asm__(".globl D_002FA5D8\n\t.set D_002FA5D8, m1_img + 2074072");
__asm__(".globl D_002FA610\n\t.set D_002FA610, m1_img + 2074128");
__asm__(".globl D_002FA614\n\t.set D_002FA614, m1_img + 2074132");
__asm__(".globl D_002FA618\n\t.set D_002FA618, m1_img + 2074136");
__asm__(".globl D_002FA61F\n\t.set D_002FA61F, m1_img + 2074143");
__asm__(".globl D_002FA620\n\t.set D_002FA620, m1_img + 2074144");
__asm__(".globl D_002FA628\n\t.set D_002FA628, m1_img + 2074152");
__asm__(".globl D_002FA630\n\t.set D_002FA630, m1_img + 2074160");
__asm__(".globl D_002FA63C\n\t.set D_002FA63C, m1_img + 2074172");
__asm__(".globl D_002FA66C\n\t.set D_002FA66C, m1_img + 2074220");
__asm__(".globl D_002FA678\n\t.set D_002FA678, m1_img + 2074232");
__asm__(".globl D_002FA69C\n\t.set D_002FA69C, m1_img + 2074268");
__asm__(".globl D_002FA6D0\n\t.set D_002FA6D0, m1_img + 2074320");
__asm__(".globl D_002FA6D4\n\t.set D_002FA6D4, m1_img + 2074324");
__asm__(".globl D_002FA6D8\n\t.set D_002FA6D8, m1_img + 2074328");
__asm__(".globl D_002FA6DC\n\t.set D_002FA6DC, m1_img + 2074332");
__asm__(".globl D_002FA6E0\n\t.set D_002FA6E0, m1_img + 2074336");
__asm__(".globl D_002FA700\n\t.set D_002FA700, m1_img + 2074368");
__asm__(".globl D_002FAA80\n\t.set D_002FAA80, m1_img + 2075264");
__asm__(".globl D_002FAA88\n\t.set D_002FAA88, m1_img + 2075272");
__asm__(".globl D_002FED10\n\t.set D_002FED10, m1_img + 2092304");
__asm__(".globl D_00302090\n\t.set D_00302090, m1_img + 2105488");
__asm__(".globl D_003034D0\n\t.set D_003034D0, m1_img + 2110672");
__asm__(".globl D_00303E20\n\t.set D_00303E20, m1_img + 2113056");
__asm__(".globl D_00303E24\n\t.set D_00303E24, m1_img + 2113060");
__asm__(".globl D_00303E28\n\t.set D_00303E28, m1_img + 2113064");
__asm__(".globl D_00303E2C\n\t.set D_00303E2C, m1_img + 2113068");
__asm__(".globl D_00303E30\n\t.set D_00303E30, m1_img + 2113072");
__asm__(".globl D_00303E34\n\t.set D_00303E34, m1_img + 2113076");
__asm__(".globl D_00303E38\n\t.set D_00303E38, m1_img + 2113080");
__asm__(".globl D_00303E3C\n\t.set D_00303E3C, m1_img + 2113084");
__asm__(".globl D_00303E48\n\t.set D_00303E48, m1_img + 2113096");
__asm__(".globl D_00303E4C\n\t.set D_00303E4C, m1_img + 2113100");
__asm__(".globl g_unk_305994\n\t.set g_unk_305994, m1_img + 2120084");
__asm__(".globl g_unk_305998\n\t.set g_unk_305998, m1_img + 2120088");
__asm__(".globl D_00305D04\n\t.set D_00305D04, m1_img + 2120964");
__asm__(".globl D_00305D50\n\t.set D_00305D50, m1_img + 2121040");
__asm__(".globl D_00305E10\n\t.set D_00305E10, m1_img + 2121232");
__asm__(".globl D_00305F20\n\t.set D_00305F20, m1_img + 2121504");
__asm__(".globl D_00305F50\n\t.set D_00305F50, m1_img + 2121552");
__asm__(".globl g_0x305F50\n\t.set g_0x305F50, m1_img + 2121552");
__asm__(".globl g_unk_305F54\n\t.set g_unk_305F54, m1_img + 2121556");
__asm__(".globl D_00305F7C\n\t.set D_00305F7C, m1_img + 2121596");
__asm__(".globl D_00306020\n\t.set D_00306020, m1_img + 2121760");
__asm__(".globl D_00306044\n\t.set D_00306044, m1_img + 2121796");
__asm__(".globl D_0030604C\n\t.set D_0030604C, m1_img + 2121804");
__asm__(".globl g_0x30604C\n\t.set g_0x30604C, m1_img + 2121804");
__asm__(".globl D_00306050\n\t.set D_00306050, m1_img + 2121808");
__asm__(".globl D_00306060\n\t.set D_00306060, m1_img + 2121824");
__asm__(".globl D_00306064\n\t.set D_00306064, m1_img + 2121828");
__asm__(".globl D_00306068\n\t.set D_00306068, m1_img + 2121832");
__asm__(".globl D_0030606C\n\t.set D_0030606C, m1_img + 2121836");
__asm__(".globl D_00306070\n\t.set D_00306070, m1_img + 2121840");
__asm__(".globl g_unk_306078\n\t.set g_unk_306078, m1_img + 2121848");
__asm__(".globl D_00306088\n\t.set D_00306088, m1_img + 2121864");
__asm__(".globl D_00306094\n\t.set D_00306094, m1_img + 2121876");
__asm__(".globl D_00306098\n\t.set D_00306098, m1_img + 2121880");
__asm__(".globl D_00306218\n\t.set D_00306218, m1_img + 2122264");
__asm__(".globl D_0030621C\n\t.set D_0030621C, m1_img + 2122268");
__asm__(".globl D_0030622C\n\t.set D_0030622C, m1_img + 2122284");
__asm__(".globl D_00306230\n\t.set D_00306230, m1_img + 2122288");
__asm__(".globl D_0030623C\n\t.set D_0030623C, m1_img + 2122300");
__asm__(".globl D_00306240\n\t.set D_00306240, m1_img + 2122304");
__asm__(".globl D_00306244\n\t.set D_00306244, m1_img + 2122308");
__asm__(".globl D_00306250\n\t.set D_00306250, m1_img + 2122320");
__asm__(".globl D_00306254\n\t.set D_00306254, m1_img + 2122324");
__asm__(".globl D_00306258\n\t.set D_00306258, m1_img + 2122328");
__asm__(".globl D_00306264\n\t.set D_00306264, m1_img + 2122340");
__asm__(".globl D_00306268\n\t.set D_00306268, m1_img + 2122344");
__asm__(".globl D_0030626C\n\t.set D_0030626C, m1_img + 2122348");
__asm__(".globl D_00306278\n\t.set D_00306278, m1_img + 2122360");
__asm__(".globl D_0030627C\n\t.set D_0030627C, m1_img + 2122364");
__asm__(".globl D_00306280\n\t.set D_00306280, m1_img + 2122368");
__asm__(".globl D_00306284\n\t.set D_00306284, m1_img + 2122372");
__asm__(".globl D_00306288\n\t.set D_00306288, m1_img + 2122376");
__asm__(".globl D_0030628C\n\t.set D_0030628C, m1_img + 2122380");
__asm__(".globl D_00306290\n\t.set D_00306290, m1_img + 2122384");
__asm__(".globl D_00306294\n\t.set D_00306294, m1_img + 2122388");
__asm__(".globl D_00306298\n\t.set D_00306298, m1_img + 2122392");
__asm__(".globl D_0030629C\n\t.set D_0030629C, m1_img + 2122396");
__asm__(".globl D_003062A0\n\t.set D_003062A0, m1_img + 2122400");
__asm__(".globl D_003062A4\n\t.set D_003062A4, m1_img + 2122404");
__asm__(".globl D_003062AC\n\t.set D_003062AC, m1_img + 2122412");
__asm__(".globl D_003062B0\n\t.set D_003062B0, m1_img + 2122416");
__asm__(".globl D_003062B4\n\t.set D_003062B4, m1_img + 2122420");
__asm__(".globl D_003062B8\n\t.set D_003062B8, m1_img + 2122424");
__asm__(".globl D_003062BC\n\t.set D_003062BC, m1_img + 2122428");
__asm__(".globl D_003062C0\n\t.set D_003062C0, m1_img + 2122432");
__asm__(".globl D_003062C4\n\t.set D_003062C4, m1_img + 2122436");
__asm__(".globl D_003062C8\n\t.set D_003062C8, m1_img + 2122440");
__asm__(".globl D_003062CC\n\t.set D_003062CC, m1_img + 2122444");
__asm__(".globl D_003062D0\n\t.set D_003062D0, m1_img + 2122448");
__asm__(".globl D_003062D4\n\t.set D_003062D4, m1_img + 2122452");
__asm__(".globl D_003062D8\n\t.set D_003062D8, m1_img + 2122456");
__asm__(".globl D_003062DC\n\t.set D_003062DC, m1_img + 2122460");
__asm__(".globl D_003062E8\n\t.set D_003062E8, m1_img + 2122472");
__asm__(".globl D_003062FC\n\t.set D_003062FC, m1_img + 2122492");
__asm__(".globl D_003062FE\n\t.set D_003062FE, m1_img + 2122494");
__asm__(".globl D_00306300\n\t.set D_00306300, m1_img + 2122496");
__asm__(".globl D_00306302\n\t.set D_00306302, m1_img + 2122498");
__asm__(".globl D_00306304\n\t.set D_00306304, m1_img + 2122500");
__asm__(".globl D_00306306\n\t.set D_00306306, m1_img + 2122502");
__asm__(".globl D_00306308\n\t.set D_00306308, m1_img + 2122504");
__asm__(".globl D_0030630A\n\t.set D_0030630A, m1_img + 2122506");
__asm__(".globl D_0030630C\n\t.set D_0030630C, m1_img + 2122508");
__asm__(".globl D_0030630E\n\t.set D_0030630E, m1_img + 2122510");
__asm__(".globl D_00306310\n\t.set D_00306310, m1_img + 2122512");
__asm__(".globl D_00306314\n\t.set D_00306314, m1_img + 2122516");
__asm__(".globl D_00306316\n\t.set D_00306316, m1_img + 2122518");
__asm__(".globl D_00306318\n\t.set D_00306318, m1_img + 2122520");
__asm__(".globl D_0030631A\n\t.set D_0030631A, m1_img + 2122522");
__asm__(".globl D_0030631C\n\t.set D_0030631C, m1_img + 2122524");
__asm__(".globl D_0030631E\n\t.set D_0030631E, m1_img + 2122526");
__asm__(".globl D_00306320\n\t.set D_00306320, m1_img + 2122528");
__asm__(".globl D_00306322\n\t.set D_00306322, m1_img + 2122530");
__asm__(".globl D_00306324\n\t.set D_00306324, m1_img + 2122532");
__asm__(".globl D_00306326\n\t.set D_00306326, m1_img + 2122534");
__asm__(".globl D_00306328\n\t.set D_00306328, m1_img + 2122536");
__asm__(".globl D_0030632A\n\t.set D_0030632A, m1_img + 2122538");
__asm__(".globl D_0030632C\n\t.set D_0030632C, m1_img + 2122540");
__asm__(".globl D_00306332\n\t.set D_00306332, m1_img + 2122546");
__asm__(".globl D_0030633C\n\t.set D_0030633C, m1_img + 2122556");
__asm__(".globl D_00306370\n\t.set D_00306370, m1_img + 2122608");
__asm__(".globl D_003063A0\n\t.set D_003063A0, m1_img + 2122656");
__asm__(".globl D_003063B4\n\t.set D_003063B4, m1_img + 2122676");
__asm__(".globl D_003063E4\n\t.set D_003063E4, m1_img + 2122724");
__asm__(".globl D_003063F8\n\t.set D_003063F8, m1_img + 2122744");
__asm__(".globl D_00306400\n\t.set D_00306400, m1_img + 2122752");
__asm__(".globl D_0030640C\n\t.set D_0030640C, m1_img + 2122764");
__asm__(".globl D_0030641C\n\t.set D_0030641C, m1_img + 2122780");
__asm__(".globl D_00306424\n\t.set D_00306424, m1_img + 2122788");
__asm__(".globl D_0030642C\n\t.set D_0030642C, m1_img + 2122796");
__asm__(".globl D_00306430\n\t.set D_00306430, m1_img + 2122800");
__asm__(".globl D_00306434\n\t.set D_00306434, m1_img + 2122804");
__asm__(".globl D_00306458\n\t.set D_00306458, m1_img + 2122840");
__asm__(".globl D_0030645C\n\t.set D_0030645C, m1_img + 2122844");
__asm__(".globl D_00306460\n\t.set D_00306460, m1_img + 2122848");
__asm__(".globl D_00306464\n\t.set D_00306464, m1_img + 2122852");
__asm__(".globl D_00306470\n\t.set D_00306470, m1_img + 2122864");
__asm__(".globl D_00306478\n\t.set D_00306478, m1_img + 2122872");
__asm__(".globl D_00306484\n\t.set D_00306484, m1_img + 2122884");
__asm__(".globl D_00306584\n\t.set D_00306584, m1_img + 2123140");
__asm__(".globl D_00306984\n\t.set D_00306984, m1_img + 2124164");
__asm__(".globl D_003069C4\n\t.set D_003069C4, m1_img + 2124228");
__asm__(".globl D_00306AC4\n\t.set D_00306AC4, m1_img + 2124484");
__asm__(".globl D_00306AC8\n\t.set D_00306AC8, m1_img + 2124488");
__asm__(".globl D_00306C00\n\t.set D_00306C00, m1_img + 2124800");
__asm__(".globl D_00306F80\n\t.set D_00306F80, m1_img + 2125696");
__asm__(".globl D_00306F84\n\t.set D_00306F84, m1_img + 2125700");
__asm__(".globl D_003070D0\n\t.set D_003070D0, m1_img + 2126032");
__asm__(".globl D_00307218\n\t.set D_00307218, m1_img + 2126360");
__asm__(".globl D_00307530\n\t.set D_00307530, m1_img + 2127152");
__asm__(".globl D_00307534\n\t.set D_00307534, m1_img + 2127156");
__asm__(".globl D_00308260\n\t.set D_00308260, m1_img + 2130528");
__asm__(".globl D_00308268\n\t.set D_00308268, m1_img + 2130536");
__asm__(".globl D_00308274\n\t.set D_00308274, m1_img + 2130548");
__asm__(".globl D_00308278\n\t.set D_00308278, m1_img + 2130552");
__asm__(".globl D_00308280\n\t.set D_00308280, m1_img + 2130560");
__asm__(".globl D_00308284\n\t.set D_00308284, m1_img + 2130564");
__asm__(".globl D_00308288\n\t.set D_00308288, m1_img + 2130568");
__asm__(".globl D_0030828C\n\t.set D_0030828C, m1_img + 2130572");
__asm__(".globl D_00308290\n\t.set D_00308290, m1_img + 2130576");
__asm__(".globl D_003082F0\n\t.set D_003082F0, m1_img + 2130672");
__asm__(".globl D_00308310\n\t.set D_00308310, m1_img + 2130704");
__asm__(".globl D_00308450\n\t.set D_00308450, m1_img + 2131024");
__asm__(".globl D_00309E00\n\t.set D_00309E00, m1_img + 2137600");
__asm__(".globl D_00309E04\n\t.set D_00309E04, m1_img + 2137604");
__asm__(".globl D_00309E08\n\t.set D_00309E08, m1_img + 2137608");
__asm__(".globl D_00309E0C\n\t.set D_00309E0C, m1_img + 2137612");
__asm__(".globl D_003126EC\n\t.set D_003126EC, m1_img + 2172652");
__asm__(".globl D_003127A0\n\t.set D_003127A0, m1_img + 2172832");
__asm__(".globl D_00312830\n\t.set D_00312830, m1_img + 2172976");
__asm__(".globl D_00312880\n\t.set D_00312880, m1_img + 2173056");
__asm__(".globl D_00315640\n\t.set D_00315640, m1_img + 2184768");
__asm__(".globl D_003156C0\n\t.set D_003156C0, m1_img + 2184896");
__asm__(".globl D_003156E0\n\t.set D_003156E0, m1_img + 2184928");
__asm__(".globl D_00315740\n\t.set D_00315740, m1_img + 2185024");
__asm__(".globl D_00315880\n\t.set D_00315880, m1_img + 2185344");
__asm__(".globl D_003158A0\n\t.set D_003158A0, m1_img + 2185376");
__asm__(".globl D_003158C0\n\t.set D_003158C0, m1_img + 2185408");
__asm__(".globl D_003158E0\n\t.set D_003158E0, m1_img + 2185440");
__asm__(".globl D_00315A00\n\t.set D_00315A00, m1_img + 2185728");
__asm__(".globl D_00315A20\n\t.set D_00315A20, m1_img + 2185760");
__asm__(".globl D_00315AC0\n\t.set D_00315AC0, m1_img + 2185920");
__asm__(".globl D_00315BC0\n\t.set D_00315BC0, m1_img + 2186176");
__asm__(".globl D_00315BE0\n\t.set D_00315BE0, m1_img + 2186208");
__asm__(".globl D_00315C00\n\t.set D_00315C00, m1_img + 2186240");
__asm__(".globl D_00315C20\n\t.set D_00315C20, m1_img + 2186272");
__asm__(".globl D_00315CA0\n\t.set D_00315CA0, m1_img + 2186400");
__asm__(".globl D_00315CC0\n\t.set D_00315CC0, m1_img + 2186432");
__asm__(".globl D_00315D40\n\t.set D_00315D40, m1_img + 2186560");
__asm__(".globl D_00315DC0\n\t.set D_00315DC0, m1_img + 2186688");
__asm__(".globl D_00315F20\n\t.set D_00315F20, m1_img + 2187040");
__asm__(".globl D_00315F40\n\t.set D_00315F40, m1_img + 2187072");
__asm__(".globl g_unk_3161f0\n\t.set g_unk_3161f0, m1_img + 2187760");
__asm__(".globl D_00316240\n\t.set D_00316240, m1_img + 2187840");
__asm__(".globl D_00316260\n\t.set D_00316260, m1_img + 2187872");
__asm__(".globl D_00316280\n\t.set D_00316280, m1_img + 2187904");
__asm__(".globl D_003162A0\n\t.set D_003162A0, m1_img + 2187936");
__asm__(".globl D_003162C0\n\t.set D_003162C0, m1_img + 2187968");
__asm__(".globl D_003164A0\n\t.set D_003164A0, m1_img + 2188448");
__asm__(".globl D_003164C0\n\t.set D_003164C0, m1_img + 2188480");
__asm__(".globl D_003164E0\n\t.set D_003164E0, m1_img + 2188512");
__asm__(".globl D_00316500\n\t.set D_00316500, m1_img + 2188544");
__asm__(".globl D_00316508\n\t.set D_00316508, m1_img + 2188552");
__asm__(".globl D_00316520\n\t.set D_00316520, m1_img + 2188576");
__asm__(".globl D_00316540\n\t.set D_00316540, m1_img + 2188608");
__asm__(".globl D_00316548\n\t.set D_00316548, m1_img + 2188616");
__asm__(".globl D_00316560\n\t.set D_00316560, m1_img + 2188640");
__asm__(".globl D_00316580\n\t.set D_00316580, m1_img + 2188672");
__asm__(".globl D_003165a0\n\t.set D_003165a0, m1_img + 2188704");
__asm__(".globl D_003165c0\n\t.set D_003165c0, m1_img + 2188736");
__asm__(".globl D_003165e0\n\t.set D_003165e0, m1_img + 2188768");
__asm__(".globl D_00316600\n\t.set D_00316600, m1_img + 2188800");
__asm__(".globl D_00316620\n\t.set D_00316620, m1_img + 2188832");
__asm__(".globl D_00316640\n\t.set D_00316640, m1_img + 2188864");
__asm__(".globl D_00316660\n\t.set D_00316660, m1_img + 2188896");
__asm__(".globl D_00316800\n\t.set D_00316800, m1_img + 2189312");
__asm__(".globl D_00316808\n\t.set D_00316808, m1_img + 2189320");
__asm__(".globl D_00316820\n\t.set D_00316820, m1_img + 2189344");
__asm__(".globl D_00316840\n\t.set D_00316840, m1_img + 2189376");
__asm__(".globl D_00316900\n\t.set D_00316900, m1_img + 2189568");
__asm__(".globl D_00316B00\n\t.set D_00316B00, m1_img + 2190080");
__asm__(".globl D_00316BE0\n\t.set D_00316BE0, m1_img + 2190304");
__asm__(".globl D_00317140\n\t.set D_00317140, m1_img + 2191680");
__asm__(".globl D_00317160\n\t.set D_00317160, m1_img + 2191712");
__asm__(".globl D_00317180\n\t.set D_00317180, m1_img + 2191744");
__asm__(".globl D_003172E0\n\t.set D_003172E0, m1_img + 2192096");
__asm__(".globl D_00317400\n\t.set D_00317400, m1_img + 2192384");
__asm__(".globl g_0x317400\n\t.set g_0x317400, m1_img + 2192384");
__asm__(".globl D_00317404\n\t.set D_00317404, m1_img + 2192388");
__asm__(".globl D_00317408\n\t.set D_00317408, m1_img + 2192392");
__asm__(".globl D_0031740C\n\t.set D_0031740C, m1_img + 2192396");
__asm__(".globl D_003174A0\n\t.set D_003174A0, m1_img + 2192544");
__asm__(".globl D_003174E0\n\t.set D_003174E0, m1_img + 2192608");
__asm__(".globl D_00317540\n\t.set D_00317540, m1_img + 2192704");
__asm__(".globl D_00317544\n\t.set D_00317544, m1_img + 2192708");
__asm__(".globl D_00317580\n\t.set D_00317580, m1_img + 2192768");
__asm__(".globl D_00317584\n\t.set D_00317584, m1_img + 2192772");
__asm__(".globl D_003176B0\n\t.set D_003176B0, m1_img + 2193072");
__asm__(".globl D_003176B4\n\t.set D_003176B4, m1_img + 2193076");
__asm__(".globl D_003176C0\n\t.set D_003176C0, m1_img + 2193088");
__asm__(".globl D_0031F6C0\n\t.set D_0031F6C0, m1_img + 2225856");
__asm__(".globl D_00327708\n\t.set D_00327708, m1_img + 2258696");
__asm__(".globl D_00327740\n\t.set D_00327740, m1_img + 2258752");
__asm__(".globl D_00327984\n\t.set D_00327984, m1_img + 2259332");
__asm__(".globl D_00327988\n\t.set D_00327988, m1_img + 2259336");
__asm__(".globl D_0032798C\n\t.set D_0032798C, m1_img + 2259340");
__asm__(".globl D_00327990\n\t.set D_00327990, m1_img + 2259344");
__asm__(".globl D_00327AC0\n\t.set D_00327AC0, m1_img + 2259648");
__asm__(".globl D_00327B80\n\t.set D_00327B80, m1_img + 2259840");
__asm__(".globl unk_327CA0\n\t.set unk_327CA0, m1_img + 2260128");
__asm__(".globl D_00327D48\n\t.set D_00327D48, m1_img + 2260296");
__asm__(".globl D_00327D4C\n\t.set D_00327D4C, m1_img + 2260300");
__asm__(".globl D_00327D54\n\t.set D_00327D54, m1_img + 2260308");
__asm__(".globl D_00327D58\n\t.set D_00327D58, m1_img + 2260312");
__asm__(".globl D_00327D5C\n\t.set D_00327D5C, m1_img + 2260316");
__asm__(".globl g_0x327D5C\n\t.set g_0x327D5C, m1_img + 2260316");
__asm__(".globl D_00328510\n\t.set D_00328510, m1_img + 2262288");
__asm__(".globl D_00328514\n\t.set D_00328514, m1_img + 2262292");
__asm__(".globl D_00328518\n\t.set D_00328518, m1_img + 2262296");
__asm__(".globl D_0032851C\n\t.set D_0032851C, m1_img + 2262300");
__asm__(".globl D_00328520\n\t.set D_00328520, m1_img + 2262304");
__asm__(".globl D_00328524\n\t.set D_00328524, m1_img + 2262308");
__asm__(".globl D_0032852C\n\t.set D_0032852C, m1_img + 2262316");
__asm__(".globl D_00328558\n\t.set D_00328558, m1_img + 2262360");
__asm__(".globl D_00328580\n\t.set D_00328580, m1_img + 2262400");
__asm__(".globl D_003285A8\n\t.set D_003285A8, m1_img + 2262440");
__asm__(".globl D_00328648\n\t.set D_00328648, m1_img + 2262600");
__asm__(".globl D_00328668\n\t.set D_00328668, m1_img + 2262632");
__asm__(".globl D_00328670\n\t.set D_00328670, m1_img + 2262640");
__asm__(".globl D_00328671\n\t.set D_00328671, m1_img + 2262641");
__asm__(".globl D_00328672\n\t.set D_00328672, m1_img + 2262642");
__asm__(".globl D_00328673\n\t.set D_00328673, m1_img + 2262643");
__asm__(".globl D_00328676\n\t.set D_00328676, m1_img + 2262646");
__asm__(".globl D_00328730\n\t.set D_00328730, m1_img + 2262832");
__asm__(".globl D_00328774\n\t.set D_00328774, m1_img + 2262900");
__asm__(".globl D_003287B4\n\t.set D_003287B4, m1_img + 2262964");
__asm__(".globl D_003287F4\n\t.set D_003287F4, m1_img + 2263028");
__asm__(".globl D_00328A40\n\t.set D_00328A40, m1_img + 2263616");
__asm__(".globl g_unk328A48\n\t.set g_unk328A48, m1_img + 2263624");
__asm__(".globl g_unk3290CC\n\t.set g_unk3290CC, m1_img + 2265292");
__asm__(".globl g_unk329754\n\t.set g_unk329754, m1_img + 2266964");
__asm__(".globl D_00329758\n\t.set D_00329758, m1_img + 2266968");
__asm__(".globl g_unk329758\n\t.set g_unk329758, m1_img + 2266968");
__asm__(".globl D_0032975C\n\t.set D_0032975C, m1_img + 2266972");
__asm__(".globl D_00329760\n\t.set D_00329760, m1_img + 2266976");
__asm__(".globl D_00329770\n\t.set D_00329770, m1_img + 2266992");
__asm__(".globl D_0032A620\n\t.set D_0032A620, m1_img + 2270752");
__asm__(".globl D_0032ECB0\n\t.set D_0032ECB0, m1_img + 2288816");
__asm__(".globl D_00330760\n\t.set D_00330760, m1_img + 2295648");
__asm__(".globl D_0033076E\n\t.set D_0033076E, m1_img + 2295662");
__asm__(".globl g_unk_330780\n\t.set g_unk_330780, m1_img + 2295680");
__asm__(".globl D_00330810\n\t.set D_00330810, m1_img + 2295824");
__asm__(".globl D_00330A68\n\t.set D_00330A68, m1_img + 2296424");
__asm__(".globl D_00330A6C\n\t.set D_00330A6C, m1_img + 2296428");
__asm__(".globl D_00330A70\n\t.set D_00330A70, m1_img + 2296432");
__asm__(".globl D_00331920\n\t.set D_00331920, m1_img + 2300192");
__asm__(".globl unk_331920\n\t.set unk_331920, m1_img + 2300192");
__asm__(".globl D_00331924\n\t.set D_00331924, m1_img + 2300196");
__asm__(".globl D_00331928\n\t.set D_00331928, m1_img + 2300200");
__asm__(".globl D_0033192C\n\t.set D_0033192C, m1_img + 2300204");
__asm__(".globl D_00331930\n\t.set D_00331930, m1_img + 2300208");
__asm__(".globl D_00331934\n\t.set D_00331934, m1_img + 2300212");
__asm__(".globl D_0033193C\n\t.set D_0033193C, m1_img + 2300220");
__asm__(".globl D_00331940\n\t.set D_00331940, m1_img + 2300224");
__asm__(".globl D_00331950\n\t.set D_00331950, m1_img + 2300240");
__asm__(".globl D_00331D20\n\t.set D_00331D20, m1_img + 2301216");
__asm__(".globl D_00331E50\n\t.set D_00331E50, m1_img + 2301520");
__asm__(".globl D_00331ED0\n\t.set D_00331ED0, m1_img + 2301648");
__asm__(".globl D_00332AC0\n\t.set D_00332AC0, m1_img + 2304704");
__asm__(".globl D_00332AC4\n\t.set D_00332AC4, m1_img + 2304708");
__asm__(".globl D_00332AC8\n\t.set D_00332AC8, m1_img + 2304712");
__asm__(".globl D_00332ACC\n\t.set D_00332ACC, m1_img + 2304716");
__asm__(".globl D_00332AD0\n\t.set D_00332AD0, m1_img + 2304720");
__asm__(".globl D_00332AD4\n\t.set D_00332AD4, m1_img + 2304724");
__asm__(".globl D_00332AD8\n\t.set D_00332AD8, m1_img + 2304728");
__asm__(".globl D_00332ADC\n\t.set D_00332ADC, m1_img + 2304732");
__asm__(".globl D_00332AE0\n\t.set D_00332AE0, m1_img + 2304736");
__asm__(".globl D_00332AE4\n\t.set D_00332AE4, m1_img + 2304740");
__asm__(".globl D_00332AE8\n\t.set D_00332AE8, m1_img + 2304744");
__asm__(".globl D_00332B00\n\t.set D_00332B00, m1_img + 2304768");
__asm__(".globl D_00332B04\n\t.set D_00332B04, m1_img + 2304772");
__asm__(".globl D_00332B0C\n\t.set D_00332B0C, m1_img + 2304780");
__asm__(".globl D_00332B80\n\t.set D_00332B80, m1_img + 2304896");
__asm__(".globl D_00332C40\n\t.set D_00332C40, m1_img + 2305088");
__asm__(".globl D_00332C44\n\t.set D_00332C44, m1_img + 2305092");
__asm__(".globl D_00332C48\n\t.set D_00332C48, m1_img + 2305096");
__asm__(".globl D_00332C4C\n\t.set D_00332C4C, m1_img + 2305100");
__asm__(".globl D_00332C50\n\t.set D_00332C50, m1_img + 2305104");
__asm__(".globl D_00332EC0\n\t.set D_00332EC0, m1_img + 2305728");
__asm__(".globl D_00332F60\n\t.set D_00332F60, m1_img + 2305888");
__asm__(".globl g_unk_33305c\n\t.set g_unk_33305c, m1_img + 2306140");
__asm__(".globl D_00333140\n\t.set D_00333140, m1_img + 2306368");
__asm__(".globl D_00333190\n\t.set D_00333190, m1_img + 2306448");
__asm__(".globl D_00333194\n\t.set D_00333194, m1_img + 2306452");
__asm__(".globl D_00333198\n\t.set D_00333198, m1_img + 2306456");
__asm__(".globl g_0x3331C8\n\t.set g_0x3331C8, m1_img + 2306504");
__asm__(".globl g_0x3331CC\n\t.set g_0x3331CC, m1_img + 2306508");
__asm__(".globl D_003331D0\n\t.set D_003331D0, m1_img + 2306512");
__asm__(".globl D_00333260\n\t.set D_00333260, m1_img + 2306656");
__asm__(".globl D_0033349C\n\t.set D_0033349C, m1_img + 2307228");
__asm__(".globl D_003334A0\n\t.set D_003334A0, m1_img + 2307232");
__asm__(".globl D_00333540\n\t.set D_00333540, m1_img + 2307392");
__asm__(".globl g_0x339750\n\t.set g_0x339750, m1_img + 2332496");
#endif
