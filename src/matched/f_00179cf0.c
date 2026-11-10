extern f32 tab[];
f32 func(int p){ return tab[(p&0xc)>>2]; }
