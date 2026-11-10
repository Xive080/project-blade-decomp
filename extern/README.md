# Dependencias externas

## librw

Motor RenderWare libre (MIT) que sustituye al RenderWare original en el port.
https://github.com/aap/librw

Añadir como submódulo cuando el repo tenga remoto:

```
git submodule add https://github.com/aap/librw extern/librw
```

Qué cubre y qué no (relevante para AirBlade):
- Formatos: PS2 / D3D8 / D3D9 / Xbox `.dff` y `.txd`.
- `.bsp` **no soportado** — si AirBlade usa BSP para escenarios, habrá que parchear.
- Algunos `.dff` PS2 pre-instanciados **no soportados**.
- Render: OpenGL (2.1+/ES2) y D3D9. El render PS2 nativo solo es de prueba.
- API propia namespace `rw::` (no es la API Rp/Rw original) → de ahí el pegamento
  en `port/rw/`.
