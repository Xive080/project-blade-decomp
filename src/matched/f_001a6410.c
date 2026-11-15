struct Anim { char pad[8]; float b; float c; float d; int en; char pad2[112]; float t; float e; float f; int state; };
struct Own { char pad[2]; char fl; };
extern int off;
int f(struct Own *a, float dt) {
    struct Anim *o = *(struct Anim **)((int)a + off);
    float t;
    if (o == 0 || o->state == 5) return 0;
    t = o->t + dt;
    o->t = t;
    if (o->en != 0) o->c = t + o->d;
    if (t < o->b) {
        if (o->state != 1) { a->fl = 0; o->state = 1; }
    } else if (!(t <= o->c + o->d)) {
        if (o->state != 5) { a->fl = 0; o->state = 5; }
    } else {
        if (o->state == 0 || o->state == 1) {
            a->fl = 4;
            o->state = 2;
            o->e = t - o->b;
            {
                float m = o->c - o->b;
                o->f = (o->d < m) ? o->d : m;
            }
        } else {
            o->e = o->e + dt;
        }
        if (!(t <= o->c)) o->state = 4;
        while (o->e > o->d) {
            o->e -= o->d;
            if (!(t + o->d <= o->c)) o->f = o->c - t;
            if (o->state == 2) o->state = 3;
        }
    }
    return 1;
}
