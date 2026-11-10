/*
 * rw_glue.h — frontera entre el código decompilado de AirBlade y librw.
 *
 * Camino B: RenderWare NO se decompila. Las funciones RenderWare que el juego
 * llamaba (RwEngineStart, RpClumpRender, etc.) se declaran aquí como stubs y se
 * implementan en rw_glue.cpp traduciendo a la API `rw::` de librw
 * (https://github.com/aap/librw, submódulo en extern/librw).
 *
 * El trabajo de reversing que SÍ queda es reconstruir la INTERFAZ: qué
 * estructuras le pasaba AirBlade a RenderWare y en qué orden. Eso sale del
 * decomp del código propio, no de reimplementar el motor.
 */
#ifndef AIRBLADE_RW_GLUE_H
#define AIRBLADE_RW_GLUE_H

#ifdef PORT

#ifdef __cplusplus
extern "C" {
#endif

/* Tipos opacos del lado del juego; su layout real se reconstruye al decompilar
 * las estructuras que AirBlade comparte con RenderWare. De momento punteros. */
typedef void RwEngineOpaque;
typedef void RpClumpOpaque;
typedef void RpWorldOpaque;

/* Ciclo de vida del motor (mapea a rw::Engine en librw). */
int  AbRwEngineStart(void);
void AbRwEngineStop(void);

/* Render de un frame (mapea a los pipelines de librw con backend GL/D3D9). */
void AbRwCameraBeginUpdate(void);
void AbRwCameraEndUpdate(void);
void AbRwClumpRender(RpClumpOpaque *clump);

/* Carga de assets PS2 (.dff/.txd) vía los lectores de formato de librw. */
RpClumpOpaque *AbRwClumpStreamRead(const char *path);

#ifdef __cplusplus
}
#endif

#endif /* PORT */
#endif /* AIRBLADE_RW_GLUE_H */
