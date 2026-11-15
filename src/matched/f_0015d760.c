typedef float f32;
typedef int s32;
struct A { f32 x, y, z, w; f32 ux, uy, uz, uw; f32 nx, ny, nz; };
struct B { f32 x, y, z; };
extern void func_001c73c0(struct A *, struct A *);

s32 func(struct A *a, struct B *b, struct B *c) {
    if (a == 0 || b == 0) return 0;
    a->nx = b->x;
    a->ny = b->y;
    a->nz = b->z;
    if (c != 0) {
        a->ux = c->x;
        a->uy = c->y;
        a->uz = c->z;
    } else if (a->nx != 0.0f || a->nz != 0.0f) {
        a->ux = 0.0f;
        a->uy = 1.0f;
        a->uz = 0.0f;
    } else {
        a->ux = 0.0f;
        a->uy = 0.0f;
        a->uz = 1.0f;
    }
    a->x = a->uy * a->nz - a->uz * a->ny;
    a->y = a->uz * a->nx - a->ux * a->nz;
    a->z = a->ux * a->ny - a->uy * a->nx;
    a->ux = a->ny * a->z - a->nz * a->y;
    a->uy = a->nz * a->x - a->nx * a->z;
    a->uz = a->nx * a->y - a->ny * a->x;
    func_001c73c0(a, a);
    return 1;
}
